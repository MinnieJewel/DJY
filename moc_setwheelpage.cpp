/****************************************************************************
** Meta object code from reading C++ file 'setwheelpage.h'
**
** Created: Tue Jun 2 11:36:11 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "setwheelpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setwheelpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SetWheelPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   14,   13,   13, 0x08,
      41,   13,   13,   13, 0x08,
      76,   70,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SetWheelPage[] = {
    "SetWheelPage\0\0number\0onNumbersClick(int)\0"
    "resetHmiSetWheelDiaCommand()\0index\0"
    "setSelectedButton(int)\0"
};

const QMetaObject SetWheelPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_SetWheelPage,
      qt_meta_data_SetWheelPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SetWheelPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SetWheelPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SetWheelPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SetWheelPage))
        return static_cast<void*>(const_cast< SetWheelPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int SetWheelPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onNumbersClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: resetHmiSetWheelDiaCommand(); break;
        case 2: setSelectedButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
