/****************************************************************************
** Meta object code from reading C++ file 'freechat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../test/Bin/freechat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'freechat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Freechat_t {
    QByteArrayData data[12];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Freechat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Freechat_t qt_meta_stringdata_Freechat = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Freechat"
QT_MOC_LITERAL(1, 9, 26), // "on_showNetworkInfo_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 27), // "on_connectionToPeer_clicked"
QT_MOC_LITERAL(4, 65, 32), // "on_lineForTypeText_returnPressed"
QT_MOC_LITERAL(5, 98, 33), // "on_writeWanIpOfPeer_returnPre..."
QT_MOC_LITERAL(6, 132, 33), // "on_writeLanIpOfPeer_returnPre..."
QT_MOC_LITERAL(7, 166, 32), // "on_writeNickOfPeer_returnPressed"
QT_MOC_LITERAL(8, 199, 37), // "on_listWithNickName_itemDoubl..."
QT_MOC_LITERAL(9, 237, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(10, 254, 4), // "item"
QT_MOC_LITERAL(11, 259, 31) // "on_listWithNickName_itemClicked"

    },
    "Freechat\0on_showNetworkInfo_clicked\0"
    "\0on_connectionToPeer_clicked\0"
    "on_lineForTypeText_returnPressed\0"
    "on_writeWanIpOfPeer_returnPressed\0"
    "on_writeLanIpOfPeer_returnPressed\0"
    "on_writeNickOfPeer_returnPressed\0"
    "on_listWithNickName_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0"
    "on_listWithNickName_itemClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Freechat[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      11,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void Freechat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Freechat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_showNetworkInfo_clicked(); break;
        case 1: _t->on_connectionToPeer_clicked(); break;
        case 2: _t->on_lineForTypeText_returnPressed(); break;
        case 3: _t->on_writeWanIpOfPeer_returnPressed(); break;
        case 4: _t->on_writeLanIpOfPeer_returnPressed(); break;
        case 5: _t->on_writeNickOfPeer_returnPressed(); break;
        case 6: _t->on_listWithNickName_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->on_listWithNickName_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Freechat::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Freechat.data,
    qt_meta_data_Freechat,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Freechat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Freechat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Freechat.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Freechat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
