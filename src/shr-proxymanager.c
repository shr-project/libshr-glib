/* File:       shr-proxymanager.c
 *
 * Generated by GDBus Binding Tool 0.1. DO NOT EDIT.
 */

#include "shr-bindings.h"

/**
 * SECTION:shr-proxymanager
 * @title: ProxyManager
 * @short_description: Proxy Manager
 * @include: gio/gio.h
 *
 * A #GDBusProxyManager subclass with a #GDBusProxyTypeFunc that
 * maps to proxy types in these generated bindings.
 */

/* Currently unused */
struct _ProxyManagerPrivate
{
};

G_DEFINE_TYPE (ProxyManager, proxy_manager, G_TYPE_DBUS_PROXY_MANAGER);

static GObjectConstructParam *
find_construct_property (guint                  n_construct_properties,
                         GObjectConstructParam *construct_properties,
                         const gchar           *name)
{
  guint n;
  for (n = 0; n < n_construct_properties; n++)
    if (g_strcmp0 (g_param_spec_get_name (construct_properties[n].pspec), name) == 0)
      return &construct_properties[n];
  return NULL;
}

static GObject *
proxy_manager_constructor (
    GType                  type,
    guint                  n_construct_properties,
    GObjectConstructParam *construct_properties)
{
  GObjectConstructParam *cp;
  cp = find_construct_property (n_construct_properties, construct_properties, "get-proxy-type-func");
  if (g_value_get_pointer (cp->value) == NULL)
    g_value_set_pointer (cp->value, proxy_manager_get_type_func ());
  return G_OBJECT_CLASS (proxy_manager_parent_class)->constructor (
    type,
    n_construct_properties,
    construct_properties);
}

static void
proxy_manager_init (ProxyManager *manager)
{
}

static void
proxy_manager_class_init (ProxyManagerClass *klass)
{
  GObjectClass *gobject_class;

  gobject_class = G_OBJECT_CLASS (klass);
  gobject_class->constructor = proxy_manager_constructor;
}

static GType
proxy_manager_type_func (
    GDBusProxyManager *manager,
    const gchar *object_path,
    const gchar *interface_name,
    gpointer user_data)
{
  GType ret;

  ret = G_TYPE_DBUS_PROXY;
  if (g_strcmp0 (interface_name, "org.shr.phonefso.Usage") == 0)
    ret = TYPE_PHONEFSO_USAGE_PROXY;
  else if (g_strcmp0 (interface_name, "org.shr.phoneui.CallManagement") == 0)
    ret = TYPE_PHONEUI_CALL_MANAGEMENT_PROXY;
  else if (g_strcmp0 (interface_name, "org.shr.phoneui.Contacts") == 0)
    ret = TYPE_PHONEUI_CONTACTS_PROXY;
  else if (g_strcmp0 (interface_name, "org.shr.phoneui.Dialer") == 0)
    ret = TYPE_PHONEUI_DIALER_PROXY;
  else if (g_strcmp0 (interface_name, "org.shr.phoneui.IdleScreen") == 0)
    ret = TYPE_PHONEUI_IDLE_SCREEN_PROXY;
  else if (g_strcmp0 (interface_name, "org.shr.phoneui.Messages") == 0)
    ret = TYPE_PHONEUI_MESSAGES_PROXY;
  else if (g_strcmp0 (interface_name, "org.shr.phoneui.Notification") == 0)
    ret = TYPE_PHONEUI_NOTIFICATION_PROXY;
  else if (g_strcmp0 (interface_name, "org.shr.phoneui.PhoneLog") == 0)
    ret = TYPE_PHONEUI_PHONE_LOG_PROXY;
  else if (g_strcmp0 (interface_name, "org.shr.phoneui.Settings") == 0)
    ret = TYPE_PHONEUI_SETTINGS_PROXY;

  return ret;
}

/**
 * proxy_manager_get_type_func:
 *
 * Gets a function pointer that can be used for mapping interface names
 * to #GDBusProxy<!-- -->-derived types.
 *
 * Returns: A #GDBusProxyTypeFunc.
 */
GDBusProxyTypeFunc
proxy_manager_get_type_func (void)
{
  return proxy_manager_type_func;
}

/**
 * proxy_manager_new_sync:
 * @connection: A #GDBusConnection.
 * @flags: Zero or more flags from the #GDBusProxyManagerFlags enumeration.
 * @name: The owner of the control object (unique or well-known name).
 * @object_path: The object path of the control object.
 * @cancellable: A #GCancellable or %NULL
 * @error: Return location for error or %NULL.
 *
 * Like g_dbus_proxy_manager_new_sync() but without needing to specify
 * a #GDBusProxyTypeFunc.

 * This is a synchronous failable constructor - the calling thread is
 * blocked until a reply is received. See proxy_manager_new()
 * for the asynchronous version.
 *
 * Returns: A #GDBusProxyManager object or %NULL if @error is
 * set. Free with g_object_unref().
 */
