/****************************************************************************
** Meta object code from reading C++ file 'Lobby.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Lobby.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Lobby.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Lobby_t {
    QByteArrayData data[14];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Lobby_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Lobby_t qt_meta_stringdata_Lobby = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Lobby"
QT_MOC_LITERAL(1, 6, 24), // "on_bouton_retour_pressed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 19), // "refreshOnlineClient"
QT_MOC_LITERAL(4, 52, 6), // "pseudo"
QT_MOC_LITERAL(5, 59, 7), // "inOrOut"
QT_MOC_LITERAL(6, 67, 16), // "initOnlineClient"
QT_MOC_LITERAL(7, 84, 1), // "s"
QT_MOC_LITERAL(8, 86, 6), // "upChat"
QT_MOC_LITERAL(9, 93, 3), // "msg"
QT_MOC_LITERAL(10, 97, 5), // "start"
QT_MOC_LITERAL(11, 103, 8), // "canStart"
QT_MOC_LITERAL(12, 112, 10), // "launchGame"
QT_MOC_LITERAL(13, 123, 23) // "on_button_envoi_pressed"

    },
    "Lobby\0on_bouton_retour_pressed\0\0"
    "refreshOnlineClient\0pseudo\0inOrOut\0"
    "initOnlineClient\0s\0upChat\0msg\0start\0"
    "canStart\0launchGame\0on_button_envoi_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Lobby[] = {

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
       3,    2,   55,    2, 0x08 /* Private */,
       6,    1,   60,    2, 0x08 /* Private */,
       8,    1,   63,    2, 0x08 /* Private */,
      10,    0,   66,    2, 0x08 /* Private */,
      11,    0,   67,    2, 0x08 /* Private */,
      12,    0,   68,    2, 0x08 /* Private */,
      13,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    4,    5,
    QMetaType::Void, QMetaType::QStringList,    7,
    QMetaType::Void, QMetaType::QStringList,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Lobby::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Lobby *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_bouton_retour_pressed(); break;
        case 1: _t->refreshOnlineClient((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->initOnlineClient((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->upChat((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 4: _t->start(); break;
        case 5: _t->canStart(); break;
        case 6: _t->launchGame(); break;
        case 7: _t->on_button_envoi_pressed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Lobby::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Lobby.data,
    qt_meta_data_Lobby,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Lobby::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lobby::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Lobby.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Lobby::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
