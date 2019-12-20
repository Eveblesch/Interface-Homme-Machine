/****************************************************************************
** Meta object code from reading C++ file 'worker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "worker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'worker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Worker_t {
    QByteArrayData data[33];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Worker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Worker_t qt_meta_stringdata_Worker = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Worker"
QT_MOC_LITERAL(1, 7, 8), // "finished"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 5), // "error"
QT_MOC_LITERAL(4, 23, 8), // "errorMsg"
QT_MOC_LITERAL(5, 32, 13), // "nbUserChanged"
QT_MOC_LITERAL(6, 46, 10), // "canWeStart"
QT_MOC_LITERAL(7, 57, 9), // "closeRoom"
QT_MOC_LITERAL(8, 67, 12), // "heyServClose"
QT_MOC_LITERAL(9, 80, 7), // "Worker*"
QT_MOC_LITERAL(10, 88, 1), // "w"
QT_MOC_LITERAL(11, 90, 6), // "setVis"
QT_MOC_LITERAL(12, 97, 2), // "id"
QT_MOC_LITERAL(13, 100, 1), // "b"
QT_MOC_LITERAL(14, 102, 8), // "gameOver"
QT_MOC_LITERAL(15, 111, 8), // "turnOver"
QT_MOC_LITERAL(16, 120, 9), // "roundOver"
QT_MOC_LITERAL(17, 130, 13), // "threadSendAll"
QT_MOC_LITERAL(18, 144, 3), // "msg"
QT_MOC_LITERAL(19, 148, 18), // "threadSendSpecific"
QT_MOC_LITERAL(20, 167, 5), // "User*"
QT_MOC_LITERAL(21, 173, 1), // "u"
QT_MOC_LITERAL(22, 175, 15), // "hAddUserToSalon"
QT_MOC_LITERAL(23, 191, 21), // "hUserLeftUnexpectedly"
QT_MOC_LITERAL(24, 213, 13), // "hNbUserChecks"
QT_MOC_LITERAL(25, 227, 10), // "hWReadData"
QT_MOC_LITERAL(26, 238, 6), // "packet"
QT_MOC_LITERAL(27, 245, 10), // "hStartGame"
QT_MOC_LITERAL(28, 256, 8), // "hNewTurn"
QT_MOC_LITERAL(29, 265, 9), // "hNewRound"
QT_MOC_LITERAL(30, 275, 13), // "hGameFinished"
QT_MOC_LITERAL(31, 289, 10), // "hCloseRoom"
QT_MOC_LITERAL(32, 300, 18) // "hUpdateVisOnClient"

    },
    "Worker\0finished\0\0error\0errorMsg\0"
    "nbUserChanged\0canWeStart\0closeRoom\0"
    "heyServClose\0Worker*\0w\0setVis\0id\0b\0"
    "gameOver\0turnOver\0roundOver\0threadSendAll\0"
    "msg\0threadSendSpecific\0User*\0u\0"
    "hAddUserToSalon\0hUserLeftUnexpectedly\0"
    "hNbUserChecks\0hWReadData\0packet\0"
    "hStartGame\0hNewTurn\0hNewRound\0"
    "hGameFinished\0hCloseRoom\0hUpdateVisOnClient"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Worker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x06 /* Public */,
       3,    1,  125,    2, 0x06 /* Public */,
       5,    0,  128,    2, 0x06 /* Public */,
       6,    0,  129,    2, 0x06 /* Public */,
       7,    0,  130,    2, 0x06 /* Public */,
       8,    1,  131,    2, 0x06 /* Public */,
      11,    2,  134,    2, 0x06 /* Public */,
      14,    0,  139,    2, 0x06 /* Public */,
      15,    0,  140,    2, 0x06 /* Public */,
      16,    0,  141,    2, 0x06 /* Public */,
      17,    1,  142,    2, 0x06 /* Public */,
      19,    2,  145,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    1,  150,    2, 0x0a /* Public */,
      23,    1,  153,    2, 0x0a /* Public */,
      24,    0,  156,    2, 0x0a /* Public */,
      25,    2,  157,    2, 0x0a /* Public */,
      27,    0,  162,    2, 0x0a /* Public */,
      28,    0,  163,    2, 0x0a /* Public */,
      29,    0,  164,    2, 0x0a /* Public */,
      30,    0,  165,    2, 0x0a /* Public */,
      31,    0,  166,    2, 0x0a /* Public */,
      32,    0,  167,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 20,   18,   21,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 20,   26,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Worker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Worker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->nbUserChanged(); break;
        case 3: _t->canWeStart(); break;
        case 4: _t->closeRoom(); break;
        case 5: _t->heyServClose((*reinterpret_cast< Worker*(*)>(_a[1]))); break;
        case 6: _t->setVis((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->gameOver(); break;
        case 8: _t->turnOver(); break;
        case 9: _t->roundOver(); break;
        case 10: _t->threadSendAll((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->threadSendSpecific((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< User*(*)>(_a[2]))); break;
        case 12: _t->hAddUserToSalon((*reinterpret_cast< User*(*)>(_a[1]))); break;
        case 13: _t->hUserLeftUnexpectedly((*reinterpret_cast< User*(*)>(_a[1]))); break;
        case 14: _t->hNbUserChecks(); break;
        case 15: _t->hWReadData((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< User*(*)>(_a[2]))); break;
        case 16: _t->hStartGame(); break;
        case 17: _t->hNewTurn(); break;
        case 18: _t->hNewRound(); break;
        case 19: _t->hGameFinished(); break;
        case 20: _t->hCloseRoom(); break;
        case 21: _t->hUpdateVisOnClient(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Worker* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Worker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::error)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::nbUserChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::canWeStart)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::closeRoom)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Worker::*)(Worker * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::heyServClose)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Worker::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::setVis)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::gameOver)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::turnOver)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::roundOver)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Worker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::threadSendAll)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Worker::*)(QString , User * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::threadSendSpecific)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Worker::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Worker.data,
    qt_meta_data_Worker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Worker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Worker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Worker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Worker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void Worker::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Worker::error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Worker::nbUserChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Worker::canWeStart()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Worker::closeRoom()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Worker::heyServClose(Worker * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Worker::setVis(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Worker::gameOver()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Worker::turnOver()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Worker::roundOver()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Worker::threadSendAll(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Worker::threadSendSpecific(QString _t1, User * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
