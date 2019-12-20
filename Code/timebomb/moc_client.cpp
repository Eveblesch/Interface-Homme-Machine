/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Client_t {
    QByteArrayData data[61];
    char stringdata0[584];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Client_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Client_t qt_meta_stringdata_Client = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Client"
QT_MOC_LITERAL(1, 7, 14), // "closeConnexion"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "createRoom"
QT_MOC_LITERAL(4, 34, 6), // "nbjmax"
QT_MOC_LITERAL(5, 41, 4), // "auth"
QT_MOC_LITERAL(6, 46, 6), // "paswwd"
QT_MOC_LITERAL(7, 53, 4), // "name"
QT_MOC_LITERAL(8, 58, 4), // "quit"
QT_MOC_LITERAL(9, 63, 8), // "quitRoom"
QT_MOC_LITERAL(10, 72, 8), // "joinRoom"
QT_MOC_LITERAL(11, 81, 2), // "id"
QT_MOC_LITERAL(12, 84, 7), // "annonce"
QT_MOC_LITERAL(13, 92, 4), // "bomb"
QT_MOC_LITERAL(14, 97, 7), // "diffuse"
QT_MOC_LITERAL(15, 105, 3), // "cut"
QT_MOC_LITERAL(16, 109, 7), // "njoueur"
QT_MOC_LITERAL(17, 117, 6), // "ncarte"
QT_MOC_LITERAL(18, 124, 4), // "chat"
QT_MOC_LITERAL(19, 129, 3), // "msg"
QT_MOC_LITERAL(20, 133, 9), // "startGame"
QT_MOC_LITERAL(21, 143, 8), // "asklobby"
QT_MOC_LITERAL(22, 152, 8), // "gotLobby"
QT_MOC_LITERAL(23, 161, 11), // "gotAuthRoom"
QT_MOC_LITERAL(24, 173, 15), // "newPlayerInRoom"
QT_MOC_LITERAL(25, 189, 6), // "pseudo"
QT_MOC_LITERAL(26, 196, 7), // "inOrOut"
QT_MOC_LITERAL(27, 204, 7), // "gotChat"
QT_MOC_LITERAL(28, 212, 10), // "gotTimeout"
QT_MOC_LITERAL(29, 223, 11), // "gotCanStart"
QT_MOC_LITERAL(30, 235, 16), // "allPlayersInRoom"
QT_MOC_LITERAL(31, 252, 1), // "s"
QT_MOC_LITERAL(32, 254, 12), // "refreshlobby"
QT_MOC_LITERAL(33, 267, 11), // "gotTurnInfo"
QT_MOC_LITERAL(34, 279, 1), // "l"
QT_MOC_LITERAL(35, 281, 7), // "gotDeck"
QT_MOC_LITERAL(36, 289, 7), // "gotRole"
QT_MOC_LITERAL(37, 297, 10), // "gotAnnonce"
QT_MOC_LITERAL(38, 308, 19), // "gotEndgameMainstats"
QT_MOC_LITERAL(39, 328, 21), // "gotEndgamePlayerStats"
QT_MOC_LITERAL(40, 350, 13), // "statsbyplayer"
QT_MOC_LITERAL(41, 364, 12), // "gotInfoStart"
QT_MOC_LITERAL(42, 377, 14), // "gotInfoNewTurn"
QT_MOC_LITERAL(43, 392, 15), // "gotInfoNewRound"
QT_MOC_LITERAL(44, 408, 12), // "gotInfoEvent"
QT_MOC_LITERAL(45, 421, 11), // "gotGameOver"
QT_MOC_LITERAL(46, 433, 11), // "gotFullDeck"
QT_MOC_LITERAL(47, 445, 13), // "gotFirstStart"
QT_MOC_LITERAL(48, 459, 12), // "gotFullStart"
QT_MOC_LITERAL(49, 472, 11), // "gotAllRoles"
QT_MOC_LITERAL(50, 484, 9), // "hReadData"
QT_MOC_LITERAL(51, 494, 10), // "hSetPseudo"
QT_MOC_LITERAL(52, 505, 9), // "hAskLobby"
QT_MOC_LITERAL(53, 515, 11), // "hCreateRoom"
QT_MOC_LITERAL(54, 527, 5), // "hQuit"
QT_MOC_LITERAL(55, 533, 9), // "hQuitRoom"
QT_MOC_LITERAL(56, 543, 9), // "hJoinRoom"
QT_MOC_LITERAL(57, 553, 8), // "hAnnonce"
QT_MOC_LITERAL(58, 562, 4), // "hCut"
QT_MOC_LITERAL(59, 567, 5), // "hChat"
QT_MOC_LITERAL(60, 573, 10) // "hStartGame"

    },
    "Client\0closeConnexion\0\0createRoom\0"
    "nbjmax\0auth\0paswwd\0name\0quit\0quitRoom\0"
    "joinRoom\0id\0annonce\0bomb\0diffuse\0cut\0"
    "njoueur\0ncarte\0chat\0msg\0startGame\0"
    "asklobby\0gotLobby\0gotAuthRoom\0"
    "newPlayerInRoom\0pseudo\0inOrOut\0gotChat\0"
    "gotTimeout\0gotCanStart\0allPlayersInRoom\0"
    "s\0refreshlobby\0gotTurnInfo\0l\0gotDeck\0"
    "gotRole\0gotAnnonce\0gotEndgameMainstats\0"
    "gotEndgamePlayerStats\0statsbyplayer\0"
    "gotInfoStart\0gotInfoNewTurn\0gotInfoNewRound\0"
    "gotInfoEvent\0gotGameOver\0gotFullDeck\0"
    "gotFirstStart\0gotFullStart\0gotAllRoles\0"
    "hReadData\0hSetPseudo\0hAskLobby\0"
    "hCreateRoom\0hQuit\0hQuitRoom\0hJoinRoom\0"
    "hAnnonce\0hCut\0hChat\0hStartGame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Client[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      34,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  239,    2, 0x06 /* Public */,
       3,    4,  240,    2, 0x06 /* Public */,
       8,    0,  249,    2, 0x06 /* Public */,
       9,    0,  250,    2, 0x06 /* Public */,
      10,    2,  251,    2, 0x06 /* Public */,
      12,    2,  256,    2, 0x06 /* Public */,
      15,    2,  261,    2, 0x06 /* Public */,
      18,    1,  266,    2, 0x06 /* Public */,
      20,    0,  269,    2, 0x06 /* Public */,
      21,    0,  270,    2, 0x06 /* Public */,
      22,    0,  271,    2, 0x06 /* Public */,
      23,    1,  272,    2, 0x06 /* Public */,
      24,    2,  275,    2, 0x06 /* Public */,
      27,    1,  280,    2, 0x06 /* Public */,
      28,    0,  283,    2, 0x06 /* Public */,
      29,    0,  284,    2, 0x06 /* Public */,
      30,    1,  285,    2, 0x06 /* Public */,
      32,    0,  288,    2, 0x06 /* Public */,
      33,    1,  289,    2, 0x06 /* Public */,
      35,    1,  292,    2, 0x06 /* Public */,
      36,    0,  295,    2, 0x06 /* Public */,
      37,    0,  296,    2, 0x06 /* Public */,
      38,    0,  297,    2, 0x06 /* Public */,
      39,    1,  298,    2, 0x06 /* Public */,
      41,    0,  301,    2, 0x06 /* Public */,
      42,    0,  302,    2, 0x06 /* Public */,
      43,    0,  303,    2, 0x06 /* Public */,
      44,    0,  304,    2, 0x06 /* Public */,
      45,    0,  305,    2, 0x06 /* Public */,
      35,    0,  306,    2, 0x06 /* Public */,
      46,    1,  307,    2, 0x06 /* Public */,
      47,    0,  310,    2, 0x06 /* Public */,
      48,    0,  311,    2, 0x06 /* Public */,
      49,    1,  312,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      50,    0,  315,    2, 0x0a /* Public */,
      51,    1,  316,    2, 0x0a /* Public */,
      52,    0,  319,    2, 0x0a /* Public */,
      53,    4,  320,    2, 0x0a /* Public */,
      54,    0,  329,    2, 0x0a /* Public */,
      55,    0,  330,    2, 0x0a /* Public */,
      56,    2,  331,    2, 0x0a /* Public */,
      57,    2,  336,    2, 0x0a /* Public */,
      58,    2,  341,    2, 0x0a /* Public */,
      59,    1,  346,    2, 0x0a /* Public */,
      60,    0,  349,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool, QMetaType::QString, QMetaType::QString,    4,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   11,    7,
    QMetaType::Void, QMetaType::Bool, QMetaType::UInt,   13,   14,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   16,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   25,   26,
    QMetaType::Void, QMetaType::QStringList,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   34,
    QMetaType::Void, QMetaType::QStringList,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   31,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool, QMetaType::QString, QMetaType::QString,    4,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   11,    7,
    QMetaType::Void, QMetaType::Bool, QMetaType::UInt,   13,   14,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   16,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,

       0        // eod
};

void Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Client *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeConnexion(); break;
        case 1: _t->createRoom((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->quit(); break;
        case 3: _t->quitRoom(); break;
        case 4: _t->joinRoom((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->annonce((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 6: _t->cut((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 7: _t->chat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->startGame(); break;
        case 9: _t->asklobby(); break;
        case 10: _t->gotLobby(); break;
        case 11: _t->gotAuthRoom((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 12: _t->newPlayerInRoom((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->gotChat((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 14: _t->gotTimeout(); break;
        case 15: _t->gotCanStart(); break;
        case 16: _t->allPlayersInRoom((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 17: _t->refreshlobby(); break;
        case 18: _t->gotTurnInfo((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 19: _t->gotDeck((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 20: _t->gotRole(); break;
        case 21: _t->gotAnnonce(); break;
        case 22: _t->gotEndgameMainstats(); break;
        case 23: _t->gotEndgamePlayerStats((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 24: _t->gotInfoStart(); break;
        case 25: _t->gotInfoNewTurn(); break;
        case 26: _t->gotInfoNewRound(); break;
        case 27: _t->gotInfoEvent(); break;
        case 28: _t->gotGameOver(); break;
        case 29: _t->gotDeck(); break;
        case 30: _t->gotFullDeck((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 31: _t->gotFirstStart(); break;
        case 32: _t->gotFullStart(); break;
        case 33: _t->gotAllRoles((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 34: _t->hReadData(); break;
        case 35: _t->hSetPseudo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: _t->hAskLobby(); break;
        case 37: _t->hCreateRoom((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 38: _t->hQuit(); break;
        case 39: _t->hQuitRoom(); break;
        case 40: _t->hJoinRoom((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 41: _t->hAnnonce((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 42: _t->hCut((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 43: _t->hChat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 44: _t->hStartGame(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::closeConnexion)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Client::*)(unsigned int , bool , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::createRoom)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::quit)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::quitRoom)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Client::*)(unsigned int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::joinRoom)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Client::*)(bool , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::annonce)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Client::*)(unsigned int , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::cut)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::chat)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::startGame)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::asklobby)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotLobby)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Client::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotAuthRoom)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Client::*)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::newPlayerInRoom)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Client::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotChat)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotTimeout)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotCanStart)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Client::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::allPlayersInRoom)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::refreshlobby)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Client::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotTurnInfo)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Client::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotDeck)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotRole)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotAnnonce)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotEndgameMainstats)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Client::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotEndgamePlayerStats)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotInfoStart)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotInfoNewTurn)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotInfoNewRound)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotInfoEvent)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotGameOver)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotDeck)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Client::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotFullDeck)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotFirstStart)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Client::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotFullStart)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Client::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::gotAllRoles)) {
                *result = 33;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Client::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Client.data,
    qt_meta_data_Client,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Client.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 45;
    }
    return _id;
}

// SIGNAL 0
void Client::closeConnexion()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Client::createRoom(unsigned int _t1, bool _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Client::quit()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Client::quitRoom()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Client::joinRoom(unsigned int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Client::annonce(bool _t1, unsigned int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Client::cut(unsigned int _t1, unsigned int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Client::chat(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Client::startGame()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Client::asklobby()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Client::gotLobby()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Client::gotAuthRoom(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Client::newPlayerInRoom(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Client::gotChat(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Client::gotTimeout()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void Client::gotCanStart()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Client::allPlayersInRoom(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Client::refreshlobby()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void Client::gotTurnInfo(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Client::gotDeck(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Client::gotRole()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void Client::gotAnnonce()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void Client::gotEndgameMainstats()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void Client::gotEndgamePlayerStats(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Client::gotInfoStart()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void Client::gotInfoNewTurn()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void Client::gotInfoNewRound()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void Client::gotInfoEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void Client::gotGameOver()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void Client::gotDeck()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void Client::gotFullDeck(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void Client::gotFirstStart()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void Client::gotFullStart()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void Client::gotAllRoles(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
