/****************************************************************************
** Meta object code from reading C++ file 'stdr_info_connector.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/sebot_stdr/stdr_gui/include/stdr_gui/stdr_info_connector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stdr_info_connector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_stdr_gui__CInfoConnector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   65,   85,   85, 0x05,
      86,  126,   85,   85, 0x05,
     146,  178,   85,   85, 0x05,
     188,   65,   85,   85, 0x05,
     228,  126,   85,   85, 0x05,
     268,  313,   85,   85, 0x05,
     338,  382,   85,   85, 0x05,
     406,  454,   85,   85, 0x05,
     482,  528,   85,   85, 0x05,
     554,  178,   85,   85, 0x05,
     586,   85,   85,   85, 0x05,

 // slots: signature, parameters, type, tag, flags
     600,  638,   85,   85, 0x0a,
     650,  638,   85,   85, 0x0a,
     685,  716,   85,   85, 0x0a,
     721,   85,   85,   85, 0x0a,
     733,  774,   85,   85, 0x0a,
     797,  838,   85,   85, 0x0a,
     861,  907,   85,   85, 0x0a,
     935,  980,   85,   85, 0x0a,
    1007, 1056,   85,   85, 0x0a,
    1087, 1134,   85,   85, 0x0a,
    1163, 1196,   85,   85, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_stdr_gui__CInfoConnector[] = {
    "stdr_gui::CInfoConnector\0"
    "laserVisualizerClicked(QString,QString)\0"
    "robotName,laserName\0\0"
    "sonarVisualizerClicked(QString,QString)\0"
    "robotName,sonarName\0robotVisualizerClicked(QString)\0"
    "robotName\0laserVisibilityClicked(QString,QString)\0"
    "sonarVisibilityClicked(QString,QString)\0"
    "rfidReaderVisibilityClicked(QString,QString)\0"
    "robotName,rfidReaderName\0"
    "co2SensorVisibilityClicked(QString,QString)\0"
    "robotName,co2SensorName\0"
    "thermalSensorVisibilityClicked(QString,QString)\0"
    "robotName,thermalSensorName\0"
    "soundSensorVisibilityClicked(QString,QString)\0"
    "robotName,soundSensorName\0"
    "robotVisibilityClicked(QString)\0"
    "adaptSignal()\0treeItemClicked(QTreeWidgetItem*,int)\0"
    "item,column\0adaptColumns(QTreeWidgetItem*,int)\0"
    "adaptColumns(QTreeWidgetItem*)\0item\0"
    "adaptSlot()\0setLaserVisibility(QString,QString,char)\0"
    "robotName,laserName,vs\0"
    "setSonarVisibility(QString,QString,char)\0"
    "robotName,sonarName,vs\0"
    "setRfidReaderVisibility(QString,QString,char)\0"
    "robotName,rfidReaderName,vs\0"
    "setCO2SensorVisibility(QString,QString,char)\0"
    "robotName,co2SensorName,vs\0"
    "setThermalSensorVisibility(QString,QString,char)\0"
    "robotName,thermalSensorName,vs\0"
    "setSoundSensorVisibility(QString,QString,char)\0"
    "robotName,soundSensorName,vs\0"
    "setRobotVisibility(QString,char)\0"
    "robotName,vs\0"
};

void stdr_gui::CInfoConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CInfoConnector *_t = static_cast<CInfoConnector *>(_o);
        switch (_id) {
        case 0: _t->laserVisualizerClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->sonarVisualizerClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->robotVisualizerClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->laserVisibilityClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->sonarVisibilityClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->rfidReaderVisibilityClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->co2SensorVisibilityClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->thermalSensorVisibilityClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->soundSensorVisibilityClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->robotVisibilityClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->adaptSignal(); break;
        case 11: _t->treeItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->adaptColumns((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->adaptColumns((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 14: _t->adaptSlot(); break;
        case 15: _t->setLaserVisibility((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< char(*)>(_a[3]))); break;
        case 16: _t->setSonarVisibility((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< char(*)>(_a[3]))); break;
        case 17: _t->setRfidReaderVisibility((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< char(*)>(_a[3]))); break;
        case 18: _t->setCO2SensorVisibility((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< char(*)>(_a[3]))); break;
        case 19: _t->setThermalSensorVisibility((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< char(*)>(_a[3]))); break;
        case 20: _t->setSoundSensorVisibility((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< char(*)>(_a[3]))); break;
        case 21: _t->setRobotVisibility((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData stdr_gui::CInfoConnector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject stdr_gui::CInfoConnector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_stdr_gui__CInfoConnector,
      qt_meta_data_stdr_gui__CInfoConnector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &stdr_gui::CInfoConnector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *stdr_gui::CInfoConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *stdr_gui::CInfoConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_stdr_gui__CInfoConnector))
        return static_cast<void*>(const_cast< CInfoConnector*>(this));
    return QObject::qt_metacast(_clname);
}

int stdr_gui::CInfoConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void stdr_gui::CInfoConnector::laserVisualizerClicked(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void stdr_gui::CInfoConnector::sonarVisualizerClicked(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void stdr_gui::CInfoConnector::robotVisualizerClicked(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void stdr_gui::CInfoConnector::laserVisibilityClicked(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void stdr_gui::CInfoConnector::sonarVisibilityClicked(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void stdr_gui::CInfoConnector::rfidReaderVisibilityClicked(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void stdr_gui::CInfoConnector::co2SensorVisibilityClicked(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void stdr_gui::CInfoConnector::thermalSensorVisibilityClicked(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void stdr_gui::CInfoConnector::soundSensorVisibilityClicked(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void stdr_gui::CInfoConnector::robotVisibilityClicked(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void stdr_gui::CInfoConnector::adaptSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}
QT_END_MOC_NAMESPACE
