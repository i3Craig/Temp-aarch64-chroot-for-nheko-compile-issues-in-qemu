/****************************************************************************
** Meta object code from reading C++ file 'RoomSummary.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../nheko-0.10.2/src/ui/RoomSummary.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RoomSummary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RoomSummaryProxy_t {
    QByteArrayData data[6];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoomSummaryProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoomSummaryProxy_t qt_meta_stringdata_RoomSummaryProxy = {
    {
QT_MOC_LITERAL(0, 0, 16), // "RoomSummaryProxy"
QT_MOC_LITERAL(1, 17, 6), // "loaded"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 26), // "mtx::responses::PublicRoom"
QT_MOC_LITERAL(4, 52, 4), // "room"
QT_MOC_LITERAL(5, 57, 6) // "failed"

    },
    "RoomSummaryProxy\0loaded\0\0"
    "mtx::responses::PublicRoom\0room\0failed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoomSummaryProxy[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void RoomSummaryProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoomSummaryProxy *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loaded((*reinterpret_cast< mtx::responses::PublicRoom(*)>(_a[1]))); break;
        case 1: _t->failed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RoomSummaryProxy::*)(mtx::responses::PublicRoom );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomSummaryProxy::loaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RoomSummaryProxy::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomSummaryProxy::failed)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RoomSummaryProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RoomSummaryProxy.data,
    qt_meta_data_RoomSummaryProxy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RoomSummaryProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoomSummaryProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoomSummaryProxy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RoomSummaryProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void RoomSummaryProxy::loaded(mtx::responses::PublicRoom _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RoomSummaryProxy::failed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_RoomSummary_t {
    QByteArrayData data[15];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoomSummary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoomSummary_t qt_meta_stringdata_RoomSummary = {
    {
QT_MOC_LITERAL(0, 0, 11), // "RoomSummary"
QT_MOC_LITERAL(1, 12, 6), // "loaded"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 13), // "reasonChanged"
QT_MOC_LITERAL(4, 34, 4), // "join"
QT_MOC_LITERAL(5, 39, 6), // "reason"
QT_MOC_LITERAL(6, 46, 6), // "roomid"
QT_MOC_LITERAL(7, 53, 8), // "roomName"
QT_MOC_LITERAL(8, 62, 9), // "roomTopic"
QT_MOC_LITERAL(9, 72, 13), // "roomAvatarUrl"
QT_MOC_LITERAL(10, 86, 8), // "isInvite"
QT_MOC_LITERAL(11, 95, 7), // "isSpace"
QT_MOC_LITERAL(12, 103, 11), // "isKnockOnly"
QT_MOC_LITERAL(13, 115, 8), // "isLoaded"
QT_MOC_LITERAL(14, 124, 11) // "memberCount"

    },
    "RoomSummary\0loaded\0\0reasonChanged\0"
    "join\0reason\0roomid\0roomName\0roomTopic\0"
    "roomAvatarUrl\0isInvite\0isSpace\0"
    "isKnockOnly\0isLoaded\0memberCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoomSummary[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      10,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495103,
       6, QMetaType::QString, 0x00495001,
       7, QMetaType::QString, 0x00495001,
       8, QMetaType::QString, 0x00495001,
       9, QMetaType::QString, 0x00495001,
      10, QMetaType::Bool, 0x00495001,
      11, QMetaType::Bool, 0x00495001,
      12, QMetaType::Bool, 0x00495001,
      13, QMetaType::Bool, 0x00495001,
      14, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       1,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void RoomSummary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoomSummary *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loaded(); break;
        case 1: _t->reasonChanged(); break;
        case 2: _t->join(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RoomSummary::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomSummary::loaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RoomSummary::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoomSummary::reasonChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RoomSummary *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->reason(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->roomid(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->roomName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->roomTopic(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->roomAvatarUrl(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isInvite(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isSpace(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isKnockOnly(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isLoaded(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->memberCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RoomSummary *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setReason(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject RoomSummary::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RoomSummary.data,
    qt_meta_data_RoomSummary,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RoomSummary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoomSummary::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoomSummary.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RoomSummary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RoomSummary::loaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RoomSummary::reasonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
