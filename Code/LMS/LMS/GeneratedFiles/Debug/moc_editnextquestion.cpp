/****************************************************************************
** Meta object code from reading C++ file 'editnextquestion.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../editnextquestion.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editnextquestion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_editNextQuestion_t {
    QByteArrayData data[7];
    char stringdata[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_editNextQuestion_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_editNextQuestion_t qt_meta_stringdata_editNextQuestion = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 13),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 11),
QT_MOC_LITERAL(4, 44, 11),
QT_MOC_LITERAL(5, 56, 11),
QT_MOC_LITERAL(6, 68, 13)
    },
    "editNextQuestion\0deleteClicked\0\0"
    "editClicked\0nextClicked\0backClicked\0"
    "cancelClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_editNextQuestion[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a,
       3,    0,   40,    2, 0x0a,
       4,    0,   41,    2, 0x0a,
       5,    0,   42,    2, 0x0a,
       6,    0,   43,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void editNextQuestion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        editNextQuestion *_t = static_cast<editNextQuestion *>(_o);
        switch (_id) {
        case 0: _t->deleteClicked(); break;
        case 1: _t->editClicked(); break;
        case 2: _t->nextClicked(); break;
        case 3: _t->backClicked(); break;
        case 4: _t->cancelClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject editNextQuestion::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_editNextQuestion.data,
      qt_meta_data_editNextQuestion,  qt_static_metacall, 0, 0}
};


const QMetaObject *editNextQuestion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *editNextQuestion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_editNextQuestion.stringdata))
        return static_cast<void*>(const_cast< editNextQuestion*>(this));
    return QWidget::qt_metacast(_clname);
}

int editNextQuestion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
