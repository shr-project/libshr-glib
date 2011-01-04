/* File:       shr-phonefsousage.h
 *
 * GType name: PhonefsoUsage
 * D-Bus name: org.shr.phonefso.Usage
 *
 * Generated by GDBus Binding Tool 0.1. DO NOT EDIT.
 */

#ifndef __SHR_PHONEFSO_USAGE_H__
#define __SHR_PHONEFSO_USAGE_H__

#include <gio/gio.h>
#include <gdbusinterface.h>
#include <gdbusobjectproxy.h>
#include <gdbusproxymanager.h>
#include <gdbusobject.h>
#include <gdbusobjectmanager.h>
#include <gdbuscodegen-enumtypes.h>
#include <string.h>
#include <shr-types.h>

G_BEGIN_DECLS

#define TYPE_PHONEFSO_USAGE         (phonefso_usage_get_gtype ())
#define PHONEFSO_USAGE(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEFSO_USAGE, PhonefsoUsage))
#define IS_PHONEFSO_USAGE(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEFSO_USAGE))
#define PHONEFSO_USAGE_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE((o), TYPE_PHONEFSO_USAGE, PhonefsoUsageIface))

/**
 * PhonefsoUsage:
 *
 * Opaque type representing a proxy or an exported object.
 */
typedef struct _PhonefsoUsage PhonefsoUsage; /* Dummy typedef */
/**
 * PhonefsoUsageIface:
 * @parent_iface: The parent interface.
 * @handle_set_offline_mode: Handler for the #PhonefsoUsage::handle-set-offline-mode signal.
 * @handle_get_offline_mode: Handler for the #PhonefsoUsage::handle-get-offline-mode signal.
 * @handle_set_default_brightness: Handler for the #PhonefsoUsage::handle-set-default-brightness signal.
 * @handle_get_default_brightness: Handler for the #PhonefsoUsage::handle-get-default-brightness signal.
 * @handle_set_pdp_credentials: Handler for the #PhonefsoUsage::handle-set-pdp-credentials signal.
 * @handle_set_pin: Handler for the #PhonefsoUsage::handle-set-pin signal.
 *
 * Virtual table.
 */
typedef struct _PhonefsoUsageIface PhonefsoUsageIface;

GType phonefso_usage_get_gtype (void) G_GNUC_CONST;
GDBusInterfaceInfo *phonefso_usage_interface_info (void);

/**
 * GET_PHONEFSO_USAGE:
 * @object_proxy: A #GDBusObjectProxy.
 *
 * Convenience macro to get a #PhonefsoUsage interface proxy from @object_proxy.
 *
 * Returns: A #GDBusProxy object implementing the #PhonefsoUsage interface or %NULL if @object_proxy
 * does not implement the <literal>org.shr.phonefso.Usage</literal> D-Bus interface.
 * The returned reference must be released with g_object_unref().
 */
#define GET_PHONEFSO_USAGE(object_proxy) (g_dbus_object_proxy_lookup_with_typecheck (object_proxy, "org.shr.phonefso.Usage", TYPE_PHONEFSO_USAGE))

/**
 * PEEK_PHONEFSO_USAGE:
 * @object_proxy: A #GDBusObjectProxy.
 *
 * Like GET_PHONEFSO_USAGE() but doesn't increase the reference count on the returned object.
 *
 * <note><para>This macro is not safe to use outside the thread where the #GDBusProxyManager for @object_proxy was constructed in.</para></note>
 *
 * Returns: A #GDBusProxy object implementing the #PhonefsoUsage interface or %NULL if @object_proxy
 * does not implement the <literal>org.shr.phonefso.Usage</literal> D-Bus interface.
 * Do not free the returned object, it is owned by @object_proxy..
 */
#define PEEK_PHONEFSO_USAGE(object_proxy) (g_dbus_object_proxy_peek_with_typecheck (object_proxy, "org.shr.phonefso.Usage", TYPE_PHONEFSO_USAGE))


/* ---------------------------------------------------------------------- */

typedef struct _PhonefsoUsageProxy PhonefsoUsageProxy;
typedef struct _PhonefsoUsageProxyClass PhonefsoUsageProxyClass;

/**
 * PhonefsoUsageProxyPrivate:
 *
 * The #PhonefsoUsageProxyPrivate structure contains only private data.
 */
typedef struct _PhonefsoUsageProxyPrivate PhonefsoUsageProxyPrivate;

