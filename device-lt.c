#include "device-lt.h"

struct _DemoDeviceLt
{
  DemoDevice parent_instance;

  guint foo_id;
  guint bar_id;
};

G_DEFINE_TYPE(DemoDeviceLt, demo_device_lt, DEMO_TYPE_DEVICE)

void
demo_device_lt_foo (DemoDeviceLt *self)
{
  DemoDeviceClass *klass = DEMO_DEVICE_GET_CLASS (self);
  klass->foo (DEMO_DEVICE (self), self->foo_id);
}

void
demo_device_lt_bar (DemoDeviceLt *self)
{
  DemoDeviceClass *klass = DEMO_DEVICE_GET_CLASS (self);
  klass->foo (DEMO_DEVICE (self), self->bar_id);
}

static void
demo_device_lt_dispose (GObject *object)
{
  G_OBJECT_CLASS (demo_device_lt_parent_class)->dispose (object);
}

static void
demo_device_lt_finalize (GObject *object)
{
  G_OBJECT_CLASS (demo_device_lt_parent_class)->finalize (object);
}

static void
demo_device_lt_init (DemoDeviceLt *self)
{
  self->foo_id = 2;
  self->bar_id = 2;
}

static void
demo_device_lt_class_init (DemoDeviceLtClass *klass)
{
  GObjectClass *object_class = G_OBJECT_CLASS (klass);

  // override if needed

  object_class->dispose = demo_device_lt_dispose;
  object_class->finalize = demo_device_lt_finalize;
}

DemoDeviceLt *
demo_device_lt_new ()
{
  return g_object_new (DEMO_TYPE_DEVICE_LT, NULL);
}
