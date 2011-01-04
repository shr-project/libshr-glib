/* File:       shr-phoneuiidlescreen.h
 *
 * GType name: PhoneuiIdleScreen
 * D-Bus name: org.shr.phoneui.IdleScreen
 *
 * Generated by GDBus Binding Tool 0.1. DO NOT EDIT.
 */

#ifndef __SHR_PHONEUI_IDLE_SCREEN_H__
#define __SHR_PHONEUI_IDLE_SCREEN_H__

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

#define TYPE_PHONEUI_IDLE_SCREEN         (phoneui_idle_screen_get_gtype ())
#define PHONEUI_IDLE_SCREEN(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEUI_IDLE_SCREEN, PhoneuiIdleScreen))
#define IS_PHONEUI_IDLE_SCREEN(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEUI_IDLE_SCREEN))
#define PHONEUI_IDLE_SCREEN_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE((o), TYPE_PHONEUI_IDLE_SCREEN, PhoneuiIdleScreenIface))

/**
 * PhoneuiIdleScreen:
 *
 * Opaque type representing a proxy or an exported object.
 */
typedef struct _PhoneuiIdleScreen PhoneuiIdleScreen; /* Dummy typedef */
/**
 * PhoneuiIdleScreenIface:
 * @parent_iface: The parent interface.
 * @handle_display: Handler for the #PhoneuiIdleScreen::handle-display signal.
 * @handle_hide: Handler for the #PhoneuiIdleScreen::handle-hide signal.
 * @handle_toggle: Handler for the #PhoneuiIdleScreen::handle-toggle signal.
 * @handle_activate_screensaver: Handler for the #PhoneuiIdleScreen::handle-activate-screensaver signal.
 * @handle_deactivate_screensaver: Handler for the #PhoneuiIdleScreen::handle-deactivate-screensaver signal.
 *
 * Virtual table.
 */
typedef struct _PhoneuiIdleScreenIface PhoneuiIdleScreenIface;

GType phoneui_idle_screen_get_gtype (void) G_GNUC_CONST;
GDBusInterfaceInfo *phoneui_idle_screen_interface_info (void);

/**
 * GET_PHONEUI_IDLE_SCREEN:
 * @object_proxy: A #GDBusObjectProxy.
 *
 * Convenience macro to get a #PhoneuiIdleScreen interface proxy from @object_proxy.
 *
 * Returns: A #GDBusProxy object implementing the #PhoneuiIdleScreen interface or %NULL if @object_proxy
 * does not implement the <literal>org.shr.phoneui.IdleScreen</literal> D-Bus interface.
 * The returned reference must be released with g_object_unref().
 */
#define GET_PHONEUI_IDLE_SCREEN(object_proxy) (g_dbus_object_proxy_lookup_with_typecheck (object_proxy, "org.shr.phoneui.IdleScreen", TYPE_PHONEUI_IDLE_SCREEN))

/**
 * PEEK_PHONEUI_IDLE_SCREEN:
 * @object_proxy: A #GDBusObjectProxy.
 *
 * Like GET_PHONEUI_IDLE_SCREEN() but doesn't increase the reference count on the returned object.
 *
 * <note><para>This macro is not safe to use outside the thread where the #GDBusProxyManager for @object_proxy was constructed in.</para></note>
 *
 * Returns: A #GDBusProxy object implementing the #PhoneuiIdleScreen interface or %NULL if @object_proxy
 * does not implement the <literal>org.shr.phoneui.IdleScreen</literal> D-Bus interface.
 * Do not free the returned object, it is owned by @object_proxy..
 */
#define PEEK_PHONEUI_IDLE_SCREEN(object_proxy) (g_dbus_object_proxy_peek_with_typecheck (object_proxy, "org.shr.phoneui.IdleScreen", TYPE_PHONEUI_IDLE_SCREEN))


/* ---------------------------------------------------------------------- */

typedef struct _PhoneuiIdleScreenProxy PhoneuiIdleScreenProxy;
typedef struct _PhoneuiIdleScreenProxyClass PhoneuiIdleScreenProxyClass;

/**
 * PhoneuiIdleScreenProxyPrivate:
 *
 * The #PhoneuiIdleScreenProxyPrivate structure contains only private data.
 */
typedef struct _PhoneuiIdleScreenProxyPrivate PhoneuiIdleScreenProxyPrivate;

/**
 * PhoneuiIdleScreenProxy:
 *
 * The #PhoneuiIdleScreenProxy structure contains only private data and
 * should only be accessed using the provided API.
 */
struct _PhoneuiIdleScreenProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  PhoneuiIdleScreenProxyPrivate *priv;
};

/**
 * PhoneuiIdleScreenProxyClass:
 *
 * Class structure for #PhoneuiIdleScreenProxy.
 */
struct _PhoneuiIdleScreenProxyClass
{
  /*< private >*/
  GDBusProxyClass parent_class;
};

#define TYPE_PHONEUI_IDLE_SCREEN_PROXY (phoneui_idle_screen_proxy_get_type ())
GType phoneui_idle_screen_proxy_get_type (void) G_GNUC_CONST;

void phoneui_idle_screen_proxy_new (GDBusConnection     *connection,
                   GDBusProxyFlags      flags,
                   const gchar         *name,
                   const gchar         *object_path,
                   GCancellable        *cancellable,
                   GAsyncReadyCallback  callback,
                   gpointer             user_data);
PhoneuiIdleScreen *phoneui_idle_screen_proxy_new_finish (GAsyncResult  *res,
                        GError       **error);
PhoneuiIdleScreen *phoneui_idle_screen_proxy_new_sync (GDBusConnection     *connection,
                       GDBusProxyFlags      flags,
                       const gchar         *name,
                       const gchar         *object_path,
                       GCancellable        *cancellable,
                       GError             **error);

void phoneui_idle_screen_proxy_new_for_bus (GBusType             bus_type,
                           GDBusProxyFlags      flags,
                           const gchar         *name,
                           const gchar         *object_path,
                           GCancellable        *cancellable,
                           GAsyncReadyCallback  callback,
                           gpointer             user_data);
PhoneuiIdleScreen *phoneui_idle_screen_proxy_new_for_bus_finish (GAsyncResult  *res,
                                 GError       **error);
PhoneuiIdleScreen *phoneui_idle_screen_proxy_new_for_bus_sync (GBusType             bus_type,
                               GDBusProxyFlags      flags,
                               const gchar         *name,
                               const gchar         *object_path,
                               GCancellable        *cancellable,
                               GError             **error);

/* ---------------------------------------------------------------------- */

typedef struct _PhoneuiIdleScreenStub PhoneuiIdleScreenStub;
typedef struct _PhoneuiIdleScreenStubClass PhoneuiIdleScreenStubClass;

/**
 * PhoneuiIdleScreenStubPrivate:
 *
 * The #PhoneuiIdleScreenStubPrivate structure contains only private data.
 */
typedef struct _PhoneuiIdleScreenStubPrivate PhoneuiIdleScreenStubPrivate;

/**
 * PhoneuiIdleScreenStub:
 *
 * The #PhoneuiIdleScreenStub structure contains only private data and
 * should only be accessed using the provided API.
 */
struct _PhoneuiIdleScreenStub
{
  /*< private >*/
  GObject parent_instance;
  PhoneuiIdleScreenStubPrivate *priv;
};

/**
 * PhoneuiIdleScreenStubClass:
 *
 * Class structure for #PhoneuiIdleScreenStub.
 */
struct _PhoneuiIdleScreenStubClass
{
  /*< private >*/
  GObjectClass parent_class;
};

#define TYPE_PHONEUI_IDLE_SCREEN_STUB (phoneui_idle_screen_stub_get_type ())
GType phoneui_idle_screen_stub_get_type (void) G_GNUC_CONST;

PhoneuiIdleScreen *phoneui_idle_screen_stub_new (void);


struct _PhoneuiIdleScreenIface
{
  GTypeInterface parent_iface;

  /* Signal handlers for handling D-Bus method calls: */
  gboolean (*handle_display) (
        PhoneuiIdleScreen *object,
        GDBusMethodInvocation *invocation);
  gboolean (*handle_hide) (
        PhoneuiIdleScreen *object,
        GDBusMethodInvocation *invocation);
  gboolean (*handle_toggle) (
        PhoneuiIdleScreen *object,
        GDBusMethodInvocation *invocation);
  gboolean (*handle_activate_screensaver) (
        PhoneuiIdleScreen *object,
        GDBusMethodInvocation *invocation);
  gboolean (*handle_deactivate_screensaver) (
        PhoneuiIdleScreen *object,
        GDBusMethodInvocation *invocation);
};

/* C Bindings for properties */


/* D-Bus Methods */
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



/* D-Bus Methods Completion Helpers */
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



/* D-Bus Signal Emission Helpers */

G_END_DECLS

#endif /* __SHR_PHONEUI_IDLE_SCREEN_H__ */
