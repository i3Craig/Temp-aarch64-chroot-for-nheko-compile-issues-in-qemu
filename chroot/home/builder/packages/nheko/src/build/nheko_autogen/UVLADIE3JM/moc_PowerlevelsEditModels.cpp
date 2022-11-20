/****************************************************************************
** Meta object code from reading C++ file 'PowerlevelsEditModels.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../nheko-0.10.2/src/PowerlevelsEditModels.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PowerlevelsEditModels.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PowerlevelsTypeListModel_t {
    QByteArrayData data[12];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PowerlevelsTypeListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PowerlevelsTypeListModel_t qt_meta_stringdata_PowerlevelsTypeListModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "PowerlevelsTypeListModel"
QT_MOC_LITERAL(1, 25, 17), // "adminLevelChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 21), // "moderatorLevelChanged"
QT_MOC_LITERAL(4, 66, 6), // "remove"
QT_MOC_LITERAL(5, 73, 3), // "row"
QT_MOC_LITERAL(6, 77, 4), // "move"
QT_MOC_LITERAL(7, 82, 4), // "from"
QT_MOC_LITERAL(8, 87, 2), // "to"
QT_MOC_LITERAL(9, 90, 3), // "add"
QT_MOC_LITERAL(10, 94, 5), // "index"
QT_MOC_LITERAL(11, 100, 4) // "type"

    },
    "PowerlevelsTypeListModel\0adminLevelChanged\0"
    "\0moderatorLevelChanged\0remove\0row\0"
    "move\0from\0to\0add\0index\0type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PowerlevelsTypeListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   41,    2, 0x02 /* Public */,
       6,    2,   44,    2, 0x02 /* Public */,
       9,    2,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::Int,    5,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,   11,

       0        // eod
};

void PowerlevelsTypeListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PowerlevelsTypeListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->adminLevelChanged(); break;
        case 1: _t->moderatorLevelChanged(); break;
        case 2: { bool _r = _t->remove((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->move((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->add((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PowerlevelsTypeListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerlevelsTypeListModel::adminLevelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PowerlevelsTypeListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerlevelsTypeListModel::moderatorLevelChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PowerlevelsTypeListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_PowerlevelsTypeListModel.data,
    qt_meta_data_PowerlevelsTypeListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PowerlevelsTypeListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PowerlevelsTypeListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PowerlevelsTypeListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int PowerlevelsTypeListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PowerlevelsTypeListModel::adminLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PowerlevelsTypeListModel::moderatorLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_PowerlevelsUserListModel_t {
    QByteArrayData data[11];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PowerlevelsUserListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PowerlevelsUserListModel_t qt_meta_stringdata_PowerlevelsUserListModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "PowerlevelsUserListModel"
QT_MOC_LITERAL(1, 25, 23), // "defaultUserLevelChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 6), // "remove"
QT_MOC_LITERAL(4, 57, 3), // "row"
QT_MOC_LITERAL(5, 61, 4), // "move"
QT_MOC_LITERAL(6, 66, 4), // "from"
QT_MOC_LITERAL(7, 71, 2), // "to"
QT_MOC_LITERAL(8, 74, 3), // "add"
QT_MOC_LITERAL(9, 78, 5), // "index"
QT_MOC_LITERAL(10, 84, 4) // "user"

    },
    "PowerlevelsUserListModel\0"
    "defaultUserLevelChanged\0\0remove\0row\0"
    "move\0from\0to\0add\0index\0user"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PowerlevelsUserListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x02 /* Public */,
       5,    2,   38,    2, 0x02 /* Public */,
       8,    2,   43,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::Int,    4,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    9,   10,

       0        // eod
};

void PowerlevelsUserListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PowerlevelsUserListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->defaultUserLevelChanged(); break;
        case 1: { bool _r = _t->remove((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->move((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->add((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PowerlevelsUserListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerlevelsUserListModel::defaultUserLevelChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PowerlevelsUserListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_PowerlevelsUserListModel.data,
    qt_meta_data_PowerlevelsUserListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PowerlevelsUserListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PowerlevelsUserListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PowerlevelsUserListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int PowerlevelsUserListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PowerlevelsUserListModel::defaultUserLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_PowerlevelEditingModels_t {
    QByteArrayData data[15];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PowerlevelEditingModels_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PowerlevelEditingModels_t qt_meta_stringdata_PowerlevelEditingModels = {
    {
QT_MOC_LITERAL(0, 0, 23), // "PowerlevelEditingModels"
QT_MOC_LITERAL(1, 24, 17), // "adminLevelChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 21), // "moderatorLevelChanged"
QT_MOC_LITERAL(4, 65, 23), // "defaultUserLevelChanged"
QT_MOC_LITERAL(5, 89, 6), // "commit"
QT_MOC_LITERAL(6, 96, 7), // "addRole"
QT_MOC_LITERAL(7, 104, 2), // "pl"
QT_MOC_LITERAL(8, 107, 5), // "users"
QT_MOC_LITERAL(9, 113, 25), // "PowerlevelsUserListModel*"
QT_MOC_LITERAL(10, 139, 5), // "types"
QT_MOC_LITERAL(11, 145, 25), // "PowerlevelsTypeListModel*"
QT_MOC_LITERAL(12, 171, 10), // "adminLevel"
QT_MOC_LITERAL(13, 182, 14), // "moderatorLevel"
QT_MOC_LITERAL(14, 197, 16) // "defaultUserLevel"

    },
    "PowerlevelEditingModels\0adminLevelChanged\0"
    "\0moderatorLevelChanged\0defaultUserLevelChanged\0"
    "commit\0addRole\0pl\0users\0"
    "PowerlevelsUserListModel*\0types\0"
    "PowerlevelsTypeListModel*\0adminLevel\0"
    "moderatorLevel\0defaultUserLevel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PowerlevelEditingModels[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x02 /* Public */,
       6,    1,   43,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00095409,
      10, 0x80000000 | 11, 0x00095409,
      12, QMetaType::LongLong, 0x00495001,
      13, QMetaType::LongLong, 0x00495001,
      14, QMetaType::LongLong, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       2,

       0        // eod
};

void PowerlevelEditingModels::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PowerlevelEditingModels *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->adminLevelChanged(); break;
        case 1: _t->moderatorLevelChanged(); break;
        case 2: _t->defaultUserLevelChanged(); break;
        case 3: _t->commit(); break;
        case 4: _t->addRole((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PowerlevelEditingModels::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerlevelEditingModels::adminLevelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PowerlevelEditingModels::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerlevelEditingModels::moderatorLevelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PowerlevelEditingModels::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerlevelEditingModels::defaultUserLevelChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PowerlevelsTypeListModel* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PowerlevelsUserListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PowerlevelEditingModels *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PowerlevelsUserListModel**>(_v) = _t->users(); break;
        case 1: *reinterpret_cast< PowerlevelsTypeListModel**>(_v) = _t->types(); break;
        case 2: *reinterpret_cast< qlonglong*>(_v) = _t->adminLevel(); break;
        case 3: *reinterpret_cast< qlonglong*>(_v) = _t->moderatorLevel(); break;
        case 4: *reinterpret_cast< qlonglong*>(_v) = _t->defaultUserLevel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PowerlevelEditingModels::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PowerlevelEditingModels.data,
    qt_meta_data_PowerlevelEditingModels,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PowerlevelEditingModels::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PowerlevelEditingModels::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PowerlevelEditingModels.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PowerlevelEditingModels::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PowerlevelEditingModels::adminLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PowerlevelEditingModels::moderatorLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PowerlevelEditingModels::defaultUserLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
