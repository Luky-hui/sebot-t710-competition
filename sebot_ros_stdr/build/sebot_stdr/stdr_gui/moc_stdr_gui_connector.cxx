/****************************************************************************
** Meta object code from reading C++ file 'stdr_gui_connector.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/sebot_stdr/stdr_gui/include/stdr_gui/stdr_gui_connector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stdr_gui_connector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_stdr_gui__CGuiConnector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   46,   52,   52, 0x05,
      53,   46,   52,   52, 0x05,
      76,   46,   52,   52, 0x05,
     100,   52,   52,   52, 0x05,
     115,   52,   52,   52, 0x05,
     133,   52,   52,   52, 0x05,
     154,   52,   52,   52, 0x05,
     171,   52,   52,   52, 0x05,
     190,  225,   52,   52, 0x05,

 // slots: signature, parameters, type, tag, flags
     229,   52,   52,   52, 0x0a,
     257,   52,   52,   52, 0x0a,
     280,   52,   52,   52, 0x0a,
     302,   52,   52,   52, 0x0a,
     327,   52,   52,   52, 0x0a,
     353,   52,   52,   52, 0x0a,
     378,   52,   52,   52, 0x0a,
     402,   52,   52,   52, 0x0a,
     428,   52,   52,   52, 0x0a,
     456,   52,   52,   52, 0x0a,
     482,   52,   52,   52, 0x0a,
     506,   52,   52,   52, 0x0a,
     531,   52,   52,   52, 0x0a,
     557,   52,   52,   52, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_stdr_gui__CGuiConnector[] = {
    "stdr_gui::CGuiConnector\0setZoomInCursor(bool)\0"
    "state\0\0setZoomOutCursor(bool)\0"
    "setAdjustedCursor(bool)\0guiExitEvent()\0"
    "loadRfidPressed()\0loadThermalPressed()\0"
    "loadCo2Pressed()\0loadSoundPressed()\0"
    "robotFromFile(stdr_msgs::RobotMsg)\0"
    "msg\0actionPropertiesTriggered()\0"
    "actionAboutTriggered()\0actionExitTriggered()\0"
    "actionLoadMapTriggered()\0"
    "actionNewRobotTriggered()\0"
    "actionNewRfidTriggered()\0"
    "actionNewCo2Triggered()\0"
    "actionNewSoundTriggered()\0"
    "actionNewThermalTriggered()\0"
    "actionAddRobotTriggered()\0"
    "actionZoomInTriggered()\0"
    "actionZoomOutTriggered()\0"
    "actionAdjustedTriggered()\0"
    "actionGridTriggered()\0"
};

void stdr_gui::CGuiConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CGuiConnector *_t = static_cast<CGuiConnector *>(_o);
        switch (_id) {
        case 0: _t->setZoomInCursor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setZoomOutCursor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setAdjustedCursor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->guiExitEvent(); break;
        case 4: _t->loadRfidPressed(); break;
        case 5: _t->loadThermalPressed(); break;
        case 6: _t->loadCo2Pressed(); break;
        case 7: _t->loadSoundPressed(); break;
        case 8: _t->robotFromFile((*reinterpret_cast< stdr_msgs::RobotMsg(*)>(_a[1]))); break;
        case 9: _t->actionPropertiesTriggered(); break;
        case 10: _t->actionAboutTriggered(); break;
        case 11: _t->actionExitTriggered(); break;
        case 12: _t->actionLoadMapTriggered(); break;
        case 13: _t->actionNewRobotTriggered(); break;
        case 14: _t->actionNewRfidTriggered(); break;
        case 15: _t->actionNewCo2Triggered(); break;
        case 16: _t->actionNewSoundTriggered(); break;
        case 17: _t->actionNewThermalTriggered(); break;
        case 18: _t->actionAddRobotTriggered(); break;
        case 19: _t->actionZoomInTriggered(); break;
        case 20: _t->actionZoomOutTriggered(); break;
        case 21: _t->actionAdjustedTriggered(); break;
        case 22: _t->actionGridTriggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData stdr_gui::CGuiConnector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject stdr_gui::CGuiConnector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_stdr_gui__CGuiConnector,
      qt_meta_data_stdr_gui__CGuiConnector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &stdr_gui::CGuiConnector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *stdr_gui::CGuiConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *stdr_gui::CGuiConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_stdr_gui__CGuiConnector))
        return static_cast<void*>(const_cast< CGuiConnector*>(this));
    return QObject::qt_metacast(_clname);
}

int stdr_gui::CGuiConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void stdr_gui::CGuiConnector::setZoomInCursor(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void stdr_gui::CGuiConnector::setZoomOutCursor(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void stdr_gui::CGuiConnector::setAdjustedCursor(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void stdr_gui::CGuiConnector::guiExitEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void stdr_gui::CGuiConnector::loadRfidPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void stdr_gui::CGuiConnector::loadThermalPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void stdr_gui::CGuiConnector::loadCo2Pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void stdr_gui::CGuiConnector::loadSoundPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void stdr_gui::CGuiConnector::robotFromFile(stdr_msgs::RobotMsg _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
