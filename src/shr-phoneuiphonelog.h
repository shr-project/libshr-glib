/*
 * Generated by gdbus-codegen 2.30.0. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __SHR_PHONEUIPHONELOG_H__
#define __SHR_PHONEUIPHONELOG_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.shr.phoneui.PhoneLog */

#define TYPE_PHONEUI_PHONE_LOG (phoneui_phone_log_get_type ())
#define PHONEUI_PHONE_LOG(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEUI_PHONE_LOG, PhoneuiPhoneLog))
#define IS_PHONEUI_PHONE_LOG(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEUI_PHONE_LOG))
#define PHONEUI_PHONE_LOG_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_PHONEUI_PHONE_LOG, PhoneuiPhoneLogIface))

struct _PhoneuiPhoneLog;
typedef struct _PhoneuiPhoneLog PhoneuiPhoneLog;
typedef struct _PhoneuiPhoneLogIface PhoneuiPhoneLogIface;

struct _PhoneuiPhoneLogIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_display_list) (
    PhoneuiPhoneLog *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_filter);

};

GType phoneui_phone_log_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *phoneui_phone_log_interface_info (void);
guint phoneui_phone_log_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void phoneui_phone_log_complete_display_list (
    PhoneuiPhoneLog *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void phoneui_phone_log_call_display_list (
    PhoneuiPhoneLog *proxy,
    GVariant *arg_filter,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phoneui_phone_log_call_display_list_finish (
    PhoneuiPhoneLog *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phoneui_phone_log_call_display_list_sync (
    PhoneuiPhoneLog *proxy,
    GVariant *arg_filter,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define TYPE_PHONEUI_PHONE_LOG_PROXY (phoneui_phone_log_proxy_get_type ())
#define PHONEUI_PHONE_LOG_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEUI_PHONE_LOG_PROXY, PhoneuiPhoneLogProxy))
#define PHONEUI_PHONE_LOG_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_PHONEUI_PHONE_LOG_PROXY, PhoneuiPhoneLogProxyClass))
#define PHONEUI_PHONE_LOG_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_PHONEUI_PHONE_LOG_PROXY, PhoneuiPhoneLogProxyClass))
#define IS_PHONEUI_PHONE_LOG_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEUI_PHONE_LOG_PROXY))
#define IS_PHONEUI_PHONE_LOG_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_PHONEUI_PHONE_LOG_PROXY))

typedef struct _PhoneuiPhoneLogProxy PhoneuiPhoneLogProxy;
typedef struct _PhoneuiPhoneLogProxyClass PhoneuiPhoneLogProxyClass;
typedef struct _PhoneuiPhoneLogProxyPrivate PhoneuiPhoneLogProxyPrivate;

struct _PhoneuiPhoneLogProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  PhoneuiPhoneLogProxyPrivate *priv;
};

struct _PhoneuiPhoneLogProxyClass
{
  GDBusProxyClass parent_class;
};

GType phoneui_phone_log_proxy_get_type (void) G_GNUC_CONST;

void phoneui_phone_log_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
PhoneuiPhoneLog *phoneui_phone_log_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
PhoneuiPhoneLog *phoneui_phone_log_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void phoneui_phone_log_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
PhoneuiPhoneLog *phoneui_phone_log_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
PhoneuiPhoneLog *phoneui_phone_log_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_PHONEUI_PHONE_LOG_SKELETON (phoneui_phone_log_skeleton_get_type ())
#define PHONEUI_PHONE_LOG_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEUI_PHONE_LOG_SKELETON, PhoneuiPhoneLogSkeleton))
#define PHONEUI_PHONE_LOG_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_PHONEUI_PHONE_LOG_SKELETON, PhoneuiPhoneLogSkeletonClass))
#define PHONEUI_PHONE_LOG_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_PHONEUI_PHONE_LOG_SKELETON, PhoneuiPhoneLogSkeletonClass))
#define IS_PHONEUI_PHONE_LOG_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEUI_PHONE_LOG_SKELETON))
#define IS_PHONEUI_PHONE_LOG_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_PHONEUI_PHONE_LOG_SKELETON))

typedef struct _PhoneuiPhoneLogSkeleton PhoneuiPhoneLogSkeleton;
typedef struct _PhoneuiPhoneLogSkeletonClass PhoneuiPhoneLogSkeletonClass;
typedef struct _PhoneuiPhoneLogSkeletonPrivate PhoneuiPhoneLogSkeletonPrivate;

struct _PhoneuiPhoneLogSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  PhoneuiPhoneLogSkeletonPrivate *priv;
};

struct _PhoneuiPhoneLogSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType phoneui_phone_log_skeleton_get_type (void) G_GNUC_CONST;

PhoneuiPhoneLog *phoneui_phone_log_skeleton_new (void);


G_END_DECLS

#endif /* __SHR_PHONEUIPHONELOG_H__ */
