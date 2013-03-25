#include "ns3module.h"

PyObject *
_wrap_ns3_dot11sMakeIeMeshIdChecker()
{
    PyObject *py_retval;
    ns3::Ptr< ns3::AttributeChecker const > retval;
    PyNs3AttributeChecker *py_AttributeChecker;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = ns3::dot11s::MakeIeMeshIdChecker();
    if (!(const_cast<ns3::AttributeChecker *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::AttributeChecker *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_AttributeChecker = NULL;
    } else {
        py_AttributeChecker = (PyNs3AttributeChecker *) wrapper_lookup_iter->second;
        Py_INCREF(py_AttributeChecker);
    }
    
    if (py_AttributeChecker == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::AttributeChecker *> (ns3::PeekPointer (retval)))), &PyNs3AttributeChecker_Type);
        py_AttributeChecker = PyObject_New(PyNs3AttributeChecker, wrapper_type);
        py_AttributeChecker->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::AttributeChecker *> (ns3::PeekPointer (retval))->Ref();
        py_AttributeChecker->obj = const_cast<ns3::AttributeChecker *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_AttributeChecker->obj] = (PyObject *) py_AttributeChecker;
    }
    py_retval = Py_BuildValue((char *) "N", py_AttributeChecker);
    return py_retval;
}


