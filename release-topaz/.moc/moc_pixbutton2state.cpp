/****************************************************************************
** Meta object code from reading C++ file 'pixbutton2state.h'
**
** Created: Mon Jul 23 16:14:45 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Src/lunaui/launcher/elements/buttons/pixbutton2state.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pixbutton2state.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PixButton2State[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      44,   16,   16,   16, 0x05,
      64,   16,   16,   16, 0x05,

 // properties: name, type, flags
      91,   86, 0x01495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

static const char qt_meta_stringdata_PixButton2State[] = {
    "PixButton2State\0\0signalStateActiveChanged()\0"
    "signalFSMActivate()\0signalFSMDeactivate()\0"
    "bool\0stateActive\0"
};

void PixButton2State::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PixButton2State *_t = static_cast<PixButton2State *>(_o);
        switch (_id) {
        case 0: _t->signalStateActiveChanged(); break;
        case 1: _t->signalFSMActivate(); break;
        case 2: _t->signalFSMDeactivate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PixButton2State::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PixButton2State::staticMetaObject = {
    { &PixButton::staticMetaObject, qt_meta_stringdata_PixButton2State,
      qt_meta_data_PixButton2State, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PixButton2State::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PixButton2State::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PixButton2State::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PixButton2State))
        return static_cast<void*>(const_cast< PixButton2State*>(this));
    return PixButton::qt_metacast(_clname);
}

int PixButton2State::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PixButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = stateActive(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setStateActive(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PixButton2State::signalStateActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PixButton2State::signalFSMActivate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void PixButton2State::signalFSMDeactivate()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE