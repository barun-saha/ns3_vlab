#include "ns3module.h"

std::map<void*, PyObject*> PyNs3LbtsMessage_wrapper_registry;


static int
_wrap_PyNs3LbtsMessage__tp_init__0(PyNs3LbtsMessage *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3LbtsMessage *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3LbtsMessage_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::LbtsMessage(*((PyNs3LbtsMessage *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3LbtsMessage__tp_init__1(PyNs3LbtsMessage *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::LbtsMessage();
    return 0;
}

static int
_wrap_PyNs3LbtsMessage__tp_init__2(PyNs3LbtsMessage *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    unsigned int rxc;
    unsigned int txc;
    unsigned int id;
    PyObject *t;
    ns3::Time t2;
    const char *keywords[] = {"rxc", "txc", "id", "t", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "IIIO", (char **) keywords, &rxc, &txc, &id, &t)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (PyObject_IsInstance(t, (PyObject*) &PyNs3Time_Type)) {
        t2 = *((PyNs3Time *) t)->obj;
    } else if (PyObject_IsInstance(t, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        t2 = *((PyNs3TracedValue__Ns3Time *) t)->obj;
    } else if (PyObject_IsInstance(t, (PyObject*) &PyNs3Scalar_Type)) {
        t2 = *((PyNs3Scalar *) t)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", t->ob_type->tp_name);
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::LbtsMessage(rxc, txc, id, t2);
    return 0;
}

int _wrap_PyNs3LbtsMessage__tp_init(PyNs3LbtsMessage *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[3] = {0,};
    retval = _wrap_PyNs3LbtsMessage__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3LbtsMessage__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3LbtsMessage__tp_init__2(self, args, kwargs, &exceptions[2]);
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
_wrap_PyNs3LbtsMessage_GetSmallestTime(PyNs3LbtsMessage *self)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = self->obj->GetSmallestTime();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3LbtsMessage_GetRxCount(PyNs3LbtsMessage *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetRxCount();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3LbtsMessage_GetMyId(PyNs3LbtsMessage *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetMyId();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3LbtsMessage_GetTxCount(PyNs3LbtsMessage *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetTxCount();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


static PyObject*
_wrap_PyNs3LbtsMessage__copy__(PyNs3LbtsMessage *self)
{

    PyNs3LbtsMessage *py_copy;
    py_copy = PyObject_New(PyNs3LbtsMessage, &PyNs3LbtsMessage_Type);
    py_copy->obj = new ns3::LbtsMessage(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3LbtsMessage_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3LbtsMessage_methods[] = {
    {(char *) "GetSmallestTime", (PyCFunction) _wrap_PyNs3LbtsMessage_GetSmallestTime, METH_NOARGS, NULL },
    {(char *) "GetRxCount", (PyCFunction) _wrap_PyNs3LbtsMessage_GetRxCount, METH_NOARGS, NULL },
    {(char *) "GetMyId", (PyCFunction) _wrap_PyNs3LbtsMessage_GetMyId, METH_NOARGS, NULL },
    {(char *) "GetTxCount", (PyCFunction) _wrap_PyNs3LbtsMessage_GetTxCount, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3LbtsMessage__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3LbtsMessage__tp_dealloc(PyNs3LbtsMessage *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3LbtsMessage_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3LbtsMessage_wrapper_registry.end()) {
        PyNs3LbtsMessage_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::LbtsMessage *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3LbtsMessage__tp_richcompare (PyNs3LbtsMessage *PYBINDGEN_UNUSED(self), PyNs3LbtsMessage *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3LbtsMessage_Type)) {
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

PyTypeObject PyNs3LbtsMessage_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.LbtsMessage",            /* tp_name */
    sizeof(PyNs3LbtsMessage),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3LbtsMessage__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3LbtsMessage__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3LbtsMessage_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3LbtsMessage__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3MpiInterface_wrapper_registry;


static int
_wrap_PyNs3MpiInterface__tp_init__0(PyNs3MpiInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::MpiInterface();
    return 0;
}

static int
_wrap_PyNs3MpiInterface__tp_init__1(PyNs3MpiInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3MpiInterface *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3MpiInterface_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::MpiInterface(*((PyNs3MpiInterface *) arg0)->obj);
    return 0;
}

int _wrap_PyNs3MpiInterface__tp_init(PyNs3MpiInterface *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3MpiInterface__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3MpiInterface__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3MpiInterface_ReceiveMessages(void)
{
    PyObject *py_retval;
    
    ns3::MpiInterface::ReceiveMessages();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MpiInterface_IsEnabled(void)
{
    PyObject *py_retval;
    bool retval;
    
    retval = ns3::MpiInterface::IsEnabled();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MpiInterface_GetSystemId(void)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = ns3::MpiInterface::GetSystemId();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MpiInterface_GetRxCount(void)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = ns3::MpiInterface::GetRxCount();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MpiInterface_GetSize(void)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = ns3::MpiInterface::GetSize();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MpiInterface_SendPacket(PyNs3MpiInterface *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Packet *p;
    ns3::Packet *p_ptr;
    PyObject *rxTime;
    ns3::Time rxTime2;
    unsigned int node;
    unsigned int dev;
    const char *keywords[] = {"p", "rxTime", "node", "dev", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!OII", (char **) keywords, &PyNs3Packet_Type, &p, &rxTime, &node, &dev)) {
        return NULL;
    }
    p_ptr = (p ? p->obj : NULL);
    if (PyObject_IsInstance(rxTime, (PyObject*) &PyNs3Time_Type)) {
        rxTime2 = *((PyNs3Time *) rxTime)->obj;
    } else if (PyObject_IsInstance(rxTime, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        rxTime2 = *((PyNs3TracedValue__Ns3Time *) rxTime)->obj;
    } else if (PyObject_IsInstance(rxTime, (PyObject*) &PyNs3Scalar_Type)) {
        rxTime2 = *((PyNs3Scalar *) rxTime)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", rxTime->ob_type->tp_name);
        return NULL;
    }
    ns3::MpiInterface::SendPacket(ns3::Ptr< ns3::Packet  > (p_ptr), rxTime2, node, dev);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MpiInterface_Destroy(void)
{
    PyObject *py_retval;
    
    ns3::MpiInterface::Destroy();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MpiInterface_TestSendComplete(void)
{
    PyObject *py_retval;
    
    ns3::MpiInterface::TestSendComplete();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MpiInterface_GetTxCount(void)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = ns3::MpiInterface::GetTxCount();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


static PyObject*
_wrap_PyNs3MpiInterface__copy__(PyNs3MpiInterface *self)
{

    PyNs3MpiInterface *py_copy;
    py_copy = PyObject_New(PyNs3MpiInterface, &PyNs3MpiInterface_Type);
    py_copy->obj = new ns3::MpiInterface(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3MpiInterface_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3MpiInterface_methods[] = {
    {(char *) "ReceiveMessages", (PyCFunction) _wrap_PyNs3MpiInterface_ReceiveMessages, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "IsEnabled", (PyCFunction) _wrap_PyNs3MpiInterface_IsEnabled, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "GetSystemId", (PyCFunction) _wrap_PyNs3MpiInterface_GetSystemId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "GetRxCount", (PyCFunction) _wrap_PyNs3MpiInterface_GetRxCount, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "GetSize", (PyCFunction) _wrap_PyNs3MpiInterface_GetSize, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "SendPacket", (PyCFunction) _wrap_PyNs3MpiInterface_SendPacket, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "Destroy", (PyCFunction) _wrap_PyNs3MpiInterface_Destroy, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "TestSendComplete", (PyCFunction) _wrap_PyNs3MpiInterface_TestSendComplete, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "GetTxCount", (PyCFunction) _wrap_PyNs3MpiInterface_GetTxCount, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3MpiInterface__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3MpiInterface__tp_dealloc(PyNs3MpiInterface *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3MpiInterface_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3MpiInterface_wrapper_registry.end()) {
        PyNs3MpiInterface_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::MpiInterface *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3MpiInterface__tp_richcompare (PyNs3MpiInterface *PYBINDGEN_UNUSED(self), PyNs3MpiInterface *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3MpiInterface_Type)) {
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

PyTypeObject PyNs3MpiInterface_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.MpiInterface",            /* tp_name */
    sizeof(PyNs3MpiInterface),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3MpiInterface__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3MpiInterface__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3MpiInterface_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3MpiInterface__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3SentBuffer_wrapper_registry;


static int
_wrap_PyNs3SentBuffer__tp_init__0(PyNs3SentBuffer *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3SentBuffer *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SentBuffer_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::SentBuffer(*((PyNs3SentBuffer *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3SentBuffer__tp_init__1(PyNs3SentBuffer *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::SentBuffer();
    return 0;
}

int _wrap_PyNs3SentBuffer__tp_init(PyNs3SentBuffer *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3SentBuffer__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3SentBuffer__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3SentBuffer__copy__(PyNs3SentBuffer *self)
{

    PyNs3SentBuffer *py_copy;
    py_copy = PyObject_New(PyNs3SentBuffer, &PyNs3SentBuffer_Type);
    py_copy->obj = new ns3::SentBuffer(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3SentBuffer_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3SentBuffer_methods[] = {
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3SentBuffer__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3SentBuffer__tp_dealloc(PyNs3SentBuffer *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3SentBuffer_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3SentBuffer_wrapper_registry.end()) {
        PyNs3SentBuffer_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::SentBuffer *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3SentBuffer__tp_richcompare (PyNs3SentBuffer *PYBINDGEN_UNUSED(self), PyNs3SentBuffer *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3SentBuffer_Type)) {
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

PyTypeObject PyNs3SentBuffer_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.SentBuffer",            /* tp_name */
    sizeof(PyNs3SentBuffer),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3SentBuffer__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3SentBuffer__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3SentBuffer_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3SentBuffer__tp_init,             /* tp_init */
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
_wrap_PyNs3DistributedSimulatorImpl__tp_init__0(PyNs3DistributedSimulatorImpl *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3DistributedSimulatorImpl *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DistributedSimulatorImpl_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::DistributedSimulatorImpl(*((PyNs3DistributedSimulatorImpl *) arg0)->obj);
    self->obj->Ref ();
    ns3::CompleteConstruct(self->obj);
    return 0;
}

static int
_wrap_PyNs3DistributedSimulatorImpl__tp_init__1(PyNs3DistributedSimulatorImpl *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::DistributedSimulatorImpl();
    self->obj->Ref ();
    ns3::CompleteConstruct(self->obj);
    return 0;
}

int _wrap_PyNs3DistributedSimulatorImpl__tp_init(PyNs3DistributedSimulatorImpl *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3DistributedSimulatorImpl__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3DistributedSimulatorImpl__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3DistributedSimulatorImpl_Run(PyNs3DistributedSimulatorImpl *self)
{
    PyObject *py_retval;
    
    self->obj->Run();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DistributedSimulatorImpl_Now(PyNs3DistributedSimulatorImpl *self)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = self->obj->Now();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3DistributedSimulatorImpl_GetMaximumSimulationTime(PyNs3DistributedSimulatorImpl *self)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = self->obj->GetMaximumSimulationTime();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3DistributedSimulatorImpl_IsFinished(PyNs3DistributedSimulatorImpl *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsFinished();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3DistributedSimulatorImpl_GetDelayLeft(PyNs3DistributedSimulatorImpl *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3EventId *id;
    const char *keywords[] = {"id", NULL};
    PyNs3Time *py_Time;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3EventId_Type, &id)) {
        return NULL;
    }
    ns3::Time retval = self->obj->GetDelayLeft(*((PyNs3EventId *) id)->obj);
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3DistributedSimulatorImpl_GetSystemId(PyNs3DistributedSimulatorImpl *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetSystemId();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}



PyObject *
_wrap_PyNs3DistributedSimulatorImpl_Stop__0(PyNs3DistributedSimulatorImpl *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->Stop();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3DistributedSimulatorImpl_Stop__1(PyNs3DistributedSimulatorImpl *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyObject *time;
    ns3::Time time2;
    const char *keywords[] = {"time", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &time)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    if (PyObject_IsInstance(time, (PyObject*) &PyNs3Time_Type)) {
        time2 = *((PyNs3Time *) time)->obj;
    } else if (PyObject_IsInstance(time, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        time2 = *((PyNs3TracedValue__Ns3Time *) time)->obj;
    } else if (PyObject_IsInstance(time, (PyObject*) &PyNs3Scalar_Type)) {
        time2 = *((PyNs3Scalar *) time)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", time->ob_type->tp_name);
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->Stop(time2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject * _wrap_PyNs3DistributedSimulatorImpl_Stop(PyNs3DistributedSimulatorImpl *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3DistributedSimulatorImpl_Stop__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3DistributedSimulatorImpl_Stop__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3DistributedSimulatorImpl_Remove(PyNs3DistributedSimulatorImpl *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3EventId *ev;
    const char *keywords[] = {"ev", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3EventId_Type, &ev)) {
        return NULL;
    }
    self->obj->Remove(*((PyNs3EventId *) ev)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DistributedSimulatorImpl_GetContext(PyNs3DistributedSimulatorImpl *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetContext();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3DistributedSimulatorImpl_SetScheduler(PyNs3DistributedSimulatorImpl *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3ObjectFactory *schedulerFactory;
    const char *keywords[] = {"schedulerFactory", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3ObjectFactory_Type, &schedulerFactory)) {
        return NULL;
    }
    self->obj->SetScheduler(*((PyNs3ObjectFactory *) schedulerFactory)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DistributedSimulatorImpl_RunOneEvent(PyNs3DistributedSimulatorImpl *self)
{
    PyObject *py_retval;
    
    self->obj->RunOneEvent();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DistributedSimulatorImpl_Cancel(PyNs3DistributedSimulatorImpl *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3EventId *ev;
    const char *keywords[] = {"ev", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3EventId_Type, &ev)) {
        return NULL;
    }
    self->obj->Cancel(*((PyNs3EventId *) ev)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DistributedSimulatorImpl_Destroy(PyNs3DistributedSimulatorImpl *self)
{
    PyObject *py_retval;
    
    self->obj->Destroy();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DistributedSimulatorImpl_IsExpired(PyNs3DistributedSimulatorImpl *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3EventId *ev;
    const char *keywords[] = {"ev", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3EventId_Type, &ev)) {
        return NULL;
    }
    retval = self->obj->IsExpired(*((PyNs3EventId *) ev)->obj);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3DistributedSimulatorImpl_Next(PyNs3DistributedSimulatorImpl *self)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = self->obj->Next();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3DistributedSimulatorImpl_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::DistributedSimulatorImpl::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


static PyObject*
_wrap_PyNs3DistributedSimulatorImpl__copy__(PyNs3DistributedSimulatorImpl *self)
{

    PyNs3DistributedSimulatorImpl *py_copy;
    py_copy = PyObject_GC_New(PyNs3DistributedSimulatorImpl, &PyNs3DistributedSimulatorImpl_Type);
    py_copy->obj = new ns3::DistributedSimulatorImpl(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3DistributedSimulatorImpl_methods[] = {
    {(char *) "Run", (PyCFunction) _wrap_PyNs3DistributedSimulatorImpl_Run, METH_NOARGS, NULL },
    {(char *) "Now", (PyCFunction) _wrap_PyNs3DistributedSimulatorImpl_Now, METH_NOARGS, NULL },
    {(char *) "GetMaximumSimulationTime", (PyCFunction) _wrap_PyNs3DistributedSimulatorImpl_GetMaximumSimulationTime, METH_NOARGS, NULL },
    {(char *) "IsFinished", (PyCFunction) _wrap_PyNs3DistributedSimulatorImpl_IsFinished, METH_NOARGS, NULL },
    {(char *) "GetDelayLeft", (PyCFunction) _wrap_PyNs3DistributedSimulatorImpl_GetDelayLeft, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetSystemId", (PyCFunction) _wrap_PyNs3DistributedSimulatorImpl_GetSystemId, METH_NOARGS, NULL },
    {(char *) "Stop", (PyCFunction) _wrap_PyNs3DistributedSimulatorImpl_Stop, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Remove", (PyCFunction) _wrap_PyNs3DistributedSimulatorImpl_Remove, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetContext", (PyCFunction) _wrap_PyNs3DistributedSimulatorImpl_GetContext, METH_NOARGS, NULL },
    {(char *) "SetScheduler", (PyCFunction) _wrap_PyNs3DistributedSimulatorImpl_SetScheduler, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "RunOneEvent", (PyCFunction) _wrap_PyNs3DistributedSimulatorImpl_RunOneEvent, METH_NOARGS, NULL },
    {(char *) "Cancel", (PyCFunction) _wrap_PyNs3DistributedSimulatorImpl_Cancel, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Destroy", (PyCFunction) _wrap_PyNs3DistributedSimulatorImpl_Destroy, METH_NOARGS, NULL },
    {(char *) "IsExpired", (PyCFunction) _wrap_PyNs3DistributedSimulatorImpl_IsExpired, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Next", (PyCFunction) _wrap_PyNs3DistributedSimulatorImpl_Next, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3DistributedSimulatorImpl_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3DistributedSimulatorImpl__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3DistributedSimulatorImpl__tp_clear(PyNs3DistributedSimulatorImpl *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::DistributedSimulatorImpl *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3DistributedSimulatorImpl__tp_traverse(PyNs3DistributedSimulatorImpl *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    return 0;
}


static void
_wrap_PyNs3DistributedSimulatorImpl__tp_dealloc(PyNs3DistributedSimulatorImpl *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3DistributedSimulatorImpl__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3DistributedSimulatorImpl__tp_richcompare (PyNs3DistributedSimulatorImpl *PYBINDGEN_UNUSED(self), PyNs3DistributedSimulatorImpl *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3DistributedSimulatorImpl_Type)) {
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

PyTypeObject PyNs3DistributedSimulatorImpl_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.DistributedSimulatorImpl",            /* tp_name */
    sizeof(PyNs3DistributedSimulatorImpl),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3DistributedSimulatorImpl__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3DistributedSimulatorImpl__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3DistributedSimulatorImpl__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3DistributedSimulatorImpl__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3DistributedSimulatorImpl_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3DistributedSimulatorImpl, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3DistributedSimulatorImpl__tp_init,             /* tp_init */
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


