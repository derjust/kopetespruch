/****************************************************************************
** Meta object code from reading C++ file 'fmMain.h'
**
** Created: Sun Oct 8 10:51:57 2006
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fmMain.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fmMain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_TfmMain[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,    9,    8,    8, 0x08,
      40,    8,    8,    8, 0x28,
      59,    9,    8,    8, 0x08,
      84,    8,    8,    8, 0x28,
     105,    9,    8,    8, 0x08,
     136,    8,    8,    8, 0x28,

       0        // eod
};

static const char qt_meta_stringdata_TfmMain[] = {
    "TfmMain\0\0checked\0on_pbSet_clicked(bool)\0on_pbSet_clicked()\0"
    "on_pbClose_clicked(bool)\0on_pbClose_clicked()\0"
    "on_pbNeuerSpruch_clicked(bool)\0on_pbNeuerSpruch_clicked()\0"
};

const QMetaObject TfmMain::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TfmMain,
      qt_meta_data_TfmMain, 0 }
};

const QMetaObject *TfmMain::metaObject() const
{
    return &staticMetaObject;
}

void *TfmMain::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TfmMain))
	return static_cast<void*>(const_cast<TfmMain*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TfmMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pbSet_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: on_pbSet_clicked(); break;
        case 2: on_pbClose_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: on_pbClose_clicked(); break;
        case 4: on_pbNeuerSpruch_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: on_pbNeuerSpruch_clicked(); break;
        }
        _id -= 6;
    }
    return _id;
}
