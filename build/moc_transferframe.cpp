/****************************************************************************
** Meta object code from reading C++ file 'transferframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/transferframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transferframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGUI__TransferFrame_t {
    QByteArrayData data[14];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__TransferFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__TransferFrame_t qt_meta_stringdata_WalletGUI__TransferFrame = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WalletGUI::TransferFrame"
QT_MOC_LITERAL(1, 25, 25), // "amountStringChangedSignal"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 12), // "amountString"
QT_MOC_LITERAL(4, 65, 20), // "addressChangedSignal"
QT_MOC_LITERAL(5, 86, 7), // "address"
QT_MOC_LITERAL(6, 94, 14), // "validateAmount"
QT_MOC_LITERAL(7, 109, 6), // "amount"
QT_MOC_LITERAL(8, 116, 19), // "amountStringChanged"
QT_MOC_LITERAL(9, 136, 14), // "addressChanged"
QT_MOC_LITERAL(10, 151, 21), // "labelOrAddressChanged"
QT_MOC_LITERAL(11, 173, 4), // "text"
QT_MOC_LITERAL(12, 178, 18), // "addressBookClicked"
QT_MOC_LITERAL(13, 197, 12) // "pasteClicked"

    },
    "WalletGUI::TransferFrame\0"
    "amountStringChangedSignal\0\0amountString\0"
    "addressChangedSignal\0address\0"
    "validateAmount\0amount\0amountStringChanged\0"
    "addressChanged\0labelOrAddressChanged\0"
    "text\0addressBookClicked\0pasteClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__TransferFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   60,    2, 0x08 /* Private */,
       8,    1,   63,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      10,    1,   69,    2, 0x08 /* Private */,
      12,    0,   72,    2, 0x08 /* Private */,
      13,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WalletGUI::TransferFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransferFrame *_t = static_cast<TransferFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->amountStringChangedSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->addressChangedSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->validateAmount((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->amountStringChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->addressChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->labelOrAddressChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->addressBookClicked(); break;
        case 7: _t->pasteClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TransferFrame::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransferFrame::amountStringChangedSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (TransferFrame::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransferFrame::addressChangedSignal)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject WalletGUI::TransferFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGUI__TransferFrame.data,
      qt_meta_data_WalletGUI__TransferFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletGUI::TransferFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::TransferFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__TransferFrame.stringdata0))
        return static_cast<void*>(const_cast< TransferFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int WalletGUI::TransferFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void WalletGUI::TransferFrame::amountStringChangedSignal(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGUI::TransferFrame::addressChangedSignal(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
