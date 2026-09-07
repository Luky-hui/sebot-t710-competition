/****************************************************************************
** Meta object code from reading C++ file 'stdr_gui_controller.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/sebot_stdr/stdr_gui/include/stdr_gui/stdr_gui_controller.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stdr_gui_controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_stdr_gui__CGuiController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   44,   44,   44, 0x05,
      45,   44,   44,   44, 0x05,
      66,   44,   44,   44, 0x05,
      83,   44,   44,   44, 0x05,
     102,   44,   44,   44, 0x05,
     120,  146,   44,   44, 0x05,
     159,  200,   44,   44, 0x05,
     223,  264,   44,   44, 0x05,
     287,  333,   44,   44, 0x05,
     361,  406,   44,   44, 0x05,
     433,  482,   44,   44, 0x05,
     513,  560,   44,   44, 0x05,
     589,  622,   44,   44, 0x05,

 // slots: signature, parameters, type, tag, flags
     635,  681,   44,   44, 0x0a,
     703,  741,   44,   44, 0x0a,
     753,  741,   44,   44, 0x0a,
     799,   44,   44,   44, 0x0a,
     817,   44,   44,   44, 0x0a,
     834,   44,   44,   44, 0x0a,
     853,   44,   44,   44, 0x0a,
     874,  896,   44,   44, 0x0a,
     898,  896,   44,   44, 0x0a,
     921,  896,   44,   44, 0x0a,
     943,  896,   44,   44, 0x0a,
     964,  896,   44,   44, 0x0a,
     988,  896,   44,   44, 0x0a,
    1008,  896,   44,   44, 0x0a,
    1030,   44,   44,   44, 0x0a,
    1050, 1090,   44,   44, 0x0a,
    1110, 1150,   44,   44, 0x0a,
    1170, 1202,   44,   44, 0x0a,
    1212, 1248,   44,   44, 0x0a,
    1252, 1288,   44,   44, 0x0a,
    1300, 1090,   44,   44, 0x0a,
    1340, 1150,   44,   44, 0x0a,
    1380, 1425,   44,   44, 0x0a,
    1450, 1494,   44,   44, 0x0a,
    1518, 1566,   44,   44, 0x0a,
    1594, 1640,   44,   44, 0x0a,
    1666, 1202,   44,   44, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_stdr_gui__CGuiController[] = {
    "stdr_gui::CGuiController\0waitForRobotPose()\0"
    "\0waitForThermalPose()\0waitForCo2Pose()\0"
    "waitForSoundPose()\0waitForRfidPose()\0"
    "replaceRobot(std::string)\0robotFrameId\0"
    "setLaserVisibility(QString,QString,char)\0"
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
    "robotName,vs\0saveRobotPressed(stdr_msgs::RobotMsg,QString)\0"
    "newRobotMsg,file_name\0"
    "loadRobotPressed(stdr_msgs::RobotMsg)\0"
    "newRobotMsg\0loadRobotFromFilePressed(stdr_msgs::RobotMsg)\0"
    "loadRfidPressed()\0loadCo2Pressed()\0"
    "loadSoundPressed()\0loadThermalPressed()\0"
    "zoomInPressed(QPoint)\0p\0zoomOutPressed(QPoint)\0"
    "robotPlaceSet(QPoint)\0rfidPlaceSet(QPoint)\0"
    "thermalPlaceSet(QPoint)\0co2PlaceSet(QPoint)\0"
    "soundPlaceSet(QPoint)\0updateMapInternal()\0"
    "laserVisualizerClicked(QString,QString)\0"
    "robotName,laserName\0"
    "sonarVisualizerClicked(QString,QString)\0"
    "robotName,sonarName\0robotVisualizerClicked(QString)\0"
    "robotName\0itemClicked(QPoint,Qt::MouseButton)\0"
    "p,b\0robotReplaceSet(QPoint,std::string)\0"
    "p,robotName\0laserVisibilityClicked(QString,QString)\0"
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
};

void stdr_gui::CGuiController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CGuiController *_t = static_cast<CGuiController *>(_o);
        switch (_id) {
        case 0: _t->waitForRobotPose(); break;
        case 1: _t->waitForThermalPose(); break;
        case 2: _t->waitForCo2Pose(); break;
        case 3: _t->waitForSoundPose(); break;
        case 4: _t->waitForRfidPose(); break;
        case 5: _t->replaceRobot((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 6: _t->setLaserVisibility((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< char(*)>(_a[3]))); break;
        case 7: _t->setSonarVisibility((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< char(*)>(_a[3]))); break;
        case 8: _t->setRfidReaderVisibility((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< char(*)>(_a[3]))); break;
        case 9: _t->setCO2SensorVisibility((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< char(*)>(_a[3]))); break;
        case 10: _t->setThermalSensorVisibility((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< char(*)>(_a[3]))); break;
        case 11: _t->setSoundSensorVisibility((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< char(*)>(_a[3]))); break;
        case 12: _t->setRobotVisibility((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2]))); break;
        case 13: _t->saveRobotPressed((*reinterpret_cast< stdr_msgs::RobotMsg(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: _t->loadRobotPressed((*reinterpret_cast< stdr_msgs::RobotMsg(*)>(_a[1]))); break;
        case 15: _t->loadRobotFromFilePressed((*reinterpret_cast< stdr_msgs::RobotMsg(*)>(_a[1]))); break;
        case 16: _t->loadRfidPressed(); break;
        case 17: _t->loadCo2Pressed(); break;
        case 18: _t->loadSoundPressed(); break;
        case 19: _t->loadThermalPressed(); break;
        case 20: _t->zoomInPressed((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 21: _t->zoomOutPressed((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 22: _t->robotPlaceSet((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 23: _t->rfidPlaceSet((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 24: _t->thermalPlaceSet((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 25: _t->co2PlaceSet((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 26: _t->soundPlaceSet((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 27: _t->updateMapInternal(); break;
        case 28: _t->laserVisualizerClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 29: _t->sonarVisualizerClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 30: _t->robotVisualizerClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: _t->itemClicked((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< Qt::MouseButton(*)>(_a[2]))); break;
        case 32: _t->robotReplaceSet((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 33: _t->laserVisibilityClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 34: _t->sonarVisibilityClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 35: _t->rfidReaderVisibilityClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 36: _t->co2SensorVisibilityClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 37: _t->thermalSensorVisibilityClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 38: _t->soundSensorVisibilityClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 39: _t->robotVisibilityClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData stdr_gui::CGuiController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject stdr_gui::CGuiController::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_stdr_gui__CGuiController,
      qt_meta_data_stdr_gui__CGuiController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &stdr_gui::CGuiController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *stdr_gui::CGuiController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *stdr_gui::CGuiController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_stdr_gui__CGuiController))
        return static_cast<void*>(const_cast< CGuiController*>(this));
    return QThread::qt_metacast(_clname);
}

int stdr_gui::CGuiController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void stdr_gui::CGuiController::waitForRobotPose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void stdr_gui::CGuiController::waitForThermalPose()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void stdr_gui::CGuiController::waitForCo2Pose()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void stdr_gui::CGuiController::waitForSoundPose()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void stdr_gui::CGuiController::waitForRfidPose()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void stdr_gui::CGuiController::replaceRobot(std::string _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void stdr_gui::CGuiController::setLaserVisibility(QString _t1, QString _t2, char _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void stdr_gui::CGuiController::setSonarVisibility(QString _t1, QString _t2, char _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void stdr_gui::CGuiController::setRfidReaderVisibility(QString _t1, QString _t2, char _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void stdr_gui::CGuiController::setCO2SensorVisibility(QString _t1, QString _t2, char _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void stdr_gui::CGuiController::setThermalSensorVisibility(QString _t1, QString _t2, char _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void stdr_gui::CGuiController::setSoundSensorVisibility(QString _t1, QString _t2, char _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void stdr_gui::CGuiController::setRobotVisibility(QString _t1, char _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
