/****************************************************************************
** Meta object code from reading C++ file 'NuclearFuelAssemblyInspection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NuclearFuelAssemblyInspection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NuclearFuelAssemblyInspection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NuclearFuelAssemblyInspection_t {
    QByteArrayData data[6];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NuclearFuelAssemblyInspection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NuclearFuelAssemblyInspection_t qt_meta_stringdata_NuclearFuelAssemblyInspection = {
    {
QT_MOC_LITERAL(0, 0, 29), // "NuclearFuelAssemblyInspection"
QT_MOC_LITERAL(1, 30, 12), // "Selecteditem"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 61, 11), // "closeEditor"
QT_MOC_LITERAL(5, 73, 4) // "save"

    },
    "NuclearFuelAssemblyInspection\0"
    "Selecteditem\0\0QTreeWidgetItem*\0"
    "closeEditor\0save"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NuclearFuelAssemblyInspection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       4,    0,   34,    2, 0x0a /* Public */,
       5,    0,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NuclearFuelAssemblyInspection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NuclearFuelAssemblyInspection *_t = static_cast<NuclearFuelAssemblyInspection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Selecteditem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->closeEditor(); break;
        case 2: _t->save(); break;
        default: ;
        }
    }
}

const QMetaObject NuclearFuelAssemblyInspection::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_NuclearFuelAssemblyInspection.data,
      qt_meta_data_NuclearFuelAssemblyInspection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NuclearFuelAssemblyInspection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NuclearFuelAssemblyInspection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NuclearFuelAssemblyInspection.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int NuclearFuelAssemblyInspection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
