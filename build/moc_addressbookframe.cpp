/****************************************************************************
** Meta object code from reading C++ file 'addressbookframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/addressbookframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addressbookframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGUI__AddressBookFrame_t {
    QByteArrayData data[11];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__AddressBookFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__AddressBookFrame_t qt_meta_stringdata_WalletGUI__AddressBookFrame = {
    {
QT_MOC_LITERAL(0, 0, 27), // "WalletGUI::AddressBookFrame"
QT_MOC_LITERAL(1, 28, 12), // "sendToSignal"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 8), // "_address"
QT_MOC_LITERAL(4, 51, 5), // "label"
QT_MOC_LITERAL(5, 57, 10), // "addClicked"
QT_MOC_LITERAL(6, 68, 11), // "editClicked"
QT_MOC_LITERAL(7, 80, 6), // "_index"
QT_MOC_LITERAL(8, 87, 13), // "deleteClicked"
QT_MOC_LITERAL(9, 101, 11), // "contextMenu"
QT_MOC_LITERAL(10, 113, 4) // "_pos"

    },
    "WalletGUI::AddressBookFrame\0sendToSignal\0"
    "\0_address\0label\0addClicked\0editClicked\0"
    "_index\0deleteClicked\0contextMenu\0_pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__AddressBookFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   44,    2, 0x08 /* Private */,
       6,    1,   45,    2, 0x08 /* Private */,
       8,    1,   48,    2, 0x08 /* Private */,
       9,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPersistentModelIndex,    7,
    QMetaType::Void, QMetaType::QPersistentModelIndex,    7,
    QMetaType::Void, QMetaType::QPoint,   10,

       0        // eod
};

void WalletGUI::AddressBookFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddressBookFrame *_t = static_cast<AddressBookFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendToSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->addClicked(); break;
        case 2: _t->editClicked((*reinterpret_cast< const QPersistentModelIndex(*)>(_a[1]))); break;
        case 3: _t->deleteClicked((*reinterpret_cast< const QPersistentModelIndex(*)>(_a[1]))); break;
        case 4: _t->contextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddressBookFrame::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddressBookFrame::sendToSignal)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject WalletGUI::AddressBookFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGUI__AddressBookFrame.data,
      qt_meta_data_WalletGUI__AddressBookFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletGUI::AddressBookFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::AddressBookFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__AddressBookFrame.stringdata0))
        return static_cast<void*>(const_cast< AddressBookFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int WalletGUI::AddressBookFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void WalletGUI::AddressBookFrame::sendToSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
