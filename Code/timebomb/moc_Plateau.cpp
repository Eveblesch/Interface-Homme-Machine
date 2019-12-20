/****************************************************************************
** Meta object code from reading C++ file 'Plateau.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Plateau.h"
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
    QByteArrayData data[24];
    char stringdata0[300];
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
QT_MOC_LITERAL(3, 32, 12), // "listePseudos"
QT_MOC_LITERAL(4, 45, 17), // "reafficherContenu"
QT_MOC_LITERAL(5, 63, 11), // "clearLayout"
QT_MOC_LITERAL(6, 75, 8), // "QLayout*"
QT_MOC_LITERAL(7, 84, 6), // "layout"
QT_MOC_LITERAL(8, 91, 16), // "voirCarteJoueurs"
QT_MOC_LITERAL(9, 108, 11), // "recommencer"
QT_MOC_LITERAL(10, 120, 16), // "creation_joueurs"
QT_MOC_LITERAL(11, 137, 23), // "on_joueur_button_pushed"
QT_MOC_LITERAL(12, 161, 8), // "AuTourDe"
QT_MOC_LITERAL(13, 170, 1), // "a"
QT_MOC_LITERAL(14, 172, 29), // "on_carte_button_milieu_pushed"
QT_MOC_LITERAL(15, 202, 9), // "infos_jeu"
QT_MOC_LITERAL(16, 212, 14), // "evolution_tour"
QT_MOC_LITERAL(17, 227, 8), // "melanger"
QT_MOC_LITERAL(18, 236, 9), // "resultats"
QT_MOC_LITERAL(19, 246, 10), // "fin_partie"
QT_MOC_LITERAL(20, 257, 6), // "numero"
QT_MOC_LITERAL(21, 264, 6), // "initFJ"
QT_MOC_LITERAL(22, 271, 13), // "quitterPartie"
QT_MOC_LITERAL(23, 285, 14) // "retour_accueil"

    },
    "Plateau\0on_bouton_play_pressed\0\0"
    "listePseudos\0reafficherContenu\0"
    "clearLayout\0QLayout*\0layout\0"
    "voirCarteJoueurs\0recommencer\0"
    "creation_joueurs\0on_joueur_button_pushed\0"
    "AuTourDe\0a\0on_carte_button_milieu_pushed\0"
    "infos_jeu\0evolution_tour\0melanger\0"
    "resultats\0fin_partie\0numero\0initFJ\0"
    "quitterPartie\0retour_accueil"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Plateau[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x0a /* Public */,
       4,    0,  102,    2, 0x0a /* Public */,
       5,    1,  103,    2, 0x0a /* Public */,
       8,    0,  106,    2, 0x0a /* Public */,
       9,    0,  107,    2, 0x0a /* Public */,
      10,    0,  108,    2, 0x08 /* Private */,
      11,    0,  109,    2, 0x08 /* Private */,
      12,    1,  110,    2, 0x08 /* Private */,
      14,    0,  113,    2, 0x08 /* Private */,
      15,    0,  114,    2, 0x08 /* Private */,
      16,    0,  115,    2, 0x08 /* Private */,
      17,    0,  116,    2, 0x08 /* Private */,
      18,    0,  117,    2, 0x08 /* Private */,
      19,    1,  118,    2, 0x08 /* Private */,
      21,    1,  121,    2, 0x08 /* Private */,
      22,    0,  124,    2, 0x08 /* Private */,
      23,    0,  125,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::UInt,   20,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Plateau::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Plateau *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_bouton_play_pressed((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->reafficherContenu(); break;
        case 2: _t->clearLayout((*reinterpret_cast< QLayout*(*)>(_a[1]))); break;
        case 3: _t->voirCarteJoueurs(); break;
        case 4: _t->recommencer(); break;
        case 5: _t->creation_joueurs(); break;
        case 6: _t->on_joueur_button_pushed(); break;
        case 7: _t->AuTourDe((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 8: _t->on_carte_button_milieu_pushed(); break;
        case 9: _t->infos_jeu(); break;
        case 10: _t->evolution_tour(); break;
        case 11: _t->melanger(); break;
        case 12: _t->resultats(); break;
        case 13: _t->fin_partie((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->initFJ((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 15: _t->quitterPartie(); break;
        case 16: _t->retour_accueil(); break;
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
