/****************************************************************************
** Meta object code from reading C++ file 'popup_text.hh'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SimSims/popup_text.hh"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'popup_text.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PopUpTexture_t {
    QByteArrayData data[6];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PopUpTexture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PopUpTexture_t qt_meta_stringdata_PopUpTexture = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PopUpTexture"
QT_MOC_LITERAL(1, 13, 16), // "textureAppliquee"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "idrecu"
QT_MOC_LITERAL(4, 38, 11), // "OnClicApply"
QT_MOC_LITERAL(5, 50, 12) // "OnClicCancel"

    },
    "PopUpTexture\0textureAppliquee\0\0idrecu\0"
    "OnClicApply\0OnClicCancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PopUpTexture[] = {

 // content:
       7,       // revision
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
       4,    1,   32,    2, 0x0a /* Public */,
       5,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void,

       0        // eod
};

void PopUpTexture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PopUpTexture *_t = static_cast<PopUpTexture *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textureAppliquee((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->OnClicApply((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->OnClicCancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PopUpTexture::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PopUpTexture::textureAppliquee)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject PopUpTexture::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PopUpTexture.data,
      qt_meta_data_PopUpTexture,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PopUpTexture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PopUpTexture::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PopUpTexture.stringdata0))
        return static_cast<void*>(const_cast< PopUpTexture*>(this));
    return QWidget::qt_metacast(_clname);
}

int PopUpTexture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void PopUpTexture::textureAppliquee(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
