/****************************************************************************
** Meta object code from reading C++ file 'editdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../campus/editdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EditDialog_t {
    QByteArrayData data[7];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditDialog_t qt_meta_stringdata_EditDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "EditDialog"
QT_MOC_LITERAL(1, 11, 17), // "book_edit_confirm"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "Book"
QT_MOC_LITERAL(4, 35, 4), // "book"
QT_MOC_LITERAL(5, 40, 18), // "cancelButton_click"
QT_MOC_LITERAL(6, 59, 19) // "confirmButton_click"

    },
    "EditDialog\0book_edit_confirm\0\0Book\0"
    "book\0cancelButton_click\0confirmButton_click"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    2, 0x08 /* Private */,
       6,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EditDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->book_edit_confirm((*reinterpret_cast< Book(*)>(_a[1]))); break;
        case 1: _t->cancelButton_click(); break;
        case 2: _t->confirmButton_click(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditDialog::*)(Book );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditDialog::book_edit_confirm)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EditDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_EditDialog.data,
    qt_meta_data_EditDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void EditDialog::book_edit_confirm(Book _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
