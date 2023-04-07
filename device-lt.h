#pragma once

#include <glib-object.h>
#include "device.h"

G_BEGIN_DECLS

#define DEMO_TYPE_DEVICE_LT demo_device_lt_get_type ()
G_DECLARE_FINAL_TYPE (DemoDeviceLt, demo_device_lt, DEMO, DEVICE_LT, DemoDevice)

DemoDeviceLt *demo_device_lt_new (void);

void demo_device_lt_foo (DemoDeviceLt *self);
void demo_device_lt_bar (DemoDeviceLt *self);

G_END_DECLS
