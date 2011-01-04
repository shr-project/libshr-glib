/* File:       shr-phoneuicontacts.h
 *
 * GType name: PhoneuiContacts
 * D-Bus name: org.shr.phoneui.Contacts
 *
 * Generated by GDBus Binding Tool 0.1. DO NOT EDIT.
 */

#ifndef __SHR_PHONEUI_CONTACTS_H__
#define __SHR_PHONEUI_CONTACTS_H__

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

#define TYPE_PHONEUI_CONTACTS         (phoneui_contacts_get_gtype ())
#define PHONEUI_CONTACTS(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PHONEUI_CONTACTS, PhoneuiContacts))
#define IS_PHONEUI_CONTACTS(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PHONEUI_CONTACTS))
#define PHONEUI_CONTACTS_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE((o), TYPE_PHONEUI_CONTACTS, PhoneuiContactsIface))

/**
 * PhoneuiContacts:
 *
 * Opaque type representing a proxy or an exported object.
 */
typedef struct _PhoneuiContacts PhoneuiContacts; /* Dummy typedef */
/**
 * PhoneuiContactsIface:
 * @parent_iface: The parent interface.
 * @handle_display_list: Handler for the #PhoneuiContacts::handle-display-list signal.
 * @handle_display_contact: Handler for the #PhoneuiContacts::handle-display-contact signal.
 * @handle_create_contact: Handler for the #PhoneuiContacts::handle-create-contact signal.
 * @handle_edit_contact: Handler for the #PhoneuiContacts::handle-edit-contact signal.
 *
 * Virtual table.
 */
typedef struct _PhoneuiContactsIface PhoneuiContactsIface;

GType phoneui_contacts_get_gtype (void) G_GNUC_CONST;
GDBusInterfaceInfo *phoneui_contacts_interface_info (void);

/**
 * GET_PHONEUI_CONTACTS:
 * @object_proxy: A #GDBusObjectProxy.
 *
 * Convenience macro to get a #PhoneuiContacts interface proxy from @object_proxy.
 *
 * Returns: A #GDBusProxy object implementing the #PhoneuiContacts interface or %NULL if @object_proxy
 * does not implement the <literal>org.shr.phoneui.Contacts</literal> D-Bus interface.
 * The returned reference must be released with g_object_unref().
 */
#define GET_PHONEUI_CONTACTS(object_proxy) (g_dbus_object_proxy_lookup_with_typecheck (object_proxy, "org.shr.phoneui.Contacts", TYPE_PHONEUI_CONTACTS))

/**
 * PEEK_PHONEUI_CONTACTS:
 * @object_proxy: A #GDBusObjectProxy.
 *
 * Like GET_PHONEUI_CONTACTS() but doesn't increase the reference count on the returned object.
 *
 * <note><para>This macro is not safe to use outside the thread where the #GDBusProxyManager for @object_proxy was constructed in.</para></note>
 *
 * Returns: A #GDBusProxy object implementing the #PhoneuiContacts interface or %NULL if @object_proxy
 * does not implement the <literal>org.shr.phoneui.Contacts</literal> D-Bus interface.
 * Do not free the returned object, it is owned by @object_proxy..
 */
#define PEEK_PHONEUI_CONTACTS(object_proxy) (g_dbus_object_proxy_peek_with_typecheck (object_proxy, "org.shr.phoneui.Contacts", TYPE_PHONEUI_CONTACTS))


/* ---------------------------------------------------------------------- */

typedef struct _PhoneuiContactsProxy PhoneuiContactsProxy;
typedef struct _PhoneuiContactsProxyClass PhoneuiContactsProxyClass;

/**
 * PhoneuiContactsProxyPrivate:
 *
 * The #PhoneuiContactsProxyPrivate structure contains only private data.
 */
typedef struct _PhoneuiContactsProxyPrivate PhoneuiContactsProxyPrivate;

/**
 * PhoneuiContactsProxy:
 *
 * The #PhoneuiContactsProxy structure contains only private data and
 * should only be accessed using the provided API.
 */
struct _PhoneuiContactsProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  PhoneuiContactsProxyPrivate *priv;
};

/**
 * PhoneuiContactsProxyClass:
 *
 * Class structure for #PhoneuiContactsProxy.
 */
struct _PhoneuiContactsProxyClass
{
  /*< private >*/
  GDBusProxyClass parent_class;
};

#define TYPE_PHONEUI_CONTACTS_PROXY (phoneui_contacts_proxy_get_type ())
GType phoneui_contacts_proxy_get_type (void) G_GNUC_CONST;

void phoneui_contacts_proxy_new (GDBusConnection     *connection,
                   GDBusProxyFlags      flags,
                   const gchar         *name,
                   const gchar         *object_path,
                   GCancellable        *cancellable,
                   GAsyncReadyCallback  callback,
                   gpointer             user_data);
PhoneuiContacts *phoneui_contacts_proxy_new_finish (GAsyncResult  *res,
                        GError       **error);
PhoneuiContacts *phoneui_contacts_proxy_new_sync (GDBusConnection     *connection,
                       GDBusProxyFlags      flags,
                       const gchar         *name,
                       const gchar         *object_path,
                       GCancellable        *cancellable,
                       GError             **error);

void phoneui_contacts_proxy_new_for_bus (GBusType             bus_type,
                           GDBusProxyFlags      flags,
                           const gchar         *name,
                           const gchar         *object_path,
                           GCancellable        *cancellable,
                           GAsyncReadyCallback  callback,
                           gpointer             user_data);