std::map<void*, PyObject*> PyNs3Dot11sDot11sMeshCapability_wrapper_registry;
static PyObject* _wrap_PyNs3Dot11sDot11sMeshCapability__get_MCCAEnabled(PyNs3Dot11sDot11sMeshCapability *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(self->obj->MCCAEnabled));
    return py_retval;
}
static int _wrap_PyNs3Dot11sDot11sMeshCapability__set_MCCAEnabled(PyNs3Dot11sDot11sMeshCapability *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyObject *py_boolretval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        Py_DECREF(py_retval);
        return -1;
    }
    self->obj->MCCAEnabled = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    return 0;
}
static PyObject* _wrap_PyNs3Dot11sDot11sMeshCapability__get_MCCASupported(PyNs3Dot11sDot11sMeshCapability *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(self->obj->MCCASupported));
    return py_retval;
}
static int _wrap_PyNs3Dot11sDot11sMeshCapability__set_MCCASupported(PyNs3Dot11sDot11sMeshCapability *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyObject *py_boolretval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        Py_DECREF(py_retval);
        return -1;
    }
    self->obj->MCCASupported = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    return 0;
}
static PyObject* _wrap_PyNs3Dot11sDot11sMeshCapability__get_TBTTAdjustment(PyNs3Dot11sDot11sMeshCapability *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(self->obj->TBTTAdjustment));
    return py_retval;
}
static int _wrap_PyNs3Dot11sDot11sMeshCapability__set_TBTTAdjustment(PyNs3Dot11sDot11sMeshCapability *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyObject *py_boolretval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        Py_DECREF(py_retval);
        return -1;
    }
    self->obj->TBTTAdjustment = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    return 0;
}
static PyObject* _wrap_PyNs3Dot11sDot11sMeshCapability__get_acceptPeerLinks(PyNs3Dot11sDot11sMeshCapability *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(self->obj->acceptPeerLinks));
    return py_retval;
}
static int _wrap_PyNs3Dot11sDot11sMeshCapability__set_acceptPeerLinks(PyNs3Dot11sDot11sMeshCapability *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyObject *py_boolretval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        Py_DECREF(py_retval);
        return -1;
    }
    self->obj->acceptPeerLinks = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    return 0;
}
static PyObject* _wrap_PyNs3Dot11sDot11sMeshCapability__get_beaconTimingReport(PyNs3Dot11sDot11sMeshCapability *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(self->obj->beaconTimingReport));
    return py_retval;
}
static int _wrap_PyNs3Dot11sDot11sMeshCapability__set_beaconTimingReport(PyNs3Dot11sDot11sMeshCapability *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyObject *py_boolretval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        Py_DECREF(py_retval);
        return -1;
    }
    self->obj->beaconTimingReport = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    return 0;
}
static PyObject* _wrap_PyNs3Dot11sDot11sMeshCapability__get_forwarding(PyNs3Dot11sDot11sMeshCapability *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(self->obj->forwarding));
    return py_retval;
}
static int _wrap_PyNs3Dot11sDot11sMeshCapability__set_forwarding(PyNs3Dot11sDot11sMeshCapability *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyObject *py_boolretval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        Py_DECREF(py_retval);
        return -1;
    }
    self->obj->forwarding = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    return 0;
}
static PyObject* _wrap_PyNs3Dot11sDot11sMeshCapability__get_powerSaveLevel(PyNs3Dot11sDot11sMeshCapability *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(self->obj->powerSaveLevel));
    return py_retval;
}
static int _wrap_PyNs3Dot11sDot11sMeshCapability__set_powerSaveLevel(PyNs3Dot11sDot11sMeshCapability *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyObject *py_boolretval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        Py_DECREF(py_retval);
        return -1;
    }
    self->obj->powerSaveLevel = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    return 0;
}
static PyGetSetDef PyNs3Dot11sDot11sMeshCapability__getsets[] = {
    {
        (char*) "acceptPeerLinks", /* attribute name */
        (getter) _wrap_PyNs3Dot11sDot11sMeshCapability__get_acceptPeerLinks, /* C function to get the attribute */
        (setter) _wrap_PyNs3Dot11sDot11sMeshCapability__set_acceptPeerLinks, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    {
        (char*) "MCCASupported", /* attribute name */
        (getter) _wrap_PyNs3Dot11sDot11sMeshCapability__get_MCCASupported, /* C function to get the attribute */
        (setter) _wrap_PyNs3Dot11sDot11sMeshCapability__set_MCCASupported, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    {
        (char*) "TBTTAdjustment", /* attribute name */
        (getter) _wrap_PyNs3Dot11sDot11sMeshCapability__get_TBTTAdjustment, /* C function to get the attribute */
        (setter) _wrap_PyNs3Dot11sDot11sMeshCapability__set_TBTTAdjustment, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    {
        (char*) "powerSaveLevel", /* attribute name */
        (getter) _wrap_PyNs3Dot11sDot11sMeshCapability__get_powerSaveLevel, /* C function to get the attribute */
        (setter) _wrap_PyNs3Dot11sDot11sMeshCapability__set_powerSaveLevel, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    {
        (char*) "forwarding", /* attribute name */
        (getter) _wrap_PyNs3Dot11sDot11sMeshCapability__get_forwarding, /* C function to get the attribute */
        (setter) _wrap_PyNs3Dot11sDot11sMeshCapability__set_forwarding, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    {
        (char*) "MCCAEnabled", /* attribute name */
        (getter) _wrap_PyNs3Dot11sDot11sMeshCapability__get_MCCAEnabled, /* C function to get the attribute */
        (setter) _wrap_PyNs3Dot11sDot11sMeshCapability__set_MCCAEnabled, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    {
        (char*) "beaconTimingReport", /* attribute name */
        (getter) _wrap_PyNs3Dot11sDot11sMeshCapability__get_beaconTimingReport, /* C function to get the attribute */
        (setter) _wrap_PyNs3Dot11sDot11sMeshCapability__set_beaconTimingReport, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    { NULL, NULL, NULL, NULL, NULL }
};


static int
_wrap_PyNs3Dot11sDot11sMeshCapability__tp_init__0(PyNs3Dot11sDot11sMeshCapability *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Dot11sDot11sMeshCapability *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Dot11sDot11sMeshCapability_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::dot11s::Dot11sMeshCapability(*((PyNs3Dot11sDot11sMeshCapability *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3Dot11sDot11sMeshCapability__tp_init__1(PyNs3Dot11sDot11sMeshCapability *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::dot11s::Dot11sMeshCapability();
    return 0;
}

int _wrap_PyNs3Dot11sDot11sMeshCapability__tp_init(PyNs3Dot11sDot11sMeshCapability *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Dot11sDot11sMeshCapability__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Dot11sDot11sMeshCapability__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Dot11sDot11sMeshCapability_GetSerializedSize(PyNs3Dot11sDot11sMeshCapability *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetSerializedSize();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sDot11sMeshCapability_GetUint16(PyNs3Dot11sDot11sMeshCapability *self)
{
    PyObject *py_retval;
    uint16_t retval;
    
    retval = self->obj->GetUint16();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sDot11sMeshCapability_Is(PyNs3Dot11sDot11sMeshCapability *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    int cap;
    int n;
    const char *keywords[] = {"cap", "n", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "ii", (char **) keywords, &cap, &n)) {
        return NULL;
    }
    if (cap > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    if (n > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    retval = self->obj->Is(cap, n);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sDot11sMeshCapability_Serialize(PyNs3Dot11sDot11sMeshCapability *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3BufferIterator *i;
    const char *keywords[] = {"i", NULL};
    PyNs3BufferIterator *py_Iterator;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3BufferIterator_Type, &i)) {
        return NULL;
    }
    ns3::Buffer::Iterator retval = self->obj->Serialize(*((PyNs3BufferIterator *) i)->obj);
    py_Iterator = PyObject_New(PyNs3BufferIterator, &PyNs3BufferIterator_Type);
    py_Iterator->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Iterator->obj = new ns3::Buffer::Iterator(retval);
    PyNs3BufferIterator_wrapper_registry[(void *) py_Iterator->obj] = (PyObject *) py_Iterator;
    py_retval = Py_BuildValue((char *) "N", py_Iterator);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sDot11sMeshCapability_Deserialize(PyNs3Dot11sDot11sMeshCapability *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3BufferIterator *i;
    const char *keywords[] = {"i", NULL};
    PyNs3BufferIterator *py_Iterator;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3BufferIterator_Type, &i)) {
        return NULL;
    }
    ns3::Buffer::Iterator retval = self->obj->Deserialize(*((PyNs3BufferIterator *) i)->obj);
    py_Iterator = PyObject_New(PyNs3BufferIterator, &PyNs3BufferIterator_Type);
    py_Iterator->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Iterator->obj = new ns3::Buffer::Iterator(retval);
    PyNs3BufferIterator_wrapper_registry[(void *) py_Iterator->obj] = (PyObject *) py_Iterator;
    py_retval = Py_BuildValue((char *) "N", py_Iterator);
    return py_retval;
}


static PyObject*
_wrap_PyNs3Dot11sDot11sMeshCapability__copy__(PyNs3Dot11sDot11sMeshCapability *self)
{

    PyNs3Dot11sDot11sMeshCapability *py_copy;
    py_copy = PyObject_New(PyNs3Dot11sDot11sMeshCapability, &PyNs3Dot11sDot11sMeshCapability_Type);
    py_copy->obj = new ns3::dot11s::Dot11sMeshCapability(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Dot11sDot11sMeshCapability_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Dot11sDot11sMeshCapability_methods[] = {
    {(char *) "GetSerializedSize", (PyCFunction) _wrap_PyNs3Dot11sDot11sMeshCapability_GetSerializedSize, METH_NOARGS, NULL },
    {(char *) "GetUint16", (PyCFunction) _wrap_PyNs3Dot11sDot11sMeshCapability_GetUint16, METH_NOARGS, NULL },
    {(char *) "Is", (PyCFunction) _wrap_PyNs3Dot11sDot11sMeshCapability_Is, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Serialize", (PyCFunction) _wrap_PyNs3Dot11sDot11sMeshCapability_Serialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Deserialize", (PyCFunction) _wrap_PyNs3Dot11sDot11sMeshCapability_Deserialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Dot11sDot11sMeshCapability__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Dot11sDot11sMeshCapability__tp_dealloc(PyNs3Dot11sDot11sMeshCapability *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Dot11sDot11sMeshCapability_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Dot11sDot11sMeshCapability_wrapper_registry.end()) {
        PyNs3Dot11sDot11sMeshCapability_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::dot11s::Dot11sMeshCapability *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Dot11sDot11sMeshCapability__tp_richcompare (PyNs3Dot11sDot11sMeshCapability *PYBINDGEN_UNUSED(self), PyNs3Dot11sDot11sMeshCapability *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Dot11sDot11sMeshCapability_Type)) {
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
        if (*self->obj == *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
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

PyTypeObject PyNs3Dot11sDot11sMeshCapability_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.dot11s.Dot11sMeshCapability",            /* tp_name */
    sizeof(PyNs3Dot11sDot11sMeshCapability),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Dot11sDot11sMeshCapability__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3Dot11sDot11sMeshCapability__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Dot11sDot11sMeshCapability_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    PyNs3Dot11sDot11sMeshCapability__getsets,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Dot11sDot11sMeshCapability__tp_init,             /* tp_init */
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
_wrap_PyNs3Dot11sHwmpProtocol__tp_init(PyNs3Dot11sHwmpProtocol *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        return -1;
    }
    self->obj = new ns3::dot11s::HwmpProtocol();
    self->obj->Ref ();
    ns3::CompleteConstruct(self->obj);
    return 0;
}


PyObject *
_wrap_PyNs3Dot11sHwmpProtocol_PeerLinkStatus(PyNs3Dot11sHwmpProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Mac48Address *meshPontAddress;
    PyNs3Mac48Address *peerAddress;
    unsigned int interface;
    bool status;
    PyObject *py_status;
    const char *keywords[] = {"meshPontAddress", "peerAddress", "interface", "status", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!IO", (char **) keywords, &PyNs3Mac48Address_Type, &meshPontAddress, &PyNs3Mac48Address_Type, &peerAddress, &interface, &py_status)) {
        return NULL;
    }
    status = (bool) PyObject_IsTrue(py_status);
    self->obj->PeerLinkStatus(*((PyNs3Mac48Address *) meshPontAddress)->obj, *((PyNs3Mac48Address *) peerAddress)->obj, interface, status);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sHwmpProtocol_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::dot11s::HwmpProtocol::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sHwmpProtocol_Install(PyNs3Dot11sHwmpProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3MeshPointDevice *arg0;
    ns3::MeshPointDevice *arg0_ptr;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3MeshPointDevice_Type, &arg0)) {
        return NULL;
    }
    arg0_ptr = (arg0 ? arg0->obj : NULL);
    retval = self->obj->Install(ns3::Ptr< ns3::MeshPointDevice  > (arg0_ptr));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sHwmpProtocol_DoDispose(PyNs3Dot11sHwmpProtocol *self)
{
    PyObject *py_retval;
    
    self->obj->DoDispose();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sHwmpProtocol_Report(PyNs3Dot11sHwmpProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyStdOstream *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyStdOstream_Type, &arg0)) {
        return NULL;
    }
    self->obj->Report(*((PyStdOstream *) arg0)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sHwmpProtocol_RequestRoute(PyNs3Dot11sHwmpProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    unsigned int sourceIface;
    PyNs3Mac48Address *source;
    PyNs3Mac48Address *destination;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    int protocolType;
    PyObject *routeReply;
    ns3::Ptr<PythonCallbackImpl15> routeReply_cb_impl;
    const char *keywords[] = {"sourceIface", "source", "destination", "packet", "protocolType", "routeReply", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "IO!O!O!iO", (char **) keywords, &sourceIface, &PyNs3Mac48Address_Type, &source, &PyNs3Mac48Address_Type, &destination, &PyNs3Packet_Type, &packet, &protocolType, &routeReply)) {
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    if (protocolType > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    if (!PyCallable_Check(routeReply)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'routeReply' must be callbale");
        return NULL;
    }
    routeReply_cb_impl = ns3::Create<PythonCallbackImpl15> (routeReply);
    retval = self->obj->RequestRoute(sourceIface, *((PyNs3Mac48Address *) source)->obj, *((PyNs3Mac48Address *) destination)->obj, ns3::Ptr< ns3::Packet  > (packet_ptr), protocolType, ns3::Callback<void, bool, ns3::Ptr<ns3::Packet>, ns3::Mac48Address, ns3::Mac48Address, unsigned short, unsigned int, ns3::empty, ns3::empty, ns3::empty> (routeReply_cb_impl));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sHwmpProtocol_ResetStats(PyNs3Dot11sHwmpProtocol *self)
{
    PyObject *py_retval;
    
    self->obj->ResetStats();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sHwmpProtocol_UnsetRoot(PyNs3Dot11sHwmpProtocol *self)
{
    PyObject *py_retval;
    
    self->obj->UnsetRoot();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sHwmpProtocol_SetRoot(PyNs3Dot11sHwmpProtocol *self)
{
    PyObject *py_retval;
    
    self->obj->SetRoot();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

static PyMethodDef PyNs3Dot11sHwmpProtocol_methods[] = {
    {(char *) "PeerLinkStatus", (PyCFunction) _wrap_PyNs3Dot11sHwmpProtocol_PeerLinkStatus, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3Dot11sHwmpProtocol_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Install", (PyCFunction) _wrap_PyNs3Dot11sHwmpProtocol_Install, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) _wrap_PyNs3Dot11sHwmpProtocol_DoDispose, METH_NOARGS, NULL },
    {(char *) "Report", (PyCFunction) _wrap_PyNs3Dot11sHwmpProtocol_Report, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "RequestRoute", (PyCFunction) _wrap_PyNs3Dot11sHwmpProtocol_RequestRoute, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "ResetStats", (PyCFunction) _wrap_PyNs3Dot11sHwmpProtocol_ResetStats, METH_NOARGS, NULL },
    {(char *) "UnsetRoot", (PyCFunction) _wrap_PyNs3Dot11sHwmpProtocol_UnsetRoot, METH_NOARGS, NULL },
    {(char *) "SetRoot", (PyCFunction) _wrap_PyNs3Dot11sHwmpProtocol_SetRoot, METH_NOARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3Dot11sHwmpProtocol__tp_clear(PyNs3Dot11sHwmpProtocol *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::dot11s::HwmpProtocol *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3Dot11sHwmpProtocol__tp_traverse(PyNs3Dot11sHwmpProtocol *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    return 0;
}


static void
_wrap_PyNs3Dot11sHwmpProtocol__tp_dealloc(PyNs3Dot11sHwmpProtocol *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3Dot11sHwmpProtocol__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Dot11sHwmpProtocol__tp_richcompare (PyNs3Dot11sHwmpProtocol *PYBINDGEN_UNUSED(self), PyNs3Dot11sHwmpProtocol *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Dot11sHwmpProtocol_Type)) {
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

PyTypeObject PyNs3Dot11sHwmpProtocol_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.dot11s.HwmpProtocol",            /* tp_name */
    sizeof(PyNs3Dot11sHwmpProtocol),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Dot11sHwmpProtocol__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3Dot11sHwmpProtocol__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3Dot11sHwmpProtocol__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3Dot11sHwmpProtocol__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Dot11sHwmpProtocol_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3Dot11sHwmpProtocol, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Dot11sHwmpProtocol__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3Dot11sHwmpProtocolFailedDestination_wrapper_registry;
static PyObject* _wrap_PyNs3Dot11sHwmpProtocolFailedDestination__get_destination(PyNs3Dot11sHwmpProtocolFailedDestination *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyNs3Mac48Address *py_Mac48Address;
    
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(self->obj->destination);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_retval = Py_BuildValue((char *) "N", py_Mac48Address);
    return py_retval;
}
static int _wrap_PyNs3Dot11sHwmpProtocolFailedDestination__set_destination(PyNs3Dot11sHwmpProtocolFailedDestination *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyNs3Mac48Address *tmp_Mac48Address;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Mac48Address_Type, &tmp_Mac48Address)) {
        Py_DECREF(py_retval);
        return -1;
    }
    self->obj->destination = *tmp_Mac48Address->obj;
    Py_DECREF(py_retval);
    return 0;
}
static PyObject* _wrap_PyNs3Dot11sHwmpProtocolFailedDestination__get_seqnum(PyNs3Dot11sHwmpProtocolFailedDestination *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(self->obj->seqnum));
    return py_retval;
}
static int _wrap_PyNs3Dot11sHwmpProtocolFailedDestination__set_seqnum(PyNs3Dot11sHwmpProtocolFailedDestination *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &self->obj->seqnum)) {
        Py_DECREF(py_retval);
        return -1;
    }
    Py_DECREF(py_retval);
    return 0;
}
static PyGetSetDef PyNs3Dot11sHwmpProtocolFailedDestination__getsets[] = {
    {
        (char*) "seqnum", /* attribute name */
        (getter) _wrap_PyNs3Dot11sHwmpProtocolFailedDestination__get_seqnum, /* C function to get the attribute */
        (setter) _wrap_PyNs3Dot11sHwmpProtocolFailedDestination__set_seqnum, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    {
        (char*) "destination", /* attribute name */
        (getter) _wrap_PyNs3Dot11sHwmpProtocolFailedDestination__get_destination, /* C function to get the attribute */
        (setter) _wrap_PyNs3Dot11sHwmpProtocolFailedDestination__set_destination, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    { NULL, NULL, NULL, NULL, NULL }
};


static int
_wrap_PyNs3Dot11sHwmpProtocolFailedDestination__tp_init__0(PyNs3Dot11sHwmpProtocolFailedDestination *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::dot11s::HwmpProtocol::FailedDestination();
    return 0;
}

static int
_wrap_PyNs3Dot11sHwmpProtocolFailedDestination__tp_init__1(PyNs3Dot11sHwmpProtocolFailedDestination *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Dot11sHwmpProtocolFailedDestination *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Dot11sHwmpProtocolFailedDestination_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::dot11s::HwmpProtocol::FailedDestination(*((PyNs3Dot11sHwmpProtocolFailedDestination *) arg0)->obj);
    return 0;
}

int _wrap_PyNs3Dot11sHwmpProtocolFailedDestination__tp_init(PyNs3Dot11sHwmpProtocolFailedDestination *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Dot11sHwmpProtocolFailedDestination__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Dot11sHwmpProtocolFailedDestination__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Dot11sHwmpProtocolFailedDestination__copy__(PyNs3Dot11sHwmpProtocolFailedDestination *self)
{

    PyNs3Dot11sHwmpProtocolFailedDestination *py_copy;
    py_copy = PyObject_New(PyNs3Dot11sHwmpProtocolFailedDestination, &PyNs3Dot11sHwmpProtocolFailedDestination_Type);
    py_copy->obj = new ns3::dot11s::HwmpProtocol::FailedDestination(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Dot11sHwmpProtocolFailedDestination_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Dot11sHwmpProtocolFailedDestination_methods[] = {
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Dot11sHwmpProtocolFailedDestination__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Dot11sHwmpProtocolFailedDestination__tp_dealloc(PyNs3Dot11sHwmpProtocolFailedDestination *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Dot11sHwmpProtocolFailedDestination_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Dot11sHwmpProtocolFailedDestination_wrapper_registry.end()) {
        PyNs3Dot11sHwmpProtocolFailedDestination_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::dot11s::HwmpProtocol::FailedDestination *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Dot11sHwmpProtocolFailedDestination__tp_richcompare (PyNs3Dot11sHwmpProtocolFailedDestination *PYBINDGEN_UNUSED(self), PyNs3Dot11sHwmpProtocolFailedDestination *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Dot11sHwmpProtocolFailedDestination_Type)) {
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

PyTypeObject PyNs3Dot11sHwmpProtocolFailedDestination_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.dot11s.HwmpProtocol.FailedDestination",            /* tp_name */
    sizeof(PyNs3Dot11sHwmpProtocolFailedDestination),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Dot11sHwmpProtocolFailedDestination__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3Dot11sHwmpProtocolFailedDestination__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Dot11sHwmpProtocolFailedDestination_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    PyNs3Dot11sHwmpProtocolFailedDestination__getsets,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Dot11sHwmpProtocolFailedDestination__tp_init,             /* tp_init */
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
_wrap_PyNs3Dot11sIeBeaconTiming__tp_init__0(PyNs3Dot11sIeBeaconTiming *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Dot11sIeBeaconTiming *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Dot11sIeBeaconTiming_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::dot11s::IeBeaconTiming(*((PyNs3Dot11sIeBeaconTiming *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3Dot11sIeBeaconTiming__tp_init__1(PyNs3Dot11sIeBeaconTiming *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::dot11s::IeBeaconTiming();
    return 0;
}

int _wrap_PyNs3Dot11sIeBeaconTiming__tp_init(PyNs3Dot11sIeBeaconTiming *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Dot11sIeBeaconTiming__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Dot11sIeBeaconTiming__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Dot11sIeBeaconTiming_DelNeighboursTimingElementUnit(PyNs3Dot11sIeBeaconTiming *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int aid;
    PyObject *last_beacon;
    ns3::Time last_beacon2;
    PyObject *beacon_interval;
    ns3::Time beacon_interval2;
    const char *keywords[] = {"aid", "last_beacon", "beacon_interval", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "iOO", (char **) keywords, &aid, &last_beacon, &beacon_interval)) {
        return NULL;
    }
    if (aid > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    if (PyObject_IsInstance(last_beacon, (PyObject*) &PyNs3Time_Type)) {
        last_beacon2 = *((PyNs3Time *) last_beacon)->obj;
    } else if (PyObject_IsInstance(last_beacon, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        last_beacon2 = *((PyNs3TracedValue__Ns3Time *) last_beacon)->obj;
    } else if (PyObject_IsInstance(last_beacon, (PyObject*) &PyNs3Scalar_Type)) {
        last_beacon2 = *((PyNs3Scalar *) last_beacon)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", last_beacon->ob_type->tp_name);
        return NULL;
    }
    if (PyObject_IsInstance(beacon_interval, (PyObject*) &PyNs3Time_Type)) {
        beacon_interval2 = *((PyNs3Time *) beacon_interval)->obj;
    } else if (PyObject_IsInstance(beacon_interval, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        beacon_interval2 = *((PyNs3TracedValue__Ns3Time *) beacon_interval)->obj;
    } else if (PyObject_IsInstance(beacon_interval, (PyObject*) &PyNs3Scalar_Type)) {
        beacon_interval2 = *((PyNs3Scalar *) beacon_interval)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", beacon_interval->ob_type->tp_name);
        return NULL;
    }
    self->obj->DelNeighboursTimingElementUnit(aid, last_beacon2, beacon_interval2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeBeaconTiming_ClearTimingElement(PyNs3Dot11sIeBeaconTiming *self)
{
    PyObject *py_retval;
    
    self->obj->ClearTimingElement();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeBeaconTiming_DeserializeInformationField(PyNs3Dot11sIeBeaconTiming *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint8_t retval;
    PyNs3BufferIterator *i;
    int length;
    const char *keywords[] = {"i", "length", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!i", (char **) keywords, &PyNs3BufferIterator_Type, &i, &length)) {
        return NULL;
    }
    if (length > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    retval = self->obj->DeserializeInformationField(*((PyNs3BufferIterator *) i)->obj, length);
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeBeaconTiming_GetInformationFieldSize(PyNs3Dot11sIeBeaconTiming *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetInformationFieldSize();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeBeaconTiming_SerializeInformationField(PyNs3Dot11sIeBeaconTiming *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3BufferIterator *i;
    const char *keywords[] = {"i", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3BufferIterator_Type, &i)) {
        return NULL;
    }
    self->obj->SerializeInformationField(*((PyNs3BufferIterator *) i)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeBeaconTiming_Print(PyNs3Dot11sIeBeaconTiming *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyStdOstream *os;
    const char *keywords[] = {"os", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyStdOstream_Type, &os)) {
        return NULL;
    }
    self->obj->Print(*((PyStdOstream *) os)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeBeaconTiming_AddNeighboursTimingElementUnit(PyNs3Dot11sIeBeaconTiming *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int aid;
    PyObject *last_beacon;
    ns3::Time last_beacon2;
    PyObject *beacon_interval;
    ns3::Time beacon_interval2;
    const char *keywords[] = {"aid", "last_beacon", "beacon_interval", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "iOO", (char **) keywords, &aid, &last_beacon, &beacon_interval)) {
        return NULL;
    }
    if (aid > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    if (PyObject_IsInstance(last_beacon, (PyObject*) &PyNs3Time_Type)) {
        last_beacon2 = *((PyNs3Time *) last_beacon)->obj;
    } else if (PyObject_IsInstance(last_beacon, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        last_beacon2 = *((PyNs3TracedValue__Ns3Time *) last_beacon)->obj;
    } else if (PyObject_IsInstance(last_beacon, (PyObject*) &PyNs3Scalar_Type)) {
        last_beacon2 = *((PyNs3Scalar *) last_beacon)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", last_beacon->ob_type->tp_name);
        return NULL;
    }
    if (PyObject_IsInstance(beacon_interval, (PyObject*) &PyNs3Time_Type)) {
        beacon_interval2 = *((PyNs3Time *) beacon_interval)->obj;
    } else if (PyObject_IsInstance(beacon_interval, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        beacon_interval2 = *((PyNs3TracedValue__Ns3Time *) beacon_interval)->obj;
    } else if (PyObject_IsInstance(beacon_interval, (PyObject*) &PyNs3Scalar_Type)) {
        beacon_interval2 = *((PyNs3Scalar *) beacon_interval)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", beacon_interval->ob_type->tp_name);
        return NULL;
    }
    self->obj->AddNeighboursTimingElementUnit(aid, last_beacon2, beacon_interval2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeBeaconTiming_ElementId(PyNs3Dot11sIeBeaconTiming *self)
{
    PyObject *py_retval;
    ns3::WifiInformationElementId retval;
    
    retval = self->obj->ElementId();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


static PyObject*
_wrap_PyNs3Dot11sIeBeaconTiming__copy__(PyNs3Dot11sIeBeaconTiming *self)
{

    PyNs3Dot11sIeBeaconTiming *py_copy;
    py_copy = PyObject_New(PyNs3Dot11sIeBeaconTiming, &PyNs3Dot11sIeBeaconTiming_Type);
    py_copy->obj = new ns3::dot11s::IeBeaconTiming(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Dot11sIeBeaconTiming_methods[] = {
    {(char *) "DelNeighboursTimingElementUnit", (PyCFunction) _wrap_PyNs3Dot11sIeBeaconTiming_DelNeighboursTimingElementUnit, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "ClearTimingElement", (PyCFunction) _wrap_PyNs3Dot11sIeBeaconTiming_ClearTimingElement, METH_NOARGS, NULL },
    {(char *) "DeserializeInformationField", (PyCFunction) _wrap_PyNs3Dot11sIeBeaconTiming_DeserializeInformationField, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetInformationFieldSize", (PyCFunction) _wrap_PyNs3Dot11sIeBeaconTiming_GetInformationFieldSize, METH_NOARGS, NULL },
    {(char *) "SerializeInformationField", (PyCFunction) _wrap_PyNs3Dot11sIeBeaconTiming_SerializeInformationField, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Print", (PyCFunction) _wrap_PyNs3Dot11sIeBeaconTiming_Print, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "AddNeighboursTimingElementUnit", (PyCFunction) _wrap_PyNs3Dot11sIeBeaconTiming_AddNeighboursTimingElementUnit, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "ElementId", (PyCFunction) _wrap_PyNs3Dot11sIeBeaconTiming_ElementId, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Dot11sIeBeaconTiming__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Dot11sIeBeaconTiming__tp_dealloc(PyNs3Dot11sIeBeaconTiming *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::dot11s::IeBeaconTiming *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}



static PyObject *
_wrap_PyNs3Dot11sIeBeaconTiming__tp_str(PyNs3Dot11sIeBeaconTiming *self)
{
    std::ostringstream oss;
    oss << *self->obj;
    return PyString_FromString(oss.str ().c_str ());
}


static PyObject*
_wrap_PyNs3Dot11sIeBeaconTiming__tp_richcompare (PyNs3Dot11sIeBeaconTiming *PYBINDGEN_UNUSED(self), PyNs3Dot11sIeBeaconTiming *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Dot11sIeBeaconTiming_Type)) {
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

PyTypeObject PyNs3Dot11sIeBeaconTiming_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.dot11s.IeBeaconTiming",            /* tp_name */
    sizeof(PyNs3Dot11sIeBeaconTiming),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Dot11sIeBeaconTiming__tp_dealloc,        /* tp_dealloc */
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
    (reprfunc)_wrap_PyNs3Dot11sIeBeaconTiming__tp_str,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3Dot11sIeBeaconTiming__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Dot11sIeBeaconTiming_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Dot11sIeBeaconTiming__tp_init,             /* tp_init */
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
_wrap_PyNs3Dot11sIeBeaconTimingUnit__tp_init__0(PyNs3Dot11sIeBeaconTimingUnit *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Dot11sIeBeaconTimingUnit *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Dot11sIeBeaconTimingUnit_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::dot11s::IeBeaconTimingUnit(*((PyNs3Dot11sIeBeaconTimingUnit *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3Dot11sIeBeaconTimingUnit__tp_init__1(PyNs3Dot11sIeBeaconTimingUnit *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::dot11s::IeBeaconTimingUnit();
    return 0;
}

int _wrap_PyNs3Dot11sIeBeaconTimingUnit__tp_init(PyNs3Dot11sIeBeaconTimingUnit *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Dot11sIeBeaconTimingUnit__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Dot11sIeBeaconTimingUnit__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Dot11sIeBeaconTimingUnit_GetAid(PyNs3Dot11sIeBeaconTimingUnit *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetAid();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeBeaconTimingUnit_GetLastBeacon(PyNs3Dot11sIeBeaconTimingUnit *self)
{
    PyObject *py_retval;
    uint16_t retval;
    
    retval = self->obj->GetLastBeacon();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeBeaconTimingUnit_SetBeaconInterval(PyNs3Dot11sIeBeaconTimingUnit *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int beaconInterval;
    const char *keywords[] = {"beaconInterval", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &beaconInterval)) {
        return NULL;
    }
    if (beaconInterval > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetBeaconInterval(beaconInterval);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeBeaconTimingUnit_GetBeaconInterval(PyNs3Dot11sIeBeaconTimingUnit *self)
{
    PyObject *py_retval;
    uint16_t retval;
    
    retval = self->obj->GetBeaconInterval();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeBeaconTimingUnit_SetLastBeacon(PyNs3Dot11sIeBeaconTimingUnit *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int lastBeacon;
    const char *keywords[] = {"lastBeacon", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &lastBeacon)) {
        return NULL;
    }
    if (lastBeacon > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetLastBeacon(lastBeacon);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeBeaconTimingUnit_SetAid(PyNs3Dot11sIeBeaconTimingUnit *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int aid;
    const char *keywords[] = {"aid", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &aid)) {
        return NULL;
    }
    if (aid > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetAid(aid);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3Dot11sIeBeaconTimingUnit__copy__(PyNs3Dot11sIeBeaconTimingUnit *self)
{

    PyNs3Dot11sIeBeaconTimingUnit *py_copy;
    py_copy = PyObject_New(PyNs3Dot11sIeBeaconTimingUnit, &PyNs3Dot11sIeBeaconTimingUnit_Type);
    py_copy->obj = new ns3::dot11s::IeBeaconTimingUnit(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Dot11sIeBeaconTimingUnit_methods[] = {
    {(char *) "GetAid", (PyCFunction) _wrap_PyNs3Dot11sIeBeaconTimingUnit_GetAid, METH_NOARGS, NULL },
    {(char *) "GetLastBeacon", (PyCFunction) _wrap_PyNs3Dot11sIeBeaconTimingUnit_GetLastBeacon, METH_NOARGS, NULL },
    {(char *) "SetBeaconInterval", (PyCFunction) _wrap_PyNs3Dot11sIeBeaconTimingUnit_SetBeaconInterval, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetBeaconInterval", (PyCFunction) _wrap_PyNs3Dot11sIeBeaconTimingUnit_GetBeaconInterval, METH_NOARGS, NULL },
    {(char *) "SetLastBeacon", (PyCFunction) _wrap_PyNs3Dot11sIeBeaconTimingUnit_SetLastBeacon, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetAid", (PyCFunction) _wrap_PyNs3Dot11sIeBeaconTimingUnit_SetAid, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Dot11sIeBeaconTimingUnit__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Dot11sIeBeaconTimingUnit__tp_dealloc(PyNs3Dot11sIeBeaconTimingUnit *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::dot11s::IeBeaconTimingUnit *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Dot11sIeBeaconTimingUnit__tp_richcompare (PyNs3Dot11sIeBeaconTimingUnit *PYBINDGEN_UNUSED(self), PyNs3Dot11sIeBeaconTimingUnit *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Dot11sIeBeaconTimingUnit_Type)) {
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
        if (*self->obj == *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
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

PyTypeObject PyNs3Dot11sIeBeaconTimingUnit_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.dot11s.IeBeaconTimingUnit",            /* tp_name */
    sizeof(PyNs3Dot11sIeBeaconTimingUnit),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Dot11sIeBeaconTimingUnit__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3Dot11sIeBeaconTimingUnit__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Dot11sIeBeaconTimingUnit_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Dot11sIeBeaconTimingUnit__tp_init,             /* tp_init */
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
_wrap_PyNs3Dot11sIeConfiguration__tp_init__0(PyNs3Dot11sIeConfiguration *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Dot11sIeConfiguration *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Dot11sIeConfiguration_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::dot11s::IeConfiguration(*((PyNs3Dot11sIeConfiguration *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3Dot11sIeConfiguration__tp_init__1(PyNs3Dot11sIeConfiguration *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::dot11s::IeConfiguration();
    return 0;
}

int _wrap_PyNs3Dot11sIeConfiguration__tp_init(PyNs3Dot11sIeConfiguration *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Dot11sIeConfiguration__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Dot11sIeConfiguration__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Dot11sIeConfiguration_SetMetric(PyNs3Dot11sIeConfiguration *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::dot11s::dot11sPathSelectionMetric metricId;
    const char *keywords[] = {"metricId", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &metricId)) {
        return NULL;
    }
    self->obj->SetMetric(metricId);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeConfiguration_SetNeighborCount(PyNs3Dot11sIeConfiguration *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int neighbors;
    const char *keywords[] = {"neighbors", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &neighbors)) {
        return NULL;
    }
    if (neighbors > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetNeighborCount(neighbors);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeConfiguration_DeserializeInformationField(PyNs3Dot11sIeConfiguration *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint8_t retval;
    PyNs3BufferIterator *i;
    int length;
    const char *keywords[] = {"i", "length", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!i", (char **) keywords, &PyNs3BufferIterator_Type, &i, &length)) {
        return NULL;
    }
    if (length > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    retval = self->obj->DeserializeInformationField(*((PyNs3BufferIterator *) i)->obj, length);
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeConfiguration_SetRouting(PyNs3Dot11sIeConfiguration *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::dot11s::dot11sPathSelectionProtocol routingId;
    const char *keywords[] = {"routingId", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &routingId)) {
        return NULL;
    }
    self->obj->SetRouting(routingId);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeConfiguration_GetInformationFieldSize(PyNs3Dot11sIeConfiguration *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetInformationFieldSize();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeConfiguration_MeshCapability(PyNs3Dot11sIeConfiguration *self)
{
    PyObject *py_retval;
    PyNs3Dot11sDot11sMeshCapability *py_Dot11sMeshCapability;
    
    ns3::dot11s::Dot11sMeshCapability const & retval = self->obj->MeshCapability();
    py_Dot11sMeshCapability = PyObject_New(PyNs3Dot11sDot11sMeshCapability, &PyNs3Dot11sDot11sMeshCapability_Type);
    py_Dot11sMeshCapability->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Dot11sMeshCapability->obj = new ns3::dot11s::Dot11sMeshCapability(retval);
    PyNs3Dot11sDot11sMeshCapability_wrapper_registry[(void *) py_Dot11sMeshCapability->obj] = (PyObject *) py_Dot11sMeshCapability;
    py_retval = Py_BuildValue((char *) "N", py_Dot11sMeshCapability);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeConfiguration_ElementId(PyNs3Dot11sIeConfiguration *self)
{
    PyObject *py_retval;
    ns3::WifiInformationElementId retval;
    
    retval = self->obj->ElementId();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeConfiguration_IsAirtime(PyNs3Dot11sIeConfiguration *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsAirtime();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeConfiguration_GetNeighborCount(PyNs3Dot11sIeConfiguration *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetNeighborCount();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeConfiguration_Print(PyNs3Dot11sIeConfiguration *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyStdOstream *os;
    const char *keywords[] = {"os", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyStdOstream_Type, &os)) {
        return NULL;
    }
    self->obj->Print(*((PyStdOstream *) os)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeConfiguration_IsHWMP(PyNs3Dot11sIeConfiguration *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsHWMP();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeConfiguration_SerializeInformationField(PyNs3Dot11sIeConfiguration *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3BufferIterator *i;
    const char *keywords[] = {"i", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3BufferIterator_Type, &i)) {
        return NULL;
    }
    self->obj->SerializeInformationField(*((PyNs3BufferIterator *) i)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3Dot11sIeConfiguration__copy__(PyNs3Dot11sIeConfiguration *self)
{

    PyNs3Dot11sIeConfiguration *py_copy;
    py_copy = PyObject_New(PyNs3Dot11sIeConfiguration, &PyNs3Dot11sIeConfiguration_Type);
    py_copy->obj = new ns3::dot11s::IeConfiguration(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Dot11sIeConfiguration_methods[] = {
    {(char *) "SetMetric", (PyCFunction) _wrap_PyNs3Dot11sIeConfiguration_SetMetric, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetNeighborCount", (PyCFunction) _wrap_PyNs3Dot11sIeConfiguration_SetNeighborCount, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DeserializeInformationField", (PyCFunction) _wrap_PyNs3Dot11sIeConfiguration_DeserializeInformationField, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetRouting", (PyCFunction) _wrap_PyNs3Dot11sIeConfiguration_SetRouting, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetInformationFieldSize", (PyCFunction) _wrap_PyNs3Dot11sIeConfiguration_GetInformationFieldSize, METH_NOARGS, NULL },
    {(char *) "MeshCapability", (PyCFunction) _wrap_PyNs3Dot11sIeConfiguration_MeshCapability, METH_NOARGS, NULL },
    {(char *) "ElementId", (PyCFunction) _wrap_PyNs3Dot11sIeConfiguration_ElementId, METH_NOARGS, NULL },
    {(char *) "IsAirtime", (PyCFunction) _wrap_PyNs3Dot11sIeConfiguration_IsAirtime, METH_NOARGS, NULL },
    {(char *) "GetNeighborCount", (PyCFunction) _wrap_PyNs3Dot11sIeConfiguration_GetNeighborCount, METH_NOARGS, NULL },
    {(char *) "Print", (PyCFunction) _wrap_PyNs3Dot11sIeConfiguration_Print, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsHWMP", (PyCFunction) _wrap_PyNs3Dot11sIeConfiguration_IsHWMP, METH_NOARGS, NULL },
    {(char *) "SerializeInformationField", (PyCFunction) _wrap_PyNs3Dot11sIeConfiguration_SerializeInformationField, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Dot11sIeConfiguration__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Dot11sIeConfiguration__tp_dealloc(PyNs3Dot11sIeConfiguration *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::dot11s::IeConfiguration *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}



static PyObject *
_wrap_PyNs3Dot11sIeConfiguration__tp_str(PyNs3Dot11sIeConfiguration *self)
{
    std::ostringstream oss;
    oss << *self->obj;
    return PyString_FromString(oss.str ().c_str ());
}


static PyObject*
_wrap_PyNs3Dot11sIeConfiguration__tp_richcompare (PyNs3Dot11sIeConfiguration *PYBINDGEN_UNUSED(self), PyNs3Dot11sIeConfiguration *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Dot11sIeConfiguration_Type)) {
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
        if (*self->obj == *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
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

PyTypeObject PyNs3Dot11sIeConfiguration_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.dot11s.IeConfiguration",            /* tp_name */
    sizeof(PyNs3Dot11sIeConfiguration),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Dot11sIeConfiguration__tp_dealloc,        /* tp_dealloc */
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
    (reprfunc)_wrap_PyNs3Dot11sIeConfiguration__tp_str,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3Dot11sIeConfiguration__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Dot11sIeConfiguration_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Dot11sIeConfiguration__tp_init,             /* tp_init */
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
_wrap_PyNs3Dot11sIeMeshId__tp_init__0(PyNs3Dot11sIeMeshId *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Dot11sIeMeshId *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Dot11sIeMeshId_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::dot11s::IeMeshId(*((PyNs3Dot11sIeMeshId *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3Dot11sIeMeshId__tp_init__1(PyNs3Dot11sIeMeshId *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::dot11s::IeMeshId();
    return 0;
}

static int
_wrap_PyNs3Dot11sIeMeshId__tp_init__2(PyNs3Dot11sIeMeshId *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *s;
    Py_ssize_t s_len;
    const char *keywords[] = {"s", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &s, &s_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::dot11s::IeMeshId(std::string(s, s_len));
    return 0;
}

int _wrap_PyNs3Dot11sIeMeshId__tp_init(PyNs3Dot11sIeMeshId *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[3] = {0,};
    retval = _wrap_PyNs3Dot11sIeMeshId__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Dot11sIeMeshId__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3Dot11sIeMeshId__tp_init__2(self, args, kwargs, &exceptions[2]);
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
_wrap_PyNs3Dot11sIeMeshId_IsBroadcast(PyNs3Dot11sIeMeshId *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsBroadcast();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeMeshId_DeserializeInformationField(PyNs3Dot11sIeMeshId *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint8_t retval;
    PyNs3BufferIterator *start;
    int length;
    const char *keywords[] = {"start", "length", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!i", (char **) keywords, &PyNs3BufferIterator_Type, &start, &length)) {
        return NULL;
    }
    if (length > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    retval = self->obj->DeserializeInformationField(*((PyNs3BufferIterator *) start)->obj, length);
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeMeshId_GetInformationFieldSize(PyNs3Dot11sIeMeshId *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetInformationFieldSize();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeMeshId_PeekString(PyNs3Dot11sIeMeshId *self)
{
    PyObject *py_retval;
    char *retval;
    
    retval = self->obj->PeekString();
    py_retval = Py_BuildValue((char *) "s", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeMeshId_SerializeInformationField(PyNs3Dot11sIeMeshId *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3BufferIterator *i;
    const char *keywords[] = {"i", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3BufferIterator_Type, &i)) {
        return NULL;
    }
    self->obj->SerializeInformationField(*((PyNs3BufferIterator *) i)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeMeshId_IsEqual(PyNs3Dot11sIeMeshId *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3Dot11sIeMeshId *o;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Dot11sIeMeshId_Type, &o)) {
        return NULL;
    }
    retval = self->obj->IsEqual(*((PyNs3Dot11sIeMeshId *) o)->obj);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeMeshId_Print(PyNs3Dot11sIeMeshId *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyStdOstream *os;
    const char *keywords[] = {"os", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyStdOstream_Type, &os)) {
        return NULL;
    }
    self->obj->Print(*((PyStdOstream *) os)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeMeshId_ElementId(PyNs3Dot11sIeMeshId *self)
{
    PyObject *py_retval;
    ns3::WifiInformationElementId retval;
    
    retval = self->obj->ElementId();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


static PyObject*
_wrap_PyNs3Dot11sIeMeshId__copy__(PyNs3Dot11sIeMeshId *self)
{

    PyNs3Dot11sIeMeshId *py_copy;
    py_copy = PyObject_New(PyNs3Dot11sIeMeshId, &PyNs3Dot11sIeMeshId_Type);
    py_copy->obj = new ns3::dot11s::IeMeshId(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Dot11sIeMeshId_methods[] = {
    {(char *) "IsBroadcast", (PyCFunction) _wrap_PyNs3Dot11sIeMeshId_IsBroadcast, METH_NOARGS, NULL },
    {(char *) "DeserializeInformationField", (PyCFunction) _wrap_PyNs3Dot11sIeMeshId_DeserializeInformationField, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetInformationFieldSize", (PyCFunction) _wrap_PyNs3Dot11sIeMeshId_GetInformationFieldSize, METH_NOARGS, NULL },
    {(char *) "PeekString", (PyCFunction) _wrap_PyNs3Dot11sIeMeshId_PeekString, METH_NOARGS, NULL },
    {(char *) "SerializeInformationField", (PyCFunction) _wrap_PyNs3Dot11sIeMeshId_SerializeInformationField, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsEqual", (PyCFunction) _wrap_PyNs3Dot11sIeMeshId_IsEqual, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Print", (PyCFunction) _wrap_PyNs3Dot11sIeMeshId_Print, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "ElementId", (PyCFunction) _wrap_PyNs3Dot11sIeMeshId_ElementId, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Dot11sIeMeshId__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Dot11sIeMeshId__tp_dealloc(PyNs3Dot11sIeMeshId *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::dot11s::IeMeshId *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}



static PyObject *
_wrap_PyNs3Dot11sIeMeshId__tp_str(PyNs3Dot11sIeMeshId *self)
{
    std::ostringstream oss;
    oss << *self->obj;
    return PyString_FromString(oss.str ().c_str ());
}


static PyObject*
_wrap_PyNs3Dot11sIeMeshId__tp_richcompare (PyNs3Dot11sIeMeshId *PYBINDGEN_UNUSED(self), PyNs3Dot11sIeMeshId *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Dot11sIeMeshId_Type)) {
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
        if (*self->obj == *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
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

PyTypeObject PyNs3Dot11sIeMeshId_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.dot11s.IeMeshId",            /* tp_name */
    sizeof(PyNs3Dot11sIeMeshId),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Dot11sIeMeshId__tp_dealloc,        /* tp_dealloc */
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
    (reprfunc)_wrap_PyNs3Dot11sIeMeshId__tp_str,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3Dot11sIeMeshId__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Dot11sIeMeshId_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Dot11sIeMeshId__tp_init,             /* tp_init */
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
_wrap_PyNs3Dot11sIeMeshIdChecker__tp_init(void)
{
    PyErr_SetString(PyExc_TypeError, "class 'IeMeshIdChecker' cannot be constructed (have pure virtual methods but no helper class)");
    return -1;
}

static PyMethodDef PyNs3Dot11sIeMeshIdChecker_methods[] = {
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Dot11sIeMeshIdChecker__tp_dealloc(PyNs3Dot11sIeMeshIdChecker *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::dot11s::IeMeshIdChecker *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Dot11sIeMeshIdChecker__tp_richcompare (PyNs3Dot11sIeMeshIdChecker *PYBINDGEN_UNUSED(self), PyNs3Dot11sIeMeshIdChecker *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Dot11sIeMeshIdChecker_Type)) {
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

PyTypeObject PyNs3Dot11sIeMeshIdChecker_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.dot11s.IeMeshIdChecker",            /* tp_name */
    sizeof(PyNs3Dot11sIeMeshIdChecker),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Dot11sIeMeshIdChecker__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3Dot11sIeMeshIdChecker__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Dot11sIeMeshIdChecker_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Dot11sIeMeshIdChecker__tp_init,             /* tp_init */
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
_wrap_PyNs3Dot11sIeMeshIdValue__tp_init__0(PyNs3Dot11sIeMeshIdValue *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::dot11s::IeMeshIdValue();
    return 0;
}

static int
_wrap_PyNs3Dot11sIeMeshIdValue__tp_init__1(PyNs3Dot11sIeMeshIdValue *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Dot11sIeMeshIdValue *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Dot11sIeMeshIdValue_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::dot11s::IeMeshIdValue(*((PyNs3Dot11sIeMeshIdValue *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3Dot11sIeMeshIdValue__tp_init__2(PyNs3Dot11sIeMeshIdValue *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Dot11sIeMeshId *value;
    const char *keywords[] = {"value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Dot11sIeMeshId_Type, &value)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::dot11s::IeMeshIdValue(*((PyNs3Dot11sIeMeshId *) value)->obj);
    return 0;
}

int _wrap_PyNs3Dot11sIeMeshIdValue__tp_init(PyNs3Dot11sIeMeshIdValue *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[3] = {0,};
    retval = _wrap_PyNs3Dot11sIeMeshIdValue__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Dot11sIeMeshIdValue__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3Dot11sIeMeshIdValue__tp_init__2(self, args, kwargs, &exceptions[2]);
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
_wrap_PyNs3Dot11sIeMeshIdValue_Set(PyNs3Dot11sIeMeshIdValue *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Dot11sIeMeshId *value;
    const char *keywords[] = {"value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Dot11sIeMeshId_Type, &value)) {
        return NULL;
    }
    self->obj->Set(*((PyNs3Dot11sIeMeshId *) value)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeMeshIdValue_Get(PyNs3Dot11sIeMeshIdValue *self)
{
    PyObject *py_retval;
    PyNs3Dot11sIeMeshId *py_IeMeshId;
    
    ns3::dot11s::IeMeshId retval = self->obj->Get();
    py_IeMeshId = PyObject_New(PyNs3Dot11sIeMeshId, &PyNs3Dot11sIeMeshId_Type);
    py_IeMeshId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_IeMeshId->obj = new ns3::dot11s::IeMeshId(retval);
    PyNs3Empty_wrapper_registry[(void *) py_IeMeshId->obj] = (PyObject *) py_IeMeshId;
    py_retval = Py_BuildValue((char *) "N", py_IeMeshId);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeMeshIdValue_Copy(PyNs3Dot11sIeMeshIdValue *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::AttributeValue > retval;
    PyNs3AttributeValue *py_AttributeValue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = self->obj->Copy();
    if (!(const_cast<ns3::AttributeValue *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::AttributeValue *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_AttributeValue = NULL;
    } else {
        py_AttributeValue = (PyNs3AttributeValue *) wrapper_lookup_iter->second;
        Py_INCREF(py_AttributeValue);
    }
    
    if (py_AttributeValue == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::AttributeValue *> (ns3::PeekPointer (retval)))), &PyNs3AttributeValue_Type);
        py_AttributeValue = PyObject_New(PyNs3AttributeValue, wrapper_type);
        py_AttributeValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::AttributeValue *> (ns3::PeekPointer (retval))->Ref();
        py_AttributeValue->obj = const_cast<ns3::AttributeValue *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_AttributeValue->obj] = (PyObject *) py_AttributeValue;
    }
    py_retval = Py_BuildValue((char *) "N", py_AttributeValue);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeMeshIdValue_SerializeToString(PyNs3Dot11sIeMeshIdValue *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    std::string retval;
    PyNs3AttributeChecker *checker;
    ns3::AttributeChecker *checker_ptr;
    const char *keywords[] = {"checker", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3AttributeChecker_Type, &checker)) {
        return NULL;
    }
    checker_ptr = (checker ? checker->obj : NULL);
    retval = self->obj->SerializeToString(ns3::Ptr< ns3::AttributeChecker  > (checker_ptr));
    py_retval = Py_BuildValue((char *) "s#", (retval).c_str(), (retval).size());
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIeMeshIdValue_DeserializeFromString(PyNs3Dot11sIeMeshIdValue *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    const char *value;
    Py_ssize_t value_len;
    PyNs3AttributeChecker *checker;
    ns3::AttributeChecker *checker_ptr;
    const char *keywords[] = {"value", "checker", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &value, &value_len, &PyNs3AttributeChecker_Type, &checker)) {
        return NULL;
    }
    checker_ptr = (checker ? checker->obj : NULL);
    retval = self->obj->DeserializeFromString(std::string(value, value_len), ns3::Ptr< ns3::AttributeChecker  > (checker_ptr));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


static PyObject*
_wrap_PyNs3Dot11sIeMeshIdValue__copy__(PyNs3Dot11sIeMeshIdValue *self)
{

    PyNs3Dot11sIeMeshIdValue *py_copy;
    py_copy = PyObject_New(PyNs3Dot11sIeMeshIdValue, &PyNs3Dot11sIeMeshIdValue_Type);
    py_copy->obj = new ns3::dot11s::IeMeshIdValue(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Dot11sIeMeshIdValue_methods[] = {
    {(char *) "Set", (PyCFunction) _wrap_PyNs3Dot11sIeMeshIdValue_Set, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Get", (PyCFunction) _wrap_PyNs3Dot11sIeMeshIdValue_Get, METH_NOARGS, NULL },
    {(char *) "Copy", (PyCFunction) _wrap_PyNs3Dot11sIeMeshIdValue_Copy, METH_NOARGS, NULL },
    {(char *) "SerializeToString", (PyCFunction) _wrap_PyNs3Dot11sIeMeshIdValue_SerializeToString, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DeserializeFromString", (PyCFunction) _wrap_PyNs3Dot11sIeMeshIdValue_DeserializeFromString, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Dot11sIeMeshIdValue__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Dot11sIeMeshIdValue__tp_dealloc(PyNs3Dot11sIeMeshIdValue *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::dot11s::IeMeshIdValue *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Dot11sIeMeshIdValue__tp_richcompare (PyNs3Dot11sIeMeshIdValue *PYBINDGEN_UNUSED(self), PyNs3Dot11sIeMeshIdValue *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Dot11sIeMeshIdValue_Type)) {
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

PyTypeObject PyNs3Dot11sIeMeshIdValue_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.dot11s.IeMeshIdValue",            /* tp_name */
    sizeof(PyNs3Dot11sIeMeshIdValue),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Dot11sIeMeshIdValue__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3Dot11sIeMeshIdValue__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Dot11sIeMeshIdValue_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Dot11sIeMeshIdValue__tp_init,             /* tp_init */
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
_wrap_PyNs3Dot11sIePeerManagement__tp_init__0(PyNs3Dot11sIePeerManagement *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Dot11sIePeerManagement *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Dot11sIePeerManagement_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::dot11s::IePeerManagement(*((PyNs3Dot11sIePeerManagement *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3Dot11sIePeerManagement__tp_init__1(PyNs3Dot11sIePeerManagement *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::dot11s::IePeerManagement();
    return 0;
}

int _wrap_PyNs3Dot11sIePeerManagement__tp_init(PyNs3Dot11sIePeerManagement *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Dot11sIePeerManagement__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Dot11sIePeerManagement__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Dot11sIePeerManagement_SetPeerClose(PyNs3Dot11sIePeerManagement *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int localLinkID;
    int peerLinkId;
    ns3::dot11s::PmpReasonCode reasonCode;
    const char *keywords[] = {"localLinkID", "peerLinkId", "reasonCode", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "iii", (char **) keywords, &localLinkID, &peerLinkId, &reasonCode)) {
        return NULL;
    }
    if (localLinkID > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    if (peerLinkId > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetPeerClose(localLinkID, peerLinkId, reasonCode);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIePeerManagement_GetReasonCode(PyNs3Dot11sIePeerManagement *self)
{
    PyObject *py_retval;
    ns3::dot11s::PmpReasonCode retval;
    
    retval = self->obj->GetReasonCode();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIePeerManagement_DeserializeInformationField(PyNs3Dot11sIePeerManagement *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint8_t retval;
    PyNs3BufferIterator *i;
    int length;
    const char *keywords[] = {"i", "length", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!i", (char **) keywords, &PyNs3BufferIterator_Type, &i, &length)) {
        return NULL;
    }
    if (length > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    retval = self->obj->DeserializeInformationField(*((PyNs3BufferIterator *) i)->obj, length);
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIePeerManagement_GetPeerLinkId(PyNs3Dot11sIePeerManagement *self)
{
    PyObject *py_retval;
    uint16_t retval;
    
    retval = self->obj->GetPeerLinkId();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIePeerManagement_GetSubtype(PyNs3Dot11sIePeerManagement *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetSubtype();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIePeerManagement_SubtypeIsClose(PyNs3Dot11sIePeerManagement *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->SubtypeIsClose();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIePeerManagement_GetInformationFieldSize(PyNs3Dot11sIePeerManagement *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetInformationFieldSize();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIePeerManagement_SubtypeIsConfirm(PyNs3Dot11sIePeerManagement *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->SubtypeIsConfirm();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIePeerManagement_SerializeInformationField(PyNs3Dot11sIePeerManagement *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3BufferIterator *i;
    const char *keywords[] = {"i", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3BufferIterator_Type, &i)) {
        return NULL;
    }
    self->obj->SerializeInformationField(*((PyNs3BufferIterator *) i)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIePeerManagement_SetPeerOpen(PyNs3Dot11sIePeerManagement *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int localLinkId;
    const char *keywords[] = {"localLinkId", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &localLinkId)) {
        return NULL;
    }
    if (localLinkId > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetPeerOpen(localLinkId);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIePeerManagement_Print(PyNs3Dot11sIePeerManagement *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyStdOstream *os;
    const char *keywords[] = {"os", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyStdOstream_Type, &os)) {
        return NULL;
    }
    self->obj->Print(*((PyStdOstream *) os)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIePeerManagement_SetPeerConfirm(PyNs3Dot11sIePeerManagement *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int localLinkID;
    int peerLinkId;
    const char *keywords[] = {"localLinkID", "peerLinkId", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "ii", (char **) keywords, &localLinkID, &peerLinkId)) {
        return NULL;
    }
    if (localLinkID > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    if (peerLinkId > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetPeerConfirm(localLinkID, peerLinkId);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIePeerManagement_GetLocalLinkId(PyNs3Dot11sIePeerManagement *self)
{
    PyObject *py_retval;
    uint16_t retval;
    
    retval = self->obj->GetLocalLinkId();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIePeerManagement_ElementId(PyNs3Dot11sIePeerManagement *self)
{
    PyObject *py_retval;
    ns3::WifiInformationElementId retval;
    
    retval = self->obj->ElementId();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sIePeerManagement_SubtypeIsOpen(PyNs3Dot11sIePeerManagement *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->SubtypeIsOpen();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


static PyObject*
_wrap_PyNs3Dot11sIePeerManagement__copy__(PyNs3Dot11sIePeerManagement *self)
{

    PyNs3Dot11sIePeerManagement *py_copy;
    py_copy = PyObject_New(PyNs3Dot11sIePeerManagement, &PyNs3Dot11sIePeerManagement_Type);
    py_copy->obj = new ns3::dot11s::IePeerManagement(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Dot11sIePeerManagement_methods[] = {
    {(char *) "SetPeerClose", (PyCFunction) _wrap_PyNs3Dot11sIePeerManagement_SetPeerClose, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetReasonCode", (PyCFunction) _wrap_PyNs3Dot11sIePeerManagement_GetReasonCode, METH_NOARGS, NULL },
    {(char *) "DeserializeInformationField", (PyCFunction) _wrap_PyNs3Dot11sIePeerManagement_DeserializeInformationField, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetPeerLinkId", (PyCFunction) _wrap_PyNs3Dot11sIePeerManagement_GetPeerLinkId, METH_NOARGS, NULL },
    {(char *) "GetSubtype", (PyCFunction) _wrap_PyNs3Dot11sIePeerManagement_GetSubtype, METH_NOARGS, NULL },
    {(char *) "SubtypeIsClose", (PyCFunction) _wrap_PyNs3Dot11sIePeerManagement_SubtypeIsClose, METH_NOARGS, NULL },
    {(char *) "GetInformationFieldSize", (PyCFunction) _wrap_PyNs3Dot11sIePeerManagement_GetInformationFieldSize, METH_NOARGS, NULL },
    {(char *) "SubtypeIsConfirm", (PyCFunction) _wrap_PyNs3Dot11sIePeerManagement_SubtypeIsConfirm, METH_NOARGS, NULL },
    {(char *) "SerializeInformationField", (PyCFunction) _wrap_PyNs3Dot11sIePeerManagement_SerializeInformationField, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetPeerOpen", (PyCFunction) _wrap_PyNs3Dot11sIePeerManagement_SetPeerOpen, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Print", (PyCFunction) _wrap_PyNs3Dot11sIePeerManagement_Print, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetPeerConfirm", (PyCFunction) _wrap_PyNs3Dot11sIePeerManagement_SetPeerConfirm, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetLocalLinkId", (PyCFunction) _wrap_PyNs3Dot11sIePeerManagement_GetLocalLinkId, METH_NOARGS, NULL },
    {(char *) "ElementId", (PyCFunction) _wrap_PyNs3Dot11sIePeerManagement_ElementId, METH_NOARGS, NULL },
    {(char *) "SubtypeIsOpen", (PyCFunction) _wrap_PyNs3Dot11sIePeerManagement_SubtypeIsOpen, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Dot11sIePeerManagement__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Dot11sIePeerManagement__tp_dealloc(PyNs3Dot11sIePeerManagement *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::dot11s::IePeerManagement *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}



static PyObject *
_wrap_PyNs3Dot11sIePeerManagement__tp_str(PyNs3Dot11sIePeerManagement *self)
{
    std::ostringstream oss;
    oss << *self->obj;
    return PyString_FromString(oss.str ().c_str ());
}


static PyObject*
_wrap_PyNs3Dot11sIePeerManagement__tp_richcompare (PyNs3Dot11sIePeerManagement *PYBINDGEN_UNUSED(self), PyNs3Dot11sIePeerManagement *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Dot11sIePeerManagement_Type)) {
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
        if (*self->obj == *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
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

PyTypeObject PyNs3Dot11sIePeerManagement_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.dot11s.IePeerManagement",            /* tp_name */
    sizeof(PyNs3Dot11sIePeerManagement),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Dot11sIePeerManagement__tp_dealloc,        /* tp_dealloc */
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
    (reprfunc)_wrap_PyNs3Dot11sIePeerManagement__tp_str,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3Dot11sIePeerManagement__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Dot11sIePeerManagement_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Dot11sIePeerManagement__tp_init,             /* tp_init */
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
PyNs3Dot11sPeerLink__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3Dot11sPeerLink *self)
{
    PyObject *py_retval;
    PyNs3Dot11sPeerLink__PythonHelper *helper = dynamic_cast< PyNs3Dot11sPeerLink__PythonHelper* >(self->obj);
    
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
PyNs3Dot11sPeerLink__PythonHelper::_wrap_NotifyNewAggregate(PyNs3Dot11sPeerLink *self)
{
    PyObject *py_retval;
    PyNs3Dot11sPeerLink__PythonHelper *helper = dynamic_cast< PyNs3Dot11sPeerLink__PythonHelper* >(self->obj);
    
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
PyNs3Dot11sPeerLink__PythonHelper::_wrap_DoStart(PyNs3Dot11sPeerLink *self)
{
    PyObject *py_retval;
    PyNs3Dot11sPeerLink__PythonHelper *helper = dynamic_cast< PyNs3Dot11sPeerLink__PythonHelper* >(self->obj);
    
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
PyNs3Dot11sPeerLink__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::dot11s::PeerLink *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::dot11s::PeerLink::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Dot11sPeerLink* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Dot11sPeerLink* >(m_pyself)->obj = (ns3::dot11s::PeerLink*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Dot11sPeerLink* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Dot11sPeerLink* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Dot11sPeerLink* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3Dot11sPeerLink__PythonHelper::GetInstanceTypeId() const
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
PyNs3Dot11sPeerLink__PythonHelper::DoStart()
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
PyNs3Dot11sPeerLink__PythonHelper::NotifyNewAggregate()
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
PyNs3Dot11sPeerLink__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3Dot11sPeerLink__tp_init(PyNs3Dot11sPeerLink *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        return -1;
    }
    if (self->ob_type != &PyNs3Dot11sPeerLink_Type)
    {
        self->obj = new PyNs3Dot11sPeerLink__PythonHelper();
        self->obj->Ref ();
        ((PyNs3Dot11sPeerLink__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::dot11s::PeerLink();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_SetPeerAddress(PyNs3Dot11sPeerLink *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Mac48Address *macaddr;
    const char *keywords[] = {"macaddr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Mac48Address_Type, &macaddr)) {
        return NULL;
    }
    self->obj->SetPeerAddress(*((PyNs3Mac48Address *) macaddr)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::dot11s::PeerLink::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_MLMECancelPeerLink(PyNs3Dot11sPeerLink *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::dot11s::PmpReasonCode reason;
    const char *keywords[] = {"reason", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &reason)) {
        return NULL;
    }
    self->obj->MLMECancelPeerLink(reason);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_GetPeerAid(PyNs3Dot11sPeerLink *self)
{
    PyObject *py_retval;
    uint16_t retval;
    
    retval = self->obj->GetPeerAid();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_SetBeaconInformation(PyNs3Dot11sPeerLink *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *lastBeacon;
    ns3::Time lastBeacon2;
    PyObject *BeaconInterval;
    ns3::Time BeaconInterval2;
    const char *keywords[] = {"lastBeacon", "BeaconInterval", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "OO", (char **) keywords, &lastBeacon, &BeaconInterval)) {
        return NULL;
    }
    if (PyObject_IsInstance(lastBeacon, (PyObject*) &PyNs3Time_Type)) {
        lastBeacon2 = *((PyNs3Time *) lastBeacon)->obj;
    } else if (PyObject_IsInstance(lastBeacon, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        lastBeacon2 = *((PyNs3TracedValue__Ns3Time *) lastBeacon)->obj;
    } else if (PyObject_IsInstance(lastBeacon, (PyObject*) &PyNs3Scalar_Type)) {
        lastBeacon2 = *((PyNs3Scalar *) lastBeacon)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", lastBeacon->ob_type->tp_name);
        return NULL;
    }
    if (PyObject_IsInstance(BeaconInterval, (PyObject*) &PyNs3Time_Type)) {
        BeaconInterval2 = *((PyNs3Time *) BeaconInterval)->obj;
    } else if (PyObject_IsInstance(BeaconInterval, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        BeaconInterval2 = *((PyNs3TracedValue__Ns3Time *) BeaconInterval)->obj;
    } else if (PyObject_IsInstance(BeaconInterval, (PyObject*) &PyNs3Scalar_Type)) {
        BeaconInterval2 = *((PyNs3Scalar *) BeaconInterval)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", BeaconInterval->ob_type->tp_name);
        return NULL;
    }
    self->obj->SetBeaconInformation(lastBeacon2, BeaconInterval2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_SetBeaconTimingElement(PyNs3Dot11sPeerLink *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Dot11sIeBeaconTiming *beaconTiming;
    const char *keywords[] = {"beaconTiming", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Dot11sIeBeaconTiming_Type, &beaconTiming)) {
        return NULL;
    }
    self->obj->SetBeaconTimingElement(*((PyNs3Dot11sIeBeaconTiming *) beaconTiming)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_GetLastBeacon(PyNs3Dot11sPeerLink *self)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = self->obj->GetLastBeacon();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_GetPeerAddress(PyNs3Dot11sPeerLink *self)
{
    PyObject *py_retval;
    PyNs3Mac48Address *py_Mac48Address;
    
    ns3::Mac48Address retval = self->obj->GetPeerAddress();
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(retval);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_retval = Py_BuildValue((char *) "N", py_Mac48Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_MLMEActivePeerLinkOpen(PyNs3Dot11sPeerLink *self)
{
    PyObject *py_retval;
    
    self->obj->MLMEActivePeerLinkOpen();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_DoDispose(PyNs3Dot11sPeerLink *self)
{
    PyObject *py_retval;
    PyNs3Dot11sPeerLink__PythonHelper *helper_class = dynamic_cast<PyNs3Dot11sPeerLink__PythonHelper*> (self->obj);
    
    (helper_class == NULL)? (self->obj->DoDispose()) : (self->obj->ns3::dot11s::PeerLink::DoDispose());
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_Report(PyNs3Dot11sPeerLink *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyStdOstream *os;
    const char *keywords[] = {"os", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyStdOstream_Type, &os)) {
        return NULL;
    }
    self->obj->Report(*((PyStdOstream *) os)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_GetLocalAid(PyNs3Dot11sPeerLink *self)
{
    PyObject *py_retval;
    uint16_t retval;
    
    retval = self->obj->GetLocalAid();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_GetBeaconTimingElement(PyNs3Dot11sPeerLink *self)
{
    PyObject *py_retval;
    PyNs3Dot11sIeBeaconTiming *py_IeBeaconTiming;
    
    ns3::dot11s::IeBeaconTiming retval = self->obj->GetBeaconTimingElement();
    py_IeBeaconTiming = PyObject_New(PyNs3Dot11sIeBeaconTiming, &PyNs3Dot11sIeBeaconTiming_Type);
    py_IeBeaconTiming->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_IeBeaconTiming->obj = new ns3::dot11s::IeBeaconTiming(retval);
    PyNs3Empty_wrapper_registry[(void *) py_IeBeaconTiming->obj] = (PyObject *) py_IeBeaconTiming;
    py_retval = Py_BuildValue((char *) "N", py_IeBeaconTiming);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_TransmissionFailure(PyNs3Dot11sPeerLink *self)
{
    PyObject *py_retval;
    
    self->obj->TransmissionFailure();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_SetPeerMeshPointAddress(PyNs3Dot11sPeerLink *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Mac48Address *macaddr;
    const char *keywords[] = {"macaddr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Mac48Address_Type, &macaddr)) {
        return NULL;
    }
    self->obj->SetPeerMeshPointAddress(*((PyNs3Mac48Address *) macaddr)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_MLMEPeeringRequestReject(PyNs3Dot11sPeerLink *self)
{
    PyObject *py_retval;
    
    self->obj->MLMEPeeringRequestReject();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_SetInterface(PyNs3Dot11sPeerLink *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int interface;
    const char *keywords[] = {"interface", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &interface)) {
        return NULL;
    }
    self->obj->SetInterface(interface);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_TransmissionSuccess(PyNs3Dot11sPeerLink *self)
{
    PyObject *py_retval;
    
    self->obj->TransmissionSuccess();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_SetLocalAid(PyNs3Dot11sPeerLink *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int aid;
    const char *keywords[] = {"aid", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &aid)) {
        return NULL;
    }
    if (aid > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetLocalAid(aid);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_MLMESetSignalStatusCallback(PyNs3Dot11sPeerLink *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *arg0;
    ns3::Ptr<PythonCallbackImpl10> arg0_cb_impl;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &arg0)) {
        return NULL;
    }
    if (!PyCallable_Check(arg0)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'arg0' must be callbale");
        return NULL;
    }
    arg0_cb_impl = ns3::Create<PythonCallbackImpl10> (arg0);
    self->obj->MLMESetSignalStatusCallback(ns3::Callback<void, unsigned int, ns3::Mac48Address, ns3::Mac48Address, ns3::dot11s::PeerLink::PeerState, ns3::dot11s::PeerLink::PeerState, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (arg0_cb_impl));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_GetBeaconInterval(PyNs3Dot11sPeerLink *self)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = self->obj->GetBeaconInterval();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerLink_SetLocalLinkId(PyNs3Dot11sPeerLink *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int id;
    const char *keywords[] = {"id", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &id)) {
        return NULL;
    }
    if (id > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetLocalLinkId(id);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

static PyMethodDef PyNs3Dot11sPeerLink_methods[] = {
    {(char *) "SetPeerAddress", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_SetPeerAddress, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "MLMECancelPeerLink", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_MLMECancelPeerLink, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetPeerAid", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_GetPeerAid, METH_NOARGS, NULL },
    {(char *) "SetBeaconInformation", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_SetBeaconInformation, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetBeaconTimingElement", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_SetBeaconTimingElement, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetLastBeacon", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_GetLastBeacon, METH_NOARGS, NULL },
    {(char *) "GetPeerAddress", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_GetPeerAddress, METH_NOARGS, NULL },
    {(char *) "MLMEActivePeerLinkOpen", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_MLMEActivePeerLinkOpen, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_DoDispose, METH_NOARGS, NULL },
    {(char *) "Report", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_Report, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetLocalAid", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_GetLocalAid, METH_NOARGS, NULL },
    {(char *) "GetBeaconTimingElement", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_GetBeaconTimingElement, METH_NOARGS, NULL },
    {(char *) "TransmissionFailure", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_TransmissionFailure, METH_NOARGS, NULL },
    {(char *) "SetPeerMeshPointAddress", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_SetPeerMeshPointAddress, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "MLMEPeeringRequestReject", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_MLMEPeeringRequestReject, METH_NOARGS, NULL },
    {(char *) "SetInterface", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_SetInterface, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "TransmissionSuccess", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_TransmissionSuccess, METH_NOARGS, NULL },
    {(char *) "SetLocalAid", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_SetLocalAid, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "MLMESetSignalStatusCallback", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_MLMESetSignalStatusCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetBeaconInterval", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_GetBeaconInterval, METH_NOARGS, NULL },
    {(char *) "SetLocalLinkId", (PyCFunction) _wrap_PyNs3Dot11sPeerLink_SetLocalLinkId, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3Dot11sPeerLink__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3Dot11sPeerLink__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3Dot11sPeerLink__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3Dot11sPeerLink__tp_clear(PyNs3Dot11sPeerLink *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::dot11s::PeerLink *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3Dot11sPeerLink__tp_traverse(PyNs3Dot11sPeerLink *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3Dot11sPeerLink__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3Dot11sPeerLink__tp_dealloc(PyNs3Dot11sPeerLink *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3Dot11sPeerLink__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Dot11sPeerLink__tp_richcompare (PyNs3Dot11sPeerLink *PYBINDGEN_UNUSED(self), PyNs3Dot11sPeerLink *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Dot11sPeerLink_Type)) {
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

PyTypeObject PyNs3Dot11sPeerLink_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.dot11s.PeerLink",            /* tp_name */
    sizeof(PyNs3Dot11sPeerLink),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Dot11sPeerLink__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3Dot11sPeerLink__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3Dot11sPeerLink__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3Dot11sPeerLink__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Dot11sPeerLink_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3Dot11sPeerLink, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Dot11sPeerLink__tp_init,             /* tp_init */
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
PyNs3Dot11sPeerManagementProtocol__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3Dot11sPeerManagementProtocol *self)
{
    PyObject *py_retval;
    PyNs3Dot11sPeerManagementProtocol__PythonHelper *helper = dynamic_cast< PyNs3Dot11sPeerManagementProtocol__PythonHelper* >(self->obj);
    
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
PyNs3Dot11sPeerManagementProtocol__PythonHelper::_wrap_NotifyNewAggregate(PyNs3Dot11sPeerManagementProtocol *self)
{
    PyObject *py_retval;
    PyNs3Dot11sPeerManagementProtocol__PythonHelper *helper = dynamic_cast< PyNs3Dot11sPeerManagementProtocol__PythonHelper* >(self->obj);
    
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
PyNs3Dot11sPeerManagementProtocol__PythonHelper::_wrap_DoStart(PyNs3Dot11sPeerManagementProtocol *self)
{
    PyObject *py_retval;
    PyNs3Dot11sPeerManagementProtocol__PythonHelper *helper = dynamic_cast< PyNs3Dot11sPeerManagementProtocol__PythonHelper* >(self->obj);
    
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
PyNs3Dot11sPeerManagementProtocol__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::dot11s::PeerManagementProtocol *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::dot11s::PeerManagementProtocol::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Dot11sPeerManagementProtocol* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Dot11sPeerManagementProtocol* >(m_pyself)->obj = (ns3::dot11s::PeerManagementProtocol*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Dot11sPeerManagementProtocol* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Dot11sPeerManagementProtocol* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Dot11sPeerManagementProtocol* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3Dot11sPeerManagementProtocol__PythonHelper::GetInstanceTypeId() const
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
PyNs3Dot11sPeerManagementProtocol__PythonHelper::DoStart()
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
PyNs3Dot11sPeerManagementProtocol__PythonHelper::NotifyNewAggregate()
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
PyNs3Dot11sPeerManagementProtocol__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3Dot11sPeerManagementProtocol__tp_init(PyNs3Dot11sPeerManagementProtocol *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        return -1;
    }
    if (self->ob_type != &PyNs3Dot11sPeerManagementProtocol_Type)
    {
        self->obj = new PyNs3Dot11sPeerManagementProtocol__PythonHelper();
        self->obj->Ref ();
        ((PyNs3Dot11sPeerManagementProtocol__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::dot11s::PeerManagementProtocol();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_SetPeerLinkStatusCallback(PyNs3Dot11sPeerManagementProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *cb;
    ns3::Ptr<PythonCallbackImpl9> cb_cb_impl;
    const char *keywords[] = {"cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &cb)) {
        return NULL;
    }
    if (!PyCallable_Check(cb)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'cb' must be callbale");
        return NULL;
    }
    cb_cb_impl = ns3::Create<PythonCallbackImpl9> (cb);
    self->obj->SetPeerLinkStatusCallback(ns3::Callback<void, ns3::Mac48Address, ns3::Mac48Address, unsigned int, bool, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::dot11s::PeerManagementProtocol::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_SetBeaconCollisionAvoidance(PyNs3Dot11sPeerManagementProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool enable;
    PyObject *py_enable;
    const char *keywords[] = {"enable", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_enable)) {
        return NULL;
    }
    enable = (bool) PyObject_IsTrue(py_enable);
    self->obj->SetBeaconCollisionAvoidance(enable);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_GetPeers(PyNs3Dot11sPeerManagementProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    std::vector< ns3::Mac48Address > retval;
    unsigned int interface;
    const char *keywords[] = {"interface", NULL};
    Pystd__vector__lt___ns3__Mac48Address___gt__ *py_std__vector__lt___ns3__Mac48Address___gt__;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &interface)) {
        return NULL;
    }
    retval = self->obj->GetPeers(interface);
    py_std__vector__lt___ns3__Mac48Address___gt__ = PyObject_New(Pystd__vector__lt___ns3__Mac48Address___gt__, &Pystd__vector__lt___ns3__Mac48Address___gt___Type);
    py_std__vector__lt___ns3__Mac48Address___gt__->obj = new std::vector< ns3::Mac48Address >(retval);
    py_retval = Py_BuildValue((char *) "N", py_std__vector__lt___ns3__Mac48Address___gt__);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_IsActiveLink(PyNs3Dot11sPeerManagementProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    unsigned int interface;
    PyNs3Mac48Address *peerAddress;
    const char *keywords[] = {"interface", "peerAddress", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "IO!", (char **) keywords, &interface, &PyNs3Mac48Address_Type, &peerAddress)) {
        return NULL;
    }
    retval = self->obj->IsActiveLink(interface, *((PyNs3Mac48Address *) peerAddress)->obj);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_GetNumberOfLinks(PyNs3Dot11sPeerManagementProtocol *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetNumberOfLinks();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_ReceivePeerLinkFrame(PyNs3Dot11sPeerManagementProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int interface;
    PyNs3Mac48Address *peerAddress;
    PyNs3Mac48Address *peerMeshPointAddress;
    int aid;
    PyNs3Dot11sIePeerManagement *peerManagementElement;
    PyNs3Dot11sIeConfiguration *meshConfig;
    const char *keywords[] = {"interface", "peerAddress", "peerMeshPointAddress", "aid", "peerManagementElement", "meshConfig", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "IO!O!iO!O!", (char **) keywords, &interface, &PyNs3Mac48Address_Type, &peerAddress, &PyNs3Mac48Address_Type, &peerMeshPointAddress, &aid, &PyNs3Dot11sIePeerManagement_Type, &peerManagementElement, &PyNs3Dot11sIeConfiguration_Type, &meshConfig)) {
        return NULL;
    }
    if (aid > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->ReceivePeerLinkFrame(interface, *((PyNs3Mac48Address *) peerAddress)->obj, *((PyNs3Mac48Address *) peerMeshPointAddress)->obj, aid, *((PyNs3Dot11sIePeerManagement *) peerManagementElement)->obj, *((PyNs3Dot11sIeConfiguration *) meshConfig)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_FindPeerLink(PyNs3Dot11sPeerManagementProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::dot11s::PeerLink > retval;
    unsigned int interface;
    PyNs3Mac48Address *peerAddress;
    const char *keywords[] = {"interface", "peerAddress", NULL};
    PyNs3Dot11sPeerLink *py_PeerLink;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "IO!", (char **) keywords, &interface, &PyNs3Mac48Address_Type, &peerAddress)) {
        return NULL;
    }
    retval = self->obj->FindPeerLink(interface, *((PyNs3Mac48Address *) peerAddress)->obj);
    if (!(const_cast<ns3::dot11s::PeerLink *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::dot11s::PeerLink *> (ns3::PeekPointer (retval)))) == typeid(PyNs3Dot11sPeerLink__PythonHelper))
    {
        py_PeerLink = reinterpret_cast< PyNs3Dot11sPeerLink* >(reinterpret_cast< PyNs3Dot11sPeerLink__PythonHelper* >(const_cast<ns3::dot11s::PeerLink *> (ns3::PeekPointer (retval)))->m_pyself);
        py_PeerLink->obj = const_cast<ns3::dot11s::PeerLink *> (ns3::PeekPointer (retval));
        Py_INCREF(py_PeerLink);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::dot11s::PeerLink *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_PeerLink = NULL;
        } else {
            py_PeerLink = (PyNs3Dot11sPeerLink *) wrapper_lookup_iter->second;
            Py_INCREF(py_PeerLink);
        }
    
        if (py_PeerLink == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::dot11s::PeerLink *> (ns3::PeekPointer (retval)))), &PyNs3Dot11sPeerLink_Type);
            py_PeerLink = PyObject_GC_New(PyNs3Dot11sPeerLink, wrapper_type);
            py_PeerLink->inst_dict = NULL;
            py_PeerLink->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::dot11s::PeerLink *> (ns3::PeekPointer (retval))->Ref();
            py_PeerLink->obj = const_cast<ns3::dot11s::PeerLink *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_PeerLink->obj] = (PyObject *) py_PeerLink;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_PeerLink);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_Report(PyNs3Dot11sPeerManagementProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyStdOstream *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyStdOstream_Type, &arg0)) {
        return NULL;
    }
    self->obj->Report(*((PyStdOstream *) arg0)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_ConfigurationMismatch(PyNs3Dot11sPeerManagementProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int interface;
    PyNs3Mac48Address *peerAddress;
    const char *keywords[] = {"interface", "peerAddress", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "IO!", (char **) keywords, &interface, &PyNs3Mac48Address_Type, &peerAddress)) {
        return NULL;
    }
    self->obj->ConfigurationMismatch(interface, *((PyNs3Mac48Address *) peerAddress)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_GetBeaconTimingElement(PyNs3Dot11sPeerManagementProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::dot11s::IeBeaconTiming > retval;
    unsigned int interface;
    const char *keywords[] = {"interface", NULL};
    PyNs3Dot11sIeBeaconTiming *py_IeBeaconTiming;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &interface)) {
        return NULL;
    }
    retval = self->obj->GetBeaconTimingElement(interface);
    if (!(const_cast<ns3::dot11s::IeBeaconTiming *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::dot11s::IeBeaconTiming *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_IeBeaconTiming = NULL;
    } else {
        py_IeBeaconTiming = (PyNs3Dot11sIeBeaconTiming *) wrapper_lookup_iter->second;
        Py_INCREF(py_IeBeaconTiming);
    }
    
    if (py_IeBeaconTiming == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3WifiInformationElement_Ns3Empty_Ns3DefaultDeleter__lt__ns3WifiInformationElement__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::dot11s::IeBeaconTiming *> (ns3::PeekPointer (retval)))), &PyNs3Dot11sIeBeaconTiming_Type);
        py_IeBeaconTiming = PyObject_New(PyNs3Dot11sIeBeaconTiming, wrapper_type);
        py_IeBeaconTiming->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::dot11s::IeBeaconTiming *> (ns3::PeekPointer (retval))->Ref();
        py_IeBeaconTiming->obj = const_cast<ns3::dot11s::IeBeaconTiming *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_IeBeaconTiming->obj] = (PyObject *) py_IeBeaconTiming;
    }
    py_retval = Py_BuildValue((char *) "N", py_IeBeaconTiming);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_TransmissionFailure(PyNs3Dot11sPeerManagementProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int interface;
    PyNs3Mac48Address *peerAddress;
    const char *keywords[] = {"interface", "peerAddress", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "IO!", (char **) keywords, &interface, &PyNs3Mac48Address_Type, &peerAddress)) {
        return NULL;
    }
    self->obj->TransmissionFailure(interface, *((PyNs3Mac48Address *) peerAddress)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_SetMeshId(PyNs3Dot11sPeerManagementProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *s;
    Py_ssize_t s_len;
    const char *keywords[] = {"s", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &s, &s_len)) {
        return NULL;
    }
    self->obj->SetMeshId(std::string(s, s_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_DoDispose(PyNs3Dot11sPeerManagementProtocol *self)
{
    PyObject *py_retval;
    PyNs3Dot11sPeerManagementProtocol__PythonHelper *helper_class = dynamic_cast<PyNs3Dot11sPeerManagementProtocol__PythonHelper*> (self->obj);
    
    (helper_class == NULL)? (self->obj->DoDispose()) : (self->obj->ns3::dot11s::PeerManagementProtocol::DoDispose());
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_GetAddress(PyNs3Dot11sPeerManagementProtocol *self)
{
    PyObject *py_retval;
    PyNs3Mac48Address *py_Mac48Address;
    
    ns3::Mac48Address retval = self->obj->GetAddress();
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(retval);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_retval = Py_BuildValue((char *) "N", py_Mac48Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_GetBeaconCollisionAvoidance(PyNs3Dot11sPeerManagementProtocol *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->GetBeaconCollisionAvoidance();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_GetMeshId(PyNs3Dot11sPeerManagementProtocol *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::dot11s::IeMeshId > retval;
    PyNs3Dot11sIeMeshId *py_IeMeshId;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = self->obj->GetMeshId();
    if (!(const_cast<ns3::dot11s::IeMeshId *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::dot11s::IeMeshId *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_IeMeshId = NULL;
    } else {
        py_IeMeshId = (PyNs3Dot11sIeMeshId *) wrapper_lookup_iter->second;
        Py_INCREF(py_IeMeshId);
    }
    
    if (py_IeMeshId == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3WifiInformationElement_Ns3Empty_Ns3DefaultDeleter__lt__ns3WifiInformationElement__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::dot11s::IeMeshId *> (ns3::PeekPointer (retval)))), &PyNs3Dot11sIeMeshId_Type);
        py_IeMeshId = PyObject_New(PyNs3Dot11sIeMeshId, wrapper_type);
        py_IeMeshId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::dot11s::IeMeshId *> (ns3::PeekPointer (retval))->Ref();
        py_IeMeshId->obj = const_cast<ns3::dot11s::IeMeshId *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_IeMeshId->obj] = (PyObject *) py_IeMeshId;
    }
    py_retval = Py_BuildValue((char *) "N", py_IeMeshId);
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_Install(PyNs3Dot11sPeerManagementProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3MeshPointDevice *arg0;
    ns3::MeshPointDevice *arg0_ptr;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3MeshPointDevice_Type, &arg0)) {
        return NULL;
    }
    arg0_ptr = (arg0 ? arg0->obj : NULL);
    retval = self->obj->Install(ns3::Ptr< ns3::MeshPointDevice  > (arg0_ptr));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_ResetStats(PyNs3Dot11sPeerManagementProtocol *self)
{
    PyObject *py_retval;
    
    self->obj->ResetStats();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_TransmissionSuccess(PyNs3Dot11sPeerManagementProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int interface;
    PyNs3Mac48Address *peerAddress;
    const char *keywords[] = {"interface", "peerAddress", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "IO!", (char **) keywords, &interface, &PyNs3Mac48Address_Type, &peerAddress)) {
        return NULL;
    }
    self->obj->TransmissionSuccess(interface, *((PyNs3Mac48Address *) peerAddress)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_ReceiveBeacon(PyNs3Dot11sPeerManagementProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int interface;
    PyNs3Mac48Address *peerAddress;
    PyObject *beaconInterval;
    ns3::Time beaconInterval2;
    PyNs3Dot11sIeBeaconTiming *beaconTiming;
    ns3::dot11s::IeBeaconTiming *beaconTiming_ptr;
    const char *keywords[] = {"interface", "peerAddress", "beaconInterval", "beaconTiming", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "IO!OO!", (char **) keywords, &interface, &PyNs3Mac48Address_Type, &peerAddress, &beaconInterval, &PyNs3Dot11sIeBeaconTiming_Type, &beaconTiming)) {
        return NULL;
    }
    if (PyObject_IsInstance(beaconInterval, (PyObject*) &PyNs3Time_Type)) {
        beaconInterval2 = *((PyNs3Time *) beaconInterval)->obj;
    } else if (PyObject_IsInstance(beaconInterval, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        beaconInterval2 = *((PyNs3TracedValue__Ns3Time *) beaconInterval)->obj;
    } else if (PyObject_IsInstance(beaconInterval, (PyObject*) &PyNs3Scalar_Type)) {
        beaconInterval2 = *((PyNs3Scalar *) beaconInterval)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", beaconInterval->ob_type->tp_name);
        return NULL;
    }
    beaconTiming_ptr = (beaconTiming ? beaconTiming->obj : NULL);
    self->obj->ReceiveBeacon(interface, *((PyNs3Mac48Address *) peerAddress)->obj, beaconInterval2, ns3::Ptr< ns3::dot11s::IeBeaconTiming  > (beaconTiming_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Dot11sPeerManagementProtocol_NotifyBeaconSent(PyNs3Dot11sPeerManagementProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int interface;
    PyObject *beaconInterval;
    ns3::Time beaconInterval2;
    const char *keywords[] = {"interface", "beaconInterval", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "IO", (char **) keywords, &interface, &beaconInterval)) {
        return NULL;
    }
    if (PyObject_IsInstance(beaconInterval, (PyObject*) &PyNs3Time_Type)) {
        beaconInterval2 = *((PyNs3Time *) beaconInterval)->obj;
    } else if (PyObject_IsInstance(beaconInterval, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        beaconInterval2 = *((PyNs3TracedValue__Ns3Time *) beaconInterval)->obj;
    } else if (PyObject_IsInstance(beaconInterval, (PyObject*) &PyNs3Scalar_Type)) {
        beaconInterval2 = *((PyNs3Scalar *) beaconInterval)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", beaconInterval->ob_type->tp_name);
        return NULL;
    }
    self->obj->NotifyBeaconSent(interface, beaconInterval2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

static PyMethodDef PyNs3Dot11sPeerManagementProtocol_methods[] = {
    {(char *) "SetPeerLinkStatusCallback", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_SetPeerLinkStatusCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "SetBeaconCollisionAvoidance", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_SetBeaconCollisionAvoidance, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetPeers", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_GetPeers, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsActiveLink", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_IsActiveLink, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetNumberOfLinks", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_GetNumberOfLinks, METH_NOARGS, NULL },
    {(char *) "ReceivePeerLinkFrame", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_ReceivePeerLinkFrame, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "FindPeerLink", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_FindPeerLink, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Report", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_Report, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "ConfigurationMismatch", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_ConfigurationMismatch, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetBeaconTimingElement", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_GetBeaconTimingElement, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "TransmissionFailure", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_TransmissionFailure, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetMeshId", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_SetMeshId, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_DoDispose, METH_NOARGS, NULL },
    {(char *) "GetAddress", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_GetAddress, METH_NOARGS, NULL },
    {(char *) "GetBeaconCollisionAvoidance", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_GetBeaconCollisionAvoidance, METH_NOARGS, NULL },
    {(char *) "GetMeshId", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_GetMeshId, METH_NOARGS, NULL },
    {(char *) "Install", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_Install, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "ResetStats", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_ResetStats, METH_NOARGS, NULL },
    {(char *) "TransmissionSuccess", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_TransmissionSuccess, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "ReceiveBeacon", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_ReceiveBeacon, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyBeaconSent", (PyCFunction) _wrap_PyNs3Dot11sPeerManagementProtocol_NotifyBeaconSent, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3Dot11sPeerManagementProtocol__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3Dot11sPeerManagementProtocol__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3Dot11sPeerManagementProtocol__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3Dot11sPeerManagementProtocol__tp_clear(PyNs3Dot11sPeerManagementProtocol *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::dot11s::PeerManagementProtocol *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3Dot11sPeerManagementProtocol__tp_traverse(PyNs3Dot11sPeerManagementProtocol *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3Dot11sPeerManagementProtocol__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3Dot11sPeerManagementProtocol__tp_dealloc(PyNs3Dot11sPeerManagementProtocol *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3Dot11sPeerManagementProtocol__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Dot11sPeerManagementProtocol__tp_richcompare (PyNs3Dot11sPeerManagementProtocol *PYBINDGEN_UNUSED(self), PyNs3Dot11sPeerManagementProtocol *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Dot11sPeerManagementProtocol_Type)) {
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

PyTypeObject PyNs3Dot11sPeerManagementProtocol_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.dot11s.PeerManagementProtocol",            /* tp_name */
    sizeof(PyNs3Dot11sPeerManagementProtocol),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Dot11sPeerManagementProtocol__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3Dot11sPeerManagementProtocol__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3Dot11sPeerManagementProtocol__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3Dot11sPeerManagementProtocol__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Dot11sPeerManagementProtocol_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3Dot11sPeerManagementProtocol, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Dot11sPeerManagementProtocol__tp_init,             /* tp_init */
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




















pybindgen::TypeMap PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt____typeid_map;



static int
_wrap_PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt____tp_init__0(PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt__ *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::SimpleRefCount< ns3::dot11s::IeBeaconTimingUnit, ns3::empty, ns3::DefaultDeleter<ns3::dot11s::IeBeaconTimingUnit> >();
    return 0;
}

static int
_wrap_PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt____tp_init__1(PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt__ *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt__ *o;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt___Type, &o)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::SimpleRefCount< ns3::dot11s::IeBeaconTimingUnit, ns3::empty, ns3::DefaultDeleter<ns3::dot11s::IeBeaconTimingUnit> >(*((PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt__ *) o)->obj);
    return 0;
}

int _wrap_PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt____tp_init(PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt__ *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt____tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt____tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt___Cleanup(void)
{
    PyObject *py_retval;
    
    ns3::SimpleRefCount< ns3::dot11s::IeBeaconTimingUnit, ns3::empty, ns3::DefaultDeleter<ns3::dot11s::IeBeaconTimingUnit> >::Cleanup();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt____copy__(PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt__ *self)
{

    PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt__ *py_copy;
    py_copy = PyObject_New(PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt__, &PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt___Type);
    py_copy->obj = new ns3::SimpleRefCount< ns3::dot11s::IeBeaconTimingUnit, ns3::empty, ns3::DefaultDeleter<ns3::dot11s::IeBeaconTimingUnit> >(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt___methods[] = {
    {(char *) "Cleanup", (PyCFunction) _wrap_PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt___Cleanup, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt____copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt____tp_dealloc(PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt__ *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::SimpleRefCount< ns3::dot11s::IeBeaconTimingUnit, ns3::empty, ns3::DefaultDeleter<ns3::dot11s::IeBeaconTimingUnit> > *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt____tp_richcompare (PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt__ *PYBINDGEN_UNUSED(self), PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt__ *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt___Type)) {
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

PyTypeObject PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt___Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt__",            /* tp_name */
    sizeof(PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt____tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt____tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt___methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3SimpleRefCount__Ns3Dot11sIeBeaconTimingUnit_Ns3Empty_Ns3DefaultDeleter__lt__ns3Dot11sIeBeaconTimingUnit__gt____tp_init,             /* tp_init */
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


