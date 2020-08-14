/****************************************************************************
** Meta object code from reading C++ file 'icon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "icon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'icon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Icon_t {
    QByteArrayData data[21];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Icon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Icon_t qt_meta_stringdata_Icon = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Icon"
QT_MOC_LITERAL(1, 5, 13), // "sourceChanged"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 13), // "smoothChanged"
QT_MOC_LITERAL(4, 34, 14), // "enabledChanged"
QT_MOC_LITERAL(5, 49, 13), // "activeChanged"
QT_MOC_LITERAL(6, 63, 12), // "validChanged"
QT_MOC_LITERAL(7, 76, 15), // "selectedChanged"
QT_MOC_LITERAL(8, 92, 13), // "isMaskChanged"
QT_MOC_LITERAL(9, 106, 12), // "colorChanged"
QT_MOC_LITERAL(10, 119, 15), // "fallbackChanged"
QT_MOC_LITERAL(11, 135, 8), // "fallback"
QT_MOC_LITERAL(12, 144, 6), // "source"
QT_MOC_LITERAL(13, 151, 6), // "smooth"
QT_MOC_LITERAL(14, 158, 13), // "implicitWidth"
QT_MOC_LITERAL(15, 172, 14), // "implicitHeight"
QT_MOC_LITERAL(16, 187, 6), // "active"
QT_MOC_LITERAL(17, 194, 5), // "valid"
QT_MOC_LITERAL(18, 200, 8), // "selected"
QT_MOC_LITERAL(19, 209, 6), // "isMask"
QT_MOC_LITERAL(20, 216, 5) // "color"

    },
    "Icon\0sourceChanged\0\0smoothChanged\0"
    "enabledChanged\0activeChanged\0validChanged\0"
    "selectedChanged\0isMaskChanged\0"
    "colorChanged\0fallbackChanged\0fallback\0"
    "source\0smooth\0implicitWidth\0implicitHeight\0"
    "active\0valid\0selected\0isMask\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Icon[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
      10,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,
       8,    0,   65,    2, 0x06 /* Public */,
       9,    0,   66,    2, 0x06 /* Public */,
      10,    1,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

 // properties: name, type, flags
      12, QMetaType::QVariant, 0x00495103,
      11, QMetaType::QString, 0x00495103,
      13, QMetaType::Bool, 0x00495103,
      14, QMetaType::Int, 0x00095401,
      15, QMetaType::Int, 0x00095401,
      16, QMetaType::Bool, 0x00495103,
      17, QMetaType::Bool, 0x00495001,
      18, QMetaType::Bool, 0x00495103,
      19, QMetaType::Bool, 0x00495103,
      20, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       0,
       8,
       1,
       0,
       0,
       3,
       4,
       5,
       6,
       7,

       0        // eod
};

void Icon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Icon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceChanged(); break;
        case 1: _t->smoothChanged(); break;
        case 2: _t->enabledChanged(); break;
        case 3: _t->activeChanged(); break;
        case 4: _t->validChanged(); break;
        case 5: _t->selectedChanged(); break;
        case 6: _t->isMaskChanged(); break;
        case 7: _t->colorChanged(); break;
        case 8: _t->fallbackChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Icon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Icon::sourceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Icon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Icon::smoothChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Icon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Icon::enabledChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Icon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Icon::activeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Icon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Icon::validChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Icon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Icon::selectedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Icon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Icon::isMaskChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Icon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Icon::colorChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Icon::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Icon::fallbackChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Icon *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->source(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->fallback(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->smooth(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->implicitWidth(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->implicitHeight(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->valid(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isMask(); break;
        case 9: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Icon *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: _t->setFallback(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setSmooth(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setIsMask(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Icon::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_Icon.data,
    qt_meta_data_Icon,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Icon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Icon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Icon.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Icon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void Icon::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Icon::smoothChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Icon::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Icon::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Icon::validChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Icon::selectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Icon::isMaskChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Icon::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Icon::fallbackChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
