/****************************************************************************
** Meta object code from reading C++ file 'tabletmodewatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "libkirigami/tabletmodewatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabletmodewatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Kirigami__TabletModeWatcher_t {
    QByteArrayData data[6];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Kirigami__TabletModeWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Kirigami__TabletModeWatcher_t qt_meta_stringdata_Kirigami__TabletModeWatcher = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Kirigami::TabletModeWatcher"
QT_MOC_LITERAL(1, 28, 26), // "tabletModeAvailableChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 19), // "tabletModeAvailable"
QT_MOC_LITERAL(4, 76, 17), // "tabletModeChanged"
QT_MOC_LITERAL(5, 94, 10) // "tabletMode"

    },
    "Kirigami::TabletModeWatcher\0"
    "tabletModeAvailableChanged\0\0"
    "tabletModeAvailable\0tabletModeChanged\0"
    "tabletMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Kirigami__TabletModeWatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495001,
       5, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void Kirigami::TabletModeWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TabletModeWatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tabletModeAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->tabletModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TabletModeWatcher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabletModeWatcher::tabletModeAvailableChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TabletModeWatcher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabletModeWatcher::tabletModeChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TabletModeWatcher *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isTabletModeAvailable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isTabletMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Kirigami::TabletModeWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Kirigami__TabletModeWatcher.data,
    qt_meta_data_Kirigami__TabletModeWatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Kirigami::TabletModeWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Kirigami::TabletModeWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Kirigami__TabletModeWatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Kirigami::TabletModeWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Kirigami::TabletModeWatcher::tabletModeAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Kirigami::TabletModeWatcher::tabletModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
