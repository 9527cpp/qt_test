/****************************************************************************
** Meta object code from reading C++ file 'test.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "test.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QMyWidget_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMyWidget_t qt_meta_stringdata_QMyWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QMyWidget"
QT_MOC_LITERAL(1, 10, 12), // "onBtnClicked"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "QMyWidget\0onBtnClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMyWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QMyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMyWidget *_t = static_cast<QMyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onBtnClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QMyWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QMyWidget.data,
      qt_meta_data_QMyWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QMyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QMyWidget.stringdata0))
        return static_cast<void*>(const_cast< QMyWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QMyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_TestA_t {
    QByteArrayData data[7];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestA_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestA_t qt_meta_stringdata_TestA = {
    {
QT_MOC_LITERAL(0, 0, 5), // "TestA"
QT_MOC_LITERAL(1, 6, 8), // "setValue"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 5), // "value"
QT_MOC_LITERAL(4, 22, 19), // "setValueNoArgForMap"
QT_MOC_LITERAL(5, 42, 12), // "valueChanged"
QT_MOC_LITERAL(6, 55, 8) // "newValue"

    },
    "TestA\0setValue\0\0value\0setValueNoArgForMap\0"
    "valueChanged\0newValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestA[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void TestA::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestA *_t = static_cast<TestA *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setValueNoArgForMap(); break;
        case 2: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TestA::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TestA::setValue)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TestA::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TestA::setValueNoArgForMap)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject TestA::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestA.data,
      qt_meta_data_TestA,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TestA::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestA::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TestA.stringdata0))
        return static_cast<void*>(const_cast< TestA*>(this));
    return QObject::qt_metacast(_clname);
}

int TestA::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void TestA::setValue(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TestA::setValueNoArgForMap()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