GDBusProxyManager *
proxy_manager_new_sync (
    GDBusConnection        *connection,
    GDBusProxyManagerFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error)
{
  return g_dbus_proxy_manager_new_sync (connection, flags, name, object_path,  proxy_manager_type_func, NULL, cancellable, error);
}

/**
 * proxy_manager_new:
 * @connection: A #GDBusConnection.
 * @flags: Zero or more flags from the #GDBusProxyManagerFlags enumeration.
 * @name: The owner of the control object (unique or well-known name).
 * @object_path: The object path of the control object.
 * @cancellable: A #GCancellable or %NULL
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: The data to pass to @callback.
 *
 * Like g_dbus_proxy_manager_new() but without needing to specify a #GDBusProxyTypeFunc.
 *
 * This is an asynchronous failable constructor. When the result is
 * ready, @callback will be invoked in the
 * <link linkend="g-main-context-push-thread-default">thread-default main loop</link>
 * of the thread you are calling this method from. You can
 * then call proxy_manager_new_finish() to get the result. See
 * proxy_manager_new_sync() for the synchronous version.
 */
void
proxy_manager_new (
    GDBusConnection        *connection,
    GDBusProxyManagerFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data)
{
  return g_dbus_proxy_manager_new (connection, flags, name, object_path, proxy_manager_type_func, NULL, cancellable, callback, user_data);
}

/**
 * proxy_manager_new_finish:
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to proxy_manager_new().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with proxy_manager_new().
 *
 * Returns: A #GDBusProxyManager object or %NULL if @error is
 * set. Free with g_object_unref().
 */
GDBusProxyManager *
proxy_manager_new_finish (
    GAsyncResult   *res,
    GError        **error)
{
  return g_dbus_proxy_manager_new_finish (res, error);
}

/**
 * proxy_manager_new_for_bus_sync:
 * @bus_type: A #GBusType.
 * @flags: Zero or more flags from the #GDBusProxyManagerFlags enumeration.
 * @name: The owner of the control object (unique or well-known name).
 * @object_path: The object path of the control object.
 * @cancellable: A #GCancellable or %NULL
 * @error: Return location for error or %NULL.
 *
 * Like proxy_manager_new_sync() but takes a #GBusType instead
 * of a #GDBusConnection.
 *
 * This is a synchronous failable constructor - the calling thread is
 * blocked until a reply is received. See proxy_manager_new_for_bus()
 * for the asynchronous version.
 *
 * Returns: A #GDBusProxyManager object or %NULL if @error is
 * set. Free with g_object_unref().
 */
GDBusProxyManager *
proxy_manager_new_for_bus_sync (
    GBusType                bus_type,
    GDBusProxyManagerFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error)
{
  return g_dbus_proxy_manager_new_for_bus_sync (bus_type, flags, name, object_path,  proxy_manager_type_func, NULL, cancellable, error);
}

/**
 * proxy_manager_new_for_bus:
 * @bus_type: A #GBusType.
 * @flags: Zero or more flags from the #GDBusProxyManagerFlags enumeration.
 * @name: The owner of the control object (unique or well-known name).
 * @object_path: The object path of the control object.
 * @cancellable: A #GCancellable or %NULL
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: The data to pass to @callback.
 *
 * Like proxy_manager_new() but takes a #GBusType instead of a
 * #GDBusConnection.
 *
 * This is an asynchronous failable constructor. When the result is
 * ready, @callback will be invoked in the
 * <link linkend="g-main-context-push-thread-default">thread-default main loop</link>
 * of the thread you are calling this method from. You can
 * then call proxy_manager_new_for_bus_finish() to get the result. See
 * proxy_manager_new_for_bus_sync() for the synchronous version.
 */
void
proxy_manager_new_for_bus (GBusType                bus_type,
    GDBusProxyManagerFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data)
{
  return g_dbus_proxy_manager_new_for_bus (bus_type, flags, name, object_path,  proxy_manager_type_func, NULL, cancellable, callback, user_data);
}

/**
 * proxy_manager_new_for_bus_finish:
 * @res: A #GAsyncResult obtained from the #GAsyncReadyCallback passed to proxy_manager_new_for_bus().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with proxy_manager_new_for_bus().
 *
 * Returns: A #GDBusProxyManager object or %NULL if @error is
 * set. Free with g_object_unref().
 */
GDBusProxyManager *
proxy_manager_new_for_bus_finish (GAsyncResult   *res,
                                     GError        **error)
{
  return g_dbus_proxy_manager_new_for_bus_finish (res, error);
}