PhoneuiContacts *phoneui_contacts_proxy_new_for_bus_finish (GAsyncResult  *res,
                                 GError       **error);
PhoneuiContacts *phoneui_contacts_proxy_new_for_bus_sync (GBusType             bus_type,
                               GDBusProxyFlags      flags,
                               const gchar         *name,
                               const gchar         *object_path,
                               GCancellable        *cancellable,
                               GError             **error);

/* ---------------------------------------------------------------------- */

typedef struct _PhoneuiContactsStub PhoneuiContactsStub;
typedef struct _PhoneuiContactsStubClass PhoneuiContactsStubClass;

/**
 * PhoneuiContactsStubPrivate:
 *
 * The #PhoneuiContactsStubPrivate structure contains only private data.
 */
typedef struct _PhoneuiContactsStubPrivate PhoneuiContactsStubPrivate;

/**
 * PhoneuiContactsStub:
 *
 * The #PhoneuiContactsStub structure contains only private data and
 * should only be accessed using the provided API.
 */
struct _PhoneuiContactsStub
{
  /*< private >*/
  GObject parent_instance;
  PhoneuiContactsStubPrivate *priv;
};

/**
 * PhoneuiContactsStubClass:
 *
 * Class structure for #PhoneuiContactsStub.
 */
struct _PhoneuiContactsStubClass
{
  /*< private >*/
  GObjectClass parent_class;
};

#define TYPE_PHONEUI_CONTACTS_STUB (phoneui_contacts_stub_get_type ())
GType phoneui_contacts_stub_get_type (void) G_GNUC_CONST;

PhoneuiContacts *phoneui_contacts_stub_new (void);


struct _PhoneuiContactsIface
{
  GTypeInterface parent_iface;

  /* Signal handlers for handling D-Bus method calls: */
  gboolean (*handle_display_list) (
        PhoneuiContacts *object,
        GDBusMethodInvocation *invocation,
        GVariant *filter);
  gboolean (*handle_display_contact) (
        PhoneuiContacts *object,
        GDBusMethodInvocation *invocation,
        const gchar *path);
  gboolean (*handle_create_contact) (
        PhoneuiContacts *object,
        GDBusMethodInvocation *invocation,
        GVariant *values);
  gboolean (*handle_edit_contact) (
        PhoneuiContacts *object,
        GDBusMethodInvocation *invocation,
        const gchar *path);
};

/* C Bindings for properties */


/* D-Bus Methods */
void phoneui_contacts_call_display_list (
        PhoneuiContacts *proxy,
        GVariant *filter,
        GCancellable *cancellable,
        GAsyncReadyCallback callback,
        gpointer user_data);

gboolean phoneui_contacts_call_display_list_finish (
        PhoneuiContacts *proxy,
        GAsyncResult *res,
        GError **error);

gboolean phoneui_contacts_call_display_list_sync (
        PhoneuiContacts *proxy,
        GVariant *filter,
        GCancellable *cancellable,
        GError **error);


void phoneui_contacts_call_display_contact (
        PhoneuiContacts *proxy,
        const gchar *path,
        GCancellable *cancellable,
        GAsyncReadyCallback callback,
        gpointer user_data);

gboolean phoneui_contacts_call_display_contact_finish (
        PhoneuiContacts *proxy,
        GAsyncResult *res,
        GError **error);

gboolean phoneui_contacts_call_display_contact_sync (
        PhoneuiContacts *proxy,
        const gchar *path,
        GCancellable *cancellable,
        GError **error);


void phoneui_contacts_call_create_contact (
        PhoneuiContacts *proxy,
        GVariant *values,
        GCancellable *cancellable,
        GAsyncReadyCallback callback,
        gpointer user_data);

gboolean phoneui_contacts_call_create_contact_finish (
        PhoneuiContacts *proxy,
        gchar **out_path,
        GAsyncResult *res,
        GError **error);

gboolean phoneui_contacts_call_create_contact_sync (
        PhoneuiContacts *proxy,
        GVariant *values,
        gchar **out_path,
        GCancellable *cancellable,
        GError **error);


void phoneui_contacts_call_edit_contact (
        PhoneuiContacts *proxy,
        const gchar *path,
        GCancellable *cancellable,
        GAsyncReadyCallback callback,
        gpointer user_data);

gboolean phoneui_contacts_call_edit_contact_finish (
        PhoneuiContacts *proxy,
        GAsyncResult *res,
        GError **error);

gboolean phoneui_contacts_call_edit_contact_sync (
        PhoneuiContacts *proxy,
        const gchar *path,
        GCancellable *cancellable,
        GError **error);



/* D-Bus Methods Completion Helpers */
void phoneui_contacts_complete_display_list (
        PhoneuiContacts *object,
        GDBusMethodInvocation *invocation);


void phoneui_contacts_complete_display_contact (
        PhoneuiContacts *object,
        GDBusMethodInvocation *invocation);


void phoneui_contacts_complete_create_contact (
        PhoneuiContacts *object,
        GDBusMethodInvocation *invocation,
        const gchar *path);


void phoneui_contacts_complete_edit_contact (
        PhoneuiContacts *object,
        GDBusMethodInvocation *invocation);



/* D-Bus Signal Emission Helpers */

G_END_DECLS

#endif /* __SHR_PHONEUI_CONTACTS_H__ */