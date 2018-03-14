/****************************************************************************
** Meta object code from reading C++ file 'MinerModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/MinerModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MinerModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGUI__MinerModel_t {
    QByteArrayData data[52];
    char stringdata0[915];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__MinerModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__MinerModel_t qt_meta_stringdata_WalletGUI__MinerModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "WalletGUI::MinerModel"
QT_MOC_LITERAL(1, 22, 12), // "minersLoaded"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "minersUnloaded"
QT_MOC_LITERAL(4, 51, 13), // "miningStarted"
QT_MOC_LITERAL(5, 65, 13), // "miningStopped"
QT_MOC_LITERAL(6, 79, 18), // "activeMinerChanged"
QT_MOC_LITERAL(7, 98, 8), // "quintptr"
QT_MOC_LITERAL(8, 107, 11), // "_minerIndex"
QT_MOC_LITERAL(9, 119, 21), // "schedulePolicyChanged"
QT_MOC_LITERAL(10, 141, 24), // "MiningPoolSwitchStrategy"
QT_MOC_LITERAL(11, 166, 15), // "_schedulePolicy"
QT_MOC_LITERAL(12, 182, 19), // "cpuCoreCountChanged"
QT_MOC_LITERAL(13, 202, 13), // "_cpuCoreCount"
QT_MOC_LITERAL(14, 216, 10), // "minerAdded"
QT_MOC_LITERAL(15, 227, 12), // "minerRemoved"
QT_MOC_LITERAL(16, 240, 12), // "stateChanged"
QT_MOC_LITERAL(17, 253, 9), // "_newState"
QT_MOC_LITERAL(18, 263, 15), // "hashRateChanged"
QT_MOC_LITERAL(19, 279, 9), // "_hashRate"
QT_MOC_LITERAL(20, 289, 24), // "alternateHashRateChanged"
QT_MOC_LITERAL(21, 314, 17), // "difficultyChanged"
QT_MOC_LITERAL(22, 332, 11), // "_difficulty"
QT_MOC_LITERAL(23, 344, 21), // "goodShareCountChanged"
QT_MOC_LITERAL(24, 366, 15), // "_goodShareCount"
QT_MOC_LITERAL(25, 382, 30), // "goodAlternateShareCountChanged"
QT_MOC_LITERAL(26, 413, 20), // "badShareCountChanged"
QT_MOC_LITERAL(27, 434, 14), // "_badShareCount"
QT_MOC_LITERAL(28, 449, 27), // "connectionErrorCountChanged"
QT_MOC_LITERAL(29, 477, 21), // "_connectionErrorCount"
QT_MOC_LITERAL(30, 499, 30), // "lastConnectionErrorTimeChanged"
QT_MOC_LITERAL(31, 530, 24), // "_lastConnectionErrorTime"
QT_MOC_LITERAL(32, 555, 7), // "Columns"
QT_MOC_LITERAL(33, 563, 15), // "COLUMN_POOL_URL"
QT_MOC_LITERAL(34, 579, 17), // "COLUMN_DIFFICULTY"
QT_MOC_LITERAL(35, 597, 18), // "COLUMN_GOOD_SHARES"
QT_MOC_LITERAL(36, 616, 17), // "COLUMN_BAD_SHARES"
QT_MOC_LITERAL(37, 634, 29), // "COLUMN_CONNECTION_ERROR_COUNT"
QT_MOC_LITERAL(38, 664, 33), // "COLUMN_LAST_CONNECTION_ERROR_..."
QT_MOC_LITERAL(39, 698, 13), // "COLUMN_REMOVE"
QT_MOC_LITERAL(40, 712, 15), // "COLUMN_HASHRATE"
QT_MOC_LITERAL(41, 728, 5), // "Roles"
QT_MOC_LITERAL(42, 734, 14), // "ROLE_POOL_HOST"
QT_MOC_LITERAL(43, 749, 14), // "ROLE_POOL_PORT"
QT_MOC_LITERAL(44, 764, 15), // "ROLE_DIFFICULTY"
QT_MOC_LITERAL(45, 780, 16), // "ROLE_GOOD_SHARES"
QT_MOC_LITERAL(46, 797, 15), // "ROLE_BAD_SHARES"
QT_MOC_LITERAL(47, 813, 27), // "ROLE_CONNECTION_ERROR_COUNT"
QT_MOC_LITERAL(48, 841, 31), // "ROLE_LAST_CONNECTION_ERROR_TIME"
QT_MOC_LITERAL(49, 873, 10), // "ROLE_STATE"
QT_MOC_LITERAL(50, 884, 16), // "ROLE_START_MINER"
QT_MOC_LITERAL(51, 901, 13) // "ROLE_HASHRATE"

    },
    "WalletGUI::MinerModel\0minersLoaded\0\0"
    "minersUnloaded\0miningStarted\0miningStopped\0"
    "activeMinerChanged\0quintptr\0_minerIndex\0"
    "schedulePolicyChanged\0MiningPoolSwitchStrategy\0"
    "_schedulePolicy\0cpuCoreCountChanged\0"
    "_cpuCoreCount\0minerAdded\0minerRemoved\0"
    "stateChanged\0_newState\0hashRateChanged\0"
    "_hashRate\0alternateHashRateChanged\0"
    "difficultyChanged\0_difficulty\0"
    "goodShareCountChanged\0_goodShareCount\0"
    "goodAlternateShareCountChanged\0"
    "badShareCountChanged\0_badShareCount\0"
    "connectionErrorCountChanged\0"
    "_connectionErrorCount\0"
    "lastConnectionErrorTimeChanged\0"
    "_lastConnectionErrorTime\0Columns\0"
    "COLUMN_POOL_URL\0COLUMN_DIFFICULTY\0"
    "COLUMN_GOOD_SHARES\0COLUMN_BAD_SHARES\0"
    "COLUMN_CONNECTION_ERROR_COUNT\0"
    "COLUMN_LAST_CONNECTION_ERROR_TIME\0"
    "COLUMN_REMOVE\0COLUMN_HASHRATE\0Roles\0"
    "ROLE_POOL_HOST\0ROLE_POOL_PORT\0"
    "ROLE_DIFFICULTY\0ROLE_GOOD_SHARES\0"
    "ROLE_BAD_SHARES\0ROLE_CONNECTION_ERROR_COUNT\0"
    "ROLE_LAST_CONNECTION_ERROR_TIME\0"
    "ROLE_STATE\0ROLE_START_MINER\0ROLE_HASHRATE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__MinerModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       2,  168, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x0a /* Public */,
       3,    0,  105,    2, 0x0a /* Public */,
       4,    0,  106,    2, 0x0a /* Public */,
       5,    0,  107,    2, 0x0a /* Public */,
       6,    1,  108,    2, 0x0a /* Public */,
       9,    1,  111,    2, 0x0a /* Public */,
      12,    1,  114,    2, 0x0a /* Public */,
      14,    1,  117,    2, 0x0a /* Public */,
      15,    1,  120,    2, 0x0a /* Public */,
      16,    2,  123,    2, 0x0a /* Public */,
      18,    2,  128,    2, 0x0a /* Public */,
      20,    2,  133,    2, 0x0a /* Public */,
      21,    2,  138,    2, 0x0a /* Public */,
      23,    2,  143,    2, 0x0a /* Public */,
      25,    2,  148,    2, 0x0a /* Public */,
      26,    2,  153,    2, 0x0a /* Public */,
      28,    2,  158,    2, 0x0a /* Public */,
      30,    2,  163,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::UInt,   13,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,   17,
    QMetaType::Void, 0x80000000 | 7, QMetaType::UInt,    8,   19,
    QMetaType::Void, 0x80000000 | 7, QMetaType::UInt,    8,   19,
    QMetaType::Void, 0x80000000 | 7, QMetaType::UInt,    8,   22,
    QMetaType::Void, 0x80000000 | 7, QMetaType::UInt,    8,   24,
    QMetaType::Void, 0x80000000 | 7, QMetaType::UInt,    8,   24,
    QMetaType::Void, 0x80000000 | 7, QMetaType::UInt,    8,   27,
    QMetaType::Void, 0x80000000 | 7, QMetaType::UInt,    8,   29,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QDateTime,    8,   31,

 // enums: name, flags, count, data
      32, 0x0,    8,  176,
      41, 0x0,   10,  192,

 // enum data: key, value
      33, uint(WalletGUI::MinerModel::COLUMN_POOL_URL),
      34, uint(WalletGUI::MinerModel::COLUMN_DIFFICULTY),
      35, uint(WalletGUI::MinerModel::COLUMN_GOOD_SHARES),
      36, uint(WalletGUI::MinerModel::COLUMN_BAD_SHARES),
      37, uint(WalletGUI::MinerModel::COLUMN_CONNECTION_ERROR_COUNT),
      38, uint(WalletGUI::MinerModel::COLUMN_LAST_CONNECTION_ERROR_TIME),
      39, uint(WalletGUI::MinerModel::COLUMN_REMOVE),
      40, uint(WalletGUI::MinerModel::COLUMN_HASHRATE),
      42, uint(WalletGUI::MinerModel::ROLE_POOL_HOST),
      43, uint(WalletGUI::MinerModel::ROLE_POOL_PORT),
      44, uint(WalletGUI::MinerModel::ROLE_DIFFICULTY),
      45, uint(WalletGUI::MinerModel::ROLE_GOOD_SHARES),
      46, uint(WalletGUI::MinerModel::ROLE_BAD_SHARES),
      47, uint(WalletGUI::MinerModel::ROLE_CONNECTION_ERROR_COUNT),
      48, uint(WalletGUI::MinerModel::ROLE_LAST_CONNECTION_ERROR_TIME),
      49, uint(WalletGUI::MinerModel::ROLE_STATE),
      50, uint(WalletGUI::MinerModel::ROLE_START_MINER),
      51, uint(WalletGUI::MinerModel::ROLE_HASHRATE),

       0        // eod
};

void WalletGUI::MinerModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MinerModel *_t = static_cast<MinerModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->minersLoaded(); break;
        case 1: _t->minersUnloaded(); break;
        case 2: _t->miningStarted(); break;
        case 3: _t->miningStopped(); break;
        case 4: _t->activeMinerChanged((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 5: _t->schedulePolicyChanged((*reinterpret_cast< MiningPoolSwitchStrategy(*)>(_a[1]))); break;
        case 6: _t->cpuCoreCountChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 7: _t->minerAdded((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 8: _t->minerRemoved((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 9: _t->stateChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->hashRateChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 11: _t->alternateHashRateChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 12: _t->difficultyChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 13: _t->goodShareCountChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 14: _t->goodAlternateShareCountChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 15: _t->badShareCountChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 16: _t->connectionErrorCountChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 17: _t->lastConnectionErrorTimeChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject WalletGUI::MinerModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_WalletGUI__MinerModel.data,
      qt_meta_data_WalletGUI__MinerModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletGUI::MinerModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::MinerModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__MinerModel.stringdata0))
        return static_cast<void*>(const_cast< MinerModel*>(this));
    if (!strcmp(_clname, "IMinerManagerObserver"))
        return static_cast< IMinerManagerObserver*>(const_cast< MinerModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int WalletGUI::MinerModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
