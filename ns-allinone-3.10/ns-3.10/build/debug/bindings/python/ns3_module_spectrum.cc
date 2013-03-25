#include "ns3module.h"

std::map<void*, PyObject*> PyNs3MicrowaveOvenSpectrumValueHelper_wrapper_registry;


static int
_wrap_PyNs3MicrowaveOvenSpectrumValueHelper__tp_init__0(PyNs3MicrowaveOvenSpectrumValueHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::MicrowaveOvenSpectrumValueHelper();
    return 0;
}

static int
_wrap_PyNs3MicrowaveOvenSpectrumValueHelper__tp_init__1(PyNs3MicrowaveOvenSpectrumValueHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3MicrowaveOvenSpectrumValueHelper *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3MicrowaveOvenSpectrumValueHelper_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::MicrowaveOvenSpectrumValueHelper(*((PyNs3MicrowaveOvenSpectrumValueHelper *) arg0)->obj);
    return 0;
}

int _wrap_PyNs3MicrowaveOvenSpectrumValueHelper__tp_init(PyNs3MicrowaveOvenSpectrumValueHelper *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3MicrowaveOvenSpectrumValueHelper__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3MicrowaveOvenSpectrumValueHelper__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3MicrowaveOvenSpectrumValueHelper_CreatePowerSpectralDensityMwo2(void)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumValue > retval;
    PyNs3SpectrumValue *py_SpectrumValue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = ns3::MicrowaveOvenSpectrumValueHelper::CreatePowerSpectralDensityMwo2();
    if (!(const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumValue = NULL;
    } else {
        py_SpectrumValue = (PyNs3SpectrumValue *) wrapper_lookup_iter->second;
        Py_INCREF(py_SpectrumValue);
    }
    
    if (py_SpectrumValue == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)))), &PyNs3SpectrumValue_Type);
        py_SpectrumValue = PyObject_New(PyNs3SpectrumValue, wrapper_type);
        py_SpectrumValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval))->Ref();
        py_SpectrumValue->obj = const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumValue->obj] = (PyObject *) py_SpectrumValue;
    }
    py_retval = Py_BuildValue((char *) "N", py_SpectrumValue);
    return py_retval;
}


PyObject *
_wrap_PyNs3MicrowaveOvenSpectrumValueHelper_CreatePowerSpectralDensityMwo1(void)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumValue > retval;
    PyNs3SpectrumValue *py_SpectrumValue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = ns3::MicrowaveOvenSpectrumValueHelper::CreatePowerSpectralDensityMwo1();
    if (!(const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumValue = NULL;
    } else {
        py_SpectrumValue = (PyNs3SpectrumValue *) wrapper_lookup_iter->second;
        Py_INCREF(py_SpectrumValue);
    }
    
    if (py_SpectrumValue == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)))), &PyNs3SpectrumValue_Type);
        py_SpectrumValue = PyObject_New(PyNs3SpectrumValue, wrapper_type);
        py_SpectrumValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval))->Ref();
        py_SpectrumValue->obj = const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumValue->obj] = (PyObject *) py_SpectrumValue;
    }
    py_retval = Py_BuildValue((char *) "N", py_SpectrumValue);
    return py_retval;
}


static PyObject*
_wrap_PyNs3MicrowaveOvenSpectrumValueHelper__copy__(PyNs3MicrowaveOvenSpectrumValueHelper *self)
{

    PyNs3MicrowaveOvenSpectrumValueHelper *py_copy;
    py_copy = PyObject_New(PyNs3MicrowaveOvenSpectrumValueHelper, &PyNs3MicrowaveOvenSpectrumValueHelper_Type);
    py_copy->obj = new ns3::MicrowaveOvenSpectrumValueHelper(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3MicrowaveOvenSpectrumValueHelper_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3MicrowaveOvenSpectrumValueHelper_methods[] = {
    {(char *) "CreatePowerSpectralDensityMwo2", (PyCFunction) _wrap_PyNs3MicrowaveOvenSpectrumValueHelper_CreatePowerSpectralDensityMwo2, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "CreatePowerSpectralDensityMwo1", (PyCFunction) _wrap_PyNs3MicrowaveOvenSpectrumValueHelper_CreatePowerSpectralDensityMwo1, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3MicrowaveOvenSpectrumValueHelper__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3MicrowaveOvenSpectrumValueHelper__tp_dealloc(PyNs3MicrowaveOvenSpectrumValueHelper *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3MicrowaveOvenSpectrumValueHelper_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3MicrowaveOvenSpectrumValueHelper_wrapper_registry.end()) {
        PyNs3MicrowaveOvenSpectrumValueHelper_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::MicrowaveOvenSpectrumValueHelper *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3MicrowaveOvenSpectrumValueHelper__tp_richcompare (PyNs3MicrowaveOvenSpectrumValueHelper *PYBINDGEN_UNUSED(self), PyNs3MicrowaveOvenSpectrumValueHelper *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3MicrowaveOvenSpectrumValueHelper_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3MicrowaveOvenSpectrumValueHelper_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.MicrowaveOvenSpectrumValueHelper",            /* tp_name */
    sizeof(PyNs3MicrowaveOvenSpectrumValueHelper),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3MicrowaveOvenSpectrumValueHelper__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3MicrowaveOvenSpectrumValueHelper__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3MicrowaveOvenSpectrumValueHelper_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3MicrowaveOvenSpectrumValueHelper__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};



std::map<void*, PyObject*> PyNs3RxSpectrumModelInfo_wrapper_registry;
static PyObject* _wrap_PyNs3RxSpectrumModelInfo__get_m_rxSpectrumModel(PyNs3RxSpectrumModelInfo *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyNs3SpectrumModel *py_SpectrumModel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!(const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (self->obj->m_rxSpectrumModel)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (self->obj->m_rxSpectrumModel)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumModel = NULL;
    } else {
        py_SpectrumModel = (PyNs3SpectrumModel *) wrapper_lookup_iter->second;
        Py_INCREF(py_SpectrumModel);
    }
    
    if (py_SpectrumModel == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3SpectrumModel_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumModel__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (self->obj->m_rxSpectrumModel)))), &PyNs3SpectrumModel_Type);
        py_SpectrumModel = PyObject_New(PyNs3SpectrumModel, wrapper_type);
        py_SpectrumModel->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (self->obj->m_rxSpectrumModel))->Ref();
        py_SpectrumModel->obj = const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (self->obj->m_rxSpectrumModel));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumModel->obj] = (PyObject *) py_SpectrumModel;
    }
    py_retval = Py_BuildValue((char *) "N", py_SpectrumModel);
    return py_retval;
}
static int _wrap_PyNs3RxSpectrumModelInfo__set_m_rxSpectrumModel(PyNs3RxSpectrumModelInfo *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyNs3SpectrumModel *tmp_SpectrumModel;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SpectrumModel_Type, &tmp_SpectrumModel)) {
        Py_DECREF(py_retval);
        return -1;
    }
    // dangerous!
    self->obj->m_rxSpectrumModel = ns3::Ptr< ns3::SpectrumModel  > (tmp_SpectrumModel->obj);
    Py_DECREF(py_retval);
    return 0;
}
static PyGetSetDef PyNs3RxSpectrumModelInfo__getsets[] = {
    {
        (char*) "m_rxSpectrumModel", /* attribute name */
        (getter) _wrap_PyNs3RxSpectrumModelInfo__get_m_rxSpectrumModel, /* C function to get the attribute */
        (setter) _wrap_PyNs3RxSpectrumModelInfo__set_m_rxSpectrumModel, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    { NULL, NULL, NULL, NULL, NULL }
};


static int
_wrap_PyNs3RxSpectrumModelInfo__tp_init__0(PyNs3RxSpectrumModelInfo *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3RxSpectrumModelInfo *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3RxSpectrumModelInfo_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::RxSpectrumModelInfo(*((PyNs3RxSpectrumModelInfo *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3RxSpectrumModelInfo__tp_init__1(PyNs3RxSpectrumModelInfo *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3SpectrumModel *rxSpectrumModel;
    ns3::SpectrumModel *rxSpectrumModel_ptr;
    const char *keywords[] = {"rxSpectrumModel", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumModel_Type, &rxSpectrumModel)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    rxSpectrumModel_ptr = (rxSpectrumModel ? rxSpectrumModel->obj : NULL);
    self->obj = new ns3::RxSpectrumModelInfo(ns3::Ptr< ns3::SpectrumModel  > (rxSpectrumModel_ptr));
    return 0;
}

int _wrap_PyNs3RxSpectrumModelInfo__tp_init(PyNs3RxSpectrumModelInfo *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3RxSpectrumModelInfo__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3RxSpectrumModelInfo__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


static PyObject*
_wrap_PyNs3RxSpectrumModelInfo__copy__(PyNs3RxSpectrumModelInfo *self)
{

    PyNs3RxSpectrumModelInfo *py_copy;
    py_copy = PyObject_New(PyNs3RxSpectrumModelInfo, &PyNs3RxSpectrumModelInfo_Type);
    py_copy->obj = new ns3::RxSpectrumModelInfo(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3RxSpectrumModelInfo_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3RxSpectrumModelInfo_methods[] = {
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3RxSpectrumModelInfo__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3RxSpectrumModelInfo__tp_dealloc(PyNs3RxSpectrumModelInfo *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3RxSpectrumModelInfo_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3RxSpectrumModelInfo_wrapper_registry.end()) {
        PyNs3RxSpectrumModelInfo_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::RxSpectrumModelInfo *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3RxSpectrumModelInfo__tp_richcompare (PyNs3RxSpectrumModelInfo *PYBINDGEN_UNUSED(self), PyNs3RxSpectrumModelInfo *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3RxSpectrumModelInfo_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3RxSpectrumModelInfo_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.RxSpectrumModelInfo",            /* tp_name */
    sizeof(PyNs3RxSpectrumModelInfo),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3RxSpectrumModelInfo__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3RxSpectrumModelInfo__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3RxSpectrumModelInfo_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    PyNs3RxSpectrumModelInfo__getsets,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3RxSpectrumModelInfo__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};



std::map<void*, PyObject*> PyNs3TxSpectrumModelInfo_wrapper_registry;
static PyObject* _wrap_PyNs3TxSpectrumModelInfo__get_m_spectrumConverterMap(PyNs3TxSpectrumModelInfo *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    Pyns3__SpectrumConverterMap_t *py_ns3__SpectrumConverterMap_t;
    
    py_ns3__SpectrumConverterMap_t = PyObject_New(Pyns3__SpectrumConverterMap_t, &Pyns3__SpectrumConverterMap_t_Type);
    py_ns3__SpectrumConverterMap_t->obj = new ns3::SpectrumConverterMap_t(self->obj->m_spectrumConverterMap);
    py_retval = Py_BuildValue((char *) "N", py_ns3__SpectrumConverterMap_t);
    return py_retval;
}
static int _wrap_PyNs3TxSpectrumModelInfo__set_m_spectrumConverterMap(PyNs3TxSpectrumModelInfo *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O&", _wrap_convert_py2c__ns3__SpectrumConverterMap_t, &self->obj->m_spectrumConverterMap)) {
        Py_DECREF(py_retval);
        return -1;
    }
    Py_DECREF(py_retval);
    return 0;
}
static PyObject* _wrap_PyNs3TxSpectrumModelInfo__get_m_txSpectrumModel(PyNs3TxSpectrumModelInfo *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyNs3SpectrumModel *py_SpectrumModel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!(const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (self->obj->m_txSpectrumModel)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (self->obj->m_txSpectrumModel)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumModel = NULL;
    } else {
        py_SpectrumModel = (PyNs3SpectrumModel *) wrapper_lookup_iter->second;
        Py_INCREF(py_SpectrumModel);
    }
    
    if (py_SpectrumModel == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3SpectrumModel_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumModel__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (self->obj->m_txSpectrumModel)))), &PyNs3SpectrumModel_Type);
        py_SpectrumModel = PyObject_New(PyNs3SpectrumModel, wrapper_type);
        py_SpectrumModel->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (self->obj->m_txSpectrumModel))->Ref();
        py_SpectrumModel->obj = const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (self->obj->m_txSpectrumModel));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumModel->obj] = (PyObject *) py_SpectrumModel;
    }
    py_retval = Py_BuildValue((char *) "N", py_SpectrumModel);
    return py_retval;
}
static int _wrap_PyNs3TxSpectrumModelInfo__set_m_txSpectrumModel(PyNs3TxSpectrumModelInfo *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyNs3SpectrumModel *tmp_SpectrumModel;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SpectrumModel_Type, &tmp_SpectrumModel)) {
        Py_DECREF(py_retval);
        return -1;
    }
    // dangerous!
    self->obj->m_txSpectrumModel = ns3::Ptr< ns3::SpectrumModel  > (tmp_SpectrumModel->obj);
    Py_DECREF(py_retval);
    return 0;
}
static PyGetSetDef PyNs3TxSpectrumModelInfo__getsets[] = {
    {
        (char*) "m_txSpectrumModel", /* attribute name */
        (getter) _wrap_PyNs3TxSpectrumModelInfo__get_m_txSpectrumModel, /* C function to get the attribute */
        (setter) _wrap_PyNs3TxSpectrumModelInfo__set_m_txSpectrumModel, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    {
        (char*) "m_spectrumConverterMap", /* attribute name */
        (getter) _wrap_PyNs3TxSpectrumModelInfo__get_m_spectrumConverterMap, /* C function to get the attribute */
        (setter) _wrap_PyNs3TxSpectrumModelInfo__set_m_spectrumConverterMap, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    { NULL, NULL, NULL, NULL, NULL }
};


static int
_wrap_PyNs3TxSpectrumModelInfo__tp_init__0(PyNs3TxSpectrumModelInfo *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3TxSpectrumModelInfo *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3TxSpectrumModelInfo_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::TxSpectrumModelInfo(*((PyNs3TxSpectrumModelInfo *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3TxSpectrumModelInfo__tp_init__1(PyNs3TxSpectrumModelInfo *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3SpectrumModel *txSpectrumModel;
    ns3::SpectrumModel *txSpectrumModel_ptr;
    const char *keywords[] = {"txSpectrumModel", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumModel_Type, &txSpectrumModel)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    txSpectrumModel_ptr = (txSpectrumModel ? txSpectrumModel->obj : NULL);
    self->obj = new ns3::TxSpectrumModelInfo(ns3::Ptr< ns3::SpectrumModel  > (txSpectrumModel_ptr));
    return 0;
}

int _wrap_PyNs3TxSpectrumModelInfo__tp_init(PyNs3TxSpectrumModelInfo *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3TxSpectrumModelInfo__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3TxSpectrumModelInfo__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


static PyObject*
_wrap_PyNs3TxSpectrumModelInfo__copy__(PyNs3TxSpectrumModelInfo *self)
{

    PyNs3TxSpectrumModelInfo *py_copy;
    py_copy = PyObject_New(PyNs3TxSpectrumModelInfo, &PyNs3TxSpectrumModelInfo_Type);
    py_copy->obj = new ns3::TxSpectrumModelInfo(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3TxSpectrumModelInfo_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3TxSpectrumModelInfo_methods[] = {
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3TxSpectrumModelInfo__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3TxSpectrumModelInfo__tp_dealloc(PyNs3TxSpectrumModelInfo *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3TxSpectrumModelInfo_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3TxSpectrumModelInfo_wrapper_registry.end()) {
        PyNs3TxSpectrumModelInfo_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::TxSpectrumModelInfo *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3TxSpectrumModelInfo__tp_richcompare (PyNs3TxSpectrumModelInfo *PYBINDGEN_UNUSED(self), PyNs3TxSpectrumModelInfo *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3TxSpectrumModelInfo_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3TxSpectrumModelInfo_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.TxSpectrumModelInfo",            /* tp_name */
    sizeof(PyNs3TxSpectrumModelInfo),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3TxSpectrumModelInfo__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3TxSpectrumModelInfo__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3TxSpectrumModelInfo_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    PyNs3TxSpectrumModelInfo__getsets,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3TxSpectrumModelInfo__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};



std::map<void*, PyObject*> PyNs3WifiSpectrumValue5MhzFactory_wrapper_registry;

ns3::Ptr< ns3::SpectrumValue >
PyNs3WifiSpectrumValue5MhzFactory__PythonHelper::CreateConstant(double psd)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WifiSpectrumValue5MhzFactory *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumValue > retval;
    PyNs3SpectrumValue *tmp_SpectrumValue;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "CreateConstant"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiSpectrumValue5MhzFactory::CreateConstant(psd);
    }
    self_obj_before = reinterpret_cast< PyNs3WifiSpectrumValue5MhzFactory* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WifiSpectrumValue5MhzFactory* >(m_pyself)->obj = (ns3::WifiSpectrumValue5MhzFactory*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "CreateConstant", (char *) "d", psd);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WifiSpectrumValue5MhzFactory* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiSpectrumValue5MhzFactory::CreateConstant(psd);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SpectrumValue_Type, &tmp_SpectrumValue)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WifiSpectrumValue5MhzFactory* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiSpectrumValue5MhzFactory::CreateConstant(psd);
    }
    // dangerous!
    retval = ns3::Ptr< ns3::SpectrumValue  > (tmp_SpectrumValue->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WifiSpectrumValue5MhzFactory* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::SpectrumValue >
PyNs3WifiSpectrumValue5MhzFactory__PythonHelper::CreateRfFilter(uint32_t channel)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WifiSpectrumValue5MhzFactory *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumValue > retval;
    PyNs3SpectrumValue *tmp_SpectrumValue;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "CreateRfFilter"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiSpectrumValue5MhzFactory::CreateRfFilter(channel);
    }
    self_obj_before = reinterpret_cast< PyNs3WifiSpectrumValue5MhzFactory* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WifiSpectrumValue5MhzFactory* >(m_pyself)->obj = (ns3::WifiSpectrumValue5MhzFactory*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "CreateRfFilter", (char *) "N", PyLong_FromUnsignedLong(channel));
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WifiSpectrumValue5MhzFactory* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiSpectrumValue5MhzFactory::CreateRfFilter(channel);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SpectrumValue_Type, &tmp_SpectrumValue)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WifiSpectrumValue5MhzFactory* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiSpectrumValue5MhzFactory::CreateRfFilter(channel);
    }
    // dangerous!
    retval = ns3::Ptr< ns3::SpectrumValue  > (tmp_SpectrumValue->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WifiSpectrumValue5MhzFactory* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::SpectrumValue >
PyNs3WifiSpectrumValue5MhzFactory__PythonHelper::CreateTxPowerSpectralDensity(double txPower, uint32_t channel)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WifiSpectrumValue5MhzFactory *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumValue > retval;
    PyNs3SpectrumValue *tmp_SpectrumValue;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "CreateTxPowerSpectralDensity"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiSpectrumValue5MhzFactory::CreateTxPowerSpectralDensity(txPower, channel);
    }
    self_obj_before = reinterpret_cast< PyNs3WifiSpectrumValue5MhzFactory* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WifiSpectrumValue5MhzFactory* >(m_pyself)->obj = (ns3::WifiSpectrumValue5MhzFactory*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "CreateTxPowerSpectralDensity", (char *) "dN", txPower, PyLong_FromUnsignedLong(channel));
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WifiSpectrumValue5MhzFactory* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiSpectrumValue5MhzFactory::CreateTxPowerSpectralDensity(txPower, channel);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SpectrumValue_Type, &tmp_SpectrumValue)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WifiSpectrumValue5MhzFactory* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiSpectrumValue5MhzFactory::CreateTxPowerSpectralDensity(txPower, channel);
    }
    // dangerous!
    retval = ns3::Ptr< ns3::SpectrumValue  > (tmp_SpectrumValue->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WifiSpectrumValue5MhzFactory* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}


static int
_wrap_PyNs3WifiSpectrumValue5MhzFactory__tp_init__0(PyNs3WifiSpectrumValue5MhzFactory *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3WifiSpectrumValue5MhzFactory_Type)
    {
        self->obj = new PyNs3WifiSpectrumValue5MhzFactory__PythonHelper();
        ((PyNs3WifiSpectrumValue5MhzFactory__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::WifiSpectrumValue5MhzFactory();
    }
    return 0;
}

static int
_wrap_PyNs3WifiSpectrumValue5MhzFactory__tp_init__1(PyNs3WifiSpectrumValue5MhzFactory *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3WifiSpectrumValue5MhzFactory *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3WifiSpectrumValue5MhzFactory_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3WifiSpectrumValue5MhzFactory_Type)
    {
        self->obj = new PyNs3WifiSpectrumValue5MhzFactory__PythonHelper(*((PyNs3WifiSpectrumValue5MhzFactory *) arg0)->obj);
        ((PyNs3WifiSpectrumValue5MhzFactory__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::WifiSpectrumValue5MhzFactory(*((PyNs3WifiSpectrumValue5MhzFactory *) arg0)->obj);
    }
    return 0;
}

int _wrap_PyNs3WifiSpectrumValue5MhzFactory__tp_init(PyNs3WifiSpectrumValue5MhzFactory *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3WifiSpectrumValue5MhzFactory__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3WifiSpectrumValue5MhzFactory__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3WifiSpectrumValue5MhzFactory_CreateRfFilter(PyNs3WifiSpectrumValue5MhzFactory *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumValue > retval;
    unsigned int channel;
    PyNs3WifiSpectrumValue5MhzFactory__PythonHelper *helper_class = dynamic_cast<PyNs3WifiSpectrumValue5MhzFactory__PythonHelper*> (self->obj);
    const char *keywords[] = {"channel", NULL};
    PyNs3SpectrumValue *py_SpectrumValue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &channel)) {
        return NULL;
    }
    retval = (helper_class == NULL)? (self->obj->CreateRfFilter(channel)) : (self->obj->ns3::WifiSpectrumValue5MhzFactory::CreateRfFilter(channel));
    if (!(const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumValue = NULL;
    } else {
        py_SpectrumValue = (PyNs3SpectrumValue *) wrapper_lookup_iter->second;
        Py_INCREF(py_SpectrumValue);
    }
    
    if (py_SpectrumValue == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)))), &PyNs3SpectrumValue_Type);
        py_SpectrumValue = PyObject_New(PyNs3SpectrumValue, wrapper_type);
        py_SpectrumValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval))->Ref();
        py_SpectrumValue->obj = const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumValue->obj] = (PyObject *) py_SpectrumValue;
    }
    py_retval = Py_BuildValue((char *) "N", py_SpectrumValue);
    return py_retval;
}


PyObject *
_wrap_PyNs3WifiSpectrumValue5MhzFactory_CreateTxPowerSpectralDensity(PyNs3WifiSpectrumValue5MhzFactory *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumValue > retval;
    double txPower;
    unsigned int channel;
    PyNs3WifiSpectrumValue5MhzFactory__PythonHelper *helper_class = dynamic_cast<PyNs3WifiSpectrumValue5MhzFactory__PythonHelper*> (self->obj);
    const char *keywords[] = {"txPower", "channel", NULL};
    PyNs3SpectrumValue *py_SpectrumValue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "dI", (char **) keywords, &txPower, &channel)) {
        return NULL;
    }
    retval = (helper_class == NULL)? (self->obj->CreateTxPowerSpectralDensity(txPower, channel)) : (self->obj->ns3::WifiSpectrumValue5MhzFactory::CreateTxPowerSpectralDensity(txPower, channel));
    if (!(const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumValue = NULL;
    } else {
        py_SpectrumValue = (PyNs3SpectrumValue *) wrapper_lookup_iter->second;
        Py_INCREF(py_SpectrumValue);
    }
    
    if (py_SpectrumValue == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)))), &PyNs3SpectrumValue_Type);
        py_SpectrumValue = PyObject_New(PyNs3SpectrumValue, wrapper_type);
        py_SpectrumValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval))->Ref();
        py_SpectrumValue->obj = const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumValue->obj] = (PyObject *) py_SpectrumValue;
    }
    py_retval = Py_BuildValue((char *) "N", py_SpectrumValue);
    return py_retval;
}


PyObject *
_wrap_PyNs3WifiSpectrumValue5MhzFactory_CreateConstant(PyNs3WifiSpectrumValue5MhzFactory *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumValue > retval;
    double psd;
    PyNs3WifiSpectrumValue5MhzFactory__PythonHelper *helper_class = dynamic_cast<PyNs3WifiSpectrumValue5MhzFactory__PythonHelper*> (self->obj);
    const char *keywords[] = {"psd", NULL};
    PyNs3SpectrumValue *py_SpectrumValue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "d", (char **) keywords, &psd)) {
        return NULL;
    }
    retval = (helper_class == NULL)? (self->obj->CreateConstant(psd)) : (self->obj->ns3::WifiSpectrumValue5MhzFactory::CreateConstant(psd));
    if (!(const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumValue = NULL;
    } else {
        py_SpectrumValue = (PyNs3SpectrumValue *) wrapper_lookup_iter->second;
        Py_INCREF(py_SpectrumValue);
    }
    
    if (py_SpectrumValue == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)))), &PyNs3SpectrumValue_Type);
        py_SpectrumValue = PyObject_New(PyNs3SpectrumValue, wrapper_type);
        py_SpectrumValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval))->Ref();
        py_SpectrumValue->obj = const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumValue->obj] = (PyObject *) py_SpectrumValue;
    }
    py_retval = Py_BuildValue((char *) "N", py_SpectrumValue);
    return py_retval;
}


static PyObject*
_wrap_PyNs3WifiSpectrumValue5MhzFactory__copy__(PyNs3WifiSpectrumValue5MhzFactory *self)
{

    PyNs3WifiSpectrumValue5MhzFactory *py_copy;
    py_copy = PyObject_GC_New(PyNs3WifiSpectrumValue5MhzFactory, &PyNs3WifiSpectrumValue5MhzFactory_Type);
    py_copy->obj = new ns3::WifiSpectrumValue5MhzFactory(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3WifiSpectrumValue5MhzFactory_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3WifiSpectrumValue5MhzFactory_methods[] = {
    {(char *) "CreateRfFilter", (PyCFunction) _wrap_PyNs3WifiSpectrumValue5MhzFactory_CreateRfFilter, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "CreateTxPowerSpectralDensity", (PyCFunction) _wrap_PyNs3WifiSpectrumValue5MhzFactory_CreateTxPowerSpectralDensity, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "CreateConstant", (PyCFunction) _wrap_PyNs3WifiSpectrumValue5MhzFactory_CreateConstant, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3WifiSpectrumValue5MhzFactory__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3WifiSpectrumValue5MhzFactory__tp_clear(PyNs3WifiSpectrumValue5MhzFactory *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::WifiSpectrumValue5MhzFactory *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3WifiSpectrumValue5MhzFactory__tp_traverse(PyNs3WifiSpectrumValue5MhzFactory *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3WifiSpectrumValue5MhzFactory__PythonHelper) )
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3WifiSpectrumValue5MhzFactory__tp_dealloc(PyNs3WifiSpectrumValue5MhzFactory *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3WifiSpectrumValue5MhzFactory_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3WifiSpectrumValue5MhzFactory_wrapper_registry.end()) {
        PyNs3WifiSpectrumValue5MhzFactory_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3WifiSpectrumValue5MhzFactory__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3WifiSpectrumValue5MhzFactory__tp_richcompare (PyNs3WifiSpectrumValue5MhzFactory *PYBINDGEN_UNUSED(self), PyNs3WifiSpectrumValue5MhzFactory *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3WifiSpectrumValue5MhzFactory_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3WifiSpectrumValue5MhzFactory_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.WifiSpectrumValue5MhzFactory",            /* tp_name */
    sizeof(PyNs3WifiSpectrumValue5MhzFactory),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3WifiSpectrumValue5MhzFactory__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3WifiSpectrumValue5MhzFactory__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3WifiSpectrumValue5MhzFactory__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3WifiSpectrumValue5MhzFactory__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3WifiSpectrumValue5MhzFactory_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3WifiSpectrumValue5MhzFactory, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3WifiSpectrumValue5MhzFactory__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};



std::map<void*, PyObject*> PyNs3WifiSpectrumValueHelper_wrapper_registry;

ns3::Ptr< ns3::SpectrumValue >
PyNs3WifiSpectrumValueHelper__PythonHelper::CreateConstant(double psd)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WifiSpectrumValueHelper *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumValue > retval;
    PyNs3SpectrumValue *tmp_SpectrumValue;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "CreateConstant"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3WifiSpectrumValueHelper* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WifiSpectrumValueHelper* >(m_pyself)->obj = (ns3::WifiSpectrumValueHelper*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "CreateConstant", (char *) "d", psd);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WifiSpectrumValueHelper* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SpectrumValue_Type, &tmp_SpectrumValue)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WifiSpectrumValueHelper* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    // dangerous!
    retval = ns3::Ptr< ns3::SpectrumValue  > (tmp_SpectrumValue->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WifiSpectrumValueHelper* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::SpectrumValue >
PyNs3WifiSpectrumValueHelper__PythonHelper::CreateRfFilter(uint32_t channel)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WifiSpectrumValueHelper *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumValue > retval;
    PyNs3SpectrumValue *tmp_SpectrumValue;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "CreateRfFilter"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3WifiSpectrumValueHelper* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WifiSpectrumValueHelper* >(m_pyself)->obj = (ns3::WifiSpectrumValueHelper*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "CreateRfFilter", (char *) "N", PyLong_FromUnsignedLong(channel));
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WifiSpectrumValueHelper* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SpectrumValue_Type, &tmp_SpectrumValue)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WifiSpectrumValueHelper* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    // dangerous!
    retval = ns3::Ptr< ns3::SpectrumValue  > (tmp_SpectrumValue->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WifiSpectrumValueHelper* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::SpectrumValue >
PyNs3WifiSpectrumValueHelper__PythonHelper::CreateTxPowerSpectralDensity(double txPower, uint32_t channel)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WifiSpectrumValueHelper *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumValue > retval;
    PyNs3SpectrumValue *tmp_SpectrumValue;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "CreateTxPowerSpectralDensity"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3WifiSpectrumValueHelper* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WifiSpectrumValueHelper* >(m_pyself)->obj = (ns3::WifiSpectrumValueHelper*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "CreateTxPowerSpectralDensity", (char *) "dN", txPower, PyLong_FromUnsignedLong(channel));
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WifiSpectrumValueHelper* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SpectrumValue_Type, &tmp_SpectrumValue)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WifiSpectrumValueHelper* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    // dangerous!
    retval = ns3::Ptr< ns3::SpectrumValue  > (tmp_SpectrumValue->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WifiSpectrumValueHelper* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}


static int
_wrap_PyNs3WifiSpectrumValueHelper__tp_init__0(PyNs3WifiSpectrumValueHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3WifiSpectrumValueHelper_Type)
    {
        self->obj = new PyNs3WifiSpectrumValueHelper__PythonHelper();
        ((PyNs3WifiSpectrumValueHelper__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        PyErr_SetString(PyExc_TypeError, "class 'WifiSpectrumValueHelper' cannot be constructed");
        return -1;
    }
    return 0;
}

static int
_wrap_PyNs3WifiSpectrumValueHelper__tp_init__1(PyNs3WifiSpectrumValueHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3WifiSpectrumValueHelper *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3WifiSpectrumValueHelper_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3WifiSpectrumValueHelper_Type)
    {
        self->obj = new PyNs3WifiSpectrumValueHelper__PythonHelper(*((PyNs3WifiSpectrumValueHelper *) arg0)->obj);
        ((PyNs3WifiSpectrumValueHelper__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        PyErr_SetString(PyExc_TypeError, "class 'WifiSpectrumValueHelper' cannot be constructed");
        return -1;
    }
    return 0;
}

int _wrap_PyNs3WifiSpectrumValueHelper__tp_init(PyNs3WifiSpectrumValueHelper *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3WifiSpectrumValueHelper__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3WifiSpectrumValueHelper__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3WifiSpectrumValueHelper_CreateRfFilter(PyNs3WifiSpectrumValueHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumValue > retval;
    unsigned int channel;
    const char *keywords[] = {"channel", NULL};
    PyNs3SpectrumValue *py_SpectrumValue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &channel)) {
        return NULL;
    }
    retval = self->obj->CreateRfFilter(channel);
    if (!(const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumValue = NULL;
    } else {
        py_SpectrumValue = (PyNs3SpectrumValue *) wrapper_lookup_iter->second;
        Py_INCREF(py_SpectrumValue);
    }
    
    if (py_SpectrumValue == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)))), &PyNs3SpectrumValue_Type);
        py_SpectrumValue = PyObject_New(PyNs3SpectrumValue, wrapper_type);
        py_SpectrumValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval))->Ref();
        py_SpectrumValue->obj = const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumValue->obj] = (PyObject *) py_SpectrumValue;
    }
    py_retval = Py_BuildValue((char *) "N", py_SpectrumValue);
    return py_retval;
}


PyObject *
_wrap_PyNs3WifiSpectrumValueHelper_CreateTxPowerSpectralDensity(PyNs3WifiSpectrumValueHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumValue > retval;
    double txPower;
    unsigned int channel;
    const char *keywords[] = {"txPower", "channel", NULL};
    PyNs3SpectrumValue *py_SpectrumValue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "dI", (char **) keywords, &txPower, &channel)) {
        return NULL;
    }
    retval = self->obj->CreateTxPowerSpectralDensity(txPower, channel);
    if (!(const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumValue = NULL;
    } else {
        py_SpectrumValue = (PyNs3SpectrumValue *) wrapper_lookup_iter->second;
        Py_INCREF(py_SpectrumValue);
    }
    
    if (py_SpectrumValue == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)))), &PyNs3SpectrumValue_Type);
        py_SpectrumValue = PyObject_New(PyNs3SpectrumValue, wrapper_type);
        py_SpectrumValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval))->Ref();
        py_SpectrumValue->obj = const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumValue->obj] = (PyObject *) py_SpectrumValue;
    }
    py_retval = Py_BuildValue((char *) "N", py_SpectrumValue);
    return py_retval;
}


PyObject *
_wrap_PyNs3WifiSpectrumValueHelper_CreateConstant(PyNs3WifiSpectrumValueHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumValue > retval;
    double psd;
    const char *keywords[] = {"psd", NULL};
    PyNs3SpectrumValue *py_SpectrumValue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "d", (char **) keywords, &psd)) {
        return NULL;
    }
    retval = self->obj->CreateConstant(psd);
    if (!(const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumValue = NULL;
    } else {
        py_SpectrumValue = (PyNs3SpectrumValue *) wrapper_lookup_iter->second;
        Py_INCREF(py_SpectrumValue);
    }
    
    if (py_SpectrumValue == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval)))), &PyNs3SpectrumValue_Type);
        py_SpectrumValue = PyObject_New(PyNs3SpectrumValue, wrapper_type);
        py_SpectrumValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval))->Ref();
        py_SpectrumValue->obj = const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumValue->obj] = (PyObject *) py_SpectrumValue;
    }
    py_retval = Py_BuildValue((char *) "N", py_SpectrumValue);
    return py_retval;
}

