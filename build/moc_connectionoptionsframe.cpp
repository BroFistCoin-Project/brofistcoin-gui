/****************************************************************************
** Meta object code from reading C++ file 'connectionoptionsframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/connectionoptionsframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionoptionsframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGUI__ConnectionOptionsFrame_t {
    QByteArrayData data[14];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__ConnectionOptionsFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__ConnectionOptionsFrame_t qt_meta_stringdata_WalletGUI__ConnectionOptionsFrame = {
    {
QT_MOC_LITERAL(0, 0, 33), // "WalletGUI::ConnectionOptionsF..."
QT_MOC_LITERAL(1, 34, 24), // "showRestartWarningSignal"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 4), // "show"
QT_MOC_LITERAL(4, 65, 25), // "disableAcceptButtonSignal"
QT_MOC_LITERAL(5, 91, 7), // "disable"
QT_MOC_LITERAL(6, 99, 21), // "remoteHostNameChanged"
QT_MOC_LITERAL(7, 121, 4), // "host"
QT_MOC_LITERAL(8, 126, 21), // "walletFileNameChanged"
QT_MOC_LITERAL(9, 148, 6), // "wallet"
QT_MOC_LITERAL(10, 155, 23), // "connectionButtonClicked"
QT_MOC_LITERAL(11, 179, 8), // "buttonId"
QT_MOC_LITERAL(12, 188, 24), // "showOpenWalletFileDialog"
QT_MOC_LITERAL(13, 213, 26) // "showCreateWalletFileDialog"

    },
    "WalletGUI::ConnectionOptionsFrame\0"
    "showRestartWarningSignal\0\0show\0"
    "disableAcceptButtonSignal\0disable\0"
    "remoteHostNameChanged\0host\0"
    "walletFileNameChanged\0wallet\0"
    "connectionButtonClicked\0buttonId\0"
    "showOpenWalletFileDialog\0"
    "showCreateWalletFileDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__ConnectionOptionsFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   55,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
      10,    1,   61,    2, 0x08 /* Private */,
      12,    0,   64,    2, 0x08 /* Private */,
      13,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    7,
    QMetaType::Bool, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WalletGUI::ConnectionOptionsFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConnectionOptionsFrame *_t = static_cast<ConnectionOptionsFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showRestartWarningSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->disableAcceptButtonSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->remoteHostNameChanged((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->walletFileNameChanged((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->connectionButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->showOpenWalletFileDialog(); break;
        case 6: _t->showCreateWalletFileDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ConnectionOptionsFrame::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConnectionOptionsFrame::showRestartWarningSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (ConnectionOptionsFrame::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConnectionOptionsFrame::disableAcceptButtonSignal)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject WalletGUI::ConnectionOptionsFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGUI__ConnectionOptionsFrame.data,
      qt_meta_data_WalletGUI__ConnectionOptionsFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletGUI::ConnectionOptionsFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::ConnectionOptionsFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__ConnectionOptionsFrame.stringdata0))
        return static_cast<void*>(const_cast< ConnectionOptionsFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int WalletGUI::ConnectionOptionsFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void WalletGUI::ConnectionOptionsFrame::showRestartWarningSignal(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGUI::ConnectionOptionsFrame::disableAcceptButtonSignal(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
