/*
 * Generated by gdbus-codegen 2.29.3. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __SHR_PHONEUINOTIFICATION_H__
#define __SHR_PHONEUINOTIFICATION_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.shr.phoneui.Notification */

#define TYPE_PHONEUI_NOTIFICATION (phoneui_notification_get_type ())
#define PHONEUI_NOTIFICATION(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEUI_NOTIFICATION, PhoneuiNotification))
#define IS_PHONEUI_NOTIFICATION(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEUI_NOTIFICATION))
#define PHONEUI_NOTIFICATION_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_PHONEUI_NOTIFICATION, PhoneuiNotification))

struct _PhoneuiNotification;
typedef struct _PhoneuiNotification PhoneuiNotification;
typedef struct _PhoneuiNotificationIface PhoneuiNotificationIface;

struct _PhoneuiNotificationIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_display_dialog) (
    PhoneuiNotification *object,
    GDBusMethodInvocation *invocation,
    gint dialog);

  gboolean (*handle_display_sim_auth) (
    PhoneuiNotification *object,
    GDBusMethodInvocation *invocation,
    gint status);

  gboolean (*handle_display_ussd) (
    PhoneuiNotification *object,
    GDBusMethodInvocation *invocation,
    gint mode,
    const gchar *message);

  gboolean (*handle_feedback_action) (
    PhoneuiNotification *object,
    GDBusMethodInvocation *invocation,
    const gchar *action,
    const gchar *level);

  gboolean (*handle_hide_sim_auth) (
    PhoneuiNotification *object,
    GDBusMethodInvocation *invocation,
    gint status);

};

GType phoneui_notification_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *phoneui_notification_interface_info (void);


/* D-Bus method call completion functions: */
void phoneui_notification_complete_display_sim_auth (
    PhoneuiNotification *object,
    GDBusMethodInvocation *invocation);

void phoneui_notification_complete_hide_sim_auth (
    PhoneuiNotification *object,
    GDBusMethodInvocation *invocation);

void phoneui_notification_complete_display_ussd (
    PhoneuiNotification *object,
    GDBusMethodInvocation *invocation);

void phoneui_notification_complete_display_dialog (
    PhoneuiNotification *object,
    GDBusMethodInvocation *invocation);

void phoneui_notification_complete_feedback_action (
    PhoneuiNotification *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void phoneui_notification_call_display_sim_auth (
    PhoneuiNotification *proxy,
    gint status,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phoneui_notification_call_display_sim_auth_finish (
    PhoneuiNotification *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phoneui_notification_call_display_sim_auth_sync (
    PhoneuiNotification *proxy,
    gint status,
    GCancellable *cancellable,
    GError **error);

void phoneui_notification_call_hide_sim_auth (
    PhoneuiNotification *proxy,
    gint status,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phoneui_notification_call_hide_sim_auth_finish (
    PhoneuiNotification *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phoneui_notification_call_hide_sim_auth_sync (
    PhoneuiNotification *proxy,
    gint status,
    GCancellable *cancellable,
    GError **error);

void phoneui_notification_call_display_ussd (
    PhoneuiNotification *proxy,
    gint mode,
    const gchar *message,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phoneui_notification_call_display_ussd_finish (
    PhoneuiNotification *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phoneui_notification_call_display_ussd_sync (
    PhoneuiNotification *proxy,
    gint mode,
    const gchar *message,
    GCancellable *cancellable,
    GError **error);

void phoneui_notification_call_display_dialog (
    PhoneuiNotification *proxy,
    gint dialog,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phoneui_notification_call_display_dialog_finish (
    PhoneuiNotification *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phoneui_notification_call_display_dialog_sync (
    PhoneuiNotification *proxy,
    gint dialog,
    GCancellable *cancellable,
    GError **error);

void phoneui_notification_call_feedback_action (
    PhoneuiNotification *proxy,
    const gchar *action,
    const gchar *level,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phoneui_notification_call_feedback_action_finish (
    PhoneuiNotification *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phoneui_notification_call_feedback_action_sync (
    PhoneuiNotification *proxy,
    const gchar *action,
    const gchar *level,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define TYPE_PHONEUI_NOTIFICATION_PROXY (phoneui_notification_proxy_get_type ())
#define PHONEUI_NOTIFICATION_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEUI_NOTIFICATION_PROXY, PhoneuiNotificationProxy))
#define PHONEUI_NOTIFICATION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_PHONEUI_NOTIFICATION_PROXY, PhoneuiNotificationProxyClass))
#define PHONEUI_NOTIFICATION_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_PHONEUI_NOTIFICATION_PROXY, PhoneuiNotificationProxyClass))
#define IS_PHONEUI_NOTIFICATION_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEUI_NOTIFICATION_PROXY))
#define IS_PHONEUI_NOTIFICATION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_PHONEUI_NOTIFICATION_PROXY))

typedef struct _PhoneuiNotificationProxy PhoneuiNotificationProxy;
typedef struct _PhoneuiNotificationProxyClass PhoneuiNotificationProxyClass;
typedef struct _PhoneuiNotificationProxyPrivate PhoneuiNotificationProxyPrivate;

struct _PhoneuiNotificationProxy
{
  GDBusProxy parent_instance;
  PhoneuiNotificationProxyPrivate *priv;
};

struct _PhoneuiNotificationProxyClass
{
  GDBusProxyClass parent_class;
};

GType phoneui_notification_proxy_get_type (void) G_GNUC_CONST;

void phoneui_notification_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
PhoneuiNotification *phoneui_notification_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
PhoneuiNotification *phoneui_notification_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void phoneui_notification_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
PhoneuiNotification *phoneui_notification_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
PhoneuiNotification *phoneui_notification_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_PHONEUI_NOTIFICATION_SKELETON (phoneui_notification_skeleton_get_type ())
#define PHONEUI_NOTIFICATION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEUI_NOTIFICATION_SKELETON, PhoneuiNotificationSkeleton))
#define PHONEUI_NOTIFICATION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_PHONEUI_NOTIFICATION_SKELETON, PhoneuiNotificationSkeletonClass))
#define PHONEUI_NOTIFICATION_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_PHONEUI_NOTIFICATION_SKELETON, PhoneuiNotificationSkeletonClass))
#define IS_PHONEUI_NOTIFICATION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEUI_NOTIFICATION_SKELETON))
#define IS_PHONEUI_NOTIFICATION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_PHONEUI_NOTIFICATION_SKELETON))

typedef struct _PhoneuiNotificationSkeleton PhoneuiNotificationSkeleton;
typedef struct _PhoneuiNotificationSkeletonClass PhoneuiNotificationSkeletonClass;
typedef struct _PhoneuiNotificationSkeletonPrivate PhoneuiNotificationSkeletonPrivate;

struct _PhoneuiNotificationSkeleton
{
  GDBusInterfaceSkeleton parent_instance;
  PhoneuiNotificationSkeletonPrivate *priv;
};

struct _PhoneuiNotificationSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType phoneui_notification_skeleton_get_type (void) G_GNUC_CONST;

PhoneuiNotification *phoneui_notification_skeleton_new (void);


G_END_DECLS

#endif /* __SHR_PHONEUINOTIFICATION_H__ */
