/****************************************************************************
** Meta object code from reading C++ file 'addressbookmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/addressbookmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addressbookmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGUI__AddressBookManager_t {
    QByteArrayData data[9];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__AddressBookManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__AddressBookManager_t qt_meta_stringdata_WalletGUI__AddressBookManager = {
    {
QT_MOC_LITERAL(0, 0, 29), // "WalletGUI::AddressBookManager"
QT_MOC_LITERAL(1, 30, 23), // "addressBookOpenedSignal"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 23), // "addressBookClosedSignal"
QT_MOC_LITERAL(4, 79, 18), // "addressAddedSignal"
QT_MOC_LITERAL(5, 98, 12), // "AddressIndex"
QT_MOC_LITERAL(6, 111, 13), // "_addressIndex"
QT_MOC_LITERAL(7, 125, 19), // "addressEditedSignal"
QT_MOC_LITERAL(8, 145, 20) // "addressRemovedSignal"

    },
    "WalletGUI::AddressBookManager\0"
    "addressBookOpenedSignal\0\0"
    "addressBookClosedSignal\0addressAddedSignal\0"
    "AddressIndex\0_addressIndex\0"
    "addressEditedSignal\0addressRemovedSignal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__AddressBookManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    1,   41,    2, 0x06 /* Public */,
       7,    1,   44,    2, 0x06 /* Public */,
       8,    1,   47,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void WalletGUI::AddressBookManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddressBookManager *_t = static_cast<AddressBookManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addressBookOpenedSignal(); break;
        case 1: _t->addressBookClosedSignal(); break;
        case 2: _t->addressAddedSignal((*reinterpret_cast< AddressIndex(*)>(_a[1]))); break;
        case 3: _t->addressEditedSignal((*reinterpret_cast< AddressIndex(*)>(_a[1]))); break;
        case 4: _t->addressRemovedSignal((*reinterpret_cast< AddressIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddressBookManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddressBookManager::addressBookOpenedSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (AddressBookManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddressBookManager::addressBookClosedSignal)) {
                *result = 1;
            }
        }
        {
            typedef void (AddressBookManager::*_t)(AddressIndex );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddressBookManager::addressAddedSignal)) {
                *result = 2;
            }
        }
        {
            typedef void (AddressBookManager::*_t)(AddressIndex );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddressBookManager::addressEditedSignal)) {
                *result = 3;
            }
        }
        {
            typedef void (AddressBookManager::*_t)(AddressIndex );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddressBookManager::addressRemovedSignal)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject WalletGUI::AddressBookManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGUI__AddressBookManager.data,
      qt_meta_data_WalletGUI__AddressBookManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletGUI::AddressBookManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::AddressBookManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__AddressBookManager.stringdata0))
        return static_cast<void*>(const_cast< AddressBookManager*>(this));
    return QObject::qt_metacast(_clname);
}

int WalletGUI::AddressBookManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void WalletGUI::AddressBookManager::addressBookOpenedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void WalletGUI::AddressBookManager::addressBookClosedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void WalletGUI::AddressBookManager::addressAddedSignal(AddressIndex _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WalletGUI::AddressBookManager::addressEditedSignal(AddressIndex _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletGUI::AddressBookManager::addressRemovedSignal(AddressIndex _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
