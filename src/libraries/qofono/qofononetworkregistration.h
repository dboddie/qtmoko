/*
 * This file was generated by qofonodbusxml2cpp version 0.7
 * Command line was: qofonodbusxml2cpp -p qofononetworkregistration ofono.xml org.ofono.NetworkRegistration
 *
 * qofonodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QOFONONETWORKREGISTRATION_H
#define QOFONONETWORKREGISTRATION_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include <qofonodbusabstractinterface.h>
#include "qofonoobject.h"
#include "qofonoobjectlist.h"

#if defined(QOFONO_LIBRARY)
    #define QOFONO_EXPORT Q_DECL_EXPORT
#else
    #define QOFONO_EXPORT Q_DECL_IMPORT
#endif

/*
 * Proxy class for interface org.ofono.NetworkRegistration
 */
class QOFONO_EXPORT OrgOfonoNetworkRegistrationInterface: public QOFonoDbusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.ofono.NetworkRegistration"; }

public:
    OrgOfonoNetworkRegistrationInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgOfonoNetworkRegistrationInterface();

public Q_SLOTS: // METHODS
    inline QOFonoDBusPendingReply<QOFonoObjectList> GetOperators()
    {
        QList<QVariant> argumentList;
        return ofonoAsyncCall(QLatin1String("GetOperators"), argumentList);
    }

    inline QOFonoDBusPendingReply<QVariantMap> GetProperties()
    {
        QList<QVariant> argumentList;
        return ofonoAsyncCall(QLatin1String("GetProperties"), argumentList);
    }

    inline QOFonoDBusPendingReply<> Register()
    {
        QList<QVariant> argumentList;
        return ofonoAsyncCall(QLatin1String("Register"), argumentList);
    }

    inline QOFonoDBusPendingReply<QOFonoObjectList> Scan()
    {
        QList<QVariant> argumentList;
        return ofonoAsyncCall(QLatin1String("Scan"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void PropertyChanged(const QString &in0, const QDBusVariant &in1);
};

namespace org {
  namespace ofono {
    typedef ::OrgOfonoNetworkRegistrationInterface NetworkRegistration;
  }
}
#endif
