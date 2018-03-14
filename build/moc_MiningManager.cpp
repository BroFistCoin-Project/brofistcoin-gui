/****************************************************************************
** Meta object code from reading C++ file 'MiningManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/MiningManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MiningManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGUI__MiningManager_t {
    QByteArrayData data[41];
    char stringdata0[871];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__MiningManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__MiningManager_t qt_meta_stringdata_WalletGUI__MiningManager = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WalletGUI::MiningManager"
QT_MOC_LITERAL(1, 25, 18), // "minersLoadedSignal"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 20), // "minersUnloadedSignal"
QT_MOC_LITERAL(4, 66, 19), // "miningStartedSignal"
QT_MOC_LITERAL(5, 86, 19), // "miningStoppedSignal"
QT_MOC_LITERAL(6, 106, 24), // "activeMinerChangedSignal"
QT_MOC_LITERAL(7, 131, 8), // "quintptr"
QT_MOC_LITERAL(8, 140, 11), // "_minerIndex"
QT_MOC_LITERAL(9, 152, 27), // "schedulePolicyChangedSignal"
QT_MOC_LITERAL(10, 180, 24), // "MiningPoolSwitchStrategy"
QT_MOC_LITERAL(11, 205, 15), // "_schedulePolicy"
QT_MOC_LITERAL(12, 221, 25), // "cpuCoreCountChangedSignal"
QT_MOC_LITERAL(13, 247, 13), // "_cpuCoreCount"
QT_MOC_LITERAL(14, 261, 16), // "minerAddedSignal"
QT_MOC_LITERAL(15, 278, 18), // "minerRemovedSignal"
QT_MOC_LITERAL(16, 297, 18), // "stateChangedSignal"
QT_MOC_LITERAL(17, 316, 9), // "_newState"
QT_MOC_LITERAL(18, 326, 21), // "hashRateChangedSignal"
QT_MOC_LITERAL(19, 348, 9), // "_hashRate"
QT_MOC_LITERAL(20, 358, 30), // "alternateHashRateChangedSignal"
QT_MOC_LITERAL(21, 389, 23), // "difficultyChangedSignal"
QT_MOC_LITERAL(22, 413, 11), // "_difficulty"
QT_MOC_LITERAL(23, 425, 27), // "goodShareCountChangedSignal"
QT_MOC_LITERAL(24, 453, 15), // "_goodShareCount"
QT_MOC_LITERAL(25, 469, 36), // "goodAlternateShareCountChange..."
QT_MOC_LITERAL(26, 506, 26), // "badShareCountChangedSignal"
QT_MOC_LITERAL(27, 533, 14), // "_badShareCount"
QT_MOC_LITERAL(28, 548, 33), // "connectionErrorCountChangedSi..."
QT_MOC_LITERAL(29, 582, 21), // "_connectionErrorCount"
QT_MOC_LITERAL(30, 604, 36), // "lastConnectionErrorTimeChange..."
QT_MOC_LITERAL(31, 641, 24), // "_lastConnectionErrorTime"
QT_MOC_LITERAL(32, 666, 12), // "stateChanged"
QT_MOC_LITERAL(33, 679, 15), // "hashRateChanged"
QT_MOC_LITERAL(34, 695, 24), // "alternateHashRateChanged"
QT_MOC_LITERAL(35, 720, 17), // "difficultyChanged"
QT_MOC_LITERAL(36, 738, 21), // "goodShareCountChanged"
QT_MOC_LITERAL(37, 760, 30), // "goodAlternateShareCountChanged"
QT_MOC_LITERAL(38, 791, 20), // "badShareCountChanged"
QT_MOC_LITERAL(39, 812, 27), // "connectionErrorCountChanged"
QT_MOC_LITERAL(40, 840, 30) // "lastConnectionErrorTimeChanged"

    },
    "WalletGUI::MiningManager\0minersLoadedSignal\0"
    "\0minersUnloadedSignal\0miningStartedSignal\0"
    "miningStoppedSignal\0activeMinerChangedSignal\0"
    "quintptr\0_minerIndex\0schedulePolicyChangedSignal\0"
    "MiningPoolSwitchStrategy\0_schedulePolicy\0"
    "cpuCoreCountChangedSignal\0_cpuCoreCount\0"
    "minerAddedSignal\0minerRemovedSignal\0"
    "stateChangedSignal\0_newState\0"
    "hashRateChangedSignal\0_hashRate\0"
    "alternateHashRateChangedSignal\0"
    "difficultyChangedSignal\0_difficulty\0"
    "goodShareCountChangedSignal\0_goodShareCount\0"
    "goodAlternateShareCountChangedSignal\0"
    "badShareCountChangedSignal\0_badShareCount\0"
    "connectionErrorCountChangedSignal\0"
    "_connectionErrorCount\0"
    "lastConnectionErrorTimeChangedSignal\0"
    "_lastConnectionErrorTime\0stateChanged\0"
    "hashRateChanged\0alternateHashRateChanged\0"
    "difficultyChanged\0goodShareCountChanged\0"
    "goodAlternateShareCountChanged\0"
    "badShareCountChanged\0connectionErrorCountChanged\0"
    "lastConnectionErrorTimeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__MiningManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  149,    2, 0x06 /* Public */,
       3,    0,  150,    2, 0x06 /* Public */,
       4,    0,  151,    2, 0x06 /* Public */,
       5,    0,  152,    2, 0x06 /* Public */,
       6,    1,  153,    2, 0x06 /* Public */,
       9,    1,  156,    2, 0x06 /* Public */,
      12,    1,  159,    2, 0x06 /* Public */,
      14,    1,  162,    2, 0x06 /* Public */,
      15,    1,  165,    2, 0x06 /* Public */,
      16,    2,  168,    2, 0x06 /* Public */,
      18,    2,  173,    2, 0x06 /* Public */,
      20,    2,  178,    2, 0x06 /* Public */,
      21,    2,  183,    2, 0x06 /* Public */,
      23,    2,  188,    2, 0x06 /* Public */,
      25,    2,  193,    2, 0x06 /* Public */,
      26,    2,  198,    2, 0x06 /* Public */,
      28,    2,  203,    2, 0x06 /* Public */,
      30,    2,  208,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      32,    1,  213,    2, 0x0a /* Public */,
      33,    1,  216,    2, 0x0a /* Public */,
      34,    1,  219,    2, 0x0a /* Public */,
      35,    1,  222,    2, 0x0a /* Public */,
      36,    1,  225,    2, 0x0a /* Public */,
      37,    1,  228,    2, 0x0a /* Public */,
      38,    1,  231,    2, 0x0a /* Public */,
      39,    1,  234,    2, 0x0a /* Public */,
      40,    1,  237,    2, 0x0a /* Public */,

 // signals: parameters
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

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::UInt,   19,
    QMetaType::Void, QMetaType::UInt,   19,
    QMetaType::Void, QMetaType::UInt,   22,
    QMetaType::Void, QMetaType::UInt,   24,
    QMetaType::Void, QMetaType::UInt,   24,
    QMetaType::Void, QMetaType::UInt,   27,
    QMetaType::Void, QMetaType::UInt,   29,
    QMetaType::Void, QMetaType::QDateTime,   31,

       0        // eod
};

