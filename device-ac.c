#include "device-ac.h"

struct _DemoDeviceAc
{
  DemoDevice parent_instance;

  guint foo_id;
  guint bar_id;
};

G_DEFINE_TYPE(DemoDeviceAc, demo_device_ac, DEMO_TYPE_DEVICE)

void
demo_device_ac_foo (DemoDeviceAc *self)
{
  DemoDeviceClass *klass = DEMO_DEVICE_GET_CLASS (self);
  klass->foo (DEMO_DEVICE (self), self->foo_id);
}

void
demo_device_ac_bar (DemoDeviceAc *self)
{
  DemoDeviceClass *klass = DEMO_DEVICE_GET_CLASS (self);
  klass->foo (DEMO_DEVICE (self), self->bar_id);
}

static void
demo_device_ac_dispose (GObject *object)
{
  G_OBJECT_CLASS (demo_device_ac_parent_class)->dispose (object);
}

static void
demo_device_ac_finalize (GObject *object)
{
  G_OBJECT_CLASS (demo_device_ac_parent_class)->finalize (object);
}

static void
demo_device_ac_init (DemoDeviceAc *self)
{
  self->foo_id = 1;
  self->bar_id = 1;
}

static void
demo_device_ac_class_init (DemoDeviceAcClass *klass)
{
  GObjectClass *object_class = G_OBJECT_CLASS (klass);

  // override if needed

  object_class->dispose = demo_device_ac_dispose;
  object_class->finalize = demo_device_ac_finalize;
}

DemoDeviceAc *
demo_device_ac_new ()
{
  return g_object_new (DEMO_TYPE_DEVICE_AC, NULL);
}
