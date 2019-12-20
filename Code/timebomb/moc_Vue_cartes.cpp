/****************************************************************************
** Meta object code from reading C++ file 'Vue_cartes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Vue_cartes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Vue_cartes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Vue_cartes_t {
    QByteArrayData data[8];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Vue_cartes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Vue_cartes_t qt_meta_stringdata_Vue_cartes = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Vue_cartes"
QT_MOC_LITERAL(1, 11, 24), // "affichage_pseudo_joueurs"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 6), // "retour"
QT_MOC_LITERAL(4, 44, 23), // "affichage_cartes_joueur"
QT_MOC_LITERAL(5, 68, 21), // "on_validation_pressed"
QT_MOC_LITERAL(6, 90, 16), // "affichage_profil"
QT_MOC_LITERAL(7, 107, 12) // "clear_cartes"

    },
    "Vue_cartes\0affichage_pseudo_joueurs\0"
    "\0retour\0affichage_cartes_joueur\0"
    "on_validation_pressed\0affichage_profil\0"
    "clear_cartes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Vue_cartes[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Vue_cartes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Vue_cartes *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->affichage_pseudo_joueurs(); break;
        case 1: _t->retour(); break;
        case 2: _t->affichage_cartes_joueur(); break;
        case 3: _t->on_validation_pressed(); break;
        case 4: _t->affichage_profil(); break;
        case 5: _t->clear_cartes(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Vue_cartes::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Vue_cartes.data,
    qt_meta_data_Vue_cartes,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Vue_cartes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Vue_cartes::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Vue_cartes.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Vue_cartes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
