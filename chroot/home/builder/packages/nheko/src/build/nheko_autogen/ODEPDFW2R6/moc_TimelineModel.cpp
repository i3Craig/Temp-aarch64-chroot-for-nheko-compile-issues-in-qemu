/****************************************************************************
** Meta object code from reading C++ file 'TimelineModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../nheko-0.10.2/src/timeline/TimelineModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimelineModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TimelineModel_t {
    QByteArrayData data[180];
    char stringdata0[2444];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimelineModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimelineModel_t qt_meta_stringdata_TimelineModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TimelineModel"
QT_MOC_LITERAL(1, 14, 15), // "dataAtIdChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 2), // "id"
QT_MOC_LITERAL(4, 34, 19), // "currentIndexChanged"
QT_MOC_LITERAL(5, 54, 5), // "index"
QT_MOC_LITERAL(6, 60, 15), // "redactionFailed"
QT_MOC_LITERAL(7, 76, 11), // "mediaCached"
QT_MOC_LITERAL(8, 88, 6), // "mxcUrl"
QT_MOC_LITERAL(9, 95, 8), // "cacheUrl"
QT_MOC_LITERAL(10, 104, 17), // "newEncryptedImage"
QT_MOC_LITERAL(11, 122, 26), // "mtx::crypto::EncryptedFile"
QT_MOC_LITERAL(12, 149, 14), // "encryptionInfo"
QT_MOC_LITERAL(13, 164, 18), // "typingUsersChanged"
QT_MOC_LITERAL(14, 183, 20), // "std::vector<QString>"
QT_MOC_LITERAL(15, 204, 5), // "users"
QT_MOC_LITERAL(16, 210, 12), // "replyChanged"
QT_MOC_LITERAL(17, 223, 5), // "reply"
QT_MOC_LITERAL(18, 229, 11), // "editChanged"
QT_MOC_LITERAL(19, 241, 22), // "openReadReceiptsDialog"
QT_MOC_LITERAL(20, 264, 18), // "ReadReceiptsProxy*"
QT_MOC_LITERAL(21, 283, 2), // "rr"
QT_MOC_LITERAL(22, 286, 20), // "showRawMessageDialog"
QT_MOC_LITERAL(23, 307, 10), // "rawMessage"
QT_MOC_LITERAL(24, 318, 27), // "paginationInProgressChanged"
QT_MOC_LITERAL(25, 346, 12), // "newCallEvent"
QT_MOC_LITERAL(26, 359, 40), // "mtx::events::collections::Tim..."
QT_MOC_LITERAL(27, 400, 5), // "event"
QT_MOC_LITERAL(28, 406, 13), // "scrollToIndex"
QT_MOC_LITERAL(29, 420, 18), // "lastMessageChanged"
QT_MOC_LITERAL(30, 439, 20), // "notificationsChanged"
QT_MOC_LITERAL(31, 460, 8), // "newState"
QT_MOC_LITERAL(32, 469, 27), // "mtx::responses::StateEvents"
QT_MOC_LITERAL(33, 497, 6), // "events"
QT_MOC_LITERAL(34, 504, 16), // "newMessageToSend"
QT_MOC_LITERAL(35, 521, 24), // "addPendingMessageToStore"
QT_MOC_LITERAL(36, 546, 17), // "updateFlowEventId"
QT_MOC_LITERAL(37, 564, 11), // "std::string"
QT_MOC_LITERAL(38, 576, 8), // "event_id"
QT_MOC_LITERAL(39, 585, 17), // "encryptionChanged"
QT_MOC_LITERAL(40, 603, 17), // "trustlevelChanged"
QT_MOC_LITERAL(41, 621, 15), // "roomNameChanged"
QT_MOC_LITERAL(42, 637, 16), // "roomTopicChanged"
QT_MOC_LITERAL(43, 654, 21), // "pinnedMessagesChanged"
QT_MOC_LITERAL(44, 676, 18), // "widgetLinksChanged"
QT_MOC_LITERAL(45, 695, 20), // "roomAvatarUrlChanged"
QT_MOC_LITERAL(46, 716, 22), // "roomMemberCountChanged"
QT_MOC_LITERAL(47, 739, 15), // "isDirectChanged"
QT_MOC_LITERAL(48, 755, 28), // "directChatOtherUserIdChanged"
QT_MOC_LITERAL(49, 784, 18), // "permissionsChanged"
QT_MOC_LITERAL(50, 803, 13), // "forwardToRoom"
QT_MOC_LITERAL(51, 817, 41), // "mtx::events::collections::Tim..."
QT_MOC_LITERAL(52, 859, 1), // "e"
QT_MOC_LITERAL(53, 861, 6), // "roomId"
QT_MOC_LITERAL(54, 868, 19), // "scrollTargetChanged"
QT_MOC_LITERAL(55, 888, 15), // "setCurrentIndex"
QT_MOC_LITERAL(56, 904, 12), // "currentIndex"
QT_MOC_LITERAL(57, 917, 10), // "eventShown"
QT_MOC_LITERAL(58, 928, 16), // "markEventsAsRead"
QT_MOC_LITERAL(59, 945, 9), // "event_ids"
QT_MOC_LITERAL(60, 955, 7), // "getDump"
QT_MOC_LITERAL(61, 963, 7), // "eventId"
QT_MOC_LITERAL(62, 971, 9), // "relatedTo"
QT_MOC_LITERAL(63, 981, 17), // "updateTypingUsers"
QT_MOC_LITERAL(64, 999, 11), // "typingUsers"
QT_MOC_LITERAL(65, 1011, 20), // "paginationInProgress"
QT_MOC_LITERAL(66, 1032, 8), // "setReply"
QT_MOC_LITERAL(67, 1041, 8), // "newReply"
QT_MOC_LITERAL(68, 1050, 10), // "resetReply"
QT_MOC_LITERAL(69, 1061, 4), // "edit"
QT_MOC_LITERAL(70, 1066, 7), // "setEdit"
QT_MOC_LITERAL(71, 1074, 7), // "newEdit"
QT_MOC_LITERAL(72, 1082, 9), // "resetEdit"
QT_MOC_LITERAL(73, 1092, 21), // "setDecryptDescription"
QT_MOC_LITERAL(74, 1114, 7), // "decrypt"
QT_MOC_LITERAL(75, 1122, 13), // "clearTimeline"
QT_MOC_LITERAL(76, 1136, 10), // "resetState"
QT_MOC_LITERAL(77, 1147, 18), // "receivedSessionKey"
QT_MOC_LITERAL(78, 1166, 11), // "session_key"
QT_MOC_LITERAL(79, 1178, 8), // "roomName"
QT_MOC_LITERAL(80, 1187, 13), // "plainRoomName"
QT_MOC_LITERAL(81, 1201, 9), // "roomTopic"
QT_MOC_LITERAL(82, 1211, 14), // "pinnedMessages"
QT_MOC_LITERAL(83, 1226, 11), // "widgetLinks"
QT_MOC_LITERAL(84, 1238, 5), // "input"
QT_MOC_LITERAL(85, 1244, 9), // "InputBar*"
QT_MOC_LITERAL(86, 1254, 11), // "permissions"
QT_MOC_LITERAL(87, 1266, 12), // "Permissions*"
QT_MOC_LITERAL(88, 1279, 13), // "roomAvatarUrl"
QT_MOC_LITERAL(89, 1293, 11), // "hasMentions"
QT_MOC_LITERAL(90, 1305, 17), // "notificationCount"
QT_MOC_LITERAL(91, 1323, 12), // "scrollTarget"
QT_MOC_LITERAL(92, 1336, 17), // "addPendingMessage"
QT_MOC_LITERAL(93, 1354, 16), // "scrollTimerEvent"
QT_MOC_LITERAL(94, 1371, 8), // "dataById"
QT_MOC_LITERAL(95, 1380, 4), // "role"
QT_MOC_LITERAL(96, 1385, 11), // "displayName"
QT_MOC_LITERAL(97, 1397, 9), // "avatarUrl"
QT_MOC_LITERAL(98, 1407, 19), // "formatDateSeparator"
QT_MOC_LITERAL(99, 1427, 4), // "date"
QT_MOC_LITERAL(100, 1432, 17), // "formatTypingUsers"
QT_MOC_LITERAL(101, 1450, 2), // "bg"
QT_MOC_LITERAL(102, 1453, 21), // "showAcceptKnockButton"
QT_MOC_LITERAL(103, 1475, 11), // "acceptKnock"
QT_MOC_LITERAL(104, 1487, 17), // "formatMemberEvent"
QT_MOC_LITERAL(105, 1505, 19), // "formatJoinRuleEvent"
QT_MOC_LITERAL(106, 1525, 28), // "formatHistoryVisibilityEvent"
QT_MOC_LITERAL(107, 1554, 22), // "formatGuestAccessEvent"
QT_MOC_LITERAL(108, 1577, 21), // "formatPowerLevelEvent"
QT_MOC_LITERAL(109, 1599, 20), // "formatImagePackEvent"
QT_MOC_LITERAL(110, 1620, 16), // "formatPolicyRule"
QT_MOC_LITERAL(111, 1637, 19), // "formatRedactedEvent"
QT_MOC_LITERAL(112, 1657, 14), // "viewRawMessage"
QT_MOC_LITERAL(113, 1672, 14), // "forwardMessage"
QT_MOC_LITERAL(114, 1687, 23), // "viewDecryptedRawMessage"
QT_MOC_LITERAL(115, 1711, 15), // "openUserProfile"
QT_MOC_LITERAL(116, 1727, 6), // "userid"
QT_MOC_LITERAL(117, 1734, 10), // "editAction"
QT_MOC_LITERAL(118, 1745, 11), // "replyAction"
QT_MOC_LITERAL(119, 1757, 5), // "unpin"
QT_MOC_LITERAL(120, 1763, 3), // "pin"
QT_MOC_LITERAL(121, 1767, 16), // "showReadReceipts"
QT_MOC_LITERAL(122, 1784, 11), // "redactEvent"
QT_MOC_LITERAL(123, 1796, 6), // "reason"
QT_MOC_LITERAL(124, 1803, 17), // "redactAllFromUser"
QT_MOC_LITERAL(125, 1821, 9), // "idToIndex"
QT_MOC_LITERAL(126, 1831, 9), // "indexToId"
QT_MOC_LITERAL(127, 1841, 9), // "openMedia"
QT_MOC_LITERAL(128, 1851, 10), // "cacheMedia"
QT_MOC_LITERAL(129, 1862, 9), // "saveMedia"
QT_MOC_LITERAL(130, 1872, 9), // "showEvent"
QT_MOC_LITERAL(131, 1882, 15), // "copyLinkToEvent"
QT_MOC_LITERAL(132, 1898, 9), // "sendReset"
QT_MOC_LITERAL(133, 1908, 18), // "requestKeyForEvent"
QT_MOC_LITERAL(134, 1927, 15), // "roomMemberCount"
QT_MOC_LITERAL(135, 1943, 11), // "isEncrypted"
QT_MOC_LITERAL(136, 1955, 7), // "isSpace"
QT_MOC_LITERAL(137, 1963, 10), // "trustlevel"
QT_MOC_LITERAL(138, 1974, 8), // "isDirect"
QT_MOC_LITERAL(139, 1983, 21), // "directChatOtherUserId"
QT_MOC_LITERAL(140, 2005, 5), // "Roles"
QT_MOC_LITERAL(141, 2011, 4), // "Type"
QT_MOC_LITERAL(142, 2016, 10), // "TypeString"
QT_MOC_LITERAL(143, 2027, 11), // "IsOnlyEmoji"
QT_MOC_LITERAL(144, 2039, 4), // "Body"
QT_MOC_LITERAL(145, 2044, 13), // "FormattedBody"
QT_MOC_LITERAL(146, 2058, 21), // "PreviousMessageUserId"
QT_MOC_LITERAL(147, 2080, 8), // "IsSender"
QT_MOC_LITERAL(148, 2089, 6), // "UserId"
QT_MOC_LITERAL(149, 2096, 8), // "UserName"
QT_MOC_LITERAL(150, 2105, 18), // "PreviousMessageDay"
QT_MOC_LITERAL(151, 2124, 27), // "PreviousMessageIsStateEvent"
QT_MOC_LITERAL(152, 2152, 3), // "Day"
QT_MOC_LITERAL(153, 2156, 9), // "Timestamp"
QT_MOC_LITERAL(154, 2166, 3), // "Url"
QT_MOC_LITERAL(155, 2170, 12), // "ThumbnailUrl"
QT_MOC_LITERAL(156, 2183, 8), // "Duration"
QT_MOC_LITERAL(157, 2192, 8), // "Blurhash"
QT_MOC_LITERAL(158, 2201, 8), // "Filename"
QT_MOC_LITERAL(159, 2210, 8), // "Filesize"
QT_MOC_LITERAL(160, 2219, 8), // "MimeType"
QT_MOC_LITERAL(161, 2228, 14), // "OriginalHeight"
QT_MOC_LITERAL(162, 2243, 13), // "OriginalWidth"
QT_MOC_LITERAL(163, 2257, 18), // "ProportionalHeight"
QT_MOC_LITERAL(164, 2276, 7), // "EventId"
QT_MOC_LITERAL(165, 2284, 5), // "State"
QT_MOC_LITERAL(166, 2290, 8), // "IsEdited"
QT_MOC_LITERAL(167, 2299, 10), // "IsEditable"
QT_MOC_LITERAL(168, 2310, 11), // "IsEncrypted"
QT_MOC_LITERAL(169, 2322, 12), // "IsStateEvent"
QT_MOC_LITERAL(170, 2335, 10), // "Trustlevel"
QT_MOC_LITERAL(171, 2346, 15), // "EncryptionError"
QT_MOC_LITERAL(172, 2362, 7), // "ReplyTo"
QT_MOC_LITERAL(173, 2370, 9), // "Reactions"
QT_MOC_LITERAL(174, 2380, 6), // "RoomId"
QT_MOC_LITERAL(175, 2387, 8), // "RoomName"
QT_MOC_LITERAL(176, 2396, 9), // "RoomTopic"
QT_MOC_LITERAL(177, 2406, 8), // "CallType"
QT_MOC_LITERAL(178, 2415, 4), // "Dump"
QT_MOC_LITERAL(179, 2420, 23) // "RelatedEventCacheBuster"

    },
    "TimelineModel\0dataAtIdChanged\0\0id\0"
    "currentIndexChanged\0index\0redactionFailed\0"
    "mediaCached\0mxcUrl\0cacheUrl\0"
    "newEncryptedImage\0mtx::crypto::EncryptedFile\0"
    "encryptionInfo\0typingUsersChanged\0"
    "std::vector<QString>\0users\0replyChanged\0"
    "reply\0editChanged\0openReadReceiptsDialog\0"
    "ReadReceiptsProxy*\0rr\0showRawMessageDialog\0"
    "rawMessage\0paginationInProgressChanged\0"
    "newCallEvent\0mtx::events::collections::TimelineEvents\0"
    "event\0scrollToIndex\0lastMessageChanged\0"
    "notificationsChanged\0newState\0"
    "mtx::responses::StateEvents\0events\0"
    "newMessageToSend\0addPendingMessageToStore\0"
    "updateFlowEventId\0std::string\0event_id\0"
    "encryptionChanged\0trustlevelChanged\0"
    "roomNameChanged\0roomTopicChanged\0"
    "pinnedMessagesChanged\0widgetLinksChanged\0"
    "roomAvatarUrlChanged\0roomMemberCountChanged\0"
    "isDirectChanged\0directChatOtherUserIdChanged\0"
    "permissionsChanged\0forwardToRoom\0"
    "mtx::events::collections::TimelineEvents*\0"
    "e\0roomId\0scrollTargetChanged\0"
    "setCurrentIndex\0currentIndex\0eventShown\0"
    "markEventsAsRead\0event_ids\0getDump\0"
    "eventId\0relatedTo\0updateTypingUsers\0"
    "typingUsers\0paginationInProgress\0"
    "setReply\0newReply\0resetReply\0edit\0"
    "setEdit\0newEdit\0resetEdit\0"
    "setDecryptDescription\0decrypt\0"
    "clearTimeline\0resetState\0receivedSessionKey\0"
    "session_key\0roomName\0plainRoomName\0"
    "roomTopic\0pinnedMessages\0widgetLinks\0"
    "input\0InputBar*\0permissions\0Permissions*\0"
    "roomAvatarUrl\0hasMentions\0notificationCount\0"
    "scrollTarget\0addPendingMessage\0"
    "scrollTimerEvent\0dataById\0role\0"
    "displayName\0avatarUrl\0formatDateSeparator\0"
    "date\0formatTypingUsers\0bg\0"
    "showAcceptKnockButton\0acceptKnock\0"
    "formatMemberEvent\0formatJoinRuleEvent\0"
    "formatHistoryVisibilityEvent\0"
    "formatGuestAccessEvent\0formatPowerLevelEvent\0"
    "formatImagePackEvent\0formatPolicyRule\0"
    "formatRedactedEvent\0viewRawMessage\0"
    "forwardMessage\0viewDecryptedRawMessage\0"
    "openUserProfile\0userid\0editAction\0"
    "replyAction\0unpin\0pin\0showReadReceipts\0"
    "redactEvent\0reason\0redactAllFromUser\0"
    "idToIndex\0indexToId\0openMedia\0cacheMedia\0"
    "saveMedia\0showEvent\0copyLinkToEvent\0"
    "sendReset\0requestKeyForEvent\0"
    "roomMemberCount\0isEncrypted\0isSpace\0"
    "trustlevel\0isDirect\0directChatOtherUserId\0"
    "Roles\0Type\0TypeString\0IsOnlyEmoji\0"
    "Body\0FormattedBody\0PreviousMessageUserId\0"
    "IsSender\0UserId\0UserName\0PreviousMessageDay\0"
    "PreviousMessageIsStateEvent\0Day\0"
    "Timestamp\0Url\0ThumbnailUrl\0Duration\0"
    "Blurhash\0Filename\0Filesize\0MimeType\0"
    "OriginalHeight\0OriginalWidth\0"
    "ProportionalHeight\0EventId\0State\0"
    "IsEdited\0IsEditable\0IsEncrypted\0"
    "IsStateEvent\0Trustlevel\0EncryptionError\0"
    "ReplyTo\0Reactions\0RoomId\0RoomName\0"
    "RoomTopic\0CallType\0Dump\0RelatedEventCacheBuster"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimelineModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     101,   14, // methods
      21,  764, // properties
       1,  848, // enums/sets
       0,    0, // constructors
       0,       // flags
      32,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  519,    2, 0x06 /* Public */,
       4,    1,  522,    2, 0x06 /* Public */,
       6,    1,  525,    2, 0x06 /* Public */,
       7,    2,  528,    2, 0x06 /* Public */,
      10,    1,  533,    2, 0x06 /* Public */,
      13,    1,  536,    2, 0x06 /* Public */,
      16,    1,  539,    2, 0x06 /* Public */,
      18,    1,  542,    2, 0x06 /* Public */,
      19,    1,  545,    2, 0x06 /* Public */,
      22,    1,  548,    2, 0x06 /* Public */,
      24,    1,  551,    2, 0x06 /* Public */,
      25,    1,  554,    2, 0x06 /* Public */,
      28,    1,  557,    2, 0x06 /* Public */,
      29,    0,  560,    2, 0x06 /* Public */,
      30,    0,  561,    2, 0x06 /* Public */,
      31,    1,  562,    2, 0x06 /* Public */,
      34,    1,  565,    2, 0x06 /* Public */,
      35,    1,  568,    2, 0x06 /* Public */,
      36,    1,  571,    2, 0x06 /* Public */,
      39,    0,  574,    2, 0x06 /* Public */,
      40,    0,  575,    2, 0x06 /* Public */,
      41,    0,  576,    2, 0x06 /* Public */,
      42,    0,  577,    2, 0x06 /* Public */,
      43,    0,  578,    2, 0x06 /* Public */,
      44,    0,  579,    2, 0x06 /* Public */,
      45,    0,  580,    2, 0x06 /* Public */,
      46,    0,  581,    2, 0x06 /* Public */,
      47,    0,  582,    2, 0x06 /* Public */,
      48,    0,  583,    2, 0x06 /* Public */,
      49,    0,  584,    2, 0x06 /* Public */,
      50,    2,  585,    2, 0x06 /* Public */,
      54,    0,  590,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      55,    1,  591,    2, 0x0a /* Public */,
      56,    0,  594,    2, 0x0a /* Public */,
      57,    0,  595,    2, 0x0a /* Public */,
      58,    1,  596,    2, 0x0a /* Public */,
      60,    2,  599,    2, 0x0a /* Public */,
      63,    1,  604,    2, 0x0a /* Public */,
      64,    0,  607,    2, 0x0a /* Public */,
      65,    0,  608,    2, 0x0a /* Public */,
      17,    0,  609,    2, 0x0a /* Public */,
      66,    1,  610,    2, 0x0a /* Public */,
      68,    0,  613,    2, 0x0a /* Public */,
      69,    0,  614,    2, 0x0a /* Public */,
      70,    1,  615,    2, 0x0a /* Public */,
      72,    0,  618,    2, 0x0a /* Public */,
      73,    1,  619,    2, 0x0a /* Public */,
      75,    0,  622,    2, 0x0a /* Public */,
      76,    0,  623,    2, 0x0a /* Public */,
      77,    1,  624,    2, 0x0a /* Public */,
      79,    0,  627,    2, 0x0a /* Public */,
      80,    0,  628,    2, 0x0a /* Public */,
      81,    0,  629,    2, 0x0a /* Public */,
      82,    0,  630,    2, 0x0a /* Public */,
      83,    0,  631,    2, 0x0a /* Public */,
      84,    0,  632,    2, 0x0a /* Public */,
      86,    0,  633,    2, 0x0a /* Public */,
      88,    0,  634,    2, 0x0a /* Public */,
      53,    0,  635,    2, 0x0a /* Public */,
      89,    0,  636,    2, 0x0a /* Public */,
      90,    0,  637,    2, 0x0a /* Public */,
      91,    0,  638,    2, 0x0a /* Public */,
      92,    1,  639,    2, 0x08 /* Private */,
      93,    0,  642,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      94,    3,  643,    2, 0x02 /* Public */,
      96,    1,  650,    2, 0x02 /* Public */,
      97,    1,  653,    2, 0x02 /* Public */,
      98,    1,  656,    2, 0x02 /* Public */,
     100,    2,  659,    2, 0x02 /* Public */,
     102,    1,  664,    2, 0x02 /* Public */,
     103,    1,  667,    2, 0x02 /* Public */,
     104,    1,  670,    2, 0x02 /* Public */,
     105,    1,  673,    2, 0x02 /* Public */,
     106,    1,  676,    2, 0x02 /* Public */,
     107,    1,  679,    2, 0x02 /* Public */,
     108,    1,  682,    2, 0x02 /* Public */,
     109,    1,  685,    2, 0x02 /* Public */,
     110,    1,  688,    2, 0x02 /* Public */,
     111,    1,  691,    2, 0x02 /* Public */,
     112,    1,  694,    2, 0x02 /* Public */,
     113,    2,  697,    2, 0x02 /* Public */,
     114,    1,  702,    2, 0x02 /* Public */,
     115,    1,  705,    2, 0x02 /* Public */,
     117,    1,  708,    2, 0x02 /* Public */,
     118,    1,  711,    2, 0x02 /* Public */,
     119,    1,  714,    2, 0x02 /* Public */,
     120,    1,  717,    2, 0x02 /* Public */,
     121,    1,  720,    2, 0x02 /* Public */,
     122,    2,  723,    2, 0x02 /* Public */,
     122,    1,  728,    2, 0x22 /* Public | MethodCloned */,
     124,    2,  731,    2, 0x02 /* Public */,
     124,    1,  736,    2, 0x22 /* Public | MethodCloned */,
     125,    1,  739,    2, 0x02 /* Public */,
     126,    1,  742,    2, 0x02 /* Public */,
     127,    1,  745,    2, 0x02 /* Public */,
     128,    1,  748,    2, 0x02 /* Public */,
     129,    1,  751,    2, 0x02 /* Public */,
     130,    1,  754,    2, 0x02 /* Public */,
     131,    1,  757,    2, 0x02 /* Public */,
     132,    0,  760,    2, 0x02 /* Public */,
     133,    1,  761,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 51, QMetaType::QString,   52,   53,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   59,
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::QString,   61,   62,
    QMetaType::Void, 0x80000000 | 14,   15,
    0x80000000 | 14,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   67,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   71,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   74,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 37,   78,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QStringList,
    QMetaType::QStringList,
    0x80000000 | 85,
    0x80000000 | 87,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariant, QMetaType::QString, QMetaType::Int, QMetaType::QString,    3,   95,   62,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QDate,   99,
    QMetaType::QString, 0x80000000 | 14, QMetaType::QColor,   15,  101,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::QVariantMap, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   61,   53,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,  116,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,  123,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  116,  123,
    QMetaType::Void, QMetaType::QString,  116,
    QMetaType::Int, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Bool, QMetaType::QString,   61,
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,

 // properties: name, type, flags
      56, QMetaType::Int, 0x00495103,
      64, 0x80000000 | 14, 0x0049500b,
      91, QMetaType::QString, 0x00495001,
      17, QMetaType::QString, 0x00495107,
      69, QMetaType::QString, 0x00495107,
      65, QMetaType::Bool, 0x00495001,
      53, QMetaType::QString, 0x00095401,
      79, QMetaType::QString, 0x00495001,
      80, QMetaType::QString, 0x00495001,
      88, QMetaType::QString, 0x00495001,
      81, QMetaType::QString, 0x00495001,
      82, QMetaType::QStringList, 0x00495001,
      83, QMetaType::QStringList, 0x00495001,
     134, QMetaType::Int, 0x00495001,
     135, QMetaType::Bool, 0x00495001,
     136, QMetaType::Bool, 0x00095401,
     137, QMetaType::Int, 0x00495001,
     138, QMetaType::Bool, 0x00495001,
     139, QMetaType::QString, 0x00495001,
      84, 0x80000000 | 85, 0x00095409,
      86, 0x80000000 | 87, 0x00495009,

 // properties: notify_signal_id
       1,
       5,
      31,
       6,
       7,
      10,
       0,
      21,
      21,
      25,
      22,
      23,
      24,
      26,
      19,
       0,
      20,
      27,
      28,
       0,
      29,

 // enums: name, alias, flags, count, data
     140,  140, 0x0,   39,  853,

 // enum data: key, value
     141, uint(TimelineModel::Type),
     142, uint(TimelineModel::TypeString),
     143, uint(TimelineModel::IsOnlyEmoji),
     144, uint(TimelineModel::Body),
     145, uint(TimelineModel::FormattedBody),
     146, uint(TimelineModel::PreviousMessageUserId),
     147, uint(TimelineModel::IsSender),
     148, uint(TimelineModel::UserId),
     149, uint(TimelineModel::UserName),
     150, uint(TimelineModel::PreviousMessageDay),
     151, uint(TimelineModel::PreviousMessageIsStateEvent),
     152, uint(TimelineModel::Day),
     153, uint(TimelineModel::Timestamp),
     154, uint(TimelineModel::Url),
     155, uint(TimelineModel::ThumbnailUrl),
     156, uint(TimelineModel::Duration),
     157, uint(TimelineModel::Blurhash),
     158, uint(TimelineModel::Filename),
     159, uint(TimelineModel::Filesize),
     160, uint(TimelineModel::MimeType),
     161, uint(TimelineModel::OriginalHeight),
     162, uint(TimelineModel::OriginalWidth),
     163, uint(TimelineModel::ProportionalHeight),
     164, uint(TimelineModel::EventId),
     165, uint(TimelineModel::State),
     166, uint(TimelineModel::IsEdited),
     167, uint(TimelineModel::IsEditable),
     168, uint(TimelineModel::IsEncrypted),
     169, uint(TimelineModel::IsStateEvent),
     170, uint(TimelineModel::Trustlevel),
     171, uint(TimelineModel::EncryptionError),
     172, uint(TimelineModel::ReplyTo),
     173, uint(TimelineModel::Reactions),
     174, uint(TimelineModel::RoomId),
     175, uint(TimelineModel::RoomName),
     176, uint(TimelineModel::RoomTopic),
     177, uint(TimelineModel::CallType),
     178, uint(TimelineModel::Dump),
     179, uint(TimelineModel::RelatedEventCacheBuster),

       0        // eod
};

void TimelineModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TimelineModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataAtIdChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->redactionFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->mediaCached((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->newEncryptedImage((*reinterpret_cast< mtx::crypto::EncryptedFile(*)>(_a[1]))); break;
        case 5: _t->typingUsersChanged((*reinterpret_cast< std::vector<QString>(*)>(_a[1]))); break;
        case 6: _t->replyChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->editChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->openReadReceiptsDialog((*reinterpret_cast< ReadReceiptsProxy*(*)>(_a[1]))); break;
        case 9: _t->showRawMessageDialog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->paginationInProgressChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 11: _t->newCallEvent((*reinterpret_cast< const mtx::events::collections::TimelineEvents(*)>(_a[1]))); break;
        case 12: _t->scrollToIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->lastMessageChanged(); break;
        case 14: _t->notificationsChanged(); break;
        case 15: _t->newState((*reinterpret_cast< const mtx::responses::StateEvents(*)>(_a[1]))); break;
        case 16: _t->newMessageToSend((*reinterpret_cast< mtx::events::collections::TimelineEvents(*)>(_a[1]))); break;
        case 17: _t->addPendingMessageToStore((*reinterpret_cast< mtx::events::collections::TimelineEvents(*)>(_a[1]))); break;
        case 18: _t->updateFlowEventId((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 19: _t->encryptionChanged(); break;
        case 20: _t->trustlevelChanged(); break;
        case 21: _t->roomNameChanged(); break;
        case 22: _t->roomTopicChanged(); break;
        case 23: _t->pinnedMessagesChanged(); break;
        case 24: _t->widgetLinksChanged(); break;
        case 25: _t->roomAvatarUrlChanged(); break;
        case 26: _t->roomMemberCountChanged(); break;
        case 27: _t->isDirectChanged(); break;
        case 28: _t->directChatOtherUserIdChanged(); break;
        case 29: _t->permissionsChanged(); break;
        case 30: _t->forwardToRoom((*reinterpret_cast< mtx::events::collections::TimelineEvents*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 31: _t->scrollTargetChanged(); break;
        case 32: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: { int _r = _t->currentIndex();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 34: _t->eventShown(); break;
        case 35: _t->markEventsAsRead((*reinterpret_cast< const std::vector<QString>(*)>(_a[1]))); break;
        case 36: { QVariantMap _r = _t->getDump((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->updateTypingUsers((*reinterpret_cast< const std::vector<QString>(*)>(_a[1]))); break;
        case 38: { std::vector<QString> _r = _t->typingUsers();
            if (_a[0]) *reinterpret_cast< std::vector<QString>*>(_a[0]) = std::move(_r); }  break;
        case 39: { bool _r = _t->paginationInProgress();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 40: { QString _r = _t->reply();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 41: _t->setReply((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 42: _t->resetReply(); break;
        case 43: { QString _r = _t->edit();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 44: _t->setEdit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 45: _t->resetEdit(); break;
        case 46: _t->setDecryptDescription((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->clearTimeline(); break;
        case 48: _t->resetState(); break;
        case 49: _t->receivedSessionKey((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 50: { QString _r = _t->roomName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 51: { QString _r = _t->plainRoomName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 52: { QString _r = _t->roomTopic();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 53: { QStringList _r = _t->pinnedMessages();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 54: { QStringList _r = _t->widgetLinks();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 55: { InputBar* _r = _t->input();
            if (_a[0]) *reinterpret_cast< InputBar**>(_a[0]) = std::move(_r); }  break;
        case 56: { Permissions* _r = _t->permissions();
            if (_a[0]) *reinterpret_cast< Permissions**>(_a[0]) = std::move(_r); }  break;
        case 57: { QString _r = _t->roomAvatarUrl();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 58: { QString _r = _t->roomId();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 59: { bool _r = _t->hasMentions();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 60: { int _r = _t->notificationCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 61: { QString _r = _t->scrollTarget();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 62: _t->addPendingMessage((*reinterpret_cast< mtx::events::collections::TimelineEvents(*)>(_a[1]))); break;
        case 63: _t->scrollTimerEvent(); break;
        case 64: { QVariant _r = _t->dataById((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 65: { QString _r = _t->displayName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 66: { QString _r = _t->avatarUrl((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 67: { QString _r = _t->formatDateSeparator((*reinterpret_cast< QDate(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 68: { QString _r = _t->formatTypingUsers((*reinterpret_cast< const std::vector<QString>(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 69: { bool _r = _t->showAcceptKnockButton((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 70: _t->acceptKnock((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 71: { QString _r = _t->formatMemberEvent((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 72: { QString _r = _t->formatJoinRuleEvent((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 73: { QString _r = _t->formatHistoryVisibilityEvent((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 74: { QString _r = _t->formatGuestAccessEvent((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 75: { QString _r = _t->formatPowerLevelEvent((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 76: { QString _r = _t->formatImagePackEvent((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 77: { QString _r = _t->formatPolicyRule((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 78: { QVariantMap _r = _t->formatRedactedEvent((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 79: _t->viewRawMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 80: _t->forwardMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 81: _t->viewDecryptedRawMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 82: _t->openUserProfile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 83: _t->editAction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 84: _t->replyAction((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 85: _t->unpin((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 86: _t->pin((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 87: _t->showReadReceipts((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 88: _t->redactEvent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 89: _t->redactEvent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 90: _t->redactAllFromUser((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 91: _t->redactAllFromUser((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 92: { int _r = _t->idToIndex((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 93: { QString _r = _t->indexToId((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 94: _t->openMedia((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 95: _t->cacheMedia((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 96: { bool _r = _t->saveMedia((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 97: _t->showEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 98: _t->copyLinkToEvent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 99: _t->sendReset(); break;
        case 100: _t->requestKeyForEvent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ReadReceiptsProxy* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TimelineModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::dataAtIdChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::currentIndexChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::redactionFailed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::mediaCached)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(mtx::crypto::EncryptedFile );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::newEncryptedImage)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(std::vector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::typingUsersChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::replyChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::editChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(ReadReceiptsProxy * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::openReadReceiptsDialog)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::showRawMessageDialog)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(const bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::paginationInProgressChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(const mtx::events::collections::TimelineEvents & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::newCallEvent)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::scrollToIndex)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::lastMessageChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::notificationsChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(const mtx::responses::StateEvents & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::newState)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(mtx::events::collections::TimelineEvents );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::newMessageToSend)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(mtx::events::collections::TimelineEvents );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::addPendingMessageToStore)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::updateFlowEventId)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::encryptionChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::trustlevelChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::roomNameChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::roomTopicChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::pinnedMessagesChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::widgetLinksChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::roomAvatarUrlChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::roomMemberCountChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::isDirectChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::directChatOtherUserIdChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::permissionsChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)(mtx::events::collections::TimelineEvents * , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::forwardToRoom)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (TimelineModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineModel::scrollTargetChanged)) {
                *result = 31;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 19:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InputBar* >(); break;
        case 20:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Permissions* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TimelineModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 1: *reinterpret_cast< std::vector<QString>*>(_v) = _t->typingUsers(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->scrollTarget(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->reply(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->edit(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->paginationInProgress(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->roomId(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->roomName(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->plainRoomName(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->roomAvatarUrl(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->roomTopic(); break;
        case 11: *reinterpret_cast< QStringList*>(_v) = _t->pinnedMessages(); break;
        case 12: *reinterpret_cast< QStringList*>(_v) = _t->widgetLinks(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->roomMemberCount(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->isEncrypted(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->isSpace(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->trustlevel(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->isDirect(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->directChatOtherUserId(); break;
        case 19: *reinterpret_cast< InputBar**>(_v) = _t->input(); break;
        case 20: *reinterpret_cast< Permissions**>(_v) = _t->permissions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TimelineModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->updateTypingUsers(*reinterpret_cast< std::vector<QString>*>(_v)); break;
        case 3: _t->setReply(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setEdit(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        TimelineModel *_t = static_cast<TimelineModel *>(_o);
        (void)_t;
        switch (_id) {
        case 3: _t->resetReply(); break;
        case 4: _t->resetEdit(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TimelineModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_TimelineModel.data,
    qt_meta_data_TimelineModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TimelineModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimelineModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TimelineModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int TimelineModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 101)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 101;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 101)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 101;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 21;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TimelineModel::dataAtIdChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TimelineModel::currentIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TimelineModel::redactionFailed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TimelineModel::mediaCached(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TimelineModel::newEncryptedImage(mtx::crypto::EncryptedFile _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TimelineModel::typingUsersChanged(std::vector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TimelineModel::replyChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TimelineModel::editChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TimelineModel::openReadReceiptsDialog(ReadReceiptsProxy * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void TimelineModel::showRawMessageDialog(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void TimelineModel::paginationInProgressChanged(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void TimelineModel::newCallEvent(const mtx::events::collections::TimelineEvents & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void TimelineModel::scrollToIndex(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void TimelineModel::lastMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void TimelineModel::notificationsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void TimelineModel::newState(const mtx::responses::StateEvents & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void TimelineModel::newMessageToSend(mtx::events::collections::TimelineEvents _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void TimelineModel::addPendingMessageToStore(mtx::events::collections::TimelineEvents _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void TimelineModel::updateFlowEventId(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void TimelineModel::encryptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void TimelineModel::trustlevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void TimelineModel::roomNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void TimelineModel::roomTopicChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void TimelineModel::pinnedMessagesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void TimelineModel::widgetLinksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void TimelineModel::roomAvatarUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void TimelineModel::roomMemberCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void TimelineModel::isDirectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void TimelineModel::directChatOtherUserIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void TimelineModel::permissionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void TimelineModel::forwardToRoom(mtx::events::collections::TimelineEvents * _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void TimelineModel::scrollTargetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}
struct qt_meta_stringdata_qml_mtx_events_t {
    QByteArrayData data[59];
    char stringdata0[758];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qml_mtx_events_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qml_mtx_events_t qt_meta_stringdata_qml_mtx_events = {
    {
QT_MOC_LITERAL(0, 0, 14), // "qml_mtx_events"
QT_MOC_LITERAL(1, 15, 9), // "EventType"
QT_MOC_LITERAL(2, 25, 11), // "Unsupported"
QT_MOC_LITERAL(3, 37, 10), // "KeyRequest"
QT_MOC_LITERAL(4, 48, 8), // "Reaction"
QT_MOC_LITERAL(5, 57, 7), // "Aliases"
QT_MOC_LITERAL(6, 65, 6), // "Avatar"
QT_MOC_LITERAL(7, 72, 10), // "CallInvite"
QT_MOC_LITERAL(8, 83, 10), // "CallAnswer"
QT_MOC_LITERAL(9, 94, 10), // "CallHangUp"
QT_MOC_LITERAL(10, 105, 14), // "CallCandidates"
QT_MOC_LITERAL(11, 120, 14), // "CanonicalAlias"
QT_MOC_LITERAL(12, 135, 10), // "RoomCreate"
QT_MOC_LITERAL(13, 146, 9), // "Encrypted"
QT_MOC_LITERAL(14, 156, 10), // "Encryption"
QT_MOC_LITERAL(15, 167, 15), // "RoomGuestAccess"
QT_MOC_LITERAL(16, 183, 21), // "RoomHistoryVisibility"
QT_MOC_LITERAL(17, 205, 13), // "RoomJoinRules"
QT_MOC_LITERAL(18, 219, 6), // "Member"
QT_MOC_LITERAL(19, 226, 4), // "Name"
QT_MOC_LITERAL(20, 231, 11), // "PowerLevels"
QT_MOC_LITERAL(21, 243, 9), // "Tombstone"
QT_MOC_LITERAL(22, 253, 5), // "Topic"
QT_MOC_LITERAL(23, 259, 9), // "Redaction"
QT_MOC_LITERAL(24, 269, 12), // "PinnedEvents"
QT_MOC_LITERAL(25, 282, 7), // "Sticker"
QT_MOC_LITERAL(26, 290, 3), // "Tag"
QT_MOC_LITERAL(27, 294, 6), // "Widget"
QT_MOC_LITERAL(28, 301, 12), // "AudioMessage"
QT_MOC_LITERAL(29, 314, 12), // "EmoteMessage"
QT_MOC_LITERAL(30, 327, 11), // "FileMessage"
QT_MOC_LITERAL(31, 339, 12), // "ImageMessage"
QT_MOC_LITERAL(32, 352, 15), // "LocationMessage"
QT_MOC_LITERAL(33, 368, 13), // "NoticeMessage"
QT_MOC_LITERAL(34, 382, 11), // "TextMessage"
QT_MOC_LITERAL(35, 394, 12), // "VideoMessage"
QT_MOC_LITERAL(36, 407, 8), // "Redacted"
QT_MOC_LITERAL(37, 416, 14), // "UnknownMessage"
QT_MOC_LITERAL(38, 431, 22), // "KeyVerificationRequest"
QT_MOC_LITERAL(39, 454, 20), // "KeyVerificationStart"
QT_MOC_LITERAL(40, 475, 18), // "KeyVerificationMac"
QT_MOC_LITERAL(41, 494, 21), // "KeyVerificationAccept"
QT_MOC_LITERAL(42, 516, 21), // "KeyVerificationCancel"
QT_MOC_LITERAL(43, 538, 18), // "KeyVerificationKey"
QT_MOC_LITERAL(44, 557, 19), // "KeyVerificationDone"
QT_MOC_LITERAL(45, 577, 20), // "KeyVerificationReady"
QT_MOC_LITERAL(46, 598, 15), // "ImagePackInRoom"
QT_MOC_LITERAL(47, 614, 22), // "ImagePackInAccountData"
QT_MOC_LITERAL(48, 637, 14), // "ImagePackRooms"
QT_MOC_LITERAL(49, 652, 14), // "PolicyRuleUser"
QT_MOC_LITERAL(50, 667, 14), // "PolicyRuleRoom"
QT_MOC_LITERAL(51, 682, 16), // "PolicyRuleServer"
QT_MOC_LITERAL(52, 699, 11), // "SpaceParent"
QT_MOC_LITERAL(53, 711, 10), // "SpaceChild"
QT_MOC_LITERAL(54, 722, 10), // "EventState"
QT_MOC_LITERAL(55, 733, 8), // "Received"
QT_MOC_LITERAL(56, 742, 4), // "Read"
QT_MOC_LITERAL(57, 747, 4), // "Sent"
QT_MOC_LITERAL(58, 752, 5) // "Empty"

    },
    "qml_mtx_events\0EventType\0Unsupported\0"
    "KeyRequest\0Reaction\0Aliases\0Avatar\0"
    "CallInvite\0CallAnswer\0CallHangUp\0"
    "CallCandidates\0CanonicalAlias\0RoomCreate\0"
    "Encrypted\0Encryption\0RoomGuestAccess\0"
    "RoomHistoryVisibility\0RoomJoinRules\0"
    "Member\0Name\0PowerLevels\0Tombstone\0"
    "Topic\0Redaction\0PinnedEvents\0Sticker\0"
    "Tag\0Widget\0AudioMessage\0EmoteMessage\0"
    "FileMessage\0ImageMessage\0LocationMessage\0"
    "NoticeMessage\0TextMessage\0VideoMessage\0"
    "Redacted\0UnknownMessage\0KeyVerificationRequest\0"
    "KeyVerificationStart\0KeyVerificationMac\0"
    "KeyVerificationAccept\0KeyVerificationCancel\0"
    "KeyVerificationKey\0KeyVerificationDone\0"
    "KeyVerificationReady\0ImagePackInRoom\0"
    "ImagePackInAccountData\0ImagePackRooms\0"
    "PolicyRuleUser\0PolicyRuleRoom\0"
    "PolicyRuleServer\0SpaceParent\0SpaceChild\0"
    "EventState\0Received\0Read\0Sent\0Empty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qml_mtx_events[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,   52,   24,
      54,   54, 0x0,    4,  128,

 // enum data: key, value
       2, uint(qml_mtx_events::Unsupported),
       3, uint(qml_mtx_events::KeyRequest),
       4, uint(qml_mtx_events::Reaction),
       5, uint(qml_mtx_events::Aliases),
       6, uint(qml_mtx_events::Avatar),
       7, uint(qml_mtx_events::CallInvite),
       8, uint(qml_mtx_events::CallAnswer),
       9, uint(qml_mtx_events::CallHangUp),
      10, uint(qml_mtx_events::CallCandidates),
      11, uint(qml_mtx_events::CanonicalAlias),
      12, uint(qml_mtx_events::RoomCreate),
      13, uint(qml_mtx_events::Encrypted),
      14, uint(qml_mtx_events::Encryption),
      15, uint(qml_mtx_events::RoomGuestAccess),
      16, uint(qml_mtx_events::RoomHistoryVisibility),
      17, uint(qml_mtx_events::RoomJoinRules),
      18, uint(qml_mtx_events::Member),
      19, uint(qml_mtx_events::Name),
      20, uint(qml_mtx_events::PowerLevels),
      21, uint(qml_mtx_events::Tombstone),
      22, uint(qml_mtx_events::Topic),
      23, uint(qml_mtx_events::Redaction),
      24, uint(qml_mtx_events::PinnedEvents),
      25, uint(qml_mtx_events::Sticker),
      26, uint(qml_mtx_events::Tag),
      27, uint(qml_mtx_events::Widget),
      28, uint(qml_mtx_events::AudioMessage),
      29, uint(qml_mtx_events::EmoteMessage),
      30, uint(qml_mtx_events::FileMessage),
      31, uint(qml_mtx_events::ImageMessage),
      32, uint(qml_mtx_events::LocationMessage),
      33, uint(qml_mtx_events::NoticeMessage),
      34, uint(qml_mtx_events::TextMessage),
      35, uint(qml_mtx_events::VideoMessage),
      36, uint(qml_mtx_events::Redacted),
      37, uint(qml_mtx_events::UnknownMessage),
      38, uint(qml_mtx_events::KeyVerificationRequest),
      39, uint(qml_mtx_events::KeyVerificationStart),
      40, uint(qml_mtx_events::KeyVerificationMac),
      41, uint(qml_mtx_events::KeyVerificationAccept),
      42, uint(qml_mtx_events::KeyVerificationCancel),
      43, uint(qml_mtx_events::KeyVerificationKey),
      44, uint(qml_mtx_events::KeyVerificationDone),
      45, uint(qml_mtx_events::KeyVerificationReady),
      46, uint(qml_mtx_events::ImagePackInRoom),
      47, uint(qml_mtx_events::ImagePackInAccountData),
      48, uint(qml_mtx_events::ImagePackRooms),
      49, uint(qml_mtx_events::PolicyRuleUser),
      50, uint(qml_mtx_events::PolicyRuleRoom),
      51, uint(qml_mtx_events::PolicyRuleServer),
      52, uint(qml_mtx_events::SpaceParent),
      53, uint(qml_mtx_events::SpaceChild),
      55, uint(qml_mtx_events::Received),
      56, uint(qml_mtx_events::Read),
      57, uint(qml_mtx_events::Sent),
      58, uint(qml_mtx_events::Empty),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject qml_mtx_events::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_qml_mtx_events.data,
    qt_meta_data_qml_mtx_events,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