void WalletGUI::MiningManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MiningManager *_t = static_cast<MiningManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->minersLoadedSignal(); break;
        case 1: _t->minersUnloadedSignal(); break;
        case 2: _t->miningStartedSignal(); break;
        case 3: _t->miningStoppedSignal(); break;
        case 4: _t->activeMinerChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 5: _t->schedulePolicyChangedSignal((*reinterpret_cast< MiningPoolSwitchStrategy(*)>(_a[1]))); break;
        case 6: _t->cpuCoreCountChangedSignal((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 7: _t->minerAddedSignal((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 8: _t->minerRemovedSignal((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 9: _t->stateChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->hashRateChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 11: _t->alternateHashRateChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 12: _t->difficultyChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 13: _t->goodShareCountChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 14: _t->goodAlternateShareCountChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 15: _t->badShareCountChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 16: _t->connectionErrorCountChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 17: _t->lastConnectionErrorTimeChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 18: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->hashRateChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 20: _t->alternateHashRateChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 21: _t->difficultyChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 22: _t->goodShareCountChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 23: _t->goodAlternateShareCountChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 24: _t->badShareCountChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 25: _t->connectionErrorCountChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 26: _t->lastConnectionErrorTimeChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MiningManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::minersLoadedSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (MiningManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::minersUnloadedSignal)) {
                *result = 1;
            }
        }
        {
            typedef void (MiningManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::miningStartedSignal)) {
                *result = 2;
            }
        }
        {
            typedef void (MiningManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::miningStoppedSignal)) {
                *result = 3;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::activeMinerChangedSignal)) {
                *result = 4;
            }
        }
        {
            typedef void (MiningManager::*_t)(MiningPoolSwitchStrategy );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::schedulePolicyChangedSignal)) {
                *result = 5;
            }
        }
        {
            typedef void (MiningManager::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::cpuCoreCountChangedSignal)) {
                *result = 6;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::minerAddedSignal)) {
                *result = 7;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::minerRemovedSignal)) {
                *result = 8;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::stateChangedSignal)) {
                *result = 9;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::hashRateChangedSignal)) {
                *result = 10;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::alternateHashRateChangedSignal)) {
                *result = 11;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::difficultyChangedSignal)) {
                *result = 12;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::goodShareCountChangedSignal)) {
                *result = 13;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::goodAlternateShareCountChangedSignal)) {
                *result = 14;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::badShareCountChangedSignal)) {
                *result = 15;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::connectionErrorCountChangedSignal)) {
                *result = 16;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , const QDateTime & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MiningManager::lastConnectionErrorTimeChangedSignal)) {
                *result = 17;
            }
        }
    }
}

