/****************************************************************************
** Meta object code from reading C++ file 'formlayoutattached.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "formlayoutattached.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formlayoutattached.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FormLayoutAttached_t {
    QByteArrayData data[15];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormLayoutAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormLayoutAttached_t qt_meta_stringdata_FormLayoutAttached = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FormLayoutAttached"
QT_MOC_LITERAL(1, 19, 12), // "labelChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "isSectionChanged"
QT_MOC_LITERAL(4, 50, 16), // "checkableChanged"
QT_MOC_LITERAL(5, 67, 14), // "checkedChanged"
QT_MOC_LITERAL(6, 82, 14), // "enabledChanged"
QT_MOC_LITERAL(7, 97, 15), // "buddyForChanged"
QT_MOC_LITERAL(8, 113, 5), // "label"
QT_MOC_LITERAL(9, 119, 9), // "isSection"
QT_MOC_LITERAL(10, 129, 9), // "checkable"
QT_MOC_LITERAL(11, 139, 7), // "checked"
QT_MOC_LITERAL(12, 147, 7), // "enabled"
QT_MOC_LITERAL(13, 155, 8), // "buddyFor"
QT_MOC_LITERAL(14, 164, 11) // "QQuickItem*"

    },
    "FormLayoutAttached\0labelChanged\0\0"
    "isSectionChanged\0checkableChanged\0"
    "checkedChanged\0enabledChanged\0"
    "buddyForChanged\0label\0isSection\0"
    "checkable\0checked\0enabled\0buddyFor\0"
    "QQuickItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormLayoutAttached[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495103,
       9, QMetaType::Bool, 0x00495103,
      10, QMetaType::Bool, 0x00495103,
      11, QMetaType::Bool, 0x00495103,
      12, QMetaType::Bool, 0x00495103,
      13, 0x80000000 | 14, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void FormLayoutAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormLayoutAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->labelChanged(); break;
        case 1: _t->isSectionChanged(); break;
        case 2: _t->checkableChanged(); break;
        case 3: _t->checkedChanged(); break;
        case 4: _t->enabledChanged(); break;
        case 5: _t->buddyForChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FormLayoutAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormLayoutAttached::labelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FormLayoutAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormLayoutAttached::isSectionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FormLayoutAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormLayoutAttached::checkableChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FormLayoutAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormLayoutAttached::checkedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FormLayoutAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormLayoutAttached::enabledChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FormLayoutAttached::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormLayoutAttached::buddyForChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FormLayoutAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isSection(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->checkable(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->checked(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 5: *reinterpret_cast< QQuickItem**>(_v) = _t->buddyFor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FormLayoutAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setIsSection(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setCheckable(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setChecked(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setBuddyFor(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FormLayoutAttached::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FormLayoutAttached.data,
    qt_meta_data_FormLayoutAttached,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FormLayoutAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormLayoutAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormLayoutAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FormLayoutAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void FormLayoutAttached::labelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FormLayoutAttached::isSectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FormLayoutAttached::checkableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FormLayoutAttached::checkedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FormLayoutAttached::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void FormLayoutAttached::buddyForChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
