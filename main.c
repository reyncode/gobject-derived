#include "device-ac.h"
#include "device-lt.h"

int main (void)
{
  DemoDeviceAc *device_ac = demo_device_ac_new ();
  DemoDeviceLt *device_lt = demo_device_lt_new ();

  demo_device_ac_foo (device_ac);
  demo_device_ac_bar (device_ac);

  demo_device_lt_foo (device_lt);
  demo_device_lt_bar (device_lt);

  return 0;
}
