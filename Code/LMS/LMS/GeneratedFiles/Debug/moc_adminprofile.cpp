/****************************************************************************
** Meta object code from reading C++ file 'adminprofile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../adminprofile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminprofile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AdminProfile_t {
    QByteArrayData data[12];
    char stringdata[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AdminProfile_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AdminProfile_t qt_meta_stringdata_AdminProfile = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 14),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 23),
QT_MOC_LITERAL(4, 53, 18),
QT_MOC_LITERAL(5, 72, 19),
QT_MOC_LITERAL(6, 92, 16),
QT_MOC_LITERAL(7, 109, 17),
QT_MOC_LITERAL(8, 127, 14),
QT_MOC_LITERAL(9, 142, 17),
QT_MOC_LITERAL(10, 160, 18),
QT_MOC_LITERAL(11, 179, 15)
    },
    "AdminProfile\0optionsChanged\0\0"
    "AddTeacherButtonClicked\0viewTeacherClicked\0"
    "viewStudentsClicked\0addCourseClicked\0"
    "dropCourseClicked\0setTestClicked\0"
    "deleteTestClicked\0addQuestionClicked\0"
    "editTestClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminProfile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a,
       3,    0,   65,    2, 0x0a,
       4,    0,   66,    2, 0x0a,
       5,    0,   67,    2, 0x0a,
       6,    0,   68,    2, 0x0a,
       7,    0,   69,    2, 0x0a,
       8,    0,   70,    2, 0x0a,
       9,    0,   71,    2, 0x0a,
      10,    0,   72,    2, 0x0a,
      11,    0,   73,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdminProfile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminProfile *_t = static_cast<AdminProfile *>(_o);
        switch (_id) {
        case 0: _t->optionsChanged(); break;
        case 1: _t->AddTeacherButtonClicked(); break;
        case 2: _t->viewTeacherClicked(); break;
        case 3: _t->viewStudentsClicked(); break;
        case 4: _t->addCourseClicked(); break;
        case 5: _t->dropCourseClicked(); break;
        case 6: _t->setTestClicked(); break;
        case 7: _t->deleteTestClicked(); break;
        case 8: _t->addQuestionClicked(); break;
        case 9: _t->editTestClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AdminProfile::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdminProfile.data,
      qt_meta_data_AdminProfile,  qt_static_metacall, 0, 0}
};


const QMetaObject *AdminProfile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminProfile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdminProfile.stringdata))
        return static_cast<void*>(const_cast< AdminProfile*>(this));
    return QWidget::qt_metacast(_clname);
}

int AdminProfile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
