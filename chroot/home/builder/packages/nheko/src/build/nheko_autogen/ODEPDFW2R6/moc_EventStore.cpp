/****************************************************************************
** Meta object code from reading C++ file 'EventStore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../nheko-0.10.2/src/timeline/EventStore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EventStore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EventStore_t {
    QByteArrayData data[38];
    char stringdata0[574];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EventStore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EventStore_t qt_meta_stringdata_EventStore = {
    {
QT_MOC_LITERAL(0, 0, 10), // "EventStore"
QT_MOC_LITERAL(1, 11, 15), // "beginInsertRows"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "from"
QT_MOC_LITERAL(4, 33, 2), // "to"
QT_MOC_LITERAL(5, 36, 13), // "endInsertRows"
QT_MOC_LITERAL(6, 50, 15), // "beginResetModel"
QT_MOC_LITERAL(7, 66, 13), // "endResetModel"
QT_MOC_LITERAL(8, 80, 11), // "dataChanged"
QT_MOC_LITERAL(9, 92, 11), // "pinsChanged"
QT_MOC_LITERAL(10, 104, 17), // "newEncryptedImage"
QT_MOC_LITERAL(11, 122, 26), // "mtx::crypto::EncryptedFile"
QT_MOC_LITERAL(12, 149, 14), // "encryptionInfo"
QT_MOC_LITERAL(13, 164, 12), // "eventFetched"
QT_MOC_LITERAL(14, 177, 11), // "std::string"
QT_MOC_LITERAL(15, 189, 2), // "id"
QT_MOC_LITERAL(16, 192, 9), // "relatedTo"
QT_MOC_LITERAL(17, 202, 40), // "mtx::events::collections::Tim..."
QT_MOC_LITERAL(18, 243, 8), // "timeline"
QT_MOC_LITERAL(19, 252, 20), // "oldMessagesRetrieved"
QT_MOC_LITERAL(20, 273, 24), // "mtx::responses::Messages"
QT_MOC_LITERAL(21, 298, 11), // "fetchedMore"
QT_MOC_LITERAL(22, 310, 14), // "processPending"
QT_MOC_LITERAL(23, 325, 11), // "messageSent"
QT_MOC_LITERAL(24, 337, 6), // "txn_id"
QT_MOC_LITERAL(25, 344, 8), // "event_id"
QT_MOC_LITERAL(26, 353, 13), // "messageFailed"
QT_MOC_LITERAL(27, 367, 19), // "startDMVerification"
QT_MOC_LITERAL(28, 387, 64), // "mtx::events::RoomEvent<mtx::e..."
QT_MOC_LITERAL(29, 452, 3), // "msg"
QT_MOC_LITERAL(30, 456, 17), // "updateFlowEventId"
QT_MOC_LITERAL(31, 474, 10), // "addPending"
QT_MOC_LITERAL(32, 485, 5), // "event"
QT_MOC_LITERAL(33, 491, 18), // "receivedSessionKey"
QT_MOC_LITERAL(34, 510, 10), // "session_id"
QT_MOC_LITERAL(35, 521, 13), // "clearTimeline"
QT_MOC_LITERAL(36, 535, 17), // "enableKeyRequests"
QT_MOC_LITERAL(37, 553, 20) // "suppressKeyRequests_"

    },
    "EventStore\0beginInsertRows\0\0from\0to\0"
    "endInsertRows\0beginResetModel\0"
    "endResetModel\0dataChanged\0pinsChanged\0"
    "newEncryptedImage\0mtx::crypto::EncryptedFile\0"
    "encryptionInfo\0eventFetched\0std::string\0"
    "id\0relatedTo\0mtx::events::collections::TimelineEvents\0"
    "timeline\0oldMessagesRetrieved\0"
    "mtx::responses::Messages\0fetchedMore\0"
    "processPending\0messageSent\0txn_id\0"
    "event_id\0messageFailed\0startDMVerification\0"
    "mtx::events::RoomEvent<mtx::events::msg::KeyVerificationRequest>\0"
    "msg\0updateFlowEventId\0addPending\0event\0"
    "receivedSessionKey\0session_id\0"
    "clearTimeline\0enableKeyRequests\0"
    "suppressKeyRequests_"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EventStore[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  109,    2, 0x06 /* Public */,
       5,    0,  114,    2, 0x06 /* Public */,
       6,    0,  115,    2, 0x06 /* Public */,
       7,    0,  116,    2, 0x06 /* Public */,
       8,    2,  117,    2, 0x06 /* Public */,
       9,    0,  122,    2, 0x06 /* Public */,
      10,    1,  123,    2, 0x06 /* Public */,
      13,    3,  126,    2, 0x06 /* Public */,
      19,    1,  133,    2, 0x06 /* Public */,
      21,    0,  136,    2, 0x06 /* Public */,
      22,    0,  137,    2, 0x06 /* Public */,
      23,    2,  138,    2, 0x06 /* Public */,
      26,    1,  143,    2, 0x06 /* Public */,
      27,    1,  146,    2, 0x06 /* Public */,
      30,    1,  149,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    1,  152,    2, 0x0a /* Public */,
      33,    1,  155,    2, 0x0a /* Public */,
      35,    0,  158,    2, 0x0a /* Public */,
      36,    1,  159,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 17,   15,   16,   18,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14,   24,   25,
    QMetaType::Void, 0x80000000 | 14,   24,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 14,   25,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17,   32,
    QMetaType::Void, 0x80000000 | 14,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   37,

       0        // eod
};

