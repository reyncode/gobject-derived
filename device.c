#include "device.h"

typedef struct _DemoDevicePrivate DemoDevicePrivate;
struct _DemoDevicePrivate {
  guint foo_id;
  guint bar_id;
};

G_DEFINE_TYPE_WITH_PRIVATE (DemoDevice, demo_device, G_TYPE_OBJECT)

static void
demo_device_foo (DemoDevice *self, guint val)
{
  g_print ("foo: %d\n", val);
}

static void
demo_device_bar (DemoDevice *self, guint val)
{
  g_print ("bar: %d\n", val);
}

static void
demo_device_dispose (GObject *object)
{
  G_OBJECT_CLASS (demo_device_parent_class)->dispose (object);
}

static void
demo_device_finalize (GObject *object)
{
  G_OBJECT_CLASS (demo_device_parent_class)->finalize (object);
}

static void
demo_device_init (DemoDevice *self)
{
  DemoDevicePrivate *priv;
  priv = demo_device_get_instance_private (self);

  priv->foo_id = 0;
  priv->bar_id = 0;
}

static void
demo_device_class_init (DemoDeviceClass *klass)
{
  GObjectClass *object_class = G_OBJECT_CLASS (klass);

  klass->foo = demo_device_foo;
  klass->bar = demo_device_bar;

  object_class->dispose = demo_device_dispose;
  object_class->finalize = demo_device_finalize;
}

DemoDevice *demo_device_new (void)
{
  return g_object_new (DEMO_TYPE_DEVICE, NULL);
}
