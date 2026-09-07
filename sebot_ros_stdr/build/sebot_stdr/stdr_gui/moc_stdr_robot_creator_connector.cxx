/****************************************************************************
** Meta object code from reading C++ file 'stdr_robot_creator_connector.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/sebot_stdr/stdr_gui/include/stdr_gui/stdr_robot_creator/stdr_robot_creator_connector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stdr_robot_creator_connector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_stdr_gui__CRobotCreatorConnector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   71,   83,   83, 0x05,
      84,  130,   83,   83, 0x05,

 // slots: signature, parameters, type, tag, flags
     152,  190,   83,   83, 0x0a,
     202,   83,   83,   83, 0x0a,
     216,   83,   83,   83, 0x0a,
     230,   83,   83,   83, 0x0a,
     248,   83,   83,   83, 0x0a,
     266,   83,   83,   83, 0x0a,
     286,   83,   83,   83, 0x0a,
     304,   83,   83,   83, 0x0a,
     326,   83,   83,   83, 0x0a,
     346,   83,   83,   83, 0x0a,
     369,   83,   83,   83, 0x0a,
     393,   83,   83,   83, 0x0a,
     415,   83,   83,   83, 0x0a,
     441,   83,   83,   83, 0x0a,
     465,   83,   83,   83, 0x0a,
     479,   83,   83,   83, 0x0a,
     497,   83,   83,   83, 0x0a,
     520,   83,   83,   83, 0x0a,
     547,   83,   83,   83, 0x0a,
     559,   83,   83,   83, 0x0a,
     578,   83,   83,   83, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_stdr_gui__CRobotCreatorConnector[] = {
    "stdr_gui::CRobotCreatorConnector\0"
    "loadRobotPressed(stdr_msgs::RobotMsg)\0"
    "newRobotMsg\0\0saveRobotPressed(stdr_msgs::RobotMsg,QString)\0"
    "newRobotMsg,file_name\0"
    "treeItemClicked(QTreeWidgetItem*,int)\0"
    "item,column\0updateLaser()\0updateSonar()\0"
    "updateLaserOpen()\0updateSonarOpen()\0"
    "updateRfidAntenna()\0updateCO2Sensor()\0"
    "updateThermalSensor()\0updateSoundSensor()\0"
    "updateKinematicModel()\0updateRfidAntennaOpen()\0"
    "updateCO2SensorOpen()\0updateThermalSensorOpen()\0"
    "updateSoundSensorOpen()\0updateRobot()\0"
    "updateRobotOpen()\0updateFootprintPoint()\0"
    "updateFootprintPointOpen()\0saveRobot()\0"
    "getRobotFromYaml()\0loadRobot()\0"
};

void stdr_gui::CRobotCreatorConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CRobotCreatorConnector *_t = static_cast<CRobotCreatorConnector *>(_o);
        switch (_id) {
        case 0: _t->loadRobotPressed((*reinterpret_cast< stdr_msgs::RobotMsg(*)>(_a[1]))); break;
        case 1: _t->saveRobotPressed((*reinterpret_cast< stdr_msgs::RobotMsg(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->treeItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->updateLaser(); break;
        case 4: _t->updateSonar(); break;
        case 5: _t->updateLaserOpen(); break;
        case 6: _t->updateSonarOpen(); break;
        case 7: _t->updateRfidAntenna(); break;
        case 8: _t->updateCO2Sensor(); break;
        case 9: _t->updateThermalSensor(); break;
        case 10: _t->updateSoundSensor(); break;
        case 11: _t->updateKinematicModel(); break;
        case 12: _t->updateRfidAntennaOpen(); break;
        case 13: _t->updateCO2SensorOpen(); break;
        case 14: _t->updateThermalSensorOpen(); break;
        case 15: _t->updateSoundSensorOpen(); break;
        case 16: _t->updateRobot(); break;
        case 17: _t->updateRobotOpen(); break;
        case 18: _t->updateFootprintPoint(); break;
        case 19: _t->updateFootprintPointOpen(); break;
        case 20: _t->saveRobot(); break;
        case 21: _t->getRobotFromYaml(); break;
        case 22: _t->loadRobot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData stdr_gui::CRobotCreatorConnector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject stdr_gui::CRobotCreatorConnector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_stdr_gui__CRobotCreatorConnector,
      qt_meta_data_stdr_gui__CRobotCreatorConnector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &stdr_gui::CRobotCreatorConnector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *stdr_gui::CRobotCreatorConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *stdr_gui::CRobotCreatorConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_stdr_gui__CRobotCreatorConnector))
        return static_cast<void*>(const_cast< CRobotCreatorConnector*>(this));
    return QObject::qt_metacast(_clname);
}

int stdr_gui::CRobotCreatorConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void stdr_gui::CRobotCreatorConnector::loadRobotPressed(stdr_msgs::RobotMsg _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void stdr_gui::CRobotCreatorConnector::saveRobotPressed(stdr_msgs::RobotMsg _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
