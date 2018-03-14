/****************************************************************************
** Meta object code from reading C++ file 'walletd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/walletd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGUI__RemoteWalletd_t {
    QByteArrayData data[61];
    char stringdata0[916];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__RemoteWalletd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__RemoteWalletd_t qt_meta_stringdata_WalletGUI__RemoteWalletd = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WalletGUI::RemoteWalletd"
QT_MOC_LITERAL(1, 25, 20), // "statusReceivedSignal"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 14), // "RpcApi::Status"
QT_MOC_LITERAL(4, 62, 6), // "status"
QT_MOC_LITERAL(5, 69, 23), // "transfersReceivedSignal"
QT_MOC_LITERAL(6, 93, 17), // "RpcApi::Transfers"
QT_MOC_LITERAL(7, 111, 7), // "history"
QT_MOC_LITERAL(8, 119, 23), // "addressesReceivedSignal"
QT_MOC_LITERAL(9, 143, 17), // "RpcApi::Addresses"
QT_MOC_LITERAL(10, 161, 9), // "addresses"
QT_MOC_LITERAL(11, 171, 21), // "balanceReceivedSignal"
QT_MOC_LITERAL(12, 193, 15), // "RpcApi::Balance"
QT_MOC_LITERAL(13, 209, 7), // "balance"
QT_MOC_LITERAL(14, 217, 21), // "viewKeyReceivedSignal"
QT_MOC_LITERAL(15, 239, 15), // "RpcApi::ViewKey"
QT_MOC_LITERAL(16, 255, 7), // "viewKey"
QT_MOC_LITERAL(17, 263, 22), // "unspentsReceivedSignal"
QT_MOC_LITERAL(18, 286, 16), // "RpcApi::Unspents"
QT_MOC_LITERAL(19, 303, 8), // "unspents"
QT_MOC_LITERAL(20, 312, 22), // "createTxReceivedSignal"
QT_MOC_LITERAL(21, 335, 17), // "RpcApi::CreatedTx"
QT_MOC_LITERAL(22, 353, 2), // "tx"
QT_MOC_LITERAL(23, 356, 20), // "sendTxReceivedSignal"
QT_MOC_LITERAL(24, 377, 14), // "RpcApi::SentTx"
QT_MOC_LITERAL(25, 392, 18), // "networkErrorSignal"
QT_MOC_LITERAL(26, 411, 11), // "errorString"
QT_MOC_LITERAL(27, 423, 22), // "jsonParsingErrorSignal"
QT_MOC_LITERAL(28, 446, 7), // "message"
QT_MOC_LITERAL(29, 454, 23), // "jsonErrorResponseSignal"
QT_MOC_LITERAL(30, 478, 2), // "id"
QT_MOC_LITERAL(31, 481, 26), // "jsonUnknownMessageIdSignal"
QT_MOC_LITERAL(32, 508, 13), // "errorOccurred"
QT_MOC_LITERAL(33, 522, 18), // "stateChangedSignal"
QT_MOC_LITERAL(34, 541, 5), // "State"
QT_MOC_LITERAL(35, 547, 8), // "oldState"
QT_MOC_LITERAL(36, 556, 8), // "newState"
QT_MOC_LITERAL(37, 565, 15), // "connectedSignal"
QT_MOC_LITERAL(38, 581, 10), // "packetSent"
QT_MOC_LITERAL(39, 592, 4), // "data"
QT_MOC_LITERAL(40, 597, 14), // "packetReceived"
QT_MOC_LITERAL(41, 612, 18), // "authRequiredSignal"
QT_MOC_LITERAL(42, 631, 15), // "QAuthenticator*"
QT_MOC_LITERAL(43, 647, 13), // "authenticator"
QT_MOC_LITERAL(44, 661, 14), // "statusReceived"
QT_MOC_LITERAL(45, 676, 17), // "transfersReceived"
QT_MOC_LITERAL(46, 694, 17), // "addressesReceived"
QT_MOC_LITERAL(47, 712, 15), // "balanceReceived"
QT_MOC_LITERAL(48, 728, 15), // "viewKeyReceived"
QT_MOC_LITERAL(49, 744, 16), // "unspentsReceived"
QT_MOC_LITERAL(50, 761, 16), // "createTxReceived"
QT_MOC_LITERAL(51, 778, 14), // "sendTxReceived"
QT_MOC_LITERAL(52, 793, 12), // "networkError"
QT_MOC_LITERAL(53, 806, 16), // "jsonParsingError"
QT_MOC_LITERAL(54, 823, 17), // "jsonErrorResponse"
QT_MOC_LITERAL(55, 841, 20), // "jsonUnknownMessageId"
QT_MOC_LITERAL(56, 862, 7), // "STOPPED"
QT_MOC_LITERAL(57, 870, 10), // "CONNECTING"
QT_MOC_LITERAL(58, 881, 9), // "CONNECTED"
QT_MOC_LITERAL(59, 891, 13), // "NETWORK_ERROR"
QT_MOC_LITERAL(60, 905, 10) // "JSON_ERROR"

    },
    "WalletGUI::RemoteWalletd\0statusReceivedSignal\0"
    "\0RpcApi::Status\0status\0transfersReceivedSignal\0"
    "RpcApi::Transfers\0history\0"
    "addressesReceivedSignal\0RpcApi::Addresses\0"
    "addresses\0balanceReceivedSignal\0"
    "RpcApi::Balance\0balance\0viewKeyReceivedSignal\0"
    "RpcApi::ViewKey\0viewKey\0unspentsReceivedSignal\0"
    "RpcApi::Unspents\0unspents\0"
    "createTxReceivedSignal\0RpcApi::CreatedTx\0"
    "tx\0sendTxReceivedSignal\0RpcApi::SentTx\0"
    "networkErrorSignal\0errorString\0"
    "jsonParsingErrorSignal\0message\0"
    "jsonErrorResponseSignal\0id\0"
    "jsonUnknownMessageIdSignal\0errorOccurred\0"
    "stateChangedSignal\0State\0oldState\0"
    "newState\0connectedSignal\0packetSent\0"
    "data\0packetReceived\0authRequiredSignal\0"
    "QAuthenticator*\0authenticator\0"
    "statusReceived\0transfersReceived\0"
    "addressesReceived\0balanceReceived\0"
    "viewKeyReceived\0unspentsReceived\0"
    "createTxReceived\0sendTxReceived\0"
    "networkError\0jsonParsingError\0"
    "jsonErrorResponse\0jsonUnknownMessageId\0"
    "STOPPED\0CONNECTING\0CONNECTED\0NETWORK_ERROR\0"
    "JSON_ERROR"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__RemoteWalletd[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       1,  256, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  164,    2, 0x06 /* Public */,
       5,    1,  167,    2, 0x06 /* Public */,
       8,    1,  170,    2, 0x06 /* Public */,
      11,    1,  173,    2, 0x06 /* Public */,
      14,    1,  176,    2, 0x06 /* Public */,
      17,    1,  179,    2, 0x06 /* Public */,
      20,    1,  182,    2, 0x06 /* Public */,
      23,    1,  185,    2, 0x06 /* Public */,
      25,    1,  188,    2, 0x06 /* Public */,
      27,    1,  191,    2, 0x06 /* Public */,
      29,    2,  194,    2, 0x06 /* Public */,
      31,    1,  199,    2, 0x06 /* Public */,
      32,    0,  202,    2, 0x06 /* Public */,
      33,    2,  203,    2, 0x06 /* Public */,
      37,    0,  208,    2, 0x06 /* Public */,
      38,    1,  209,    2, 0x06 /* Public */,
      40,    1,  212,    2, 0x06 /* Public */,
      41,    1,  215,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      44,    1,  218,    2, 0x08 /* Private */,
      45,    1,  221,    2, 0x08 /* Private */,
      46,    1,  224,    2, 0x08 /* Private */,
      47,    1,  227,    2, 0x08 /* Private */,
      48,    1,  230,    2, 0x08 /* Private */,
      49,    1,  233,    2, 0x08 /* Private */,
      50,    1,  236,    2, 0x08 /* Private */,
      51,    1,  239,    2, 0x08 /* Private */,
      52,    1,  242,    2, 0x08 /* Private */,
      53,    1,  245,    2, 0x08 /* Private */,
      54,    2,  248,    2, 0x08 /* Private */,
      55,    1,  253,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 24,   22,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   30,   26,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34, 0x80000000 | 34,   35,   36,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   39,
    QMetaType::Void, QMetaType::QByteArray,   39,
    QMetaType::Void, 0x80000000 | 42,   43,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 24,   22,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   30,   26,
    QMetaType::Void, QMetaType::QString,   30,

 // enums: name, flags, count, data
      34, 0x0,    5,  260,

 // enum data: key, value
      56, uint(WalletGUI::RemoteWalletd::State::STOPPED),
      57, uint(WalletGUI::RemoteWalletd::State::CONNECTING),
      58, uint(WalletGUI::RemoteWalletd::State::CONNECTED),
      59, uint(WalletGUI::RemoteWalletd::State::NETWORK_ERROR),
      60, uint(WalletGUI::RemoteWalletd::State::JSON_ERROR),

       0        // eod
};

