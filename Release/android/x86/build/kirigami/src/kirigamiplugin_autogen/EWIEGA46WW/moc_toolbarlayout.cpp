/****************************************************************************
** Meta object code from reading C++ file 'toolbarlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "toolbarlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toolbarlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ToolBarLayoutAttached_t {
    QByteArrayData data[2];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolBarLayoutAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolBarLayoutAttached_t qt_meta_stringdata_ToolBarLayoutAttached = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ToolBarLayoutAttached"
QT_MOC_LITERAL(1, 22, 6) // "action"

    },
    "ToolBarLayoutAttached\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolBarLayoutAttached[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QObjectStar, 0x00095401,

       0        // eod
};

void ToolBarLayoutAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ToolBarLayoutAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->action(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToolBarLayoutAttached::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ToolBarLayoutAttached.data,
    qt_meta_data_ToolBarLayoutAttached,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToolBarLayoutAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolBarLayoutAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToolBarLayoutAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ToolBarLayoutAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_ToolBarLayout_t {
    QByteArrayData data[28];
    char stringdata0[423];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolBarLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolBarLayout_t qt_meta_stringdata_ToolBarLayout = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ToolBarLayout"
QT_MOC_LITERAL(1, 14, 14), // "actionsChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 20), // "hiddenActionsChanged"
QT_MOC_LITERAL(4, 51, 19), // "fullDelegateChanged"
QT_MOC_LITERAL(5, 71, 19), // "iconDelegateChanged"
QT_MOC_LITERAL(6, 91, 17), // "moreButtonChanged"
QT_MOC_LITERAL(7, 109, 14), // "spacingChanged"
QT_MOC_LITERAL(8, 124, 16), // "alignmentChanged"
QT_MOC_LITERAL(9, 141, 19), // "visibleWidthChanged"
QT_MOC_LITERAL(10, 161, 19), // "minimumWidthChanged"
QT_MOC_LITERAL(11, 181, 22), // "layoutDirectionChanged"
QT_MOC_LITERAL(12, 204, 8), // "relayout"
QT_MOC_LITERAL(13, 213, 7), // "actions"
QT_MOC_LITERAL(14, 221, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(15, 247, 13), // "hiddenActions"
QT_MOC_LITERAL(16, 261, 15), // "QList<QObject*>"
QT_MOC_LITERAL(17, 277, 12), // "fullDelegate"
QT_MOC_LITERAL(18, 290, 14), // "QQmlComponent*"
QT_MOC_LITERAL(19, 305, 12), // "iconDelegate"
QT_MOC_LITERAL(20, 318, 10), // "moreButton"
QT_MOC_LITERAL(21, 329, 7), // "spacing"
QT_MOC_LITERAL(22, 337, 9), // "alignment"
QT_MOC_LITERAL(23, 347, 13), // "Qt::Alignment"
QT_MOC_LITERAL(24, 361, 12), // "visibleWidth"
QT_MOC_LITERAL(25, 374, 12), // "minimumWidth"
QT_MOC_LITERAL(26, 387, 15), // "layoutDirection"
QT_MOC_LITERAL(27, 403, 19) // "Qt::LayoutDirection"

    },
    "ToolBarLayout\0actionsChanged\0\0"
    "hiddenActionsChanged\0fullDelegateChanged\0"
    "iconDelegateChanged\0moreButtonChanged\0"
    "spacingChanged\0alignmentChanged\0"
    "visibleWidthChanged\0minimumWidthChanged\0"
    "layoutDirectionChanged\0relayout\0actions\0"
    "QQmlListProperty<QObject>\0hiddenActions\0"
    "QList<QObject*>\0fullDelegate\0"
    "QQmlComponent*\0iconDelegate\0moreButton\0"
    "spacing\0alignment\0Qt::Alignment\0"
    "visibleWidth\0minimumWidth\0layoutDirection\0"
    "Qt::LayoutDirection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolBarLayout[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
      10,   80, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,
       9,    0,   76,    2, 0x06 /* Public */,
      10,    0,   77,    2, 0x06 /* Public */,
      11,    0,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   79,    2, 0x0a /* Public */,

 // signals: parameters
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

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
      13, 0x80000000 | 14, 0x00495009,
      15, 0x80000000 | 16, 0x00495009,
      17, 0x80000000 | 18, 0x0049510b,
      19, 0x80000000 | 18, 0x0049510b,
      20, 0x80000000 | 18, 0x0049510b,
      21, QMetaType::QReal, 0x00495103,
      22, 0x80000000 | 23, 0x0049510b,
      24, QMetaType::QReal, 0x00495001,
      25, QMetaType::QReal, 0x00495001,
      26, 0x80000000 | 27, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,

       0        // eod
};

void ToolBarLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToolBarLayout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionsChanged(); break;
        case 1: _t->hiddenActionsChanged(); break;
        case 2: _t->fullDelegateChanged(); break;
        case 3: _t->iconDelegateChanged(); break;
        case 4: _t->moreButtonChanged(); break;
        case 5: _t->spacingChanged(); break;
        case 6: _t->alignmentChanged(); break;
        case 7: _t->visibleWidthChanged(); break;
        case 8: _t->minimumWidthChanged(); break;
        case 9: _t->layoutDirectionChanged(); break;
        case 10: _t->relayout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::actionsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::hiddenActionsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::fullDelegateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::iconDelegateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::moreButtonChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::spacingChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::alignmentChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::visibleWidthChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::minimumWidthChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ToolBarLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToolBarLayout::layoutDirectionChanged)) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        case 4:
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlComponent* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ToolBarLayout *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->actionsProperty(); break;
        case 1: *reinterpret_cast< QList<QObject*>*>(_v) = _t->hiddenActions(); break;
        case 2: *reinterpret_cast< QQmlComponent**>(_v) = _t->fullDelegate(); break;
        case 3: *reinterpret_cast< QQmlComponent**>(_v) = _t->iconDelegate(); break;
        case 4: *reinterpret_cast< QQmlComponent**>(_v) = _t->moreButton(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->spacing(); break;
        case 6: *reinterpret_cast< Qt::Alignment*>(_v) = _t->alignment(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->visibleWidth(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = _t->minimumWidth(); break;
        case 9: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->layoutDirection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ToolBarLayout *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setFullDelegate(*reinterpret_cast< QQmlComponent**>(_v)); break;
        case 3: _t->setIconDelegate(*reinterpret_cast< QQmlComponent**>(_v)); break;
        case 4: _t->setMoreButton(*reinterpret_cast< QQmlComponent**>(_v)); break;
        case 5: _t->setSpacing(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 9: _t->setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ToolBarLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_ToolBarLayout.data,
    qt_meta_data_ToolBarLayout,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToolBarLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolBarLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToolBarLayout.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int ToolBarLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
void ToolBarLayout::actionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ToolBarLayout::hiddenActionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ToolBarLayout::fullDelegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ToolBarLayout::iconDelegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ToolBarLayout::moreButtonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ToolBarLayout::spacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ToolBarLayout::alignmentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ToolBarLayout::visibleWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ToolBarLayout::minimumWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ToolBarLayout::layoutDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
