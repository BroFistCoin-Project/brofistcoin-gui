/****************************************************************************
** Meta object code from reading C++ file 'JsonRpcClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/JsonRpc/JsonRpcClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JsonRpcClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_JsonRpc__Client_t {
    QByteArrayData data[19];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JsonRpc__Client_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JsonRpc__Client_t qt_meta_stringdata_JsonRpc__Client = {
    {
QT_MOC_LITERAL(0, 0, 15), // "JsonRpc::Client"
QT_MOC_LITERAL(1, 16, 12), // "networkError"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "errorString"
QT_MOC_LITERAL(4, 42, 16), // "jsonParsingError"
QT_MOC_LITERAL(5, 59, 7), // "message"
QT_MOC_LITERAL(6, 67, 17), // "jsonErrorResponse"
QT_MOC_LITERAL(7, 85, 2), // "id"
QT_MOC_LITERAL(8, 88, 20), // "jsonUnknownMessageId"
QT_MOC_LITERAL(9, 109, 10), // "packetSent"
QT_MOC_LITERAL(10, 120, 4), // "data"
QT_MOC_LITERAL(11, 125, 14), // "packetReceived"
QT_MOC_LITERAL(12, 140, 18), // "authRequiredSignal"
QT_MOC_LITERAL(13, 159, 15), // "QAuthenticator*"
QT_MOC_LITERAL(14, 175, 13), // "authenticator"
QT_MOC_LITERAL(15, 189, 13), // "replyFinished"
QT_MOC_LITERAL(16, 203, 14), // "QNetworkReply*"
QT_MOC_LITERAL(17, 218, 5), // "reply"
QT_MOC_LITERAL(18, 224, 22) // "authenticationRequired"

    },
    "JsonRpc::Client\0networkError\0\0errorString\0"
    "jsonParsingError\0message\0jsonErrorResponse\0"
    "id\0jsonUnknownMessageId\0packetSent\0"
    "data\0packetReceived\0authRequiredSignal\0"
    "QAuthenticator*\0authenticator\0"
    "replyFinished\0QNetworkReply*\0reply\0"
    "authenticationRequired"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JsonRpc__Client[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    2,   65,    2, 0x06 /* Public */,
       8,    1,   70,    2, 0x06 /* Public */,
       9,    1,   73,    2, 0x06 /* Public */,
      11,    1,   76,    2, 0x06 /* Public */,
      12,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   82,    2, 0x08 /* Private */,
      18,    2,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    3,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QByteArray,   10,
    QMetaType::Void, QMetaType::QByteArray,   10,
    QMetaType::Void, 0x80000000 | 13,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 13,   17,   14,

       0        // eod
};

void JsonRpc::Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Client *_t = static_cast<Client *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->networkError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->jsonParsingError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->jsonErrorResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->jsonUnknownMessageId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->packetSent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->packetReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 6: _t->authRequiredSignal((*reinterpret_cast< QAuthenticator*(*)>(_a[1]))); break;
        case 7: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->authenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Client::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::networkError)) {
                *result = 0;
            }
        }
        {
            typedef void (Client::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::jsonParsingError)) {
                *result = 1;
            }
        }
        {
            typedef void (Client::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::jsonErrorResponse)) {
                *result = 2;
            }
        }
        {
            typedef void (Client::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::jsonUnknownMessageId)) {
                *result = 3;
            }
        }
        {
            typedef void (Client::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::packetSent)) {
                *result = 4;
            }
        }
        {
            typedef void (Client::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::packetReceived)) {
                *result = 5;
            }
        }
        {
            typedef void (Client::*_t)(QAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::authRequiredSignal)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject JsonRpc::Client::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JsonRpc__Client.data,
      qt_meta_data_JsonRpc__Client,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *JsonRpc::Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JsonRpc::Client::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_JsonRpc__Client.stringdata0))
        return static_cast<void*>(const_cast< Client*>(this));
    return QObject::qt_metacast(_clname);
}

