/*
 * Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
 * Copyright (C) 2021 Universidad de La Laguna.
 *
 * Fancier is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Fancier is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Fancier.  If not, see <https://www.gnu.org/licenses/>.
 */

package es.ull.pcg.hpc.fancier.androidtest.benchmark;


import es.ull.pcg.hpc.rancid.utils.FileUtils;
import es.ull.pcg.hpc.rancid.utils.MathUtils;
import es.ull.pcg.hpc.rancid.utils.ThreadUtils;


public class DeviceUtils {
  static {
    System.loadLibrary("rancid");
  }

  public static native void init();
  public static native void release();

  public static void cpuWarmUp() {
    cpuWarmUpNative();
  }

  public static void ddrWarmUp() {
    ddrWarmUpNative();
  }

  public static void gpuWarmUp() {
    gpuWarmUpNative();
  }

  /**
   * Decrease the temperature of the device, if it is over the maximum temperature set for the
   * device.
   *
   * @param device Description of the device.
   * @see DeviceUtils#decreaseTemperature(DeviceDescriptor)
   */
  public static void controlTemperature(DeviceDescriptor device) {
    Number currentTemp = FileUtils.readNumberFile(device.referenceThermalSensorPath());
    if (MathUtils.compare(currentTemp, device.maxTemperature()) > 0)
      decreaseTemperature(device);
  }

  /**
   * Decrease temperature by suspending the execution of this thread until it is under the base
   * temperature set for the device.
   *
   * @param device Description of the device.
   */
  public static void decreaseTemperature(DeviceDescriptor device) {
    while (MathUtils.compare(FileUtils.readNumberFile(device.referenceThermalSensorPath()),
                             device.baseTemperature()) > 0)
      ThreadUtils.waitMs(1000);
  }

  private static native float cpuWarmUpNative();
  private static native float ddrWarmUpNative();
  private static native void gpuWarmUpNative();
}
