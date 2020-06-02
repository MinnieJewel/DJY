/****************************************************************************
** Meta object code from reading C++ file 'broadcastpage.h'
**
** Created: Tue Jun 2 11:36:14 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "broadcastpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'broadcastpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BroadcastPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      36,   14,   14,   14, 0x08,
      61,   14,   14,   14, 0x08,
      87,   14,   14,   14, 0x08,
     101,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BroadcastPage[] = {
    "BroadcastPage\0\0on_btnBack_clicked()\0"
    "on_btnStopTest_clicked()\0"
    "on_btnStartTest_clicked()\0onTimer1out()\0"
    "onTimer2out()\0"
};

const QMetaObject BroadcastPage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_BroadcastPage,
      qt_meta_data_BroadcastPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BroadcastPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BroadcastPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BroadcastPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BroadcastPage))
        return static_cast<void*>(const_cast< BroadcastPage*>(this));
    return MyBase::qt_metacast(_clname);
}

int BroadcastPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnBack_clicked(); break;
        case 1: on_btnStopTest_clicked(); break;
        case 2: on_btnStartTest_clicked(); break;
        case 3: onTimer1out(); break;
        case 4: onTimer2out(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
