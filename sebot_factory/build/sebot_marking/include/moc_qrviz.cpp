/****************************************************************************
** Meta object code from reading C++ file 'qrviz.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/sebot_marking/include/qrviz.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qrviz.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QRviz_t {
    QByteArrayData data[7];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRviz_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRviz_t qt_meta_stringdata_QRviz = {
    {
QT_MOC_LITERAL(0, 0, 5), // "QRviz"
QT_MOC_LITERAL(1, 6, 17), // "ReturnModelSignal"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(4, 45, 5), // "model"
QT_MOC_LITERAL(5, 51, 7), // "addTool"
QT_MOC_LITERAL(6, 59, 11) // "rviz::Tool*"

    },
    "QRviz\0ReturnModelSignal\0\0QAbstractItemModel*\0"
    "model\0addTool\0rviz::Tool*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRviz[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    2,

       0        // eod
};

void QRviz::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRviz *_t = static_cast<QRviz *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReturnModelSignal((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1]))); break;
        case 1: _t->addTool((*reinterpret_cast< rviz::Tool*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< rviz::Tool* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QRviz::*_t)(QAbstractItemModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRviz::ReturnModelSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QRviz::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QRviz.data,
      qt_meta_data_QRviz,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QRviz::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRviz::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QRviz.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int QRviz::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QRviz::ReturnModelSignal(QAbstractItemModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