const QMetaObject WalletGUI::MiningManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGUI__MiningManager.data,
      qt_meta_data_WalletGUI__MiningManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletGUI::MiningManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::MiningManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__MiningManager.stringdata0))
        return static_cast<void*>(const_cast< MiningManager*>(this));
    if (!strcmp(_clname, "IMiningManager"))
        return static_cast< IMiningManager*>(const_cast< MiningManager*>(this));
    if (!strcmp(_clname, "IPoolMinerObserver"))
        return static_cast< IPoolMinerObserver*>(const_cast< MiningManager*>(this));
    return QObject::qt_metacast(_clname);
}

int WalletGUI::MiningManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void WalletGUI::MiningManager::minersLoadedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void WalletGUI::MiningManager::minersUnloadedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void WalletGUI::MiningManager::miningStartedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void WalletGUI::MiningManager::miningStoppedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void WalletGUI::MiningManager::activeMinerChangedSignal(quintptr _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletGUI::MiningManager::schedulePolicyChangedSignal(MiningPoolSwitchStrategy _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletGUI::MiningManager::cpuCoreCountChangedSignal(quint32 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WalletGUI::MiningManager::minerAddedSignal(quintptr _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WalletGUI::MiningManager::minerRemovedSignal(quintptr _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WalletGUI::MiningManager::stateChangedSignal(quintptr _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void WalletGUI::MiningManager::hashRateChangedSignal(quintptr _t1, quint32 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void WalletGUI::MiningManager::alternateHashRateChangedSignal(quintptr _t1, quint32 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void WalletGUI::MiningManager::difficultyChangedSignal(quintptr _t1, quint32 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void WalletGUI::MiningManager::goodShareCountChangedSignal(quintptr _t1, quint32 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void WalletGUI::MiningManager::goodAlternateShareCountChangedSignal(quintptr _t1, quint32 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void WalletGUI::MiningManager::badShareCountChangedSignal(quintptr _t1, quint32 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void WalletGUI::MiningManager::connectionErrorCountChangedSignal(quintptr _t1, quint32 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void WalletGUI::MiningManager::lastConnectionErrorTimeChangedSignal(quintptr _t1, const QDateTime & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_END_MOC_NAMESPACE
