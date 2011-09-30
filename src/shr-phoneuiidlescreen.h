/*
 * Generated by gdbus-codegen 2.30.0. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __SHR_PHONEUIIDLESCREEN_H__
#define __SHR_PHONEUIIDLESCREEN_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.shr.phoneui.IdleScreen */

#define TYPE_PHONEUI_IDLE_SCREEN (phoneui_idle_screen_get_type ())
#define PHONEUI_IDLE_SCREEN(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEUI_IDLE_SCREEN, PhoneuiIdleScreen))
#define IS_PHONEUI_IDLE_SCREEN(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEUI_IDLE_SCREEN))
#define PHONEUI_IDLE_SCREEN_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_PHONEUI_IDLE_SCREEN, PhoneuiIdleScreenIface))

struct _PhoneuiIdleScreen;
typedef struct _PhoneuiIdleScreen PhoneuiIdleScreen;
typedef struct _PhoneuiIdleScreenIface PhoneuiIdleScreenIface;

struct _PhoneuiIdleScreenIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_activate_screensaver) (
    PhoneuiIdleScreen *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_deactivate_screensaver) (
    PhoneuiIdleScreen *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_display) (
    PhoneuiIdleScreen *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_hide) (
    PhoneuiIdleScreen *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_toggle) (
    PhoneuiIdleScreen *object,
    GDBusMethodInvocation *invocation);

};

GType phoneui_idle_screen_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *phoneui_idle_screen_interface_info (void);
guint phoneui_idle_screen_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void phoneui_idle_screen_complete_display (
    PhoneuiIdleScreen *object,
    GDBusMethodInvocation *invocation);

void phoneui_idle_screen_complete_hide (
    PhoneuiIdleScreen *object,
    GDBusMethodInvocation *invocation);

void phoneui_idle_screen_complete_toggle (
    PhoneuiIdleScreen *object,
    GDBusMethodInvocation *invocation);

void phoneui_idle_screen_complete_activate_screensaver (
    PhoneuiIdleScreen *object,
    GDBusMethodInvocation *invocation);

void phoneui_idle_screen_complete_deactivate_screensaver (
    PhoneuiIdleScreen *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void phoneui_idle_screen_call_display (
    PhoneuiIdleScreen *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phoneui_idle_screen_call_display_finish (
    PhoneuiIdleScreen *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phoneui_idle_screen_call_display_sync (
    PhoneuiIdleScreen *proxy,
    GCancellable *cancellable,
    GError **error);

void phoneui_idle_screen_call_hide (
    PhoneuiIdleScreen *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phoneui_idle_screen_call_hide_finish (
    PhoneuiIdleScreen *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phoneui_idle_screen_call_hide_sync (
    PhoneuiIdleScreen *proxy,
    GCancellable *cancellable,
    GError **error);

void phoneui_idle_screen_call_toggle (
    PhoneuiIdleScreen *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phoneui_idle_screen_call_toggle_finish (
    PhoneuiIdleScreen *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phoneui_idle_screen_call_toggle_sync (
    PhoneuiIdleScreen *proxy,
    GCancellable *cancellable,
    GError **error);

void phoneui_idle_screen_call_activate_screensaver (
    PhoneuiIdleScreen *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phoneui_idle_screen_call_activate_screensaver_finish (
    PhoneuiIdleScreen *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phoneui_idle_screen_call_activate_screensaver_sync (
    PhoneuiIdleScreen *proxy,
    GCancellable *cancellable,
    GError **error);

void phoneui_idle_screen_call_deactivate_screensaver (
    PhoneuiIdleScreen *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean phoneui_idle_screen_call_deactivate_screensaver_finish (
    PhoneuiIdleScreen *proxy,
    GAsyncResult *res,
    GError **error);

gboolean phoneui_idle_screen_call_deactivate_screensaver_sync (
    PhoneuiIdleScreen *proxy,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define TYPE_PHONEUI_IDLE_SCREEN_PROXY (phoneui_idle_screen_proxy_get_type ())
#define PHONEUI_IDLE_SCREEN_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEUI_IDLE_SCREEN_PROXY, PhoneuiIdleScreenProxy))
#define PHONEUI_IDLE_SCREEN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_PHONEUI_IDLE_SCREEN_PROXY, PhoneuiIdleScreenProxyClass))
#define PHONEUI_IDLE_SCREEN_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_PHONEUI_IDLE_SCREEN_PROXY, PhoneuiIdleScreenProxyClass))
#define IS_PHONEUI_IDLE_SCREEN_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEUI_IDLE_SCREEN_PROXY))
#define IS_PHONEUI_IDLE_SCREEN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_PHONEUI_IDLE_SCREEN_PROXY))

typedef struct _PhoneuiIdleScreenProxy PhoneuiIdleScreenProxy;
typedef struct _PhoneuiIdleScreenProxyClass PhoneuiIdleScreenProxyClass;
typedef struct _PhoneuiIdleScreenProxyPrivate PhoneuiIdleScreenProxyPrivate;

struct _PhoneuiIdleScreenProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  PhoneuiIdleScreenProxyPrivate *priv;
};

struct _PhoneuiIdleScreenProxyClass
{
  GDBusProxyClass parent_class;
};

GType phoneui_idle_screen_proxy_get_type (void) G_GNUC_CONST;

void phoneui_idle_screen_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
PhoneuiIdleScreen *phoneui_idle_screen_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
PhoneuiIdleScreen *phoneui_idle_screen_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void phoneui_idle_screen_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
PhoneuiIdleScreen *phoneui_idle_screen_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
PhoneuiIdleScreen *phoneui_idle_screen_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_PHONEUI_IDLE_SCREEN_SKELETON (phoneui_idle_screen_skeleton_get_type ())
#define PHONEUI_IDLE_SCREEN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEUI_IDLE_SCREEN_SKELETON, PhoneuiIdleScreenSkeleton))
#define PHONEUI_IDLE_SCREEN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_PHONEUI_IDLE_SCREEN_SKELETON, PhoneuiIdleScreenSkeletonClass))
#define PHONEUI_IDLE_SCREEN_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_PHONEUI_IDLE_SCREEN_SKELETON, PhoneuiIdleScreenSkeletonClass))
#define IS_PHONEUI_IDLE_SCREEN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEUI_IDLE_SCREEN_SKELETON))
#define IS_PHONEUI_IDLE_SCREEN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_PHONEUI_IDLE_SCREEN_SKELETON))

typedef struct _PhoneuiIdleScreenSkeleton PhoneuiIdleScreenSkeleton;
typedef struct _PhoneuiIdleScreenSkeletonClass PhoneuiIdleScreenSkeletonClass;
typedef struct _PhoneuiIdleScreenSkeletonPrivate PhoneuiIdleScreenSkeletonPrivate;

struct _PhoneuiIdleScreenSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  PhoneuiIdleScreenSkeletonPrivate *priv;
};

struct _PhoneuiIdleScreenSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType phoneui_idle_screen_skeleton_get_type (void) G_GNUC_CONST;

PhoneuiIdleScreen *phoneui_idle_screen_skeleton_new (void);


G_END_DECLS

#endif /* __SHR_PHONEUIIDLESCREEN_H__ */
