/****************************************************************************
** Meta object code from reading C++ file 'sendframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/sendframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletGUI__SendFrame_t {
    QByteArrayData data[21];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGUI__SendFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGUI__SendFrame_t qt_meta_stringdata_WalletGUI__SendFrame = {
    {
QT_MOC_LITERAL(0, 0, 20), // "WalletGUI::SendFrame"
QT_MOC_LITERAL(1, 21, 27), // "showTransactionsFrameSignal"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 14), // "createTxSignal"
QT_MOC_LITERAL(4, 65, 19), // "RpcApi::Transaction"
QT_MOC_LITERAL(5, 85, 2), // "tx"
QT_MOC_LITERAL(6, 88, 3), // "fee"
QT_MOC_LITERAL(7, 92, 8), // "clearAll"
QT_MOC_LITERAL(8, 101, 10), // "cancelSend"
QT_MOC_LITERAL(9, 112, 19), // "addRecipientClicked"
QT_MOC_LITERAL(10, 132, 11), // "sendClicked"
QT_MOC_LITERAL(11, 144, 17), // "mixinValueChanged"
QT_MOC_LITERAL(12, 162, 5), // "value"
QT_MOC_LITERAL(13, 168, 15), // "feeValueChanged"
QT_MOC_LITERAL(14, 184, 17), // "validatePaymentId"
QT_MOC_LITERAL(15, 202, 9), // "paymentId"
QT_MOC_LITERAL(16, 212, 9), // "updateFee"
QT_MOC_LITERAL(17, 222, 7), // "topLeft"
QT_MOC_LITERAL(18, 230, 11), // "bottomRight"
QT_MOC_LITERAL(19, 242, 12), // "QVector<int>"
QT_MOC_LITERAL(20, 255, 5) // "roles"

    },
    "WalletGUI::SendFrame\0showTransactionsFrameSignal\0"
    "\0createTxSignal\0RpcApi::Transaction\0"
    "tx\0fee\0clearAll\0cancelSend\0"
    "addRecipientClicked\0sendClicked\0"
    "mixinValueChanged\0value\0feeValueChanged\0"
    "validatePaymentId\0paymentId\0updateFee\0"
    "topLeft\0bottomRight\0QVector<int>\0roles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGUI__SendFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    2,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   70,    2, 0x0a /* Public */,
       8,    0,   71,    2, 0x0a /* Public */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,
      14,    1,   80,    2, 0x08 /* Private */,
      16,    3,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::ULongLong,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex, 0x80000000 | 19,   17,   18,   20,

       0        // eod
};

void WalletGUI::SendFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendFrame *_t = static_cast<SendFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showTransactionsFrameSignal(); break;
        case 1: _t->createTxSignal((*reinterpret_cast< const RpcApi::Transaction(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 2: _t->clearAll(); break;
        case 3: _t->cancelSend(); break;
        case 4: _t->addRecipientClicked(); break;
        case 5: _t->sendClicked(); break;
        case 6: _t->mixinValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->feeValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->validatePaymentId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->updateFee((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SendFrame::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendFrame::showTransactionsFrameSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (SendFrame::*_t)(const RpcApi::Transaction & , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendFrame::createTxSignal)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject WalletGUI::SendFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGUI__SendFrame.data,
      qt_meta_data_WalletGUI__SendFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletGUI::SendFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGUI::SendFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGUI__SendFrame.stringdata0))
        return static_cast<void*>(const_cast< SendFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int WalletGUI::SendFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void WalletGUI::SendFrame::showTransactionsFrameSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void WalletGUI::SendFrame::createTxSignal(const RpcApi::Transaction & _t1, quint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
