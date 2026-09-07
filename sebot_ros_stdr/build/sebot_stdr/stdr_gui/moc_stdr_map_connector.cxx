/****************************************************************************
** Meta object code from reading C++ file 'stdr_map_connector.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/sebot_stdr/stdr_gui/include/stdr_gui/stdr_map_connector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stdr_map_connector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_stdr_gui__CMapConnector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   51,   55,   55, 0x05,
      56,   78,   55,   55, 0x05,
      80,   78,   55,   55, 0x05,
     103,   78,   55,   55, 0x05,
     125,   78,   55,   55, 0x05,
     149,   78,   55,   55, 0x05,
     169,   78,   55,   55, 0x05,
     191,   78,   55,   55, 0x05,
     212,  248,   55,   55, 0x05,
     252,  288,   55,   55, 0x05,

 // slots: signature, parameters, type, tag, flags
     300,  330,  344,   55, 0x0a,
     349,   51,   55,   55, 0x0a,
     369,  391,   55,   55, 0x0a,
     397,  391,   55,   55, 0x0a,
     420,  391,   55,   55, 0x0a,
     444,   55,   55,   55, 0x0a,
     459,   55,   55,   55, 0x0a,
     481,   55,   55,   55, 0x0a,
     499,   55,   55,   55, 0x0a,
     519,   55,   55,   55, 0x0a,
     538,  566,   55,   55, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_stdr_gui__CMapConnector[] = {
    "stdr_gui::CMapConnector\0"
    "signalUpdateImage(QImage*)\0img\0\0"
    "zoomInPressed(QPoint)\0p\0zoomOutPressed(QPoint)\0"
    "robotPlaceSet(QPoint)\0thermalPlaceSet(QPoint)\0"
    "co2PlaceSet(QPoint)\0soundPlaceSet(QPoint)\0"
    "rfidPlaceSet(QPoint)\0"
    "itemClicked(QPoint,Qt::MouseButton)\0"
    "p,b\0robotReplaceSet(QPoint,std::string)\0"
    "p,robotName\0eventFilter(QObject*,QEvent*)\0"
    "watched,event\0bool\0serveImage(QImage*)\0"
    "setCursorZoomIn(bool)\0state\0"
    "setCursorZoomOut(bool)\0setCursorAdjusted(bool)\0"
    "waitForPlace()\0waitForThermalPlace()\0"
    "waitForCo2Place()\0waitForSoundPlace()\0"
    "waitForRfidPlace()\0waitForReplace(std::string)\0"
    "robotFrameId\0"
};

void stdr_gui::CMapConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CMapConnector *_t = static_cast<CMapConnector *>(_o);
        switch (_id) {
        case 0: _t->signalUpdateImage((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 1: _t->zoomInPressed((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->zoomOutPressed((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->robotPlaceSet((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->thermalPlaceSet((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 5: _t->co2PlaceSet((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 6: _t->soundPlaceSet((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 7: _t->rfidPlaceSet((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 8: _t->itemClicked((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< Qt::MouseButton(*)>(_a[2]))); break;
        case 9: _t->robotReplaceSet((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 10: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->serveImage((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 12: _t->setCursorZoomIn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setCursorZoomOut((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setCursorAdjusted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->waitForPlace(); break;
        case 16: _t->waitForThermalPlace(); break;
        case 17: _t->waitForCo2Place(); break;
        case 18: _t->waitForSoundPlace(); break;
        case 19: _t->waitForRfidPlace(); break;
        case 20: _t->waitForReplace((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData stdr_gui::CMapConnector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject stdr_gui::CMapConnector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_stdr_gui__CMapConnector,
      qt_meta_data_stdr_gui__CMapConnector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &stdr_gui::CMapConnector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *stdr_gui::CMapConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *stdr_gui::CMapConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_stdr_gui__CMapConnector))
        return static_cast<void*>(const_cast< CMapConnector*>(this));
    return QObject::qt_metacast(_clname);
}

int stdr_gui::CMapConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void stdr_gui::CMapConnector::signalUpdateImage(QImage * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void stdr_gui::CMapConnector::zoomInPressed(QPoint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void stdr_gui::CMapConnector::zoomOutPressed(QPoint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void stdr_gui::CMapConnector::robotPlaceSet(QPoint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void stdr_gui::CMapConnector::thermalPlaceSet(QPoint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void stdr_gui::CMapConnector::co2PlaceSet(QPoint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void stdr_gui::CMapConnector::soundPlaceSet(QPoint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void stdr_gui::CMapConnector::rfidPlaceSet(QPoint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void stdr_gui::CMapConnector::itemClicked(QPoint _t1, Qt::MouseButton _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void stdr_gui::CMapConnector::robotReplaceSet(QPoint _t1, std::string _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
