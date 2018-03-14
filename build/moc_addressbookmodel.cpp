/****************************************************************************
** Meta object code from reading C++ file 'addressbookmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/addressbookmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addressbookmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGUI__AddressBookModel_t {
    QByteArrayData data[18];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__AddressBookModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__AddressBookModel_t qt_meta_stringdata_WalletGUI__AddressBookModel = {
    {
QT_MOC_LITERAL(0, 0, 27), // "WalletGUI::AddressBookModel"
QT_MOC_LITERAL(1, 28, 17), // "addressBookOpened"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 17), // "addressBookClosed"
QT_MOC_LITERAL(4, 65, 12), // "addressAdded"
QT_MOC_LITERAL(5, 78, 8), // "quintptr"
QT_MOC_LITERAL(6, 87, 13), // "_addressIndex"
QT_MOC_LITERAL(7, 101, 13), // "addressEdited"
QT_MOC_LITERAL(8, 115, 14), // "addressRemoved"
QT_MOC_LITERAL(9, 130, 7), // "Columns"
QT_MOC_LITERAL(10, 138, 12), // "COLUMN_LABEL"
QT_MOC_LITERAL(11, 151, 14), // "COLUMN_ADDRESS"
QT_MOC_LITERAL(12, 166, 13), // "COLUMN_ACTION"
QT_MOC_LITERAL(13, 180, 5), // "Roles"
QT_MOC_LITERAL(14, 186, 10), // "ROLE_LABEL"
QT_MOC_LITERAL(15, 197, 12), // "ROLE_ADDRESS"
QT_MOC_LITERAL(16, 210, 11), // "ROLE_COLUMN"
QT_MOC_LITERAL(17, 222, 8) // "ROLE_ROW"

    },
    "WalletGUI::AddressBookModel\0"
    "addressBookOpened\0\0addressBookClosed\0"
    "addressAdded\0quintptr\0_addressIndex\0"
    "addressEdited\0addressRemoved\0Columns\0"
    "COLUMN_LABEL\0COLUMN_ADDRESS\0COLUMN_ACTION\0"
    "Roles\0ROLE_LABEL\0ROLE_ADDRESS\0ROLE_COLUMN\0"
    "ROLE_ROW"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__AddressBookModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       2,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       7,    1,   44,    2, 0x0a /* Public */,
       8,    1,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // enums: name, flags, count, data
       9, 0x0,    3,   58,
      13, 0x0,    4,   64,

 // enum data: key, value
      10, uint(WalletGUI::AddressBookModel::COLUMN_LABEL),
      11, uint(WalletGUI::AddressBookModel::COLUMN_ADDRESS),
      12, uint(WalletGUI::AddressBookModel::COLUMN_ACTION),
      14, uint(WalletGUI::AddressBookModel::ROLE_LABEL),
      15, uint(WalletGUI::AddressBookModel::ROLE_ADDRESS),
      16, uint(WalletGUI::AddressBookModel::ROLE_COLUMN),
      17, uint(WalletGUI::AddressBookModel::ROLE_ROW),

       0        // eod
};

void WalletGUI::AddressBookModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddressBookModel *_t = static_cast<AddressBookModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addressBookOpened(); break;
        case 1: _t->addressBookClosed(); break;
        case 2: _t->addressAdded((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 3: _t->addressEdited((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 4: _t->addressRemoved((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WalletGUI::AddressBookModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_WalletGUI__AddressBookModel.data,
      qt_meta_data_WalletGUI__AddressBookModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletGUI::AddressBookModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::AddressBookModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__AddressBookModel.stringdata0))
        return static_cast<void*>(const_cast< AddressBookModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int WalletGUI::AddressBookModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
