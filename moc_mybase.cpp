/****************************************************************************
** Meta object code from reading C++ file 'mybase.h'
**
** Created: Tue Jun 2 11:35:55 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mybase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mybase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyBase[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      30,    7,    7,    7, 0x05,
      52,    7,    7,    7, 0x05,
      77,    7,    7,    7, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_MyBase[] = {
    "MyBase\0\0changeMiddlePage(int)\0"
    "changeHeaderPage(int)\0changeNavigatorPage(int)\0"
    "changeLogoPage(int)\0"
};

const QMetaObject MyBase::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MyBase,
      qt_meta_data_MyBase, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyBase))
        return static_cast<void*>(const_cast< MyBase*>(this));
    return QWidget::qt_metacast(_clname);
}

int MyBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeMiddlePage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: changeHeaderPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: changeNavigatorPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: changeLogoPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MyBase::changeMiddlePage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyBase::changeHeaderPage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyBase::changeNavigatorPage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyBase::changeLogoPage(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE