/****************************************************************************
** Meta object code from reading C++ file 'popup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/popup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'popup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGUI__MagicToolTip_t {
    QByteArrayData data[18];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__MagicToolTip_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__MagicToolTip_t qt_meta_stringdata_WalletGUI__MagicToolTip = {
    {
QT_MOC_LITERAL(0, 0, 23), // "WalletGUI::MagicToolTip"
QT_MOC_LITERAL(1, 24, 10), // "setToolTip"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "text"
QT_MOC_LITERAL(4, 41, 13), // "setMinOpacity"
QT_MOC_LITERAL(5, 55, 5), // "value"
QT_MOC_LITERAL(6, 61, 13), // "setMaxOpacity"
QT_MOC_LITERAL(7, 75, 24), // "setShowAnimationDuration"
QT_MOC_LITERAL(8, 100, 5), // "msecs"
QT_MOC_LITERAL(9, 106, 24), // "setHideAnimationDuration"
QT_MOC_LITERAL(10, 131, 18), // "setToolTipDuration"
QT_MOC_LITERAL(11, 150, 4), // "show"
QT_MOC_LITERAL(12, 155, 5), // "point"
QT_MOC_LITERAL(13, 161, 1), // "x"
QT_MOC_LITERAL(14, 163, 1), // "y"
QT_MOC_LITERAL(15, 165, 13), // "hideAnimation"
QT_MOC_LITERAL(16, 179, 10), // "setOpacity"
QT_MOC_LITERAL(17, 190, 7) // "opacity"

    },
    "WalletGUI::MagicToolTip\0setToolTip\0\0"
    "text\0setMinOpacity\0value\0setMaxOpacity\0"
    "setShowAnimationDuration\0msecs\0"
    "setHideAnimationDuration\0setToolTipDuration\0"
    "show\0point\0x\0y\0hideAnimation\0setOpacity\0"
    "opacity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__MagicToolTip[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       1,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    1,   67,    2, 0x0a /* Public */,
       6,    1,   70,    2, 0x0a /* Public */,
       7,    1,   73,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x0a /* Public */,
      10,    1,   79,    2, 0x0a /* Public */,
      11,    1,   82,    2, 0x0a /* Public */,
      11,    2,   85,    2, 0x0a /* Public */,
      15,    0,   90,    2, 0x08 /* Private */,
      16,    1,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QPoint,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    5,

 // properties: name, type, flags
      17, QMetaType::Float, 0x00095103,

       0        // eod
};

void WalletGUI::MagicToolTip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MagicToolTip *_t = static_cast<MagicToolTip *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setToolTip((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setMinOpacity((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->setMaxOpacity((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setShowAnimationDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setHideAnimationDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setToolTipDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->show((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->show((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->hideAnimation(); break;
        case 9: _t->setOpacity((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MagicToolTip *_t = static_cast<MagicToolTip *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->opacity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MagicToolTip *_t = static_cast<MagicToolTip *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOpacity(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject WalletGUI::MagicToolTip::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WalletGUI__MagicToolTip.data,
      qt_meta_data_WalletGUI__MagicToolTip,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletGUI::MagicToolTip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::MagicToolTip::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__MagicToolTip.stringdata0))
        return static_cast<void*>(const_cast< MagicToolTip*>(this));
    return QWidget::qt_metacast(_clname);
}

int WalletGUI::MagicToolTip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_WalletGUI__CopiedToolTip_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__CopiedToolTip_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__CopiedToolTip_t qt_meta_stringdata_WalletGUI__CopiedToolTip = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WalletGUI::CopiedToolTip"
QT_MOC_LITERAL(1, 25, 13), // "showNearMouse"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "WalletGUI::CopiedToolTip\0showNearMouse\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__CopiedToolTip[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WalletGUI::CopiedToolTip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CopiedToolTip *_t = static_cast<CopiedToolTip *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showNearMouse(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WalletGUI::CopiedToolTip::staticMetaObject = {
    { &MagicToolTip::staticMetaObject, qt_meta_stringdata_WalletGUI__CopiedToolTip.data,
      qt_meta_data_WalletGUI__CopiedToolTip,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletGUI::CopiedToolTip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::CopiedToolTip::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__CopiedToolTip.stringdata0))
        return static_cast<void*>(const_cast< CopiedToolTip*>(this));
    return MagicToolTip::qt_metacast(_clname);
}

int WalletGUI::CopiedToolTip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MagicToolTip::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
