/****************************************************************************
** Meta object code from reading C++ file 'AliasEditModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../nheko-0.10.2/src/AliasEditModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AliasEditModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FetchPublishedAliasesJob_t {
    QByteArrayData data[9];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FetchPublishedAliasesJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FetchPublishedAliasesJob_t qt_meta_stringdata_FetchPublishedAliasesJob = {
    {
QT_MOC_LITERAL(0, 0, 24), // "FetchPublishedAliasesJob"
QT_MOC_LITERAL(1, 25, 12), // "aliasFetched"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "std::string"
QT_MOC_LITERAL(4, 51, 5), // "alias"
QT_MOC_LITERAL(5, 57, 6), // "target"
QT_MOC_LITERAL(6, 64, 24), // "advertizedAliasesFetched"
QT_MOC_LITERAL(7, 89, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(8, 114, 7) // "aliases"

    },
    "FetchPublishedAliasesJob\0aliasFetched\0"
    "\0std::string\0alias\0target\0"
    "advertizedAliasesFetched\0"
    "std::vector<std::string>\0aliases"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FetchPublishedAliasesJob[] = {

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
       1,    2,   24,    2, 0x06 /* Public */,
       6,    1,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void FetchPublishedAliasesJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FetchPublishedAliasesJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->aliasFetched((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 1: _t->advertizedAliasesFetched((*reinterpret_cast< std::vector<std::string>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FetchPublishedAliasesJob::*)(std::string , std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FetchPublishedAliasesJob::aliasFetched)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FetchPublishedAliasesJob::*)(std::vector<std::string> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FetchPublishedAliasesJob::advertizedAliasesFetched)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FetchPublishedAliasesJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FetchPublishedAliasesJob.data,
    qt_meta_data_FetchPublishedAliasesJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FetchPublishedAliasesJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FetchPublishedAliasesJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FetchPublishedAliasesJob.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FetchPublishedAliasesJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FetchPublishedAliasesJob::aliasFetched(std::string _t1, std::string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FetchPublishedAliasesJob::advertizedAliasesFetched(std::vector<std::string> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_AliasEditingModel_t {
    QByteArrayData data[18];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AliasEditingModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AliasEditingModel_t qt_meta_stringdata_AliasEditingModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AliasEditingModel"
QT_MOC_LITERAL(1, 18, 11), // "updateAlias"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "std::string"
QT_MOC_LITERAL(4, 43, 5), // "alias"
QT_MOC_LITERAL(5, 49, 6), // "target"
QT_MOC_LITERAL(6, 56, 22), // "updatePublishedAliases"
QT_MOC_LITERAL(7, 79, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(8, 104, 7), // "aliases"
QT_MOC_LITERAL(9, 112, 11), // "deleteAlias"
QT_MOC_LITERAL(10, 124, 3), // "row"
QT_MOC_LITERAL(11, 128, 8), // "addAlias"
QT_MOC_LITERAL(12, 137, 8), // "newAlias"
QT_MOC_LITERAL(13, 146, 13), // "makeCanonical"
QT_MOC_LITERAL(14, 160, 13), // "togglePublish"
QT_MOC_LITERAL(15, 174, 15), // "toggleAdvertize"
QT_MOC_LITERAL(16, 190, 6), // "commit"
QT_MOC_LITERAL(17, 197, 12) // "canAdvertize"

    },
    "AliasEditingModel\0updateAlias\0\0"
    "std::string\0alias\0target\0"
    "updatePublishedAliases\0std::vector<std::string>\0"
    "aliases\0deleteAlias\0row\0addAlias\0"
    "newAlias\0makeCanonical\0togglePublish\0"
    "toggleAdvertize\0commit\0canAdvertize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AliasEditingModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       9,    1,   62,    2, 0x02 /* Public */,
      11,    1,   65,    2, 0x02 /* Public */,
      13,    1,   68,    2, 0x02 /* Public */,
      14,    1,   71,    2, 0x02 /* Public */,
      15,    1,   74,    2, 0x02 /* Public */,
      16,    0,   77,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // methods: parameters
    QMetaType::Bool, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,

 // properties: name, type, flags
      17, QMetaType::Bool, 0x00095401,

       0        // eod
};

void AliasEditingModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AliasEditingModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateAlias((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 1: _t->updatePublishedAliases((*reinterpret_cast< std::vector<std::string>(*)>(_a[1]))); break;
        case 2: { bool _r = _t->deleteAlias((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->addAlias((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->makeCanonical((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->togglePublish((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->toggleAdvertize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->commit(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AliasEditingModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->canAdvertize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AliasEditingModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_AliasEditingModel.data,
    qt_meta_data_AliasEditingModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AliasEditingModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AliasEditingModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AliasEditingModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int AliasEditingModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
