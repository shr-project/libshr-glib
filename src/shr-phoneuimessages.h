/*
 * Generated by gdbus-codegen 2.30.0. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __SHR_PHONEUIMESSAGES_H__
#define __SHR_PHONEUIMESSAGES_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.shr.phoneui.Messages */

#define TYPE_PHONEUI_MESSAGES (phoneui_messages_get_type ())
#define PHONEUI_MESSAGES(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEUI_MESSAGES, PhoneuiMessages))
#define IS_PHONEUI_MESSAGES(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEUI_MESSAGES))
#define PHONEUI_MESSAGES_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_PHONEUI_MESSAGES, PhoneuiMessagesIface))

struct _PhoneuiMessages;
typedef struct _PhoneuiMessages PhoneuiMessages;
typedef struct _PhoneuiMessagesIface PhoneuiMessagesIface;

struct _PhoneuiMessagesIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_create_message) (
    PhoneuiMessages *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_values);

  gboolean (*handle_display_list) (
    PhoneuiMessages *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_filter);

  gboolean (*handle_display_message) (
    PhoneuiMessages *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_path);

};

GType phoneui_messages_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *phoneui_messages_interface_info (void);
guint phoneui_messages_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void phoneui_messages_complete_display_list (
    PhoneuiMessages *object,
    GDBusMethodInvocation *invocation);

void phoneui_messages_complete_display_message (
    PhoneuiMessages *object,
    GDBusMethodInvocation *invocation);

void phoneui_messages_complete_create_message (
    PhoneuiMessages *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void phoneui_messages_call_display_list (
    PhoneuiMessages *proxy,
    GVariant *arg_filter,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phoneui_messages_call_display_list_finish (
    PhoneuiMessages *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phoneui_messages_call_display_list_sync (
    PhoneuiMessages *proxy,
    GVariant *arg_filter,
    GCancellable *cancellable,
    GError **error);

void phoneui_messages_call_display_message (
    PhoneuiMessages *proxy,
    const gchar *arg_path,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phoneui_messages_call_display_message_finish (
    PhoneuiMessages *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phoneui_messages_call_display_message_sync (
    PhoneuiMessages *proxy,
    const gchar *arg_path,
    GCancellable *cancellable,
    GError **error);

void phoneui_messages_call_create_message (
    PhoneuiMessages *proxy,
    GVariant *arg_values,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phoneui_messages_call_create_message_finish (
    PhoneuiMessages *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phoneui_messages_call_create_message_sync (
    PhoneuiMessages *proxy,
    GVariant *arg_values,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define TYPE_PHONEUI_MESSAGES_PROXY (phoneui_messages_proxy_get_type ())
#define PHONEUI_MESSAGES_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEUI_MESSAGES_PROXY, PhoneuiMessagesProxy))
#define PHONEUI_MESSAGES_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_PHONEUI_MESSAGES_PROXY, PhoneuiMessagesProxyClass))
#define PHONEUI_MESSAGES_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_PHONEUI_MESSAGES_PROXY, PhoneuiMessagesProxyClass))
#define IS_PHONEUI_MESSAGES_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEUI_MESSAGES_PROXY))
#define IS_PHONEUI_MESSAGES_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_PHONEUI_MESSAGES_PROXY))

typedef struct _PhoneuiMessagesProxy PhoneuiMessagesProxy;
typedef struct _PhoneuiMessagesProxyClass PhoneuiMessagesProxyClass;
typedef struct _PhoneuiMessagesProxyPrivate PhoneuiMessagesProxyPrivate;

struct _PhoneuiMessagesProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  PhoneuiMessagesProxyPrivate *priv;
};

struct _PhoneuiMessagesProxyClass
{
  GDBusProxyClass parent_class;
};

GType phoneui_messages_proxy_get_type (void) G_GNUC_CONST;

void phoneui_messages_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
PhoneuiMessages *phoneui_messages_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
PhoneuiMessages *phoneui_messages_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void phoneui_messages_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
PhoneuiMessages *phoneui_messages_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
PhoneuiMessages *phoneui_messages_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_PHONEUI_MESSAGES_SKELETON (phoneui_messages_skeleton_get_type ())
#define PHONEUI_MESSAGES_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEUI_MESSAGES_SKELETON, PhoneuiMessagesSkeleton))
#define PHONEUI_MESSAGES_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_PHONEUI_MESSAGES_SKELETON, PhoneuiMessagesSkeletonClass))
#define PHONEUI_MESSAGES_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_PHONEUI_MESSAGES_SKELETON, PhoneuiMessagesSkeletonClass))
#define IS_PHONEUI_MESSAGES_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEUI_MESSAGES_SKELETON))
#define IS_PHONEUI_MESSAGES_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_PHONEUI_MESSAGES_SKELETON))

typedef struct _PhoneuiMessagesSkeleton PhoneuiMessagesSkeleton;
typedef struct _PhoneuiMessagesSkeletonClass PhoneuiMessagesSkeletonClass;
typedef struct _PhoneuiMessagesSkeletonPrivate PhoneuiMessagesSkeletonPrivate;

struct _PhoneuiMessagesSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  PhoneuiMessagesSkeletonPrivate *priv;
};

struct _PhoneuiMessagesSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType phoneui_messages_skeleton_get_type (void) G_GNUC_CONST;

PhoneuiMessages *phoneui_messages_skeleton_new (void);


G_END_DECLS

#endif /* __SHR_PHONEUIMESSAGES_H__ */
