/****************************************************************************
** Meta object code from reading C++ file 'ventanapalabras.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Proyecto-Atomatas-GUI/ventanapalabras.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ventanapalabras.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ventanapalabras_t {
    QByteArrayData data[12];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ventanapalabras_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ventanapalabras_t qt_meta_stringdata_ventanapalabras = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ventanapalabras"
QT_MOC_LITERAL(1, 16, 24), // "on_bCheckPalabra_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 6), // "addLog"
QT_MOC_LITERAL(4, 49, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 66, 5), // "nItem"
QT_MOC_LITERAL(6, 72, 9), // "addResult"
QT_MOC_LITERAL(7, 82, 5), // "char*"
QT_MOC_LITERAL(8, 88, 5), // "texto"
QT_MOC_LITERAL(9, 94, 8), // "aceptada"
QT_MOC_LITERAL(10, 103, 25), // "on_boxPalabra_textChanged"
QT_MOC_LITERAL(11, 129, 4) // "arg1"

    },
    "ventanapalabras\0on_bCheckPalabra_clicked\0"
    "\0addLog\0QListWidgetItem*\0nItem\0addResult\0"
    "char*\0texto\0aceptada\0on_boxPalabra_textChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ventanapalabras[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       6,    2,   38,    2, 0x08 /* Private */,
      10,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,    8,    9,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void ventanapalabras::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ventanapalabras *_t = static_cast<ventanapalabras *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_bCheckPalabra_clicked(); break;
        case 1: _t->addLog((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->addResult((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->on_boxPalabra_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ventanapalabras::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ventanapalabras.data,
      qt_meta_data_ventanapalabras,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ventanapalabras::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ventanapalabras::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ventanapalabras.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ventanapalabras::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
