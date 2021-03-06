/*
 * Generated by gdbus-codegen 2.30.0. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __SHR_PHONEFSOUSAGE_H__
#define __SHR_PHONEFSOUSAGE_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.shr.phonefso.Usage */

#define TYPE_PHONEFSO_USAGE (phonefso_usage_get_type ())
#define PHONEFSO_USAGE(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEFSO_USAGE, PhonefsoUsage))
#define IS_PHONEFSO_USAGE(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEFSO_USAGE))
#define PHONEFSO_USAGE_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_PHONEFSO_USAGE, PhonefsoUsageIface))

struct _PhonefsoUsage;
typedef struct _PhonefsoUsage PhonefsoUsage;
typedef struct _PhonefsoUsageIface PhonefsoUsageIface;

struct _PhonefsoUsageIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_get_default_brightness) (
    PhonefsoUsage *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_offline_mode) (
    PhonefsoUsage *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_set_default_brightness) (
    PhonefsoUsage *object,
    GDBusMethodInvocation *invocation,
    gint arg_brightness);

  gboolean (*handle_set_offline_mode) (
    PhonefsoUsage *object,
    GDBusMethodInvocation *invocation,
    gboolean arg_state);

  gboolean (*handle_set_pdp_credentials) (
    PhonefsoUsage *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_apn,
    const gchar *arg_user,
    const gchar *arg_password);

  gboolean (*handle_set_pin) (
    PhonefsoUsage *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_pin);

};

GType phonefso_usage_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *phonefso_usage_interface_info (void);
guint phonefso_usage_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
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



/* D-Bus method calls: */
void phonefso_usage_call_set_offline_mode (
    PhonefsoUsage *proxy,
    gboolean arg_state,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phonefso_usage_call_set_offline_mode_finish (
    PhonefsoUsage *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phonefso_usage_call_set_offline_mode_sync (
    PhonefsoUsage *proxy,
    gboolean arg_state,
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
    gint arg_brightness,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phonefso_usage_call_set_default_brightness_finish (
    PhonefsoUsage *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phonefso_usage_call_set_default_brightness_sync (
    PhonefsoUsage *proxy,
    gint arg_brightness,
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
    const gchar *arg_apn,
    const gchar *arg_user,
    const gchar *arg_password,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phonefso_usage_call_set_pdp_credentials_finish (
    PhonefsoUsage *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phonefso_usage_call_set_pdp_credentials_sync (
    PhonefsoUsage *proxy,
    const gchar *arg_apn,
    const gchar *arg_user,
    const gchar *arg_password,
    GCancellable *cancellable,
    GError **error);

void phonefso_usage_call_set_pin (
    PhonefsoUsage *proxy,
    const gchar *arg_pin,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phonefso_usage_call_set_pin_finish (
    PhonefsoUsage *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phonefso_usage_call_set_pin_sync (
    PhonefsoUsage *proxy,
    const gchar *arg_pin,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define TYPE_PHONEFSO_USAGE_PROXY (phonefso_usage_proxy_get_type ())
#define PHONEFSO_USAGE_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEFSO_USAGE_PROXY, PhonefsoUsageProxy))
#define PHONEFSO_USAGE_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_PHONEFSO_USAGE_PROXY, PhonefsoUsageProxyClass))
#define PHONEFSO_USAGE_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_PHONEFSO_USAGE_PROXY, PhonefsoUsageProxyClass))
#define IS_PHONEFSO_USAGE_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEFSO_USAGE_PROXY))
#define IS_PHONEFSO_USAGE_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_PHONEFSO_USAGE_PROXY))

typedef struct _PhonefsoUsageProxy PhonefsoUsageProxy;
typedef struct _PhonefsoUsageProxyClass PhonefsoUsageProxyClass;
typedef struct _PhonefsoUsageProxyPrivate PhonefsoUsageProxyPrivate;

struct _PhonefsoUsageProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  PhonefsoUsageProxyPrivate *priv;
};

struct _PhonefsoUsageProxyClass
{
  GDBusProxyClass parent_class;
};

GType phonefso_usage_proxy_get_type (void) G_GNUC_CONST;

void phonefso_usage_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
PhonefsoUsage *phonefso_usage_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
PhonefsoUsage *phonefso_usage_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void phonefso_usage_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
PhonefsoUsage *phonefso_usage_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
PhonefsoUsage *phonefso_usage_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_PHONEFSO_USAGE_SKELETON (phonefso_usage_skeleton_get_type ())
#define PHONEFSO_USAGE_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEFSO_USAGE_SKELETON, PhonefsoUsageSkeleton))
#define PHONEFSO_USAGE_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_PHONEFSO_USAGE_SKELETON, PhonefsoUsageSkeletonClass))
#define PHONEFSO_USAGE_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_PHONEFSO_USAGE_SKELETON, PhonefsoUsageSkeletonClass))
#define IS_PHONEFSO_USAGE_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEFSO_USAGE_SKELETON))
#define IS_PHONEFSO_USAGE_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_PHONEFSO_USAGE_SKELETON))

typedef struct _PhonefsoUsageSkeleton PhonefsoUsageSkeleton;
typedef struct _PhonefsoUsageSkeletonClass PhonefsoUsageSkeletonClass;
typedef struct _PhonefsoUsageSkeletonPrivate PhonefsoUsageSkeletonPrivate;

struct _PhonefsoUsageSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  PhonefsoUsageSkeletonPrivate *priv;
};

struct _PhonefsoUsageSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType phonefso_usage_skeleton_get_type (void) G_GNUC_CONST;

PhonefsoUsage *phonefso_usage_skeleton_new (void);


G_END_DECLS

#endif /* __SHR_PHONEFSOUSAGE_H__ */
