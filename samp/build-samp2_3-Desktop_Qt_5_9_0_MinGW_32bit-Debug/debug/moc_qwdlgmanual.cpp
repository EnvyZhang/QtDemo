/****************************************************************************
** Meta object code from reading C++ file 'qwdlgmanual.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../samp2_3/qwdlgmanual.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwdlgmanual.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWDlgManual_t {
    QByteArrayData data[7];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWDlgManual_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWDlgManual_t qt_meta_stringdata_QWDlgManual = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QWDlgManual"
QT_MOC_LITERAL(1, 12, 14), // "on_chkBoxUnder"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "checked"
QT_MOC_LITERAL(4, 36, 15), // "on_chkBoxItalic"
QT_MOC_LITERAL(5, 52, 13), // "on_chkBoxBold"
QT_MOC_LITERAL(6, 66, 16) // "setTextFontColor"

    },
    "QWDlgManual\0on_chkBoxUnder\0\0checked\0"
    "on_chkBoxItalic\0on_chkBoxBold\0"
    "setTextFontColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWDlgManual[] = {

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
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void QWDlgManual::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWDlgManual *_t = static_cast<QWDlgManual *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_chkBoxUnder((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_chkBoxItalic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_chkBoxBold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setTextFontColor(); break;
        default: ;
        }
    }
}

const QMetaObject QWDlgManual::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QWDlgManual.data,
      qt_meta_data_QWDlgManual,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWDlgManual::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWDlgManual::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWDlgManual.stringdata0))
        return static_cast<void*>(const_cast< QWDlgManual*>(this));
    return QDialog::qt_metacast(_clname);
}

int QWDlgManual::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
