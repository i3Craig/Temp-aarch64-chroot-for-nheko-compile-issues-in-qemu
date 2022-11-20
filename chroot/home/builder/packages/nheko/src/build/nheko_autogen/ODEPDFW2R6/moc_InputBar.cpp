/****************************************************************************
** Meta object code from reading C++ file 'InputBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../nheko-0.10.2/src/timeline/InputBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InputBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InputVideoSurface_t {
    QByteArrayData data[4];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InputVideoSurface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InputVideoSurface_t qt_meta_stringdata_InputVideoSurface = {
    {
QT_MOC_LITERAL(0, 0, 17), // "InputVideoSurface"
QT_MOC_LITERAL(1, 18, 8), // "newImage"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3) // "img"

    },
    "InputVideoSurface\0newImage\0\0img"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputVideoSurface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,

       0        // eod
};

void InputVideoSurface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InputVideoSurface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InputVideoSurface::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputVideoSurface::newImage)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InputVideoSurface::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractVideoSurface::staticMetaObject>(),
    qt_meta_stringdata_InputVideoSurface.data,
    qt_meta_data_InputVideoSurface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InputVideoSurface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputVideoSurface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InputVideoSurface.stringdata0))
        return static_cast<void*>(this);
    return QAbstractVideoSurface::qt_metacast(_clname);
}

int InputVideoSurface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractVideoSurface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void InputVideoSurface::newImage(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MediaUpload_t {
    QByteArrayData data[21];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MediaUpload_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MediaUpload_t qt_meta_stringdata_MediaUpload = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MediaUpload"
QT_MOC_LITERAL(1, 12, 14), // "uploadComplete"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "MediaUpload*"
QT_MOC_LITERAL(4, 41, 4), // "self"
QT_MOC_LITERAL(5, 46, 3), // "url"
QT_MOC_LITERAL(6, 50, 12), // "uploadFailed"
QT_MOC_LITERAL(7, 63, 15), // "filenameChanged"
QT_MOC_LITERAL(8, 79, 16), // "thumbnailChanged"
QT_MOC_LITERAL(9, 96, 16), // "mediaTypeChanged"
QT_MOC_LITERAL(10, 113, 11), // "startUpload"
QT_MOC_LITERAL(11, 125, 12), // "setThumbnail"
QT_MOC_LITERAL(12, 138, 3), // "img"
QT_MOC_LITERAL(13, 142, 9), // "mediaType"
QT_MOC_LITERAL(14, 152, 9), // "thumbnail"
QT_MOC_LITERAL(15, 162, 8), // "filename"
QT_MOC_LITERAL(16, 171, 9), // "MediaType"
QT_MOC_LITERAL(17, 181, 4), // "File"
QT_MOC_LITERAL(18, 186, 5), // "Image"
QT_MOC_LITERAL(19, 192, 5), // "Video"
QT_MOC_LITERAL(20, 198, 5) // "Audio"

    },
    "MediaUpload\0uploadComplete\0\0MediaUpload*\0"
    "self\0url\0uploadFailed\0filenameChanged\0"
    "thumbnailChanged\0mediaTypeChanged\0"
    "startUpload\0setThumbnail\0img\0mediaType\0"
    "thumbnail\0filename\0MediaType\0File\0"
    "Image\0Video\0Audio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MediaUpload[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   64, // properties
       1,   76, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       6,    1,   54,    2, 0x06 /* Public */,
       7,    0,   57,    2, 0x06 /* Public */,
       8,    0,   58,    2, 0x06 /* Public */,
       9,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   60,    2, 0x0a /* Public */,
      11,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,   12,

 // properties: name, type, flags
      13, QMetaType::Int, 0x00495001,
      14, QMetaType::QUrl, 0x00495001,
      15, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       4,
       3,
       2,

 // enums: name, alias, flags, count, data
      16,   16, 0x0,    4,   81,

 // enum data: key, value
      17, uint(MediaUpload::File),
      18, uint(MediaUpload::Image),
      19, uint(MediaUpload::Video),
      20, uint(MediaUpload::Audio),

       0        // eod
};