int JsonRpc::Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void JsonRpc::Client::networkError(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JsonRpc::Client::jsonParsingError(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JsonRpc::Client::jsonErrorResponse(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void JsonRpc::Client::jsonUnknownMessageId(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void JsonRpc::Client::packetSent(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void JsonRpc::Client::packetReceived(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void JsonRpc::Client::authRequiredSignal(QAuthenticator * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
struct qt_meta_stringdata_JsonRpc__WalletClient_t {
    QByteArrayData data[19];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JsonRpc__WalletClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JsonRpc__WalletClient_t qt_meta_stringdata_JsonRpc__WalletClient = {
    {
QT_MOC_LITERAL(0, 0, 21), // "JsonRpc::WalletClient"
QT_MOC_LITERAL(1, 22, 14), // "statusReceived"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "RpcApi::Status"
QT_MOC_LITERAL(4, 53, 6), // "result"
QT_MOC_LITERAL(5, 60, 17), // "transfersReceived"
QT_MOC_LITERAL(6, 78, 17), // "RpcApi::Transfers"
QT_MOC_LITERAL(7, 96, 17), // "addressesReceived"
QT_MOC_LITERAL(8, 114, 17), // "RpcApi::Addresses"
QT_MOC_LITERAL(9, 132, 15), // "balanceReceived"
QT_MOC_LITERAL(10, 148, 15), // "RpcApi::Balance"
QT_MOC_LITERAL(11, 164, 15), // "viewKeyReceived"
QT_MOC_LITERAL(12, 180, 15), // "RpcApi::ViewKey"
QT_MOC_LITERAL(13, 196, 15), // "unspentReceived"
QT_MOC_LITERAL(14, 212, 16), // "RpcApi::Unspents"
QT_MOC_LITERAL(15, 229, 16), // "createTxReceived"
QT_MOC_LITERAL(16, 246, 17), // "RpcApi::CreatedTx"
QT_MOC_LITERAL(17, 264, 14), // "sendTxReceived"
QT_MOC_LITERAL(18, 279, 14) // "RpcApi::SentTx"

    },
    "JsonRpc::WalletClient\0statusReceived\0"
    "\0RpcApi::Status\0result\0transfersReceived\0"
    "RpcApi::Transfers\0addressesReceived\0"
    "RpcApi::Addresses\0balanceReceived\0"
    "RpcApi::Balance\0viewKeyReceived\0"
    "RpcApi::ViewKey\0unspentReceived\0"
    "RpcApi::Unspents\0createTxReceived\0"
    "RpcApi::CreatedTx\0sendTxReceived\0"
    "RpcApi::SentTx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JsonRpc__WalletClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       7,    1,   60,    2, 0x06 /* Public */,
       9,    1,   63,    2, 0x06 /* Public */,
      11,    1,   66,    2, 0x06 /* Public */,
      13,    1,   69,    2, 0x06 /* Public */,
      15,    1,   72,    2, 0x06 /* Public */,
      17,    1,   75,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 8,    4,
    QMetaType::Void, 0x80000000 | 10,    4,
    QMetaType::Void, 0x80000000 | 12,    4,
    QMetaType::Void, 0x80000000 | 14,    4,
    QMetaType::Void, 0x80000000 | 16,    4,
    QMetaType::Void, 0x80000000 | 18,    4,

       0        // eod
};

void JsonRpc::WalletClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletClient *_t = static_cast<WalletClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusReceived((*reinterpret_cast< const RpcApi::Status(*)>(_a[1]))); break;
        case 1: _t->transfersReceived((*reinterpret_cast< const RpcApi::Transfers(*)>(_a[1]))); break;
        case 2: _t->addressesReceived((*reinterpret_cast< const RpcApi::Addresses(*)>(_a[1]))); break;
        case 3: _t->balanceReceived((*reinterpret_cast< const RpcApi::Balance(*)>(_a[1]))); break;
        case 4: _t->viewKeyReceived((*reinterpret_cast< const RpcApi::ViewKey(*)>(_a[1]))); break;
        case 5: _t->unspentReceived((*reinterpret_cast< const RpcApi::Unspents(*)>(_a[1]))); break;
        case 6: _t->createTxReceived((*reinterpret_cast< const RpcApi::CreatedTx(*)>(_a[1]))); break;
        case 7: _t->sendTxReceived((*reinterpret_cast< const RpcApi::SentTx(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WalletClient::*_t)(const RpcApi::Status & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletClient::statusReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (WalletClient::*_t)(const RpcApi::Transfers & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletClient::transfersReceived)) {
                *result = 1;
            }
        }
        {
            typedef void (WalletClient::*_t)(const RpcApi::Addresses & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletClient::addressesReceived)) {
                *result = 2;
            }
        }
        {
            typedef void (WalletClient::*_t)(const RpcApi::Balance & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletClient::balanceReceived)) {
                *result = 3;
            }
        }
        {
            typedef void (WalletClient::*_t)(const RpcApi::ViewKey & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletClient::viewKeyReceived)) {
                *result = 4;
            }
        }
        {
            typedef void (WalletClient::*_t)(const RpcApi::Unspents & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletClient::unspentReceived)) {
                *result = 5;
            }
        }
        {
            typedef void (WalletClient::*_t)(const RpcApi::CreatedTx & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletClient::createTxReceived)) {
                *result = 6;
            }
        }
        {
            typedef void (WalletClient::*_t)(const RpcApi::SentTx & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletClient::sendTxReceived)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject JsonRpc::WalletClient::staticMetaObject = {
    { &Client::staticMetaObject, qt_meta_stringdata_JsonRpc__WalletClient.data,
      qt_meta_data_JsonRpc__WalletClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *JsonRpc::WalletClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JsonRpc::WalletClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_JsonRpc__WalletClient.stringdata0))
        return static_cast<void*>(const_cast< WalletClient*>(this));
    return Client::qt_metacast(_clname);
}

int JsonRpc::WalletClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Client::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void JsonRpc::WalletClient::statusReceived(const RpcApi::Status & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< JsonRpc::WalletClient *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JsonRpc::WalletClient::transfersReceived(const RpcApi::Transfers & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< JsonRpc::WalletClient *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JsonRpc::WalletClient::addressesReceived(const RpcApi::Addresses & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< JsonRpc::WalletClient *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void JsonRpc::WalletClient::balanceReceived(const RpcApi::Balance & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< JsonRpc::WalletClient *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void JsonRpc::WalletClient::viewKeyReceived(const RpcApi::ViewKey & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< JsonRpc::WalletClient *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void JsonRpc::WalletClient::unspentReceived(const RpcApi::Unspents & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< JsonRpc::WalletClient *>(this), &staticMetaObject, 5, _a);
}

// SIGNAL 6
void JsonRpc::WalletClient::createTxReceived(const RpcApi::CreatedTx & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< JsonRpc::WalletClient *>(this), &staticMetaObject, 6, _a);
}

// SIGNAL 7
void JsonRpc::WalletClient::sendTxReceived(const RpcApi::SentTx & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< JsonRpc::WalletClient *>(this), &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
