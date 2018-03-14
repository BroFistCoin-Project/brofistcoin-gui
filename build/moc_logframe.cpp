/****************************************************************************
** Meta object code from reading C++ file 'logframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/logframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGUI__LogFrame_t {
    QByteArrayData data[10];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__LogFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__LogFrame_t qt_meta_stringdata_WalletGUI__LogFrame = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WalletGUI::LogFrame"
QT_MOC_LITERAL(1, 20, 15), // "addDaemonOutput"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "data"
QT_MOC_LITERAL(4, 42, 14), // "addDaemonError"
QT_MOC_LITERAL(5, 57, 13), // "addGuiMessage"
QT_MOC_LITERAL(6, 71, 17), // "addNetworkMessage"
QT_MOC_LITERAL(7, 89, 15), // "copyToClipboard"
QT_MOC_LITERAL(8, 105, 8), // "scrolled"
QT_MOC_LITERAL(9, 114, 5) // "value"

    },
    "WalletGUI::LogFrame\0addDaemonOutput\0"
    "\0data\0addDaemonError\0addGuiMessage\0"
    "addNetworkMessage\0copyToClipboard\0"
    "scrolled\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__LogFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       5,    1,   50,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x0a /* Public */,
       8,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void WalletGUI::LogFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogFrame *_t = static_cast<LogFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addDaemonOutput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->addDaemonError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->addGuiMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->addNetworkMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->copyToClipboard(); break;
        case 5: _t->scrolled((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WalletGUI::LogFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGUI__LogFrame.data,
      qt_meta_data_WalletGUI__LogFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletGUI::LogFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::LogFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__LogFrame.stringdata0))
        return static_cast<void*>(const_cast< LogFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int WalletGUI::LogFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