static PyMethodDef PyNs3WifiSpectrumValueHelper_methods[] = {
    {(char *) "CreateRfFilter", (PyCFunction) _wrap_PyNs3WifiSpectrumValueHelper_CreateRfFilter, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "CreateTxPowerSpectralDensity", (PyCFunction) _wrap_PyNs3WifiSpectrumValueHelper_CreateTxPowerSpectralDensity, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "CreateConstant", (PyCFunction) _wrap_PyNs3WifiSpectrumValueHelper_CreateConstant, METH_KEYWORDS|METH_VARARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3WifiSpectrumValueHelper__tp_clear(PyNs3WifiSpectrumValueHelper *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::WifiSpectrumValueHelper *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3WifiSpectrumValueHelper__tp_traverse(PyNs3WifiSpectrumValueHelper *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3WifiSpectrumValueHelper__PythonHelper) )
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3WifiSpectrumValueHelper__tp_dealloc(PyNs3WifiSpectrumValueHelper *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3WifiSpectrumValueHelper_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3WifiSpectrumValueHelper_wrapper_registry.end()) {
        PyNs3WifiSpectrumValueHelper_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3WifiSpectrumValueHelper__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3WifiSpectrumValueHelper__tp_richcompare (PyNs3WifiSpectrumValueHelper *PYBINDGEN_UNUSED(self), PyNs3WifiSpectrumValueHelper *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3WifiSpectrumValueHelper_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3WifiSpectrumValueHelper_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.WifiSpectrumValueHelper",            /* tp_name */
    sizeof(PyNs3WifiSpectrumValueHelper),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3WifiSpectrumValueHelper__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3WifiSpectrumValueHelper__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3WifiSpectrumValueHelper__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3WifiSpectrumValueHelper__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3WifiSpectrumValueHelper_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3WifiSpectrumValueHelper, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3WifiSpectrumValueHelper__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3SpectrumErrorModel__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3SpectrumErrorModel *self)
{
    PyObject *py_retval;
    PyNs3SpectrumErrorModel__PythonHelper *helper = dynamic_cast< PyNs3SpectrumErrorModel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3SpectrumErrorModel__PythonHelper::_wrap_NotifyNewAggregate(PyNs3SpectrumErrorModel *self)
{
    PyObject *py_retval;
    PyNs3SpectrumErrorModel__PythonHelper *helper = dynamic_cast< PyNs3SpectrumErrorModel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3SpectrumErrorModel__PythonHelper::_wrap_DoStart(PyNs3SpectrumErrorModel *self)
{
    PyObject *py_retval;
    PyNs3SpectrumErrorModel__PythonHelper *helper = dynamic_cast< PyNs3SpectrumErrorModel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoStart of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoStart__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3SpectrumErrorModel__PythonHelper::_wrap_DoDispose(PyNs3SpectrumErrorModel *self)
{
    PyObject *py_retval;
    PyNs3SpectrumErrorModel__PythonHelper *helper = dynamic_cast< PyNs3SpectrumErrorModel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3SpectrumErrorModel__PythonHelper::EvaluateChunk(ns3::SpectrumValue const & sinr, ns3::Time duration)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SpectrumErrorModel *self_obj_before;
    PyObject *py_retval;
    PyNs3SpectrumValue *py_SpectrumValue;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "EvaluateChunk"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SpectrumErrorModel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SpectrumErrorModel* >(m_pyself)->obj = (ns3::SpectrumErrorModel*) this;
    py_SpectrumValue = PyObject_New(PyNs3SpectrumValue, &PyNs3SpectrumValue_Type);
    py_SpectrumValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_SpectrumValue->obj = new ns3::SpectrumValue(sinr);
    PyNs3Empty_wrapper_registry[(void *) py_SpectrumValue->obj] = (PyObject *) py_SpectrumValue;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(duration);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "EvaluateChunk", (char *) "NN", py_SpectrumValue, py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

bool
PyNs3SpectrumErrorModel__PythonHelper::IsRxCorrect()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SpectrumErrorModel *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsRxCorrect"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3SpectrumErrorModel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SpectrumErrorModel* >(m_pyself)->obj = (ns3::SpectrumErrorModel*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsRxCorrect", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3SpectrumErrorModel__PythonHelper::StartRx(ns3::Ptr< ns3::Packet const > p)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SpectrumErrorModel *self_obj_before;
    PyObject *py_retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StartRx"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SpectrumErrorModel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SpectrumErrorModel* >(m_pyself)->obj = (ns3::SpectrumErrorModel*) this;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::Packet *> (ns3::PeekPointer (p)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_Packet = NULL;
    } else {
        py_Packet = (PyNs3Packet *) wrapper_lookup_iter->second;
        Py_INCREF(py_Packet);
    }
    
    if (py_Packet == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Packet *> (ns3::PeekPointer (p))), &PyNs3Packet_Type);
        py_Packet = PyObject_New(PyNs3Packet, wrapper_type);
        py_Packet->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::Packet *> (ns3::PeekPointer (p))->Ref();
        py_Packet->obj = const_cast<ns3::Packet *> (ns3::PeekPointer (p));
        PyNs3Empty_wrapper_registry[(void *) py_Packet->obj] = (PyObject *) py_Packet;
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StartRx", (char *) "N", py_Packet);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3SpectrumErrorModel__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3SpectrumErrorModel__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SpectrumErrorModel__PythonHelper::DoStart()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::DoStart();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoStart", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SpectrumErrorModel__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SpectrumErrorModel__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3SpectrumErrorModel__tp_init__0(PyNs3SpectrumErrorModel *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3SpectrumErrorModel_Type)
    {
        self->obj = new PyNs3SpectrumErrorModel__PythonHelper();
        self->obj->Ref ();
        ((PyNs3SpectrumErrorModel__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        PyErr_SetString(PyExc_TypeError, "class 'SpectrumErrorModel' cannot be constructed");
        return -1;
    }
    return 0;
}

static int
_wrap_PyNs3SpectrumErrorModel__tp_init__1(PyNs3SpectrumErrorModel *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3SpectrumErrorModel *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumErrorModel_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3SpectrumErrorModel_Type)
    {
        self->obj = new PyNs3SpectrumErrorModel__PythonHelper(*((PyNs3SpectrumErrorModel *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3SpectrumErrorModel__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        PyErr_SetString(PyExc_TypeError, "class 'SpectrumErrorModel' cannot be constructed");
        return -1;
    }
    return 0;
}

int _wrap_PyNs3SpectrumErrorModel__tp_init(PyNs3SpectrumErrorModel *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3SpectrumErrorModel__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3SpectrumErrorModel__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3SpectrumErrorModel_IsRxCorrect(PyNs3SpectrumErrorModel *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsRxCorrect();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3SpectrumErrorModel_EvaluateChunk(PyNs3SpectrumErrorModel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SpectrumValue *sinr;
    PyObject *duration;
    ns3::Time duration2;
    const char *keywords[] = {"sinr", "duration", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O", (char **) keywords, &PyNs3SpectrumValue_Type, &sinr, &duration)) {
        return NULL;
    }
    if (PyObject_IsInstance(duration, (PyObject*) &PyNs3Time_Type)) {
        duration2 = *((PyNs3Time *) duration)->obj;
    } else if (PyObject_IsInstance(duration, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        duration2 = *((PyNs3TracedValue__Ns3Time *) duration)->obj;
    } else if (PyObject_IsInstance(duration, (PyObject*) &PyNs3Scalar_Type)) {
        duration2 = *((PyNs3Scalar *) duration)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", duration->ob_type->tp_name);
        return NULL;
    }
    self->obj->EvaluateChunk(*((PyNs3SpectrumValue *) sinr)->obj, duration2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3SpectrumErrorModel_StartRx(PyNs3SpectrumErrorModel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Packet *p;
    ns3::Packet *p_ptr;
    const char *keywords[] = {"p", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Packet_Type, &p)) {
        return NULL;
    }
    p_ptr = (p ? p->obj : NULL);
    self->obj->StartRx(ns3::Ptr< ns3::Packet  > (p_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

static PyMethodDef PyNs3SpectrumErrorModel_methods[] = {
    {(char *) "IsRxCorrect", (PyCFunction) _wrap_PyNs3SpectrumErrorModel_IsRxCorrect, METH_NOARGS, NULL },
    {(char *) "EvaluateChunk", (PyCFunction) _wrap_PyNs3SpectrumErrorModel_EvaluateChunk, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "StartRx", (PyCFunction) _wrap_PyNs3SpectrumErrorModel_StartRx, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3SpectrumErrorModel__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3SpectrumErrorModel__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3SpectrumErrorModel__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3SpectrumErrorModel__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3SpectrumErrorModel__tp_clear(PyNs3SpectrumErrorModel *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::SpectrumErrorModel *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3SpectrumErrorModel__tp_traverse(PyNs3SpectrumErrorModel *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3SpectrumErrorModel__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3SpectrumErrorModel__tp_dealloc(PyNs3SpectrumErrorModel *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3SpectrumErrorModel__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3SpectrumErrorModel__tp_richcompare (PyNs3SpectrumErrorModel *PYBINDGEN_UNUSED(self), PyNs3SpectrumErrorModel *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3SpectrumErrorModel_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3SpectrumErrorModel_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.SpectrumErrorModel",            /* tp_name */
    sizeof(PyNs3SpectrumErrorModel),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3SpectrumErrorModel__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3SpectrumErrorModel__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3SpectrumErrorModel__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3SpectrumErrorModel__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3SpectrumErrorModel_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3SpectrumErrorModel, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3SpectrumErrorModel__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3SpectrumInterference__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3SpectrumInterference *self)
{
    PyObject *py_retval;
    PyNs3SpectrumInterference__PythonHelper *helper = dynamic_cast< PyNs3SpectrumInterference__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3SpectrumInterference__PythonHelper::_wrap_NotifyNewAggregate(PyNs3SpectrumInterference *self)
{
    PyObject *py_retval;
    PyNs3SpectrumInterference__PythonHelper *helper = dynamic_cast< PyNs3SpectrumInterference__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3SpectrumInterference__PythonHelper::_wrap_DoStart(PyNs3SpectrumInterference *self)
{
    PyObject *py_retval;
    PyNs3SpectrumInterference__PythonHelper *helper = dynamic_cast< PyNs3SpectrumInterference__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoStart of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoStart__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3SpectrumInterference__PythonHelper::_wrap_DoDispose(PyNs3SpectrumInterference *self)
{
    PyObject *py_retval;
    PyNs3SpectrumInterference__PythonHelper *helper = dynamic_cast< PyNs3SpectrumInterference__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class SpectrumInterference is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3SpectrumInterference__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SpectrumInterference *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::SpectrumInterference::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SpectrumInterference* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SpectrumInterference* >(m_pyself)->obj = (ns3::SpectrumInterference*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SpectrumInterference* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SpectrumInterference* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SpectrumInterference* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3SpectrumInterference__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3SpectrumInterference__PythonHelper::DoStart()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::DoStart();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoStart", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SpectrumInterference__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SpectrumInterference__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3SpectrumInterference__tp_init__0(PyNs3SpectrumInterference *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3SpectrumInterference *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumInterference_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3SpectrumInterference_Type)
    {
        self->obj = new PyNs3SpectrumInterference__PythonHelper(*((PyNs3SpectrumInterference *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3SpectrumInterference__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::SpectrumInterference(*((PyNs3SpectrumInterference *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3SpectrumInterference__tp_init__1(PyNs3SpectrumInterference *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3SpectrumInterference_Type)
    {
        self->obj = new PyNs3SpectrumInterference__PythonHelper();
        self->obj->Ref ();
        ((PyNs3SpectrumInterference__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::SpectrumInterference();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3SpectrumInterference__tp_init(PyNs3SpectrumInterference *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3SpectrumInterference__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3SpectrumInterference__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3SpectrumInterference_AddSignal(PyNs3SpectrumInterference *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SpectrumValue *spd;
    ns3::SpectrumValue *spd_ptr;
    PyObject *duration;
    ns3::Time duration2;
    const char *keywords[] = {"spd", "duration", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O", (char **) keywords, &PyNs3SpectrumValue_Type, &spd, &duration)) {
        return NULL;
    }
    spd_ptr = (spd ? spd->obj : NULL);
    if (PyObject_IsInstance(duration, (PyObject*) &PyNs3Time_Type)) {
        duration2 = *((PyNs3Time *) duration)->obj;
    } else if (PyObject_IsInstance(duration, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        duration2 = *((PyNs3TracedValue__Ns3Time *) duration)->obj;
    } else if (PyObject_IsInstance(duration, (PyObject*) &PyNs3Scalar_Type)) {
        duration2 = *((PyNs3Scalar *) duration)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", duration->ob_type->tp_name);
        return NULL;
    }
    self->obj->AddSignal(ns3::Ptr< ns3::SpectrumValue  > (spd_ptr), duration2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3SpectrumInterference_EndRx(PyNs3SpectrumInterference *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->EndRx();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3SpectrumInterference_SetNoisePowerSpectralDensity(PyNs3SpectrumInterference *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SpectrumValue *noisePsd;
    ns3::SpectrumValue *noisePsd_ptr;
    const char *keywords[] = {"noisePsd", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumValue_Type, &noisePsd)) {
        return NULL;
    }
    noisePsd_ptr = (noisePsd ? noisePsd->obj : NULL);
    self->obj->SetNoisePowerSpectralDensity(ns3::Ptr< ns3::SpectrumValue  > (noisePsd_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3SpectrumInterference_SetErrorModel(PyNs3SpectrumInterference *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SpectrumErrorModel *e;
    ns3::SpectrumErrorModel *e_ptr;
    const char *keywords[] = {"e", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumErrorModel_Type, &e)) {
        return NULL;
    }
    e_ptr = (e ? e->obj : NULL);
    self->obj->SetErrorModel(ns3::Ptr< ns3::SpectrumErrorModel  > (e_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3SpectrumInterference_StartRx(PyNs3SpectrumInterference *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Packet *p;
    ns3::Packet *p_ptr;
    PyNs3SpectrumValue *rxPsd;
    ns3::SpectrumValue *rxPsd_ptr;
    const char *keywords[] = {"p", "rxPsd", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!", (char **) keywords, &PyNs3Packet_Type, &p, &PyNs3SpectrumValue_Type, &rxPsd)) {
        return NULL;
    }
    p_ptr = (p ? p->obj : NULL);
    rxPsd_ptr = (rxPsd ? rxPsd->obj : NULL);
    self->obj->StartRx(ns3::Ptr< ns3::Packet  > (p_ptr), ns3::Ptr< ns3::SpectrumValue  > (rxPsd_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3SpectrumInterference__copy__(PyNs3SpectrumInterference *self)
{

    PyNs3SpectrumInterference *py_copy;
    py_copy = PyObject_GC_New(PyNs3SpectrumInterference, &PyNs3SpectrumInterference_Type);
    py_copy->obj = new ns3::SpectrumInterference(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3SpectrumInterference_methods[] = {
    {(char *) "AddSignal", (PyCFunction) _wrap_PyNs3SpectrumInterference_AddSignal, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "EndRx", (PyCFunction) _wrap_PyNs3SpectrumInterference_EndRx, METH_NOARGS, NULL },
    {(char *) "SetNoisePowerSpectralDensity", (PyCFunction) _wrap_PyNs3SpectrumInterference_SetNoisePowerSpectralDensity, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetErrorModel", (PyCFunction) _wrap_PyNs3SpectrumInterference_SetErrorModel, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "StartRx", (PyCFunction) _wrap_PyNs3SpectrumInterference_StartRx, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3SpectrumInterference__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3SpectrumInterference__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3SpectrumInterference__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3SpectrumInterference__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3SpectrumInterference__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3SpectrumInterference__tp_clear(PyNs3SpectrumInterference *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::SpectrumInterference *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3SpectrumInterference__tp_traverse(PyNs3SpectrumInterference *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3SpectrumInterference__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3SpectrumInterference__tp_dealloc(PyNs3SpectrumInterference *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3SpectrumInterference__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3SpectrumInterference__tp_richcompare (PyNs3SpectrumInterference *PYBINDGEN_UNUSED(self), PyNs3SpectrumInterference *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3SpectrumInterference_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3SpectrumInterference_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.SpectrumInterference",            /* tp_name */
    sizeof(PyNs3SpectrumInterference),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3SpectrumInterference__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3SpectrumInterference__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3SpectrumInterference__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3SpectrumInterference__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3SpectrumInterference_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3SpectrumInterference, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3SpectrumInterference__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3WaveformGenerator__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3WaveformGenerator *self)
{
    PyObject *py_retval;
    PyNs3WaveformGenerator__PythonHelper *helper = dynamic_cast< PyNs3WaveformGenerator__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3WaveformGenerator__PythonHelper::_wrap_NotifyNewAggregate(PyNs3WaveformGenerator *self)
{
    PyObject *py_retval;
    PyNs3WaveformGenerator__PythonHelper *helper = dynamic_cast< PyNs3WaveformGenerator__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3WaveformGenerator__PythonHelper::_wrap_DoStart(PyNs3WaveformGenerator *self)
{
    PyObject *py_retval;
    PyNs3WaveformGenerator__PythonHelper *helper = dynamic_cast< PyNs3WaveformGenerator__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoStart of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoStart__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

ns3::Ptr< ns3::Object >
PyNs3WaveformGenerator__PythonHelper::GetDevice()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WaveformGenerator *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::Object > retval;
    PyNs3Object *tmp_Object;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetDevice"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WaveformGenerator::GetDevice();
    }
    self_obj_before = reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = (ns3::WaveformGenerator*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetDevice", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WaveformGenerator::GetDevice();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Object_Type, &tmp_Object)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WaveformGenerator::GetDevice();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::Object  > (tmp_Object->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::Object >
PyNs3WaveformGenerator__PythonHelper::GetMobility()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WaveformGenerator *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::Object > retval;
    PyNs3Object *tmp_Object;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetMobility"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WaveformGenerator::GetMobility();
    }
    self_obj_before = reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = (ns3::WaveformGenerator*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetMobility", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WaveformGenerator::GetMobility();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Object_Type, &tmp_Object)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WaveformGenerator::GetMobility();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::Object  > (tmp_Object->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::SpectrumModel const >
PyNs3WaveformGenerator__PythonHelper::GetRxSpectrumModel() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WaveformGenerator *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumModel const > retval;
    PyNs3SpectrumModel *tmp_SpectrumModel;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetRxSpectrumModel"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WaveformGenerator::GetRxSpectrumModel();
    }
    self_obj_before = reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = const_cast< ns3::WaveformGenerator* >((const ns3::WaveformGenerator*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetRxSpectrumModel", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WaveformGenerator::GetRxSpectrumModel();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SpectrumModel_Type, &tmp_SpectrumModel)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WaveformGenerator::GetRxSpectrumModel();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::SpectrumModel  > (tmp_SpectrumModel->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3WaveformGenerator__PythonHelper::SetChannel(ns3::Ptr< ns3::SpectrumChannel > c)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WaveformGenerator *self_obj_before;
    PyObject *py_retval;
    PyNs3SpectrumChannel *py_SpectrumChannel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetChannel"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::WaveformGenerator::SetChannel(c);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = (ns3::WaveformGenerator*) this;
    if (typeid(*(const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c)))) == typeid(PyNs3SpectrumChannel__PythonHelper))
    {
        py_SpectrumChannel = (PyNs3SpectrumChannel*) (((PyNs3SpectrumChannel__PythonHelper*) const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c)))->m_pyself);
        py_SpectrumChannel->obj = const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c));
        Py_INCREF(py_SpectrumChannel);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_SpectrumChannel = NULL;
        } else {
            py_SpectrumChannel = (PyNs3SpectrumChannel *) wrapper_lookup_iter->second;
            Py_INCREF(py_SpectrumChannel);
        }
    
        if (py_SpectrumChannel == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c))), &PyNs3SpectrumChannel_Type);
            py_SpectrumChannel = PyObject_GC_New(PyNs3SpectrumChannel, wrapper_type);
            py_SpectrumChannel->inst_dict = NULL;
            py_SpectrumChannel->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c))->Ref();
            py_SpectrumChannel->obj = const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c));
            PyNs3ObjectBase_wrapper_registry[(void *) py_SpectrumChannel->obj] = (PyObject *) py_SpectrumChannel;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetChannel", (char *) "N", py_SpectrumChannel);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3WaveformGenerator__PythonHelper::SetDevice(ns3::Ptr< ns3::Object > d)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WaveformGenerator *self_obj_before;
    PyObject *py_retval;
    PyNs3Object *py_Object;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetDevice"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::WaveformGenerator::SetDevice(d);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = (ns3::WaveformGenerator*) this;
    if (typeid(*(const_cast<ns3::Object *> (ns3::PeekPointer (d)))) == typeid(PyNs3Object__PythonHelper))
    {
        py_Object = (PyNs3Object*) (((PyNs3Object__PythonHelper*) const_cast<ns3::Object *> (ns3::PeekPointer (d)))->m_pyself);
        py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (d));
        Py_INCREF(py_Object);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Object *> (ns3::PeekPointer (d)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Object = NULL;
        } else {
            py_Object = (PyNs3Object *) wrapper_lookup_iter->second;
            Py_INCREF(py_Object);
        }
    
        if (py_Object == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Object *> (ns3::PeekPointer (d))), &PyNs3Object_Type);
            py_Object = PyObject_GC_New(PyNs3Object, wrapper_type);
            py_Object->inst_dict = NULL;
            py_Object->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Object *> (ns3::PeekPointer (d))->Ref();
            py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (d));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Object->obj] = (PyObject *) py_Object;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetDevice", (char *) "N", py_Object);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3WaveformGenerator__PythonHelper::SetMobility(ns3::Ptr< ns3::Object > m)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WaveformGenerator *self_obj_before;
    PyObject *py_retval;
    PyNs3Object *py_Object;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetMobility"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::WaveformGenerator::SetMobility(m);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = (ns3::WaveformGenerator*) this;
    if (typeid(*(const_cast<ns3::Object *> (ns3::PeekPointer (m)))) == typeid(PyNs3Object__PythonHelper))
    {
        py_Object = (PyNs3Object*) (((PyNs3Object__PythonHelper*) const_cast<ns3::Object *> (ns3::PeekPointer (m)))->m_pyself);
        py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (m));
        Py_INCREF(py_Object);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Object *> (ns3::PeekPointer (m)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Object = NULL;
        } else {
            py_Object = (PyNs3Object *) wrapper_lookup_iter->second;
            Py_INCREF(py_Object);
        }
    
        if (py_Object == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Object *> (ns3::PeekPointer (m))), &PyNs3Object_Type);
            py_Object = PyObject_GC_New(PyNs3Object, wrapper_type);
            py_Object->inst_dict = NULL;
            py_Object->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Object *> (ns3::PeekPointer (m))->Ref();
            py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (m));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Object->obj] = (PyObject *) py_Object;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetMobility", (char *) "N", py_Object);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3WaveformGenerator__PythonHelper::Start()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WaveformGenerator *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Start"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::WaveformGenerator::Start();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = (ns3::WaveformGenerator*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Start", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3WaveformGenerator__PythonHelper::StartRx(ns3::Ptr< ns3::PacketBurst > p, ns3::Ptr< ns3::SpectrumValue const > rxPsd, ns3::SpectrumType st, ns3::Time duration)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WaveformGenerator *self_obj_before;
    PyObject *py_retval;
    PyNs3PacketBurst *py_PacketBurst;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3SpectrumValue *py_SpectrumValue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter2;
    PyTypeObject *wrapper_type2 = 0;
    PyNs3SpectrumType *py_SpectrumType;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StartRx"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::WaveformGenerator::StartRx(p, rxPsd, st, duration);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = (ns3::WaveformGenerator*) this;
    if (typeid(*(const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)))) == typeid(PyNs3PacketBurst__PythonHelper))
    {
        py_PacketBurst = (PyNs3PacketBurst*) (((PyNs3PacketBurst__PythonHelper*) const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)))->m_pyself);
        py_PacketBurst->obj = const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p));
        Py_INCREF(py_PacketBurst);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_PacketBurst = NULL;
        } else {
            py_PacketBurst = (PyNs3PacketBurst *) wrapper_lookup_iter->second;
            Py_INCREF(py_PacketBurst);
        }
    
        if (py_PacketBurst == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p))), &PyNs3PacketBurst_Type);
            py_PacketBurst = PyObject_GC_New(PyNs3PacketBurst, wrapper_type);
            py_PacketBurst->inst_dict = NULL;
            py_PacketBurst->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p))->Ref();
            py_PacketBurst->obj = const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p));
            PyNs3ObjectBase_wrapper_registry[(void *) py_PacketBurst->obj] = (PyObject *) py_PacketBurst;
        }
    }
    wrapper_lookup_iter2 = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPsd)));
    if (wrapper_lookup_iter2 == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumValue = NULL;
    } else {
        py_SpectrumValue = (PyNs3SpectrumValue *) wrapper_lookup_iter2->second;
        Py_INCREF(py_SpectrumValue);
    }
    
    if (py_SpectrumValue == NULL)
    {
        wrapper_type2 = PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPsd))), &PyNs3SpectrumValue_Type);
        py_SpectrumValue = PyObject_New(PyNs3SpectrumValue, wrapper_type2);
        py_SpectrumValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPsd))->Ref();
        py_SpectrumValue->obj = const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPsd));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumValue->obj] = (PyObject *) py_SpectrumValue;
    }
    py_SpectrumType = PyObject_New(PyNs3SpectrumType, &PyNs3SpectrumType_Type);
    py_SpectrumType->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_SpectrumType->obj = new ns3::SpectrumType(st);
    PyNs3SpectrumType_wrapper_registry[(void *) py_SpectrumType->obj] = (PyObject *) py_SpectrumType;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(duration);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StartRx", (char *) "NNNN", py_PacketBurst, py_SpectrumValue, py_SpectrumType, py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3WaveformGenerator__PythonHelper::Stop()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WaveformGenerator *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Stop"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::WaveformGenerator::Stop();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = (ns3::WaveformGenerator*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Stop", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3WaveformGenerator__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WaveformGenerator *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = (ns3::WaveformGenerator*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3WaveformGenerator__PythonHelper::GenerateWaveform()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WaveformGenerator *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GenerateWaveform"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = (ns3::WaveformGenerator*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GenerateWaveform", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WaveformGenerator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3WaveformGenerator__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3WaveformGenerator__PythonHelper::DoStart()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::DoStart();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoStart", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3WaveformGenerator__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3WaveformGenerator__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3WaveformGenerator__tp_init__0(PyNs3WaveformGenerator *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3WaveformGenerator *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3WaveformGenerator_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3WaveformGenerator_Type)
    {
        self->obj = new PyNs3WaveformGenerator__PythonHelper(*((PyNs3WaveformGenerator *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3WaveformGenerator__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::WaveformGenerator(*((PyNs3WaveformGenerator *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3WaveformGenerator__tp_init__1(PyNs3WaveformGenerator *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3WaveformGenerator_Type)
    {
        self->obj = new PyNs3WaveformGenerator__PythonHelper();
        self->obj->Ref ();
        ((PyNs3WaveformGenerator__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::WaveformGenerator();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3WaveformGenerator__tp_init(PyNs3WaveformGenerator *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3WaveformGenerator__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3WaveformGenerator__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3WaveformGenerator_GetRxSpectrumModel(PyNs3WaveformGenerator *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumModel const > retval;
    PyNs3WaveformGenerator__PythonHelper *helper_class = dynamic_cast<PyNs3WaveformGenerator__PythonHelper*> (self->obj);
    PyNs3SpectrumModel *py_SpectrumModel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetRxSpectrumModel()) : (self->obj->ns3::WaveformGenerator::GetRxSpectrumModel());
    if (!(const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumModel = NULL;
    } else {
        py_SpectrumModel = (PyNs3SpectrumModel *) wrapper_lookup_iter->second;
        Py_INCREF(py_SpectrumModel);
    }
    
    if (py_SpectrumModel == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3SpectrumModel_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumModel__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (retval)))), &PyNs3SpectrumModel_Type);
        py_SpectrumModel = PyObject_New(PyNs3SpectrumModel, wrapper_type);
        py_SpectrumModel->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (retval))->Ref();
        py_SpectrumModel->obj = const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumModel->obj] = (PyObject *) py_SpectrumModel;
    }
    py_retval = Py_BuildValue((char *) "N", py_SpectrumModel);
    return py_retval;
}


PyObject *
_wrap_PyNs3WaveformGenerator_SetPeriod(PyNs3WaveformGenerator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *period;
    ns3::Time period2;
    const char *keywords[] = {"period", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &period)) {
        return NULL;
    }
    if (PyObject_IsInstance(period, (PyObject*) &PyNs3Time_Type)) {
        period2 = *((PyNs3Time *) period)->obj;
    } else if (PyObject_IsInstance(period, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        period2 = *((PyNs3TracedValue__Ns3Time *) period)->obj;
    } else if (PyObject_IsInstance(period, (PyObject*) &PyNs3Scalar_Type)) {
        period2 = *((PyNs3Scalar *) period)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", period->ob_type->tp_name);
        return NULL;
    }
    self->obj->SetPeriod(period2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3WaveformGenerator_SetMobility(PyNs3WaveformGenerator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Object *m;
    ns3::Object *m_ptr;
    PyNs3WaveformGenerator__PythonHelper *helper_class = dynamic_cast<PyNs3WaveformGenerator__PythonHelper*> (self->obj);
    const char *keywords[] = {"m", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Object_Type, &m)) {
        return NULL;
    }
    m_ptr = (m ? m->obj : NULL);
    (helper_class == NULL)? (self->obj->SetMobility(ns3::Ptr< ns3::Object  > (m_ptr))) : (self->obj->ns3::WaveformGenerator::SetMobility(ns3::Ptr< ns3::Object  > (m_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3WaveformGenerator_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::WaveformGenerator::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3WaveformGenerator_Stop(PyNs3WaveformGenerator *self)
{
    PyObject *py_retval;
    PyNs3WaveformGenerator__PythonHelper *helper_class = dynamic_cast<PyNs3WaveformGenerator__PythonHelper*> (self->obj);
    
    (helper_class == NULL)? (self->obj->Stop()) : (self->obj->ns3::WaveformGenerator::Stop());
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3WaveformGenerator_Start(PyNs3WaveformGenerator *self)
{
    PyObject *py_retval;
    PyNs3WaveformGenerator__PythonHelper *helper_class = dynamic_cast<PyNs3WaveformGenerator__PythonHelper*> (self->obj);
    
    (helper_class == NULL)? (self->obj->Start()) : (self->obj->ns3::WaveformGenerator::Start());
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3WaveformGenerator_SetChannel(PyNs3WaveformGenerator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SpectrumChannel *c;
    ns3::SpectrumChannel *c_ptr;
    PyNs3WaveformGenerator__PythonHelper *helper_class = dynamic_cast<PyNs3WaveformGenerator__PythonHelper*> (self->obj);
    const char *keywords[] = {"c", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumChannel_Type, &c)) {
        return NULL;
    }
    c_ptr = (c ? c->obj : NULL);
    (helper_class == NULL)? (self->obj->SetChannel(ns3::Ptr< ns3::SpectrumChannel  > (c_ptr))) : (self->obj->ns3::WaveformGenerator::SetChannel(ns3::Ptr< ns3::SpectrumChannel  > (c_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3WaveformGenerator_SetTxPowerSpectralDensity(PyNs3WaveformGenerator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SpectrumValue *txs;
    ns3::SpectrumValue *txs_ptr;
    const char *keywords[] = {"txs", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumValue_Type, &txs)) {
        return NULL;
    }
    txs_ptr = (txs ? txs->obj : NULL);
    self->obj->SetTxPowerSpectralDensity(ns3::Ptr< ns3::SpectrumValue  > (txs_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3WaveformGenerator_GetPeriod(PyNs3WaveformGenerator *self)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = self->obj->GetPeriod();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3WaveformGenerator_GetDutyCycle(PyNs3WaveformGenerator *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->GetDutyCycle();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3WaveformGenerator_SetDevice(PyNs3WaveformGenerator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Object *d;
    ns3::Object *d_ptr;
    PyNs3WaveformGenerator__PythonHelper *helper_class = dynamic_cast<PyNs3WaveformGenerator__PythonHelper*> (self->obj);
    const char *keywords[] = {"d", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Object_Type, &d)) {
        return NULL;
    }
    d_ptr = (d ? d->obj : NULL);
    (helper_class == NULL)? (self->obj->SetDevice(ns3::Ptr< ns3::Object  > (d_ptr))) : (self->obj->ns3::WaveformGenerator::SetDevice(ns3::Ptr< ns3::Object  > (d_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3WaveformGenerator_GetMobility(PyNs3WaveformGenerator *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Object > retval;
    PyNs3WaveformGenerator__PythonHelper *helper_class = dynamic_cast<PyNs3WaveformGenerator__PythonHelper*> (self->obj);
    PyNs3Object *py_Object;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetMobility()) : (self->obj->ns3::WaveformGenerator::GetMobility());
    if (!(const_cast<ns3::Object *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::Object *> (ns3::PeekPointer (retval)))) == typeid(PyNs3Object__PythonHelper))
    {
        py_Object = reinterpret_cast< PyNs3Object* >(reinterpret_cast< PyNs3Object__PythonHelper* >(const_cast<ns3::Object *> (ns3::PeekPointer (retval)))->m_pyself);
        py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (retval));
        Py_INCREF(py_Object);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Object *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Object = NULL;
        } else {
            py_Object = (PyNs3Object *) wrapper_lookup_iter->second;
            Py_INCREF(py_Object);
        }
    
        if (py_Object == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Object *> (ns3::PeekPointer (retval)))), &PyNs3Object_Type);
            py_Object = PyObject_GC_New(PyNs3Object, wrapper_type);
            py_Object->inst_dict = NULL;
            py_Object->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Object *> (ns3::PeekPointer (retval))->Ref();
            py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Object->obj] = (PyObject *) py_Object;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_Object);
    return py_retval;
}


PyObject *
_wrap_PyNs3WaveformGenerator_SetDutyCycle(PyNs3WaveformGenerator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    double value;
    const char *keywords[] = {"value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "d", (char **) keywords, &value)) {
        return NULL;
    }
    self->obj->SetDutyCycle(value);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3WaveformGenerator_GetDevice(PyNs3WaveformGenerator *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Object > retval;
    PyNs3WaveformGenerator__PythonHelper *helper_class = dynamic_cast<PyNs3WaveformGenerator__PythonHelper*> (self->obj);
    PyNs3Object *py_Object;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetDevice()) : (self->obj->ns3::WaveformGenerator::GetDevice());
    if (!(const_cast<ns3::Object *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::Object *> (ns3::PeekPointer (retval)))) == typeid(PyNs3Object__PythonHelper))
    {
        py_Object = reinterpret_cast< PyNs3Object* >(reinterpret_cast< PyNs3Object__PythonHelper* >(const_cast<ns3::Object *> (ns3::PeekPointer (retval)))->m_pyself);
        py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (retval));
        Py_INCREF(py_Object);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Object *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Object = NULL;
        } else {
            py_Object = (PyNs3Object *) wrapper_lookup_iter->second;
            Py_INCREF(py_Object);
        }
    
        if (py_Object == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Object *> (ns3::PeekPointer (retval)))), &PyNs3Object_Type);
            py_Object = PyObject_GC_New(PyNs3Object, wrapper_type);
            py_Object->inst_dict = NULL;
            py_Object->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Object *> (ns3::PeekPointer (retval))->Ref();
            py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Object->obj] = (PyObject *) py_Object;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_Object);
    return py_retval;
}


PyObject *
_wrap_PyNs3WaveformGenerator_GetSpectrumType(PyNs3WaveformGenerator *self)
{
    PyObject *py_retval;
    PyNs3SpectrumType *py_SpectrumType;
    
    ns3::SpectrumType retval = self->obj->GetSpectrumType();
    py_SpectrumType = PyObject_New(PyNs3SpectrumType, &PyNs3SpectrumType_Type);
    py_SpectrumType->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_SpectrumType->obj = new ns3::SpectrumType(retval);
    PyNs3SpectrumType_wrapper_registry[(void *) py_SpectrumType->obj] = (PyObject *) py_SpectrumType;
    py_retval = Py_BuildValue((char *) "N", py_SpectrumType);
    return py_retval;
}


PyObject *
_wrap_PyNs3WaveformGenerator_StartRx(PyNs3WaveformGenerator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3PacketBurst *p;
    ns3::PacketBurst *p_ptr;
    PyNs3SpectrumValue *rxPsd;
    ns3::SpectrumValue *rxPsd_ptr;
    PyNs3SpectrumType *st;
    PyObject *duration;
    ns3::Time duration2;
    PyNs3WaveformGenerator__PythonHelper *helper_class = dynamic_cast<PyNs3WaveformGenerator__PythonHelper*> (self->obj);
    const char *keywords[] = {"p", "rxPsd", "st", "duration", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!O!O", (char **) keywords, &PyNs3PacketBurst_Type, &p, &PyNs3SpectrumValue_Type, &rxPsd, &PyNs3SpectrumType_Type, &st, &duration)) {
        return NULL;
    }
    p_ptr = (p ? p->obj : NULL);
    rxPsd_ptr = (rxPsd ? rxPsd->obj : NULL);
    if (PyObject_IsInstance(duration, (PyObject*) &PyNs3Time_Type)) {
        duration2 = *((PyNs3Time *) duration)->obj;
    } else if (PyObject_IsInstance(duration, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        duration2 = *((PyNs3TracedValue__Ns3Time *) duration)->obj;
    } else if (PyObject_IsInstance(duration, (PyObject*) &PyNs3Scalar_Type)) {
        duration2 = *((PyNs3Scalar *) duration)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", duration->ob_type->tp_name);
        return NULL;
    }
    (helper_class == NULL)? (self->obj->StartRx(ns3::Ptr< ns3::PacketBurst  > (p_ptr), ns3::Ptr< ns3::SpectrumValue  > (rxPsd_ptr), *((PyNs3SpectrumType *) st)->obj, duration2)) : (self->obj->ns3::WaveformGenerator::StartRx(ns3::Ptr< ns3::PacketBurst  > (p_ptr), ns3::Ptr< ns3::SpectrumValue  > (rxPsd_ptr), *((PyNs3SpectrumType *) st)->obj, duration2));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3WaveformGenerator__copy__(PyNs3WaveformGenerator *self)
{

    PyNs3WaveformGenerator *py_copy;
    py_copy = PyObject_GC_New(PyNs3WaveformGenerator, &PyNs3WaveformGenerator_Type);
    py_copy->obj = new ns3::WaveformGenerator(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3WaveformGenerator_methods[] = {
    {(char *) "GetRxSpectrumModel", (PyCFunction) _wrap_PyNs3WaveformGenerator_GetRxSpectrumModel, METH_NOARGS, NULL },
    {(char *) "SetPeriod", (PyCFunction) _wrap_PyNs3WaveformGenerator_SetPeriod, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetMobility", (PyCFunction) _wrap_PyNs3WaveformGenerator_SetMobility, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3WaveformGenerator_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Stop", (PyCFunction) _wrap_PyNs3WaveformGenerator_Stop, METH_NOARGS, NULL },
    {(char *) "Start", (PyCFunction) _wrap_PyNs3WaveformGenerator_Start, METH_NOARGS, NULL },
    {(char *) "SetChannel", (PyCFunction) _wrap_PyNs3WaveformGenerator_SetChannel, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetTxPowerSpectralDensity", (PyCFunction) _wrap_PyNs3WaveformGenerator_SetTxPowerSpectralDensity, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetPeriod", (PyCFunction) _wrap_PyNs3WaveformGenerator_GetPeriod, METH_NOARGS, NULL },
    {(char *) "GetDutyCycle", (PyCFunction) _wrap_PyNs3WaveformGenerator_GetDutyCycle, METH_NOARGS, NULL },
    {(char *) "SetDevice", (PyCFunction) _wrap_PyNs3WaveformGenerator_SetDevice, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetMobility", (PyCFunction) _wrap_PyNs3WaveformGenerator_GetMobility, METH_NOARGS, NULL },
    {(char *) "SetDutyCycle", (PyCFunction) _wrap_PyNs3WaveformGenerator_SetDutyCycle, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetDevice", (PyCFunction) _wrap_PyNs3WaveformGenerator_GetDevice, METH_NOARGS, NULL },
    {(char *) "GetSpectrumType", (PyCFunction) _wrap_PyNs3WaveformGenerator_GetSpectrumType, METH_NOARGS, NULL },
    {(char *) "StartRx", (PyCFunction) _wrap_PyNs3WaveformGenerator_StartRx, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3WaveformGenerator__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3WaveformGenerator__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3WaveformGenerator__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3WaveformGenerator__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3WaveformGenerator__tp_clear(PyNs3WaveformGenerator *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::WaveformGenerator *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3WaveformGenerator__tp_traverse(PyNs3WaveformGenerator *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3WaveformGenerator__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3WaveformGenerator__tp_dealloc(PyNs3WaveformGenerator *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3WaveformGenerator__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3WaveformGenerator__tp_richcompare (PyNs3WaveformGenerator *PYBINDGEN_UNUSED(self), PyNs3WaveformGenerator *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3WaveformGenerator_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3WaveformGenerator_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.WaveformGenerator",            /* tp_name */
    sizeof(PyNs3WaveformGenerator),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3WaveformGenerator__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3WaveformGenerator__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3WaveformGenerator__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3WaveformGenerator__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3WaveformGenerator_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3WaveformGenerator, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3WaveformGenerator__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3AlohaNoackMacHeader__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3AlohaNoackMacHeader *self)
{
    PyObject *py_retval;
    PyNs3AlohaNoackMacHeader__PythonHelper *helper = dynamic_cast< PyNs3AlohaNoackMacHeader__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

uint32_t
PyNs3AlohaNoackMacHeader__PythonHelper::Deserialize(ns3::Buffer::Iterator start)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackMacHeader *self_obj_before;
    PyObject *py_retval;
    uint32_t retval;
    PyNs3BufferIterator *py_Iterator;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Deserialize"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackMacHeader::Deserialize(start);
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj = (ns3::AlohaNoackMacHeader*) this;
    py_Iterator = PyObject_New(PyNs3BufferIterator, &PyNs3BufferIterator_Type);
    py_Iterator->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Iterator->obj = new ns3::Buffer::Iterator(start);
    PyNs3BufferIterator_wrapper_registry[(void *) py_Iterator->obj] = (PyObject *) py_Iterator;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Deserialize", (char *) "N", py_Iterator);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackMacHeader::Deserialize(start);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackMacHeader::Deserialize(start);
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::TypeId
PyNs3AlohaNoackMacHeader__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackMacHeader *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackMacHeader::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj = const_cast< ns3::AlohaNoackMacHeader* >((const ns3::AlohaNoackMacHeader*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackMacHeader::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackMacHeader::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

uint32_t
PyNs3AlohaNoackMacHeader__PythonHelper::GetSerializedSize() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackMacHeader *self_obj_before;
    PyObject *py_retval;
    uint32_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetSerializedSize"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackMacHeader::GetSerializedSize();
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj = const_cast< ns3::AlohaNoackMacHeader* >((const ns3::AlohaNoackMacHeader*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetSerializedSize", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackMacHeader::GetSerializedSize();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackMacHeader::GetSerializedSize();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}


void
PyNs3AlohaNoackMacHeader__PythonHelper::Serialize(ns3::Buffer::Iterator start) const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackMacHeader *self_obj_before;
    PyObject *py_retval;
    PyNs3BufferIterator *py_Iterator;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Serialize"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::AlohaNoackMacHeader::Serialize(start);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj = const_cast< ns3::AlohaNoackMacHeader* >((const ns3::AlohaNoackMacHeader*) this);
    py_Iterator = PyObject_New(PyNs3BufferIterator, &PyNs3BufferIterator_Type);
    py_Iterator->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Iterator->obj = new ns3::Buffer::Iterator(start);
    PyNs3BufferIterator_wrapper_registry[(void *) py_Iterator->obj] = (PyObject *) py_Iterator;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Serialize", (char *) "N", py_Iterator);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackMacHeader* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3AlohaNoackMacHeader__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3AlohaNoackMacHeader__tp_init__0(PyNs3AlohaNoackMacHeader *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3AlohaNoackMacHeader_Type)
    {
        self->obj = new PyNs3AlohaNoackMacHeader__PythonHelper();
        ((PyNs3AlohaNoackMacHeader__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::AlohaNoackMacHeader();
    }
    return 0;
}

static int
_wrap_PyNs3AlohaNoackMacHeader__tp_init__1(PyNs3AlohaNoackMacHeader *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3AlohaNoackMacHeader *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3AlohaNoackMacHeader_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3AlohaNoackMacHeader_Type)
    {
        self->obj = new PyNs3AlohaNoackMacHeader__PythonHelper(*((PyNs3AlohaNoackMacHeader *) arg0)->obj);
        ((PyNs3AlohaNoackMacHeader__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::AlohaNoackMacHeader(*((PyNs3AlohaNoackMacHeader *) arg0)->obj);
    }
    return 0;
}

int _wrap_PyNs3AlohaNoackMacHeader__tp_init(PyNs3AlohaNoackMacHeader *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3AlohaNoackMacHeader__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3AlohaNoackMacHeader__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3AlohaNoackMacHeader_Deserialize(PyNs3AlohaNoackMacHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint32_t retval;
    PyNs3BufferIterator *start;
    PyNs3AlohaNoackMacHeader__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackMacHeader__PythonHelper*> (self->obj);
    const char *keywords[] = {"start", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3BufferIterator_Type, &start)) {
        return NULL;
    }
    retval = (helper_class == NULL)? (self->obj->Deserialize(*((PyNs3BufferIterator *) start)->obj)) : (self->obj->ns3::AlohaNoackMacHeader::Deserialize(*((PyNs3BufferIterator *) start)->obj));
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackMacHeader_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::AlohaNoackMacHeader::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackMacHeader_Serialize(PyNs3AlohaNoackMacHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3BufferIterator *start;
    PyNs3AlohaNoackMacHeader__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackMacHeader__PythonHelper*> (self->obj);
    const char *keywords[] = {"start", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3BufferIterator_Type, &start)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Serialize(*((PyNs3BufferIterator *) start)->obj)) : (self->obj->ns3::AlohaNoackMacHeader::Serialize(*((PyNs3BufferIterator *) start)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackMacHeader_SetDestination(PyNs3AlohaNoackMacHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Mac48Address *destination;
    const char *keywords[] = {"destination", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Mac48Address_Type, &destination)) {
        return NULL;
    }
    self->obj->SetDestination(*((PyNs3Mac48Address *) destination)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackMacHeader_Print(PyNs3AlohaNoackMacHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyStdOstream *os;
    PyNs3AlohaNoackMacHeader__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackMacHeader__PythonHelper*> (self->obj);
    const char *keywords[] = {"os", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyStdOstream_Type, &os)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Print(*((PyStdOstream *) os)->obj)) : (self->obj->ns3::AlohaNoackMacHeader::Print(*((PyStdOstream *) os)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackMacHeader_GetInstanceTypeId(PyNs3AlohaNoackMacHeader *self)
{
    PyObject *py_retval;
    PyNs3AlohaNoackMacHeader__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackMacHeader__PythonHelper*> (self->obj);
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = (helper_class == NULL)? (self->obj->GetInstanceTypeId()) : (self->obj->ns3::AlohaNoackMacHeader::GetInstanceTypeId());
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackMacHeader_GetSerializedSize(PyNs3AlohaNoackMacHeader *self)
{
    PyObject *py_retval;
    uint32_t retval;
    PyNs3AlohaNoackMacHeader__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackMacHeader__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->GetSerializedSize()) : (self->obj->ns3::AlohaNoackMacHeader::GetSerializedSize());
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackMacHeader_GetDestination(PyNs3AlohaNoackMacHeader *self)
{
    PyObject *py_retval;
    PyNs3Mac48Address *py_Mac48Address;
    
    ns3::Mac48Address retval = self->obj->GetDestination();
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(retval);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_retval = Py_BuildValue((char *) "N", py_Mac48Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackMacHeader_GetSource(PyNs3AlohaNoackMacHeader *self)
{
    PyObject *py_retval;
    PyNs3Mac48Address *py_Mac48Address;
    
    ns3::Mac48Address retval = self->obj->GetSource();
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(retval);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_retval = Py_BuildValue((char *) "N", py_Mac48Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackMacHeader_SetSource(PyNs3AlohaNoackMacHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Mac48Address *source;
    const char *keywords[] = {"source", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Mac48Address_Type, &source)) {
        return NULL;
    }
    self->obj->SetSource(*((PyNs3Mac48Address *) source)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3AlohaNoackMacHeader__copy__(PyNs3AlohaNoackMacHeader *self)
{

    PyNs3AlohaNoackMacHeader *py_copy;
    py_copy = PyObject_GC_New(PyNs3AlohaNoackMacHeader, &PyNs3AlohaNoackMacHeader_Type);
    py_copy->obj = new ns3::AlohaNoackMacHeader(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3AlohaNoackMacHeader_methods[] = {
    {(char *) "Deserialize", (PyCFunction) _wrap_PyNs3AlohaNoackMacHeader_Deserialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3AlohaNoackMacHeader_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Serialize", (PyCFunction) _wrap_PyNs3AlohaNoackMacHeader_Serialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetDestination", (PyCFunction) _wrap_PyNs3AlohaNoackMacHeader_SetDestination, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Print", (PyCFunction) _wrap_PyNs3AlohaNoackMacHeader_Print, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetInstanceTypeId", (PyCFunction) _wrap_PyNs3AlohaNoackMacHeader_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "GetSerializedSize", (PyCFunction) _wrap_PyNs3AlohaNoackMacHeader_GetSerializedSize, METH_NOARGS, NULL },
    {(char *) "GetDestination", (PyCFunction) _wrap_PyNs3AlohaNoackMacHeader_GetDestination, METH_NOARGS, NULL },
    {(char *) "GetSource", (PyCFunction) _wrap_PyNs3AlohaNoackMacHeader_GetSource, METH_NOARGS, NULL },
    {(char *) "SetSource", (PyCFunction) _wrap_PyNs3AlohaNoackMacHeader_SetSource, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3AlohaNoackMacHeader__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3AlohaNoackMacHeader__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3AlohaNoackMacHeader__tp_clear(PyNs3AlohaNoackMacHeader *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::AlohaNoackMacHeader *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3AlohaNoackMacHeader__tp_traverse(PyNs3AlohaNoackMacHeader *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3AlohaNoackMacHeader__PythonHelper) )
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3AlohaNoackMacHeader__tp_dealloc(PyNs3AlohaNoackMacHeader *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3AlohaNoackMacHeader__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3AlohaNoackMacHeader__tp_richcompare (PyNs3AlohaNoackMacHeader *PYBINDGEN_UNUSED(self), PyNs3AlohaNoackMacHeader *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3AlohaNoackMacHeader_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3AlohaNoackMacHeader_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.AlohaNoackMacHeader",            /* tp_name */
    sizeof(PyNs3AlohaNoackMacHeader),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3AlohaNoackMacHeader__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3AlohaNoackMacHeader__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3AlohaNoackMacHeader__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3AlohaNoackMacHeader__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3AlohaNoackMacHeader_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3AlohaNoackMacHeader, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3AlohaNoackMacHeader__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3HalfDuplexIdealPhy__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3HalfDuplexIdealPhy *self)
{
    PyObject *py_retval;
    PyNs3HalfDuplexIdealPhy__PythonHelper *helper = dynamic_cast< PyNs3HalfDuplexIdealPhy__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3HalfDuplexIdealPhy__PythonHelper::_wrap_NotifyNewAggregate(PyNs3HalfDuplexIdealPhy *self)
{
    PyObject *py_retval;
    PyNs3HalfDuplexIdealPhy__PythonHelper *helper = dynamic_cast< PyNs3HalfDuplexIdealPhy__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3HalfDuplexIdealPhy__PythonHelper::_wrap_DoStart(PyNs3HalfDuplexIdealPhy *self)
{
    PyObject *py_retval;
    PyNs3HalfDuplexIdealPhy__PythonHelper *helper = dynamic_cast< PyNs3HalfDuplexIdealPhy__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoStart of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoStart__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

ns3::Ptr< ns3::Object >
PyNs3HalfDuplexIdealPhy__PythonHelper::GetDevice()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::HalfDuplexIdealPhy *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::Object > retval;
    PyNs3Object *tmp_Object;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetDevice"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HalfDuplexIdealPhy::GetDevice();
    }
    self_obj_before = reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj;
    reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = (ns3::HalfDuplexIdealPhy*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetDevice", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HalfDuplexIdealPhy::GetDevice();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Object_Type, &tmp_Object)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HalfDuplexIdealPhy::GetDevice();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::Object  > (tmp_Object->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::Object >
PyNs3HalfDuplexIdealPhy__PythonHelper::GetMobility()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::HalfDuplexIdealPhy *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::Object > retval;
    PyNs3Object *tmp_Object;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetMobility"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HalfDuplexIdealPhy::GetMobility();
    }
    self_obj_before = reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj;
    reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = (ns3::HalfDuplexIdealPhy*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetMobility", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HalfDuplexIdealPhy::GetMobility();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Object_Type, &tmp_Object)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HalfDuplexIdealPhy::GetMobility();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::Object  > (tmp_Object->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::SpectrumModel const >
PyNs3HalfDuplexIdealPhy__PythonHelper::GetRxSpectrumModel() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::HalfDuplexIdealPhy *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumModel const > retval;
    PyNs3SpectrumModel *tmp_SpectrumModel;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetRxSpectrumModel"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HalfDuplexIdealPhy::GetRxSpectrumModel();
    }
    self_obj_before = reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj;
    reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = const_cast< ns3::HalfDuplexIdealPhy* >((const ns3::HalfDuplexIdealPhy*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetRxSpectrumModel", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HalfDuplexIdealPhy::GetRxSpectrumModel();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SpectrumModel_Type, &tmp_SpectrumModel)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HalfDuplexIdealPhy::GetRxSpectrumModel();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::SpectrumModel  > (tmp_SpectrumModel->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3HalfDuplexIdealPhy__PythonHelper::SetChannel(ns3::Ptr< ns3::SpectrumChannel > c)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::HalfDuplexIdealPhy *self_obj_before;
    PyObject *py_retval;
    PyNs3SpectrumChannel *py_SpectrumChannel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetChannel"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::HalfDuplexIdealPhy::SetChannel(c);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj;
    reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = (ns3::HalfDuplexIdealPhy*) this;
    if (typeid(*(const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c)))) == typeid(PyNs3SpectrumChannel__PythonHelper))
    {
        py_SpectrumChannel = (PyNs3SpectrumChannel*) (((PyNs3SpectrumChannel__PythonHelper*) const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c)))->m_pyself);
        py_SpectrumChannel->obj = const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c));
        Py_INCREF(py_SpectrumChannel);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_SpectrumChannel = NULL;
        } else {
            py_SpectrumChannel = (PyNs3SpectrumChannel *) wrapper_lookup_iter->second;
            Py_INCREF(py_SpectrumChannel);
        }
    
        if (py_SpectrumChannel == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c))), &PyNs3SpectrumChannel_Type);
            py_SpectrumChannel = PyObject_GC_New(PyNs3SpectrumChannel, wrapper_type);
            py_SpectrumChannel->inst_dict = NULL;
            py_SpectrumChannel->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c))->Ref();
            py_SpectrumChannel->obj = const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c));
            PyNs3ObjectBase_wrapper_registry[(void *) py_SpectrumChannel->obj] = (PyObject *) py_SpectrumChannel;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetChannel", (char *) "N", py_SpectrumChannel);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3HalfDuplexIdealPhy__PythonHelper::SetDevice(ns3::Ptr< ns3::Object > d)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::HalfDuplexIdealPhy *self_obj_before;
    PyObject *py_retval;
    PyNs3Object *py_Object;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetDevice"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::HalfDuplexIdealPhy::SetDevice(d);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj;
    reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = (ns3::HalfDuplexIdealPhy*) this;
    if (typeid(*(const_cast<ns3::Object *> (ns3::PeekPointer (d)))) == typeid(PyNs3Object__PythonHelper))
    {
        py_Object = (PyNs3Object*) (((PyNs3Object__PythonHelper*) const_cast<ns3::Object *> (ns3::PeekPointer (d)))->m_pyself);
        py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (d));
        Py_INCREF(py_Object);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Object *> (ns3::PeekPointer (d)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Object = NULL;
        } else {
            py_Object = (PyNs3Object *) wrapper_lookup_iter->second;
            Py_INCREF(py_Object);
        }
    
        if (py_Object == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Object *> (ns3::PeekPointer (d))), &PyNs3Object_Type);
            py_Object = PyObject_GC_New(PyNs3Object, wrapper_type);
            py_Object->inst_dict = NULL;
            py_Object->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Object *> (ns3::PeekPointer (d))->Ref();
            py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (d));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Object->obj] = (PyObject *) py_Object;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetDevice", (char *) "N", py_Object);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3HalfDuplexIdealPhy__PythonHelper::SetMobility(ns3::Ptr< ns3::Object > m)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::HalfDuplexIdealPhy *self_obj_before;
    PyObject *py_retval;
    PyNs3Object *py_Object;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetMobility"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::HalfDuplexIdealPhy::SetMobility(m);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj;
    reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = (ns3::HalfDuplexIdealPhy*) this;
    if (typeid(*(const_cast<ns3::Object *> (ns3::PeekPointer (m)))) == typeid(PyNs3Object__PythonHelper))
    {
        py_Object = (PyNs3Object*) (((PyNs3Object__PythonHelper*) const_cast<ns3::Object *> (ns3::PeekPointer (m)))->m_pyself);
        py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (m));
        Py_INCREF(py_Object);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Object *> (ns3::PeekPointer (m)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Object = NULL;
        } else {
            py_Object = (PyNs3Object *) wrapper_lookup_iter->second;
            Py_INCREF(py_Object);
        }
    
        if (py_Object == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Object *> (ns3::PeekPointer (m))), &PyNs3Object_Type);
            py_Object = PyObject_GC_New(PyNs3Object, wrapper_type);
            py_Object->inst_dict = NULL;
            py_Object->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Object *> (ns3::PeekPointer (m))->Ref();
            py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (m));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Object->obj] = (PyObject *) py_Object;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetMobility", (char *) "N", py_Object);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3HalfDuplexIdealPhy__PythonHelper::StartRx(ns3::Ptr< ns3::PacketBurst > p, ns3::Ptr< ns3::SpectrumValue const > rxPsd, ns3::SpectrumType st, ns3::Time duration)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::HalfDuplexIdealPhy *self_obj_before;
    PyObject *py_retval;
    PyNs3PacketBurst *py_PacketBurst;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3SpectrumValue *py_SpectrumValue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter2;
    PyTypeObject *wrapper_type2 = 0;
    PyNs3SpectrumType *py_SpectrumType;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StartRx"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::HalfDuplexIdealPhy::StartRx(p, rxPsd, st, duration);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj;
    reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = (ns3::HalfDuplexIdealPhy*) this;
    if (typeid(*(const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)))) == typeid(PyNs3PacketBurst__PythonHelper))
    {
        py_PacketBurst = (PyNs3PacketBurst*) (((PyNs3PacketBurst__PythonHelper*) const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)))->m_pyself);
        py_PacketBurst->obj = const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p));
        Py_INCREF(py_PacketBurst);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_PacketBurst = NULL;
        } else {
            py_PacketBurst = (PyNs3PacketBurst *) wrapper_lookup_iter->second;
            Py_INCREF(py_PacketBurst);
        }
    
        if (py_PacketBurst == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p))), &PyNs3PacketBurst_Type);
            py_PacketBurst = PyObject_GC_New(PyNs3PacketBurst, wrapper_type);
            py_PacketBurst->inst_dict = NULL;
            py_PacketBurst->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p))->Ref();
            py_PacketBurst->obj = const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p));
            PyNs3ObjectBase_wrapper_registry[(void *) py_PacketBurst->obj] = (PyObject *) py_PacketBurst;
        }
    }
    wrapper_lookup_iter2 = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPsd)));
    if (wrapper_lookup_iter2 == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumValue = NULL;
    } else {
        py_SpectrumValue = (PyNs3SpectrumValue *) wrapper_lookup_iter2->second;
        Py_INCREF(py_SpectrumValue);
    }
    
    if (py_SpectrumValue == NULL)
    {
        wrapper_type2 = PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPsd))), &PyNs3SpectrumValue_Type);
        py_SpectrumValue = PyObject_New(PyNs3SpectrumValue, wrapper_type2);
        py_SpectrumValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPsd))->Ref();
        py_SpectrumValue->obj = const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPsd));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumValue->obj] = (PyObject *) py_SpectrumValue;
    }
    py_SpectrumType = PyObject_New(PyNs3SpectrumType, &PyNs3SpectrumType_Type);
    py_SpectrumType->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_SpectrumType->obj = new ns3::SpectrumType(st);
    PyNs3SpectrumType_wrapper_registry[(void *) py_SpectrumType->obj] = (PyObject *) py_SpectrumType;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(duration);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StartRx", (char *) "NNNN", py_PacketBurst, py_SpectrumValue, py_SpectrumType, py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3HalfDuplexIdealPhy__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::HalfDuplexIdealPhy *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj;
    reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = (ns3::HalfDuplexIdealPhy*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3HalfDuplexIdealPhy* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3HalfDuplexIdealPhy__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3HalfDuplexIdealPhy__PythonHelper::DoStart()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::DoStart();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoStart", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3HalfDuplexIdealPhy__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3HalfDuplexIdealPhy__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3HalfDuplexIdealPhy__tp_init__0(PyNs3HalfDuplexIdealPhy *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3HalfDuplexIdealPhy *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3HalfDuplexIdealPhy_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3HalfDuplexIdealPhy_Type)
    {
        self->obj = new PyNs3HalfDuplexIdealPhy__PythonHelper(*((PyNs3HalfDuplexIdealPhy *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3HalfDuplexIdealPhy__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::HalfDuplexIdealPhy(*((PyNs3HalfDuplexIdealPhy *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3HalfDuplexIdealPhy__tp_init__1(PyNs3HalfDuplexIdealPhy *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3HalfDuplexIdealPhy_Type)
    {
        self->obj = new PyNs3HalfDuplexIdealPhy__PythonHelper();
        self->obj->Ref ();
        ((PyNs3HalfDuplexIdealPhy__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::HalfDuplexIdealPhy();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3HalfDuplexIdealPhy__tp_init(PyNs3HalfDuplexIdealPhy *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3HalfDuplexIdealPhy__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3HalfDuplexIdealPhy__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_GetRxSpectrumModel(PyNs3HalfDuplexIdealPhy *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumModel const > retval;
    PyNs3HalfDuplexIdealPhy__PythonHelper *helper_class = dynamic_cast<PyNs3HalfDuplexIdealPhy__PythonHelper*> (self->obj);
    PyNs3SpectrumModel *py_SpectrumModel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetRxSpectrumModel()) : (self->obj->ns3::HalfDuplexIdealPhy::GetRxSpectrumModel());
    if (!(const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumModel = NULL;
    } else {
        py_SpectrumModel = (PyNs3SpectrumModel *) wrapper_lookup_iter->second;
        Py_INCREF(py_SpectrumModel);
    }
    
    if (py_SpectrumModel == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3SpectrumModel_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumModel__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (retval)))), &PyNs3SpectrumModel_Type);
        py_SpectrumModel = PyObject_New(PyNs3SpectrumModel, wrapper_type);
        py_SpectrumModel->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (retval))->Ref();
        py_SpectrumModel->obj = const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumModel->obj] = (PyObject *) py_SpectrumModel;
    }
    py_retval = Py_BuildValue((char *) "N", py_SpectrumModel);
    return py_retval;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_SetNoisePowerSpectralDensity(PyNs3HalfDuplexIdealPhy *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SpectrumValue *noisePsd;
    ns3::SpectrumValue *noisePsd_ptr;
    const char *keywords[] = {"noisePsd", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumValue_Type, &noisePsd)) {
        return NULL;
    }
    noisePsd_ptr = (noisePsd ? noisePsd->obj : NULL);
    self->obj->SetNoisePowerSpectralDensity(ns3::Ptr< ns3::SpectrumValue  > (noisePsd_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_SetMobility(PyNs3HalfDuplexIdealPhy *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Object *m;
    ns3::Object *m_ptr;
    PyNs3HalfDuplexIdealPhy__PythonHelper *helper_class = dynamic_cast<PyNs3HalfDuplexIdealPhy__PythonHelper*> (self->obj);
    const char *keywords[] = {"m", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Object_Type, &m)) {
        return NULL;
    }
    m_ptr = (m ? m->obj : NULL);
    (helper_class == NULL)? (self->obj->SetMobility(ns3::Ptr< ns3::Object  > (m_ptr))) : (self->obj->ns3::HalfDuplexIdealPhy::SetMobility(ns3::Ptr< ns3::Object  > (m_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_SetRate(PyNs3HalfDuplexIdealPhy *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataRate *rate;
    const char *keywords[] = {"rate", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataRate_Type, &rate)) {
        return NULL;
    }
    self->obj->SetRate(*((PyNs3DataRate *) rate)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_SetPhyMacRxEndErrorCallback(PyNs3HalfDuplexIdealPhy *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *c;
    ns3::Ptr<PythonCallbackImpl0> c_cb_impl;
    const char *keywords[] = {"c", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &c)) {
        return NULL;
    }
    if (!PyCallable_Check(c)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'c' must be callbale");
        return NULL;
    }
    c_cb_impl = ns3::Create<PythonCallbackImpl0> (c);
    self->obj->SetPhyMacRxEndErrorCallback(ns3::Callback<void, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (c_cb_impl));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::HalfDuplexIdealPhy::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_StartTx(PyNs3HalfDuplexIdealPhy *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *p;
    ns3::Packet *p_ptr;
    const char *keywords[] = {"p", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Packet_Type, &p)) {
        return NULL;
    }
    p_ptr = (p ? p->obj : NULL);
    retval = self->obj->StartTx(ns3::Ptr< ns3::Packet  > (p_ptr));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_GetRate(PyNs3HalfDuplexIdealPhy *self)
{
    PyObject *py_retval;
    PyNs3DataRate *py_DataRate;
    
    ns3::DataRate retval = self->obj->GetRate();
    py_DataRate = PyObject_New(PyNs3DataRate, &PyNs3DataRate_Type);
    py_DataRate->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_DataRate->obj = new ns3::DataRate(retval);
    PyNs3DataRate_wrapper_registry[(void *) py_DataRate->obj] = (PyObject *) py_DataRate;
    py_retval = Py_BuildValue((char *) "N", py_DataRate);
    return py_retval;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_SetPhyMacRxStartCallback(PyNs3HalfDuplexIdealPhy *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *c;
    ns3::Ptr<PythonCallbackImpl0> c_cb_impl;
    const char *keywords[] = {"c", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &c)) {
        return NULL;
    }
    if (!PyCallable_Check(c)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'c' must be callbale");
        return NULL;
    }
    c_cb_impl = ns3::Create<PythonCallbackImpl0> (c);
    self->obj->SetPhyMacRxStartCallback(ns3::Callback<void, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (c_cb_impl));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_SetChannel(PyNs3HalfDuplexIdealPhy *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SpectrumChannel *c;
    ns3::SpectrumChannel *c_ptr;
    PyNs3HalfDuplexIdealPhy__PythonHelper *helper_class = dynamic_cast<PyNs3HalfDuplexIdealPhy__PythonHelper*> (self->obj);
    const char *keywords[] = {"c", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumChannel_Type, &c)) {
        return NULL;
    }
    c_ptr = (c ? c->obj : NULL);
    (helper_class == NULL)? (self->obj->SetChannel(ns3::Ptr< ns3::SpectrumChannel  > (c_ptr))) : (self->obj->ns3::HalfDuplexIdealPhy::SetChannel(ns3::Ptr< ns3::SpectrumChannel  > (c_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_SetTxPowerSpectralDensity(PyNs3HalfDuplexIdealPhy *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SpectrumValue *txPsd;
    ns3::SpectrumValue *txPsd_ptr;
    const char *keywords[] = {"txPsd", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumValue_Type, &txPsd)) {
        return NULL;
    }
    txPsd_ptr = (txPsd ? txPsd->obj : NULL);
    self->obj->SetTxPowerSpectralDensity(ns3::Ptr< ns3::SpectrumValue  > (txPsd_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_StartRx(PyNs3HalfDuplexIdealPhy *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3PacketBurst *p;
    ns3::PacketBurst *p_ptr;
    PyNs3SpectrumValue *rxPsd;
    ns3::SpectrumValue *rxPsd_ptr;
    PyNs3SpectrumType *st;
    PyObject *duration;
    ns3::Time duration2;
    PyNs3HalfDuplexIdealPhy__PythonHelper *helper_class = dynamic_cast<PyNs3HalfDuplexIdealPhy__PythonHelper*> (self->obj);
    const char *keywords[] = {"p", "rxPsd", "st", "duration", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!O!O", (char **) keywords, &PyNs3PacketBurst_Type, &p, &PyNs3SpectrumValue_Type, &rxPsd, &PyNs3SpectrumType_Type, &st, &duration)) {
        return NULL;
    }
    p_ptr = (p ? p->obj : NULL);
    rxPsd_ptr = (rxPsd ? rxPsd->obj : NULL);
    if (PyObject_IsInstance(duration, (PyObject*) &PyNs3Time_Type)) {
        duration2 = *((PyNs3Time *) duration)->obj;
    } else if (PyObject_IsInstance(duration, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        duration2 = *((PyNs3TracedValue__Ns3Time *) duration)->obj;
    } else if (PyObject_IsInstance(duration, (PyObject*) &PyNs3Scalar_Type)) {
        duration2 = *((PyNs3Scalar *) duration)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", duration->ob_type->tp_name);
        return NULL;
    }
    (helper_class == NULL)? (self->obj->StartRx(ns3::Ptr< ns3::PacketBurst  > (p_ptr), ns3::Ptr< ns3::SpectrumValue  > (rxPsd_ptr), *((PyNs3SpectrumType *) st)->obj, duration2)) : (self->obj->ns3::HalfDuplexIdealPhy::StartRx(ns3::Ptr< ns3::PacketBurst  > (p_ptr), ns3::Ptr< ns3::SpectrumValue  > (rxPsd_ptr), *((PyNs3SpectrumType *) st)->obj, duration2));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_SetPhyMacTxEndCallback(PyNs3HalfDuplexIdealPhy *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *c;
    ns3::Ptr<PythonCallbackImpl1> c_cb_impl;
    const char *keywords[] = {"c", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &c)) {
        return NULL;
    }
    if (!PyCallable_Check(c)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'c' must be callbale");
        return NULL;
    }
    c_cb_impl = ns3::Create<PythonCallbackImpl1> (c);
    self->obj->SetPhyMacTxEndCallback(ns3::Callback<void, ns3::Ptr<ns3::Packet const>, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (c_cb_impl));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_SetDevice(PyNs3HalfDuplexIdealPhy *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Object *d;
    ns3::Object *d_ptr;
    PyNs3HalfDuplexIdealPhy__PythonHelper *helper_class = dynamic_cast<PyNs3HalfDuplexIdealPhy__PythonHelper*> (self->obj);
    const char *keywords[] = {"d", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Object_Type, &d)) {
        return NULL;
    }
    d_ptr = (d ? d->obj : NULL);
    (helper_class == NULL)? (self->obj->SetDevice(ns3::Ptr< ns3::Object  > (d_ptr))) : (self->obj->ns3::HalfDuplexIdealPhy::SetDevice(ns3::Ptr< ns3::Object  > (d_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_GetMobility(PyNs3HalfDuplexIdealPhy *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Object > retval;
    PyNs3HalfDuplexIdealPhy__PythonHelper *helper_class = dynamic_cast<PyNs3HalfDuplexIdealPhy__PythonHelper*> (self->obj);
    PyNs3Object *py_Object;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetMobility()) : (self->obj->ns3::HalfDuplexIdealPhy::GetMobility());
    if (!(const_cast<ns3::Object *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::Object *> (ns3::PeekPointer (retval)))) == typeid(PyNs3Object__PythonHelper))
    {
        py_Object = reinterpret_cast< PyNs3Object* >(reinterpret_cast< PyNs3Object__PythonHelper* >(const_cast<ns3::Object *> (ns3::PeekPointer (retval)))->m_pyself);
        py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (retval));
        Py_INCREF(py_Object);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Object *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Object = NULL;
        } else {
            py_Object = (PyNs3Object *) wrapper_lookup_iter->second;
            Py_INCREF(py_Object);
        }
    
        if (py_Object == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Object *> (ns3::PeekPointer (retval)))), &PyNs3Object_Type);
            py_Object = PyObject_GC_New(PyNs3Object, wrapper_type);
            py_Object->inst_dict = NULL;
            py_Object->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Object *> (ns3::PeekPointer (retval))->Ref();
            py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Object->obj] = (PyObject *) py_Object;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_Object);
    return py_retval;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_GetDevice(PyNs3HalfDuplexIdealPhy *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Object > retval;
    PyNs3HalfDuplexIdealPhy__PythonHelper *helper_class = dynamic_cast<PyNs3HalfDuplexIdealPhy__PythonHelper*> (self->obj);
    PyNs3Object *py_Object;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetDevice()) : (self->obj->ns3::HalfDuplexIdealPhy::GetDevice());
    if (!(const_cast<ns3::Object *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::Object *> (ns3::PeekPointer (retval)))) == typeid(PyNs3Object__PythonHelper))
    {
        py_Object = reinterpret_cast< PyNs3Object* >(reinterpret_cast< PyNs3Object__PythonHelper* >(const_cast<ns3::Object *> (ns3::PeekPointer (retval)))->m_pyself);
        py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (retval));
        Py_INCREF(py_Object);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Object *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Object = NULL;
        } else {
            py_Object = (PyNs3Object *) wrapper_lookup_iter->second;
            Py_INCREF(py_Object);
        }
    
        if (py_Object == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Object *> (ns3::PeekPointer (retval)))), &PyNs3Object_Type);
            py_Object = PyObject_GC_New(PyNs3Object, wrapper_type);
            py_Object->inst_dict = NULL;
            py_Object->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Object *> (ns3::PeekPointer (retval))->Ref();
            py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Object->obj] = (PyObject *) py_Object;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_Object);
    return py_retval;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_SetPhyMacRxEndOkCallback(PyNs3HalfDuplexIdealPhy *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *c;
    ns3::Ptr<PythonCallbackImpl2> c_cb_impl;
    const char *keywords[] = {"c", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &c)) {
        return NULL;
    }
    if (!PyCallable_Check(c)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'c' must be callbale");
        return NULL;
    }
    c_cb_impl = ns3::Create<PythonCallbackImpl2> (c);
    self->obj->SetPhyMacRxEndOkCallback(ns3::Callback<void, ns3::Ptr<ns3::Packet>, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (c_cb_impl));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HalfDuplexIdealPhy_GetSpectrumType(PyNs3HalfDuplexIdealPhy *self)
{
    PyObject *py_retval;
    PyNs3SpectrumType *py_SpectrumType;
    
    ns3::SpectrumType retval = self->obj->GetSpectrumType();
    py_SpectrumType = PyObject_New(PyNs3SpectrumType, &PyNs3SpectrumType_Type);
    py_SpectrumType->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_SpectrumType->obj = new ns3::SpectrumType(retval);
    PyNs3SpectrumType_wrapper_registry[(void *) py_SpectrumType->obj] = (PyObject *) py_SpectrumType;
    py_retval = Py_BuildValue((char *) "N", py_SpectrumType);
    return py_retval;
}


static PyObject*
_wrap_PyNs3HalfDuplexIdealPhy__copy__(PyNs3HalfDuplexIdealPhy *self)
{

    PyNs3HalfDuplexIdealPhy *py_copy;
    py_copy = PyObject_GC_New(PyNs3HalfDuplexIdealPhy, &PyNs3HalfDuplexIdealPhy_Type);
    py_copy->obj = new ns3::HalfDuplexIdealPhy(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3HalfDuplexIdealPhy_methods[] = {
    {(char *) "GetRxSpectrumModel", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_GetRxSpectrumModel, METH_NOARGS, NULL },
    {(char *) "SetNoisePowerSpectralDensity", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_SetNoisePowerSpectralDensity, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetMobility", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_SetMobility, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetRate", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_SetRate, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetPhyMacRxEndErrorCallback", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_SetPhyMacRxEndErrorCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "StartTx", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_StartTx, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetRate", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_GetRate, METH_NOARGS, NULL },
    {(char *) "SetPhyMacRxStartCallback", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_SetPhyMacRxStartCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetChannel", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_SetChannel, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetTxPowerSpectralDensity", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_SetTxPowerSpectralDensity, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "StartRx", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_StartRx, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetPhyMacTxEndCallback", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_SetPhyMacTxEndCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetDevice", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_SetDevice, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetMobility", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_GetMobility, METH_NOARGS, NULL },
    {(char *) "GetDevice", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_GetDevice, METH_NOARGS, NULL },
    {(char *) "SetPhyMacRxEndOkCallback", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_SetPhyMacRxEndOkCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetSpectrumType", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy_GetSpectrumType, METH_NOARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3HalfDuplexIdealPhy__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3HalfDuplexIdealPhy__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3HalfDuplexIdealPhy__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3HalfDuplexIdealPhy__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3HalfDuplexIdealPhy__tp_clear(PyNs3HalfDuplexIdealPhy *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::HalfDuplexIdealPhy *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3HalfDuplexIdealPhy__tp_traverse(PyNs3HalfDuplexIdealPhy *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3HalfDuplexIdealPhy__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3HalfDuplexIdealPhy__tp_dealloc(PyNs3HalfDuplexIdealPhy *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3HalfDuplexIdealPhy__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3HalfDuplexIdealPhy__tp_richcompare (PyNs3HalfDuplexIdealPhy *PYBINDGEN_UNUSED(self), PyNs3HalfDuplexIdealPhy *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3HalfDuplexIdealPhy_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3HalfDuplexIdealPhy_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.HalfDuplexIdealPhy",            /* tp_name */
    sizeof(PyNs3HalfDuplexIdealPhy),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3HalfDuplexIdealPhy__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3HalfDuplexIdealPhy__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3HalfDuplexIdealPhy__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3HalfDuplexIdealPhy__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3HalfDuplexIdealPhy_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3HalfDuplexIdealPhy, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3HalfDuplexIdealPhy__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3NonCommunicatingNetDevice__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3NonCommunicatingNetDevice *self)
{
    PyObject *py_retval;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper = dynamic_cast< PyNs3NonCommunicatingNetDevice__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3NonCommunicatingNetDevice__PythonHelper::_wrap_NotifyNewAggregate(PyNs3NonCommunicatingNetDevice *self)
{
    PyObject *py_retval;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper = dynamic_cast< PyNs3NonCommunicatingNetDevice__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3NonCommunicatingNetDevice__PythonHelper::_wrap_DoStart(PyNs3NonCommunicatingNetDevice *self)
{
    PyObject *py_retval;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper = dynamic_cast< PyNs3NonCommunicatingNetDevice__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoStart of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoStart__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


ns3::Address
PyNs3NonCommunicatingNetDevice__PythonHelper::GetAddress() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Address *tmp_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetAddress"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetAddress();
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = const_cast< ns3::NonCommunicatingNetDevice* >((const ns3::NonCommunicatingNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetAddress", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetAddress();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Address_Type, &tmp_Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetAddress();
    }
    ns3::Address retval = *tmp_Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Address
PyNs3NonCommunicatingNetDevice__PythonHelper::GetBroadcast() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Address *tmp_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetBroadcast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetBroadcast();
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = const_cast< ns3::NonCommunicatingNetDevice* >((const ns3::NonCommunicatingNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetBroadcast", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetBroadcast();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Address_Type, &tmp_Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetBroadcast();
    }
    ns3::Address retval = *tmp_Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::Channel >
PyNs3NonCommunicatingNetDevice__PythonHelper::GetChannel() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::Channel > retval;
    PyNs3Channel *tmp_Channel;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetChannel"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetChannel();
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = const_cast< ns3::NonCommunicatingNetDevice* >((const ns3::NonCommunicatingNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetChannel", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetChannel();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Channel_Type, &tmp_Channel)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetChannel();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::Channel  > (tmp_Channel->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

uint32_t
PyNs3NonCommunicatingNetDevice__PythonHelper::GetIfIndex() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    uint32_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetIfIndex"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetIfIndex();
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = const_cast< ns3::NonCommunicatingNetDevice* >((const ns3::NonCommunicatingNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetIfIndex", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetIfIndex();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetIfIndex();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

uint16_t
PyNs3NonCommunicatingNetDevice__PythonHelper::GetMtu() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    uint16_t retval;
    int tmp;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetMtu"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetMtu();
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = const_cast< ns3::NonCommunicatingNetDevice* >((const ns3::NonCommunicatingNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetMtu", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetMtu();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "i", &tmp)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetMtu();
    }
    if (tmp > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetMtu();
    }
    retval = tmp;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Address
PyNs3NonCommunicatingNetDevice__PythonHelper::GetMulticast(ns3::Ipv4Address addr) const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Ipv4Address *py_Ipv4Address;
    PyNs3Address *tmp_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetMulticast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetMulticast(addr);
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = const_cast< ns3::NonCommunicatingNetDevice* >((const ns3::NonCommunicatingNetDevice*) this);
    py_Ipv4Address = PyObject_New(PyNs3Ipv4Address, &PyNs3Ipv4Address_Type);
    py_Ipv4Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ipv4Address->obj = new ns3::Ipv4Address(addr);
    PyNs3Ipv4Address_wrapper_registry[(void *) py_Ipv4Address->obj] = (PyObject *) py_Ipv4Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetMulticast", (char *) "N", py_Ipv4Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetMulticast(addr);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Address_Type, &tmp_Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetMulticast(addr);
    }
    ns3::Address retval = *tmp_Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Address
PyNs3NonCommunicatingNetDevice__PythonHelper::GetMulticast(ns3::Ipv6Address addr) const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Ipv6Address *py_Ipv6Address;
    PyNs3Address *tmp_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetMulticast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetMulticast(addr);
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = const_cast< ns3::NonCommunicatingNetDevice* >((const ns3::NonCommunicatingNetDevice*) this);
    py_Ipv6Address = PyObject_New(PyNs3Ipv6Address, &PyNs3Ipv6Address_Type);
    py_Ipv6Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ipv6Address->obj = new ns3::Ipv6Address(addr);
    PyNs3Ipv6Address_wrapper_registry[(void *) py_Ipv6Address->obj] = (PyObject *) py_Ipv6Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetMulticast", (char *) "N", py_Ipv6Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetMulticast(addr);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Address_Type, &tmp_Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetMulticast(addr);
    }
    ns3::Address retval = *tmp_Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::Node >
PyNs3NonCommunicatingNetDevice__PythonHelper::GetNode() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::Node > retval;
    PyNs3Node *tmp_Node;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetNode"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetNode();
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = const_cast< ns3::NonCommunicatingNetDevice* >((const ns3::NonCommunicatingNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetNode", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetNode();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Node_Type, &tmp_Node)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::GetNode();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::Node  > (tmp_Node->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3NonCommunicatingNetDevice__PythonHelper::IsBridge() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsBridge"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::IsBridge();
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = const_cast< ns3::NonCommunicatingNetDevice* >((const ns3::NonCommunicatingNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsBridge", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::IsBridge();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::IsBridge();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3NonCommunicatingNetDevice__PythonHelper::IsBroadcast() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsBroadcast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::IsBroadcast();
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = const_cast< ns3::NonCommunicatingNetDevice* >((const ns3::NonCommunicatingNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsBroadcast", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::IsBroadcast();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::IsBroadcast();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3NonCommunicatingNetDevice__PythonHelper::IsLinkUp() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsLinkUp"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::IsLinkUp();
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = const_cast< ns3::NonCommunicatingNetDevice* >((const ns3::NonCommunicatingNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsLinkUp", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::IsLinkUp();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::IsLinkUp();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3NonCommunicatingNetDevice__PythonHelper::IsMulticast() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsMulticast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::IsMulticast();
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = const_cast< ns3::NonCommunicatingNetDevice* >((const ns3::NonCommunicatingNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsMulticast", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::IsMulticast();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::IsMulticast();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3NonCommunicatingNetDevice__PythonHelper::IsPointToPoint() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsPointToPoint"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::IsPointToPoint();
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = const_cast< ns3::NonCommunicatingNetDevice* >((const ns3::NonCommunicatingNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsPointToPoint", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::IsPointToPoint();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::IsPointToPoint();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3NonCommunicatingNetDevice__PythonHelper::NeedsArp() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NeedsArp"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::NeedsArp();
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = const_cast< ns3::NonCommunicatingNetDevice* >((const ns3::NonCommunicatingNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NeedsArp", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::NeedsArp();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::NeedsArp();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3NonCommunicatingNetDevice__PythonHelper::Send(ns3::Ptr< ns3::Packet > packet, ns3::Address const & dest, uint16_t protocolNumber)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3Address *py_Address;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Send"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::Send(packet, dest, protocolNumber);
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = (ns3::NonCommunicatingNetDevice*) this;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::Packet *> (ns3::PeekPointer (packet)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_Packet = NULL;
    } else {
        py_Packet = (PyNs3Packet *) wrapper_lookup_iter->second;
        Py_INCREF(py_Packet);
    }
    
    if (py_Packet == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Packet *> (ns3::PeekPointer (packet))), &PyNs3Packet_Type);
        py_Packet = PyObject_New(PyNs3Packet, wrapper_type);
        py_Packet->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::Packet *> (ns3::PeekPointer (packet))->Ref();
        py_Packet->obj = const_cast<ns3::Packet *> (ns3::PeekPointer (packet));
        PyNs3Empty_wrapper_registry[(void *) py_Packet->obj] = (PyObject *) py_Packet;
    }
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(dest);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Send", (char *) "NNi", py_Packet, py_Address, (int) protocolNumber);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::Send(packet, dest, protocolNumber);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::Send(packet, dest, protocolNumber);
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3NonCommunicatingNetDevice__PythonHelper::SendFrom(ns3::Ptr< ns3::Packet > packet, ns3::Address const & source, ns3::Address const & dest, uint16_t protocolNumber)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3Address *py_Address;
    PyNs3Address *py_Address2;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SendFrom"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::SendFrom(packet, source, dest, protocolNumber);
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = (ns3::NonCommunicatingNetDevice*) this;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::Packet *> (ns3::PeekPointer (packet)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_Packet = NULL;
    } else {
        py_Packet = (PyNs3Packet *) wrapper_lookup_iter->second;
        Py_INCREF(py_Packet);
    }
    
    if (py_Packet == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Packet *> (ns3::PeekPointer (packet))), &PyNs3Packet_Type);
        py_Packet = PyObject_New(PyNs3Packet, wrapper_type);
        py_Packet->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::Packet *> (ns3::PeekPointer (packet))->Ref();
        py_Packet->obj = const_cast<ns3::Packet *> (ns3::PeekPointer (packet));
        PyNs3Empty_wrapper_registry[(void *) py_Packet->obj] = (PyObject *) py_Packet;
    }
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(source);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_Address2 = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address2->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address2->obj = new ns3::Address(dest);
    PyNs3Address_wrapper_registry[(void *) py_Address2->obj] = (PyObject *) py_Address2;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SendFrom", (char *) "NNNi", py_Packet, py_Address, py_Address2, (int) protocolNumber);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::SendFrom(packet, source, dest, protocolNumber);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::SendFrom(packet, source, dest, protocolNumber);
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3NonCommunicatingNetDevice__PythonHelper::SetAddress(ns3::Address address)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Address *py_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetAddress"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::NonCommunicatingNetDevice::SetAddress(address);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = (ns3::NonCommunicatingNetDevice*) this;
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(address);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetAddress", (char *) "N", py_Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3NonCommunicatingNetDevice__PythonHelper::SetIfIndex(uint32_t const index)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetIfIndex"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::NonCommunicatingNetDevice::SetIfIndex(index);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = (ns3::NonCommunicatingNetDevice*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetIfIndex", (char *) "N", PyLong_FromUnsignedLong(index));
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

bool
PyNs3NonCommunicatingNetDevice__PythonHelper::SetMtu(uint16_t const mtu)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetMtu"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::SetMtu(mtu);
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = (ns3::NonCommunicatingNetDevice*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetMtu", (char *) "i", (int) mtu);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::SetMtu(mtu);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::SetMtu(mtu);
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3NonCommunicatingNetDevice__PythonHelper::SetNode(ns3::Ptr< ns3::Node > node)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Node *py_Node;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetNode"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::NonCommunicatingNetDevice::SetNode(node);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = (ns3::NonCommunicatingNetDevice*) this;
    if (typeid(*(const_cast<ns3::Node *> (ns3::PeekPointer (node)))) == typeid(PyNs3Node__PythonHelper))
    {
        py_Node = (PyNs3Node*) (((PyNs3Node__PythonHelper*) const_cast<ns3::Node *> (ns3::PeekPointer (node)))->m_pyself);
        py_Node->obj = const_cast<ns3::Node *> (ns3::PeekPointer (node));
        Py_INCREF(py_Node);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Node *> (ns3::PeekPointer (node)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Node = NULL;
        } else {
            py_Node = (PyNs3Node *) wrapper_lookup_iter->second;
            Py_INCREF(py_Node);
        }
    
        if (py_Node == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Node *> (ns3::PeekPointer (node))), &PyNs3Node_Type);
            py_Node = PyObject_GC_New(PyNs3Node, wrapper_type);
            py_Node->inst_dict = NULL;
            py_Node->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Node *> (ns3::PeekPointer (node))->Ref();
            py_Node->obj = const_cast<ns3::Node *> (ns3::PeekPointer (node));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Node->obj] = (PyObject *) py_Node;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetNode", (char *) "N", py_Node);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}



bool
PyNs3NonCommunicatingNetDevice__PythonHelper::SupportsSendFrom() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SupportsSendFrom"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::SupportsSendFrom();
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = const_cast< ns3::NonCommunicatingNetDevice* >((const ns3::NonCommunicatingNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SupportsSendFrom", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::SupportsSendFrom();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::NonCommunicatingNetDevice::SupportsSendFrom();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3NonCommunicatingNetDevice__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NonCommunicatingNetDevice *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = (ns3::NonCommunicatingNetDevice*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NonCommunicatingNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3NonCommunicatingNetDevice__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3NonCommunicatingNetDevice__PythonHelper::DoStart()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::DoStart();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoStart", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3NonCommunicatingNetDevice__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3NonCommunicatingNetDevice__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3NonCommunicatingNetDevice__tp_init__0(PyNs3NonCommunicatingNetDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3NonCommunicatingNetDevice *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3NonCommunicatingNetDevice_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3NonCommunicatingNetDevice_Type)
    {
        self->obj = new PyNs3NonCommunicatingNetDevice__PythonHelper(*((PyNs3NonCommunicatingNetDevice *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3NonCommunicatingNetDevice__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::NonCommunicatingNetDevice(*((PyNs3NonCommunicatingNetDevice *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3NonCommunicatingNetDevice__tp_init__1(PyNs3NonCommunicatingNetDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3NonCommunicatingNetDevice_Type)
    {
        self->obj = new PyNs3NonCommunicatingNetDevice__PythonHelper();
        self->obj->Ref ();
        ((PyNs3NonCommunicatingNetDevice__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::NonCommunicatingNetDevice();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3NonCommunicatingNetDevice__tp_init(PyNs3NonCommunicatingNetDevice *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3NonCommunicatingNetDevice__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3NonCommunicatingNetDevice__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}



PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_GetMulticast__0(PyNs3NonCommunicatingNetDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Ipv4Address *addr;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"addr", NULL};
    PyNs3Address *py_Address;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv4Address_Type, &addr)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::Address retval = (helper_class == NULL)? (self->obj->GetMulticast(*((PyNs3Ipv4Address *) addr)->obj)) : (self->obj->ns3::NonCommunicatingNetDevice::GetMulticast(*((PyNs3Ipv4Address *) addr)->obj));
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}

PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_GetMulticast__1(PyNs3NonCommunicatingNetDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Ipv6Address *addr;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"addr", NULL};
    PyNs3Address *py_Address;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv6Address_Type, &addr)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::Address retval = (helper_class == NULL)? (self->obj->GetMulticast(*((PyNs3Ipv6Address *) addr)->obj)) : (self->obj->ns3::NonCommunicatingNetDevice::GetMulticast(*((PyNs3Ipv6Address *) addr)->obj));
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}

PyObject * _wrap_PyNs3NonCommunicatingNetDevice_GetMulticast(PyNs3NonCommunicatingNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3NonCommunicatingNetDevice_GetMulticast__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3NonCommunicatingNetDevice_GetMulticast__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_IsPointToPoint(PyNs3NonCommunicatingNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsPointToPoint()) : (self->obj->ns3::NonCommunicatingNetDevice::IsPointToPoint());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::NonCommunicatingNetDevice::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_Send(PyNs3NonCommunicatingNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    PyObject *dest;
    ns3::Address dest2;
    int protocolNumber;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"packet", "dest", "protocolNumber", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!Oi", (char **) keywords, &PyNs3Packet_Type, &packet, &dest, &protocolNumber)) {
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Address_Type)) {
        dest2 = *((PyNs3Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Inet6SocketAddress_Type)) {
        dest2 = *((PyNs3Inet6SocketAddress *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3InetSocketAddress_Type)) {
        dest2 = *((PyNs3InetSocketAddress *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Ipv4Address_Type)) {
        dest2 = *((PyNs3Ipv4Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Ipv6Address_Type)) {
        dest2 = *((PyNs3Ipv6Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Mac48Address_Type)) {
        dest2 = *((PyNs3Mac48Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Mac64Address_Type)) {
        dest2 = *((PyNs3Mac64Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3PacketSocketAddress_Type)) {
        dest2 = *((PyNs3PacketSocketAddress *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3UanAddress_Type)) {
        dest2 = *((PyNs3UanAddress *) dest)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Address, Inet6SocketAddress, InetSocketAddress, Ipv4Address, Ipv6Address, Mac48Address, Mac64Address, PacketSocketAddress, UanAddress), not %s", dest->ob_type->tp_name);
        return NULL;
    }
    if (protocolNumber > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    retval = (helper_class == NULL)? (self->obj->Send(ns3::Ptr< ns3::Packet  > (packet_ptr), dest2, protocolNumber)) : (self->obj->ns3::NonCommunicatingNetDevice::Send(ns3::Ptr< ns3::Packet  > (packet_ptr), dest2, protocolNumber));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_GetIfIndex(PyNs3NonCommunicatingNetDevice *self)
{
    PyObject *py_retval;
    uint32_t retval;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->GetIfIndex()) : (self->obj->ns3::NonCommunicatingNetDevice::GetIfIndex());
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_NeedsArp(PyNs3NonCommunicatingNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->NeedsArp()) : (self->obj->ns3::NonCommunicatingNetDevice::NeedsArp());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_SetPromiscReceiveCallback(PyNs3NonCommunicatingNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *cb;
    ns3::Ptr<PythonCallbackImpl28> cb_cb_impl;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &cb)) {
        return NULL;
    }
    if (!PyCallable_Check(cb)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'cb' must be callbale");
        return NULL;
    }
    cb_cb_impl = ns3::Create<PythonCallbackImpl28> (cb);
    (helper_class == NULL)? (self->obj->SetPromiscReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::Address const&, ns3::NetDevice::PacketType, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl))) : (self->obj->ns3::NonCommunicatingNetDevice::SetPromiscReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::Address const&, ns3::NetDevice::PacketType, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_GetNode(PyNs3NonCommunicatingNetDevice *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Node > retval;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    PyNs3Node *py_Node;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetNode()) : (self->obj->ns3::NonCommunicatingNetDevice::GetNode());
    if (!(const_cast<ns3::Node *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::Node *> (ns3::PeekPointer (retval)))) == typeid(PyNs3Node__PythonHelper))
    {
        py_Node = reinterpret_cast< PyNs3Node* >(reinterpret_cast< PyNs3Node__PythonHelper* >(const_cast<ns3::Node *> (ns3::PeekPointer (retval)))->m_pyself);
        py_Node->obj = const_cast<ns3::Node *> (ns3::PeekPointer (retval));
        Py_INCREF(py_Node);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Node *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Node = NULL;
        } else {
            py_Node = (PyNs3Node *) wrapper_lookup_iter->second;
            Py_INCREF(py_Node);
        }
    
        if (py_Node == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Node *> (ns3::PeekPointer (retval)))), &PyNs3Node_Type);
            py_Node = PyObject_GC_New(PyNs3Node, wrapper_type);
            py_Node->inst_dict = NULL;
            py_Node->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Node *> (ns3::PeekPointer (retval))->Ref();
            py_Node->obj = const_cast<ns3::Node *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Node->obj] = (PyObject *) py_Node;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_Node);
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_SendFrom(PyNs3NonCommunicatingNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    PyObject *source;
    ns3::Address source2;
    PyObject *dest;
    ns3::Address dest2;
    int protocolNumber;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"packet", "source", "dest", "protocolNumber", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!OOi", (char **) keywords, &PyNs3Packet_Type, &packet, &source, &dest, &protocolNumber)) {
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    if (PyObject_IsInstance(source, (PyObject*) &PyNs3Address_Type)) {
        source2 = *((PyNs3Address *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3Inet6SocketAddress_Type)) {
        source2 = *((PyNs3Inet6SocketAddress *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3InetSocketAddress_Type)) {
        source2 = *((PyNs3InetSocketAddress *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3Ipv4Address_Type)) {
        source2 = *((PyNs3Ipv4Address *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3Ipv6Address_Type)) {
        source2 = *((PyNs3Ipv6Address *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3Mac48Address_Type)) {
        source2 = *((PyNs3Mac48Address *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3Mac64Address_Type)) {
        source2 = *((PyNs3Mac64Address *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3PacketSocketAddress_Type)) {
        source2 = *((PyNs3PacketSocketAddress *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3UanAddress_Type)) {
        source2 = *((PyNs3UanAddress *) source)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Address, Inet6SocketAddress, InetSocketAddress, Ipv4Address, Ipv6Address, Mac48Address, Mac64Address, PacketSocketAddress, UanAddress), not %s", source->ob_type->tp_name);
        return NULL;
    }
    if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Address_Type)) {
        dest2 = *((PyNs3Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Inet6SocketAddress_Type)) {
        dest2 = *((PyNs3Inet6SocketAddress *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3InetSocketAddress_Type)) {
        dest2 = *((PyNs3InetSocketAddress *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Ipv4Address_Type)) {
        dest2 = *((PyNs3Ipv4Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Ipv6Address_Type)) {
        dest2 = *((PyNs3Ipv6Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Mac48Address_Type)) {
        dest2 = *((PyNs3Mac48Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Mac64Address_Type)) {
        dest2 = *((PyNs3Mac64Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3PacketSocketAddress_Type)) {
        dest2 = *((PyNs3PacketSocketAddress *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3UanAddress_Type)) {
        dest2 = *((PyNs3UanAddress *) dest)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Address, Inet6SocketAddress, InetSocketAddress, Ipv4Address, Ipv6Address, Mac48Address, Mac64Address, PacketSocketAddress, UanAddress), not %s", dest->ob_type->tp_name);
        return NULL;
    }
    if (protocolNumber > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    retval = (helper_class == NULL)? (self->obj->SendFrom(ns3::Ptr< ns3::Packet  > (packet_ptr), source2, dest2, protocolNumber)) : (self->obj->ns3::NonCommunicatingNetDevice::SendFrom(ns3::Ptr< ns3::Packet  > (packet_ptr), source2, dest2, protocolNumber));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_IsBroadcast(PyNs3NonCommunicatingNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsBroadcast()) : (self->obj->ns3::NonCommunicatingNetDevice::IsBroadcast());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_SetChannel(PyNs3NonCommunicatingNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Channel *c;
    ns3::Channel *c_ptr;
    const char *keywords[] = {"c", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Channel_Type, &c)) {
        return NULL;
    }
    c_ptr = (c ? c->obj : NULL);
    self->obj->SetChannel(ns3::Ptr< ns3::Channel  > (c_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_GetMtu(PyNs3NonCommunicatingNetDevice *self)
{
    PyObject *py_retval;
    uint16_t retval;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->GetMtu()) : (self->obj->ns3::NonCommunicatingNetDevice::GetMtu());
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_IsBridge(PyNs3NonCommunicatingNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsBridge()) : (self->obj->ns3::NonCommunicatingNetDevice::IsBridge());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_SetNode(PyNs3NonCommunicatingNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Node *node;
    ns3::Node *node_ptr;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"node", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Node_Type, &node)) {
        return NULL;
    }
    node_ptr = (node ? node->obj : NULL);
    (helper_class == NULL)? (self->obj->SetNode(ns3::Ptr< ns3::Node  > (node_ptr))) : (self->obj->ns3::NonCommunicatingNetDevice::SetNode(ns3::Ptr< ns3::Node  > (node_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_GetAddress(PyNs3NonCommunicatingNetDevice *self)
{
    PyObject *py_retval;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    PyNs3Address *py_Address;
    
    ns3::Address retval = (helper_class == NULL)? (self->obj->GetAddress()) : (self->obj->ns3::NonCommunicatingNetDevice::GetAddress());
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_IsLinkUp(PyNs3NonCommunicatingNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsLinkUp()) : (self->obj->ns3::NonCommunicatingNetDevice::IsLinkUp());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_SetIfIndex(PyNs3NonCommunicatingNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int index;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"index", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &index)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->SetIfIndex(index)) : (self->obj->ns3::NonCommunicatingNetDevice::SetIfIndex(index));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_SetPhy(PyNs3NonCommunicatingNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Object *phy;
    ns3::Object *phy_ptr;
    const char *keywords[] = {"phy", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Object_Type, &phy)) {
        return NULL;
    }
    phy_ptr = (phy ? phy->obj : NULL);
    self->obj->SetPhy(ns3::Ptr< ns3::Object  > (phy_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_SetAddress(PyNs3NonCommunicatingNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *address;
    ns3::Address address2;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"address", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &address)) {
        return NULL;
    }
    if (PyObject_IsInstance(address, (PyObject*) &PyNs3Address_Type)) {
        address2 = *((PyNs3Address *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3Inet6SocketAddress_Type)) {
        address2 = *((PyNs3Inet6SocketAddress *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3InetSocketAddress_Type)) {
        address2 = *((PyNs3InetSocketAddress *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3Ipv4Address_Type)) {
        address2 = *((PyNs3Ipv4Address *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3Ipv6Address_Type)) {
        address2 = *((PyNs3Ipv6Address *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3Mac48Address_Type)) {
        address2 = *((PyNs3Mac48Address *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3Mac64Address_Type)) {
        address2 = *((PyNs3Mac64Address *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3PacketSocketAddress_Type)) {
        address2 = *((PyNs3PacketSocketAddress *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3UanAddress_Type)) {
        address2 = *((PyNs3UanAddress *) address)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Address, Inet6SocketAddress, InetSocketAddress, Ipv4Address, Ipv6Address, Mac48Address, Mac64Address, PacketSocketAddress, UanAddress), not %s", address->ob_type->tp_name);
        return NULL;
    }
    (helper_class == NULL)? (self->obj->SetAddress(address2)) : (self->obj->ns3::NonCommunicatingNetDevice::SetAddress(address2));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_GetBroadcast(PyNs3NonCommunicatingNetDevice *self)
{
    PyObject *py_retval;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    PyNs3Address *py_Address;
    
    ns3::Address retval = (helper_class == NULL)? (self->obj->GetBroadcast()) : (self->obj->ns3::NonCommunicatingNetDevice::GetBroadcast());
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_AddLinkChangeCallback(PyNs3NonCommunicatingNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *callback;
    ns3::Ptr<PythonCallbackImpl0> callback_cb_impl;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"callback", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &callback)) {
        return NULL;
    }
    if (!PyCallable_Check(callback)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'callback' must be callbale");
        return NULL;
    }
    callback_cb_impl = ns3::Create<PythonCallbackImpl0> (callback);
    (helper_class == NULL)? (self->obj->AddLinkChangeCallback(ns3::Callback<void, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (callback_cb_impl))) : (self->obj->ns3::NonCommunicatingNetDevice::AddLinkChangeCallback(ns3::Callback<void, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (callback_cb_impl)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_SetReceiveCallback(PyNs3NonCommunicatingNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *cb;
    ns3::Ptr<PythonCallbackImpl29> cb_cb_impl;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &cb)) {
        return NULL;
    }
    if (!PyCallable_Check(cb)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'cb' must be callbale");
        return NULL;
    }
    cb_cb_impl = ns3::Create<PythonCallbackImpl29> (cb);
    (helper_class == NULL)? (self->obj->SetReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl))) : (self->obj->ns3::NonCommunicatingNetDevice::SetReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_IsMulticast(PyNs3NonCommunicatingNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsMulticast()) : (self->obj->ns3::NonCommunicatingNetDevice::IsMulticast());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_SetMtu(PyNs3NonCommunicatingNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    int mtu;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"mtu", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &mtu)) {
        return NULL;
    }
    if (mtu > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    retval = (helper_class == NULL)? (self->obj->SetMtu(mtu)) : (self->obj->ns3::NonCommunicatingNetDevice::SetMtu(mtu));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_GetPhy(PyNs3NonCommunicatingNetDevice *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Object > retval;
    PyNs3Object *py_Object;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = self->obj->GetPhy();
    if (!(const_cast<ns3::Object *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::Object *> (ns3::PeekPointer (retval)))) == typeid(PyNs3Object__PythonHelper))
    {
        py_Object = reinterpret_cast< PyNs3Object* >(reinterpret_cast< PyNs3Object__PythonHelper* >(const_cast<ns3::Object *> (ns3::PeekPointer (retval)))->m_pyself);
        py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (retval));
        Py_INCREF(py_Object);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Object *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Object = NULL;
        } else {
            py_Object = (PyNs3Object *) wrapper_lookup_iter->second;
            Py_INCREF(py_Object);
        }
    
        if (py_Object == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Object *> (ns3::PeekPointer (retval)))), &PyNs3Object_Type);
            py_Object = PyObject_GC_New(PyNs3Object, wrapper_type);
            py_Object->inst_dict = NULL;
            py_Object->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Object *> (ns3::PeekPointer (retval))->Ref();
            py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Object->obj] = (PyObject *) py_Object;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_Object);
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_SupportsSendFrom(PyNs3NonCommunicatingNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->SupportsSendFrom()) : (self->obj->ns3::NonCommunicatingNetDevice::SupportsSendFrom());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3NonCommunicatingNetDevice_GetChannel(PyNs3NonCommunicatingNetDevice *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Channel > retval;
    PyNs3NonCommunicatingNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3NonCommunicatingNetDevice__PythonHelper*> (self->obj);
    PyNs3Channel *py_Channel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetChannel()) : (self->obj->ns3::NonCommunicatingNetDevice::GetChannel());
    if (!(const_cast<ns3::Channel *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::Channel *> (ns3::PeekPointer (retval)))) == typeid(PyNs3Channel__PythonHelper))
    {
        py_Channel = reinterpret_cast< PyNs3Channel* >(reinterpret_cast< PyNs3Channel__PythonHelper* >(const_cast<ns3::Channel *> (ns3::PeekPointer (retval)))->m_pyself);
        py_Channel->obj = const_cast<ns3::Channel *> (ns3::PeekPointer (retval));
        Py_INCREF(py_Channel);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Channel *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Channel = NULL;
        } else {
            py_Channel = (PyNs3Channel *) wrapper_lookup_iter->second;
            Py_INCREF(py_Channel);
        }
    
        if (py_Channel == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Channel *> (ns3::PeekPointer (retval)))), &PyNs3Channel_Type);
            py_Channel = PyObject_GC_New(PyNs3Channel, wrapper_type);
            py_Channel->inst_dict = NULL;
            py_Channel->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Channel *> (ns3::PeekPointer (retval))->Ref();
            py_Channel->obj = const_cast<ns3::Channel *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Channel->obj] = (PyObject *) py_Channel;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_Channel);
    return py_retval;
}


static PyObject*
_wrap_PyNs3NonCommunicatingNetDevice__copy__(PyNs3NonCommunicatingNetDevice *self)
{

    PyNs3NonCommunicatingNetDevice *py_copy;
    py_copy = PyObject_GC_New(PyNs3NonCommunicatingNetDevice, &PyNs3NonCommunicatingNetDevice_Type);
    py_copy->obj = new ns3::NonCommunicatingNetDevice(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3NonCommunicatingNetDevice_methods[] = {
    {(char *) "GetMulticast", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_GetMulticast, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsPointToPoint", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_IsPointToPoint, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Send", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_Send, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetIfIndex", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_GetIfIndex, METH_NOARGS, NULL },
    {(char *) "NeedsArp", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_NeedsArp, METH_NOARGS, NULL },
    {(char *) "SetPromiscReceiveCallback", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_SetPromiscReceiveCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetNode", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_GetNode, METH_NOARGS, NULL },
    {(char *) "SendFrom", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_SendFrom, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsBroadcast", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_IsBroadcast, METH_NOARGS, NULL },
    {(char *) "SetChannel", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_SetChannel, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetMtu", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_GetMtu, METH_NOARGS, NULL },
    {(char *) "IsBridge", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_IsBridge, METH_NOARGS, NULL },
    {(char *) "SetNode", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_SetNode, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetAddress", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_GetAddress, METH_NOARGS, NULL },
    {(char *) "IsLinkUp", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_IsLinkUp, METH_NOARGS, NULL },
    {(char *) "SetIfIndex", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_SetIfIndex, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetPhy", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_SetPhy, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetAddress", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_SetAddress, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetBroadcast", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_GetBroadcast, METH_NOARGS, NULL },
    {(char *) "AddLinkChangeCallback", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_AddLinkChangeCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetReceiveCallback", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_SetReceiveCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsMulticast", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_IsMulticast, METH_NOARGS, NULL },
    {(char *) "SetMtu", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_SetMtu, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetPhy", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_GetPhy, METH_NOARGS, NULL },
    {(char *) "SupportsSendFrom", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_SupportsSendFrom, METH_NOARGS, NULL },
    {(char *) "GetChannel", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice_GetChannel, METH_NOARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3NonCommunicatingNetDevice__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3NonCommunicatingNetDevice__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3NonCommunicatingNetDevice__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3NonCommunicatingNetDevice__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3NonCommunicatingNetDevice__tp_clear(PyNs3NonCommunicatingNetDevice *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::NonCommunicatingNetDevice *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3NonCommunicatingNetDevice__tp_traverse(PyNs3NonCommunicatingNetDevice *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3NonCommunicatingNetDevice__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3NonCommunicatingNetDevice__tp_dealloc(PyNs3NonCommunicatingNetDevice *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3NonCommunicatingNetDevice__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3NonCommunicatingNetDevice__tp_richcompare (PyNs3NonCommunicatingNetDevice *PYBINDGEN_UNUSED(self), PyNs3NonCommunicatingNetDevice *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3NonCommunicatingNetDevice_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3NonCommunicatingNetDevice_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.NonCommunicatingNetDevice",            /* tp_name */
    sizeof(PyNs3NonCommunicatingNetDevice),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3NonCommunicatingNetDevice__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3NonCommunicatingNetDevice__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3NonCommunicatingNetDevice__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3NonCommunicatingNetDevice__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3NonCommunicatingNetDevice_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3NonCommunicatingNetDevice, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3NonCommunicatingNetDevice__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3ShannonSpectrumErrorModel__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3ShannonSpectrumErrorModel *self)
{
    PyObject *py_retval;
    PyNs3ShannonSpectrumErrorModel__PythonHelper *helper = dynamic_cast< PyNs3ShannonSpectrumErrorModel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3ShannonSpectrumErrorModel__PythonHelper::_wrap_NotifyNewAggregate(PyNs3ShannonSpectrumErrorModel *self)
{
    PyObject *py_retval;
    PyNs3ShannonSpectrumErrorModel__PythonHelper *helper = dynamic_cast< PyNs3ShannonSpectrumErrorModel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3ShannonSpectrumErrorModel__PythonHelper::_wrap_DoStart(PyNs3ShannonSpectrumErrorModel *self)
{
    PyObject *py_retval;
    PyNs3ShannonSpectrumErrorModel__PythonHelper *helper = dynamic_cast< PyNs3ShannonSpectrumErrorModel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoStart of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoStart__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3ShannonSpectrumErrorModel__PythonHelper::_wrap_DoDispose(PyNs3ShannonSpectrumErrorModel *self)
{
    PyObject *py_retval;
    PyNs3ShannonSpectrumErrorModel__PythonHelper *helper = dynamic_cast< PyNs3ShannonSpectrumErrorModel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class ShannonSpectrumErrorModel is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3ShannonSpectrumErrorModel__PythonHelper::EvaluateChunk(ns3::SpectrumValue const & sinr, ns3::Time duration)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ShannonSpectrumErrorModel *self_obj_before;
    PyObject *py_retval;
    PyNs3SpectrumValue *py_SpectrumValue;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "EvaluateChunk"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ShannonSpectrumErrorModel::EvaluateChunk(sinr, duration);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj = (ns3::ShannonSpectrumErrorModel*) this;
    py_SpectrumValue = PyObject_New(PyNs3SpectrumValue, &PyNs3SpectrumValue_Type);
    py_SpectrumValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_SpectrumValue->obj = new ns3::SpectrumValue(sinr);
    PyNs3Empty_wrapper_registry[(void *) py_SpectrumValue->obj] = (PyObject *) py_SpectrumValue;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(duration);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "EvaluateChunk", (char *) "NN", py_SpectrumValue, py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

bool
PyNs3ShannonSpectrumErrorModel__PythonHelper::IsRxCorrect()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ShannonSpectrumErrorModel *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsRxCorrect"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::ShannonSpectrumErrorModel::IsRxCorrect();
    }
    self_obj_before = reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj = (ns3::ShannonSpectrumErrorModel*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsRxCorrect", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::ShannonSpectrumErrorModel::IsRxCorrect();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::ShannonSpectrumErrorModel::IsRxCorrect();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3ShannonSpectrumErrorModel__PythonHelper::StartRx(ns3::Ptr< ns3::Packet const > p)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ShannonSpectrumErrorModel *self_obj_before;
    PyObject *py_retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StartRx"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ShannonSpectrumErrorModel::StartRx(p);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj = (ns3::ShannonSpectrumErrorModel*) this;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::Packet *> (ns3::PeekPointer (p)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_Packet = NULL;
    } else {
        py_Packet = (PyNs3Packet *) wrapper_lookup_iter->second;
        Py_INCREF(py_Packet);
    }
    
    if (py_Packet == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Packet *> (ns3::PeekPointer (p))), &PyNs3Packet_Type);
        py_Packet = PyObject_New(PyNs3Packet, wrapper_type);
        py_Packet->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::Packet *> (ns3::PeekPointer (p))->Ref();
        py_Packet->obj = const_cast<ns3::Packet *> (ns3::PeekPointer (p));
        PyNs3Empty_wrapper_registry[(void *) py_Packet->obj] = (PyObject *) py_Packet;
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StartRx", (char *) "N", py_Packet);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3ShannonSpectrumErrorModel__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ShannonSpectrumErrorModel *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ShannonSpectrumErrorModel::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj = (ns3::ShannonSpectrumErrorModel*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ShannonSpectrumErrorModel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3ShannonSpectrumErrorModel__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3ShannonSpectrumErrorModel__PythonHelper::DoStart()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::DoStart();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoStart", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3ShannonSpectrumErrorModel__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3ShannonSpectrumErrorModel__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3ShannonSpectrumErrorModel__tp_init__0(PyNs3ShannonSpectrumErrorModel *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3ShannonSpectrumErrorModel_Type)
    {
        self->obj = new PyNs3ShannonSpectrumErrorModel__PythonHelper();
        self->obj->Ref ();
        ((PyNs3ShannonSpectrumErrorModel__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::ShannonSpectrumErrorModel();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3ShannonSpectrumErrorModel__tp_init__1(PyNs3ShannonSpectrumErrorModel *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3ShannonSpectrumErrorModel *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3ShannonSpectrumErrorModel_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3ShannonSpectrumErrorModel_Type)
    {
        self->obj = new PyNs3ShannonSpectrumErrorModel__PythonHelper(*((PyNs3ShannonSpectrumErrorModel *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3ShannonSpectrumErrorModel__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::ShannonSpectrumErrorModel(*((PyNs3ShannonSpectrumErrorModel *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3ShannonSpectrumErrorModel__tp_init(PyNs3ShannonSpectrumErrorModel *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3ShannonSpectrumErrorModel__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3ShannonSpectrumErrorModel__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3ShannonSpectrumErrorModel_IsRxCorrect(PyNs3ShannonSpectrumErrorModel *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3ShannonSpectrumErrorModel__PythonHelper *helper_class = dynamic_cast<PyNs3ShannonSpectrumErrorModel__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsRxCorrect()) : (self->obj->ns3::ShannonSpectrumErrorModel::IsRxCorrect());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3ShannonSpectrumErrorModel_EvaluateChunk(PyNs3ShannonSpectrumErrorModel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SpectrumValue *sinr;
    PyObject *duration;
    ns3::Time duration2;
    PyNs3ShannonSpectrumErrorModel__PythonHelper *helper_class = dynamic_cast<PyNs3ShannonSpectrumErrorModel__PythonHelper*> (self->obj);
    const char *keywords[] = {"sinr", "duration", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O", (char **) keywords, &PyNs3SpectrumValue_Type, &sinr, &duration)) {
        return NULL;
    }
    if (PyObject_IsInstance(duration, (PyObject*) &PyNs3Time_Type)) {
        duration2 = *((PyNs3Time *) duration)->obj;
    } else if (PyObject_IsInstance(duration, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        duration2 = *((PyNs3TracedValue__Ns3Time *) duration)->obj;
    } else if (PyObject_IsInstance(duration, (PyObject*) &PyNs3Scalar_Type)) {
        duration2 = *((PyNs3Scalar *) duration)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", duration->ob_type->tp_name);
        return NULL;
    }
    (helper_class == NULL)? (self->obj->EvaluateChunk(*((PyNs3SpectrumValue *) sinr)->obj, duration2)) : (self->obj->ns3::ShannonSpectrumErrorModel::EvaluateChunk(*((PyNs3SpectrumValue *) sinr)->obj, duration2));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3ShannonSpectrumErrorModel_StartRx(PyNs3ShannonSpectrumErrorModel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Packet *p;
    ns3::Packet *p_ptr;
    PyNs3ShannonSpectrumErrorModel__PythonHelper *helper_class = dynamic_cast<PyNs3ShannonSpectrumErrorModel__PythonHelper*> (self->obj);
    const char *keywords[] = {"p", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Packet_Type, &p)) {
        return NULL;
    }
    p_ptr = (p ? p->obj : NULL);
    (helper_class == NULL)? (self->obj->StartRx(ns3::Ptr< ns3::Packet  > (p_ptr))) : (self->obj->ns3::ShannonSpectrumErrorModel::StartRx(ns3::Ptr< ns3::Packet  > (p_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3ShannonSpectrumErrorModel__copy__(PyNs3ShannonSpectrumErrorModel *self)
{

    PyNs3ShannonSpectrumErrorModel *py_copy;
    py_copy = PyObject_GC_New(PyNs3ShannonSpectrumErrorModel, &PyNs3ShannonSpectrumErrorModel_Type);
    py_copy->obj = new ns3::ShannonSpectrumErrorModel(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3ShannonSpectrumErrorModel_methods[] = {
    {(char *) "IsRxCorrect", (PyCFunction) _wrap_PyNs3ShannonSpectrumErrorModel_IsRxCorrect, METH_NOARGS, NULL },
    {(char *) "EvaluateChunk", (PyCFunction) _wrap_PyNs3ShannonSpectrumErrorModel_EvaluateChunk, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "StartRx", (PyCFunction) _wrap_PyNs3ShannonSpectrumErrorModel_StartRx, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3ShannonSpectrumErrorModel__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3ShannonSpectrumErrorModel__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3ShannonSpectrumErrorModel__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3ShannonSpectrumErrorModel__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3ShannonSpectrumErrorModel__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3ShannonSpectrumErrorModel__tp_clear(PyNs3ShannonSpectrumErrorModel *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::ShannonSpectrumErrorModel *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3ShannonSpectrumErrorModel__tp_traverse(PyNs3ShannonSpectrumErrorModel *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3ShannonSpectrumErrorModel__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3ShannonSpectrumErrorModel__tp_dealloc(PyNs3ShannonSpectrumErrorModel *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3ShannonSpectrumErrorModel__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3ShannonSpectrumErrorModel__tp_richcompare (PyNs3ShannonSpectrumErrorModel *PYBINDGEN_UNUSED(self), PyNs3ShannonSpectrumErrorModel *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3ShannonSpectrumErrorModel_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3ShannonSpectrumErrorModel_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.ShannonSpectrumErrorModel",            /* tp_name */
    sizeof(PyNs3ShannonSpectrumErrorModel),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3ShannonSpectrumErrorModel__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3ShannonSpectrumErrorModel__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3ShannonSpectrumErrorModel__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3ShannonSpectrumErrorModel__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3ShannonSpectrumErrorModel_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3ShannonSpectrumErrorModel, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3ShannonSpectrumErrorModel__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3SpectrumAnalyzer__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3SpectrumAnalyzer *self)
{
    PyObject *py_retval;
    PyNs3SpectrumAnalyzer__PythonHelper *helper = dynamic_cast< PyNs3SpectrumAnalyzer__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3SpectrumAnalyzer__PythonHelper::_wrap_NotifyNewAggregate(PyNs3SpectrumAnalyzer *self)
{
    PyObject *py_retval;
    PyNs3SpectrumAnalyzer__PythonHelper *helper = dynamic_cast< PyNs3SpectrumAnalyzer__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3SpectrumAnalyzer__PythonHelper::_wrap_DoStart(PyNs3SpectrumAnalyzer *self)
{
    PyObject *py_retval;
    PyNs3SpectrumAnalyzer__PythonHelper *helper = dynamic_cast< PyNs3SpectrumAnalyzer__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoStart of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoStart__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3SpectrumAnalyzer__PythonHelper::_wrap_DoDispose(PyNs3SpectrumAnalyzer *self)
{
    PyObject *py_retval;
    PyNs3SpectrumAnalyzer__PythonHelper *helper = dynamic_cast< PyNs3SpectrumAnalyzer__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class SpectrumAnalyzer is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

ns3::Ptr< ns3::Object >
PyNs3SpectrumAnalyzer__PythonHelper::GetDevice()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SpectrumAnalyzer *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::Object > retval;
    PyNs3Object *tmp_Object;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetDevice"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SpectrumAnalyzer::GetDevice();
    }
    self_obj_before = reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = (ns3::SpectrumAnalyzer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetDevice", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SpectrumAnalyzer::GetDevice();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Object_Type, &tmp_Object)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SpectrumAnalyzer::GetDevice();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::Object  > (tmp_Object->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::Object >
PyNs3SpectrumAnalyzer__PythonHelper::GetMobility()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SpectrumAnalyzer *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::Object > retval;
    PyNs3Object *tmp_Object;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetMobility"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SpectrumAnalyzer::GetMobility();
    }
    self_obj_before = reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = (ns3::SpectrumAnalyzer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetMobility", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SpectrumAnalyzer::GetMobility();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Object_Type, &tmp_Object)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SpectrumAnalyzer::GetMobility();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::Object  > (tmp_Object->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::SpectrumModel const >
PyNs3SpectrumAnalyzer__PythonHelper::GetRxSpectrumModel() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SpectrumAnalyzer *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumModel const > retval;
    PyNs3SpectrumModel *tmp_SpectrumModel;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetRxSpectrumModel"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SpectrumAnalyzer::GetRxSpectrumModel();
    }
    self_obj_before = reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = const_cast< ns3::SpectrumAnalyzer* >((const ns3::SpectrumAnalyzer*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetRxSpectrumModel", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SpectrumAnalyzer::GetRxSpectrumModel();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SpectrumModel_Type, &tmp_SpectrumModel)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SpectrumAnalyzer::GetRxSpectrumModel();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::SpectrumModel  > (tmp_SpectrumModel->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3SpectrumAnalyzer__PythonHelper::SetChannel(ns3::Ptr< ns3::SpectrumChannel > c)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SpectrumAnalyzer *self_obj_before;
    PyObject *py_retval;
    PyNs3SpectrumChannel *py_SpectrumChannel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetChannel"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::SpectrumAnalyzer::SetChannel(c);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = (ns3::SpectrumAnalyzer*) this;
    if (typeid(*(const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c)))) == typeid(PyNs3SpectrumChannel__PythonHelper))
    {
        py_SpectrumChannel = (PyNs3SpectrumChannel*) (((PyNs3SpectrumChannel__PythonHelper*) const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c)))->m_pyself);
        py_SpectrumChannel->obj = const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c));
        Py_INCREF(py_SpectrumChannel);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_SpectrumChannel = NULL;
        } else {
            py_SpectrumChannel = (PyNs3SpectrumChannel *) wrapper_lookup_iter->second;
            Py_INCREF(py_SpectrumChannel);
        }
    
        if (py_SpectrumChannel == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c))), &PyNs3SpectrumChannel_Type);
            py_SpectrumChannel = PyObject_GC_New(PyNs3SpectrumChannel, wrapper_type);
            py_SpectrumChannel->inst_dict = NULL;
            py_SpectrumChannel->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c))->Ref();
            py_SpectrumChannel->obj = const_cast<ns3::SpectrumChannel *> (ns3::PeekPointer (c));
            PyNs3ObjectBase_wrapper_registry[(void *) py_SpectrumChannel->obj] = (PyObject *) py_SpectrumChannel;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetChannel", (char *) "N", py_SpectrumChannel);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SpectrumAnalyzer__PythonHelper::SetDevice(ns3::Ptr< ns3::Object > d)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SpectrumAnalyzer *self_obj_before;
    PyObject *py_retval;
    PyNs3Object *py_Object;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetDevice"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::SpectrumAnalyzer::SetDevice(d);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = (ns3::SpectrumAnalyzer*) this;
    if (typeid(*(const_cast<ns3::Object *> (ns3::PeekPointer (d)))) == typeid(PyNs3Object__PythonHelper))
    {
        py_Object = (PyNs3Object*) (((PyNs3Object__PythonHelper*) const_cast<ns3::Object *> (ns3::PeekPointer (d)))->m_pyself);
        py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (d));
        Py_INCREF(py_Object);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Object *> (ns3::PeekPointer (d)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Object = NULL;
        } else {
            py_Object = (PyNs3Object *) wrapper_lookup_iter->second;
            Py_INCREF(py_Object);
        }
    
        if (py_Object == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Object *> (ns3::PeekPointer (d))), &PyNs3Object_Type);
            py_Object = PyObject_GC_New(PyNs3Object, wrapper_type);
            py_Object->inst_dict = NULL;
            py_Object->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Object *> (ns3::PeekPointer (d))->Ref();
            py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (d));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Object->obj] = (PyObject *) py_Object;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetDevice", (char *) "N", py_Object);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SpectrumAnalyzer__PythonHelper::SetMobility(ns3::Ptr< ns3::Object > m)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SpectrumAnalyzer *self_obj_before;
    PyObject *py_retval;
    PyNs3Object *py_Object;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetMobility"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::SpectrumAnalyzer::SetMobility(m);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = (ns3::SpectrumAnalyzer*) this;
    if (typeid(*(const_cast<ns3::Object *> (ns3::PeekPointer (m)))) == typeid(PyNs3Object__PythonHelper))
    {
        py_Object = (PyNs3Object*) (((PyNs3Object__PythonHelper*) const_cast<ns3::Object *> (ns3::PeekPointer (m)))->m_pyself);
        py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (m));
        Py_INCREF(py_Object);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Object *> (ns3::PeekPointer (m)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Object = NULL;
        } else {
            py_Object = (PyNs3Object *) wrapper_lookup_iter->second;
            Py_INCREF(py_Object);
        }
    
        if (py_Object == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Object *> (ns3::PeekPointer (m))), &PyNs3Object_Type);
            py_Object = PyObject_GC_New(PyNs3Object, wrapper_type);
            py_Object->inst_dict = NULL;
            py_Object->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Object *> (ns3::PeekPointer (m))->Ref();
            py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (m));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Object->obj] = (PyObject *) py_Object;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetMobility", (char *) "N", py_Object);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SpectrumAnalyzer__PythonHelper::Start()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SpectrumAnalyzer *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Start"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::SpectrumAnalyzer::Start();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = (ns3::SpectrumAnalyzer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Start", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SpectrumAnalyzer__PythonHelper::StartRx(ns3::Ptr< ns3::PacketBurst > pb, ns3::Ptr< ns3::SpectrumValue const > rxPowerSpectralDensity, ns3::SpectrumType st, ns3::Time duration)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SpectrumAnalyzer *self_obj_before;
    PyObject *py_retval;
    PyNs3PacketBurst *py_PacketBurst;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3SpectrumValue *py_SpectrumValue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter2;
    PyTypeObject *wrapper_type2 = 0;
    PyNs3SpectrumType *py_SpectrumType;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StartRx"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::SpectrumAnalyzer::StartRx(pb, rxPowerSpectralDensity, st, duration);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = (ns3::SpectrumAnalyzer*) this;
    if (typeid(*(const_cast<ns3::PacketBurst *> (ns3::PeekPointer (pb)))) == typeid(PyNs3PacketBurst__PythonHelper))
    {
        py_PacketBurst = (PyNs3PacketBurst*) (((PyNs3PacketBurst__PythonHelper*) const_cast<ns3::PacketBurst *> (ns3::PeekPointer (pb)))->m_pyself);
        py_PacketBurst->obj = const_cast<ns3::PacketBurst *> (ns3::PeekPointer (pb));
        Py_INCREF(py_PacketBurst);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::PacketBurst *> (ns3::PeekPointer (pb)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_PacketBurst = NULL;
        } else {
            py_PacketBurst = (PyNs3PacketBurst *) wrapper_lookup_iter->second;
            Py_INCREF(py_PacketBurst);
        }
    
        if (py_PacketBurst == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::PacketBurst *> (ns3::PeekPointer (pb))), &PyNs3PacketBurst_Type);
            py_PacketBurst = PyObject_GC_New(PyNs3PacketBurst, wrapper_type);
            py_PacketBurst->inst_dict = NULL;
            py_PacketBurst->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::PacketBurst *> (ns3::PeekPointer (pb))->Ref();
            py_PacketBurst->obj = const_cast<ns3::PacketBurst *> (ns3::PeekPointer (pb));
            PyNs3ObjectBase_wrapper_registry[(void *) py_PacketBurst->obj] = (PyObject *) py_PacketBurst;
        }
    }
    wrapper_lookup_iter2 = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPowerSpectralDensity)));
    if (wrapper_lookup_iter2 == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumValue = NULL;
    } else {
        py_SpectrumValue = (PyNs3SpectrumValue *) wrapper_lookup_iter2->second;
        Py_INCREF(py_SpectrumValue);
    }
    
    if (py_SpectrumValue == NULL)
    {
        wrapper_type2 = PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPowerSpectralDensity))), &PyNs3SpectrumValue_Type);
        py_SpectrumValue = PyObject_New(PyNs3SpectrumValue, wrapper_type2);
        py_SpectrumValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPowerSpectralDensity))->Ref();
        py_SpectrumValue->obj = const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPowerSpectralDensity));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumValue->obj] = (PyObject *) py_SpectrumValue;
    }
    py_SpectrumType = PyObject_New(PyNs3SpectrumType, &PyNs3SpectrumType_Type);
    py_SpectrumType->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_SpectrumType->obj = new ns3::SpectrumType(st);
    PyNs3SpectrumType_wrapper_registry[(void *) py_SpectrumType->obj] = (PyObject *) py_SpectrumType;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(duration);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StartRx", (char *) "NNNN", py_PacketBurst, py_SpectrumValue, py_SpectrumType, py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SpectrumAnalyzer__PythonHelper::Stop()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SpectrumAnalyzer *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Stop"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::SpectrumAnalyzer::Stop();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = (ns3::SpectrumAnalyzer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Stop", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SpectrumAnalyzer__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SpectrumAnalyzer *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::SpectrumAnalyzer::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = (ns3::SpectrumAnalyzer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SpectrumAnalyzer__PythonHelper::GenerateReport()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SpectrumAnalyzer *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GenerateReport"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = (ns3::SpectrumAnalyzer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GenerateReport", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SpectrumAnalyzer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3SpectrumAnalyzer__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3SpectrumAnalyzer__PythonHelper::DoStart()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::DoStart();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoStart", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SpectrumAnalyzer__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SpectrumAnalyzer__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3SpectrumAnalyzer__tp_init__0(PyNs3SpectrumAnalyzer *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3SpectrumAnalyzer *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumAnalyzer_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3SpectrumAnalyzer_Type)
    {
        self->obj = new PyNs3SpectrumAnalyzer__PythonHelper(*((PyNs3SpectrumAnalyzer *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3SpectrumAnalyzer__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::SpectrumAnalyzer(*((PyNs3SpectrumAnalyzer *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3SpectrumAnalyzer__tp_init__1(PyNs3SpectrumAnalyzer *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3SpectrumAnalyzer_Type)
    {
        self->obj = new PyNs3SpectrumAnalyzer__PythonHelper();
        self->obj->Ref ();
        ((PyNs3SpectrumAnalyzer__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::SpectrumAnalyzer();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3SpectrumAnalyzer__tp_init(PyNs3SpectrumAnalyzer *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3SpectrumAnalyzer__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3SpectrumAnalyzer__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3SpectrumAnalyzer_GetRxSpectrumModel(PyNs3SpectrumAnalyzer *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumModel const > retval;
    PyNs3SpectrumAnalyzer__PythonHelper *helper_class = dynamic_cast<PyNs3SpectrumAnalyzer__PythonHelper*> (self->obj);
    PyNs3SpectrumModel *py_SpectrumModel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetRxSpectrumModel()) : (self->obj->ns3::SpectrumAnalyzer::GetRxSpectrumModel());
    if (!(const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumModel = NULL;
    } else {
        py_SpectrumModel = (PyNs3SpectrumModel *) wrapper_lookup_iter->second;
        Py_INCREF(py_SpectrumModel);
    }
    
    if (py_SpectrumModel == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3SpectrumModel_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumModel__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (retval)))), &PyNs3SpectrumModel_Type);
        py_SpectrumModel = PyObject_New(PyNs3SpectrumModel, wrapper_type);
        py_SpectrumModel->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (retval))->Ref();
        py_SpectrumModel->obj = const_cast<ns3::SpectrumModel *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumModel->obj] = (PyObject *) py_SpectrumModel;
    }
    py_retval = Py_BuildValue((char *) "N", py_SpectrumModel);
    return py_retval;
}


PyObject *
_wrap_PyNs3SpectrumAnalyzer_SetMobility(PyNs3SpectrumAnalyzer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Object *m;
    ns3::Object *m_ptr;
    PyNs3SpectrumAnalyzer__PythonHelper *helper_class = dynamic_cast<PyNs3SpectrumAnalyzer__PythonHelper*> (self->obj);
    const char *keywords[] = {"m", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Object_Type, &m)) {
        return NULL;
    }
    m_ptr = (m ? m->obj : NULL);
    (helper_class == NULL)? (self->obj->SetMobility(ns3::Ptr< ns3::Object  > (m_ptr))) : (self->obj->ns3::SpectrumAnalyzer::SetMobility(ns3::Ptr< ns3::Object  > (m_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3SpectrumAnalyzer_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::SpectrumAnalyzer::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3SpectrumAnalyzer_Stop(PyNs3SpectrumAnalyzer *self)
{
    PyObject *py_retval;
    PyNs3SpectrumAnalyzer__PythonHelper *helper_class = dynamic_cast<PyNs3SpectrumAnalyzer__PythonHelper*> (self->obj);
    
    (helper_class == NULL)? (self->obj->Stop()) : (self->obj->ns3::SpectrumAnalyzer::Stop());
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3SpectrumAnalyzer_Start(PyNs3SpectrumAnalyzer *self)
{
    PyObject *py_retval;
    PyNs3SpectrumAnalyzer__PythonHelper *helper_class = dynamic_cast<PyNs3SpectrumAnalyzer__PythonHelper*> (self->obj);
    
    (helper_class == NULL)? (self->obj->Start()) : (self->obj->ns3::SpectrumAnalyzer::Start());
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3SpectrumAnalyzer_SetChannel(PyNs3SpectrumAnalyzer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SpectrumChannel *c;
    ns3::SpectrumChannel *c_ptr;
    PyNs3SpectrumAnalyzer__PythonHelper *helper_class = dynamic_cast<PyNs3SpectrumAnalyzer__PythonHelper*> (self->obj);
    const char *keywords[] = {"c", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumChannel_Type, &c)) {
        return NULL;
    }
    c_ptr = (c ? c->obj : NULL);
    (helper_class == NULL)? (self->obj->SetChannel(ns3::Ptr< ns3::SpectrumChannel  > (c_ptr))) : (self->obj->ns3::SpectrumAnalyzer::SetChannel(ns3::Ptr< ns3::SpectrumChannel  > (c_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3SpectrumAnalyzer_StartRx(PyNs3SpectrumAnalyzer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3PacketBurst *pb;
    ns3::PacketBurst *pb_ptr;
    PyNs3SpectrumValue *rxPowerSpectralDensity;
    ns3::SpectrumValue *rxPowerSpectralDensity_ptr;
    PyNs3SpectrumType *st;
    PyObject *duration;
    ns3::Time duration2;
    PyNs3SpectrumAnalyzer__PythonHelper *helper_class = dynamic_cast<PyNs3SpectrumAnalyzer__PythonHelper*> (self->obj);
    const char *keywords[] = {"pb", "rxPowerSpectralDensity", "st", "duration", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!O!O", (char **) keywords, &PyNs3PacketBurst_Type, &pb, &PyNs3SpectrumValue_Type, &rxPowerSpectralDensity, &PyNs3SpectrumType_Type, &st, &duration)) {
        return NULL;
    }
    pb_ptr = (pb ? pb->obj : NULL);
    rxPowerSpectralDensity_ptr = (rxPowerSpectralDensity ? rxPowerSpectralDensity->obj : NULL);
    if (PyObject_IsInstance(duration, (PyObject*) &PyNs3Time_Type)) {
        duration2 = *((PyNs3Time *) duration)->obj;
    } else if (PyObject_IsInstance(duration, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        duration2 = *((PyNs3TracedValue__Ns3Time *) duration)->obj;
    } else if (PyObject_IsInstance(duration, (PyObject*) &PyNs3Scalar_Type)) {
        duration2 = *((PyNs3Scalar *) duration)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", duration->ob_type->tp_name);
        return NULL;
    }
    (helper_class == NULL)? (self->obj->StartRx(ns3::Ptr< ns3::PacketBurst  > (pb_ptr), ns3::Ptr< ns3::SpectrumValue  > (rxPowerSpectralDensity_ptr), *((PyNs3SpectrumType *) st)->obj, duration2)) : (self->obj->ns3::SpectrumAnalyzer::StartRx(ns3::Ptr< ns3::PacketBurst  > (pb_ptr), ns3::Ptr< ns3::SpectrumValue  > (rxPowerSpectralDensity_ptr), *((PyNs3SpectrumType *) st)->obj, duration2));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3SpectrumAnalyzer_SetDevice(PyNs3SpectrumAnalyzer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Object *d;
    ns3::Object *d_ptr;
    PyNs3SpectrumAnalyzer__PythonHelper *helper_class = dynamic_cast<PyNs3SpectrumAnalyzer__PythonHelper*> (self->obj);
    const char *keywords[] = {"d", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Object_Type, &d)) {
        return NULL;
    }
    d_ptr = (d ? d->obj : NULL);
    (helper_class == NULL)? (self->obj->SetDevice(ns3::Ptr< ns3::Object  > (d_ptr))) : (self->obj->ns3::SpectrumAnalyzer::SetDevice(ns3::Ptr< ns3::Object  > (d_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3SpectrumAnalyzer_GetMobility(PyNs3SpectrumAnalyzer *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Object > retval;
    PyNs3SpectrumAnalyzer__PythonHelper *helper_class = dynamic_cast<PyNs3SpectrumAnalyzer__PythonHelper*> (self->obj);
    PyNs3Object *py_Object;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetMobility()) : (self->obj->ns3::SpectrumAnalyzer::GetMobility());
    if (!(const_cast<ns3::Object *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::Object *> (ns3::PeekPointer (retval)))) == typeid(PyNs3Object__PythonHelper))
    {
        py_Object = reinterpret_cast< PyNs3Object* >(reinterpret_cast< PyNs3Object__PythonHelper* >(const_cast<ns3::Object *> (ns3::PeekPointer (retval)))->m_pyself);
        py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (retval));
        Py_INCREF(py_Object);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Object *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Object = NULL;
        } else {
            py_Object = (PyNs3Object *) wrapper_lookup_iter->second;
            Py_INCREF(py_Object);
        }
    
        if (py_Object == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Object *> (ns3::PeekPointer (retval)))), &PyNs3Object_Type);
            py_Object = PyObject_GC_New(PyNs3Object, wrapper_type);
            py_Object->inst_dict = NULL;
            py_Object->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Object *> (ns3::PeekPointer (retval))->Ref();
            py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Object->obj] = (PyObject *) py_Object;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_Object);
    return py_retval;
}


PyObject *
_wrap_PyNs3SpectrumAnalyzer_GetDevice(PyNs3SpectrumAnalyzer *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Object > retval;
    PyNs3SpectrumAnalyzer__PythonHelper *helper_class = dynamic_cast<PyNs3SpectrumAnalyzer__PythonHelper*> (self->obj);
    PyNs3Object *py_Object;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetDevice()) : (self->obj->ns3::SpectrumAnalyzer::GetDevice());
    if (!(const_cast<ns3::Object *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::Object *> (ns3::PeekPointer (retval)))) == typeid(PyNs3Object__PythonHelper))
    {
        py_Object = reinterpret_cast< PyNs3Object* >(reinterpret_cast< PyNs3Object__PythonHelper* >(const_cast<ns3::Object *> (ns3::PeekPointer (retval)))->m_pyself);
        py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (retval));
        Py_INCREF(py_Object);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Object *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Object = NULL;
        } else {
            py_Object = (PyNs3Object *) wrapper_lookup_iter->second;
            Py_INCREF(py_Object);
        }
    
        if (py_Object == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Object *> (ns3::PeekPointer (retval)))), &PyNs3Object_Type);
            py_Object = PyObject_GC_New(PyNs3Object, wrapper_type);
            py_Object->inst_dict = NULL;
            py_Object->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Object *> (ns3::PeekPointer (retval))->Ref();
            py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Object->obj] = (PyObject *) py_Object;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_Object);
    return py_retval;
}


PyObject *
_wrap_PyNs3SpectrumAnalyzer_SetRxSpectrumModel(PyNs3SpectrumAnalyzer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SpectrumModel *m;
    ns3::SpectrumModel *m_ptr;
    const char *keywords[] = {"m", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumModel_Type, &m)) {
        return NULL;
    }
    m_ptr = (m ? m->obj : NULL);
    self->obj->SetRxSpectrumModel(ns3::Ptr< ns3::SpectrumModel  > (m_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3SpectrumAnalyzer__copy__(PyNs3SpectrumAnalyzer *self)
{

    PyNs3SpectrumAnalyzer *py_copy;
    py_copy = PyObject_GC_New(PyNs3SpectrumAnalyzer, &PyNs3SpectrumAnalyzer_Type);
    py_copy->obj = new ns3::SpectrumAnalyzer(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3SpectrumAnalyzer_methods[] = {
    {(char *) "GetRxSpectrumModel", (PyCFunction) _wrap_PyNs3SpectrumAnalyzer_GetRxSpectrumModel, METH_NOARGS, NULL },
    {(char *) "SetMobility", (PyCFunction) _wrap_PyNs3SpectrumAnalyzer_SetMobility, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3SpectrumAnalyzer_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Stop", (PyCFunction) _wrap_PyNs3SpectrumAnalyzer_Stop, METH_NOARGS, NULL },
    {(char *) "Start", (PyCFunction) _wrap_PyNs3SpectrumAnalyzer_Start, METH_NOARGS, NULL },
    {(char *) "SetChannel", (PyCFunction) _wrap_PyNs3SpectrumAnalyzer_SetChannel, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "StartRx", (PyCFunction) _wrap_PyNs3SpectrumAnalyzer_StartRx, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetDevice", (PyCFunction) _wrap_PyNs3SpectrumAnalyzer_SetDevice, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetMobility", (PyCFunction) _wrap_PyNs3SpectrumAnalyzer_GetMobility, METH_NOARGS, NULL },
    {(char *) "GetDevice", (PyCFunction) _wrap_PyNs3SpectrumAnalyzer_GetDevice, METH_NOARGS, NULL },
    {(char *) "SetRxSpectrumModel", (PyCFunction) _wrap_PyNs3SpectrumAnalyzer_SetRxSpectrumModel, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3SpectrumAnalyzer__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3SpectrumAnalyzer__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3SpectrumAnalyzer__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3SpectrumAnalyzer__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3SpectrumAnalyzer__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3SpectrumAnalyzer__tp_clear(PyNs3SpectrumAnalyzer *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::SpectrumAnalyzer *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3SpectrumAnalyzer__tp_traverse(PyNs3SpectrumAnalyzer *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3SpectrumAnalyzer__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3SpectrumAnalyzer__tp_dealloc(PyNs3SpectrumAnalyzer *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3SpectrumAnalyzer__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3SpectrumAnalyzer__tp_richcompare (PyNs3SpectrumAnalyzer *PYBINDGEN_UNUSED(self), PyNs3SpectrumAnalyzer *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3SpectrumAnalyzer_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3SpectrumAnalyzer_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.SpectrumAnalyzer",            /* tp_name */
    sizeof(PyNs3SpectrumAnalyzer),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3SpectrumAnalyzer__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3SpectrumAnalyzer__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3SpectrumAnalyzer__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3SpectrumAnalyzer__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3SpectrumAnalyzer_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3SpectrumAnalyzer, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3SpectrumAnalyzer__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3AlohaNoackNetDevice__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper = dynamic_cast< PyNs3AlohaNoackNetDevice__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3AlohaNoackNetDevice__PythonHelper::_wrap_NotifyNewAggregate(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper = dynamic_cast< PyNs3AlohaNoackNetDevice__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3AlohaNoackNetDevice__PythonHelper::_wrap_DoStart(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper = dynamic_cast< PyNs3AlohaNoackNetDevice__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoStart of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoStart__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


ns3::Address
PyNs3AlohaNoackNetDevice__PythonHelper::GetAddress() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Address *tmp_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetAddress"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetAddress();
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = const_cast< ns3::AlohaNoackNetDevice* >((const ns3::AlohaNoackNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetAddress", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetAddress();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Address_Type, &tmp_Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetAddress();
    }
    ns3::Address retval = *tmp_Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Address
PyNs3AlohaNoackNetDevice__PythonHelper::GetBroadcast() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Address *tmp_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetBroadcast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetBroadcast();
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = const_cast< ns3::AlohaNoackNetDevice* >((const ns3::AlohaNoackNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetBroadcast", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetBroadcast();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Address_Type, &tmp_Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetBroadcast();
    }
    ns3::Address retval = *tmp_Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::Channel >
PyNs3AlohaNoackNetDevice__PythonHelper::GetChannel() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::Channel > retval;
    PyNs3Channel *tmp_Channel;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetChannel"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetChannel();
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = const_cast< ns3::AlohaNoackNetDevice* >((const ns3::AlohaNoackNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetChannel", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetChannel();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Channel_Type, &tmp_Channel)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetChannel();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::Channel  > (tmp_Channel->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

uint32_t
PyNs3AlohaNoackNetDevice__PythonHelper::GetIfIndex() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    uint32_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetIfIndex"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetIfIndex();
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = const_cast< ns3::AlohaNoackNetDevice* >((const ns3::AlohaNoackNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetIfIndex", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetIfIndex();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetIfIndex();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

uint16_t
PyNs3AlohaNoackNetDevice__PythonHelper::GetMtu() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    uint16_t retval;
    int tmp;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetMtu"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetMtu();
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = const_cast< ns3::AlohaNoackNetDevice* >((const ns3::AlohaNoackNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetMtu", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetMtu();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "i", &tmp)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetMtu();
    }
    if (tmp > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetMtu();
    }
    retval = tmp;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Address
PyNs3AlohaNoackNetDevice__PythonHelper::GetMulticast(ns3::Ipv4Address addr) const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Ipv4Address *py_Ipv4Address;
    PyNs3Address *tmp_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetMulticast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetMulticast(addr);
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = const_cast< ns3::AlohaNoackNetDevice* >((const ns3::AlohaNoackNetDevice*) this);
    py_Ipv4Address = PyObject_New(PyNs3Ipv4Address, &PyNs3Ipv4Address_Type);
    py_Ipv4Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ipv4Address->obj = new ns3::Ipv4Address(addr);
    PyNs3Ipv4Address_wrapper_registry[(void *) py_Ipv4Address->obj] = (PyObject *) py_Ipv4Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetMulticast", (char *) "N", py_Ipv4Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetMulticast(addr);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Address_Type, &tmp_Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetMulticast(addr);
    }
    ns3::Address retval = *tmp_Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Address
PyNs3AlohaNoackNetDevice__PythonHelper::GetMulticast(ns3::Ipv6Address addr) const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Ipv6Address *py_Ipv6Address;
    PyNs3Address *tmp_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetMulticast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetMulticast(addr);
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = const_cast< ns3::AlohaNoackNetDevice* >((const ns3::AlohaNoackNetDevice*) this);
    py_Ipv6Address = PyObject_New(PyNs3Ipv6Address, &PyNs3Ipv6Address_Type);
    py_Ipv6Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ipv6Address->obj = new ns3::Ipv6Address(addr);
    PyNs3Ipv6Address_wrapper_registry[(void *) py_Ipv6Address->obj] = (PyObject *) py_Ipv6Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetMulticast", (char *) "N", py_Ipv6Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetMulticast(addr);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Address_Type, &tmp_Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetMulticast(addr);
    }
    ns3::Address retval = *tmp_Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::Node >
PyNs3AlohaNoackNetDevice__PythonHelper::GetNode() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::Node > retval;
    PyNs3Node *tmp_Node;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetNode"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetNode();
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = const_cast< ns3::AlohaNoackNetDevice* >((const ns3::AlohaNoackNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetNode", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetNode();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Node_Type, &tmp_Node)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::GetNode();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::Node  > (tmp_Node->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3AlohaNoackNetDevice__PythonHelper::IsBridge() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsBridge"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::IsBridge();
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = const_cast< ns3::AlohaNoackNetDevice* >((const ns3::AlohaNoackNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsBridge", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::IsBridge();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::IsBridge();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3AlohaNoackNetDevice__PythonHelper::IsBroadcast() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsBroadcast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::IsBroadcast();
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = const_cast< ns3::AlohaNoackNetDevice* >((const ns3::AlohaNoackNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsBroadcast", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::IsBroadcast();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::IsBroadcast();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3AlohaNoackNetDevice__PythonHelper::IsLinkUp() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsLinkUp"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::IsLinkUp();
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = const_cast< ns3::AlohaNoackNetDevice* >((const ns3::AlohaNoackNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsLinkUp", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::IsLinkUp();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::IsLinkUp();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3AlohaNoackNetDevice__PythonHelper::IsMulticast() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsMulticast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::IsMulticast();
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = const_cast< ns3::AlohaNoackNetDevice* >((const ns3::AlohaNoackNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsMulticast", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::IsMulticast();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::IsMulticast();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3AlohaNoackNetDevice__PythonHelper::IsPointToPoint() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsPointToPoint"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::IsPointToPoint();
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = const_cast< ns3::AlohaNoackNetDevice* >((const ns3::AlohaNoackNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsPointToPoint", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::IsPointToPoint();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::IsPointToPoint();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3AlohaNoackNetDevice__PythonHelper::NeedsArp() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NeedsArp"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::NeedsArp();
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = const_cast< ns3::AlohaNoackNetDevice* >((const ns3::AlohaNoackNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NeedsArp", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::NeedsArp();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::NeedsArp();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3AlohaNoackNetDevice__PythonHelper::Send(ns3::Ptr< ns3::Packet > packet, ns3::Address const & dest, uint16_t protocolNumber)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3Address *py_Address;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Send"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::Send(packet, dest, protocolNumber);
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = (ns3::AlohaNoackNetDevice*) this;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::Packet *> (ns3::PeekPointer (packet)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_Packet = NULL;
    } else {
        py_Packet = (PyNs3Packet *) wrapper_lookup_iter->second;
        Py_INCREF(py_Packet);
    }
    
    if (py_Packet == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Packet *> (ns3::PeekPointer (packet))), &PyNs3Packet_Type);
        py_Packet = PyObject_New(PyNs3Packet, wrapper_type);
        py_Packet->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::Packet *> (ns3::PeekPointer (packet))->Ref();
        py_Packet->obj = const_cast<ns3::Packet *> (ns3::PeekPointer (packet));
        PyNs3Empty_wrapper_registry[(void *) py_Packet->obj] = (PyObject *) py_Packet;
    }
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(dest);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Send", (char *) "NNi", py_Packet, py_Address, (int) protocolNumber);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::Send(packet, dest, protocolNumber);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::Send(packet, dest, protocolNumber);
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3AlohaNoackNetDevice__PythonHelper::SendFrom(ns3::Ptr< ns3::Packet > packet, ns3::Address const & source, ns3::Address const & dest, uint16_t protocolNumber)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3Address *py_Address;
    PyNs3Address *py_Address2;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SendFrom"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::SendFrom(packet, source, dest, protocolNumber);
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = (ns3::AlohaNoackNetDevice*) this;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::Packet *> (ns3::PeekPointer (packet)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_Packet = NULL;
    } else {
        py_Packet = (PyNs3Packet *) wrapper_lookup_iter->second;
        Py_INCREF(py_Packet);
    }
    
    if (py_Packet == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Packet *> (ns3::PeekPointer (packet))), &PyNs3Packet_Type);
        py_Packet = PyObject_New(PyNs3Packet, wrapper_type);
        py_Packet->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::Packet *> (ns3::PeekPointer (packet))->Ref();
        py_Packet->obj = const_cast<ns3::Packet *> (ns3::PeekPointer (packet));
        PyNs3Empty_wrapper_registry[(void *) py_Packet->obj] = (PyObject *) py_Packet;
    }
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(source);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_Address2 = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address2->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address2->obj = new ns3::Address(dest);
    PyNs3Address_wrapper_registry[(void *) py_Address2->obj] = (PyObject *) py_Address2;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SendFrom", (char *) "NNNi", py_Packet, py_Address, py_Address2, (int) protocolNumber);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::SendFrom(packet, source, dest, protocolNumber);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::SendFrom(packet, source, dest, protocolNumber);
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3AlohaNoackNetDevice__PythonHelper::SetAddress(ns3::Address address)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Address *py_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetAddress"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::AlohaNoackNetDevice::SetAddress(address);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = (ns3::AlohaNoackNetDevice*) this;
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(address);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetAddress", (char *) "N", py_Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3AlohaNoackNetDevice__PythonHelper::SetIfIndex(uint32_t const index)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetIfIndex"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::AlohaNoackNetDevice::SetIfIndex(index);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = (ns3::AlohaNoackNetDevice*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetIfIndex", (char *) "N", PyLong_FromUnsignedLong(index));
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

bool
PyNs3AlohaNoackNetDevice__PythonHelper::SetMtu(uint16_t const mtu)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetMtu"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::SetMtu(mtu);
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = (ns3::AlohaNoackNetDevice*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetMtu", (char *) "i", (int) mtu);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::SetMtu(mtu);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::SetMtu(mtu);
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3AlohaNoackNetDevice__PythonHelper::SetNode(ns3::Ptr< ns3::Node > node)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Node *py_Node;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetNode"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::AlohaNoackNetDevice::SetNode(node);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = (ns3::AlohaNoackNetDevice*) this;
    if (typeid(*(const_cast<ns3::Node *> (ns3::PeekPointer (node)))) == typeid(PyNs3Node__PythonHelper))
    {
        py_Node = (PyNs3Node*) (((PyNs3Node__PythonHelper*) const_cast<ns3::Node *> (ns3::PeekPointer (node)))->m_pyself);
        py_Node->obj = const_cast<ns3::Node *> (ns3::PeekPointer (node));
        Py_INCREF(py_Node);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Node *> (ns3::PeekPointer (node)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Node = NULL;
        } else {
            py_Node = (PyNs3Node *) wrapper_lookup_iter->second;
            Py_INCREF(py_Node);
        }
    
        if (py_Node == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Node *> (ns3::PeekPointer (node))), &PyNs3Node_Type);
            py_Node = PyObject_GC_New(PyNs3Node, wrapper_type);
            py_Node->inst_dict = NULL;
            py_Node->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Node *> (ns3::PeekPointer (node))->Ref();
            py_Node->obj = const_cast<ns3::Node *> (ns3::PeekPointer (node));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Node->obj] = (PyObject *) py_Node;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetNode", (char *) "N", py_Node);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


void
PyNs3AlohaNoackNetDevice__PythonHelper::SetQueue(ns3::Ptr< ns3::Queue > queue)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Queue *py_Queue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetQueue"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::AlohaNoackNetDevice::SetQueue(queue);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = (ns3::AlohaNoackNetDevice*) this;
    if (typeid(*(const_cast<ns3::Queue *> (ns3::PeekPointer (queue)))) == typeid(PyNs3Queue__PythonHelper))
    {
        py_Queue = (PyNs3Queue*) (((PyNs3Queue__PythonHelper*) const_cast<ns3::Queue *> (ns3::PeekPointer (queue)))->m_pyself);
        py_Queue->obj = const_cast<ns3::Queue *> (ns3::PeekPointer (queue));
        Py_INCREF(py_Queue);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Queue *> (ns3::PeekPointer (queue)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Queue = NULL;
        } else {
            py_Queue = (PyNs3Queue *) wrapper_lookup_iter->second;
            Py_INCREF(py_Queue);
        }
    
        if (py_Queue == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Queue *> (ns3::PeekPointer (queue))), &PyNs3Queue_Type);
            py_Queue = PyObject_GC_New(PyNs3Queue, wrapper_type);
            py_Queue->inst_dict = NULL;
            py_Queue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Queue *> (ns3::PeekPointer (queue))->Ref();
            py_Queue->obj = const_cast<ns3::Queue *> (ns3::PeekPointer (queue));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Queue->obj] = (PyObject *) py_Queue;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetQueue", (char *) "N", py_Queue);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


bool
PyNs3AlohaNoackNetDevice__PythonHelper::SupportsSendFrom() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SupportsSendFrom"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::SupportsSendFrom();
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = const_cast< ns3::AlohaNoackNetDevice* >((const ns3::AlohaNoackNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SupportsSendFrom", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::SupportsSendFrom();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::AlohaNoackNetDevice::SupportsSendFrom();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3AlohaNoackNetDevice__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::AlohaNoackNetDevice *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = (ns3::AlohaNoackNetDevice*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3AlohaNoackNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3AlohaNoackNetDevice__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3AlohaNoackNetDevice__PythonHelper::DoStart()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::DoStart();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoStart", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3AlohaNoackNetDevice__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3AlohaNoackNetDevice__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3AlohaNoackNetDevice__tp_init__0(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3AlohaNoackNetDevice *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3AlohaNoackNetDevice_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3AlohaNoackNetDevice_Type)
    {
        self->obj = new PyNs3AlohaNoackNetDevice__PythonHelper(*((PyNs3AlohaNoackNetDevice *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3AlohaNoackNetDevice__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::AlohaNoackNetDevice(*((PyNs3AlohaNoackNetDevice *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3AlohaNoackNetDevice__tp_init__1(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3AlohaNoackNetDevice_Type)
    {
        self->obj = new PyNs3AlohaNoackNetDevice__PythonHelper();
        self->obj->Ref ();
        ((PyNs3AlohaNoackNetDevice__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::AlohaNoackNetDevice();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3AlohaNoackNetDevice__tp_init(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3AlohaNoackNetDevice__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3AlohaNoackNetDevice__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}



PyObject *
_wrap_PyNs3AlohaNoackNetDevice_GetMulticast__0(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Ipv4Address *addr;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"addr", NULL};
    PyNs3Address *py_Address;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv4Address_Type, &addr)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::Address retval = (helper_class == NULL)? (self->obj->GetMulticast(*((PyNs3Ipv4Address *) addr)->obj)) : (self->obj->ns3::AlohaNoackNetDevice::GetMulticast(*((PyNs3Ipv4Address *) addr)->obj));
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}

PyObject *
_wrap_PyNs3AlohaNoackNetDevice_GetMulticast__1(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Ipv6Address *addr;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"addr", NULL};
    PyNs3Address *py_Address;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv6Address_Type, &addr)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::Address retval = (helper_class == NULL)? (self->obj->GetMulticast(*((PyNs3Ipv6Address *) addr)->obj)) : (self->obj->ns3::AlohaNoackNetDevice::GetMulticast(*((PyNs3Ipv6Address *) addr)->obj));
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}

PyObject * _wrap_PyNs3AlohaNoackNetDevice_GetMulticast(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3AlohaNoackNetDevice_GetMulticast__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3AlohaNoackNetDevice_GetMulticast__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_IsPointToPoint(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsPointToPoint()) : (self->obj->ns3::AlohaNoackNetDevice::IsPointToPoint());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::AlohaNoackNetDevice::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_Send(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    PyObject *dest;
    ns3::Address dest2;
    int protocolNumber;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"packet", "dest", "protocolNumber", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!Oi", (char **) keywords, &PyNs3Packet_Type, &packet, &dest, &protocolNumber)) {
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Address_Type)) {
        dest2 = *((PyNs3Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Inet6SocketAddress_Type)) {
        dest2 = *((PyNs3Inet6SocketAddress *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3InetSocketAddress_Type)) {
        dest2 = *((PyNs3InetSocketAddress *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Ipv4Address_Type)) {
        dest2 = *((PyNs3Ipv4Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Ipv6Address_Type)) {
        dest2 = *((PyNs3Ipv6Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Mac48Address_Type)) {
        dest2 = *((PyNs3Mac48Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Mac64Address_Type)) {
        dest2 = *((PyNs3Mac64Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3PacketSocketAddress_Type)) {
        dest2 = *((PyNs3PacketSocketAddress *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3UanAddress_Type)) {
        dest2 = *((PyNs3UanAddress *) dest)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Address, Inet6SocketAddress, InetSocketAddress, Ipv4Address, Ipv6Address, Mac48Address, Mac64Address, PacketSocketAddress, UanAddress), not %s", dest->ob_type->tp_name);
        return NULL;
    }
    if (protocolNumber > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    retval = (helper_class == NULL)? (self->obj->Send(ns3::Ptr< ns3::Packet  > (packet_ptr), dest2, protocolNumber)) : (self->obj->ns3::AlohaNoackNetDevice::Send(ns3::Ptr< ns3::Packet  > (packet_ptr), dest2, protocolNumber));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_GetIfIndex(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    uint32_t retval;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->GetIfIndex()) : (self->obj->ns3::AlohaNoackNetDevice::GetIfIndex());
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_NeedsArp(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->NeedsArp()) : (self->obj->ns3::AlohaNoackNetDevice::NeedsArp());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_SetPhyMacTxStartCallback(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *c;
    ns3::Ptr<PythonCallbackImpl27> c_cb_impl;
    const char *keywords[] = {"c", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &c)) {
        return NULL;
    }
    if (!PyCallable_Check(c)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'c' must be callbale");
        return NULL;
    }
    c_cb_impl = ns3::Create<PythonCallbackImpl27> (c);
    self->obj->SetPhyMacTxStartCallback(ns3::Callback<bool, ns3::Ptr<ns3::Packet>, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (c_cb_impl));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_NotifyReceptionEndOk(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Packet *p;
    ns3::Packet *p_ptr;
    const char *keywords[] = {"p", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Packet_Type, &p)) {
        return NULL;
    }
    p_ptr = (p ? p->obj : NULL);
    self->obj->NotifyReceptionEndOk(ns3::Ptr< ns3::Packet  > (p_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_SetPromiscReceiveCallback(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *cb;
    ns3::Ptr<PythonCallbackImpl28> cb_cb_impl;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &cb)) {
        return NULL;
    }
    if (!PyCallable_Check(cb)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'cb' must be callbale");
        return NULL;
    }
    cb_cb_impl = ns3::Create<PythonCallbackImpl28> (cb);
    (helper_class == NULL)? (self->obj->SetPromiscReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::Address const&, ns3::NetDevice::PacketType, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl))) : (self->obj->ns3::AlohaNoackNetDevice::SetPromiscReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::Address const&, ns3::NetDevice::PacketType, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_GetNode(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Node > retval;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    PyNs3Node *py_Node;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetNode()) : (self->obj->ns3::AlohaNoackNetDevice::GetNode());
    if (!(const_cast<ns3::Node *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::Node *> (ns3::PeekPointer (retval)))) == typeid(PyNs3Node__PythonHelper))
    {
        py_Node = reinterpret_cast< PyNs3Node* >(reinterpret_cast< PyNs3Node__PythonHelper* >(const_cast<ns3::Node *> (ns3::PeekPointer (retval)))->m_pyself);
        py_Node->obj = const_cast<ns3::Node *> (ns3::PeekPointer (retval));
        Py_INCREF(py_Node);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Node *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Node = NULL;
        } else {
            py_Node = (PyNs3Node *) wrapper_lookup_iter->second;
            Py_INCREF(py_Node);
        }
    
        if (py_Node == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Node *> (ns3::PeekPointer (retval)))), &PyNs3Node_Type);
            py_Node = PyObject_GC_New(PyNs3Node, wrapper_type);
            py_Node->inst_dict = NULL;
            py_Node->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Node *> (ns3::PeekPointer (retval))->Ref();
            py_Node->obj = const_cast<ns3::Node *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Node->obj] = (PyObject *) py_Node;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_Node);
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_SendFrom(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    PyObject *source;
    ns3::Address source2;
    PyObject *dest;
    ns3::Address dest2;
    int protocolNumber;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"packet", "source", "dest", "protocolNumber", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!OOi", (char **) keywords, &PyNs3Packet_Type, &packet, &source, &dest, &protocolNumber)) {
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    if (PyObject_IsInstance(source, (PyObject*) &PyNs3Address_Type)) {
        source2 = *((PyNs3Address *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3Inet6SocketAddress_Type)) {
        source2 = *((PyNs3Inet6SocketAddress *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3InetSocketAddress_Type)) {
        source2 = *((PyNs3InetSocketAddress *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3Ipv4Address_Type)) {
        source2 = *((PyNs3Ipv4Address *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3Ipv6Address_Type)) {
        source2 = *((PyNs3Ipv6Address *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3Mac48Address_Type)) {
        source2 = *((PyNs3Mac48Address *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3Mac64Address_Type)) {
        source2 = *((PyNs3Mac64Address *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3PacketSocketAddress_Type)) {
        source2 = *((PyNs3PacketSocketAddress *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3UanAddress_Type)) {
        source2 = *((PyNs3UanAddress *) source)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Address, Inet6SocketAddress, InetSocketAddress, Ipv4Address, Ipv6Address, Mac48Address, Mac64Address, PacketSocketAddress, UanAddress), not %s", source->ob_type->tp_name);
        return NULL;
    }
    if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Address_Type)) {
        dest2 = *((PyNs3Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Inet6SocketAddress_Type)) {
        dest2 = *((PyNs3Inet6SocketAddress *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3InetSocketAddress_Type)) {
        dest2 = *((PyNs3InetSocketAddress *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Ipv4Address_Type)) {
        dest2 = *((PyNs3Ipv4Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Ipv6Address_Type)) {
        dest2 = *((PyNs3Ipv6Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Mac48Address_Type)) {
        dest2 = *((PyNs3Mac48Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Mac64Address_Type)) {
        dest2 = *((PyNs3Mac64Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3PacketSocketAddress_Type)) {
        dest2 = *((PyNs3PacketSocketAddress *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3UanAddress_Type)) {
        dest2 = *((PyNs3UanAddress *) dest)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Address, Inet6SocketAddress, InetSocketAddress, Ipv4Address, Ipv6Address, Mac48Address, Mac64Address, PacketSocketAddress, UanAddress), not %s", dest->ob_type->tp_name);
        return NULL;
    }
    if (protocolNumber > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    retval = (helper_class == NULL)? (self->obj->SendFrom(ns3::Ptr< ns3::Packet  > (packet_ptr), source2, dest2, protocolNumber)) : (self->obj->ns3::AlohaNoackNetDevice::SendFrom(ns3::Ptr< ns3::Packet  > (packet_ptr), source2, dest2, protocolNumber));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_NotifyReceptionStart(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    
    self->obj->NotifyReceptionStart();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_NotifyReceptionEndError(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    
    self->obj->NotifyReceptionEndError();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_SetChannel(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Channel *c;
    ns3::Channel *c_ptr;
    const char *keywords[] = {"c", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Channel_Type, &c)) {
        return NULL;
    }
    c_ptr = (c ? c->obj : NULL);
    self->obj->SetChannel(ns3::Ptr< ns3::Channel  > (c_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_GetMtu(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    uint16_t retval;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->GetMtu()) : (self->obj->ns3::AlohaNoackNetDevice::GetMtu());
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_NotifyTransmissionEnd(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Packet *arg0;
    ns3::Packet *arg0_ptr;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Packet_Type, &arg0)) {
        return NULL;
    }
    arg0_ptr = (arg0 ? arg0->obj : NULL);
    self->obj->NotifyTransmissionEnd(ns3::Ptr< ns3::Packet  > (arg0_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_SetNode(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Node *node;
    ns3::Node *node_ptr;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"node", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Node_Type, &node)) {
        return NULL;
    }
    node_ptr = (node ? node->obj : NULL);
    (helper_class == NULL)? (self->obj->SetNode(ns3::Ptr< ns3::Node  > (node_ptr))) : (self->obj->ns3::AlohaNoackNetDevice::SetNode(ns3::Ptr< ns3::Node  > (node_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_IsBridge(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsBridge()) : (self->obj->ns3::AlohaNoackNetDevice::IsBridge());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_GetAddress(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    PyNs3Address *py_Address;
    
    ns3::Address retval = (helper_class == NULL)? (self->obj->GetAddress()) : (self->obj->ns3::AlohaNoackNetDevice::GetAddress());
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_IsLinkUp(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsLinkUp()) : (self->obj->ns3::AlohaNoackNetDevice::IsLinkUp());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_SetIfIndex(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int index;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"index", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &index)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->SetIfIndex(index)) : (self->obj->ns3::AlohaNoackNetDevice::SetIfIndex(index));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_SetPhy(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Object *phy;
    ns3::Object *phy_ptr;
    const char *keywords[] = {"phy", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Object_Type, &phy)) {
        return NULL;
    }
    phy_ptr = (phy ? phy->obj : NULL);
    self->obj->SetPhy(ns3::Ptr< ns3::Object  > (phy_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_SetAddress(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *address;
    ns3::Address address2;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"address", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &address)) {
        return NULL;
    }
    if (PyObject_IsInstance(address, (PyObject*) &PyNs3Address_Type)) {
        address2 = *((PyNs3Address *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3Inet6SocketAddress_Type)) {
        address2 = *((PyNs3Inet6SocketAddress *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3InetSocketAddress_Type)) {
        address2 = *((PyNs3InetSocketAddress *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3Ipv4Address_Type)) {
        address2 = *((PyNs3Ipv4Address *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3Ipv6Address_Type)) {
        address2 = *((PyNs3Ipv6Address *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3Mac48Address_Type)) {
        address2 = *((PyNs3Mac48Address *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3Mac64Address_Type)) {
        address2 = *((PyNs3Mac64Address *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3PacketSocketAddress_Type)) {
        address2 = *((PyNs3PacketSocketAddress *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3UanAddress_Type)) {
        address2 = *((PyNs3UanAddress *) address)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Address, Inet6SocketAddress, InetSocketAddress, Ipv4Address, Ipv6Address, Mac48Address, Mac64Address, PacketSocketAddress, UanAddress), not %s", address->ob_type->tp_name);
        return NULL;
    }
    (helper_class == NULL)? (self->obj->SetAddress(address2)) : (self->obj->ns3::AlohaNoackNetDevice::SetAddress(address2));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_GetBroadcast(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    PyNs3Address *py_Address;
    
    ns3::Address retval = (helper_class == NULL)? (self->obj->GetBroadcast()) : (self->obj->ns3::AlohaNoackNetDevice::GetBroadcast());
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_AddLinkChangeCallback(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *callback;
    ns3::Ptr<PythonCallbackImpl0> callback_cb_impl;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"callback", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &callback)) {
        return NULL;
    }
    if (!PyCallable_Check(callback)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'callback' must be callbale");
        return NULL;
    }
    callback_cb_impl = ns3::Create<PythonCallbackImpl0> (callback);
    (helper_class == NULL)? (self->obj->AddLinkChangeCallback(ns3::Callback<void, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (callback_cb_impl))) : (self->obj->ns3::AlohaNoackNetDevice::AddLinkChangeCallback(ns3::Callback<void, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (callback_cb_impl)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_SetReceiveCallback(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *cb;
    ns3::Ptr<PythonCallbackImpl29> cb_cb_impl;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &cb)) {
        return NULL;
    }
    if (!PyCallable_Check(cb)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'cb' must be callbale");
        return NULL;
    }
    cb_cb_impl = ns3::Create<PythonCallbackImpl29> (cb);
    (helper_class == NULL)? (self->obj->SetReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl))) : (self->obj->ns3::AlohaNoackNetDevice::SetReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_IsMulticast(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsMulticast()) : (self->obj->ns3::AlohaNoackNetDevice::IsMulticast());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_SetMtu(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    int mtu;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"mtu", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &mtu)) {
        return NULL;
    }
    if (mtu > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    retval = (helper_class == NULL)? (self->obj->SetMtu(mtu)) : (self->obj->ns3::AlohaNoackNetDevice::SetMtu(mtu));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_GetPhy(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Object > retval;
    PyNs3Object *py_Object;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = self->obj->GetPhy();
    if (!(const_cast<ns3::Object *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::Object *> (ns3::PeekPointer (retval)))) == typeid(PyNs3Object__PythonHelper))
    {
        py_Object = reinterpret_cast< PyNs3Object* >(reinterpret_cast< PyNs3Object__PythonHelper* >(const_cast<ns3::Object *> (ns3::PeekPointer (retval)))->m_pyself);
        py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (retval));
        Py_INCREF(py_Object);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Object *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Object = NULL;
        } else {
            py_Object = (PyNs3Object *) wrapper_lookup_iter->second;
            Py_INCREF(py_Object);
        }
    
        if (py_Object == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Object *> (ns3::PeekPointer (retval)))), &PyNs3Object_Type);
            py_Object = PyObject_GC_New(PyNs3Object, wrapper_type);
            py_Object->inst_dict = NULL;
            py_Object->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Object *> (ns3::PeekPointer (retval))->Ref();
            py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Object->obj] = (PyObject *) py_Object;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_Object);
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_SupportsSendFrom(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->SupportsSendFrom()) : (self->obj->ns3::AlohaNoackNetDevice::SupportsSendFrom());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_GetChannel(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Channel > retval;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    PyNs3Channel *py_Channel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetChannel()) : (self->obj->ns3::AlohaNoackNetDevice::GetChannel());
    if (!(const_cast<ns3::Channel *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::Channel *> (ns3::PeekPointer (retval)))) == typeid(PyNs3Channel__PythonHelper))
    {
        py_Channel = reinterpret_cast< PyNs3Channel* >(reinterpret_cast< PyNs3Channel__PythonHelper* >(const_cast<ns3::Channel *> (ns3::PeekPointer (retval)))->m_pyself);
        py_Channel->obj = const_cast<ns3::Channel *> (ns3::PeekPointer (retval));
        Py_INCREF(py_Channel);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Channel *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Channel = NULL;
        } else {
            py_Channel = (PyNs3Channel *) wrapper_lookup_iter->second;
            Py_INCREF(py_Channel);
        }
    
        if (py_Channel == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Channel *> (ns3::PeekPointer (retval)))), &PyNs3Channel_Type);
            py_Channel = PyObject_GC_New(PyNs3Channel, wrapper_type);
            py_Channel->inst_dict = NULL;
            py_Channel->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Channel *> (ns3::PeekPointer (retval))->Ref();
            py_Channel->obj = const_cast<ns3::Channel *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Channel->obj] = (PyObject *) py_Channel;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_Channel);
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_SetQueue(PyNs3AlohaNoackNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Queue *queue;
    ns3::Queue *queue_ptr;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"queue", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Queue_Type, &queue)) {
        return NULL;
    }
    queue_ptr = (queue ? queue->obj : NULL);
    (helper_class == NULL)? (self->obj->SetQueue(ns3::Ptr< ns3::Queue  > (queue_ptr))) : (self->obj->ns3::AlohaNoackNetDevice::SetQueue(ns3::Ptr< ns3::Queue  > (queue_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AlohaNoackNetDevice_IsBroadcast(PyNs3AlohaNoackNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3AlohaNoackNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3AlohaNoackNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsBroadcast()) : (self->obj->ns3::AlohaNoackNetDevice::IsBroadcast());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


static PyObject*
_wrap_PyNs3AlohaNoackNetDevice__copy__(PyNs3AlohaNoackNetDevice *self)
{

    PyNs3AlohaNoackNetDevice *py_copy;
    py_copy = PyObject_GC_New(PyNs3AlohaNoackNetDevice, &PyNs3AlohaNoackNetDevice_Type);
    py_copy->obj = new ns3::AlohaNoackNetDevice(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3AlohaNoackNetDevice_methods[] = {
    {(char *) "GetMulticast", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_GetMulticast, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsPointToPoint", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_IsPointToPoint, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Send", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_Send, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetIfIndex", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_GetIfIndex, METH_NOARGS, NULL },
    {(char *) "NeedsArp", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_NeedsArp, METH_NOARGS, NULL },
    {(char *) "SetPhyMacTxStartCallback", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_SetPhyMacTxStartCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyReceptionEndOk", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_NotifyReceptionEndOk, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetPromiscReceiveCallback", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_SetPromiscReceiveCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetNode", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_GetNode, METH_NOARGS, NULL },
    {(char *) "SendFrom", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_SendFrom, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyReceptionStart", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_NotifyReceptionStart, METH_NOARGS, NULL },
    {(char *) "NotifyReceptionEndError", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_NotifyReceptionEndError, METH_NOARGS, NULL },
    {(char *) "SetChannel", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_SetChannel, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetMtu", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_GetMtu, METH_NOARGS, NULL },
    {(char *) "NotifyTransmissionEnd", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_NotifyTransmissionEnd, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetNode", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_SetNode, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsBridge", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_IsBridge, METH_NOARGS, NULL },
    {(char *) "GetAddress", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_GetAddress, METH_NOARGS, NULL },
    {(char *) "IsLinkUp", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_IsLinkUp, METH_NOARGS, NULL },
    {(char *) "SetIfIndex", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_SetIfIndex, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetPhy", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_SetPhy, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetAddress", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_SetAddress, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetBroadcast", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_GetBroadcast, METH_NOARGS, NULL },
    {(char *) "AddLinkChangeCallback", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_AddLinkChangeCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetReceiveCallback", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_SetReceiveCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsMulticast", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_IsMulticast, METH_NOARGS, NULL },
    {(char *) "SetMtu", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_SetMtu, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetPhy", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_GetPhy, METH_NOARGS, NULL },
    {(char *) "SupportsSendFrom", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_SupportsSendFrom, METH_NOARGS, NULL },
    {(char *) "GetChannel", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_GetChannel, METH_NOARGS, NULL },
    {(char *) "SetQueue", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_SetQueue, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsBroadcast", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice_IsBroadcast, METH_NOARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3AlohaNoackNetDevice__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3AlohaNoackNetDevice__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3AlohaNoackNetDevice__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3AlohaNoackNetDevice__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3AlohaNoackNetDevice__tp_clear(PyNs3AlohaNoackNetDevice *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::AlohaNoackNetDevice *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3AlohaNoackNetDevice__tp_traverse(PyNs3AlohaNoackNetDevice *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3AlohaNoackNetDevice__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3AlohaNoackNetDevice__tp_dealloc(PyNs3AlohaNoackNetDevice *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3AlohaNoackNetDevice__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3AlohaNoackNetDevice__tp_richcompare (PyNs3AlohaNoackNetDevice *PYBINDGEN_UNUSED(self), PyNs3AlohaNoackNetDevice *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3AlohaNoackNetDevice_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3AlohaNoackNetDevice_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.AlohaNoackNetDevice",            /* tp_name */
    sizeof(PyNs3AlohaNoackNetDevice),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3AlohaNoackNetDevice__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3AlohaNoackNetDevice__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3AlohaNoackNetDevice__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3AlohaNoackNetDevice__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3AlohaNoackNetDevice_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3AlohaNoackNetDevice, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3AlohaNoackNetDevice__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3MultiModelSpectrumChannel__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3MultiModelSpectrumChannel *self)
{
    PyObject *py_retval;
    PyNs3MultiModelSpectrumChannel__PythonHelper *helper = dynamic_cast< PyNs3MultiModelSpectrumChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3MultiModelSpectrumChannel__PythonHelper::_wrap_NotifyNewAggregate(PyNs3MultiModelSpectrumChannel *self)
{
    PyObject *py_retval;
    PyNs3MultiModelSpectrumChannel__PythonHelper *helper = dynamic_cast< PyNs3MultiModelSpectrumChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3MultiModelSpectrumChannel__PythonHelper::_wrap_DoStart(PyNs3MultiModelSpectrumChannel *self)
{
    PyObject *py_retval;
    PyNs3MultiModelSpectrumChannel__PythonHelper *helper = dynamic_cast< PyNs3MultiModelSpectrumChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoStart of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoStart__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3MultiModelSpectrumChannel__PythonHelper::_wrap_DoDispose(PyNs3MultiModelSpectrumChannel *self)
{
    PyObject *py_retval;
    PyNs3MultiModelSpectrumChannel__PythonHelper *helper = dynamic_cast< PyNs3MultiModelSpectrumChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class MultiModelSpectrumChannel is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3MultiModelSpectrumChannel__PythonHelper::AddRx(ns3::Ptr< ns3::SpectrumPhy > phy)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MultiModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    PyNs3SpectrumPhy *py_SpectrumPhy;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "AddRx"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::MultiModelSpectrumChannel::AddRx(phy);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = (ns3::MultiModelSpectrumChannel*) this;
    if (typeid(*(const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (phy)))) == typeid(PyNs3SpectrumPhy__PythonHelper))
    {
        py_SpectrumPhy = (PyNs3SpectrumPhy*) (((PyNs3SpectrumPhy__PythonHelper*) const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (phy)))->m_pyself);
        py_SpectrumPhy->obj = const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (phy));
        Py_INCREF(py_SpectrumPhy);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (phy)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_SpectrumPhy = NULL;
        } else {
            py_SpectrumPhy = (PyNs3SpectrumPhy *) wrapper_lookup_iter->second;
            Py_INCREF(py_SpectrumPhy);
        }
    
        if (py_SpectrumPhy == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (phy))), &PyNs3SpectrumPhy_Type);
            py_SpectrumPhy = PyObject_GC_New(PyNs3SpectrumPhy, wrapper_type);
            py_SpectrumPhy->inst_dict = NULL;
            py_SpectrumPhy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (phy))->Ref();
            py_SpectrumPhy->obj = const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (phy));
            PyNs3ObjectBase_wrapper_registry[(void *) py_SpectrumPhy->obj] = (PyObject *) py_SpectrumPhy;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "AddRx", (char *) "N", py_SpectrumPhy);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MultiModelSpectrumChannel__PythonHelper::AddSpectrumPropagationLossModel(ns3::Ptr< ns3::SpectrumPropagationLossModel > loss)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MultiModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    PyNs3SpectrumPropagationLossModel *py_SpectrumPropagationLossModel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "AddSpectrumPropagationLossModel"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::MultiModelSpectrumChannel::AddSpectrumPropagationLossModel(loss);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = (ns3::MultiModelSpectrumChannel*) this;
    if (typeid(*(const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (loss)))) == typeid(PyNs3SpectrumPropagationLossModel__PythonHelper))
    {
        py_SpectrumPropagationLossModel = (PyNs3SpectrumPropagationLossModel*) (((PyNs3SpectrumPropagationLossModel__PythonHelper*) const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (loss)))->m_pyself);
        py_SpectrumPropagationLossModel->obj = const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (loss));
        Py_INCREF(py_SpectrumPropagationLossModel);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (loss)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_SpectrumPropagationLossModel = NULL;
        } else {
            py_SpectrumPropagationLossModel = (PyNs3SpectrumPropagationLossModel *) wrapper_lookup_iter->second;
            Py_INCREF(py_SpectrumPropagationLossModel);
        }
    
        if (py_SpectrumPropagationLossModel == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (loss))), &PyNs3SpectrumPropagationLossModel_Type);
            py_SpectrumPropagationLossModel = PyObject_GC_New(PyNs3SpectrumPropagationLossModel, wrapper_type);
            py_SpectrumPropagationLossModel->inst_dict = NULL;
            py_SpectrumPropagationLossModel->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (loss))->Ref();
            py_SpectrumPropagationLossModel->obj = const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (loss));
            PyNs3ObjectBase_wrapper_registry[(void *) py_SpectrumPropagationLossModel->obj] = (PyObject *) py_SpectrumPropagationLossModel;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "AddSpectrumPropagationLossModel", (char *) "N", py_SpectrumPropagationLossModel);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Ptr< ns3::NetDevice >
PyNs3MultiModelSpectrumChannel__PythonHelper::GetDevice(uint32_t i) const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MultiModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::NetDevice > retval;
    PyNs3NetDevice *tmp_NetDevice;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetDevice"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MultiModelSpectrumChannel::GetDevice(i);
    }
    self_obj_before = reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = const_cast< ns3::MultiModelSpectrumChannel* >((const ns3::MultiModelSpectrumChannel*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetDevice", (char *) "N", PyLong_FromUnsignedLong(i));
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MultiModelSpectrumChannel::GetDevice(i);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3NetDevice_Type, &tmp_NetDevice)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MultiModelSpectrumChannel::GetDevice(i);
    }
    // dangerous!
    retval = ns3::Ptr< ns3::NetDevice  > (tmp_NetDevice->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

uint32_t
PyNs3MultiModelSpectrumChannel__PythonHelper::GetNDevices() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MultiModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    uint32_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetNDevices"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MultiModelSpectrumChannel::GetNDevices();
    }
    self_obj_before = reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = const_cast< ns3::MultiModelSpectrumChannel* >((const ns3::MultiModelSpectrumChannel*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetNDevices", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MultiModelSpectrumChannel::GetNDevices();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MultiModelSpectrumChannel::GetNDevices();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::SpectrumPropagationLossModel >
PyNs3MultiModelSpectrumChannel__PythonHelper::GetSpectrumPropagationLossModel()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MultiModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumPropagationLossModel > retval;
    PyNs3SpectrumPropagationLossModel *tmp_SpectrumPropagationLossModel;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetSpectrumPropagationLossModel"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MultiModelSpectrumChannel::GetSpectrumPropagationLossModel();
    }
    self_obj_before = reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = (ns3::MultiModelSpectrumChannel*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetSpectrumPropagationLossModel", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MultiModelSpectrumChannel::GetSpectrumPropagationLossModel();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SpectrumPropagationLossModel_Type, &tmp_SpectrumPropagationLossModel)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MultiModelSpectrumChannel::GetSpectrumPropagationLossModel();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::SpectrumPropagationLossModel  > (tmp_SpectrumPropagationLossModel->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3MultiModelSpectrumChannel__PythonHelper::SetPropagationDelayModel(ns3::Ptr< ns3::PropagationDelayModel > delay)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MultiModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    PyNs3PropagationDelayModel *py_PropagationDelayModel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetPropagationDelayModel"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::MultiModelSpectrumChannel::SetPropagationDelayModel(delay);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = (ns3::MultiModelSpectrumChannel*) this;
    if (typeid(*(const_cast<ns3::PropagationDelayModel *> (ns3::PeekPointer (delay)))) == typeid(PyNs3PropagationDelayModel__PythonHelper))
    {
        py_PropagationDelayModel = (PyNs3PropagationDelayModel*) (((PyNs3PropagationDelayModel__PythonHelper*) const_cast<ns3::PropagationDelayModel *> (ns3::PeekPointer (delay)))->m_pyself);
        py_PropagationDelayModel->obj = const_cast<ns3::PropagationDelayModel *> (ns3::PeekPointer (delay));
        Py_INCREF(py_PropagationDelayModel);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::PropagationDelayModel *> (ns3::PeekPointer (delay)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_PropagationDelayModel = NULL;
        } else {
            py_PropagationDelayModel = (PyNs3PropagationDelayModel *) wrapper_lookup_iter->second;
            Py_INCREF(py_PropagationDelayModel);
        }
    
        if (py_PropagationDelayModel == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::PropagationDelayModel *> (ns3::PeekPointer (delay))), &PyNs3PropagationDelayModel_Type);
            py_PropagationDelayModel = PyObject_GC_New(PyNs3PropagationDelayModel, wrapper_type);
            py_PropagationDelayModel->inst_dict = NULL;
            py_PropagationDelayModel->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::PropagationDelayModel *> (ns3::PeekPointer (delay))->Ref();
            py_PropagationDelayModel->obj = const_cast<ns3::PropagationDelayModel *> (ns3::PeekPointer (delay));
            PyNs3ObjectBase_wrapper_registry[(void *) py_PropagationDelayModel->obj] = (PyObject *) py_PropagationDelayModel;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetPropagationDelayModel", (char *) "N", py_PropagationDelayModel);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MultiModelSpectrumChannel__PythonHelper::StartTx(ns3::Ptr< ns3::PacketBurst > p, ns3::Ptr< ns3::SpectrumValue > txPsd, ns3::SpectrumType st, ns3::Time duration, ns3::Ptr< ns3::SpectrumPhy > sender)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MultiModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    PyNs3PacketBurst *py_PacketBurst;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3SpectrumValue *py_SpectrumValue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter2;
    PyTypeObject *wrapper_type2 = 0;
    PyNs3SpectrumType *py_SpectrumType;
    PyNs3Time *py_Time;
    PyNs3SpectrumPhy *py_SpectrumPhy;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter3;
    PyTypeObject *wrapper_type3 = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StartTx"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::MultiModelSpectrumChannel::StartTx(p, txPsd, st, duration, sender);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = (ns3::MultiModelSpectrumChannel*) this;
    if (typeid(*(const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)))) == typeid(PyNs3PacketBurst__PythonHelper))
    {
        py_PacketBurst = (PyNs3PacketBurst*) (((PyNs3PacketBurst__PythonHelper*) const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)))->m_pyself);
        py_PacketBurst->obj = const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p));
        Py_INCREF(py_PacketBurst);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_PacketBurst = NULL;
        } else {
            py_PacketBurst = (PyNs3PacketBurst *) wrapper_lookup_iter->second;
            Py_INCREF(py_PacketBurst);
        }
    
        if (py_PacketBurst == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p))), &PyNs3PacketBurst_Type);
            py_PacketBurst = PyObject_GC_New(PyNs3PacketBurst, wrapper_type);
            py_PacketBurst->inst_dict = NULL;
            py_PacketBurst->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p))->Ref();
            py_PacketBurst->obj = const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p));
            PyNs3ObjectBase_wrapper_registry[(void *) py_PacketBurst->obj] = (PyObject *) py_PacketBurst;
        }
    }
    wrapper_lookup_iter2 = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (txPsd)));
    if (wrapper_lookup_iter2 == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumValue = NULL;
    } else {
        py_SpectrumValue = (PyNs3SpectrumValue *) wrapper_lookup_iter2->second;
        Py_INCREF(py_SpectrumValue);
    }
    
    if (py_SpectrumValue == NULL)
    {
        wrapper_type2 = PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (txPsd))), &PyNs3SpectrumValue_Type);
        py_SpectrumValue = PyObject_New(PyNs3SpectrumValue, wrapper_type2);
        py_SpectrumValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (txPsd))->Ref();
        py_SpectrumValue->obj = const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (txPsd));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumValue->obj] = (PyObject *) py_SpectrumValue;
    }
    py_SpectrumType = PyObject_New(PyNs3SpectrumType, &PyNs3SpectrumType_Type);
    py_SpectrumType->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_SpectrumType->obj = new ns3::SpectrumType(st);
    PyNs3SpectrumType_wrapper_registry[(void *) py_SpectrumType->obj] = (PyObject *) py_SpectrumType;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(duration);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    if (typeid(*(const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (sender)))) == typeid(PyNs3SpectrumPhy__PythonHelper))
    {
        py_SpectrumPhy = (PyNs3SpectrumPhy*) (((PyNs3SpectrumPhy__PythonHelper*) const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (sender)))->m_pyself);
        py_SpectrumPhy->obj = const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (sender));
        Py_INCREF(py_SpectrumPhy);
    } else {
        wrapper_lookup_iter3 = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (sender)));
        if (wrapper_lookup_iter3 == PyNs3ObjectBase_wrapper_registry.end()) {
            py_SpectrumPhy = NULL;
        } else {
            py_SpectrumPhy = (PyNs3SpectrumPhy *) wrapper_lookup_iter3->second;
            Py_INCREF(py_SpectrumPhy);
        }
    
        if (py_SpectrumPhy == NULL)
        {
            wrapper_type3 = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (sender))), &PyNs3SpectrumPhy_Type);
            py_SpectrumPhy = PyObject_GC_New(PyNs3SpectrumPhy, wrapper_type3);
            py_SpectrumPhy->inst_dict = NULL;
            py_SpectrumPhy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (sender))->Ref();
            py_SpectrumPhy->obj = const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (sender));
            PyNs3ObjectBase_wrapper_registry[(void *) py_SpectrumPhy->obj] = (PyObject *) py_SpectrumPhy;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StartTx", (char *) "NNNNN", py_PacketBurst, py_SpectrumValue, py_SpectrumType, py_Time, py_SpectrumPhy);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MultiModelSpectrumChannel__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MultiModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::MultiModelSpectrumChannel::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = (ns3::MultiModelSpectrumChannel*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MultiModelSpectrumChannel__PythonHelper::StartRx(ns3::Ptr< ns3::PacketBurst > p, ns3::Ptr< ns3::SpectrumValue > rxPowerSpectrum, ns3::SpectrumType st, ns3::Time duration, ns3::Ptr< ns3::SpectrumPhy > receiver)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MultiModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    PyNs3PacketBurst *py_PacketBurst;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3SpectrumValue *py_SpectrumValue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter2;
    PyTypeObject *wrapper_type2 = 0;
    PyNs3SpectrumType *py_SpectrumType;
    PyNs3Time *py_Time;
    PyNs3SpectrumPhy *py_SpectrumPhy;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter3;
    PyTypeObject *wrapper_type3 = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StartRx"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = (ns3::MultiModelSpectrumChannel*) this;
    if (typeid(*(const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)))) == typeid(PyNs3PacketBurst__PythonHelper))
    {
        py_PacketBurst = (PyNs3PacketBurst*) (((PyNs3PacketBurst__PythonHelper*) const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)))->m_pyself);
        py_PacketBurst->obj = const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p));
        Py_INCREF(py_PacketBurst);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_PacketBurst = NULL;
        } else {
            py_PacketBurst = (PyNs3PacketBurst *) wrapper_lookup_iter->second;
            Py_INCREF(py_PacketBurst);
        }
    
        if (py_PacketBurst == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p))), &PyNs3PacketBurst_Type);
            py_PacketBurst = PyObject_GC_New(PyNs3PacketBurst, wrapper_type);
            py_PacketBurst->inst_dict = NULL;
            py_PacketBurst->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p))->Ref();
            py_PacketBurst->obj = const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p));
            PyNs3ObjectBase_wrapper_registry[(void *) py_PacketBurst->obj] = (PyObject *) py_PacketBurst;
        }
    }
    wrapper_lookup_iter2 = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPowerSpectrum)));
    if (wrapper_lookup_iter2 == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumValue = NULL;
    } else {
        py_SpectrumValue = (PyNs3SpectrumValue *) wrapper_lookup_iter2->second;
        Py_INCREF(py_SpectrumValue);
    }
    
    if (py_SpectrumValue == NULL)
    {
        wrapper_type2 = PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPowerSpectrum))), &PyNs3SpectrumValue_Type);
        py_SpectrumValue = PyObject_New(PyNs3SpectrumValue, wrapper_type2);
        py_SpectrumValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPowerSpectrum))->Ref();
        py_SpectrumValue->obj = const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPowerSpectrum));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumValue->obj] = (PyObject *) py_SpectrumValue;
    }
    py_SpectrumType = PyObject_New(PyNs3SpectrumType, &PyNs3SpectrumType_Type);
    py_SpectrumType->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_SpectrumType->obj = new ns3::SpectrumType(st);
    PyNs3SpectrumType_wrapper_registry[(void *) py_SpectrumType->obj] = (PyObject *) py_SpectrumType;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(duration);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    if (typeid(*(const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (receiver)))) == typeid(PyNs3SpectrumPhy__PythonHelper))
    {
        py_SpectrumPhy = (PyNs3SpectrumPhy*) (((PyNs3SpectrumPhy__PythonHelper*) const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (receiver)))->m_pyself);
        py_SpectrumPhy->obj = const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (receiver));
        Py_INCREF(py_SpectrumPhy);
    } else {
        wrapper_lookup_iter3 = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (receiver)));
        if (wrapper_lookup_iter3 == PyNs3ObjectBase_wrapper_registry.end()) {
            py_SpectrumPhy = NULL;
        } else {
            py_SpectrumPhy = (PyNs3SpectrumPhy *) wrapper_lookup_iter3->second;
            Py_INCREF(py_SpectrumPhy);
        }
    
        if (py_SpectrumPhy == NULL)
        {
            wrapper_type3 = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (receiver))), &PyNs3SpectrumPhy_Type);
            py_SpectrumPhy = PyObject_GC_New(PyNs3SpectrumPhy, wrapper_type3);
            py_SpectrumPhy->inst_dict = NULL;
            py_SpectrumPhy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (receiver))->Ref();
            py_SpectrumPhy->obj = const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (receiver));
            PyNs3ObjectBase_wrapper_registry[(void *) py_SpectrumPhy->obj] = (PyObject *) py_SpectrumPhy;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StartRx", (char *) "NNNNN", py_PacketBurst, py_SpectrumValue, py_SpectrumType, py_Time, py_SpectrumPhy);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MultiModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3MultiModelSpectrumChannel__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3MultiModelSpectrumChannel__PythonHelper::DoStart()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::DoStart();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoStart", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MultiModelSpectrumChannel__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MultiModelSpectrumChannel__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3MultiModelSpectrumChannel__tp_init__0(PyNs3MultiModelSpectrumChannel *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3MultiModelSpectrumChannel *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3MultiModelSpectrumChannel_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3MultiModelSpectrumChannel_Type)
    {
        self->obj = new PyNs3MultiModelSpectrumChannel__PythonHelper(*((PyNs3MultiModelSpectrumChannel *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3MultiModelSpectrumChannel__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::MultiModelSpectrumChannel(*((PyNs3MultiModelSpectrumChannel *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3MultiModelSpectrumChannel__tp_init__1(PyNs3MultiModelSpectrumChannel *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3MultiModelSpectrumChannel_Type)
    {
        self->obj = new PyNs3MultiModelSpectrumChannel__PythonHelper();
        self->obj->Ref ();
        ((PyNs3MultiModelSpectrumChannel__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::MultiModelSpectrumChannel();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3MultiModelSpectrumChannel__tp_init(PyNs3MultiModelSpectrumChannel *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3MultiModelSpectrumChannel__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3MultiModelSpectrumChannel__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3MultiModelSpectrumChannel_StartTx(PyNs3MultiModelSpectrumChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3PacketBurst *p;
    ns3::PacketBurst *p_ptr;
    PyNs3SpectrumValue *txPsd;
    ns3::SpectrumValue *txPsd_ptr;
    PyNs3SpectrumType *st;
    PyObject *duration;
    ns3::Time duration2;
    PyNs3SpectrumPhy *sender;
    ns3::SpectrumPhy *sender_ptr;
    PyNs3MultiModelSpectrumChannel__PythonHelper *helper_class = dynamic_cast<PyNs3MultiModelSpectrumChannel__PythonHelper*> (self->obj);
    const char *keywords[] = {"p", "txPsd", "st", "duration", "sender", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!O!OO!", (char **) keywords, &PyNs3PacketBurst_Type, &p, &PyNs3SpectrumValue_Type, &txPsd, &PyNs3SpectrumType_Type, &st, &duration, &PyNs3SpectrumPhy_Type, &sender)) {
        return NULL;
    }
    p_ptr = (p ? p->obj : NULL);
    txPsd_ptr = (txPsd ? txPsd->obj : NULL);
    if (PyObject_IsInstance(duration, (PyObject*) &PyNs3Time_Type)) {
        duration2 = *((PyNs3Time *) duration)->obj;
    } else if (PyObject_IsInstance(duration, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        duration2 = *((PyNs3TracedValue__Ns3Time *) duration)->obj;
    } else if (PyObject_IsInstance(duration, (PyObject*) &PyNs3Scalar_Type)) {
        duration2 = *((PyNs3Scalar *) duration)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", duration->ob_type->tp_name);
        return NULL;
    }
    sender_ptr = (sender ? sender->obj : NULL);
    (helper_class == NULL)? (self->obj->StartTx(ns3::Ptr< ns3::PacketBurst  > (p_ptr), ns3::Ptr< ns3::SpectrumValue  > (txPsd_ptr), *((PyNs3SpectrumType *) st)->obj, duration2, ns3::Ptr< ns3::SpectrumPhy  > (sender_ptr))) : (self->obj->ns3::MultiModelSpectrumChannel::StartTx(ns3::Ptr< ns3::PacketBurst  > (p_ptr), ns3::Ptr< ns3::SpectrumValue  > (txPsd_ptr), *((PyNs3SpectrumType *) st)->obj, duration2, ns3::Ptr< ns3::SpectrumPhy  > (sender_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MultiModelSpectrumChannel_GetSpectrumPropagationLossModel(PyNs3MultiModelSpectrumChannel *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumPropagationLossModel > retval;
    PyNs3MultiModelSpectrumChannel__PythonHelper *helper_class = dynamic_cast<PyNs3MultiModelSpectrumChannel__PythonHelper*> (self->obj);
    PyNs3SpectrumPropagationLossModel *py_SpectrumPropagationLossModel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetSpectrumPropagationLossModel()) : (self->obj->ns3::MultiModelSpectrumChannel::GetSpectrumPropagationLossModel());
    if (!(const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (retval)))) == typeid(PyNs3SpectrumPropagationLossModel__PythonHelper))
    {
        py_SpectrumPropagationLossModel = reinterpret_cast< PyNs3SpectrumPropagationLossModel* >(reinterpret_cast< PyNs3SpectrumPropagationLossModel__PythonHelper* >(const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (retval)))->m_pyself);
        py_SpectrumPropagationLossModel->obj = const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (retval));
        Py_INCREF(py_SpectrumPropagationLossModel);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_SpectrumPropagationLossModel = NULL;
        } else {
            py_SpectrumPropagationLossModel = (PyNs3SpectrumPropagationLossModel *) wrapper_lookup_iter->second;
            Py_INCREF(py_SpectrumPropagationLossModel);
        }
    
        if (py_SpectrumPropagationLossModel == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (retval)))), &PyNs3SpectrumPropagationLossModel_Type);
            py_SpectrumPropagationLossModel = PyObject_GC_New(PyNs3SpectrumPropagationLossModel, wrapper_type);
            py_SpectrumPropagationLossModel->inst_dict = NULL;
            py_SpectrumPropagationLossModel->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (retval))->Ref();
            py_SpectrumPropagationLossModel->obj = const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_SpectrumPropagationLossModel->obj] = (PyObject *) py_SpectrumPropagationLossModel;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_SpectrumPropagationLossModel);
    return py_retval;
}


PyObject *
_wrap_PyNs3MultiModelSpectrumChannel_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::MultiModelSpectrumChannel::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3MultiModelSpectrumChannel_GetNDevices(PyNs3MultiModelSpectrumChannel *self)
{
    PyObject *py_retval;
    uint32_t retval;
    PyNs3MultiModelSpectrumChannel__PythonHelper *helper_class = dynamic_cast<PyNs3MultiModelSpectrumChannel__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->GetNDevices()) : (self->obj->ns3::MultiModelSpectrumChannel::GetNDevices());
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MultiModelSpectrumChannel_AddSpectrumPropagationLossModel(PyNs3MultiModelSpectrumChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SpectrumPropagationLossModel *loss;
    ns3::SpectrumPropagationLossModel *loss_ptr;
    PyNs3MultiModelSpectrumChannel__PythonHelper *helper_class = dynamic_cast<PyNs3MultiModelSpectrumChannel__PythonHelper*> (self->obj);
    const char *keywords[] = {"loss", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumPropagationLossModel_Type, &loss)) {
        return NULL;
    }
    loss_ptr = (loss ? loss->obj : NULL);
    (helper_class == NULL)? (self->obj->AddSpectrumPropagationLossModel(ns3::Ptr< ns3::SpectrumPropagationLossModel  > (loss_ptr))) : (self->obj->ns3::MultiModelSpectrumChannel::AddSpectrumPropagationLossModel(ns3::Ptr< ns3::SpectrumPropagationLossModel  > (loss_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MultiModelSpectrumChannel_SetPropagationDelayModel(PyNs3MultiModelSpectrumChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3PropagationDelayModel *delay;
    ns3::PropagationDelayModel *delay_ptr;
    PyNs3MultiModelSpectrumChannel__PythonHelper *helper_class = dynamic_cast<PyNs3MultiModelSpectrumChannel__PythonHelper*> (self->obj);
    const char *keywords[] = {"delay", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3PropagationDelayModel_Type, &delay)) {
        return NULL;
    }
    delay_ptr = (delay ? delay->obj : NULL);
    (helper_class == NULL)? (self->obj->SetPropagationDelayModel(ns3::Ptr< ns3::PropagationDelayModel  > (delay_ptr))) : (self->obj->ns3::MultiModelSpectrumChannel::SetPropagationDelayModel(ns3::Ptr< ns3::PropagationDelayModel  > (delay_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MultiModelSpectrumChannel_GetDevice(PyNs3MultiModelSpectrumChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::NetDevice > retval;
    unsigned int i;
    PyNs3MultiModelSpectrumChannel__PythonHelper *helper_class = dynamic_cast<PyNs3MultiModelSpectrumChannel__PythonHelper*> (self->obj);
    const char *keywords[] = {"i", NULL};
    PyNs3NetDevice *py_NetDevice;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &i)) {
        return NULL;
    }
    retval = (helper_class == NULL)? (self->obj->GetDevice(i)) : (self->obj->ns3::MultiModelSpectrumChannel::GetDevice(i));
    if (!(const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_NetDevice = NULL;
    } else {
        py_NetDevice = (PyNs3NetDevice *) wrapper_lookup_iter->second;
        Py_INCREF(py_NetDevice);
    }
    
    if (py_NetDevice == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)))), &PyNs3NetDevice_Type);
        py_NetDevice = PyObject_GC_New(PyNs3NetDevice, wrapper_type);
        py_NetDevice->inst_dict = NULL;
        py_NetDevice->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval))->Ref();
        py_NetDevice->obj = const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval));
        PyNs3ObjectBase_wrapper_registry[(void *) py_NetDevice->obj] = (PyObject *) py_NetDevice;
    }
    py_retval = Py_BuildValue((char *) "N", py_NetDevice);
    return py_retval;
}


PyObject *
_wrap_PyNs3MultiModelSpectrumChannel_AddRx(PyNs3MultiModelSpectrumChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SpectrumPhy *phy;
    ns3::SpectrumPhy *phy_ptr;
    PyNs3MultiModelSpectrumChannel__PythonHelper *helper_class = dynamic_cast<PyNs3MultiModelSpectrumChannel__PythonHelper*> (self->obj);
    const char *keywords[] = {"phy", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumPhy_Type, &phy)) {
        return NULL;
    }
    phy_ptr = (phy ? phy->obj : NULL);
    (helper_class == NULL)? (self->obj->AddRx(ns3::Ptr< ns3::SpectrumPhy  > (phy_ptr))) : (self->obj->ns3::MultiModelSpectrumChannel::AddRx(ns3::Ptr< ns3::SpectrumPhy  > (phy_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3MultiModelSpectrumChannel__copy__(PyNs3MultiModelSpectrumChannel *self)
{

    PyNs3MultiModelSpectrumChannel *py_copy;
    py_copy = PyObject_GC_New(PyNs3MultiModelSpectrumChannel, &PyNs3MultiModelSpectrumChannel_Type);
    py_copy->obj = new ns3::MultiModelSpectrumChannel(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3MultiModelSpectrumChannel_methods[] = {
    {(char *) "StartTx", (PyCFunction) _wrap_PyNs3MultiModelSpectrumChannel_StartTx, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetSpectrumPropagationLossModel", (PyCFunction) _wrap_PyNs3MultiModelSpectrumChannel_GetSpectrumPropagationLossModel, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3MultiModelSpectrumChannel_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "GetNDevices", (PyCFunction) _wrap_PyNs3MultiModelSpectrumChannel_GetNDevices, METH_NOARGS, NULL },
    {(char *) "AddSpectrumPropagationLossModel", (PyCFunction) _wrap_PyNs3MultiModelSpectrumChannel_AddSpectrumPropagationLossModel, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetPropagationDelayModel", (PyCFunction) _wrap_PyNs3MultiModelSpectrumChannel_SetPropagationDelayModel, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetDevice", (PyCFunction) _wrap_PyNs3MultiModelSpectrumChannel_GetDevice, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "AddRx", (PyCFunction) _wrap_PyNs3MultiModelSpectrumChannel_AddRx, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3MultiModelSpectrumChannel__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3MultiModelSpectrumChannel__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3MultiModelSpectrumChannel__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3MultiModelSpectrumChannel__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3MultiModelSpectrumChannel__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3MultiModelSpectrumChannel__tp_clear(PyNs3MultiModelSpectrumChannel *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::MultiModelSpectrumChannel *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3MultiModelSpectrumChannel__tp_traverse(PyNs3MultiModelSpectrumChannel *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3MultiModelSpectrumChannel__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3MultiModelSpectrumChannel__tp_dealloc(PyNs3MultiModelSpectrumChannel *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3MultiModelSpectrumChannel__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3MultiModelSpectrumChannel__tp_richcompare (PyNs3MultiModelSpectrumChannel *PYBINDGEN_UNUSED(self), PyNs3MultiModelSpectrumChannel *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3MultiModelSpectrumChannel_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3MultiModelSpectrumChannel_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.MultiModelSpectrumChannel",            /* tp_name */
    sizeof(PyNs3MultiModelSpectrumChannel),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3MultiModelSpectrumChannel__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3MultiModelSpectrumChannel__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3MultiModelSpectrumChannel__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3MultiModelSpectrumChannel__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3MultiModelSpectrumChannel_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3MultiModelSpectrumChannel, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3MultiModelSpectrumChannel__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3SingleModelSpectrumChannel__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3SingleModelSpectrumChannel *self)
{
    PyObject *py_retval;
    PyNs3SingleModelSpectrumChannel__PythonHelper *helper = dynamic_cast< PyNs3SingleModelSpectrumChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3SingleModelSpectrumChannel__PythonHelper::_wrap_NotifyNewAggregate(PyNs3SingleModelSpectrumChannel *self)
{
    PyObject *py_retval;
    PyNs3SingleModelSpectrumChannel__PythonHelper *helper = dynamic_cast< PyNs3SingleModelSpectrumChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3SingleModelSpectrumChannel__PythonHelper::_wrap_DoStart(PyNs3SingleModelSpectrumChannel *self)
{
    PyObject *py_retval;
    PyNs3SingleModelSpectrumChannel__PythonHelper *helper = dynamic_cast< PyNs3SingleModelSpectrumChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoStart of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoStart__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3SingleModelSpectrumChannel__PythonHelper::AddRx(ns3::Ptr< ns3::SpectrumPhy > phy)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SingleModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    PyNs3SpectrumPhy *py_SpectrumPhy;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "AddRx"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::SingleModelSpectrumChannel::AddRx(phy);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = (ns3::SingleModelSpectrumChannel*) this;
    if (typeid(*(const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (phy)))) == typeid(PyNs3SpectrumPhy__PythonHelper))
    {
        py_SpectrumPhy = (PyNs3SpectrumPhy*) (((PyNs3SpectrumPhy__PythonHelper*) const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (phy)))->m_pyself);
        py_SpectrumPhy->obj = const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (phy));
        Py_INCREF(py_SpectrumPhy);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (phy)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_SpectrumPhy = NULL;
        } else {
            py_SpectrumPhy = (PyNs3SpectrumPhy *) wrapper_lookup_iter->second;
            Py_INCREF(py_SpectrumPhy);
        }
    
        if (py_SpectrumPhy == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (phy))), &PyNs3SpectrumPhy_Type);
            py_SpectrumPhy = PyObject_GC_New(PyNs3SpectrumPhy, wrapper_type);
            py_SpectrumPhy->inst_dict = NULL;
            py_SpectrumPhy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (phy))->Ref();
            py_SpectrumPhy->obj = const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (phy));
            PyNs3ObjectBase_wrapper_registry[(void *) py_SpectrumPhy->obj] = (PyObject *) py_SpectrumPhy;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "AddRx", (char *) "N", py_SpectrumPhy);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SingleModelSpectrumChannel__PythonHelper::AddSpectrumPropagationLossModel(ns3::Ptr< ns3::SpectrumPropagationLossModel > loss)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SingleModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    PyNs3SpectrumPropagationLossModel *py_SpectrumPropagationLossModel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "AddSpectrumPropagationLossModel"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::SingleModelSpectrumChannel::AddSpectrumPropagationLossModel(loss);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = (ns3::SingleModelSpectrumChannel*) this;
    if (typeid(*(const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (loss)))) == typeid(PyNs3SpectrumPropagationLossModel__PythonHelper))
    {
        py_SpectrumPropagationLossModel = (PyNs3SpectrumPropagationLossModel*) (((PyNs3SpectrumPropagationLossModel__PythonHelper*) const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (loss)))->m_pyself);
        py_SpectrumPropagationLossModel->obj = const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (loss));
        Py_INCREF(py_SpectrumPropagationLossModel);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (loss)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_SpectrumPropagationLossModel = NULL;
        } else {
            py_SpectrumPropagationLossModel = (PyNs3SpectrumPropagationLossModel *) wrapper_lookup_iter->second;
            Py_INCREF(py_SpectrumPropagationLossModel);
        }
    
        if (py_SpectrumPropagationLossModel == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (loss))), &PyNs3SpectrumPropagationLossModel_Type);
            py_SpectrumPropagationLossModel = PyObject_GC_New(PyNs3SpectrumPropagationLossModel, wrapper_type);
            py_SpectrumPropagationLossModel->inst_dict = NULL;
            py_SpectrumPropagationLossModel->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (loss))->Ref();
            py_SpectrumPropagationLossModel->obj = const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (loss));
            PyNs3ObjectBase_wrapper_registry[(void *) py_SpectrumPropagationLossModel->obj] = (PyObject *) py_SpectrumPropagationLossModel;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "AddSpectrumPropagationLossModel", (char *) "N", py_SpectrumPropagationLossModel);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Ptr< ns3::NetDevice >
PyNs3SingleModelSpectrumChannel__PythonHelper::GetDevice(uint32_t i) const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SingleModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::NetDevice > retval;
    PyNs3NetDevice *tmp_NetDevice;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetDevice"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SingleModelSpectrumChannel::GetDevice(i);
    }
    self_obj_before = reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = const_cast< ns3::SingleModelSpectrumChannel* >((const ns3::SingleModelSpectrumChannel*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetDevice", (char *) "N", PyLong_FromUnsignedLong(i));
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SingleModelSpectrumChannel::GetDevice(i);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3NetDevice_Type, &tmp_NetDevice)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SingleModelSpectrumChannel::GetDevice(i);
    }
    // dangerous!
    retval = ns3::Ptr< ns3::NetDevice  > (tmp_NetDevice->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

uint32_t
PyNs3SingleModelSpectrumChannel__PythonHelper::GetNDevices() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SingleModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    uint32_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetNDevices"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SingleModelSpectrumChannel::GetNDevices();
    }
    self_obj_before = reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = const_cast< ns3::SingleModelSpectrumChannel* >((const ns3::SingleModelSpectrumChannel*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetNDevices", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SingleModelSpectrumChannel::GetNDevices();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SingleModelSpectrumChannel::GetNDevices();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::SpectrumPropagationLossModel >
PyNs3SingleModelSpectrumChannel__PythonHelper::GetSpectrumPropagationLossModel()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SingleModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumPropagationLossModel > retval;
    PyNs3SpectrumPropagationLossModel *tmp_SpectrumPropagationLossModel;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetSpectrumPropagationLossModel"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SingleModelSpectrumChannel::GetSpectrumPropagationLossModel();
    }
    self_obj_before = reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = (ns3::SingleModelSpectrumChannel*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetSpectrumPropagationLossModel", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SingleModelSpectrumChannel::GetSpectrumPropagationLossModel();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SpectrumPropagationLossModel_Type, &tmp_SpectrumPropagationLossModel)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::SingleModelSpectrumChannel::GetSpectrumPropagationLossModel();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::SpectrumPropagationLossModel  > (tmp_SpectrumPropagationLossModel->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3SingleModelSpectrumChannel__PythonHelper::SetPropagationDelayModel(ns3::Ptr< ns3::PropagationDelayModel > delay)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SingleModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    PyNs3PropagationDelayModel *py_PropagationDelayModel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetPropagationDelayModel"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::SingleModelSpectrumChannel::SetPropagationDelayModel(delay);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = (ns3::SingleModelSpectrumChannel*) this;
    if (typeid(*(const_cast<ns3::PropagationDelayModel *> (ns3::PeekPointer (delay)))) == typeid(PyNs3PropagationDelayModel__PythonHelper))
    {
        py_PropagationDelayModel = (PyNs3PropagationDelayModel*) (((PyNs3PropagationDelayModel__PythonHelper*) const_cast<ns3::PropagationDelayModel *> (ns3::PeekPointer (delay)))->m_pyself);
        py_PropagationDelayModel->obj = const_cast<ns3::PropagationDelayModel *> (ns3::PeekPointer (delay));
        Py_INCREF(py_PropagationDelayModel);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::PropagationDelayModel *> (ns3::PeekPointer (delay)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_PropagationDelayModel = NULL;
        } else {
            py_PropagationDelayModel = (PyNs3PropagationDelayModel *) wrapper_lookup_iter->second;
            Py_INCREF(py_PropagationDelayModel);
        }
    
        if (py_PropagationDelayModel == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::PropagationDelayModel *> (ns3::PeekPointer (delay))), &PyNs3PropagationDelayModel_Type);
            py_PropagationDelayModel = PyObject_GC_New(PyNs3PropagationDelayModel, wrapper_type);
            py_PropagationDelayModel->inst_dict = NULL;
            py_PropagationDelayModel->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::PropagationDelayModel *> (ns3::PeekPointer (delay))->Ref();
            py_PropagationDelayModel->obj = const_cast<ns3::PropagationDelayModel *> (ns3::PeekPointer (delay));
            PyNs3ObjectBase_wrapper_registry[(void *) py_PropagationDelayModel->obj] = (PyObject *) py_PropagationDelayModel;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetPropagationDelayModel", (char *) "N", py_PropagationDelayModel);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SingleModelSpectrumChannel__PythonHelper::StartTx(ns3::Ptr< ns3::PacketBurst > p, ns3::Ptr< ns3::SpectrumValue > txPsd, ns3::SpectrumType st, ns3::Time duration, ns3::Ptr< ns3::SpectrumPhy > sender)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SingleModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    PyNs3PacketBurst *py_PacketBurst;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3SpectrumValue *py_SpectrumValue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter2;
    PyTypeObject *wrapper_type2 = 0;
    PyNs3SpectrumType *py_SpectrumType;
    PyNs3Time *py_Time;
    PyNs3SpectrumPhy *py_SpectrumPhy;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter3;
    PyTypeObject *wrapper_type3 = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StartTx"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::SingleModelSpectrumChannel::StartTx(p, txPsd, st, duration, sender);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = (ns3::SingleModelSpectrumChannel*) this;
    if (typeid(*(const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)))) == typeid(PyNs3PacketBurst__PythonHelper))
    {
        py_PacketBurst = (PyNs3PacketBurst*) (((PyNs3PacketBurst__PythonHelper*) const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)))->m_pyself);
        py_PacketBurst->obj = const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p));
        Py_INCREF(py_PacketBurst);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_PacketBurst = NULL;
        } else {
            py_PacketBurst = (PyNs3PacketBurst *) wrapper_lookup_iter->second;
            Py_INCREF(py_PacketBurst);
        }
    
        if (py_PacketBurst == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p))), &PyNs3PacketBurst_Type);
            py_PacketBurst = PyObject_GC_New(PyNs3PacketBurst, wrapper_type);
            py_PacketBurst->inst_dict = NULL;
            py_PacketBurst->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p))->Ref();
            py_PacketBurst->obj = const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p));
            PyNs3ObjectBase_wrapper_registry[(void *) py_PacketBurst->obj] = (PyObject *) py_PacketBurst;
        }
    }
    wrapper_lookup_iter2 = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (txPsd)));
    if (wrapper_lookup_iter2 == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumValue = NULL;
    } else {
        py_SpectrumValue = (PyNs3SpectrumValue *) wrapper_lookup_iter2->second;
        Py_INCREF(py_SpectrumValue);
    }
    
    if (py_SpectrumValue == NULL)
    {
        wrapper_type2 = PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (txPsd))), &PyNs3SpectrumValue_Type);
        py_SpectrumValue = PyObject_New(PyNs3SpectrumValue, wrapper_type2);
        py_SpectrumValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (txPsd))->Ref();
        py_SpectrumValue->obj = const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (txPsd));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumValue->obj] = (PyObject *) py_SpectrumValue;
    }
    py_SpectrumType = PyObject_New(PyNs3SpectrumType, &PyNs3SpectrumType_Type);
    py_SpectrumType->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_SpectrumType->obj = new ns3::SpectrumType(st);
    PyNs3SpectrumType_wrapper_registry[(void *) py_SpectrumType->obj] = (PyObject *) py_SpectrumType;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(duration);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    if (typeid(*(const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (sender)))) == typeid(PyNs3SpectrumPhy__PythonHelper))
    {
        py_SpectrumPhy = (PyNs3SpectrumPhy*) (((PyNs3SpectrumPhy__PythonHelper*) const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (sender)))->m_pyself);
        py_SpectrumPhy->obj = const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (sender));
        Py_INCREF(py_SpectrumPhy);
    } else {
        wrapper_lookup_iter3 = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (sender)));
        if (wrapper_lookup_iter3 == PyNs3ObjectBase_wrapper_registry.end()) {
            py_SpectrumPhy = NULL;
        } else {
            py_SpectrumPhy = (PyNs3SpectrumPhy *) wrapper_lookup_iter3->second;
            Py_INCREF(py_SpectrumPhy);
        }
    
        if (py_SpectrumPhy == NULL)
        {
            wrapper_type3 = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (sender))), &PyNs3SpectrumPhy_Type);
            py_SpectrumPhy = PyObject_GC_New(PyNs3SpectrumPhy, wrapper_type3);
            py_SpectrumPhy->inst_dict = NULL;
            py_SpectrumPhy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (sender))->Ref();
            py_SpectrumPhy->obj = const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (sender));
            PyNs3ObjectBase_wrapper_registry[(void *) py_SpectrumPhy->obj] = (PyObject *) py_SpectrumPhy;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StartTx", (char *) "NNNNN", py_PacketBurst, py_SpectrumValue, py_SpectrumType, py_Time, py_SpectrumPhy);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SingleModelSpectrumChannel__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SingleModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = (ns3::SingleModelSpectrumChannel*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SingleModelSpectrumChannel__PythonHelper::StartRx(ns3::Ptr< ns3::PacketBurst > p, ns3::Ptr< ns3::SpectrumValue > rxPowerSpectrum, ns3::SpectrumType st, ns3::Time duration, ns3::Ptr< ns3::SpectrumPhy > receiver)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SingleModelSpectrumChannel *self_obj_before;
    PyObject *py_retval;
    PyNs3PacketBurst *py_PacketBurst;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3SpectrumValue *py_SpectrumValue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter2;
    PyTypeObject *wrapper_type2 = 0;
    PyNs3SpectrumType *py_SpectrumType;
    PyNs3Time *py_Time;
    PyNs3SpectrumPhy *py_SpectrumPhy;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter3;
    PyTypeObject *wrapper_type3 = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StartRx"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = (ns3::SingleModelSpectrumChannel*) this;
    if (typeid(*(const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)))) == typeid(PyNs3PacketBurst__PythonHelper))
    {
        py_PacketBurst = (PyNs3PacketBurst*) (((PyNs3PacketBurst__PythonHelper*) const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)))->m_pyself);
        py_PacketBurst->obj = const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p));
        Py_INCREF(py_PacketBurst);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_PacketBurst = NULL;
        } else {
            py_PacketBurst = (PyNs3PacketBurst *) wrapper_lookup_iter->second;
            Py_INCREF(py_PacketBurst);
        }
    
        if (py_PacketBurst == NULL)
        {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p))), &PyNs3PacketBurst_Type);
            py_PacketBurst = PyObject_GC_New(PyNs3PacketBurst, wrapper_type);
            py_PacketBurst->inst_dict = NULL;
            py_PacketBurst->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p))->Ref();
            py_PacketBurst->obj = const_cast<ns3::PacketBurst *> (ns3::PeekPointer (p));
            PyNs3ObjectBase_wrapper_registry[(void *) py_PacketBurst->obj] = (PyObject *) py_PacketBurst;
        }
    }
    wrapper_lookup_iter2 = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPowerSpectrum)));
    if (wrapper_lookup_iter2 == PyNs3Empty_wrapper_registry.end()) {
        py_SpectrumValue = NULL;
    } else {
        py_SpectrumValue = (PyNs3SpectrumValue *) wrapper_lookup_iter2->second;
        Py_INCREF(py_SpectrumValue);
    }
    
    if (py_SpectrumValue == NULL)
    {
        wrapper_type2 = PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPowerSpectrum))), &PyNs3SpectrumValue_Type);
        py_SpectrumValue = PyObject_New(PyNs3SpectrumValue, wrapper_type2);
        py_SpectrumValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPowerSpectrum))->Ref();
        py_SpectrumValue->obj = const_cast<ns3::SpectrumValue *> (ns3::PeekPointer (rxPowerSpectrum));
        PyNs3Empty_wrapper_registry[(void *) py_SpectrumValue->obj] = (PyObject *) py_SpectrumValue;
    }
    py_SpectrumType = PyObject_New(PyNs3SpectrumType, &PyNs3SpectrumType_Type);
    py_SpectrumType->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_SpectrumType->obj = new ns3::SpectrumType(st);
    PyNs3SpectrumType_wrapper_registry[(void *) py_SpectrumType->obj] = (PyObject *) py_SpectrumType;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(duration);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    if (typeid(*(const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (receiver)))) == typeid(PyNs3SpectrumPhy__PythonHelper))
    {
        py_SpectrumPhy = (PyNs3SpectrumPhy*) (((PyNs3SpectrumPhy__PythonHelper*) const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (receiver)))->m_pyself);
        py_SpectrumPhy->obj = const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (receiver));
        Py_INCREF(py_SpectrumPhy);
    } else {
        wrapper_lookup_iter3 = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (receiver)));
        if (wrapper_lookup_iter3 == PyNs3ObjectBase_wrapper_registry.end()) {
            py_SpectrumPhy = NULL;
        } else {
            py_SpectrumPhy = (PyNs3SpectrumPhy *) wrapper_lookup_iter3->second;
            Py_INCREF(py_SpectrumPhy);
        }
    
        if (py_SpectrumPhy == NULL)
        {
            wrapper_type3 = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (receiver))), &PyNs3SpectrumPhy_Type);
            py_SpectrumPhy = PyObject_GC_New(PyNs3SpectrumPhy, wrapper_type3);
            py_SpectrumPhy->inst_dict = NULL;
            py_SpectrumPhy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (receiver))->Ref();
            py_SpectrumPhy->obj = const_cast<ns3::SpectrumPhy *> (ns3::PeekPointer (receiver));
            PyNs3ObjectBase_wrapper_registry[(void *) py_SpectrumPhy->obj] = (PyObject *) py_SpectrumPhy;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StartRx", (char *) "NNNNN", py_PacketBurst, py_SpectrumValue, py_SpectrumType, py_Time, py_SpectrumPhy);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SingleModelSpectrumChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3SingleModelSpectrumChannel__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3SingleModelSpectrumChannel__PythonHelper::DoStart()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::DoStart();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoStart", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SingleModelSpectrumChannel__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SingleModelSpectrumChannel__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3SingleModelSpectrumChannel__tp_init__0(PyNs3SingleModelSpectrumChannel *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3SingleModelSpectrumChannel *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SingleModelSpectrumChannel_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3SingleModelSpectrumChannel_Type)
    {
        self->obj = new PyNs3SingleModelSpectrumChannel__PythonHelper(*((PyNs3SingleModelSpectrumChannel *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3SingleModelSpectrumChannel__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::SingleModelSpectrumChannel(*((PyNs3SingleModelSpectrumChannel *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3SingleModelSpectrumChannel__tp_init__1(PyNs3SingleModelSpectrumChannel *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3SingleModelSpectrumChannel_Type)
    {
        self->obj = new PyNs3SingleModelSpectrumChannel__PythonHelper();
        self->obj->Ref ();
        ((PyNs3SingleModelSpectrumChannel__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::SingleModelSpectrumChannel();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3SingleModelSpectrumChannel__tp_init(PyNs3SingleModelSpectrumChannel *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3SingleModelSpectrumChannel__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3SingleModelSpectrumChannel__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3SingleModelSpectrumChannel_StartTx(PyNs3SingleModelSpectrumChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3PacketBurst *p;
    ns3::PacketBurst *p_ptr;
    PyNs3SpectrumValue *txPsd;
    ns3::SpectrumValue *txPsd_ptr;
    PyNs3SpectrumType *st;
    PyObject *duration;
    ns3::Time duration2;
    PyNs3SpectrumPhy *sender;
    ns3::SpectrumPhy *sender_ptr;
    PyNs3SingleModelSpectrumChannel__PythonHelper *helper_class = dynamic_cast<PyNs3SingleModelSpectrumChannel__PythonHelper*> (self->obj);
    const char *keywords[] = {"p", "txPsd", "st", "duration", "sender", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!O!OO!", (char **) keywords, &PyNs3PacketBurst_Type, &p, &PyNs3SpectrumValue_Type, &txPsd, &PyNs3SpectrumType_Type, &st, &duration, &PyNs3SpectrumPhy_Type, &sender)) {
        return NULL;
    }
    p_ptr = (p ? p->obj : NULL);
    txPsd_ptr = (txPsd ? txPsd->obj : NULL);
    if (PyObject_IsInstance(duration, (PyObject*) &PyNs3Time_Type)) {
        duration2 = *((PyNs3Time *) duration)->obj;
    } else if (PyObject_IsInstance(duration, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        duration2 = *((PyNs3TracedValue__Ns3Time *) duration)->obj;
    } else if (PyObject_IsInstance(duration, (PyObject*) &PyNs3Scalar_Type)) {
        duration2 = *((PyNs3Scalar *) duration)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", duration->ob_type->tp_name);
        return NULL;
    }
    sender_ptr = (sender ? sender->obj : NULL);
    (helper_class == NULL)? (self->obj->StartTx(ns3::Ptr< ns3::PacketBurst  > (p_ptr), ns3::Ptr< ns3::SpectrumValue  > (txPsd_ptr), *((PyNs3SpectrumType *) st)->obj, duration2, ns3::Ptr< ns3::SpectrumPhy  > (sender_ptr))) : (self->obj->ns3::SingleModelSpectrumChannel::StartTx(ns3::Ptr< ns3::PacketBurst  > (p_ptr), ns3::Ptr< ns3::SpectrumValue  > (txPsd_ptr), *((PyNs3SpectrumType *) st)->obj, duration2, ns3::Ptr< ns3::SpectrumPhy  > (sender_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3SingleModelSpectrumChannel_GetSpectrumPropagationLossModel(PyNs3SingleModelSpectrumChannel *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::SpectrumPropagationLossModel > retval;
    PyNs3SingleModelSpectrumChannel__PythonHelper *helper_class = dynamic_cast<PyNs3SingleModelSpectrumChannel__PythonHelper*> (self->obj);
    PyNs3SpectrumPropagationLossModel *py_SpectrumPropagationLossModel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetSpectrumPropagationLossModel()) : (self->obj->ns3::SingleModelSpectrumChannel::GetSpectrumPropagationLossModel());
    if (!(const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (retval)))) == typeid(PyNs3SpectrumPropagationLossModel__PythonHelper))
    {
        py_SpectrumPropagationLossModel = reinterpret_cast< PyNs3SpectrumPropagationLossModel* >(reinterpret_cast< PyNs3SpectrumPropagationLossModel__PythonHelper* >(const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (retval)))->m_pyself);
        py_SpectrumPropagationLossModel->obj = const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (retval));
        Py_INCREF(py_SpectrumPropagationLossModel);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_SpectrumPropagationLossModel = NULL;
        } else {
            py_SpectrumPropagationLossModel = (PyNs3SpectrumPropagationLossModel *) wrapper_lookup_iter->second;
            Py_INCREF(py_SpectrumPropagationLossModel);
        }
    
        if (py_SpectrumPropagationLossModel == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (retval)))), &PyNs3SpectrumPropagationLossModel_Type);
            py_SpectrumPropagationLossModel = PyObject_GC_New(PyNs3SpectrumPropagationLossModel, wrapper_type);
            py_SpectrumPropagationLossModel->inst_dict = NULL;
            py_SpectrumPropagationLossModel->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (retval))->Ref();
            py_SpectrumPropagationLossModel->obj = const_cast<ns3::SpectrumPropagationLossModel *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_SpectrumPropagationLossModel->obj] = (PyObject *) py_SpectrumPropagationLossModel;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_SpectrumPropagationLossModel);
    return py_retval;
}


PyObject *
_wrap_PyNs3SingleModelSpectrumChannel_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::SingleModelSpectrumChannel::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3SingleModelSpectrumChannel_GetNDevices(PyNs3SingleModelSpectrumChannel *self)
{
    PyObject *py_retval;
    uint32_t retval;
    PyNs3SingleModelSpectrumChannel__PythonHelper *helper_class = dynamic_cast<PyNs3SingleModelSpectrumChannel__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->GetNDevices()) : (self->obj->ns3::SingleModelSpectrumChannel::GetNDevices());
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3SingleModelSpectrumChannel_AddSpectrumPropagationLossModel(PyNs3SingleModelSpectrumChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SpectrumPropagationLossModel *loss;
    ns3::SpectrumPropagationLossModel *loss_ptr;
    PyNs3SingleModelSpectrumChannel__PythonHelper *helper_class = dynamic_cast<PyNs3SingleModelSpectrumChannel__PythonHelper*> (self->obj);
    const char *keywords[] = {"loss", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumPropagationLossModel_Type, &loss)) {
        return NULL;
    }
    loss_ptr = (loss ? loss->obj : NULL);
    (helper_class == NULL)? (self->obj->AddSpectrumPropagationLossModel(ns3::Ptr< ns3::SpectrumPropagationLossModel  > (loss_ptr))) : (self->obj->ns3::SingleModelSpectrumChannel::AddSpectrumPropagationLossModel(ns3::Ptr< ns3::SpectrumPropagationLossModel  > (loss_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3SingleModelSpectrumChannel_SetPropagationDelayModel(PyNs3SingleModelSpectrumChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3PropagationDelayModel *delay;
    ns3::PropagationDelayModel *delay_ptr;
    PyNs3SingleModelSpectrumChannel__PythonHelper *helper_class = dynamic_cast<PyNs3SingleModelSpectrumChannel__PythonHelper*> (self->obj);
    const char *keywords[] = {"delay", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3PropagationDelayModel_Type, &delay)) {
        return NULL;
    }
    delay_ptr = (delay ? delay->obj : NULL);
    (helper_class == NULL)? (self->obj->SetPropagationDelayModel(ns3::Ptr< ns3::PropagationDelayModel  > (delay_ptr))) : (self->obj->ns3::SingleModelSpectrumChannel::SetPropagationDelayModel(ns3::Ptr< ns3::PropagationDelayModel  > (delay_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3SingleModelSpectrumChannel_GetDevice(PyNs3SingleModelSpectrumChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::NetDevice > retval;
    unsigned int i;
    PyNs3SingleModelSpectrumChannel__PythonHelper *helper_class = dynamic_cast<PyNs3SingleModelSpectrumChannel__PythonHelper*> (self->obj);
    const char *keywords[] = {"i", NULL};
    PyNs3NetDevice *py_NetDevice;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &i)) {
        return NULL;
    }
    retval = (helper_class == NULL)? (self->obj->GetDevice(i)) : (self->obj->ns3::SingleModelSpectrumChannel::GetDevice(i));
    if (!(const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_NetDevice = NULL;
    } else {
        py_NetDevice = (PyNs3NetDevice *) wrapper_lookup_iter->second;
        Py_INCREF(py_NetDevice);
    }
    
    if (py_NetDevice == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)))), &PyNs3NetDevice_Type);
        py_NetDevice = PyObject_GC_New(PyNs3NetDevice, wrapper_type);
        py_NetDevice->inst_dict = NULL;
        py_NetDevice->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval))->Ref();
        py_NetDevice->obj = const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval));
        PyNs3ObjectBase_wrapper_registry[(void *) py_NetDevice->obj] = (PyObject *) py_NetDevice;
    }
    py_retval = Py_BuildValue((char *) "N", py_NetDevice);
    return py_retval;
}


PyObject *
_wrap_PyNs3SingleModelSpectrumChannel_AddRx(PyNs3SingleModelSpectrumChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SpectrumPhy *phy;
    ns3::SpectrumPhy *phy_ptr;
    PyNs3SingleModelSpectrumChannel__PythonHelper *helper_class = dynamic_cast<PyNs3SingleModelSpectrumChannel__PythonHelper*> (self->obj);
    const char *keywords[] = {"phy", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SpectrumPhy_Type, &phy)) {
        return NULL;
    }
    phy_ptr = (phy ? phy->obj : NULL);
    (helper_class == NULL)? (self->obj->AddRx(ns3::Ptr< ns3::SpectrumPhy  > (phy_ptr))) : (self->obj->ns3::SingleModelSpectrumChannel::AddRx(ns3::Ptr< ns3::SpectrumPhy  > (phy_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3SingleModelSpectrumChannel__copy__(PyNs3SingleModelSpectrumChannel *self)
{

    PyNs3SingleModelSpectrumChannel *py_copy;
    py_copy = PyObject_GC_New(PyNs3SingleModelSpectrumChannel, &PyNs3SingleModelSpectrumChannel_Type);
    py_copy->obj = new ns3::SingleModelSpectrumChannel(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3SingleModelSpectrumChannel_methods[] = {
    {(char *) "StartTx", (PyCFunction) _wrap_PyNs3SingleModelSpectrumChannel_StartTx, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetSpectrumPropagationLossModel", (PyCFunction) _wrap_PyNs3SingleModelSpectrumChannel_GetSpectrumPropagationLossModel, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3SingleModelSpectrumChannel_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "GetNDevices", (PyCFunction) _wrap_PyNs3SingleModelSpectrumChannel_GetNDevices, METH_NOARGS, NULL },
    {(char *) "AddSpectrumPropagationLossModel", (PyCFunction) _wrap_PyNs3SingleModelSpectrumChannel_AddSpectrumPropagationLossModel, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetPropagationDelayModel", (PyCFunction) _wrap_PyNs3SingleModelSpectrumChannel_SetPropagationDelayModel, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetDevice", (PyCFunction) _wrap_PyNs3SingleModelSpectrumChannel_GetDevice, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "AddRx", (PyCFunction) _wrap_PyNs3SingleModelSpectrumChannel_AddRx, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3SingleModelSpectrumChannel__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3SingleModelSpectrumChannel__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3SingleModelSpectrumChannel__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3SingleModelSpectrumChannel__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3SingleModelSpectrumChannel__tp_clear(PyNs3SingleModelSpectrumChannel *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::SingleModelSpectrumChannel *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3SingleModelSpectrumChannel__tp_traverse(PyNs3SingleModelSpectrumChannel *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3SingleModelSpectrumChannel__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3SingleModelSpectrumChannel__tp_dealloc(PyNs3SingleModelSpectrumChannel *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3SingleModelSpectrumChannel__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3SingleModelSpectrumChannel__tp_richcompare (PyNs3SingleModelSpectrumChannel *PYBINDGEN_UNUSED(self), PyNs3SingleModelSpectrumChannel *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3SingleModelSpectrumChannel_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3SingleModelSpectrumChannel_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.SingleModelSpectrumChannel",            /* tp_name */
    sizeof(PyNs3SingleModelSpectrumChannel),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3SingleModelSpectrumChannel__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3SingleModelSpectrumChannel__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3SingleModelSpectrumChannel__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3SingleModelSpectrumChannel__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3SingleModelSpectrumChannel_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3SingleModelSpectrumChannel, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3SingleModelSpectrumChannel__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};