void WalletGUI::RemoteWalletd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RemoteWalletd *_t = static_cast<RemoteWalletd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusReceivedSignal((*reinterpret_cast< const RpcApi::Status(*)>(_a[1]))); break;
        case 1: _t->transfersReceivedSignal((*reinterpret_cast< const RpcApi::Transfers(*)>(_a[1]))); break;
        case 2: _t->addressesReceivedSignal((*reinterpret_cast< const RpcApi::Addresses(*)>(_a[1]))); break;
        case 3: _t->balanceReceivedSignal((*reinterpret_cast< const RpcApi::Balance(*)>(_a[1]))); break;
        case 4: _t->viewKeyReceivedSignal((*reinterpret_cast< const RpcApi::ViewKey(*)>(_a[1]))); break;
        case 5: _t->unspentsReceivedSignal((*reinterpret_cast< const RpcApi::Unspents(*)>(_a[1]))); break;
        case 6: _t->createTxReceivedSignal((*reinterpret_cast< const RpcApi::CreatedTx(*)>(_a[1]))); break;
        case 7: _t->sendTxReceivedSignal((*reinterpret_cast< const RpcApi::SentTx(*)>(_a[1]))); break;
        case 8: _t->networkErrorSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->jsonParsingErrorSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->jsonErrorResponseSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->jsonUnknownMessageIdSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->errorOccurred(); break;
        case 13: _t->stateChangedSignal((*reinterpret_cast< State(*)>(_a[1])),(*reinterpret_cast< State(*)>(_a[2]))); break;
        case 14: _t->connectedSignal(); break;
        case 15: _t->packetSent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 16: _t->packetReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 17: _t->authRequiredSignal((*reinterpret_cast< QAuthenticator*(*)>(_a[1]))); break;
        case 18: _t->statusReceived((*reinterpret_cast< const RpcApi::Status(*)>(_a[1]))); break;
        case 19: _t->transfersReceived((*reinterpret_cast< const RpcApi::Transfers(*)>(_a[1]))); break;
        case 20: _t->addressesReceived((*reinterpret_cast< const RpcApi::Addresses(*)>(_a[1]))); break;
        case 21: _t->balanceReceived((*reinterpret_cast< const RpcApi::Balance(*)>(_a[1]))); break;
        case 22: _t->viewKeyReceived((*reinterpret_cast< const RpcApi::ViewKey(*)>(_a[1]))); break;
        case 23: _t->unspentsReceived((*reinterpret_cast< const RpcApi::Unspents(*)>(_a[1]))); break;
        case 24: _t->createTxReceived((*reinterpret_cast< const RpcApi::CreatedTx(*)>(_a[1]))); break;
        case 25: _t->sendTxReceived((*reinterpret_cast< const RpcApi::SentTx(*)>(_a[1]))); break;
        case 26: _t->networkError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->jsonParsingError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->jsonErrorResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 29: _t->jsonUnknownMessageId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RemoteWalletd::*_t)(const RpcApi::Status & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::statusReceivedSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (RemoteWalletd::*_t)(const RpcApi::Transfers & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::transfersReceivedSignal)) {
                *result = 1;
            }
        }
        {
            typedef void (RemoteWalletd::*_t)(const RpcApi::Addresses & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::addressesReceivedSignal)) {
                *result = 2;
            }
        }
        {
            typedef void (RemoteWalletd::*_t)(const RpcApi::Balance & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::balanceReceivedSignal)) {
                *result = 3;
            }
        }
        {
            typedef void (RemoteWalletd::*_t)(const RpcApi::ViewKey & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::viewKeyReceivedSignal)) {
                *result = 4;
            }
        }
        {
            typedef void (RemoteWalletd::*_t)(const RpcApi::Unspents & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::unspentsReceivedSignal)) {
                *result = 5;
            }
        }
        {
            typedef void (RemoteWalletd::*_t)(const RpcApi::CreatedTx & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::createTxReceivedSignal)) {
                *result = 6;
            }
        }
        {
            typedef void (RemoteWalletd::*_t)(const RpcApi::SentTx & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::sendTxReceivedSignal)) {
                *result = 7;
            }
        }
        {
            typedef void (RemoteWalletd::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::networkErrorSignal)) {
                *result = 8;
            }
        }
        {
            typedef void (RemoteWalletd::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::jsonParsingErrorSignal)) {
                *result = 9;
            }
        }
        {
            typedef void (RemoteWalletd::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::jsonErrorResponseSignal)) {
                *result = 10;
            }
        }
        {
            typedef void (RemoteWalletd::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::jsonUnknownMessageIdSignal)) {
                *result = 11;
            }
        }
        {
            typedef void (RemoteWalletd::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::errorOccurred)) {
                *result = 12;
            }
        }
        {
            typedef void (RemoteWalletd::*_t)(State , State );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::stateChangedSignal)) {
                *result = 13;
            }
        }
        {
            typedef void (RemoteWalletd::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::connectedSignal)) {
                *result = 14;
            }
        }
        {
            typedef void (RemoteWalletd::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::packetSent)) {
                *result = 15;
            }
        }
        {
            typedef void (RemoteWalletd::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::packetReceived)) {
                *result = 16;
            }
        }
        {
            typedef void (RemoteWalletd::*_t)(QAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteWalletd::authRequiredSignal)) {
                *result = 17;
            }
        }
    }
}

