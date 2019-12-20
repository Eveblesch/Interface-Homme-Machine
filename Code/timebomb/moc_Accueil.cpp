/****************************************************************************
** Meta object code from reading C++ file 'Accueil.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Accueil.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Accueil.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Accueil_t {
    QByteArrayData data[13];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Accueil_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Accueil_t qt_meta_stringdata_Accueil = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Accueil"
QT_MOC_LITERAL(1, 8, 6), // "pseudo"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 1), // "p"
QT_MOC_LITERAL(4, 18, 23), // "on_button_jouer_pressed"
QT_MOC_LITERAL(5, 42, 30), // "on_button_instructions_pressed"
QT_MOC_LITERAL(6, 73, 29), // "on_pushButton_options_pressed"
QT_MOC_LITERAL(7, 103, 25), // "on_bouton_quitter_pressed"
QT_MOC_LITERAL(8, 129, 25), // "on_button_offline_pressed"
QT_MOC_LITERAL(9, 155, 11), // "changeEvent"
QT_MOC_LITERAL(10, 167, 7), // "QEvent*"
QT_MOC_LITERAL(11, 175, 5), // "event"
QT_MOC_LITERAL(12, 181, 22) // "on_button_solo_pressed"

    },
    "Accueil\0pseudo\0\0p\0on_button_jouer_pressed\0"
    "on_button_instructions_pressed\0"
    "on_pushButton_options_pressed\0"
    "on_bouton_quitter_pressed\0"
    "on_button_offline_pressed\0changeEvent\0"
    "QEvent*\0event\0on_button_solo_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Accueil[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    1,   62,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void Accueil::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Accueil *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pseudo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_button_jouer_pressed(); break;
        case 2: _t->on_button_instructions_pressed(); break;
        case 3: _t->on_pushButton_options_pressed(); break;
        case 4: _t->on_bouton_quitter_pressed(); break;
        case 5: _t->on_button_offline_pressed(); break;
        case 6: _t->changeEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 7: _t->on_button_solo_pressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Accueil::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Accueil::pseudo)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Accueil::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Accueil.data,
    qt_meta_data_Accueil,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Accueil::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Accueil::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Accueil.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Accueil::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Accueil::pseudo(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
