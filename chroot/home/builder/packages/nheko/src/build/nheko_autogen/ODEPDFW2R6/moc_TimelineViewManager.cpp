/****************************************************************************
** Meta object code from reading C++ file 'TimelineViewManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../nheko-0.10.2/src/timeline/TimelineViewManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimelineViewManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TimelineViewManager_t {
    QByteArrayData data[92];
    char stringdata0[1312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimelineViewManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimelineViewManager_t qt_meta_stringdata_TimelineViewManager = {
    {
QT_MOC_LITERAL(0, 0, 19), // "TimelineViewManager"
QT_MOC_LITERAL(1, 20, 21), // "activeTimelineChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 14), // "TimelineModel*"
QT_MOC_LITERAL(4, 58, 8), // "timeline"
QT_MOC_LITERAL(5, 67, 18), // "initialSyncChanged"
QT_MOC_LITERAL(6, 86, 13), // "isInitialSync"
QT_MOC_LITERAL(7, 100, 18), // "isConnectedChanged"
QT_MOC_LITERAL(8, 119, 5), // "state"
QT_MOC_LITERAL(9, 125, 20), // "replyingEventChanged"
QT_MOC_LITERAL(10, 146, 13), // "replyingEvent"
QT_MOC_LITERAL(11, 160, 11), // "replyClosed"
QT_MOC_LITERAL(12, 172, 11), // "inviteUsers"
QT_MOC_LITERAL(13, 184, 6), // "roomId"
QT_MOC_LITERAL(14, 191, 5), // "users"
QT_MOC_LITERAL(15, 197, 12), // "showRoomList"
QT_MOC_LITERAL(16, 210, 17), // "narrowViewChanged"
QT_MOC_LITERAL(17, 228, 10), // "focusInput"
QT_MOC_LITERAL(18, 239, 21), // "openRoomMembersDialog"
QT_MOC_LITERAL(19, 261, 11), // "MemberList*"
QT_MOC_LITERAL(20, 273, 7), // "members"
QT_MOC_LITERAL(21, 281, 4), // "room"
QT_MOC_LITERAL(22, 286, 22), // "openRoomSettingsDialog"
QT_MOC_LITERAL(23, 309, 13), // "RoomSettings*"
QT_MOC_LITERAL(24, 323, 8), // "settings"
QT_MOC_LITERAL(25, 332, 21), // "openInviteUsersDialog"
QT_MOC_LITERAL(26, 354, 14), // "InviteesModel*"
QT_MOC_LITERAL(27, 369, 8), // "invitees"
QT_MOC_LITERAL(28, 378, 11), // "openProfile"
QT_MOC_LITERAL(29, 390, 12), // "UserProfile*"
QT_MOC_LITERAL(30, 403, 7), // "profile"
QT_MOC_LITERAL(31, 411, 21), // "showImagePackSettings"
QT_MOC_LITERAL(32, 433, 19), // "ImagePackListModel*"
QT_MOC_LITERAL(33, 453, 8), // "packlist"
QT_MOC_LITERAL(34, 462, 19), // "openLeaveRoomDialog"
QT_MOC_LITERAL(35, 482, 6), // "roomid"
QT_MOC_LITERAL(36, 489, 6), // "reason"
QT_MOC_LITERAL(37, 496, 16), // "showImageOverlay"
QT_MOC_LITERAL(38, 513, 7), // "eventId"
QT_MOC_LITERAL(39, 521, 3), // "url"
QT_MOC_LITERAL(40, 525, 13), // "originalWidth"
QT_MOC_LITERAL(41, 539, 18), // "proportionalHeight"
QT_MOC_LITERAL(42, 558, 18), // "updateReadReceipts"
QT_MOC_LITERAL(43, 577, 7), // "room_id"
QT_MOC_LITERAL(44, 585, 20), // "std::vector<QString>"
QT_MOC_LITERAL(45, 606, 9), // "event_ids"
QT_MOC_LITERAL(46, 616, 18), // "receivedSessionKey"
QT_MOC_LITERAL(47, 635, 11), // "std::string"
QT_MOC_LITERAL(48, 647, 10), // "session_id"
QT_MOC_LITERAL(49, 658, 18), // "initializeRoomlist"
QT_MOC_LITERAL(50, 677, 9), // "showEvent"
QT_MOC_LITERAL(51, 687, 8), // "event_id"
QT_MOC_LITERAL(52, 696, 18), // "updateColorPalette"
QT_MOC_LITERAL(53, 715, 10), // "queueReply"
QT_MOC_LITERAL(54, 726, 14), // "repliedToEvent"
QT_MOC_LITERAL(55, 741, 9), // "replyBody"
QT_MOC_LITERAL(56, 751, 16), // "queueCallMessage"
QT_MOC_LITERAL(57, 768, 29), // "mtx::events::voip::CallInvite"
QT_MOC_LITERAL(58, 798, 33), // "mtx::events::voip::CallCandid..."
QT_MOC_LITERAL(59, 832, 29), // "mtx::events::voip::CallAnswer"
QT_MOC_LITERAL(60, 862, 29), // "mtx::events::voip::CallHangUp"
QT_MOC_LITERAL(61, 892, 16), // "setVideoCallItem"
QT_MOC_LITERAL(62, 909, 12), // "completerFor"
QT_MOC_LITERAL(63, 922, 13), // "completerName"
QT_MOC_LITERAL(64, 936, 20), // "forwardMessageToRoom"
QT_MOC_LITERAL(65, 957, 41), // "mtx::events::collections::Tim..."
QT_MOC_LITERAL(66, 999, 1), // "e"
QT_MOC_LITERAL(67, 1001, 5), // "rooms"
QT_MOC_LITERAL(68, 1007, 14), // "RoomlistModel*"
QT_MOC_LITERAL(69, 1022, 16), // "openImageOverlay"
QT_MOC_LITERAL(70, 1039, 6), // "mxcUrl"
QT_MOC_LITERAL(71, 1046, 21), // "openImagePackSettings"
QT_MOC_LITERAL(72, 1068, 9), // "saveMedia"
QT_MOC_LITERAL(73, 1078, 9), // "userColor"
QT_MOC_LITERAL(74, 1088, 2), // "id"
QT_MOC_LITERAL(75, 1091, 10), // "background"
QT_MOC_LITERAL(76, 1102, 11), // "escapeEmoji"
QT_MOC_LITERAL(77, 1114, 3), // "str"
QT_MOC_LITERAL(78, 1118, 10), // "htmlEscape"
QT_MOC_LITERAL(79, 1129, 15), // "openRoomMembers"
QT_MOC_LITERAL(80, 1145, 16), // "openRoomSettings"
QT_MOC_LITERAL(81, 1162, 15), // "openInviteUsers"
QT_MOC_LITERAL(82, 1178, 21), // "openGlobalUserProfile"
QT_MOC_LITERAL(83, 1200, 6), // "userId"
QT_MOC_LITERAL(84, 1207, 20), // "getGlobalUserProfile"
QT_MOC_LITERAL(85, 1228, 17), // "focusMessageInput"
QT_MOC_LITERAL(86, 1246, 17), // "fixImageRendering"
QT_MOC_LITERAL(87, 1264, 19), // "QQuickTextDocument*"
QT_MOC_LITERAL(88, 1284, 1), // "t"
QT_MOC_LITERAL(89, 1286, 11), // "QQuickItem*"
QT_MOC_LITERAL(90, 1298, 1), // "i"
QT_MOC_LITERAL(91, 1300, 11) // "isConnected"

    },
    "TimelineViewManager\0activeTimelineChanged\0"
    "\0TimelineModel*\0timeline\0initialSyncChanged\0"
    "isInitialSync\0isConnectedChanged\0state\0"
    "replyingEventChanged\0replyingEvent\0"
    "replyClosed\0inviteUsers\0roomId\0users\0"
    "showRoomList\0narrowViewChanged\0"
    "focusInput\0openRoomMembersDialog\0"
    "MemberList*\0members\0room\0"
    "openRoomSettingsDialog\0RoomSettings*\0"
    "settings\0openInviteUsersDialog\0"
    "InviteesModel*\0invitees\0openProfile\0"
    "UserProfile*\0profile\0showImagePackSettings\0"
    "ImagePackListModel*\0packlist\0"
    "openLeaveRoomDialog\0roomid\0reason\0"
    "showImageOverlay\0eventId\0url\0originalWidth\0"
    "proportionalHeight\0updateReadReceipts\0"
    "room_id\0std::vector<QString>\0event_ids\0"
    "receivedSessionKey\0std::string\0"
    "session_id\0initializeRoomlist\0showEvent\0"
    "event_id\0updateColorPalette\0queueReply\0"
    "repliedToEvent\0replyBody\0queueCallMessage\0"
    "mtx::events::voip::CallInvite\0"
    "mtx::events::voip::CallCandidates\0"
    "mtx::events::voip::CallAnswer\0"
    "mtx::events::voip::CallHangUp\0"
    "setVideoCallItem\0completerFor\0"
    "completerName\0forwardMessageToRoom\0"
    "mtx::events::collections::TimelineEvents*\0"
    "e\0rooms\0RoomlistModel*\0openImageOverlay\0"
    "mxcUrl\0openImagePackSettings\0saveMedia\0"
    "userColor\0id\0background\0escapeEmoji\0"
    "str\0htmlEscape\0openRoomMembers\0"
    "openRoomSettings\0openInviteUsers\0"
    "openGlobalUserProfile\0userId\0"
    "getGlobalUserProfile\0focusMessageInput\0"
    "fixImageRendering\0QQuickTextDocument*\0"
    "t\0QQuickItem*\0i\0isConnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimelineViewManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       2,  412, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  244,    2, 0x06 /* Public */,
       5,    1,  247,    2, 0x06 /* Public */,
       7,    1,  250,    2, 0x06 /* Public */,
       9,    1,  253,    2, 0x06 /* Public */,
      11,    0,  256,    2, 0x06 /* Public */,
      12,    2,  257,    2, 0x06 /* Public */,
      15,    0,  262,    2, 0x06 /* Public */,
      16,    0,  263,    2, 0x06 /* Public */,
      17,    0,  264,    2, 0x06 /* Public */,
      18,    2,  265,    2, 0x06 /* Public */,
      22,    1,  270,    2, 0x06 /* Public */,
      25,    1,  273,    2, 0x06 /* Public */,
      28,    1,  276,    2, 0x06 /* Public */,
      31,    2,  279,    2, 0x06 /* Public */,
      34,    2,  284,    2, 0x06 /* Public */,
      34,    1,  289,    2, 0x26 /* Public | MethodCloned */,
      37,    5,  292,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      42,    2,  303,    2, 0x0a /* Public */,
      46,    2,  308,    2, 0x0a /* Public */,
      49,    0,  313,    2, 0x0a /* Public */,
      50,    2,  314,    2, 0x0a /* Public */,
      52,    0,  319,    2, 0x0a /* Public */,
      53,    3,  320,    2, 0x0a /* Public */,
      56,    2,  327,    2, 0x0a /* Public */,
      56,    2,  332,    2, 0x0a /* Public */,
      56,    2,  337,    2, 0x0a /* Public */,
      56,    2,  342,    2, 0x0a /* Public */,
      61,    0,  347,    2, 0x0a /* Public */,
      62,    2,  348,    2, 0x0a /* Public */,
      62,    1,  353,    2, 0x2a /* Public | MethodCloned */,
      64,    2,  356,    2, 0x0a /* Public */,
      67,    0,  361,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,  362,    2, 0x02 /* Public */,
      69,    5,  363,    2, 0x02 /* Public */,
      71,    1,  374,    2, 0x02 /* Public */,
      72,    1,  377,    2, 0x02 /* Public */,
      73,    2,  380,    2, 0x02 /* Public */,
      76,    1,  385,    2, 0x02 /* Public */,
      78,    1,  388,    2, 0x02 /* Public */,
      79,    1,  391,    2, 0x02 /* Public */,
      80,    1,  394,    2, 0x02 /* Public */,
      81,    1,  397,    2, 0x02 /* Public */,
      82,    1,  400,    2, 0x02 /* Public */,
      84,    1,  403,    2, 0x02 /* Public */,
      85,    0,  406,    2, 0x02 /* Public */,
      86,    2,  407,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 3,   20,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 32,   21,   33,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   35,   36,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double,   21,   38,   39,   40,   41,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 44,   43,   45,
    QMetaType::Void, 0x80000000 | 47, 0x80000000 | 47,   43,   48,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   43,   51,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   35,   54,   55,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 57,   35,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 58,   35,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 59,   35,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 60,   35,    2,
    QMetaType::Void,
    QMetaType::QObjectStar, QMetaType::QString, QMetaType::QString,   63,   13,
    QMetaType::QObjectStar, QMetaType::QString,   63,
    QMetaType::Void, 0x80000000 | 65, QMetaType::QString,   66,   13,
    0x80000000 | 68,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double,   21,   70,   38,   40,   41,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, QMetaType::QString,   70,
    QMetaType::QColor, QMetaType::QString, QMetaType::QColor,   74,   75,
    QMetaType::QString, QMetaType::QString,   77,
    QMetaType::QString, QMetaType::QString,   77,
    QMetaType::Void, 0x80000000 | 3,   21,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   83,
    0x80000000 | 29, QMetaType::QString,   83,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 87, 0x80000000 | 89,   88,   90,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00495003,
      91, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       1,
       2,

       0        // eod
};

void TimelineViewManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TimelineViewManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activeTimelineChanged((*reinterpret_cast< TimelineModel*(*)>(_a[1]))); break;
        case 1: _t->initialSyncChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->isConnectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->replyingEventChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->replyClosed(); break;
        case 5: _t->inviteUsers((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 6: _t->showRoomList(); break;
        case 7: _t->narrowViewChanged(); break;
        case 8: _t->focusInput(); break;
        case 9: _t->openRoomMembersDialog((*reinterpret_cast< MemberList*(*)>(_a[1])),(*reinterpret_cast< TimelineModel*(*)>(_a[2]))); break;
        case 10: _t->openRoomSettingsDialog((*reinterpret_cast< RoomSettings*(*)>(_a[1]))); break;
        case 11: _t->openInviteUsersDialog((*reinterpret_cast< InviteesModel*(*)>(_a[1]))); break;
        case 12: _t->openProfile((*reinterpret_cast< UserProfile*(*)>(_a[1]))); break;
        case 13: _t->showImagePackSettings((*reinterpret_cast< TimelineModel*(*)>(_a[1])),(*reinterpret_cast< ImagePackListModel*(*)>(_a[2]))); break;
        case 14: _t->openLeaveRoomDialog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 15: _t->openLeaveRoomDialog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->showImageOverlay((*reinterpret_cast< TimelineModel*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 17: _t->updateReadReceipts((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const std::vector<QString>(*)>(_a[2]))); break;
        case 18: _t->receivedSessionKey((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 19: _t->initializeRoomlist(); break;
        case 20: _t->showEvent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 21: _t->updateColorPalette(); break;
        case 22: _t->queueReply((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 23: _t->queueCallMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const mtx::events::voip::CallInvite(*)>(_a[2]))); break;
        case 24: _t->queueCallMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const mtx::events::voip::CallCandidates(*)>(_a[2]))); break;
        case 25: _t->queueCallMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const mtx::events::voip::CallAnswer(*)>(_a[2]))); break;
        case 26: _t->queueCallMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const mtx::events::voip::CallHangUp(*)>(_a[2]))); break;
        case 27: _t->setVideoCallItem(); break;
        case 28: { QObject* _r = _t->completerFor((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 29: { QObject* _r = _t->completerFor((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 30: _t->forwardMessageToRoom((*reinterpret_cast< mtx::events::collections::TimelineEvents*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 31: { RoomlistModel* _r = _t->rooms();
            if (_a[0]) *reinterpret_cast< RoomlistModel**>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->isInitialSync();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: _t->openImageOverlay((*reinterpret_cast< TimelineModel*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 34: _t->openImagePackSettings((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->saveMedia((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: { QColor _r = _t->userColor((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 37: { QString _r = _t->escapeEmoji((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 38: { QString _r = _t->htmlEscape((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 39: _t->openRoomMembers((*reinterpret_cast< TimelineModel*(*)>(_a[1]))); break;
        case 40: _t->openRoomSettings((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 41: _t->openInviteUsers((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 42: _t->openGlobalUserProfile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 43: { UserProfile* _r = _t->getGlobalUserProfile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< UserProfile**>(_a[0]) = std::move(_r); }  break;
        case 44: _t->focusMessageInput(); break;
        case 45: _t->fixImageRendering((*reinterpret_cast< QQuickTextDocument*(*)>(_a[1])),(*reinterpret_cast< QQuickItem*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TimelineModel* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MemberList* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TimelineModel* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RoomSettings* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InviteesModel* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UserProfile* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TimelineModel* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TimelineModel* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TimelineModel* >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TimelineModel* >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickTextDocument* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TimelineViewManager::*)(TimelineModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineViewManager::activeTimelineChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TimelineViewManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineViewManager::initialSyncChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TimelineViewManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineViewManager::isConnectedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TimelineViewManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineViewManager::replyingEventChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TimelineViewManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineViewManager::replyClosed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TimelineViewManager::*)(QString , QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineViewManager::inviteUsers)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TimelineViewManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineViewManager::showRoomList)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TimelineViewManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineViewManager::narrowViewChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (TimelineViewManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineViewManager::focusInput)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (TimelineViewManager::*)(MemberList * , TimelineModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineViewManager::openRoomMembersDialog)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (TimelineViewManager::*)(RoomSettings * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineViewManager::openRoomSettingsDialog)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (TimelineViewManager::*)(InviteesModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineViewManager::openInviteUsersDialog)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (TimelineViewManager::*)(UserProfile * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineViewManager::openProfile)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (TimelineViewManager::*)(TimelineModel * , ImagePackListModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineViewManager::showImagePackSettings)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (TimelineViewManager::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineViewManager::openLeaveRoomDialog)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (TimelineViewManager::*)(TimelineModel * , QString , QString , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineViewManager::showImageOverlay)) {
                *result = 16;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TimelineViewManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isInitialSync(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isConnected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TimelineViewManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->isInitialSync_ != *reinterpret_cast< bool*>(_v)) {
                _t->isInitialSync_ = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->initialSyncChanged(_t->isInitialSync_);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TimelineViewManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TimelineViewManager.data,
    qt_meta_data_TimelineViewManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TimelineViewManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimelineViewManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TimelineViewManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TimelineViewManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TimelineViewManager::activeTimelineChanged(TimelineModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TimelineViewManager::initialSyncChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TimelineViewManager::isConnectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TimelineViewManager::replyingEventChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TimelineViewManager::replyClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TimelineViewManager::inviteUsers(QString _t1, QStringList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TimelineViewManager::showRoomList()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void TimelineViewManager::narrowViewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void TimelineViewManager::focusInput()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void TimelineViewManager::openRoomMembersDialog(MemberList * _t1, TimelineModel * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void TimelineViewManager::openRoomSettingsDialog(RoomSettings * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void TimelineViewManager::openInviteUsersDialog(InviteesModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void TimelineViewManager::openProfile(UserProfile * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void TimelineViewManager::showImagePackSettings(TimelineModel * _t1, ImagePackListModel * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void TimelineViewManager::openLeaveRoomDialog(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 16
void TimelineViewManager::showImageOverlay(TimelineModel * _t1, QString _t2, QString _t3, double _t4, double _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
