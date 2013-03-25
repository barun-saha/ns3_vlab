#include "ns3module.h"

std::map<void*, PyObject*> PyNs3Average__Double_wrapper_registry;


static int
_wrap_PyNs3Average__Double__tp_init__0(PyNs3Average__Double *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Average__Double *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Average__Double_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Average< double >(*((PyNs3Average__Double *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3Average__Double__tp_init__1(PyNs3Average__Double *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::Average< double >();
    return 0;
}

int _wrap_PyNs3Average__Double__tp_init(PyNs3Average__Double *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Average__Double__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Average__Double__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Average__Double_Count(PyNs3Average__Double *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->Count();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Average__Double_Reset(PyNs3Average__Double *self)
{
    PyObject *py_retval;
    
    self->obj->Reset();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Average__Double_Mean(PyNs3Average__Double *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->Mean();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Average__Double_Min(PyNs3Average__Double *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->Min();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Average__Double_Max(PyNs3Average__Double *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->Max();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Average__Double_Update(PyNs3Average__Double *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    double x;
    const char *keywords[] = {"x", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "d", (char **) keywords, &x)) {
        return NULL;
    }
    self->obj->Update(x);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Average__Double_Error99(PyNs3Average__Double *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->Error99();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Average__Double_Stddev(PyNs3Average__Double *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->Stddev();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Average__Double_Var(PyNs3Average__Double *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->Var();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Average__Double_Error90(PyNs3Average__Double *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->Error90();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Average__Double_Avg(PyNs3Average__Double *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->Avg();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Average__Double_Error95(PyNs3Average__Double *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->Error95();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


static PyObject*
_wrap_PyNs3Average__Double__copy__(PyNs3Average__Double *self)
{

    PyNs3Average__Double *py_copy;
    py_copy = PyObject_New(PyNs3Average__Double, &PyNs3Average__Double_Type);
    py_copy->obj = new ns3::Average< double >(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Average__Double_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Average__Double_methods[] = {
    {(char *) "Count", (PyCFunction) _wrap_PyNs3Average__Double_Count, METH_NOARGS, NULL },
    {(char *) "Reset", (PyCFunction) _wrap_PyNs3Average__Double_Reset, METH_NOARGS, NULL },
    {(char *) "Mean", (PyCFunction) _wrap_PyNs3Average__Double_Mean, METH_NOARGS, NULL },
    {(char *) "Min", (PyCFunction) _wrap_PyNs3Average__Double_Min, METH_NOARGS, NULL },
    {(char *) "Max", (PyCFunction) _wrap_PyNs3Average__Double_Max, METH_NOARGS, NULL },
    {(char *) "Update", (PyCFunction) _wrap_PyNs3Average__Double_Update, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Error99", (PyCFunction) _wrap_PyNs3Average__Double_Error99, METH_NOARGS, NULL },
    {(char *) "Stddev", (PyCFunction) _wrap_PyNs3Average__Double_Stddev, METH_NOARGS, NULL },
    {(char *) "Var", (PyCFunction) _wrap_PyNs3Average__Double_Var, METH_NOARGS, NULL },
    {(char *) "Error90", (PyCFunction) _wrap_PyNs3Average__Double_Error90, METH_NOARGS, NULL },
    {(char *) "Avg", (PyCFunction) _wrap_PyNs3Average__Double_Avg, METH_NOARGS, NULL },
    {(char *) "Error95", (PyCFunction) _wrap_PyNs3Average__Double_Error95, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Average__Double__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Average__Double__tp_dealloc(PyNs3Average__Double *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Average__Double_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Average__Double_wrapper_registry.end()) {
        PyNs3Average__Double_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::Average< double > *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Average__Double__tp_richcompare (PyNs3Average__Double *PYBINDGEN_UNUSED(self), PyNs3Average__Double *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Average__Double_Type)) {
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

PyTypeObject PyNs3Average__Double_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.Average__Double",            /* tp_name */
    sizeof(PyNs3Average__Double),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Average__Double__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3Average__Double__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Average__Double_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Average__Double__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3DelayJitterEstimation_wrapper_registry;


static int
_wrap_PyNs3DelayJitterEstimation__tp_init__0(PyNs3DelayJitterEstimation *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3DelayJitterEstimation *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DelayJitterEstimation_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::DelayJitterEstimation(*((PyNs3DelayJitterEstimation *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3DelayJitterEstimation__tp_init__1(PyNs3DelayJitterEstimation *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::DelayJitterEstimation();
    return 0;
}

int _wrap_PyNs3DelayJitterEstimation__tp_init(PyNs3DelayJitterEstimation *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3DelayJitterEstimation__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3DelayJitterEstimation__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3DelayJitterEstimation_GetLastJitter(PyNs3DelayJitterEstimation *self)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = self->obj->GetLastJitter();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3DelayJitterEstimation_PrepareTx(PyNs3DelayJitterEstimation *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    const char *keywords[] = {"packet", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Packet_Type, &packet)) {
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    ns3::DelayJitterEstimation::PrepareTx(ns3::Ptr< ns3::Packet  > (packet_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DelayJitterEstimation_GetLastDelay(PyNs3DelayJitterEstimation *self)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = self->obj->GetLastDelay();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3DelayJitterEstimation_RecordRx(PyNs3DelayJitterEstimation *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    const char *keywords[] = {"packet", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Packet_Type, &packet)) {
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    self->obj->RecordRx(ns3::Ptr< ns3::Packet  > (packet_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3DelayJitterEstimation__copy__(PyNs3DelayJitterEstimation *self)
{

    PyNs3DelayJitterEstimation *py_copy;
    py_copy = PyObject_New(PyNs3DelayJitterEstimation, &PyNs3DelayJitterEstimation_Type);
    py_copy->obj = new ns3::DelayJitterEstimation(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3DelayJitterEstimation_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3DelayJitterEstimation_methods[] = {
    {(char *) "GetLastJitter", (PyCFunction) _wrap_PyNs3DelayJitterEstimation_GetLastJitter, METH_NOARGS, NULL },
    {(char *) "PrepareTx", (PyCFunction) _wrap_PyNs3DelayJitterEstimation_PrepareTx, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "GetLastDelay", (PyCFunction) _wrap_PyNs3DelayJitterEstimation_GetLastDelay, METH_NOARGS, NULL },
    {(char *) "RecordRx", (PyCFunction) _wrap_PyNs3DelayJitterEstimation_RecordRx, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3DelayJitterEstimation__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3DelayJitterEstimation__tp_dealloc(PyNs3DelayJitterEstimation *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3DelayJitterEstimation_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3DelayJitterEstimation_wrapper_registry.end()) {
        PyNs3DelayJitterEstimation_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::DelayJitterEstimation *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3DelayJitterEstimation__tp_richcompare (PyNs3DelayJitterEstimation *PYBINDGEN_UNUSED(self), PyNs3DelayJitterEstimation *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3DelayJitterEstimation_Type)) {
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

PyTypeObject PyNs3DelayJitterEstimation_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.DelayJitterEstimation",            /* tp_name */
    sizeof(PyNs3DelayJitterEstimation),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3DelayJitterEstimation__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3DelayJitterEstimation__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3DelayJitterEstimation_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3DelayJitterEstimation__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3EventGarbageCollector_wrapper_registry;


static int
_wrap_PyNs3EventGarbageCollector__tp_init__0(PyNs3EventGarbageCollector *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3EventGarbageCollector *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3EventGarbageCollector_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::EventGarbageCollector(*((PyNs3EventGarbageCollector *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3EventGarbageCollector__tp_init__1(PyNs3EventGarbageCollector *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::EventGarbageCollector();
    return 0;
}

int _wrap_PyNs3EventGarbageCollector__tp_init(PyNs3EventGarbageCollector *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3EventGarbageCollector__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3EventGarbageCollector__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3EventGarbageCollector_Track(PyNs3EventGarbageCollector *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3EventId *event;
    const char *keywords[] = {"event", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3EventId_Type, &event)) {
        return NULL;
    }
    self->obj->Track(*((PyNs3EventId *) event)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3EventGarbageCollector__copy__(PyNs3EventGarbageCollector *self)
{

    PyNs3EventGarbageCollector *py_copy;
    py_copy = PyObject_New(PyNs3EventGarbageCollector, &PyNs3EventGarbageCollector_Type);
    py_copy->obj = new ns3::EventGarbageCollector(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3EventGarbageCollector_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3EventGarbageCollector_methods[] = {
    {(char *) "Track", (PyCFunction) _wrap_PyNs3EventGarbageCollector_Track, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3EventGarbageCollector__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3EventGarbageCollector__tp_dealloc(PyNs3EventGarbageCollector *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3EventGarbageCollector_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3EventGarbageCollector_wrapper_registry.end()) {
        PyNs3EventGarbageCollector_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::EventGarbageCollector *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3EventGarbageCollector__tp_richcompare (PyNs3EventGarbageCollector *PYBINDGEN_UNUSED(self), PyNs3EventGarbageCollector *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3EventGarbageCollector_Type)) {
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

PyTypeObject PyNs3EventGarbageCollector_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.EventGarbageCollector",            /* tp_name */
    sizeof(PyNs3EventGarbageCollector),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3EventGarbageCollector__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3EventGarbageCollector__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3EventGarbageCollector_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3EventGarbageCollector__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3FileConfig_wrapper_registry;

void
PyNs3FileConfig__PythonHelper::Attributes()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::FileConfig *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Attributes"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj;
    reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj = (ns3::FileConfig*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Attributes", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3FileConfig__PythonHelper::Default()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::FileConfig *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Default"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj;
    reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj = (ns3::FileConfig*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Default", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3FileConfig__PythonHelper::Global()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::FileConfig *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Global"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj;
    reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj = (ns3::FileConfig*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Global", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3FileConfig__PythonHelper::SetFilename(std::string filename)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::FileConfig *self_obj_before;
    PyObject *py_retval;
    const char *filename_ptr;
    Py_ssize_t filename_len;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetFilename"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj;
    reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj = (ns3::FileConfig*) this;
    filename_ptr = (filename).c_str();
    filename_len = (filename).size();
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetFilename", (char *) "s#", filename_ptr, filename_len);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3FileConfig* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3FileConfig__tp_init__0(PyNs3FileConfig *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3FileConfig_Type)
    {
        self->obj = new PyNs3FileConfig__PythonHelper();
        ((PyNs3FileConfig__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        PyErr_SetString(PyExc_TypeError, "class 'FileConfig' cannot be constructed");
        return -1;
    }
    return 0;
}

static int
_wrap_PyNs3FileConfig__tp_init__1(PyNs3FileConfig *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3FileConfig *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3FileConfig_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3FileConfig_Type)
    {
        self->obj = new PyNs3FileConfig__PythonHelper(*((PyNs3FileConfig *) arg0)->obj);
        ((PyNs3FileConfig__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        PyErr_SetString(PyExc_TypeError, "class 'FileConfig' cannot be constructed");
        return -1;
    }
    return 0;
}

int _wrap_PyNs3FileConfig__tp_init(PyNs3FileConfig *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3FileConfig__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3FileConfig__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3FileConfig_Default(PyNs3FileConfig *self)
{
    PyObject *py_retval;
    
    self->obj->Default();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3FileConfig_Attributes(PyNs3FileConfig *self)
{
    PyObject *py_retval;
    
    self->obj->Attributes();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3FileConfig_Global(PyNs3FileConfig *self)
{
    PyObject *py_retval;
    
    self->obj->Global();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3FileConfig_SetFilename(PyNs3FileConfig *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *filename;
    Py_ssize_t filename_len;
    const char *keywords[] = {"filename", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &filename, &filename_len)) {
        return NULL;
    }
    self->obj->SetFilename(std::string(filename, filename_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

static PyMethodDef PyNs3FileConfig_methods[] = {
    {(char *) "Default", (PyCFunction) _wrap_PyNs3FileConfig_Default, METH_NOARGS, NULL },
    {(char *) "Attributes", (PyCFunction) _wrap_PyNs3FileConfig_Attributes, METH_NOARGS, NULL },
    {(char *) "Global", (PyCFunction) _wrap_PyNs3FileConfig_Global, METH_NOARGS, NULL },
    {(char *) "SetFilename", (PyCFunction) _wrap_PyNs3FileConfig_SetFilename, METH_KEYWORDS|METH_VARARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3FileConfig__tp_clear(PyNs3FileConfig *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::FileConfig *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3FileConfig__tp_traverse(PyNs3FileConfig *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3FileConfig__PythonHelper) )
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3FileConfig__tp_dealloc(PyNs3FileConfig *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3FileConfig_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3FileConfig_wrapper_registry.end()) {
        PyNs3FileConfig_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3FileConfig__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3FileConfig__tp_richcompare (PyNs3FileConfig *PYBINDGEN_UNUSED(self), PyNs3FileConfig *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3FileConfig_Type)) {
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

PyTypeObject PyNs3FileConfig_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.FileConfig",            /* tp_name */
    sizeof(PyNs3FileConfig),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3FileConfig__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3FileConfig__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3FileConfig__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3FileConfig__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3FileConfig_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3FileConfig, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3FileConfig__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3Gnuplot_wrapper_registry;


static int
_wrap_PyNs3Gnuplot__tp_init__0(PyNs3Gnuplot *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Gnuplot *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Gnuplot_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Gnuplot(*((PyNs3Gnuplot *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3Gnuplot__tp_init__1(PyNs3Gnuplot *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *outputFilename;
    Py_ssize_t outputFilename_len;
    std::string outputFilename_std;
    const char *title;
    Py_ssize_t title_len;
    std::string title_std;
    const char *keywords[] = {"outputFilename", "title", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#s#", (char **) keywords, &outputFilename, &outputFilename_len, &title, &title_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    outputFilename_std = std::string(outputFilename, outputFilename_len);
    title_std = std::string(title, title_len);
    self->obj = new ns3::Gnuplot(outputFilename_std, title_std);
    return 0;
}

int _wrap_PyNs3Gnuplot__tp_init(PyNs3Gnuplot *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Gnuplot__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Gnuplot__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Gnuplot_AddDataset(PyNs3Gnuplot *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3GnuplotDataset *dataset;
    const char *keywords[] = {"dataset", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3GnuplotDataset_Type, &dataset)) {
        return NULL;
    }
    self->obj->AddDataset(*((PyNs3GnuplotDataset *) dataset)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Gnuplot_SetExtra(PyNs3Gnuplot *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *extra;
    Py_ssize_t extra_len;
    std::string extra_std;
    const char *keywords[] = {"extra", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &extra, &extra_len)) {
        return NULL;
    }
    extra_std = std::string(extra, extra_len);
    self->obj->SetExtra(extra_std);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Gnuplot_DetectTerminal(PyNs3Gnuplot *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    std::string retval;
    const char *filename;
    Py_ssize_t filename_len;
    std::string filename_std;
    const char *keywords[] = {"filename", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &filename, &filename_len)) {
        return NULL;
    }
    filename_std = std::string(filename, filename_len);
    retval = ns3::Gnuplot::DetectTerminal(filename_std);
    py_retval = Py_BuildValue((char *) "s#", (retval).c_str(), (retval).size());
    return py_retval;
}


PyObject *
_wrap_PyNs3Gnuplot_AppendExtra(PyNs3Gnuplot *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *extra;
    Py_ssize_t extra_len;
    std::string extra_std;
    const char *keywords[] = {"extra", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &extra, &extra_len)) {
        return NULL;
    }
    extra_std = std::string(extra, extra_len);
    self->obj->AppendExtra(extra_std);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Gnuplot_SetLegend(PyNs3Gnuplot *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *xLegend;
    Py_ssize_t xLegend_len;
    std::string xLegend_std;
    const char *yLegend;
    Py_ssize_t yLegend_len;
    std::string yLegend_std;
    const char *keywords[] = {"xLegend", "yLegend", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#s#", (char **) keywords, &xLegend, &xLegend_len, &yLegend, &yLegend_len)) {
        return NULL;
    }
    xLegend_std = std::string(xLegend, xLegend_len);
    yLegend_std = std::string(yLegend, yLegend_len);
    self->obj->SetLegend(xLegend_std, yLegend_std);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Gnuplot_SetTerminal(PyNs3Gnuplot *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *terminal;
    Py_ssize_t terminal_len;
    std::string terminal_std;
    const char *keywords[] = {"terminal", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &terminal, &terminal_len)) {
        return NULL;
    }
    terminal_std = std::string(terminal, terminal_len);
    self->obj->SetTerminal(terminal_std);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Gnuplot_GenerateOutput(PyNs3Gnuplot *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyStdOstream *os;
    const char *keywords[] = {"os", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyStdOstream_Type, &os)) {
        return NULL;
    }
    self->obj->GenerateOutput(*((PyStdOstream *) os)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Gnuplot_SetTitle(PyNs3Gnuplot *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *title;
    Py_ssize_t title_len;
    std::string title_std;
    const char *keywords[] = {"title", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &title, &title_len)) {
        return NULL;
    }
    title_std = std::string(title, title_len);
    self->obj->SetTitle(title_std);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3Gnuplot__copy__(PyNs3Gnuplot *self)
{

    PyNs3Gnuplot *py_copy;
    py_copy = PyObject_New(PyNs3Gnuplot, &PyNs3Gnuplot_Type);
    py_copy->obj = new ns3::Gnuplot(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Gnuplot_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Gnuplot_methods[] = {
    {(char *) "AddDataset", (PyCFunction) _wrap_PyNs3Gnuplot_AddDataset, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetExtra", (PyCFunction) _wrap_PyNs3Gnuplot_SetExtra, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DetectTerminal", (PyCFunction) _wrap_PyNs3Gnuplot_DetectTerminal, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "AppendExtra", (PyCFunction) _wrap_PyNs3Gnuplot_AppendExtra, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetLegend", (PyCFunction) _wrap_PyNs3Gnuplot_SetLegend, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetTerminal", (PyCFunction) _wrap_PyNs3Gnuplot_SetTerminal, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GenerateOutput", (PyCFunction) _wrap_PyNs3Gnuplot_GenerateOutput, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetTitle", (PyCFunction) _wrap_PyNs3Gnuplot_SetTitle, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Gnuplot__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Gnuplot__tp_dealloc(PyNs3Gnuplot *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Gnuplot_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Gnuplot_wrapper_registry.end()) {
        PyNs3Gnuplot_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::Gnuplot *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Gnuplot__tp_richcompare (PyNs3Gnuplot *PYBINDGEN_UNUSED(self), PyNs3Gnuplot *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Gnuplot_Type)) {
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

PyTypeObject PyNs3Gnuplot_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.Gnuplot",            /* tp_name */
    sizeof(PyNs3Gnuplot),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Gnuplot__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3Gnuplot__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Gnuplot_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Gnuplot__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3GnuplotCollection_wrapper_registry;


static int
_wrap_PyNs3GnuplotCollection__tp_init__0(PyNs3GnuplotCollection *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3GnuplotCollection *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3GnuplotCollection_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::GnuplotCollection(*((PyNs3GnuplotCollection *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3GnuplotCollection__tp_init__1(PyNs3GnuplotCollection *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *outputFilename;
    Py_ssize_t outputFilename_len;
    std::string outputFilename_std;
    const char *keywords[] = {"outputFilename", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &outputFilename, &outputFilename_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    outputFilename_std = std::string(outputFilename, outputFilename_len);
    self->obj = new ns3::GnuplotCollection(outputFilename_std);
    return 0;
}

int _wrap_PyNs3GnuplotCollection__tp_init(PyNs3GnuplotCollection *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3GnuplotCollection__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3GnuplotCollection__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3GnuplotCollection_GenerateOutput(PyNs3GnuplotCollection *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyStdOstream *os;
    const char *keywords[] = {"os", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyStdOstream_Type, &os)) {
        return NULL;
    }
    self->obj->GenerateOutput(*((PyStdOstream *) os)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3GnuplotCollection_SetTerminal(PyNs3GnuplotCollection *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *terminal;
    Py_ssize_t terminal_len;
    std::string terminal_std;
    const char *keywords[] = {"terminal", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &terminal, &terminal_len)) {
        return NULL;
    }
    terminal_std = std::string(terminal, terminal_len);
    self->obj->SetTerminal(terminal_std);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3GnuplotCollection_AddPlot(PyNs3GnuplotCollection *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Gnuplot *plot;
    const char *keywords[] = {"plot", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Gnuplot_Type, &plot)) {
        return NULL;
    }
    self->obj->AddPlot(*((PyNs3Gnuplot *) plot)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3GnuplotCollection_GetPlot(PyNs3GnuplotCollection *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int id;
    const char *keywords[] = {"id", NULL};
    PyNs3Gnuplot *py_Gnuplot;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &id)) {
        return NULL;
    }
    ns3::Gnuplot & retval = self->obj->GetPlot(id);
    py_Gnuplot = PyObject_New(PyNs3Gnuplot, &PyNs3Gnuplot_Type);
    py_Gnuplot->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Gnuplot->obj = new ns3::Gnuplot(retval);
    PyNs3Gnuplot_wrapper_registry[(void *) py_Gnuplot->obj] = (PyObject *) py_Gnuplot;
    py_retval = Py_BuildValue((char *) "N", py_Gnuplot);
    return py_retval;
}


static PyObject*
_wrap_PyNs3GnuplotCollection__copy__(PyNs3GnuplotCollection *self)
{

    PyNs3GnuplotCollection *py_copy;
    py_copy = PyObject_New(PyNs3GnuplotCollection, &PyNs3GnuplotCollection_Type);
    py_copy->obj = new ns3::GnuplotCollection(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3GnuplotCollection_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3GnuplotCollection_methods[] = {
    {(char *) "GenerateOutput", (PyCFunction) _wrap_PyNs3GnuplotCollection_GenerateOutput, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetTerminal", (PyCFunction) _wrap_PyNs3GnuplotCollection_SetTerminal, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "AddPlot", (PyCFunction) _wrap_PyNs3GnuplotCollection_AddPlot, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetPlot", (PyCFunction) _wrap_PyNs3GnuplotCollection_GetPlot, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3GnuplotCollection__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3GnuplotCollection__tp_dealloc(PyNs3GnuplotCollection *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3GnuplotCollection_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3GnuplotCollection_wrapper_registry.end()) {
        PyNs3GnuplotCollection_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::GnuplotCollection *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3GnuplotCollection__tp_richcompare (PyNs3GnuplotCollection *PYBINDGEN_UNUSED(self), PyNs3GnuplotCollection *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3GnuplotCollection_Type)) {
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

PyTypeObject PyNs3GnuplotCollection_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.GnuplotCollection",            /* tp_name */
    sizeof(PyNs3GnuplotCollection),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3GnuplotCollection__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3GnuplotCollection__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3GnuplotCollection_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3GnuplotCollection__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3GnuplotDataset_wrapper_registry;

static int
_wrap_PyNs3GnuplotDataset__tp_init(PyNs3GnuplotDataset *self, PyObject *args, PyObject *kwargs)
{
    PyNs3GnuplotDataset *original;
    const char *keywords[] = {"original", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3GnuplotDataset_Type, &original)) {
        return -1;
    }
    self->obj = new ns3::GnuplotDataset(*((PyNs3GnuplotDataset *) original)->obj);
    return 0;
}


PyObject *
_wrap_PyNs3GnuplotDataset_SetExtra(PyNs3GnuplotDataset *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *extra;
    Py_ssize_t extra_len;
    std::string extra_std;
    const char *keywords[] = {"extra", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &extra, &extra_len)) {
        return NULL;
    }
    extra_std = std::string(extra, extra_len);
    self->obj->SetExtra(extra_std);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3GnuplotDataset_SetDefaultExtra(PyNs3GnuplotDataset *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *extra;
    Py_ssize_t extra_len;
    std::string extra_std;
    const char *keywords[] = {"extra", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &extra, &extra_len)) {
        return NULL;
    }
    extra_std = std::string(extra, extra_len);
    ns3::GnuplotDataset::SetDefaultExtra(extra_std);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3GnuplotDataset_SetTitle(PyNs3GnuplotDataset *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *title;
    Py_ssize_t title_len;
    std::string title_std;
    const char *keywords[] = {"title", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &title, &title_len)) {
        return NULL;
    }
    title_std = std::string(title, title_len);
    self->obj->SetTitle(title_std);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3GnuplotDataset__copy__(PyNs3GnuplotDataset *self)
{

    PyNs3GnuplotDataset *py_copy;
    py_copy = PyObject_New(PyNs3GnuplotDataset, &PyNs3GnuplotDataset_Type);
    py_copy->obj = new ns3::GnuplotDataset(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3GnuplotDataset_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3GnuplotDataset_methods[] = {
    {(char *) "SetExtra", (PyCFunction) _wrap_PyNs3GnuplotDataset_SetExtra, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetDefaultExtra", (PyCFunction) _wrap_PyNs3GnuplotDataset_SetDefaultExtra, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "SetTitle", (PyCFunction) _wrap_PyNs3GnuplotDataset_SetTitle, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3GnuplotDataset__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3GnuplotDataset__tp_dealloc(PyNs3GnuplotDataset *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3GnuplotDataset_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3GnuplotDataset_wrapper_registry.end()) {
        PyNs3GnuplotDataset_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::GnuplotDataset *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3GnuplotDataset__tp_richcompare (PyNs3GnuplotDataset *PYBINDGEN_UNUSED(self), PyNs3GnuplotDataset *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3GnuplotDataset_Type)) {
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

PyTypeObject PyNs3GnuplotDataset_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.GnuplotDataset",            /* tp_name */
    sizeof(PyNs3GnuplotDataset),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3GnuplotDataset__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3GnuplotDataset__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3GnuplotDataset_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3GnuplotDataset__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3GtkConfigStore_wrapper_registry;


static int
_wrap_PyNs3GtkConfigStore__tp_init__0(PyNs3GtkConfigStore *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3GtkConfigStore *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3GtkConfigStore_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::GtkConfigStore(*((PyNs3GtkConfigStore *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3GtkConfigStore__tp_init__1(PyNs3GtkConfigStore *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::GtkConfigStore();
    return 0;
}

int _wrap_PyNs3GtkConfigStore__tp_init(PyNs3GtkConfigStore *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3GtkConfigStore__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3GtkConfigStore__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3GtkConfigStore_ConfigureDefaults(PyNs3GtkConfigStore *self)
{
    PyObject *py_retval;
    
    self->obj->ConfigureDefaults();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3GtkConfigStore_ConfigureAttributes(PyNs3GtkConfigStore *self)
{
    PyObject *py_retval;
    
    self->obj->ConfigureAttributes();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3GtkConfigStore__copy__(PyNs3GtkConfigStore *self)
{

    PyNs3GtkConfigStore *py_copy;
    py_copy = PyObject_New(PyNs3GtkConfigStore, &PyNs3GtkConfigStore_Type);
    py_copy->obj = new ns3::GtkConfigStore(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3GtkConfigStore_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3GtkConfigStore_methods[] = {
    {(char *) "ConfigureDefaults", (PyCFunction) _wrap_PyNs3GtkConfigStore_ConfigureDefaults, METH_NOARGS, NULL },
    {(char *) "ConfigureAttributes", (PyCFunction) _wrap_PyNs3GtkConfigStore_ConfigureAttributes, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3GtkConfigStore__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3GtkConfigStore__tp_dealloc(PyNs3GtkConfigStore *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3GtkConfigStore_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3GtkConfigStore_wrapper_registry.end()) {
        PyNs3GtkConfigStore_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::GtkConfigStore *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3GtkConfigStore__tp_richcompare (PyNs3GtkConfigStore *PYBINDGEN_UNUSED(self), PyNs3GtkConfigStore *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3GtkConfigStore_Type)) {
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

PyTypeObject PyNs3GtkConfigStore_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.GtkConfigStore",            /* tp_name */
    sizeof(PyNs3GtkConfigStore),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3GtkConfigStore__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3GtkConfigStore__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3GtkConfigStore_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3GtkConfigStore__tp_init,             /* tp_init */
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




void
PyNs3NoneFileConfig__PythonHelper::Attributes()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NoneFileConfig *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Attributes"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::NoneFileConfig::Attributes();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj = (ns3::NoneFileConfig*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Attributes", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3NoneFileConfig__PythonHelper::Default()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NoneFileConfig *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Default"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::NoneFileConfig::Default();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj = (ns3::NoneFileConfig*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Default", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3NoneFileConfig__PythonHelper::Global()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NoneFileConfig *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Global"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::NoneFileConfig::Global();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj = (ns3::NoneFileConfig*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Global", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3NoneFileConfig__PythonHelper::SetFilename(std::string filename)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NoneFileConfig *self_obj_before;
    PyObject *py_retval;
    const char *filename_ptr;
    Py_ssize_t filename_len;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetFilename"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::NoneFileConfig::SetFilename(filename);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj = (ns3::NoneFileConfig*) this;
    filename_ptr = (filename).c_str();
    filename_len = (filename).size();
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetFilename", (char *) "s#", filename_ptr, filename_len);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NoneFileConfig* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3NoneFileConfig__tp_init__0(PyNs3NoneFileConfig *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3NoneFileConfig *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3NoneFileConfig_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3NoneFileConfig_Type)
    {
        self->obj = new PyNs3NoneFileConfig__PythonHelper(*((PyNs3NoneFileConfig *) arg0)->obj);
        ((PyNs3NoneFileConfig__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::NoneFileConfig(*((PyNs3NoneFileConfig *) arg0)->obj);
    }
    return 0;
}

static int
_wrap_PyNs3NoneFileConfig__tp_init__1(PyNs3NoneFileConfig *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3NoneFileConfig_Type)
    {
        self->obj = new PyNs3NoneFileConfig__PythonHelper();
        ((PyNs3NoneFileConfig__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::NoneFileConfig();
    }
    return 0;
}

int _wrap_PyNs3NoneFileConfig__tp_init(PyNs3NoneFileConfig *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3NoneFileConfig__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3NoneFileConfig__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3NoneFileConfig_Default(PyNs3NoneFileConfig *self)
{
    PyObject *py_retval;
    PyNs3NoneFileConfig__PythonHelper *helper_class = dynamic_cast<PyNs3NoneFileConfig__PythonHelper*> (self->obj);
    
    (helper_class == NULL)? (self->obj->Default()) : (self->obj->ns3::NoneFileConfig::Default());
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3NoneFileConfig_Attributes(PyNs3NoneFileConfig *self)
{
    PyObject *py_retval;
    PyNs3NoneFileConfig__PythonHelper *helper_class = dynamic_cast<PyNs3NoneFileConfig__PythonHelper*> (self->obj);
    
    (helper_class == NULL)? (self->obj->Attributes()) : (self->obj->ns3::NoneFileConfig::Attributes());
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3NoneFileConfig_Global(PyNs3NoneFileConfig *self)
{
    PyObject *py_retval;
    PyNs3NoneFileConfig__PythonHelper *helper_class = dynamic_cast<PyNs3NoneFileConfig__PythonHelper*> (self->obj);
    
    (helper_class == NULL)? (self->obj->Global()) : (self->obj->ns3::NoneFileConfig::Global());
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3NoneFileConfig_SetFilename(PyNs3NoneFileConfig *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *filename;
    Py_ssize_t filename_len;
    PyNs3NoneFileConfig__PythonHelper *helper_class = dynamic_cast<PyNs3NoneFileConfig__PythonHelper*> (self->obj);
    const char *keywords[] = {"filename", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &filename, &filename_len)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->SetFilename(std::string(filename, filename_len))) : (self->obj->ns3::NoneFileConfig::SetFilename(std::string(filename, filename_len)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3NoneFileConfig__copy__(PyNs3NoneFileConfig *self)
{

    PyNs3NoneFileConfig *py_copy;
    py_copy = PyObject_GC_New(PyNs3NoneFileConfig, &PyNs3NoneFileConfig_Type);
    py_copy->obj = new ns3::NoneFileConfig(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3FileConfig_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3NoneFileConfig_methods[] = {
    {(char *) "Default", (PyCFunction) _wrap_PyNs3NoneFileConfig_Default, METH_NOARGS, NULL },
    {(char *) "Attributes", (PyCFunction) _wrap_PyNs3NoneFileConfig_Attributes, METH_NOARGS, NULL },
    {(char *) "Global", (PyCFunction) _wrap_PyNs3NoneFileConfig_Global, METH_NOARGS, NULL },
    {(char *) "SetFilename", (PyCFunction) _wrap_PyNs3NoneFileConfig_SetFilename, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3NoneFileConfig__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3NoneFileConfig__tp_clear(PyNs3NoneFileConfig *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::NoneFileConfig *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3NoneFileConfig__tp_traverse(PyNs3NoneFileConfig *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3NoneFileConfig__PythonHelper) )
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3NoneFileConfig__tp_dealloc(PyNs3NoneFileConfig *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3FileConfig_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3FileConfig_wrapper_registry.end()) {
        PyNs3FileConfig_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3NoneFileConfig__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3NoneFileConfig__tp_richcompare (PyNs3NoneFileConfig *PYBINDGEN_UNUSED(self), PyNs3NoneFileConfig *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3NoneFileConfig_Type)) {
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

PyTypeObject PyNs3NoneFileConfig_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.NoneFileConfig",            /* tp_name */
    sizeof(PyNs3NoneFileConfig),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3NoneFileConfig__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3NoneFileConfig__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3NoneFileConfig__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3NoneFileConfig__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3NoneFileConfig_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3NoneFileConfig, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3NoneFileConfig__tp_init,             /* tp_init */
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
PyNs3ConfigStore__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3ConfigStore *self)
{
    PyObject *py_retval;
    PyNs3ConfigStore__PythonHelper *helper = dynamic_cast< PyNs3ConfigStore__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

ns3::TypeId
PyNs3ConfigStore__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ConfigStore *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::ConfigStore::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3ConfigStore* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ConfigStore* >(m_pyself)->obj = const_cast< ns3::ConfigStore* >((const ns3::ConfigStore*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ConfigStore* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::ConfigStore::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ConfigStore* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::ConfigStore::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ConfigStore* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3ConfigStore__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3ConfigStore__tp_init__0(PyNs3ConfigStore *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3ConfigStore *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3ConfigStore_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3ConfigStore_Type)
    {
        self->obj = new PyNs3ConfigStore__PythonHelper(*((PyNs3ConfigStore *) arg0)->obj);
        ((PyNs3ConfigStore__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::ConfigStore(*((PyNs3ConfigStore *) arg0)->obj);
    }
    return 0;
}

static int
_wrap_PyNs3ConfigStore__tp_init__1(PyNs3ConfigStore *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3ConfigStore_Type)
    {
        self->obj = new PyNs3ConfigStore__PythonHelper();
        ((PyNs3ConfigStore__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::ConfigStore();
    }
    return 0;
}

int _wrap_PyNs3ConfigStore__tp_init(PyNs3ConfigStore *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3ConfigStore__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3ConfigStore__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3ConfigStore_ConfigureAttributes(PyNs3ConfigStore *self)
{
    PyObject *py_retval;
    
    self->obj->ConfigureAttributes();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3ConfigStore_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::ConfigStore::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3ConfigStore_ConfigureDefaults(PyNs3ConfigStore *self)
{
    PyObject *py_retval;
    
    self->obj->ConfigureDefaults();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3ConfigStore_SetFilename(PyNs3ConfigStore *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *filename;
    Py_ssize_t filename_len;
    const char *keywords[] = {"filename", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &filename, &filename_len)) {
        return NULL;
    }
    self->obj->SetFilename(std::string(filename, filename_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3ConfigStore_SetMode(PyNs3ConfigStore *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::ConfigStore::Mode mode;
    const char *keywords[] = {"mode", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &mode)) {
        return NULL;
    }
    self->obj->SetMode(mode);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3ConfigStore_GetInstanceTypeId(PyNs3ConfigStore *self)
{
    PyObject *py_retval;
    PyNs3ConfigStore__PythonHelper *helper_class = dynamic_cast<PyNs3ConfigStore__PythonHelper*> (self->obj);
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = (helper_class == NULL)? (self->obj->GetInstanceTypeId()) : (self->obj->ns3::ConfigStore::GetInstanceTypeId());
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3ConfigStore_SetFileFormat(PyNs3ConfigStore *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::ConfigStore::FileFormat format;
    const char *keywords[] = {"format", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &format)) {
        return NULL;
    }
    self->obj->SetFileFormat(format);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3ConfigStore__copy__(PyNs3ConfigStore *self)
{

    PyNs3ConfigStore *py_copy;
    py_copy = PyObject_GC_New(PyNs3ConfigStore, &PyNs3ConfigStore_Type);
    py_copy->obj = new ns3::ConfigStore(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3ConfigStore_methods[] = {
    {(char *) "ConfigureAttributes", (PyCFunction) _wrap_PyNs3ConfigStore_ConfigureAttributes, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3ConfigStore_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "ConfigureDefaults", (PyCFunction) _wrap_PyNs3ConfigStore_ConfigureDefaults, METH_NOARGS, NULL },
    {(char *) "SetFilename", (PyCFunction) _wrap_PyNs3ConfigStore_SetFilename, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetMode", (PyCFunction) _wrap_PyNs3ConfigStore_SetMode, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetInstanceTypeId", (PyCFunction) _wrap_PyNs3ConfigStore_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "SetFileFormat", (PyCFunction) _wrap_PyNs3ConfigStore_SetFileFormat, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3ConfigStore__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3ConfigStore__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3ConfigStore__tp_clear(PyNs3ConfigStore *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::ConfigStore *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3ConfigStore__tp_traverse(PyNs3ConfigStore *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3ConfigStore__PythonHelper) )
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3ConfigStore__tp_dealloc(PyNs3ConfigStore *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3ConfigStore__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3ConfigStore__tp_richcompare (PyNs3ConfigStore *PYBINDGEN_UNUSED(self), PyNs3ConfigStore *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3ConfigStore_Type)) {
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

PyTypeObject PyNs3ConfigStore_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.ConfigStore",            /* tp_name */
    sizeof(PyNs3ConfigStore),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3ConfigStore__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3ConfigStore__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3ConfigStore__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3ConfigStore__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3ConfigStore_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3ConfigStore, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3ConfigStore__tp_init,             /* tp_init */
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
PyNs3FlowIdTag__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3FlowIdTag *self)
{
    PyObject *py_retval;
    PyNs3FlowIdTag__PythonHelper *helper = dynamic_cast< PyNs3FlowIdTag__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3FlowIdTag__PythonHelper::Deserialize(ns3::TagBuffer buf)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::FlowIdTag *self_obj_before;
    PyObject *py_retval;
    PyNs3TagBuffer *py_TagBuffer;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Deserialize"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::FlowIdTag::Deserialize(buf);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj;
    reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj = (ns3::FlowIdTag*) this;
    py_TagBuffer = PyObject_New(PyNs3TagBuffer, &PyNs3TagBuffer_Type);
    py_TagBuffer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TagBuffer->obj = new ns3::TagBuffer(buf);
    PyNs3TagBuffer_wrapper_registry[(void *) py_TagBuffer->obj] = (PyObject *) py_TagBuffer;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Deserialize", (char *) "N", py_TagBuffer);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3FlowIdTag__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::FlowIdTag *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::FlowIdTag::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj;
    reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj = const_cast< ns3::FlowIdTag* >((const ns3::FlowIdTag*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::FlowIdTag::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::FlowIdTag::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

uint32_t
PyNs3FlowIdTag__PythonHelper::GetSerializedSize() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::FlowIdTag *self_obj_before;
    PyObject *py_retval;
    uint32_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetSerializedSize"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::FlowIdTag::GetSerializedSize();
    }
    self_obj_before = reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj;
    reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj = const_cast< ns3::FlowIdTag* >((const ns3::FlowIdTag*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetSerializedSize", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::FlowIdTag::GetSerializedSize();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::FlowIdTag::GetSerializedSize();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}


void
PyNs3FlowIdTag__PythonHelper::Serialize(ns3::TagBuffer buf) const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::FlowIdTag *self_obj_before;
    PyObject *py_retval;
    PyNs3TagBuffer *py_TagBuffer;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Serialize"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::FlowIdTag::Serialize(buf);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj;
    reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj = const_cast< ns3::FlowIdTag* >((const ns3::FlowIdTag*) this);
    py_TagBuffer = PyObject_New(PyNs3TagBuffer, &PyNs3TagBuffer_Type);
    py_TagBuffer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TagBuffer->obj = new ns3::TagBuffer(buf);
    PyNs3TagBuffer_wrapper_registry[(void *) py_TagBuffer->obj] = (PyObject *) py_TagBuffer;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Serialize", (char *) "N", py_TagBuffer);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3FlowIdTag* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3FlowIdTag__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3FlowIdTag__tp_init__0(PyNs3FlowIdTag *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3FlowIdTag *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3FlowIdTag_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3FlowIdTag_Type)
    {
        self->obj = new PyNs3FlowIdTag__PythonHelper(*((PyNs3FlowIdTag *) arg0)->obj);
        ((PyNs3FlowIdTag__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::FlowIdTag(*((PyNs3FlowIdTag *) arg0)->obj);
    }
    return 0;
}

static int
_wrap_PyNs3FlowIdTag__tp_init__1(PyNs3FlowIdTag *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3FlowIdTag_Type)
    {
        self->obj = new PyNs3FlowIdTag__PythonHelper();
        ((PyNs3FlowIdTag__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::FlowIdTag();
    }
    return 0;
}

static int
_wrap_PyNs3FlowIdTag__tp_init__2(PyNs3FlowIdTag *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    unsigned int flowId;
    const char *keywords[] = {"flowId", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &flowId)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3FlowIdTag_Type)
    {
        self->obj = new PyNs3FlowIdTag__PythonHelper(flowId);
        ((PyNs3FlowIdTag__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::FlowIdTag(flowId);
    }
    return 0;
}

int _wrap_PyNs3FlowIdTag__tp_init(PyNs3FlowIdTag *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[3] = {0,};
    retval = _wrap_PyNs3FlowIdTag__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3FlowIdTag__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3FlowIdTag__tp_init__2(self, args, kwargs, &exceptions[2]);
    if (!exceptions[2]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        return retval;
    }
    error_list = PyList_New(3);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyList_SET_ITEM(error_list, 2, PyObject_Str(exceptions[2]));
    Py_DECREF(exceptions[2]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3FlowIdTag_Deserialize(PyNs3FlowIdTag *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3TagBuffer *buf;
    PyNs3FlowIdTag__PythonHelper *helper_class = dynamic_cast<PyNs3FlowIdTag__PythonHelper*> (self->obj);
    const char *keywords[] = {"buf", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3TagBuffer_Type, &buf)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Deserialize(*((PyNs3TagBuffer *) buf)->obj)) : (self->obj->ns3::FlowIdTag::Deserialize(*((PyNs3TagBuffer *) buf)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3FlowIdTag_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::FlowIdTag::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3FlowIdTag_Serialize(PyNs3FlowIdTag *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3TagBuffer *buf;
    PyNs3FlowIdTag__PythonHelper *helper_class = dynamic_cast<PyNs3FlowIdTag__PythonHelper*> (self->obj);
    const char *keywords[] = {"buf", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3TagBuffer_Type, &buf)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Serialize(*((PyNs3TagBuffer *) buf)->obj)) : (self->obj->ns3::FlowIdTag::Serialize(*((PyNs3TagBuffer *) buf)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3FlowIdTag_Print(PyNs3FlowIdTag *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyStdOstream *os;
    PyNs3FlowIdTag__PythonHelper *helper_class = dynamic_cast<PyNs3FlowIdTag__PythonHelper*> (self->obj);
    const char *keywords[] = {"os", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyStdOstream_Type, &os)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Print(*((PyStdOstream *) os)->obj)) : (self->obj->ns3::FlowIdTag::Print(*((PyStdOstream *) os)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3FlowIdTag_AllocateFlowId(void)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = ns3::FlowIdTag::AllocateFlowId();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3FlowIdTag_GetInstanceTypeId(PyNs3FlowIdTag *self)
{
    PyObject *py_retval;
    PyNs3FlowIdTag__PythonHelper *helper_class = dynamic_cast<PyNs3FlowIdTag__PythonHelper*> (self->obj);
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = (helper_class == NULL)? (self->obj->GetInstanceTypeId()) : (self->obj->ns3::FlowIdTag::GetInstanceTypeId());
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3FlowIdTag_GetSerializedSize(PyNs3FlowIdTag *self)
{
    PyObject *py_retval;
    uint32_t retval;
    PyNs3FlowIdTag__PythonHelper *helper_class = dynamic_cast<PyNs3FlowIdTag__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->GetSerializedSize()) : (self->obj->ns3::FlowIdTag::GetSerializedSize());
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3FlowIdTag_GetFlowId(PyNs3FlowIdTag *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetFlowId();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3FlowIdTag_SetFlowId(PyNs3FlowIdTag *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int flowId;
    const char *keywords[] = {"flowId", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &flowId)) {
        return NULL;
    }
    self->obj->SetFlowId(flowId);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3FlowIdTag__copy__(PyNs3FlowIdTag *self)
{

    PyNs3FlowIdTag *py_copy;
    py_copy = PyObject_GC_New(PyNs3FlowIdTag, &PyNs3FlowIdTag_Type);
    py_copy->obj = new ns3::FlowIdTag(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3FlowIdTag_methods[] = {
    {(char *) "Deserialize", (PyCFunction) _wrap_PyNs3FlowIdTag_Deserialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3FlowIdTag_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Serialize", (PyCFunction) _wrap_PyNs3FlowIdTag_Serialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Print", (PyCFunction) _wrap_PyNs3FlowIdTag_Print, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "AllocateFlowId", (PyCFunction) _wrap_PyNs3FlowIdTag_AllocateFlowId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "GetInstanceTypeId", (PyCFunction) _wrap_PyNs3FlowIdTag_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "GetSerializedSize", (PyCFunction) _wrap_PyNs3FlowIdTag_GetSerializedSize, METH_NOARGS, NULL },
    {(char *) "GetFlowId", (PyCFunction) _wrap_PyNs3FlowIdTag_GetFlowId, METH_NOARGS, NULL },
    {(char *) "SetFlowId", (PyCFunction) _wrap_PyNs3FlowIdTag_SetFlowId, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3FlowIdTag__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3FlowIdTag__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3FlowIdTag__tp_clear(PyNs3FlowIdTag *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::FlowIdTag *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3FlowIdTag__tp_traverse(PyNs3FlowIdTag *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3FlowIdTag__PythonHelper) )
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3FlowIdTag__tp_dealloc(PyNs3FlowIdTag *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3FlowIdTag__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3FlowIdTag__tp_richcompare (PyNs3FlowIdTag *PYBINDGEN_UNUSED(self), PyNs3FlowIdTag *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3FlowIdTag_Type)) {
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

PyTypeObject PyNs3FlowIdTag_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.FlowIdTag",            /* tp_name */
    sizeof(PyNs3FlowIdTag),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3FlowIdTag__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3FlowIdTag__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3FlowIdTag__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3FlowIdTag__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3FlowIdTag_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3FlowIdTag, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3FlowIdTag__tp_init,             /* tp_init */
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





static int
_wrap_PyNs3Gnuplot2dDataset__tp_init__0(PyNs3Gnuplot2dDataset *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Gnuplot2dDataset *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Gnuplot2dDataset_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Gnuplot2dDataset(*((PyNs3Gnuplot2dDataset *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3Gnuplot2dDataset__tp_init__1(PyNs3Gnuplot2dDataset *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *title;
    Py_ssize_t title_len;
    std::string title_std;
    const char *keywords[] = {"title", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &title, &title_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    title_std = std::string(title, title_len);
    self->obj = new ns3::Gnuplot2dDataset(title_std);
    return 0;
}

int _wrap_PyNs3Gnuplot2dDataset__tp_init(PyNs3Gnuplot2dDataset *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Gnuplot2dDataset__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Gnuplot2dDataset__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Gnuplot2dDataset_AddEmptyLine(PyNs3Gnuplot2dDataset *self)
{
    PyObject *py_retval;
    
    self->obj->AddEmptyLine();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Gnuplot2dDataset_SetDefaultErrorBars(PyNs3Gnuplot2dDataset *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Gnuplot2dDataset::ErrorBars errorBars;
    const char *keywords[] = {"errorBars", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &errorBars)) {
        return NULL;
    }
    ns3::Gnuplot2dDataset::SetDefaultErrorBars(errorBars);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Gnuplot2dDataset_SetStyle(PyNs3Gnuplot2dDataset *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Gnuplot2dDataset::Style style;
    const char *keywords[] = {"style", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &style)) {
        return NULL;
    }
    self->obj->SetStyle(style);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Gnuplot2dDataset_SetErrorBars(PyNs3Gnuplot2dDataset *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Gnuplot2dDataset::ErrorBars errorBars;
    const char *keywords[] = {"errorBars", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &errorBars)) {
        return NULL;
    }
    self->obj->SetErrorBars(errorBars);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}



PyObject *
_wrap_PyNs3Gnuplot2dDataset_Add__0(PyNs3Gnuplot2dDataset *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    double x;
    double y;
    const char *keywords[] = {"x", "y", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "dd", (char **) keywords, &x, &y)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->Add(x, y);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3Gnuplot2dDataset_Add__1(PyNs3Gnuplot2dDataset *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    double x;
    double y;
    double errorDelta;
    const char *keywords[] = {"x", "y", "errorDelta", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "ddd", (char **) keywords, &x, &y, &errorDelta)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->Add(x, y, errorDelta);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3Gnuplot2dDataset_Add__2(PyNs3Gnuplot2dDataset *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    double x;
    double y;
    double minY;
    double maxY;
    const char *keywords[] = {"x", "y", "minY", "maxY", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "dddd", (char **) keywords, &x, &y, &minY, &maxY)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->Add(x, y, minY, maxY);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject * _wrap_PyNs3Gnuplot2dDataset_Add(PyNs3Gnuplot2dDataset *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[3] = {0,};
    retval = _wrap_PyNs3Gnuplot2dDataset_Add__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Gnuplot2dDataset_Add__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3Gnuplot2dDataset_Add__2(self, args, kwargs, &exceptions[2]);
    if (!exceptions[2]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        return retval;
    }
    error_list = PyList_New(3);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyList_SET_ITEM(error_list, 2, PyObject_Str(exceptions[2]));
    Py_DECREF(exceptions[2]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}


PyObject *
_wrap_PyNs3Gnuplot2dDataset_SetDefaultStyle(PyNs3Gnuplot2dDataset *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Gnuplot2dDataset::Style style;
    const char *keywords[] = {"style", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &style)) {
        return NULL;
    }
    ns3::Gnuplot2dDataset::SetDefaultStyle(style);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3Gnuplot2dDataset__copy__(PyNs3Gnuplot2dDataset *self)
{

    PyNs3Gnuplot2dDataset *py_copy;
    py_copy = PyObject_New(PyNs3Gnuplot2dDataset, &PyNs3Gnuplot2dDataset_Type);
    py_copy->obj = new ns3::Gnuplot2dDataset(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3GnuplotDataset_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Gnuplot2dDataset_methods[] = {
    {(char *) "AddEmptyLine", (PyCFunction) _wrap_PyNs3Gnuplot2dDataset_AddEmptyLine, METH_NOARGS, NULL },
    {(char *) "SetDefaultErrorBars", (PyCFunction) _wrap_PyNs3Gnuplot2dDataset_SetDefaultErrorBars, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "SetStyle", (PyCFunction) _wrap_PyNs3Gnuplot2dDataset_SetStyle, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetErrorBars", (PyCFunction) _wrap_PyNs3Gnuplot2dDataset_SetErrorBars, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Add", (PyCFunction) _wrap_PyNs3Gnuplot2dDataset_Add, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetDefaultStyle", (PyCFunction) _wrap_PyNs3Gnuplot2dDataset_SetDefaultStyle, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Gnuplot2dDataset__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Gnuplot2dDataset__tp_dealloc(PyNs3Gnuplot2dDataset *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3GnuplotDataset_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3GnuplotDataset_wrapper_registry.end()) {
        PyNs3GnuplotDataset_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::Gnuplot2dDataset *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Gnuplot2dDataset__tp_richcompare (PyNs3Gnuplot2dDataset *PYBINDGEN_UNUSED(self), PyNs3Gnuplot2dDataset *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Gnuplot2dDataset_Type)) {
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

PyTypeObject PyNs3Gnuplot2dDataset_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.Gnuplot2dDataset",            /* tp_name */
    sizeof(PyNs3Gnuplot2dDataset),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Gnuplot2dDataset__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3Gnuplot2dDataset__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Gnuplot2dDataset_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Gnuplot2dDataset__tp_init,             /* tp_init */
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





static int
_wrap_PyNs3Gnuplot2dFunction__tp_init__0(PyNs3Gnuplot2dFunction *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Gnuplot2dFunction *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Gnuplot2dFunction_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Gnuplot2dFunction(*((PyNs3Gnuplot2dFunction *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3Gnuplot2dFunction__tp_init__1(PyNs3Gnuplot2dFunction *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *title;
    Py_ssize_t title_len;
    std::string title_std;
    const char *function;
    Py_ssize_t function_len;
    std::string function_std;
    const char *keywords[] = {"title", "function", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#s#", (char **) keywords, &title, &title_len, &function, &function_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    title_std = std::string(title, title_len);
    function_std = std::string(function, function_len);
    self->obj = new ns3::Gnuplot2dFunction(title_std, function_std);
    return 0;
}

int _wrap_PyNs3Gnuplot2dFunction__tp_init(PyNs3Gnuplot2dFunction *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Gnuplot2dFunction__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Gnuplot2dFunction__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Gnuplot2dFunction_SetFunction(PyNs3Gnuplot2dFunction *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *function;
    Py_ssize_t function_len;
    std::string function_std;
    const char *keywords[] = {"function", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &function, &function_len)) {
        return NULL;
    }
    function_std = std::string(function, function_len);
    self->obj->SetFunction(function_std);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3Gnuplot2dFunction__copy__(PyNs3Gnuplot2dFunction *self)
{

    PyNs3Gnuplot2dFunction *py_copy;
    py_copy = PyObject_New(PyNs3Gnuplot2dFunction, &PyNs3Gnuplot2dFunction_Type);
    py_copy->obj = new ns3::Gnuplot2dFunction(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3GnuplotDataset_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Gnuplot2dFunction_methods[] = {
    {(char *) "SetFunction", (PyCFunction) _wrap_PyNs3Gnuplot2dFunction_SetFunction, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Gnuplot2dFunction__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Gnuplot2dFunction__tp_dealloc(PyNs3Gnuplot2dFunction *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3GnuplotDataset_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3GnuplotDataset_wrapper_registry.end()) {
        PyNs3GnuplotDataset_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::Gnuplot2dFunction *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Gnuplot2dFunction__tp_richcompare (PyNs3Gnuplot2dFunction *PYBINDGEN_UNUSED(self), PyNs3Gnuplot2dFunction *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Gnuplot2dFunction_Type)) {
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

PyTypeObject PyNs3Gnuplot2dFunction_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.Gnuplot2dFunction",            /* tp_name */
    sizeof(PyNs3Gnuplot2dFunction),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Gnuplot2dFunction__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3Gnuplot2dFunction__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Gnuplot2dFunction_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Gnuplot2dFunction__tp_init,             /* tp_init */
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





static int
_wrap_PyNs3Gnuplot3dDataset__tp_init__0(PyNs3Gnuplot3dDataset *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Gnuplot3dDataset *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Gnuplot3dDataset_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Gnuplot3dDataset(*((PyNs3Gnuplot3dDataset *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3Gnuplot3dDataset__tp_init__1(PyNs3Gnuplot3dDataset *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *title;
    Py_ssize_t title_len;
    std::string title_std;
    const char *keywords[] = {"title", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &title, &title_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    title_std = std::string(title, title_len);
    self->obj = new ns3::Gnuplot3dDataset(title_std);
    return 0;
}

int _wrap_PyNs3Gnuplot3dDataset__tp_init(PyNs3Gnuplot3dDataset *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Gnuplot3dDataset__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Gnuplot3dDataset__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Gnuplot3dDataset_Add(PyNs3Gnuplot3dDataset *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    double x;
    double y;
    double z;
    const char *keywords[] = {"x", "y", "z", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "ddd", (char **) keywords, &x, &y, &z)) {
        return NULL;
    }
    self->obj->Add(x, y, z);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Gnuplot3dDataset_SetStyle(PyNs3Gnuplot3dDataset *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *style;
    Py_ssize_t style_len;
    std::string style_std;
    const char *keywords[] = {"style", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &style, &style_len)) {
        return NULL;
    }
    style_std = std::string(style, style_len);
    self->obj->SetStyle(style_std);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Gnuplot3dDataset_AddEmptyLine(PyNs3Gnuplot3dDataset *self)
{
    PyObject *py_retval;
    
    self->obj->AddEmptyLine();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Gnuplot3dDataset_SetDefaultStyle(PyNs3Gnuplot3dDataset *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *style;
    Py_ssize_t style_len;
    std::string style_std;
    const char *keywords[] = {"style", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &style, &style_len)) {
        return NULL;
    }
    style_std = std::string(style, style_len);
    ns3::Gnuplot3dDataset::SetDefaultStyle(style_std);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3Gnuplot3dDataset__copy__(PyNs3Gnuplot3dDataset *self)
{

    PyNs3Gnuplot3dDataset *py_copy;
    py_copy = PyObject_New(PyNs3Gnuplot3dDataset, &PyNs3Gnuplot3dDataset_Type);
    py_copy->obj = new ns3::Gnuplot3dDataset(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3GnuplotDataset_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Gnuplot3dDataset_methods[] = {
    {(char *) "Add", (PyCFunction) _wrap_PyNs3Gnuplot3dDataset_Add, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetStyle", (PyCFunction) _wrap_PyNs3Gnuplot3dDataset_SetStyle, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "AddEmptyLine", (PyCFunction) _wrap_PyNs3Gnuplot3dDataset_AddEmptyLine, METH_NOARGS, NULL },
    {(char *) "SetDefaultStyle", (PyCFunction) _wrap_PyNs3Gnuplot3dDataset_SetDefaultStyle, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Gnuplot3dDataset__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Gnuplot3dDataset__tp_dealloc(PyNs3Gnuplot3dDataset *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3GnuplotDataset_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3GnuplotDataset_wrapper_registry.end()) {
        PyNs3GnuplotDataset_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::Gnuplot3dDataset *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Gnuplot3dDataset__tp_richcompare (PyNs3Gnuplot3dDataset *PYBINDGEN_UNUSED(self), PyNs3Gnuplot3dDataset *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Gnuplot3dDataset_Type)) {
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

PyTypeObject PyNs3Gnuplot3dDataset_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.Gnuplot3dDataset",            /* tp_name */
    sizeof(PyNs3Gnuplot3dDataset),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Gnuplot3dDataset__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3Gnuplot3dDataset__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Gnuplot3dDataset_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Gnuplot3dDataset__tp_init,             /* tp_init */
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





static int
_wrap_PyNs3Gnuplot3dFunction__tp_init__0(PyNs3Gnuplot3dFunction *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Gnuplot3dFunction *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Gnuplot3dFunction_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Gnuplot3dFunction(*((PyNs3Gnuplot3dFunction *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3Gnuplot3dFunction__tp_init__1(PyNs3Gnuplot3dFunction *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *title;
    Py_ssize_t title_len;
    std::string title_std;
    const char *function;
    Py_ssize_t function_len;
    std::string function_std;
    const char *keywords[] = {"title", "function", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#s#", (char **) keywords, &title, &title_len, &function, &function_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    title_std = std::string(title, title_len);
    function_std = std::string(function, function_len);
    self->obj = new ns3::Gnuplot3dFunction(title_std, function_std);
    return 0;
}

int _wrap_PyNs3Gnuplot3dFunction__tp_init(PyNs3Gnuplot3dFunction *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Gnuplot3dFunction__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Gnuplot3dFunction__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Gnuplot3dFunction_SetFunction(PyNs3Gnuplot3dFunction *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *function;
    Py_ssize_t function_len;
    std::string function_std;
    const char *keywords[] = {"function", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &function, &function_len)) {
        return NULL;
    }
    function_std = std::string(function, function_len);
    self->obj->SetFunction(function_std);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3Gnuplot3dFunction__copy__(PyNs3Gnuplot3dFunction *self)
{

    PyNs3Gnuplot3dFunction *py_copy;
    py_copy = PyObject_New(PyNs3Gnuplot3dFunction, &PyNs3Gnuplot3dFunction_Type);
    py_copy->obj = new ns3::Gnuplot3dFunction(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3GnuplotDataset_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Gnuplot3dFunction_methods[] = {
    {(char *) "SetFunction", (PyCFunction) _wrap_PyNs3Gnuplot3dFunction_SetFunction, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Gnuplot3dFunction__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Gnuplot3dFunction__tp_dealloc(PyNs3Gnuplot3dFunction *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3GnuplotDataset_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3GnuplotDataset_wrapper_registry.end()) {
        PyNs3GnuplotDataset_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::Gnuplot3dFunction *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Gnuplot3dFunction__tp_richcompare (PyNs3Gnuplot3dFunction *PYBINDGEN_UNUSED(self), PyNs3Gnuplot3dFunction *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Gnuplot3dFunction_Type)) {
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

PyTypeObject PyNs3Gnuplot3dFunction_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.Gnuplot3dFunction",            /* tp_name */
    sizeof(PyNs3Gnuplot3dFunction),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Gnuplot3dFunction__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3Gnuplot3dFunction__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Gnuplot3dFunction_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Gnuplot3dFunction__tp_init,             /* tp_init */
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










