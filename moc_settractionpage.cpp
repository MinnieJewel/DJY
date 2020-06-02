/****************************************************************************
** Meta object code from reading C++ file 'settractionpage.h'
**
** Created: Tue Jun 2 11:36:06 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "settractionpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settractionpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SetTractionPage[] = {

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
      17,   16,   16,   16, 0x08,
      42,   16,   16,   16, 0x08,
      63,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SetTractionPage[] = {
    "SetTractionPage\0\0on_btnLowPower_clicked()\0"
    "on_btnBack_clicked()\0onBtnClicked(int)\0"
};

const QMetaObject SetTractionPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_SetTractionPage,
      qt_meta_data_SetTractionPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SetTractionPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SetTractionPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SetTractionPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SetTractionPage))
        return static_cast<void*>(const_cast< SetTractionPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int SetTractionPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnLowPower_clicked(); break;
        case 1: on_btnBack_clicked(); break;
        case 2: onBtnClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
