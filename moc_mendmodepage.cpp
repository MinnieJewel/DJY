/****************************************************************************
** Meta object code from reading C++ file 'mendmodepage.h'
**
** Created: Tue Jun 2 11:36:20 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mendmodepage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mendmodepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MendModePage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      35,   13,   13,   13, 0x08,
      62,   13,   13,   13, 0x08,
      93,   85,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MendModePage[] = {
    "MendModePage\0\0on_btnBack_clicked()\0"
    "on_btnMendCancel_clicked()\0"
    "on_btnMendOk_clicked()\0checked\0"
    "on_btnMend_toggled(bool)\0"
};

const QMetaObject MendModePage::staticMetaObject = {
    { &MyBase::staticMetaObject, qt_meta_stringdata_MendModePage,
      qt_meta_data_MendModePage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MendModePage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MendModePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MendModePage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MendModePage))
        return static_cast<void*>(const_cast< MendModePage*>(this));
    return MyBase::qt_metacast(_clname);
}

int MendModePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnBack_clicked(); break;
        case 1: on_btnMendCancel_clicked(); break;
        case 2: on_btnMendOk_clicked(); break;
        case 3: on_btnMend_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
