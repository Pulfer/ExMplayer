/****************************************************************************
** Meta object code from reading C++ file 'shortcutgetter.h'
**
** Created: Sun Jan 27 21:25:56 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../shortcutgetter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shortcutgetter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ShortcutGetter[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   16,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ShortcutGetter[] = {
    "ShortcutGetter\0\0b\0setCaptureKeyboard(bool)\0"
};

const QMetaObject ShortcutGetter::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ShortcutGetter,
      qt_meta_data_ShortcutGetter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShortcutGetter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShortcutGetter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShortcutGetter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutGetter))
        return static_cast<void*>(const_cast< ShortcutGetter*>(this));
    return QDialog::qt_metacast(_clname);
}

int ShortcutGetter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setCaptureKeyboard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE