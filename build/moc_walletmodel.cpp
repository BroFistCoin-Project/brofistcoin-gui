/****************************************************************************
** Meta object code from reading C++ file 'walletmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/walletmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGUI__WalletModel_t {
    QByteArrayData data[59];
    char stringdata0[1040];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__WalletModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__WalletModel_t qt_meta_stringdata_WalletGUI__WalletModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "WalletGUI::WalletModel"
QT_MOC_LITERAL(1, 23, 18), // "getTransfersSignal"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 29), // "RpcApi::GetTransfers::Request"
QT_MOC_LITERAL(4, 73, 3), // "req"
QT_MOC_LITERAL(5, 77, 14), // "statusReceived"
QT_MOC_LITERAL(6, 92, 14), // "RpcApi::Status"
QT_MOC_LITERAL(7, 107, 6), // "status"
QT_MOC_LITERAL(8, 114, 17), // "transfersReceived"
QT_MOC_LITERAL(9, 132, 17), // "RpcApi::Transfers"
QT_MOC_LITERAL(10, 150, 7), // "history"
QT_MOC_LITERAL(11, 158, 17), // "addressesReceived"
QT_MOC_LITERAL(12, 176, 17), // "RpcApi::Addresses"
QT_MOC_LITERAL(13, 194, 9), // "addresses"
QT_MOC_LITERAL(14, 204, 15), // "balanceReceived"
QT_MOC_LITERAL(15, 220, 15), // "RpcApi::Balance"
QT_MOC_LITERAL(16, 236, 7), // "balance"
QT_MOC_LITERAL(17, 244, 15), // "viewKeyReceived"
QT_MOC_LITERAL(18, 260, 15), // "RpcApi::ViewKey"
QT_MOC_LITERAL(19, 276, 7), // "viewKey"
QT_MOC_LITERAL(20, 284, 16), // "unspentsReceived"
QT_MOC_LITERAL(21, 301, 16), // "RpcApi::Unspents"
QT_MOC_LITERAL(22, 318, 8), // "unspents"
QT_MOC_LITERAL(23, 327, 12), // "stateChanged"
QT_MOC_LITERAL(24, 340, 20), // "RemoteWalletd::State"
QT_MOC_LITERAL(25, 361, 8), // "oldState"
QT_MOC_LITERAL(26, 370, 8), // "newState"
QT_MOC_LITERAL(27, 379, 7), // "Columns"
QT_MOC_LITERAL(28, 387, 14), // "COLUMN_ADDRESS"
QT_MOC_LITERAL(29, 402, 18), // "COLUMN_UNLOCK_TIME"
QT_MOC_LITERAL(30, 421, 17), // "COLUMN_PAYMENT_ID"
QT_MOC_LITERAL(31, 439, 16), // "COLUMN_ANONYMITY"
QT_MOC_LITERAL(32, 456, 11), // "COLUMN_HASH"
QT_MOC_LITERAL(33, 468, 10), // "COLUMN_FEE"
QT_MOC_LITERAL(34, 479, 9), // "COLUMN_PK"
QT_MOC_LITERAL(35, 489, 12), // "COLUMN_EXTRA"
QT_MOC_LITERAL(36, 502, 15), // "COLUMN_COINBASE"
QT_MOC_LITERAL(37, 518, 13), // "COLUMN_AMOUNT"
QT_MOC_LITERAL(38, 532, 19), // "COLUMN_BLOCK_HEIGHT"
QT_MOC_LITERAL(39, 552, 17), // "COLUMN_BLOCK_HASH"
QT_MOC_LITERAL(40, 570, 16), // "COLUMN_TIMESTAMP"
QT_MOC_LITERAL(41, 587, 23), // "COLUMN_TOP_BLOCK_HEIGHT"
QT_MOC_LITERAL(42, 611, 26), // "COLUMN_TOP_BLOCK_TIMESTAMP"
QT_MOC_LITERAL(43, 638, 33), // "COLUMN_TOP_BLOCK_TIMESTAMP_ME..."
QT_MOC_LITERAL(44, 672, 21), // "COLUMN_TOP_BLOCK_HASH"
QT_MOC_LITERAL(45, 694, 27), // "COLUMN_TOP_BLOCK_DIFFICULTY"
QT_MOC_LITERAL(46, 722, 23), // "COLUMN_NETWORK_HASHRATE"
QT_MOC_LITERAL(47, 746, 39), // "COLUMN_NEXT_BLOCK_EFFECTIVE_M..."
QT_MOC_LITERAL(48, 786, 21), // "COLUMN_TXPOOL_VERSION"
QT_MOC_LITERAL(49, 808, 26), // "COLUMN_PEER_COUNT_OUTGOING"
QT_MOC_LITERAL(50, 835, 26), // "COLUMN_PEER_COUNT_INCOMING"
QT_MOC_LITERAL(51, 862, 31), // "COLUMN_RECOMMENDED_FEE_PER_BYTE"
QT_MOC_LITERAL(52, 894, 29), // "COLUMN_KNOWN_TOP_BLOCK_HEIGHT"
QT_MOC_LITERAL(53, 924, 21), // "COLUMN_PEER_COUNT_SUM"
QT_MOC_LITERAL(54, 946, 12), // "COLUMN_STATE"
QT_MOC_LITERAL(55, 959, 16), // "COLUMN_SPENDABLE"
QT_MOC_LITERAL(56, 976, 21), // "COLUMN_SPENDABLE_DUST"
QT_MOC_LITERAL(57, 998, 28), // "COLUMN_LOCKED_OR_UNCONFIRMED"
QT_MOC_LITERAL(58, 1027, 12) // "COLUMN_TOTAL"

    },
    "WalletGUI::WalletModel\0getTransfersSignal\0"
    "\0RpcApi::GetTransfers::Request\0req\0"
    "statusReceived\0RpcApi::Status\0status\0"
    "transfersReceived\0RpcApi::Transfers\0"
    "history\0addressesReceived\0RpcApi::Addresses\0"
    "addresses\0balanceReceived\0RpcApi::Balance\0"
    "balance\0viewKeyReceived\0RpcApi::ViewKey\0"
    "viewKey\0unspentsReceived\0RpcApi::Unspents\0"
    "unspents\0stateChanged\0RemoteWalletd::State\0"
    "oldState\0newState\0Columns\0COLUMN_ADDRESS\0"
    "COLUMN_UNLOCK_TIME\0COLUMN_PAYMENT_ID\0"
    "COLUMN_ANONYMITY\0COLUMN_HASH\0COLUMN_FEE\0"
    "COLUMN_PK\0COLUMN_EXTRA\0COLUMN_COINBASE\0"
    "COLUMN_AMOUNT\0COLUMN_BLOCK_HEIGHT\0"
    "COLUMN_BLOCK_HASH\0COLUMN_TIMESTAMP\0"
    "COLUMN_TOP_BLOCK_HEIGHT\0"
    "COLUMN_TOP_BLOCK_TIMESTAMP\0"
    "COLUMN_TOP_BLOCK_TIMESTAMP_MEDIAN\0"
    "COLUMN_TOP_BLOCK_HASH\0COLUMN_TOP_BLOCK_DIFFICULTY\0"
    "COLUMN_NETWORK_HASHRATE\0"
    "COLUMN_NEXT_BLOCK_EFFECTIVE_MEDIAN_SIZE\0"
    "COLUMN_TXPOOL_VERSION\0COLUMN_PEER_COUNT_OUTGOING\0"
    "COLUMN_PEER_COUNT_INCOMING\0"
    "COLUMN_RECOMMENDED_FEE_PER_BYTE\0"
    "COLUMN_KNOWN_TOP_BLOCK_HEIGHT\0"
    "COLUMN_PEER_COUNT_SUM\0COLUMN_STATE\0"
    "COLUMN_SPENDABLE\0COLUMN_SPENDABLE_DUST\0"
    "COLUMN_LOCKED_OR_UNCONFIRMED\0COLUMN_TOTAL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__WalletModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       1,   80, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   57,    2, 0x0a /* Public */,
       8,    1,   60,    2, 0x0a /* Public */,
      11,    1,   63,    2, 0x0a /* Public */,
      14,    1,   66,    2, 0x0a /* Public */,
      17,    1,   69,    2, 0x0a /* Public */,
      20,    1,   72,    2, 0x0a /* Public */,
      23,    2,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 24, 0x80000000 | 24,   25,   26,

 // enums: name, flags, count, data
      27, 0x0,   31,   84,

 // enum data: key, value
      28, uint(WalletGUI::WalletModel::COLUMN_ADDRESS),
      29, uint(WalletGUI::WalletModel::COLUMN_UNLOCK_TIME),
      30, uint(WalletGUI::WalletModel::COLUMN_PAYMENT_ID),
      31, uint(WalletGUI::WalletModel::COLUMN_ANONYMITY),
      32, uint(WalletGUI::WalletModel::COLUMN_HASH),
      33, uint(WalletGUI::WalletModel::COLUMN_FEE),
      34, uint(WalletGUI::WalletModel::COLUMN_PK),
      35, uint(WalletGUI::WalletModel::COLUMN_EXTRA),
      36, uint(WalletGUI::WalletModel::COLUMN_COINBASE),
      37, uint(WalletGUI::WalletModel::COLUMN_AMOUNT),
      38, uint(WalletGUI::WalletModel::COLUMN_BLOCK_HEIGHT),
      39, uint(WalletGUI::WalletModel::COLUMN_BLOCK_HASH),
      40, uint(WalletGUI::WalletModel::COLUMN_TIMESTAMP),
      41, uint(WalletGUI::WalletModel::COLUMN_TOP_BLOCK_HEIGHT),
      42, uint(WalletGUI::WalletModel::COLUMN_TOP_BLOCK_TIMESTAMP),
      43, uint(WalletGUI::WalletModel::COLUMN_TOP_BLOCK_TIMESTAMP_MEDIAN),
      44, uint(WalletGUI::WalletModel::COLUMN_TOP_BLOCK_HASH),
      45, uint(WalletGUI::WalletModel::COLUMN_TOP_BLOCK_DIFFICULTY),
      46, uint(WalletGUI::WalletModel::COLUMN_NETWORK_HASHRATE),
      47, uint(WalletGUI::WalletModel::COLUMN_NEXT_BLOCK_EFFECTIVE_MEDIAN_SIZE),
      48, uint(WalletGUI::WalletModel::COLUMN_TXPOOL_VERSION),
      49, uint(WalletGUI::WalletModel::COLUMN_PEER_COUNT_OUTGOING),
      50, uint(WalletGUI::WalletModel::COLUMN_PEER_COUNT_INCOMING),
      51, uint(WalletGUI::WalletModel::COLUMN_RECOMMENDED_FEE_PER_BYTE),
      52, uint(WalletGUI::WalletModel::COLUMN_KNOWN_TOP_BLOCK_HEIGHT),
      53, uint(WalletGUI::WalletModel::COLUMN_PEER_COUNT_SUM),
      54, uint(WalletGUI::WalletModel::COLUMN_STATE),
      55, uint(WalletGUI::WalletModel::COLUMN_SPENDABLE),
      56, uint(WalletGUI::WalletModel::COLUMN_SPENDABLE_DUST),
      57, uint(WalletGUI::WalletModel::COLUMN_LOCKED_OR_UNCONFIRMED),
      58, uint(WalletGUI::WalletModel::COLUMN_TOTAL),

       0        // eod
};

void WalletGUI::WalletModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletModel *_t = static_cast<WalletModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getTransfersSignal((*reinterpret_cast< const RpcApi::GetTransfers::Request(*)>(_a[1]))); break;
        case 1: _t->statusReceived((*reinterpret_cast< const RpcApi::Status(*)>(_a[1]))); break;
        case 2: _t->transfersReceived((*reinterpret_cast< const RpcApi::Transfers(*)>(_a[1]))); break;
        case 3: _t->addressesReceived((*reinterpret_cast< const RpcApi::Addresses(*)>(_a[1]))); break;
        case 4: _t->balanceReceived((*reinterpret_cast< const RpcApi::Balance(*)>(_a[1]))); break;
        case 5: _t->viewKeyReceived((*reinterpret_cast< const RpcApi::ViewKey(*)>(_a[1]))); break;
        case 6: _t->unspentsReceived((*reinterpret_cast< const RpcApi::Unspents(*)>(_a[1]))); break;
        case 7: _t->stateChanged((*reinterpret_cast< RemoteWalletd::State(*)>(_a[1])),(*reinterpret_cast< RemoteWalletd::State(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WalletModel::*_t)(const RpcApi::GetTransfers::Request & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletModel::getTransfersSignal)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject WalletGUI::WalletModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_WalletGUI__WalletModel.data,
      qt_meta_data_WalletGUI__WalletModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletGUI::WalletModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::WalletModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__WalletModel.stringdata0))
        return static_cast<void*>(const_cast< WalletModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int WalletGUI::WalletModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
void WalletGUI::WalletModel::getTransfersSignal(const RpcApi::GetTransfers::Request & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