void EventStore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EventStore *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->beginInsertRows((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->endInsertRows(); break;
        case 2: _t->beginResetModel(); break;
        case 3: _t->endResetModel(); break;
        case 4: _t->dataChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->pinsChanged(); break;
        case 6: _t->newEncryptedImage((*reinterpret_cast< mtx::crypto::EncryptedFile(*)>(_a[1]))); break;
        case 7: _t->eventFetched((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< mtx::events::collections::TimelineEvents(*)>(_a[3]))); break;
        case 8: _t->oldMessagesRetrieved((*reinterpret_cast< const mtx::responses::Messages(*)>(_a[1]))); break;
        case 9: _t->fetchedMore(); break;
        case 10: _t->processPending(); break;
        case 11: _t->messageSent((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 12: _t->messageFailed((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 13: _t->startDMVerification((*reinterpret_cast< const mtx::events::RoomEvent<mtx::events::msg::KeyVerificationRequest>(*)>(_a[1]))); break;
        case 14: _t->updateFlowEventId((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 15: _t->addPending((*reinterpret_cast< mtx::events::collections::TimelineEvents(*)>(_a[1]))); break;
        case 16: _t->receivedSessionKey((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 17: _t->clearTimeline(); break;
        case 18: _t->enableKeyRequests((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EventStore::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::beginInsertRows)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EventStore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::endInsertRows)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EventStore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::beginResetModel)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (EventStore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::endResetModel)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (EventStore::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::dataChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (EventStore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::pinsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (EventStore::*)(mtx::crypto::EncryptedFile );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::newEncryptedImage)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (EventStore::*)(std::string , std::string , mtx::events::collections::TimelineEvents );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::eventFetched)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (EventStore::*)(const mtx::responses::Messages & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::oldMessagesRetrieved)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (EventStore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::fetchedMore)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (EventStore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::processPending)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (EventStore::*)(std::string , std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::messageSent)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (EventStore::*)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::messageFailed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (EventStore::*)(const mtx::events::RoomEvent<mtx::events::msg::KeyVerificationRequest> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::startDMVerification)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (EventStore::*)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventStore::updateFlowEventId)) {
                *result = 14;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EventStore::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EventStore.data,
    qt_meta_data_EventStore,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EventStore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EventStore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EventStore.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EventStore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void EventStore::beginInsertRows(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EventStore::endInsertRows()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void EventStore::beginResetModel()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void EventStore::endResetModel()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void EventStore::dataChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void EventStore::pinsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void EventStore::newEncryptedImage(mtx::crypto::EncryptedFile _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void EventStore::eventFetched(std::string _t1, std::string _t2, mtx::events::collections::TimelineEvents _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void EventStore::oldMessagesRetrieved(const mtx::responses::Messages & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void EventStore::fetchedMore()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void EventStore::processPending()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void EventStore::messageSent(std::string _t1, std::string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void EventStore::messageFailed(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void EventStore::startDMVerification(const mtx::events::RoomEvent<mtx::events::msg::KeyVerificationRequest> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void EventStore::updateFlowEventId(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
