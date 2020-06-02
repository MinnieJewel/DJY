/****************************************************************************
** Meta object code from reading C++ file 'dcdcpage.h'
**
** Created: Tue Jun 2 11:36:05 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dcdcpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dcdcpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DCDCPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   10,    9,    9, 0x08,
      47,   10,    9,    9, 0x08,
      76,    9,    9,    9, 0x08,
     103,    9,    9,    9, 0x08,
     130,    9,    9,    9, 0x08,
     151,    9,    9,    9, 0x08,
     165,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DCDCPage[] = {
    "DCDCPage\0\0checked\0on_btnDcdcCut2_toggled(bool)\0"
    "on_btnDcdcCut1_toggled(bool)\0"
    "on_btnDcdcReset2_clicked()\0"
    "on_btnDcdcReset1_clicked()\0"
    "on_btnBack_clicked()\0onTimer1Out()\0"
    "onTimer2Out()\0"
};

const QMetaObject DCDCPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_DCDCPage,
      qt_meta_data_DCDCPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DCDCPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DCDCPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DCDCPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DCDCPage))
        return static_cast<void*>(const_cast< DCDCPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int DCDCPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnDcdcCut2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: on_btnDcdcCut1_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: on_btnDcdcReset2_clicked(); break;
        case 3: on_btnDcdcReset1_clicked(); break;
        case 4: on_btnBack_clicked(); break;
        case 5: onTimer1Out(); break;
        case 6: onTimer2Out(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
