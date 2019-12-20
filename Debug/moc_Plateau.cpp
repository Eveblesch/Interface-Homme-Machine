/****************************************************************************
** Meta object code from reading C++ file 'Plateau.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Code/timebomb/Plateau.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Plateau.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Plateau_t {
    QByteArrayData data[23];
    char stringdata0[295];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Plateau_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Plateau_t qt_meta_stringdata_Plateau = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Plateau"
QT_MOC_LITERAL(1, 8, 22), // "on_bouton_play_pressed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "nbrjoueur"
QT_MOC_LITERAL(4, 42, 17), // "reafficherContenu"
QT_MOC_LITERAL(5, 60, 11), // "clearLayout"
QT_MOC_LITERAL(6, 72, 8), // "QLayout*"
QT_MOC_LITERAL(7, 81, 6), // "layout"
QT_MOC_LITERAL(8, 88, 22), // "on_carte_button_pushed"
QT_MOC_LITERAL(9, 111, 16), // "creation_joueurs"
QT_MOC_LITERAL(10, 128, 23), // "on_joueur_button_pushed"
QT_MOC_LITERAL(11, 152, 8), // "AuTourDe"
QT_MOC_LITERAL(12, 161, 1), // "a"
QT_MOC_LITERAL(13, 163, 29), // "on_carte_button_milieu_pushed"
QT_MOC_LITERAL(14, 193, 11), // "info_joueur"
QT_MOC_LITERAL(15, 205, 9), // "infos_jeu"
QT_MOC_LITERAL(16, 215, 14), // "evolution_tour"
QT_MOC_LITERAL(17, 230, 8), // "melanger"
QT_MOC_LITERAL(18, 239, 9), // "resultats"
QT_MOC_LITERAL(19, 249, 10), // "fin_partie"
QT_MOC_LITERAL(20, 260, 6), // "numero"
QT_MOC_LITERAL(21, 267, 20), // "on_carte_info_pushed"
QT_MOC_LITERAL(22, 288, 6) // "initFJ"

    },
    "Plateau\0on_bouton_play_pressed\0\0"
    "nbrjoueur\0reafficherContenu\0clearLayout\0"
    "QLayout*\0layout\0on_carte_button_pushed\0"
    "creation_joueurs\0on_joueur_button_pushed\0"
    "AuTourDe\0a\0on_carte_button_milieu_pushed\0"
    "info_joueur\0infos_jeu\0evolution_tour\0"
    "melanger\0resultats\0fin_partie\0numero\0"
    "on_carte_info_pushed\0initFJ"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Plateau[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x0a /* Public */,
       4,    0,   97,    2, 0x0a /* Public */,
       5,    1,   98,    2, 0x0a /* Public */,
       8,    0,  101,    2, 0x08 /* Private */,
       9,    0,  102,    2, 0x08 /* Private */,
      10,    0,  103,    2, 0x08 /* Private */,
      11,    1,  104,    2, 0x08 /* Private */,
      13,    0,  107,    2, 0x08 /* Private */,
      14,    1,  108,    2, 0x08 /* Private */,
      15,    0,  111,    2, 0x08 /* Private */,
      16,    0,  112,    2, 0x08 /* Private */,
      17,    0,  113,    2, 0x08 /* Private */,
      18,    0,  114,    2, 0x08 /* Private */,
      19,    1,  115,    2, 0x08 /* Private */,
      21,    0,  118,    2, 0x08 /* Private */,
      22,    1,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   20,

       0        // eod
};

void Plateau::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Plateau *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_bouton_play_pressed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->reafficherContenu(); break;
        case 2: _t->clearLayout((*reinterpret_cast< QLayout*(*)>(_a[1]))); break;
        case 3: _t->on_carte_button_pushed(); break;
        case 4: _t->creation_joueurs(); break;
        case 5: _t->on_joueur_button_pushed(); break;
        case 6: _t->AuTourDe((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 7: _t->on_carte_button_milieu_pushed(); break;
        case 8: _t->info_joueur((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 9: _t->infos_jeu(); break;
        case 10: _t->evolution_tour(); break;
        case 11: _t->melanger(); break;
        case 12: _t->resultats(); break;
        case 13: _t->fin_partie((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_carte_info_pushed(); break;
        case 15: _t->initFJ((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLayout* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Plateau::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Plateau.data,
    qt_meta_data_Plateau,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Plateau::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Plateau::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Plateau.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Plateau::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
