/****************************************************************************
** Meta object code from reading C++ file 'PropertyEditorFactory.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Src/Libs/SimulatedNao/Views/DataView/PropertyEditorFactory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyEditorFactory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpinBox_t {
    const uint offsetsAndSize[2];
    char stringdata0[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SpinBox_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SpinBox_t qt_meta_stringdata_SpinBox = {
    {
QT_MOC_LITERAL(0, 7) // "SpinBox"

    },
    "SpinBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpinBox[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject SpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QDoubleSpinBox::staticMetaObject>(),
    qt_meta_stringdata_SpinBox.offsetsAndSize,
    qt_meta_data_SpinBox,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SpinBox_t
, QtPrivate::TypeAndForceComplete<SpinBox, std::true_type>



>,
    nullptr
} };


const QMetaObject *SpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpinBox.stringdata0))
        return static_cast<void*>(this);
    return QDoubleSpinBox::qt_metacast(_clname);
}

int SpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDoubleSpinBox::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AngleEditor_t {
    const uint offsetsAndSize[16];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_AngleEditor_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_AngleEditor_t qt_meta_stringdata_AngleEditor = {
    {
QT_MOC_LITERAL(0, 11), // "AngleEditor"
QT_MOC_LITERAL(12, 12), // "valueChanged"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 5), // "value"
QT_MOC_LITERAL(32, 11), // "unitChanged"
QT_MOC_LITERAL(44, 5), // "index"
QT_MOC_LITERAL(50, 11), // "updateValue"
QT_MOC_LITERAL(62, 10) // "updateUnit"

    },
    "AngleEditor\0valueChanged\0\0value\0"
    "unitChanged\0index\0updateValue\0updateUnit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AngleEditor[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       4,    1,   41,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   44,    2, 0x08,    5 /* Private */,
       7,    1,   47,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void AngleEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AngleEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 1: _t->unitChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->updateValue((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->updateUnit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AngleEditor::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AngleEditor::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AngleEditor::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AngleEditor::unitChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject AngleEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AngleEditor.offsetsAndSize,
    qt_meta_data_AngleEditor,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_AngleEditor_t
, QtPrivate::TypeAndForceComplete<AngleEditor, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *AngleEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AngleEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AngleEditor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AngleEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void AngleEditor::valueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AngleEditor::unitChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_PropertyEditorFactory_t {
    const uint offsetsAndSize[18];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_PropertyEditorFactory_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_PropertyEditorFactory_t qt_meta_stringdata_PropertyEditorFactory = {
    {
QT_MOC_LITERAL(0, 21), // "PropertyEditorFactory"
QT_MOC_LITERAL(22, 23), // "slotSpinBoxValueChanged"
QT_MOC_LITERAL(46, 0), // ""
QT_MOC_LITERAL(47, 8), // "newValue"
QT_MOC_LITERAL(56, 27), // "slotAngleEditorValueChanged"
QT_MOC_LITERAL(84, 26), // "slotAngleEditorUnitChanged"
QT_MOC_LITERAL(111, 5), // "index"
QT_MOC_LITERAL(117, 19), // "slotEditorDestroyed"
QT_MOC_LITERAL(137, 7) // "pObject"

    },
    "PropertyEditorFactory\0slotSpinBoxValueChanged\0"
    "\0newValue\0slotAngleEditorValueChanged\0"
    "slotAngleEditorUnitChanged\0index\0"
    "slotEditorDestroyed\0pObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyEditorFactory[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x09,    1 /* Protected */,
       4,    1,   41,    2, 0x09,    3 /* Protected */,
       5,    1,   44,    2, 0x09,    5 /* Protected */,
       7,    1,   47,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QObjectStar,    8,

       0        // eod
};

void PropertyEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyEditorFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotSpinBoxValueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->slotAngleEditorValueChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 2: _t->slotAngleEditorUnitChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PropertyEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtVariantEditorFactory::staticMetaObject>(),
    qt_meta_stringdata_PropertyEditorFactory.offsetsAndSize,
    qt_meta_data_PropertyEditorFactory,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_PropertyEditorFactory_t
, QtPrivate::TypeAndForceComplete<PropertyEditorFactory, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>


>,
    nullptr
} };


const QMetaObject *PropertyEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyEditorFactory.stringdata0))
        return static_cast<void*>(this);
    return QtVariantEditorFactory::qt_metacast(_clname);
}

int PropertyEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtVariantEditorFactory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
