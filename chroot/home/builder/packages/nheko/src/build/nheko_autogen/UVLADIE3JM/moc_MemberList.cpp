/****************************************************************************
** Meta object code from reading C++ file 'MemberList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../nheko-0.10.2/src/MemberList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MemberList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MemberListBackend_t {
    QByteArrayData data[17];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MemberListBackend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MemberListBackend_t qt_meta_stringdata_MemberListBackend = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MemberListBackend"
QT_MOC_LITERAL(1, 18, 15), // "roomNameChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 18), // "memberCountChanged"
QT_MOC_LITERAL(4, 54, 16), // "avatarUrlChanged"
QT_MOC_LITERAL(5, 71, 13), // "roomIdChanged"
QT_MOC_LITERAL(6, 85, 21), // "numUsersLoadedChanged"
QT_MOC_LITERAL(7, 107, 25), // "loadingMoreMembersChanged"
QT_MOC_LITERAL(8, 133, 8), // "addUsers"
QT_MOC_LITERAL(9, 142, 23), // "std::vector<RoomMember>"
QT_MOC_LITERAL(10, 166, 5), // "users"
QT_MOC_LITERAL(11, 172, 8), // "roomName"
QT_MOC_LITERAL(12, 181, 11), // "memberCount"
QT_MOC_LITERAL(13, 193, 9), // "avatarUrl"
QT_MOC_LITERAL(14, 203, 6), // "roomId"
QT_MOC_LITERAL(15, 210, 14), // "numUsersLoaded"
QT_MOC_LITERAL(16, 225, 18) // "loadingMoreMembers"

    },
    "MemberListBackend\0roomNameChanged\0\0"
    "memberCountChanged\0avatarUrlChanged\0"
    "roomIdChanged\0numUsersLoadedChanged\0"
    "loadingMoreMembersChanged\0addUsers\0"
    "std::vector<RoomMember>\0users\0roomName\0"
    "memberCount\0avatarUrl\0roomId\0"
    "numUsersLoaded\0loadingMoreMembers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MemberListBackend[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       6,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00495001,
      12, QMetaType::Int, 0x00495001,
      13, QMetaType::QString, 0x00495001,
      14, QMetaType::QString, 0x00495001,
      15, QMetaType::Int, 0x00495001,
      16, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void MemberListBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MemberListBackend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->roomNameChanged(); break;
        case 1: _t->memberCountChanged(); break;
        case 2: _t->avatarUrlChanged(); break;
        case 3: _t->roomIdChanged(); break;
        case 4: _t->numUsersLoadedChanged(); break;
        case 5: _t->loadingMoreMembersChanged(); break;
        case 6: _t->addUsers((*reinterpret_cast< const std::vector<RoomMember>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MemberListBackend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemberListBackend::roomNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MemberListBackend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemberListBackend::memberCountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MemberListBackend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemberListBackend::avatarUrlChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MemberListBackend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemberListBackend::roomIdChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MemberListBackend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemberListBackend::numUsersLoadedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MemberListBackend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemberListBackend::loadingMoreMembersChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MemberListBackend *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->roomName(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->memberCount(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->avatarUrl(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->roomId(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->numUsersLoaded(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->loadingMoreMembers(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MemberListBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_MemberListBackend.data,
    qt_meta_data_MemberListBackend,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MemberListBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MemberListBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MemberListBackend.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int MemberListBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MemberListBackend::roomNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MemberListBackend::memberCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MemberListBackend::avatarUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MemberListBackend::roomIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MemberListBackend::numUsersLoadedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MemberListBackend::loadingMoreMembersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
struct qt_meta_stringdata_MemberList_t {
    QByteArrayData data[22];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MemberList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MemberList_t qt_meta_stringdata_MemberList = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MemberList"
QT_MOC_LITERAL(1, 11, 15), // "roomNameChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "memberCountChanged"
QT_MOC_LITERAL(4, 47, 16), // "avatarUrlChanged"
QT_MOC_LITERAL(5, 64, 13), // "roomIdChanged"
QT_MOC_LITERAL(6, 78, 21), // "numUsersLoadedChanged"
QT_MOC_LITERAL(7, 100, 25), // "loadingMoreMembersChanged"
QT_MOC_LITERAL(8, 126, 15), // "setFilterString"
QT_MOC_LITERAL(9, 142, 4), // "text"
QT_MOC_LITERAL(10, 147, 6), // "sortBy"
QT_MOC_LITERAL(11, 154, 15), // "MemberSortRoles"
QT_MOC_LITERAL(12, 170, 4), // "role"
QT_MOC_LITERAL(13, 175, 8), // "roomName"
QT_MOC_LITERAL(14, 184, 11), // "memberCount"
QT_MOC_LITERAL(15, 196, 9), // "avatarUrl"
QT_MOC_LITERAL(16, 206, 6), // "roomId"
QT_MOC_LITERAL(17, 213, 14), // "numUsersLoaded"
QT_MOC_LITERAL(18, 228, 18), // "loadingMoreMembers"
QT_MOC_LITERAL(19, 247, 4), // "Mxid"
QT_MOC_LITERAL(20, 252, 11), // "DisplayName"
QT_MOC_LITERAL(21, 264, 10) // "Powerlevel"

    },
    "MemberList\0roomNameChanged\0\0"
    "memberCountChanged\0avatarUrlChanged\0"
    "roomIdChanged\0numUsersLoadedChanged\0"
    "loadingMoreMembersChanged\0setFilterString\0"
    "text\0sortBy\0MemberSortRoles\0role\0"
    "roomName\0memberCount\0avatarUrl\0roomId\0"
    "numUsersLoaded\0loadingMoreMembers\0"
    "Mxid\0DisplayName\0Powerlevel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MemberList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       6,   66, // properties
       1,   90, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   60,    2, 0x0a /* Public */,
      10,    1,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

 // properties: name, type, flags
      13, QMetaType::QString, 0x00495001,
      14, QMetaType::Int, 0x00495001,
      15, QMetaType::QString, 0x00495001,
      16, QMetaType::QString, 0x00495001,
      17, QMetaType::Int, 0x00495001,
      18, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

 // enums: name, alias, flags, count, data
      11,   11, 0x0,    3,   95,

 // enum data: key, value
      19, uint(MemberList::Mxid),
      20, uint(MemberList::DisplayName),
      21, uint(MemberList::Powerlevel),

       0        // eod
};

void MemberList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MemberList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->roomNameChanged(); break;
        case 1: _t->memberCountChanged(); break;
        case 2: _t->avatarUrlChanged(); break;
        case 3: _t->roomIdChanged(); break;
        case 4: _t->numUsersLoadedChanged(); break;
        case 5: _t->loadingMoreMembersChanged(); break;
        case 6: _t->setFilterString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->sortBy((*reinterpret_cast< const MemberSortRoles(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MemberList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemberList::roomNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MemberList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemberList::memberCountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MemberList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemberList::avatarUrlChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MemberList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemberList::roomIdChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MemberList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemberList::numUsersLoadedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MemberList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemberList::loadingMoreMembersChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MemberList *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->roomName(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->memberCount(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->avatarUrl(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->roomId(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->numUsersLoaded(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->loadingMoreMembers(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MemberList::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_MemberList.data,
    qt_meta_data_MemberList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MemberList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MemberList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MemberList.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int MemberList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MemberList::roomNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MemberList::memberCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MemberList::avatarUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MemberList::roomIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MemberList::numUsersLoadedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MemberList::loadingMoreMembersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