void MediaUpload::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MediaUpload *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->uploadComplete((*reinterpret_cast< MediaUpload*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->uploadFailed((*reinterpret_cast< MediaUpload*(*)>(_a[1]))); break;
        case 2: _t->filenameChanged(); break;
        case 3: _t->thumbnailChanged(); break;
        case 4: _t->mediaTypeChanged(); break;
        case 5: _t->startUpload(); break;
        case 6: _t->setThumbnail((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MediaUpload* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MediaUpload* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MediaUpload::*)(MediaUpload * , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaUpload::uploadComplete)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MediaUpload::*)(MediaUpload * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaUpload::uploadFailed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MediaUpload::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaUpload::filenameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MediaUpload::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaUpload::thumbnailChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MediaUpload::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaUpload::mediaTypeChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MediaUpload *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->thumbnailDataUrl(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->filename(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MediaUpload *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setFilename(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MediaUpload::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MediaUpload.data,
    qt_meta_data_MediaUpload,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MediaUpload::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaUpload::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MediaUpload.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MediaUpload::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MediaUpload::uploadComplete(MediaUpload * _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MediaUpload::uploadFailed(MediaUpload * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MediaUpload::filenameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MediaUpload::thumbnailChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MediaUpload::mediaTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_InputBar_t {
    QByteArrayData data[47];
    char stringdata0[538];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InputBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InputBar_t qt_meta_stringdata_InputBar = {
    {
QT_MOC_LITERAL(0, 0, 8), // "InputBar"
QT_MOC_LITERAL(1, 9, 11), // "textChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "newText"
QT_MOC_LITERAL(4, 30, 16), // "uploadingChanged"
QT_MOC_LITERAL(5, 47, 5), // "value"
QT_MOC_LITERAL(6, 53, 21), // "containsAtRoomChanged"
QT_MOC_LITERAL(7, 75, 14), // "uploadsChanged"
QT_MOC_LITERAL(8, 90, 4), // "text"
QT_MOC_LITERAL(9, 95, 12), // "previousText"
QT_MOC_LITERAL(10, 108, 8), // "nextText"
QT_MOC_LITERAL(11, 117, 7), // "setText"
QT_MOC_LITERAL(12, 125, 14), // "containsAtRoom"
QT_MOC_LITERAL(13, 140, 4), // "send"
QT_MOC_LITERAL(14, 145, 18), // "tryPasteAttachment"
QT_MOC_LITERAL(15, 164, 9), // "fromMouse"
QT_MOC_LITERAL(16, 174, 14), // "insertMimeData"
QT_MOC_LITERAL(17, 189, 16), // "const QMimeData*"
QT_MOC_LITERAL(18, 206, 4), // "data"
QT_MOC_LITERAL(19, 211, 11), // "updateState"
QT_MOC_LITERAL(20, 223, 14), // "selectionStart"
QT_MOC_LITERAL(21, 238, 12), // "selectionEnd"
QT_MOC_LITERAL(22, 251, 14), // "cursorPosition"
QT_MOC_LITERAL(23, 266, 17), // "openFileSelection"
QT_MOC_LITERAL(24, 284, 9), // "uploading"
QT_MOC_LITERAL(25, 294, 7), // "message"
QT_MOC_LITERAL(26, 302, 4), // "body"
QT_MOC_LITERAL(27, 307, 16), // "MarkdownOverride"
QT_MOC_LITERAL(28, 324, 11), // "useMarkdown"
QT_MOC_LITERAL(29, 336, 10), // "rainbowify"
QT_MOC_LITERAL(30, 347, 8), // "reaction"
QT_MOC_LITERAL(31, 356, 12), // "reactedEvent"
QT_MOC_LITERAL(32, 369, 11), // "reactionKey"
QT_MOC_LITERAL(33, 381, 7), // "sticker"
QT_MOC_LITERAL(34, 389, 23), // "CombinedImagePackModel*"
QT_MOC_LITERAL(35, 413, 5), // "model"
QT_MOC_LITERAL(36, 419, 3), // "row"
QT_MOC_LITERAL(37, 423, 13), // "acceptUploads"
QT_MOC_LITERAL(38, 437, 14), // "declineUploads"
QT_MOC_LITERAL(39, 452, 11), // "startTyping"
QT_MOC_LITERAL(40, 464, 10), // "stopTyping"
QT_MOC_LITERAL(41, 475, 14), // "finalizeUpload"
QT_MOC_LITERAL(42, 490, 12), // "MediaUpload*"
QT_MOC_LITERAL(43, 503, 6), // "upload"
QT_MOC_LITERAL(44, 510, 3), // "url"
QT_MOC_LITERAL(45, 514, 15), // "removeRunUpload"
QT_MOC_LITERAL(46, 530, 7) // "uploads"

    },
    "InputBar\0textChanged\0\0newText\0"
    "uploadingChanged\0value\0containsAtRoomChanged\0"
    "uploadsChanged\0text\0previousText\0"
    "nextText\0setText\0containsAtRoom\0send\0"
    "tryPasteAttachment\0fromMouse\0"
    "insertMimeData\0const QMimeData*\0data\0"
    "updateState\0selectionStart\0selectionEnd\0"
    "cursorPosition\0openFileSelection\0"
    "uploading\0message\0body\0MarkdownOverride\0"
    "useMarkdown\0rainbowify\0reaction\0"
    "reactedEvent\0reactionKey\0sticker\0"
    "CombinedImagePackModel*\0model\0row\0"
    "acceptUploads\0declineUploads\0startTyping\0"
    "stopTyping\0finalizeUpload\0MediaUpload*\0"
    "upload\0url\0removeRunUpload\0uploads"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       4,  214, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       4,    1,  147,    2, 0x06 /* Public */,
       6,    0,  150,    2, 0x06 /* Public */,
       7,    0,  151,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  152,    2, 0x0a /* Public */,
       9,    0,  153,    2, 0x0a /* Public */,
      10,    0,  154,    2, 0x0a /* Public */,
      11,    1,  155,    2, 0x0a /* Public */,
      12,    0,  158,    2, 0x0a /* Public */,
      13,    0,  159,    2, 0x0a /* Public */,
      14,    1,  160,    2, 0x0a /* Public */,
      16,    1,  163,    2, 0x0a /* Public */,
      19,    4,  166,    2, 0x0a /* Public */,
      23,    0,  175,    2, 0x0a /* Public */,
      24,    0,  176,    2, 0x0a /* Public */,
      25,    3,  177,    2, 0x0a /* Public */,
      25,    2,  184,    2, 0x2a /* Public | MethodCloned */,
      25,    1,  189,    2, 0x2a /* Public | MethodCloned */,
      30,    2,  192,    2, 0x0a /* Public */,
      33,    2,  197,    2, 0x0a /* Public */,
      37,    0,  202,    2, 0x0a /* Public */,
      38,    0,  203,    2, 0x0a /* Public */,
      39,    0,  204,    2, 0x08 /* Private */,
      40,    0,  205,    2, 0x08 /* Private */,
      41,    2,  206,    2, 0x08 /* Private */,
      45,    1,  211,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Bool,   15,
    QMetaType::Bool, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   20,   21,   22,    8,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 27, QMetaType::Bool,   26,   28,   29,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 27,   26,   28,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   31,   32,
    QMetaType::Void, 0x80000000 | 34, QMetaType::Int,   35,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 42, QMetaType::QString,   43,   44,
    QMetaType::Void, 0x80000000 | 42,   43,

 // properties: name, type, flags
      24, QMetaType::Bool, 0x00495001,
      12, QMetaType::Bool, 0x00495001,
       8, QMetaType::QString, 0x00495001,
      46, QMetaType::QVariantList, 0x00495001,

 // properties: notify_signal_id
       1,
       2,
       0,
       3,

       0        // eod
};

void InputBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InputBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->uploadingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->containsAtRoomChanged(); break;
        case 3: _t->uploadsChanged(); break;
        case 4: { QString _r = _t->text();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->previousText();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->nextText();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: { bool _r = _t->containsAtRoom();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->send(); break;
        case 10: { bool _r = _t->tryPasteAttachment((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->insertMimeData((*reinterpret_cast< const QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->updateState((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 13: _t->openFileSelection(); break;
        case 14: { bool _r = _t->uploading();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MarkdownOverride(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 16: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MarkdownOverride(*)>(_a[2]))); break;
        case 17: _t->message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->reaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 19: _t->sticker((*reinterpret_cast< CombinedImagePackModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->acceptUploads(); break;
        case 21: _t->declineUploads(); break;
        case 22: _t->startTyping(); break;
        case 23: _t->stopTyping(); break;
        case 24: _t->finalizeUpload((*reinterpret_cast< MediaUpload*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 25: _t->removeRunUpload((*reinterpret_cast< MediaUpload*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MediaUpload* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MediaUpload* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InputBar::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputBar::textChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InputBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputBar::uploadingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InputBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputBar::containsAtRoomChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (InputBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputBar::uploadsChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<InputBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->uploading(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->containsAtRoom(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 3: *reinterpret_cast< QVariantList*>(_v) = _t->uploads(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject InputBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_InputBar.data,
    qt_meta_data_InputBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InputBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InputBar.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InputBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void InputBar::textChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InputBar::uploadingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InputBar::containsAtRoomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void InputBar::uploadsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
