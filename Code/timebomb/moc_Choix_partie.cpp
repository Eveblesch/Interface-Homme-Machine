/****************************************************************************
** Meta object code from reading C++ file 'Choix_partie.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Choix_partie.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Choix_partie.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Choix_partie_t {
    QByteArrayData data[14];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Choix_partie_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Choix_partie_t qt_meta_stringdata_Choix_partie = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Choix_partie"
QT_MOC_LITERAL(1, 13, 8), // "prepRoom"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 1), // "l"
QT_MOC_LITERAL(4, 25, 11), // "gotAuthRoom"
QT_MOC_LITERAL(5, 37, 4), // "name"
QT_MOC_LITERAL(6, 42, 24), // "on_button_retour_pressed"
QT_MOC_LITERAL(7, 67, 30), // "on_button_creer_partie_pressed"
QT_MOC_LITERAL(8, 98, 8), // "joinRoom"
QT_MOC_LITERAL(9, 107, 5), // "salon"
QT_MOC_LITERAL(10, 113, 9), // "enterRoom"
QT_MOC_LITERAL(11, 123, 14), // "fwdGotAuthRoom"
QT_MOC_LITERAL(12, 138, 1), // "n"
QT_MOC_LITERAL(13, 140, 13) // "hRefreshRooms"

    },
    "Choix_partie\0prepRoom\0\0l\0gotAuthRoom\0"
    "name\0on_button_retour_pressed\0"
    "on_button_creer_partie_pressed\0joinRoom\0"
    "salon\0enterRoom\0fwdGotAuthRoom\0n\0"
    "hRefreshRooms"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Choix_partie[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   60,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
      10,    1,   65,    2, 0x08 /* Private */,
      11,    1,   68,    2, 0x08 /* Private */,
      13,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,

       0        // eod
};

void Choix_partie::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Choix_partie *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->prepRoom((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->gotAuthRoom((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_button_retour_pressed(); break;
        case 3: _t->on_button_creer_partie_pressed(); break;
        case 4: _t->joinRoom((*reinterpret_cast< salon(*)>(_a[1]))); break;
        case 5: _t->enterRoom((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->fwdGotAuthRoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->hRefreshRooms(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Choix_partie::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Choix_partie::prepRoom)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Choix_partie::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Choix_partie::gotAuthRoom)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Choix_partie::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Choix_partie.data,
    qt_meta_data_Choix_partie,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Choix_partie::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Choix_partie::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Choix_partie.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Choix_partie::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Choix_partie::prepRoom(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Choix_partie::gotAuthRoom(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
