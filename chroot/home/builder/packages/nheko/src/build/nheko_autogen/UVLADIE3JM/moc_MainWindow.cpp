/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../nheko-0.10.2/src/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 6), // "reload"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 14), // "secretsChanged"
QT_MOC_LITERAL(4, 34, 16), // "showNotification"
QT_MOC_LITERAL(5, 51, 3), // "msg"
QT_MOC_LITERAL(6, 55, 16), // "switchToChatPage"
QT_MOC_LITERAL(7, 72, 19), // "switchToWelcomePage"
QT_MOC_LITERAL(8, 92, 17), // "switchToLoginPage"
QT_MOC_LITERAL(9, 110, 5), // "error"
QT_MOC_LITERAL(10, 116, 13), // "iconActivated"
QT_MOC_LITERAL(11, 130, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(12, 164, 6), // "reason"
QT_MOC_LITERAL(13, 171, 14), // "setWindowTitle"
QT_MOC_LITERAL(14, 186, 17), // "notificationCount"
QT_MOC_LITERAL(15, 204, 16), // "addPerRoomWindow"
QT_MOC_LITERAL(16, 221, 4), // "room"
QT_MOC_LITERAL(17, 226, 8), // "QWindow*"
QT_MOC_LITERAL(18, 235, 6), // "window"
QT_MOC_LITERAL(19, 242, 19) // "removePerRoomWindow"

    },
    "MainWindow\0reload\0\0secretsChanged\0"
    "showNotification\0msg\0switchToChatPage\0"
    "switchToWelcomePage\0switchToLoginPage\0"
    "error\0iconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0setWindowTitle\0notificationCount\0"
    "addPerRoomWindow\0room\0QWindow*\0window\0"
    "removePerRoomWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    1,   66,    2, 0x06 /* Public */,
       6,    0,   69,    2, 0x06 /* Public */,
       7,    0,   70,    2, 0x06 /* Public */,
       8,    1,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   74,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      15,    2,   80,    2, 0x02 /* Public */,
      19,    2,   85,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int,   14,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 17,   16,   18,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 17,   16,   18,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->reload(); break;
        case 1: _t->secretsChanged(); break;
        case 2: _t->showNotification((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->switchToChatPage(); break;
        case 4: _t->switchToWelcomePage(); break;
        case 5: _t->switchToLoginPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->iconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 7: _t->setWindowTitle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->addPerRoomWindow((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWindow*(*)>(_a[2]))); break;
        case 9: _t->removePerRoomWindow((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWindow*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWindow* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWindow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::reload)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::secretsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::showNotification)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::switchToChatPage)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::switchToWelcomePage)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::switchToLoginPage)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickView::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QQuickView::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::reload()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::secretsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::showNotification(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::switchToChatPage()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::switchToWelcomePage()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MainWindow::switchToLoginPage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