/**
 * PhonefsoUsageProxy:
 *
 * The #PhonefsoUsageProxy structure contains only private data and
 * should only be accessed using the provided API.
 */
struct _PhonefsoUsageProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  PhonefsoUsageProxyPrivate *priv;
};

/**
 * PhonefsoUsageProxyClass:
 *
 * Class structure for #PhonefsoUsageProxy.
 */
struct _PhonefsoUsageProxyClass
{
  /*< private >*/
  GDBusProxyClass parent_class;
};

#define TYPE_PHONEFSO_USAGE_PROXY (phonefso_usage_proxy_get_type ())
GType phonefso_usage_proxy_get_type (void) G_GNUC_CONST;

void phonefso_usage_proxy_new (GDBusConnection     *connection,
                   GDBusProxyFlags      flags,
                   const gchar         *name,
                   const gchar         *object_path,
                   GCancellable        *cancellable,
                   GAsyncReadyCallback  callback,
                   gpointer             user_data);
PhonefsoUsage *phonefso_usage_proxy_new_finish (GAsyncResult  *res,
                        GError       **error);
PhonefsoUsage *phonefso_usage_proxy_new_sync (GDBusConnection     *connection,
                       GDBusProxyFlags      flags,
                       const gchar         *name,
                       const gchar         *object_path,
                       GCancellable        *cancellable,
                       GError             **error);

void phonefso_usage_proxy_new_for_bus (GBusType             bus_type,
                           GDBusProxyFlags      flags,
                           const gchar         *name,
                           const gchar         *object_path,
                           GCancellable        *cancellable,
                           GAsyncReadyCallback  callback,
                           gpointer             user_data);
PhonefsoUsage *phonefso_usage_proxy_new_for_bus_finish (GAsyncResult  *res,
                                 GError       **error);
PhonefsoUsage *phonefso_usage_proxy_new_for_bus_sync (GBusType             bus_type,
                               GDBusProxyFlags      flags,
                               const gchar         *name,
                               const gchar         *object_path,
                               GCancellable        *cancellable,
                               GError             **error);

/* ---------------------------------------------------------------------- */

typedef struct _PhonefsoUsageStub PhonefsoUsageStub;
typedef struct _PhonefsoUsageStubClass PhonefsoUsageStubClass;

/**
 * PhonefsoUsageStubPrivate:
 *
 * The #PhonefsoUsageStubPrivate structure contains only private data.
 */
typedef struct _PhonefsoUsageStubPrivate PhonefsoUsageStubPrivate;

/**
 * PhonefsoUsageStub:
 *
 * The #PhonefsoUsageStub structure contains only private data and
 * should only be accessed using the provided API.
 */
struct _PhonefsoUsageStub
{
  /*< private >*/
  GObject parent_instance;
  PhonefsoUsageStubPrivate *priv;
};

/**
 * PhonefsoUsageStubClass:
 *
 * Class structure for #PhonefsoUsageStub.
 */
struct _PhonefsoUsageStubClass
{
  /*< private >*/
  GObjectClass parent_class;
};

#define TYPE_PHONEFSO_USAGE_STUB (phonefso_usage_stub_get_type ())
GType phonefso_usage_stub_get_type (void) G_GNUC_CONST;

PhonefsoUsage *phonefso_usage_stub_new (void);


struct _PhonefsoUsageIface
{
  GTypeInterface parent_iface;

  /* Signal handlers for handling D-Bus method calls: */
  gboolean (*handle_set_offline_mode) (
        PhonefsoUsage *object,
        GDBusMethodInvocation *invocation,
        gboolean state);
  gboolean (*handle_get_offline_mode) (
        PhonefsoUsage *object,
        GDBusMethodInvocation *invocation);
  gboolean (*handle_set_default_brightness) (
        PhonefsoUsage *object,
        GDBusMethodInvocation *invocation,
        gint brightness);
  gboolean (*handle_get_default_brightness) (
        PhonefsoUsage *object,
        GDBusMethodInvocation *invocation);
  gboolean (*handle_set_pdp_credentials) (
        PhonefsoUsage *object,
        GDBusMethodInvocation *invocation,
        const gchar *apn,
        const gchar *user,
        const gchar *password);
  gboolean (*handle_set_pin) (
        PhonefsoUsage *object,
        GDBusMethodInvocation *invocation,
        const gchar *pin);
};

/* C Bindings for properties */


