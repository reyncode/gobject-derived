#pragma once

#include <glib-object.h>

G_BEGIN_DECLS

#define DEMO_TYPE_DEVICE demo_device_get_type ()
G_DECLARE_DERIVABLE_TYPE (DemoDevice, demo_device, DEMO, DEVICE, GObject)

struct _DemoDeviceClass {
  GObjectClass parent_class;

  void (* foo) (DemoDevice *self, guint val);
  void (* bar) (DemoDevice *self, guint val);
};

DemoDevice *demo_device_new (void);

G_END_DECLS