const QMetaObject WalletGUI::RemoteWalletd::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGUI__RemoteWalletd.data,
      qt_meta_data_WalletGUI__RemoteWalletd,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletGUI::RemoteWalletd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::RemoteWalletd::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__RemoteWalletd.stringdata0))
        return static_cast<void*>(const_cast< RemoteWalletd*>(this));
    return QObject::qt_metacast(_clname);
}

int WalletGUI::RemoteWalletd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void WalletGUI::RemoteWalletd::statusReceivedSignal(const RpcApi::Status & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGUI::RemoteWalletd::transfersReceivedSignal(const RpcApi::Transfers & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletGUI::RemoteWalletd::addressesReceivedSignal(const RpcApi::Addresses & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WalletGUI::RemoteWalletd::balanceReceivedSignal(const RpcApi::Balance & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletGUI::RemoteWalletd::viewKeyReceivedSignal(const RpcApi::ViewKey & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletGUI::RemoteWalletd::unspentsReceivedSignal(const RpcApi::Unspents & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletGUI::RemoteWalletd::createTxReceivedSignal(const RpcApi::CreatedTx & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WalletGUI::RemoteWalletd::sendTxReceivedSignal(const RpcApi::SentTx & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WalletGUI::RemoteWalletd::networkErrorSignal(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WalletGUI::RemoteWalletd::jsonParsingErrorSignal(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void WalletGUI::RemoteWalletd::jsonErrorResponseSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void WalletGUI::RemoteWalletd::jsonUnknownMessageIdSignal(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void WalletGUI::RemoteWalletd::errorOccurred()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void WalletGUI::RemoteWalletd::stateChangedSignal(State _t1, State _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void WalletGUI::RemoteWalletd::connectedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 14, Q_NULLPTR);
}

// SIGNAL 15
void WalletGUI::RemoteWalletd::packetSent(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void WalletGUI::RemoteWalletd::packetReceived(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void WalletGUI::RemoteWalletd::authRequiredSignal(QAuthenticator * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
struct qt_meta_stringdata_WalletGUI__BuiltinWalletd_t {
    QByteArrayData data[42];
    char stringdata0[769];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__BuiltinWalletd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__BuiltinWalletd_t qt_meta_stringdata_WalletGUI__BuiltinWalletd = {
    {
QT_MOC_LITERAL(0, 0, 25), // "WalletGUI::BuiltinWalletd"
QT_MOC_LITERAL(1, 26, 26), // "daemonStandardOutputSignal"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 4), // "data"
QT_MOC_LITERAL(4, 59, 25), // "daemonStandardErrorSignal"
QT_MOC_LITERAL(5, 85, 19), // "daemonStartedSignal"
QT_MOC_LITERAL(6, 105, 25), // "daemonErrorOccurredSignal"
QT_MOC_LITERAL(7, 131, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(8, 154, 5), // "error"
QT_MOC_LITERAL(9, 160, 11), // "errorString"
QT_MOC_LITERAL(10, 172, 20), // "daemonFinishedSignal"
QT_MOC_LITERAL(11, 193, 8), // "exitCode"
QT_MOC_LITERAL(12, 202, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(13, 223, 10), // "exitStatus"
QT_MOC_LITERAL(14, 234, 18), // "stateChangedSignal"
QT_MOC_LITERAL(15, 253, 5), // "State"
QT_MOC_LITERAL(16, 259, 8), // "oldState"
QT_MOC_LITERAL(17, 268, 8), // "newState"
QT_MOC_LITERAL(18, 277, 21), // "requestPasswordSignal"
QT_MOC_LITERAL(19, 299, 37), // "requestPasswordWithConfirmati..."
QT_MOC_LITERAL(20, 337, 25), // "daemonStandardOutputReady"
QT_MOC_LITERAL(21, 363, 24), // "daemonStandardErrorReady"
QT_MOC_LITERAL(22, 388, 13), // "daemonStarted"
QT_MOC_LITERAL(23, 402, 19), // "daemonErrorOccurred"
QT_MOC_LITERAL(24, 422, 14), // "daemonFinished"
QT_MOC_LITERAL(25, 437, 7), // "STOPPED"
QT_MOC_LITERAL(26, 445, 8), // "STARTING"
QT_MOC_LITERAL(27, 454, 7), // "RUNNING"
QT_MOC_LITERAL(28, 462, 7), // "CRASHED"
QT_MOC_LITERAL(29, 470, 9), // "FINISHING"
QT_MOC_LITERAL(30, 480, 10), // "ReturnCode"
QT_MOC_LITERAL(31, 491, 24), // "BYTECOIND_DATABASE_ERROR"
QT_MOC_LITERAL(32, 516, 25), // "BYTECOIND_ALREADY_RUNNING"
QT_MOC_LITERAL(33, 542, 24), // "WALLETD_BIND_PORT_IN_USE"
QT_MOC_LITERAL(34, 567, 26), // "BYTECOIND_BIND_PORT_IN_USE"
QT_MOC_LITERAL(35, 594, 22), // "WALLET_FILE_READ_ERROR"
QT_MOC_LITERAL(36, 617, 27), // "WALLET_FILE_UNKNOWN_VERSION"
QT_MOC_LITERAL(37, 645, 25), // "WALLET_FILE_DECRYPT_ERROR"
QT_MOC_LITERAL(38, 671, 23), // "WALLET_FILE_WRITE_ERROR"
QT_MOC_LITERAL(39, 695, 18), // "WALLET_FILE_EXISTS"
QT_MOC_LITERAL(40, 714, 35), // "WALLET_WITH_THE_SAME_VIEWKEY_..."
QT_MOC_LITERAL(41, 750, 18) // "WALLETD_WRONG_ARGS"

    },
    "WalletGUI::BuiltinWalletd\0"
    "daemonStandardOutputSignal\0\0data\0"
    "daemonStandardErrorSignal\0daemonStartedSignal\0"
    "daemonErrorOccurredSignal\0"
    "QProcess::ProcessError\0error\0errorString\0"
    "daemonFinishedSignal\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "stateChangedSignal\0State\0oldState\0"
    "newState\0requestPasswordSignal\0"
    "requestPasswordWithConfirmationSignal\0"
    "daemonStandardOutputReady\0"
    "daemonStandardErrorReady\0daemonStarted\0"
    "daemonErrorOccurred\0daemonFinished\0"
    "STOPPED\0STARTING\0RUNNING\0CRASHED\0"
    "FINISHING\0ReturnCode\0BYTECOIND_DATABASE_ERROR\0"
    "BYTECOIND_ALREADY_RUNNING\0"
    "WALLETD_BIND_PORT_IN_USE\0"
    "BYTECOIND_BIND_PORT_IN_USE\0"
    "WALLET_FILE_READ_ERROR\0"
    "WALLET_FILE_UNKNOWN_VERSION\0"
    "WALLET_FILE_DECRYPT_ERROR\0"
    "WALLET_FILE_WRITE_ERROR\0WALLET_FILE_EXISTS\0"
    "WALLET_WITH_THE_SAME_VIEWKEY_IN_USE\0"
    "WALLETD_WRONG_ARGS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__BuiltinWalletd[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       2,  114, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       5,    0,   85,    2, 0x06 /* Public */,
       6,    2,   86,    2, 0x06 /* Public */,
      10,    2,   91,    2, 0x06 /* Public */,
      14,    2,   96,    2, 0x06 /* Public */,
      18,    0,  101,    2, 0x06 /* Public */,
      19,    0,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    0,  103,    2, 0x08 /* Private */,
      21,    0,  104,    2, 0x08 /* Private */,
      22,    0,  105,    2, 0x08 /* Private */,
      23,    1,  106,    2, 0x08 /* Private */,
      24,    2,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15,   16,   17,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12,   11,   13,

 // enums: name, flags, count, data
      15, 0x0,    5,  122,
      30, 0x0,   11,  132,

 // enum data: key, value
      25, uint(WalletGUI::BuiltinWalletd::State::STOPPED),
      26, uint(WalletGUI::BuiltinWalletd::State::STARTING),
      27, uint(WalletGUI::BuiltinWalletd::State::RUNNING),
      28, uint(WalletGUI::BuiltinWalletd::State::CRASHED),
      29, uint(WalletGUI::BuiltinWalletd::State::FINISHING),
      31, uint(WalletGUI::BuiltinWalletd::ReturnCode::BYTECOIND_DATABASE_ERROR),
      32, uint(WalletGUI::BuiltinWalletd::ReturnCode::BYTECOIND_ALREADY_RUNNING),
      33, uint(WalletGUI::BuiltinWalletd::ReturnCode::WALLETD_BIND_PORT_IN_USE),
      34, uint(WalletGUI::BuiltinWalletd::ReturnCode::BYTECOIND_BIND_PORT_IN_USE),
      35, uint(WalletGUI::BuiltinWalletd::ReturnCode::WALLET_FILE_READ_ERROR),
      36, uint(WalletGUI::BuiltinWalletd::ReturnCode::WALLET_FILE_UNKNOWN_VERSION),
      37, uint(WalletGUI::BuiltinWalletd::ReturnCode::WALLET_FILE_DECRYPT_ERROR),
      38, uint(WalletGUI::BuiltinWalletd::ReturnCode::WALLET_FILE_WRITE_ERROR),
      39, uint(WalletGUI::BuiltinWalletd::ReturnCode::WALLET_FILE_EXISTS),
      40, uint(WalletGUI::BuiltinWalletd::ReturnCode::WALLET_WITH_THE_SAME_VIEWKEY_IN_USE),
      41, uint(WalletGUI::BuiltinWalletd::ReturnCode::WALLETD_WRONG_ARGS),

       0        // eod
};

void WalletGUI::BuiltinWalletd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BuiltinWalletd *_t = static_cast<BuiltinWalletd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->daemonStandardOutputSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->daemonStandardErrorSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->daemonStartedSignal(); break;
        case 3: _t->daemonErrorOccurredSignal((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->daemonFinishedSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 5: _t->stateChangedSignal((*reinterpret_cast< State(*)>(_a[1])),(*reinterpret_cast< State(*)>(_a[2]))); break;
        case 6: _t->requestPasswordSignal(); break;
        case 7: _t->requestPasswordWithConfirmationSignal(); break;
        case 8: _t->daemonStandardOutputReady(); break;
        case 9: _t->daemonStandardErrorReady(); break;
        case 10: _t->daemonStarted(); break;
        case 11: _t->daemonErrorOccurred((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 12: _t->daemonFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BuiltinWalletd::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BuiltinWalletd::daemonStandardOutputSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (BuiltinWalletd::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BuiltinWalletd::daemonStandardErrorSignal)) {
                *result = 1;
            }
        }
        {
            typedef void (BuiltinWalletd::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BuiltinWalletd::daemonStartedSignal)) {
                *result = 2;
            }
        }
        {
            typedef void (BuiltinWalletd::*_t)(QProcess::ProcessError , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BuiltinWalletd::daemonErrorOccurredSignal)) {
                *result = 3;
            }
        }
        {
            typedef void (BuiltinWalletd::*_t)(int , QProcess::ExitStatus );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BuiltinWalletd::daemonFinishedSignal)) {
                *result = 4;
            }
        }
        {
            typedef void (BuiltinWalletd::*_t)(State , State );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BuiltinWalletd::stateChangedSignal)) {
                *result = 5;
            }
        }
        {
            typedef void (BuiltinWalletd::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BuiltinWalletd::requestPasswordSignal)) {
                *result = 6;
            }
        }
        {
            typedef void (BuiltinWalletd::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BuiltinWalletd::requestPasswordWithConfirmationSignal)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject WalletGUI::BuiltinWalletd::staticMetaObject = {
    { &RemoteWalletd::staticMetaObject, qt_meta_stringdata_WalletGUI__BuiltinWalletd.data,
      qt_meta_data_WalletGUI__BuiltinWalletd,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletGUI::BuiltinWalletd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::BuiltinWalletd::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__BuiltinWalletd.stringdata0))
        return static_cast<void*>(const_cast< BuiltinWalletd*>(this));
    return RemoteWalletd::qt_metacast(_clname);
}

int WalletGUI::BuiltinWalletd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RemoteWalletd::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void WalletGUI::BuiltinWalletd::daemonStandardOutputSignal(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGUI::BuiltinWalletd::daemonStandardErrorSignal(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletGUI::BuiltinWalletd::daemonStartedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void WalletGUI::BuiltinWalletd::daemonErrorOccurredSignal(QProcess::ProcessError _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletGUI::BuiltinWalletd::daemonFinishedSignal(int _t1, QProcess::ExitStatus _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletGUI::BuiltinWalletd::stateChangedSignal(State _t1, State _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletGUI::BuiltinWalletd::requestPasswordSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void WalletGUI::BuiltinWalletd::requestPasswordWithConfirmationSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