/* D-Bus Methods */
void phonefso_usage_call_set_offline_mode (
        PhonefsoUsage *proxy,
        gboolean state,
        GCancellable *cancellable,
        GAsyncReadyCallback callback,
        gpointer user_data);

gboolean phonefso_usage_call_set_offline_mode_finish (
        PhonefsoUsage *proxy,
        GAsyncResult *res,
        GError **error);

gboolean phonefso_usage_call_set_offline_mode_sync (
        PhonefsoUsage *proxy,
        gboolean state,
        GCancellable *cancellable,
        GError **error);


void phonefso_usage_call_get_offline_mode (
        PhonefsoUsage *proxy,
        GCancellable *cancellable,
        GAsyncReadyCallback callback,
        gpointer user_data);

gboolean phonefso_usage_call_get_offline_mode_finish (
        PhonefsoUsage *proxy,
        gboolean *out_state,
        GAsyncResult *res,
        GError **error);

gboolean phonefso_usage_call_get_offline_mode_sync (
        PhonefsoUsage *proxy,
        gboolean *out_state,
        GCancellable *cancellable,
        GError **error);


void phonefso_usage_call_set_default_brightness (
        PhonefsoUsage *proxy,
        gint brightness,
        GCancellable *cancellable,
        GAsyncReadyCallback callback,
        gpointer user_data);

gboolean phonefso_usage_call_set_default_brightness_finish (
        PhonefsoUsage *proxy,
        GAsyncResult *res,
        GError **error);

gboolean phonefso_usage_call_set_default_brightness_sync (
        PhonefsoUsage *proxy,
        gint brightness,
        GCancellable *cancellable,
        GError **error);


void phonefso_usage_call_get_default_brightness (
        PhonefsoUsage *proxy,
        GCancellable *cancellable,
        GAsyncReadyCallback callback,
        gpointer user_data);

gboolean phonefso_usage_call_get_default_brightness_finish (
        PhonefsoUsage *proxy,
        gint *out_brightness,
        GAsyncResult *res,
        GError **error);

gboolean phonefso_usage_call_get_default_brightness_sync (
        PhonefsoUsage *proxy,
        gint *out_brightness,
        GCancellable *cancellable,
        GError **error);


void phonefso_usage_call_set_pdp_credentials (
        PhonefsoUsage *proxy,
        const gchar *apn,
        const gchar *user,
        const gchar *password,
        GCancellable *cancellable,
        GAsyncReadyCallback callback,
        gpointer user_data);

gboolean phonefso_usage_call_set_pdp_credentials_finish (
        PhonefsoUsage *proxy,
        GAsyncResult *res,
        GError **error);

gboolean phonefso_usage_call_set_pdp_credentials_sync (
        PhonefsoUsage *proxy,
        const gchar *apn,
        const gchar *user,
        const gchar *password,
        GCancellable *cancellable,
        GError **error);


void phonefso_usage_call_set_pin (
        PhonefsoUsage *proxy,
        const gchar *pin,
        GCancellable *cancellable,
        GAsyncReadyCallback callback,
        gpointer user_data);

gboolean phonefso_usage_call_set_pin_finish (
        PhonefsoUsage *proxy,
        GAsyncResult *res,
        GError **error);

gboolean phonefso_usage_call_set_pin_sync (
        PhonefsoUsage *proxy,
        const gchar *pin,
        GCancellable *cancellable,
        GError **error);



/* D-Bus Methods Completion Helpers */
void phonefso_usage_complete_set_offline_mode (
        PhonefsoUsage *object,
        GDBusMethodInvocation *invocation);


void phonefso_usage_complete_get_offline_mode (
        PhonefsoUsage *object,
        GDBusMethodInvocation *invocation,
        gboolean state);


void phonefso_usage_complete_set_default_brightness (
        PhonefsoUsage *object,
        GDBusMethodInvocation *invocation);


void phonefso_usage_complete_get_default_brightness (
        PhonefsoUsage *object,
        GDBusMethodInvocation *invocation,
        gint brightness);


void phonefso_usage_complete_set_pdp_credentials (
        PhonefsoUsage *object,
        GDBusMethodInvocation *invocation);


void phonefso_usage_complete_set_pin (
        PhonefsoUsage *object,
        GDBusMethodInvocation *invocation);



/* D-Bus Signal Emission Helpers */

G_END_DECLS

#endif /* __SHR_PHONEFSO_USAGE_H__ */
