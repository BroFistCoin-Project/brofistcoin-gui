/****************************************************************************
** Meta object code from reading C++ file 'logger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/logger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGUI__WalletLogger_t {
    QByteArrayData data[7];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__WalletLogger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__WalletLogger_t qt_meta_stringdata_WalletGUI__WalletLogger = {
    {
QT_MOC_LITERAL(0, 0, 23), // "WalletGUI::WalletLogger"
QT_MOC_LITERAL(1, 24, 9), // "debugImpl"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "message"
QT_MOC_LITERAL(4, 43, 8), // "infoImpl"
QT_MOC_LITERAL(5, 52, 11), // "warningImpl"
QT_MOC_LITERAL(6, 64, 12) // "criticalImpl"

    },
    "WalletGUI::WalletLogger\0debugImpl\0\0"
    "message\0infoImpl\0warningImpl\0criticalImpl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__WalletLogger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x00 /* Private */,
       4,    1,   37,    2, 0x00 /* Private */,
       5,    1,   40,    2, 0x00 /* Private */,
       6,    1,   43,    2, 0x00 /* Private */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void WalletGUI::WalletLogger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletLogger *_t = static_cast<WalletLogger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->debugImpl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->infoImpl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->warningImpl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->criticalImpl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WalletGUI::WalletLogger::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGUI__WalletLogger.data,
      qt_meta_data_WalletGUI__WalletLogger,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletGUI::WalletLogger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::WalletLogger::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__WalletLogger.stringdata0))
        return static_cast<void*>(const_cast< WalletLogger*>(this));
    return QObject::qt_metacast(_clname);
}

int WalletGUI::WalletLogger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
