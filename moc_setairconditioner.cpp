/****************************************************************************
** Meta object code from reading C++ file 'setairconditioner.h'
**
** Created: Tue Jun 2 11:36:04 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "setairconditioner.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setairconditioner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SetAirconditioner[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      42,   18,   18,   18, 0x08,
      65,   18,   18,   18, 0x08,
      87,   18,   18,   18, 0x08,
     107,   18,   18,   18, 0x08,
     128,   18,   18,   18, 0x08,
     150,   18,   18,   18, 0x08,
     164,   18,   18,   18, 0x08,
     178,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SetAirconditioner[] = {
    "SetAirconditioner\0\0on_btnPreOff_clicked()\0"
    "on_btnSetTem_clicked()\0on_btnMinus_clicked()\0"
    "on_btnAdd_clicked()\0on_btnBack_clicked()\0"
    "onModeSetClicked(int)\0onTimer1Out()\0"
    "onTimer2Out()\0onTimer3Out()\0"
};

const QMetaObject SetAirconditioner::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_SetAirconditioner,
      qt_meta_data_SetAirconditioner, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SetAirconditioner::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SetAirconditioner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SetAirconditioner::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SetAirconditioner))
        return static_cast<void*>(const_cast< SetAirconditioner*>(this));
    return MyBase::qt_metacast(_clname);
}

int SetAirconditioner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnPreOff_clicked(); break;
        case 1: on_btnSetTem_clicked(); break;
        case 2: on_btnMinus_clicked(); break;
        case 3: on_btnAdd_clicked(); break;
        case 4: on_btnBack_clicked(); break;
        case 5: onModeSetClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: onTimer1Out(); break;
        case 7: onTimer2Out(); break;
        case 8: onTimer3Out(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
