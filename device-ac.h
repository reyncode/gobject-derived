#pragma once

#include <glib-object.h>
#include "device.h"

G_BEGIN_DECLS

#define DEMO_TYPE_DEVICE_AC demo_device_ac_get_type ()
G_DECLARE_FINAL_TYPE (DemoDeviceAc, demo_device_ac, DEMO, DEVICE_AC, DemoDevice)

DemoDeviceAc *demo_device_ac_new (void);

void demo_device_ac_foo (DemoDeviceAc *self);
void demo_device_ac_bar (DemoDeviceAc *self);

G_END_DECLS
