#include "ns3module.h"

std::map<void*, PyObject*> PyNs3MeshWifiBeacon_wrapper_registry;


static int
_wrap_PyNs3MeshWifiBeacon__tp_init__0(PyNs3MeshWifiBeacon *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3MeshWifiBeacon *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3MeshWifiBeacon_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::MeshWifiBeacon(*((PyNs3MeshWifiBeacon *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3MeshWifiBeacon__tp_init__1(PyNs3MeshWifiBeacon *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Ssid *ssid;
    PyNs3SupportedRates *rates;
    uint64_t us;
    const char *keywords[] = {"ssid", "rates", "us", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!K", (char **) keywords, &PyNs3Ssid_Type, &ssid, &PyNs3SupportedRates_Type, &rates, &us)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::MeshWifiBeacon(*((PyNs3Ssid *) ssid)->obj, *((PyNs3SupportedRates *) rates)->obj, us);
    return 0;
}

int _wrap_PyNs3MeshWifiBeacon__tp_init(PyNs3MeshWifiBeacon *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3MeshWifiBeacon__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3MeshWifiBeacon__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3MeshWifiBeacon_CreatePacket(PyNs3MeshWifiBeacon *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Packet > retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = self->obj->CreatePacket();
    if (!(const_cast<ns3::Packet *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::Packet *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_Packet = NULL;
    } else {
        py_Packet = (PyNs3Packet *) wrapper_lookup_iter->second;
        Py_INCREF(py_Packet);
    }
    
    if (py_Packet == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Packet *> (ns3::PeekPointer (retval)))), &PyNs3Packet_Type);
        py_Packet = PyObject_New(PyNs3Packet, wrapper_type);
        py_Packet->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::Packet *> (ns3::PeekPointer (retval))->Ref();
        py_Packet->obj = const_cast<ns3::Packet *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_Packet->obj] = (PyObject *) py_Packet;
    }
    py_retval = Py_BuildValue((char *) "N", py_Packet);
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiBeacon_GetBeaconInterval(PyNs3MeshWifiBeacon *self)
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
_wrap_PyNs3MeshWifiBeacon_CreateHeader(PyNs3MeshWifiBeacon *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Mac48Address *address;
    PyNs3Mac48Address *mpAddress;
    const char *keywords[] = {"address", "mpAddress", NULL};
    PyNs3WifiMacHeader *py_WifiMacHeader;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!", (char **) keywords, &PyNs3Mac48Address_Type, &address, &PyNs3Mac48Address_Type, &mpAddress)) {
        return NULL;
    }
    ns3::WifiMacHeader retval = self->obj->CreateHeader(*((PyNs3Mac48Address *) address)->obj, *((PyNs3Mac48Address *) mpAddress)->obj);
    py_WifiMacHeader = PyObject_GC_New(PyNs3WifiMacHeader, &PyNs3WifiMacHeader_Type);
    py_WifiMacHeader->inst_dict = NULL;
    py_WifiMacHeader->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_WifiMacHeader->obj = new ns3::WifiMacHeader(retval);
    PyNs3ObjectBase_wrapper_registry[(void *) py_WifiMacHeader->obj] = (PyObject *) py_WifiMacHeader;
    py_retval = Py_BuildValue((char *) "N", py_WifiMacHeader);
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiBeacon_AddInformationElement(PyNs3MeshWifiBeacon *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3WifiInformationElement *ie;
    ns3::WifiInformationElement *ie_ptr;
    const char *keywords[] = {"ie", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3WifiInformationElement_Type, &ie)) {
        return NULL;
    }
    ie_ptr = (ie ? ie->obj : NULL);
    self->obj->AddInformationElement(ns3::Ptr< ns3::WifiInformationElement  > (ie_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiBeacon_BeaconHeader(PyNs3MeshWifiBeacon *self)
{
    PyObject *py_retval;
    PyNs3MgtBeaconHeader *py_MgtBeaconHeader;
    
    ns3::MgtBeaconHeader retval = self->obj->BeaconHeader();
    py_MgtBeaconHeader = PyObject_GC_New(PyNs3MgtBeaconHeader, &PyNs3MgtBeaconHeader_Type);
    py_MgtBeaconHeader->inst_dict = NULL;
    py_MgtBeaconHeader->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_MgtBeaconHeader->obj = new ns3::MgtBeaconHeader(retval);
    PyNs3ObjectBase_wrapper_registry[(void *) py_MgtBeaconHeader->obj] = (PyObject *) py_MgtBeaconHeader;
    py_retval = Py_BuildValue((char *) "N", py_MgtBeaconHeader);
    return py_retval;
}


static PyObject*
_wrap_PyNs3MeshWifiBeacon__copy__(PyNs3MeshWifiBeacon *self)
{

    PyNs3MeshWifiBeacon *py_copy;
    py_copy = PyObject_New(PyNs3MeshWifiBeacon, &PyNs3MeshWifiBeacon_Type);
    py_copy->obj = new ns3::MeshWifiBeacon(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3MeshWifiBeacon_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3MeshWifiBeacon_methods[] = {
    {(char *) "CreatePacket", (PyCFunction) _wrap_PyNs3MeshWifiBeacon_CreatePacket, METH_NOARGS, NULL },
    {(char *) "GetBeaconInterval", (PyCFunction) _wrap_PyNs3MeshWifiBeacon_GetBeaconInterval, METH_NOARGS, NULL },
    {(char *) "CreateHeader", (PyCFunction) _wrap_PyNs3MeshWifiBeacon_CreateHeader, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "AddInformationElement", (PyCFunction) _wrap_PyNs3MeshWifiBeacon_AddInformationElement, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "BeaconHeader", (PyCFunction) _wrap_PyNs3MeshWifiBeacon_BeaconHeader, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3MeshWifiBeacon__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3MeshWifiBeacon__tp_dealloc(PyNs3MeshWifiBeacon *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3MeshWifiBeacon_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3MeshWifiBeacon_wrapper_registry.end()) {
        PyNs3MeshWifiBeacon_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::MeshWifiBeacon *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3MeshWifiBeacon__tp_richcompare (PyNs3MeshWifiBeacon *PYBINDGEN_UNUSED(self), PyNs3MeshWifiBeacon *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3MeshWifiBeacon_Type)) {
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

PyTypeObject PyNs3MeshWifiBeacon_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.MeshWifiBeacon",            /* tp_name */
    sizeof(PyNs3MeshWifiBeacon),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3MeshWifiBeacon__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3MeshWifiBeacon__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3MeshWifiBeacon_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3MeshWifiBeacon__tp_init,             /* tp_init */
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




pybindgen::TypeMap PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt____typeid_map;



static int
_wrap_PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt____tp_init__0(PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt__ *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::SimpleRefCount< ns3::MeshWifiInterfaceMacPlugin, ns3::empty, ns3::DefaultDeleter<ns3::MeshWifiInterfaceMacPlugin> >();
    return 0;
}

static int
_wrap_PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt____tp_init__1(PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt__ *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt__ *o;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt___Type, &o)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::SimpleRefCount< ns3::MeshWifiInterfaceMacPlugin, ns3::empty, ns3::DefaultDeleter<ns3::MeshWifiInterfaceMacPlugin> >(*((PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt__ *) o)->obj);
    return 0;
}

int _wrap_PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt____tp_init(PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt__ *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt____tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt____tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt___Cleanup(void)
{
    PyObject *py_retval;
    
    ns3::SimpleRefCount< ns3::MeshWifiInterfaceMacPlugin, ns3::empty, ns3::DefaultDeleter<ns3::MeshWifiInterfaceMacPlugin> >::Cleanup();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt____copy__(PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt__ *self)
{

    PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt__ *py_copy;
    py_copy = PyObject_New(PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt__, &PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt___Type);
    py_copy->obj = new ns3::SimpleRefCount< ns3::MeshWifiInterfaceMacPlugin, ns3::empty, ns3::DefaultDeleter<ns3::MeshWifiInterfaceMacPlugin> >(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt___methods[] = {
    {(char *) "Cleanup", (PyCFunction) _wrap_PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt___Cleanup, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt____copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt____tp_dealloc(PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt__ *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::SimpleRefCount< ns3::MeshWifiInterfaceMacPlugin, ns3::empty, ns3::DefaultDeleter<ns3::MeshWifiInterfaceMacPlugin> > *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt____tp_richcompare (PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt__ *PYBINDGEN_UNUSED(self), PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt__ *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt___Type)) {
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

PyTypeObject PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt___Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt__",            /* tp_name */
    sizeof(PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt____tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt____tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt___methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3SimpleRefCount__Ns3MeshWifiInterfaceMacPlugin_Ns3Empty_Ns3DefaultDeleter__lt__ns3MeshWifiInterfaceMacPlugin__gt____tp_init,             /* tp_init */
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
PyNs3MeshInformationElementVector__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3MeshInformationElementVector *self)
{
    PyObject *py_retval;
    PyNs3MeshInformationElementVector__PythonHelper *helper = dynamic_cast< PyNs3MeshInformationElementVector__PythonHelper* >(self->obj);
    
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
PyNs3MeshInformationElementVector__PythonHelper::DeserializeSingleIe(ns3::Buffer::Iterator start)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshInformationElementVector *self_obj_before;
    PyObject *py_retval;
    uint32_t retval;
    PyNs3BufferIterator *py_Iterator;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DeserializeSingleIe"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshInformationElementVector::DeserializeSingleIe(start);
    }
    self_obj_before = reinterpret_cast< PyNs3MeshInformationElementVector* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshInformationElementVector* >(m_pyself)->obj = (ns3::MeshInformationElementVector*) this;
    py_Iterator = PyObject_New(PyNs3BufferIterator, &PyNs3BufferIterator_Type);
    py_Iterator->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Iterator->obj = new ns3::Buffer::Iterator(start);
    PyNs3BufferIterator_wrapper_registry[(void *) py_Iterator->obj] = (PyObject *) py_Iterator;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DeserializeSingleIe", (char *) "N", py_Iterator);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshInformationElementVector* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshInformationElementVector::DeserializeSingleIe(start);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshInformationElementVector* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshInformationElementVector::DeserializeSingleIe(start);
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshInformationElementVector* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

uint32_t
PyNs3MeshInformationElementVector__PythonHelper::Deserialize(ns3::Buffer::Iterator start)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WifiInformationElementVector *self_obj_before;
    PyObject *py_retval;
    uint32_t retval;
    PyNs3BufferIterator *py_Iterator;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Deserialize"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiInformationElementVector::Deserialize(start);
    }
    self_obj_before = reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj = (ns3::WifiInformationElementVector*) this;
    py_Iterator = PyObject_New(PyNs3BufferIterator, &PyNs3BufferIterator_Type);
    py_Iterator->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Iterator->obj = new ns3::Buffer::Iterator(start);
    PyNs3BufferIterator_wrapper_registry[(void *) py_Iterator->obj] = (PyObject *) py_Iterator;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Deserialize", (char *) "N", py_Iterator);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiInformationElementVector::Deserialize(start);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiInformationElementVector::Deserialize(start);
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3MeshInformationElementVector__PythonHelper::Serialize(ns3::Buffer::Iterator start) const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WifiInformationElementVector *self_obj_before;
    PyObject *py_retval;
    PyNs3BufferIterator *py_Iterator;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Serialize"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::WifiInformationElementVector::Serialize(start);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj = const_cast< ns3::WifiInformationElementVector* >((const ns3::WifiInformationElementVector*) this);
    py_Iterator = PyObject_New(PyNs3BufferIterator, &PyNs3BufferIterator_Type);
    py_Iterator->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Iterator->obj = new ns3::Buffer::Iterator(start);
    PyNs3BufferIterator_wrapper_registry[(void *) py_Iterator->obj] = (PyObject *) py_Iterator;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Serialize", (char *) "N", py_Iterator);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


ns3::TypeId
PyNs3MeshInformationElementVector__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WifiInformationElementVector *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiInformationElementVector::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj = const_cast< ns3::WifiInformationElementVector* >((const ns3::WifiInformationElementVector*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiInformationElementVector::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiInformationElementVector::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

uint32_t
PyNs3MeshInformationElementVector__PythonHelper::GetSerializedSize() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WifiInformationElementVector *self_obj_before;
    PyObject *py_retval;
    uint32_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetSerializedSize"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiInformationElementVector::GetSerializedSize();
    }
    self_obj_before = reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj = const_cast< ns3::WifiInformationElementVector* >((const ns3::WifiInformationElementVector*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetSerializedSize", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiInformationElementVector::GetSerializedSize();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiInformationElementVector::GetSerializedSize();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WifiInformationElementVector* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3MeshInformationElementVector__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3MeshInformationElementVector__tp_init__0(PyNs3MeshInformationElementVector *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3MeshInformationElementVector_Type)
    {
        self->obj = new PyNs3MeshInformationElementVector__PythonHelper();
        ((PyNs3MeshInformationElementVector__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::MeshInformationElementVector();
    }
    return 0;
}

static int
_wrap_PyNs3MeshInformationElementVector__tp_init__1(PyNs3MeshInformationElementVector *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3MeshInformationElementVector *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3MeshInformationElementVector_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3MeshInformationElementVector_Type)
    {
        self->obj = new PyNs3MeshInformationElementVector__PythonHelper(*((PyNs3MeshInformationElementVector *) arg0)->obj);
        ((PyNs3MeshInformationElementVector__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::MeshInformationElementVector(*((PyNs3MeshInformationElementVector *) arg0)->obj);
    }
    return 0;
}

int _wrap_PyNs3MeshInformationElementVector__tp_init(PyNs3MeshInformationElementVector *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3MeshInformationElementVector__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3MeshInformationElementVector__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3MeshInformationElementVector_DeserializeSingleIe(PyNs3MeshInformationElementVector *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint32_t retval;
    PyNs3BufferIterator *start;
    PyNs3MeshInformationElementVector__PythonHelper *helper_class = dynamic_cast<PyNs3MeshInformationElementVector__PythonHelper*> (self->obj);
    const char *keywords[] = {"start", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3BufferIterator_Type, &start)) {
        return NULL;
    }
    retval = (helper_class == NULL)? (self->obj->DeserializeSingleIe(*((PyNs3BufferIterator *) start)->obj)) : (self->obj->ns3::MeshInformationElementVector::DeserializeSingleIe(*((PyNs3BufferIterator *) start)->obj));
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


static PyObject*
_wrap_PyNs3MeshInformationElementVector__copy__(PyNs3MeshInformationElementVector *self)
{

    PyNs3MeshInformationElementVector *py_copy;
    py_copy = PyObject_GC_New(PyNs3MeshInformationElementVector, &PyNs3MeshInformationElementVector_Type);
    py_copy->obj = new ns3::MeshInformationElementVector(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3MeshInformationElementVector_methods[] = {
    {(char *) "DeserializeSingleIe", (PyCFunction) _wrap_PyNs3MeshInformationElementVector_DeserializeSingleIe, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3MeshInformationElementVector__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3MeshInformationElementVector__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3MeshInformationElementVector__tp_clear(PyNs3MeshInformationElementVector *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::MeshInformationElementVector *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3MeshInformationElementVector__tp_traverse(PyNs3MeshInformationElementVector *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3MeshInformationElementVector__PythonHelper) )
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3MeshInformationElementVector__tp_dealloc(PyNs3MeshInformationElementVector *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3MeshInformationElementVector__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3MeshInformationElementVector__tp_richcompare (PyNs3MeshInformationElementVector *PYBINDGEN_UNUSED(self), PyNs3MeshInformationElementVector *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3MeshInformationElementVector_Type)) {
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

PyTypeObject PyNs3MeshInformationElementVector_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.MeshInformationElementVector",            /* tp_name */
    sizeof(PyNs3MeshInformationElementVector),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3MeshInformationElementVector__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3MeshInformationElementVector__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3MeshInformationElementVector__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3MeshInformationElementVector__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3MeshInformationElementVector_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3MeshInformationElementVector, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3MeshInformationElementVector__tp_init,             /* tp_init */
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
_wrap_PyNs3MeshL2RoutingProtocol__tp_init(void)
{
    PyErr_SetString(PyExc_TypeError, "class 'MeshL2RoutingProtocol' cannot be constructed (have pure virtual methods but no helper class)");
    return -1;
}


PyObject *
_wrap_PyNs3MeshL2RoutingProtocol_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::MeshL2RoutingProtocol::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshL2RoutingProtocol_GetMeshPoint(PyNs3MeshL2RoutingProtocol *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::MeshPointDevice > retval;
    PyNs3MeshPointDevice *py_MeshPointDevice;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = self->obj->GetMeshPoint();
    if (!(const_cast<ns3::MeshPointDevice *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::MeshPointDevice *> (ns3::PeekPointer (retval)))) == typeid(PyNs3MeshPointDevice__PythonHelper))
    {
        py_MeshPointDevice = reinterpret_cast< PyNs3MeshPointDevice* >(reinterpret_cast< PyNs3MeshPointDevice__PythonHelper* >(const_cast<ns3::MeshPointDevice *> (ns3::PeekPointer (retval)))->m_pyself);
        py_MeshPointDevice->obj = const_cast<ns3::MeshPointDevice *> (ns3::PeekPointer (retval));
        Py_INCREF(py_MeshPointDevice);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::MeshPointDevice *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_MeshPointDevice = NULL;
        } else {
            py_MeshPointDevice = (PyNs3MeshPointDevice *) wrapper_lookup_iter->second;
            Py_INCREF(py_MeshPointDevice);
        }
    
        if (py_MeshPointDevice == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::MeshPointDevice *> (ns3::PeekPointer (retval)))), &PyNs3MeshPointDevice_Type);
            py_MeshPointDevice = PyObject_GC_New(PyNs3MeshPointDevice, wrapper_type);
            py_MeshPointDevice->inst_dict = NULL;
            py_MeshPointDevice->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::MeshPointDevice *> (ns3::PeekPointer (retval))->Ref();
            py_MeshPointDevice->obj = const_cast<ns3::MeshPointDevice *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_MeshPointDevice->obj] = (PyObject *) py_MeshPointDevice;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_MeshPointDevice);
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshL2RoutingProtocol_RequestRoute(PyNs3MeshL2RoutingProtocol *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3MeshL2RoutingProtocol_SetMeshPoint(PyNs3MeshL2RoutingProtocol *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3MeshPointDevice *mp;
    ns3::MeshPointDevice *mp_ptr;
    const char *keywords[] = {"mp", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3MeshPointDevice_Type, &mp)) {
        return NULL;
    }
    mp_ptr = (mp ? mp->obj : NULL);
    self->obj->SetMeshPoint(ns3::Ptr< ns3::MeshPointDevice  > (mp_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

static PyMethodDef PyNs3MeshL2RoutingProtocol_methods[] = {
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3MeshL2RoutingProtocol_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "GetMeshPoint", (PyCFunction) _wrap_PyNs3MeshL2RoutingProtocol_GetMeshPoint, METH_NOARGS, NULL },
    {(char *) "RequestRoute", (PyCFunction) _wrap_PyNs3MeshL2RoutingProtocol_RequestRoute, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetMeshPoint", (PyCFunction) _wrap_PyNs3MeshL2RoutingProtocol_SetMeshPoint, METH_KEYWORDS|METH_VARARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3MeshL2RoutingProtocol__tp_clear(PyNs3MeshL2RoutingProtocol *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::MeshL2RoutingProtocol *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3MeshL2RoutingProtocol__tp_traverse(PyNs3MeshL2RoutingProtocol *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    return 0;
}


static void
_wrap_PyNs3MeshL2RoutingProtocol__tp_dealloc(PyNs3MeshL2RoutingProtocol *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3MeshL2RoutingProtocol__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3MeshL2RoutingProtocol__tp_richcompare (PyNs3MeshL2RoutingProtocol *PYBINDGEN_UNUSED(self), PyNs3MeshL2RoutingProtocol *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3MeshL2RoutingProtocol_Type)) {
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

PyTypeObject PyNs3MeshL2RoutingProtocol_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.MeshL2RoutingProtocol",            /* tp_name */
    sizeof(PyNs3MeshL2RoutingProtocol),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3MeshL2RoutingProtocol__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3MeshL2RoutingProtocol__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3MeshL2RoutingProtocol__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3MeshL2RoutingProtocol__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3MeshL2RoutingProtocol_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3MeshL2RoutingProtocol, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3MeshL2RoutingProtocol__tp_init,             /* tp_init */
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
_wrap_PyNs3MeshWifiInterfaceMacPlugin__tp_init(void)
{
    PyErr_SetString(PyExc_TypeError, "class 'MeshWifiInterfaceMacPlugin' cannot be constructed (have pure virtual methods but no helper class)");
    return -1;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMacPlugin_Receive(PyNs3MeshWifiInterfaceMacPlugin *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    PyNs3WifiMacHeader *header;
    const char *keywords[] = {"packet", "header", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!", (char **) keywords, &PyNs3Packet_Type, &packet, &PyNs3WifiMacHeader_Type, &header)) {
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    retval = self->obj->Receive(ns3::Ptr< ns3::Packet  > (packet_ptr), *((PyNs3WifiMacHeader *) header)->obj);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMacPlugin_SetParent(PyNs3MeshWifiInterfaceMacPlugin *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3MeshWifiInterfaceMac *parent;
    ns3::MeshWifiInterfaceMac *parent_ptr;
    const char *keywords[] = {"parent", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3MeshWifiInterfaceMac_Type, &parent)) {
        return NULL;
    }
    parent_ptr = (parent ? parent->obj : NULL);
    self->obj->SetParent(ns3::Ptr< ns3::MeshWifiInterfaceMac  > (parent_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMacPlugin_UpdateBeacon(PyNs3MeshWifiInterfaceMacPlugin *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3MeshWifiBeacon *beacon;
    const char *keywords[] = {"beacon", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3MeshWifiBeacon_Type, &beacon)) {
        return NULL;
    }
    self->obj->UpdateBeacon(*((PyNs3MeshWifiBeacon *) beacon)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMacPlugin_UpdateOutcomingFrame(PyNs3MeshWifiInterfaceMacPlugin *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    PyNs3WifiMacHeader *header;
    PyNs3Mac48Address *from;
    PyNs3Mac48Address *to;
    const char *keywords[] = {"packet", "header", "from", "to", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!O!O!", (char **) keywords, &PyNs3Packet_Type, &packet, &PyNs3WifiMacHeader_Type, &header, &PyNs3Mac48Address_Type, &from, &PyNs3Mac48Address_Type, &to)) {
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    retval = self->obj->UpdateOutcomingFrame(ns3::Ptr< ns3::Packet  > (packet_ptr), *((PyNs3WifiMacHeader *) header)->obj, *((PyNs3Mac48Address *) from)->obj, *((PyNs3Mac48Address *) to)->obj);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}

static PyMethodDef PyNs3MeshWifiInterfaceMacPlugin_methods[] = {
    {(char *) "Receive", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMacPlugin_Receive, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetParent", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMacPlugin_SetParent, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "UpdateBeacon", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMacPlugin_UpdateBeacon, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "UpdateOutcomingFrame", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMacPlugin_UpdateOutcomingFrame, METH_KEYWORDS|METH_VARARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3MeshWifiInterfaceMacPlugin__tp_dealloc(PyNs3MeshWifiInterfaceMacPlugin *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::MeshWifiInterfaceMacPlugin *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3MeshWifiInterfaceMacPlugin__tp_richcompare (PyNs3MeshWifiInterfaceMacPlugin *PYBINDGEN_UNUSED(self), PyNs3MeshWifiInterfaceMacPlugin *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3MeshWifiInterfaceMacPlugin_Type)) {
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

PyTypeObject PyNs3MeshWifiInterfaceMacPlugin_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.MeshWifiInterfaceMacPlugin",            /* tp_name */
    sizeof(PyNs3MeshWifiInterfaceMacPlugin),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3MeshWifiInterfaceMacPlugin__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3MeshWifiInterfaceMacPlugin__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3MeshWifiInterfaceMacPlugin_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3MeshWifiInterfaceMacPlugin__tp_init,             /* tp_init */
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
PyNs3MeshPointDevice__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    PyNs3MeshPointDevice__PythonHelper *helper = dynamic_cast< PyNs3MeshPointDevice__PythonHelper* >(self->obj);
    
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
PyNs3MeshPointDevice__PythonHelper::_wrap_NotifyNewAggregate(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    PyNs3MeshPointDevice__PythonHelper *helper = dynamic_cast< PyNs3MeshPointDevice__PythonHelper* >(self->obj);
    
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
PyNs3MeshPointDevice__PythonHelper::_wrap_DoStart(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    PyNs3MeshPointDevice__PythonHelper *helper = dynamic_cast< PyNs3MeshPointDevice__PythonHelper* >(self->obj);
    
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
PyNs3MeshPointDevice__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::MeshPointDevice::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = (ns3::MeshPointDevice*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Address
PyNs3MeshPointDevice__PythonHelper::GetAddress() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Address *tmp_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetAddress"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetAddress();
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = const_cast< ns3::MeshPointDevice* >((const ns3::MeshPointDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetAddress", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetAddress();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Address_Type, &tmp_Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetAddress();
    }
    ns3::Address retval = *tmp_Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Address
PyNs3MeshPointDevice__PythonHelper::GetBroadcast() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Address *tmp_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetBroadcast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetBroadcast();
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = const_cast< ns3::MeshPointDevice* >((const ns3::MeshPointDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetBroadcast", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetBroadcast();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Address_Type, &tmp_Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetBroadcast();
    }
    ns3::Address retval = *tmp_Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::Channel >
PyNs3MeshPointDevice__PythonHelper::GetChannel() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::Channel > retval;
    PyNs3Channel *tmp_Channel;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetChannel"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetChannel();
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = const_cast< ns3::MeshPointDevice* >((const ns3::MeshPointDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetChannel", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetChannel();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Channel_Type, &tmp_Channel)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetChannel();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::Channel  > (tmp_Channel->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

uint32_t
PyNs3MeshPointDevice__PythonHelper::GetIfIndex() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    uint32_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetIfIndex"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetIfIndex();
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = const_cast< ns3::MeshPointDevice* >((const ns3::MeshPointDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetIfIndex", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetIfIndex();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetIfIndex();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

uint16_t
PyNs3MeshPointDevice__PythonHelper::GetMtu() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    uint16_t retval;
    int tmp;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetMtu"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetMtu();
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = const_cast< ns3::MeshPointDevice* >((const ns3::MeshPointDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetMtu", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetMtu();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "i", &tmp)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetMtu();
    }
    if (tmp > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetMtu();
    }
    retval = tmp;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Address
PyNs3MeshPointDevice__PythonHelper::GetMulticast(ns3::Ipv4Address multicastGroup) const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Ipv4Address *py_Ipv4Address;
    PyNs3Address *tmp_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetMulticast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetMulticast(multicastGroup);
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = const_cast< ns3::MeshPointDevice* >((const ns3::MeshPointDevice*) this);
    py_Ipv4Address = PyObject_New(PyNs3Ipv4Address, &PyNs3Ipv4Address_Type);
    py_Ipv4Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ipv4Address->obj = new ns3::Ipv4Address(multicastGroup);
    PyNs3Ipv4Address_wrapper_registry[(void *) py_Ipv4Address->obj] = (PyObject *) py_Ipv4Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetMulticast", (char *) "N", py_Ipv4Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetMulticast(multicastGroup);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Address_Type, &tmp_Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetMulticast(multicastGroup);
    }
    ns3::Address retval = *tmp_Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Address
PyNs3MeshPointDevice__PythonHelper::GetMulticast(ns3::Ipv6Address addr) const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Ipv6Address *py_Ipv6Address;
    PyNs3Address *tmp_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetMulticast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetMulticast(addr);
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = const_cast< ns3::MeshPointDevice* >((const ns3::MeshPointDevice*) this);
    py_Ipv6Address = PyObject_New(PyNs3Ipv6Address, &PyNs3Ipv6Address_Type);
    py_Ipv6Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ipv6Address->obj = new ns3::Ipv6Address(addr);
    PyNs3Ipv6Address_wrapper_registry[(void *) py_Ipv6Address->obj] = (PyObject *) py_Ipv6Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetMulticast", (char *) "N", py_Ipv6Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetMulticast(addr);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Address_Type, &tmp_Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetMulticast(addr);
    }
    ns3::Address retval = *tmp_Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::Node >
PyNs3MeshPointDevice__PythonHelper::GetNode() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::Node > retval;
    PyNs3Node *tmp_Node;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetNode"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetNode();
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = const_cast< ns3::MeshPointDevice* >((const ns3::MeshPointDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetNode", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetNode();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Node_Type, &tmp_Node)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::GetNode();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::Node  > (tmp_Node->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3MeshPointDevice__PythonHelper::IsBridge() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsBridge"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::IsBridge();
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = const_cast< ns3::MeshPointDevice* >((const ns3::MeshPointDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsBridge", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::IsBridge();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::IsBridge();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3MeshPointDevice__PythonHelper::IsBroadcast() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsBroadcast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::IsBroadcast();
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = const_cast< ns3::MeshPointDevice* >((const ns3::MeshPointDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsBroadcast", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::IsBroadcast();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::IsBroadcast();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3MeshPointDevice__PythonHelper::IsLinkUp() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsLinkUp"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::IsLinkUp();
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = const_cast< ns3::MeshPointDevice* >((const ns3::MeshPointDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsLinkUp", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::IsLinkUp();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::IsLinkUp();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3MeshPointDevice__PythonHelper::IsMulticast() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsMulticast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::IsMulticast();
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = const_cast< ns3::MeshPointDevice* >((const ns3::MeshPointDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsMulticast", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::IsMulticast();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::IsMulticast();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3MeshPointDevice__PythonHelper::IsPointToPoint() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsPointToPoint"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::IsPointToPoint();
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = const_cast< ns3::MeshPointDevice* >((const ns3::MeshPointDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsPointToPoint", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::IsPointToPoint();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::IsPointToPoint();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3MeshPointDevice__PythonHelper::NeedsArp() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NeedsArp"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::NeedsArp();
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = const_cast< ns3::MeshPointDevice* >((const ns3::MeshPointDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NeedsArp", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::NeedsArp();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::NeedsArp();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3MeshPointDevice__PythonHelper::Send(ns3::Ptr< ns3::Packet > packet, ns3::Address const & dest, uint16_t protocolNumber)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
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
        return ns3::MeshPointDevice::Send(packet, dest, protocolNumber);
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = (ns3::MeshPointDevice*) this;
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
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::Send(packet, dest, protocolNumber);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::Send(packet, dest, protocolNumber);
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3MeshPointDevice__PythonHelper::SendFrom(ns3::Ptr< ns3::Packet > packet, ns3::Address const & source, ns3::Address const & dest, uint16_t protocolNumber)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
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
        return ns3::MeshPointDevice::SendFrom(packet, source, dest, protocolNumber);
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = (ns3::MeshPointDevice*) this;
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
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::SendFrom(packet, source, dest, protocolNumber);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::SendFrom(packet, source, dest, protocolNumber);
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3MeshPointDevice__PythonHelper::SetAddress(ns3::Address a)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Address *py_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetAddress"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::MeshPointDevice::SetAddress(a);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = (ns3::MeshPointDevice*) this;
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(a);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetAddress", (char *) "N", py_Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MeshPointDevice__PythonHelper::SetIfIndex(uint32_t const index)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetIfIndex"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::MeshPointDevice::SetIfIndex(index);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = (ns3::MeshPointDevice*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetIfIndex", (char *) "N", PyLong_FromUnsignedLong(index));
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

bool
PyNs3MeshPointDevice__PythonHelper::SetMtu(uint16_t const mtu)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetMtu"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::SetMtu(mtu);
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = (ns3::MeshPointDevice*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetMtu", (char *) "i", (int) mtu);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::SetMtu(mtu);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::SetMtu(mtu);
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3MeshPointDevice__PythonHelper::SetNode(ns3::Ptr< ns3::Node > node)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Node *py_Node;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetNode"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::MeshPointDevice::SetNode(node);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = (ns3::MeshPointDevice*) this;
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
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}



bool
PyNs3MeshPointDevice__PythonHelper::SupportsSendFrom() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshPointDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SupportsSendFrom"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::SupportsSendFrom();
    }
    self_obj_before = reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = const_cast< ns3::MeshPointDevice* >((const ns3::MeshPointDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SupportsSendFrom", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::SupportsSendFrom();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshPointDevice::SupportsSendFrom();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshPointDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::TypeId
PyNs3MeshPointDevice__PythonHelper::GetInstanceTypeId() const
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
PyNs3MeshPointDevice__PythonHelper::DoStart()
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
PyNs3MeshPointDevice__PythonHelper::NotifyNewAggregate()
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
PyNs3MeshPointDevice__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3MeshPointDevice__tp_init__0(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3MeshPointDevice *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3MeshPointDevice_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3MeshPointDevice_Type)
    {
        self->obj = new PyNs3MeshPointDevice__PythonHelper(*((PyNs3MeshPointDevice *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3MeshPointDevice__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::MeshPointDevice(*((PyNs3MeshPointDevice *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3MeshPointDevice__tp_init__1(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3MeshPointDevice_Type)
    {
        self->obj = new PyNs3MeshPointDevice__PythonHelper();
        self->obj->Ref ();
        ((PyNs3MeshPointDevice__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::MeshPointDevice();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3MeshPointDevice__tp_init(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3MeshPointDevice__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3MeshPointDevice__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3MeshPointDevice_GetNInterfaces(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetNInterfaces();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}



PyObject *
_wrap_PyNs3MeshPointDevice_GetMulticast__0(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Ipv4Address *multicastGroup;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"multicastGroup", NULL};
    PyNs3Address *py_Address;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv4Address_Type, &multicastGroup)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::Address retval = (helper_class == NULL)? (self->obj->GetMulticast(*((PyNs3Ipv4Address *) multicastGroup)->obj)) : (self->obj->ns3::MeshPointDevice::GetMulticast(*((PyNs3Ipv4Address *) multicastGroup)->obj));
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}

PyObject *
_wrap_PyNs3MeshPointDevice_GetMulticast__1(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Ipv6Address *addr;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
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
    ns3::Address retval = (helper_class == NULL)? (self->obj->GetMulticast(*((PyNs3Ipv6Address *) addr)->obj)) : (self->obj->ns3::MeshPointDevice::GetMulticast(*((PyNs3Ipv6Address *) addr)->obj));
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}

PyObject * _wrap_PyNs3MeshPointDevice_GetMulticast(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3MeshPointDevice_GetMulticast__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3MeshPointDevice_GetMulticast__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3MeshPointDevice_IsPointToPoint(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsPointToPoint()) : (self->obj->ns3::MeshPointDevice::IsPointToPoint());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::MeshPointDevice::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_Send(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    PyObject *dest;
    ns3::Address dest2;
    int protocolNumber;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
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
    retval = (helper_class == NULL)? (self->obj->Send(ns3::Ptr< ns3::Packet  > (packet_ptr), dest2, protocolNumber)) : (self->obj->ns3::MeshPointDevice::Send(ns3::Ptr< ns3::Packet  > (packet_ptr), dest2, protocolNumber));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_GetIfIndex(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    uint32_t retval;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->GetIfIndex()) : (self->obj->ns3::MeshPointDevice::GetIfIndex());
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_NeedsArp(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->NeedsArp()) : (self->obj->ns3::MeshPointDevice::NeedsArp());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_AddInterface(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3NetDevice *port;
    ns3::NetDevice *port_ptr;
    const char *keywords[] = {"port", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3NetDevice_Type, &port)) {
        return NULL;
    }
    port_ptr = (port ? port->obj : NULL);
    self->obj->AddInterface(ns3::Ptr< ns3::NetDevice  > (port_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_SetPromiscReceiveCallback(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *cb;
    ns3::Ptr<PythonCallbackImpl28> cb_cb_impl;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &cb)) {
        return NULL;
    }
    if (!PyCallable_Check(cb)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'cb' must be callbale");
        return NULL;
    }
    cb_cb_impl = ns3::Create<PythonCallbackImpl28> (cb);
    (helper_class == NULL)? (self->obj->SetPromiscReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::Address const&, ns3::NetDevice::PacketType, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl))) : (self->obj->ns3::MeshPointDevice::SetPromiscReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::Address const&, ns3::NetDevice::PacketType, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_GetNode(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Node > retval;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    PyNs3Node *py_Node;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetNode()) : (self->obj->ns3::MeshPointDevice::GetNode());
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
_wrap_PyNs3MeshPointDevice_SendFrom(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs)
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
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
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
    retval = (helper_class == NULL)? (self->obj->SendFrom(ns3::Ptr< ns3::Packet  > (packet_ptr), source2, dest2, protocolNumber)) : (self->obj->ns3::MeshPointDevice::SendFrom(ns3::Ptr< ns3::Packet  > (packet_ptr), source2, dest2, protocolNumber));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_IsBroadcast(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsBroadcast()) : (self->obj->ns3::MeshPointDevice::IsBroadcast());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_GetMtu(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    uint16_t retval;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->GetMtu()) : (self->obj->ns3::MeshPointDevice::GetMtu());
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_IsBridge(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsBridge()) : (self->obj->ns3::MeshPointDevice::IsBridge());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_Report(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3MeshPointDevice_SetNode(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Node *node;
    ns3::Node *node_ptr;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"node", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Node_Type, &node)) {
        return NULL;
    }
    node_ptr = (node ? node->obj : NULL);
    (helper_class == NULL)? (self->obj->SetNode(ns3::Ptr< ns3::Node  > (node_ptr))) : (self->obj->ns3::MeshPointDevice::SetNode(ns3::Ptr< ns3::Node  > (node_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_DoDispose(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    
    (helper_class == NULL)? (self->obj->DoDispose()) : (self->obj->ns3::MeshPointDevice::DoDispose());
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_GetAddress(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    PyNs3Address *py_Address;
    
    ns3::Address retval = (helper_class == NULL)? (self->obj->GetAddress()) : (self->obj->ns3::MeshPointDevice::GetAddress());
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_IsLinkUp(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsLinkUp()) : (self->obj->ns3::MeshPointDevice::IsLinkUp());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_SetRoutingProtocol(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3MeshL2RoutingProtocol *protocol;
    ns3::MeshL2RoutingProtocol *protocol_ptr;
    const char *keywords[] = {"protocol", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3MeshL2RoutingProtocol_Type, &protocol)) {
        return NULL;
    }
    protocol_ptr = (protocol ? protocol->obj : NULL);
    self->obj->SetRoutingProtocol(ns3::Ptr< ns3::MeshL2RoutingProtocol  > (protocol_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_SetIfIndex(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int index;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"index", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &index)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->SetIfIndex(index)) : (self->obj->ns3::MeshPointDevice::SetIfIndex(index));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_SetAddress(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *a;
    ns3::Address a2;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"a", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &a)) {
        return NULL;
    }
    if (PyObject_IsInstance(a, (PyObject*) &PyNs3Address_Type)) {
        a2 = *((PyNs3Address *) a)->obj;
    } else if (PyObject_IsInstance(a, (PyObject*) &PyNs3Inet6SocketAddress_Type)) {
        a2 = *((PyNs3Inet6SocketAddress *) a)->obj;
    } else if (PyObject_IsInstance(a, (PyObject*) &PyNs3InetSocketAddress_Type)) {
        a2 = *((PyNs3InetSocketAddress *) a)->obj;
    } else if (PyObject_IsInstance(a, (PyObject*) &PyNs3Ipv4Address_Type)) {
        a2 = *((PyNs3Ipv4Address *) a)->obj;
    } else if (PyObject_IsInstance(a, (PyObject*) &PyNs3Ipv6Address_Type)) {
        a2 = *((PyNs3Ipv6Address *) a)->obj;
    } else if (PyObject_IsInstance(a, (PyObject*) &PyNs3Mac48Address_Type)) {
        a2 = *((PyNs3Mac48Address *) a)->obj;
    } else if (PyObject_IsInstance(a, (PyObject*) &PyNs3Mac64Address_Type)) {
        a2 = *((PyNs3Mac64Address *) a)->obj;
    } else if (PyObject_IsInstance(a, (PyObject*) &PyNs3PacketSocketAddress_Type)) {
        a2 = *((PyNs3PacketSocketAddress *) a)->obj;
    } else if (PyObject_IsInstance(a, (PyObject*) &PyNs3UanAddress_Type)) {
        a2 = *((PyNs3UanAddress *) a)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Address, Inet6SocketAddress, InetSocketAddress, Ipv4Address, Ipv6Address, Mac48Address, Mac64Address, PacketSocketAddress, UanAddress), not %s", a->ob_type->tp_name);
        return NULL;
    }
    (helper_class == NULL)? (self->obj->SetAddress(a2)) : (self->obj->ns3::MeshPointDevice::SetAddress(a2));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_ResetStats(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    
    self->obj->ResetStats();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_GetBroadcast(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    PyNs3Address *py_Address;
    
    ns3::Address retval = (helper_class == NULL)? (self->obj->GetBroadcast()) : (self->obj->ns3::MeshPointDevice::GetBroadcast());
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_GetRoutingProtocol(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::MeshL2RoutingProtocol > retval;
    PyNs3MeshL2RoutingProtocol *py_MeshL2RoutingProtocol;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = self->obj->GetRoutingProtocol();
    if (!(const_cast<ns3::MeshL2RoutingProtocol *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::MeshL2RoutingProtocol *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_MeshL2RoutingProtocol = NULL;
    } else {
        py_MeshL2RoutingProtocol = (PyNs3MeshL2RoutingProtocol *) wrapper_lookup_iter->second;
        Py_INCREF(py_MeshL2RoutingProtocol);
    }
    
    if (py_MeshL2RoutingProtocol == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::MeshL2RoutingProtocol *> (ns3::PeekPointer (retval)))), &PyNs3MeshL2RoutingProtocol_Type);
        py_MeshL2RoutingProtocol = PyObject_GC_New(PyNs3MeshL2RoutingProtocol, wrapper_type);
        py_MeshL2RoutingProtocol->inst_dict = NULL;
        py_MeshL2RoutingProtocol->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::MeshL2RoutingProtocol *> (ns3::PeekPointer (retval))->Ref();
        py_MeshL2RoutingProtocol->obj = const_cast<ns3::MeshL2RoutingProtocol *> (ns3::PeekPointer (retval));
        PyNs3ObjectBase_wrapper_registry[(void *) py_MeshL2RoutingProtocol->obj] = (PyObject *) py_MeshL2RoutingProtocol;
    }
    py_retval = Py_BuildValue((char *) "N", py_MeshL2RoutingProtocol);
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_AddLinkChangeCallback(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *callback;
    ns3::Ptr<PythonCallbackImpl0> callback_cb_impl;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"callback", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &callback)) {
        return NULL;
    }
    if (!PyCallable_Check(callback)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'callback' must be callbale");
        return NULL;
    }
    callback_cb_impl = ns3::Create<PythonCallbackImpl0> (callback);
    (helper_class == NULL)? (self->obj->AddLinkChangeCallback(ns3::Callback<void, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (callback_cb_impl))) : (self->obj->ns3::MeshPointDevice::AddLinkChangeCallback(ns3::Callback<void, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (callback_cb_impl)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_SetReceiveCallback(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *cb;
    ns3::Ptr<PythonCallbackImpl29> cb_cb_impl;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &cb)) {
        return NULL;
    }
    if (!PyCallable_Check(cb)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'cb' must be callbale");
        return NULL;
    }
    cb_cb_impl = ns3::Create<PythonCallbackImpl29> (cb);
    (helper_class == NULL)? (self->obj->SetReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl))) : (self->obj->ns3::MeshPointDevice::SetReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_IsMulticast(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsMulticast()) : (self->obj->ns3::MeshPointDevice::IsMulticast());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_SetMtu(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    int mtu;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"mtu", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &mtu)) {
        return NULL;
    }
    if (mtu > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    retval = (helper_class == NULL)? (self->obj->SetMtu(mtu)) : (self->obj->ns3::MeshPointDevice::SetMtu(mtu));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_SupportsSendFrom(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->SupportsSendFrom()) : (self->obj->ns3::MeshPointDevice::SupportsSendFrom());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshPointDevice_GetChannel(PyNs3MeshPointDevice *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Channel > retval;
    PyNs3MeshPointDevice__PythonHelper *helper_class = dynamic_cast<PyNs3MeshPointDevice__PythonHelper*> (self->obj);
    PyNs3Channel *py_Channel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetChannel()) : (self->obj->ns3::MeshPointDevice::GetChannel());
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
_wrap_PyNs3MeshPointDevice_GetInterface(PyNs3MeshPointDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::NetDevice > retval;
    unsigned int id;
    const char *keywords[] = {"id", NULL};
    PyNs3NetDevice *py_NetDevice;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &id)) {
        return NULL;
    }
    retval = self->obj->GetInterface(id);
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


static PyObject*
_wrap_PyNs3MeshPointDevice__copy__(PyNs3MeshPointDevice *self)
{

    PyNs3MeshPointDevice *py_copy;
    py_copy = PyObject_GC_New(PyNs3MeshPointDevice, &PyNs3MeshPointDevice_Type);
    py_copy->obj = new ns3::MeshPointDevice(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3MeshPointDevice_methods[] = {
    {(char *) "GetNInterfaces", (PyCFunction) _wrap_PyNs3MeshPointDevice_GetNInterfaces, METH_NOARGS, NULL },
    {(char *) "GetMulticast", (PyCFunction) _wrap_PyNs3MeshPointDevice_GetMulticast, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsPointToPoint", (PyCFunction) _wrap_PyNs3MeshPointDevice_IsPointToPoint, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3MeshPointDevice_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Send", (PyCFunction) _wrap_PyNs3MeshPointDevice_Send, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetIfIndex", (PyCFunction) _wrap_PyNs3MeshPointDevice_GetIfIndex, METH_NOARGS, NULL },
    {(char *) "NeedsArp", (PyCFunction) _wrap_PyNs3MeshPointDevice_NeedsArp, METH_NOARGS, NULL },
    {(char *) "AddInterface", (PyCFunction) _wrap_PyNs3MeshPointDevice_AddInterface, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetPromiscReceiveCallback", (PyCFunction) _wrap_PyNs3MeshPointDevice_SetPromiscReceiveCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetNode", (PyCFunction) _wrap_PyNs3MeshPointDevice_GetNode, METH_NOARGS, NULL },
    {(char *) "SendFrom", (PyCFunction) _wrap_PyNs3MeshPointDevice_SendFrom, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsBroadcast", (PyCFunction) _wrap_PyNs3MeshPointDevice_IsBroadcast, METH_NOARGS, NULL },
    {(char *) "GetMtu", (PyCFunction) _wrap_PyNs3MeshPointDevice_GetMtu, METH_NOARGS, NULL },
    {(char *) "IsBridge", (PyCFunction) _wrap_PyNs3MeshPointDevice_IsBridge, METH_NOARGS, NULL },
    {(char *) "Report", (PyCFunction) _wrap_PyNs3MeshPointDevice_Report, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetNode", (PyCFunction) _wrap_PyNs3MeshPointDevice_SetNode, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) _wrap_PyNs3MeshPointDevice_DoDispose, METH_NOARGS, NULL },
    {(char *) "GetAddress", (PyCFunction) _wrap_PyNs3MeshPointDevice_GetAddress, METH_NOARGS, NULL },
    {(char *) "IsLinkUp", (PyCFunction) _wrap_PyNs3MeshPointDevice_IsLinkUp, METH_NOARGS, NULL },
    {(char *) "SetRoutingProtocol", (PyCFunction) _wrap_PyNs3MeshPointDevice_SetRoutingProtocol, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetIfIndex", (PyCFunction) _wrap_PyNs3MeshPointDevice_SetIfIndex, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetAddress", (PyCFunction) _wrap_PyNs3MeshPointDevice_SetAddress, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "ResetStats", (PyCFunction) _wrap_PyNs3MeshPointDevice_ResetStats, METH_NOARGS, NULL },
    {(char *) "GetBroadcast", (PyCFunction) _wrap_PyNs3MeshPointDevice_GetBroadcast, METH_NOARGS, NULL },
    {(char *) "GetRoutingProtocol", (PyCFunction) _wrap_PyNs3MeshPointDevice_GetRoutingProtocol, METH_NOARGS, NULL },
    {(char *) "AddLinkChangeCallback", (PyCFunction) _wrap_PyNs3MeshPointDevice_AddLinkChangeCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetReceiveCallback", (PyCFunction) _wrap_PyNs3MeshPointDevice_SetReceiveCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsMulticast", (PyCFunction) _wrap_PyNs3MeshPointDevice_IsMulticast, METH_NOARGS, NULL },
    {(char *) "SetMtu", (PyCFunction) _wrap_PyNs3MeshPointDevice_SetMtu, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SupportsSendFrom", (PyCFunction) _wrap_PyNs3MeshPointDevice_SupportsSendFrom, METH_NOARGS, NULL },
    {(char *) "GetChannel", (PyCFunction) _wrap_PyNs3MeshPointDevice_GetChannel, METH_NOARGS, NULL },
    {(char *) "GetInterface", (PyCFunction) _wrap_PyNs3MeshPointDevice_GetInterface, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3MeshPointDevice__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3MeshPointDevice__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3MeshPointDevice__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3MeshPointDevice__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3MeshPointDevice__tp_clear(PyNs3MeshPointDevice *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::MeshPointDevice *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3MeshPointDevice__tp_traverse(PyNs3MeshPointDevice *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3MeshPointDevice__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3MeshPointDevice__tp_dealloc(PyNs3MeshPointDevice *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3MeshPointDevice__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3MeshPointDevice__tp_richcompare (PyNs3MeshPointDevice *PYBINDGEN_UNUSED(self), PyNs3MeshPointDevice *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3MeshPointDevice_Type)) {
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

PyTypeObject PyNs3MeshPointDevice_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.MeshPointDevice",            /* tp_name */
    sizeof(PyNs3MeshPointDevice),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3MeshPointDevice__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3MeshPointDevice__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3MeshPointDevice__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3MeshPointDevice__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3MeshPointDevice_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3MeshPointDevice, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3MeshPointDevice__tp_init,             /* tp_init */
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
PyNs3MeshWifiInterfaceMac__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3MeshWifiInterfaceMac *self)
{
    PyObject *py_retval;
    PyNs3MeshWifiInterfaceMac__PythonHelper *helper = dynamic_cast< PyNs3MeshWifiInterfaceMac__PythonHelper* >(self->obj);
    
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
PyNs3MeshWifiInterfaceMac__PythonHelper::_wrap_TxOk(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3WifiMacHeader *hdr;
    PyNs3MeshWifiInterfaceMac__PythonHelper *helper = dynamic_cast< PyNs3MeshWifiInterfaceMac__PythonHelper* >(self->obj);
    const char *keywords[] = {"hdr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3WifiMacHeader_Type, &hdr)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method TxOk of class RegularWifiMac is protected and can only be called by a subclass");
        return NULL;
    }
    helper->TxOk__parent_caller(*((PyNs3WifiMacHeader *) hdr)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3MeshWifiInterfaceMac__PythonHelper::_wrap_NotifyNewAggregate(PyNs3MeshWifiInterfaceMac *self)
{
    PyObject *py_retval;
    PyNs3MeshWifiInterfaceMac__PythonHelper *helper = dynamic_cast< PyNs3MeshWifiInterfaceMac__PythonHelper* >(self->obj);
    
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
PyNs3MeshWifiInterfaceMac__PythonHelper::_wrap_DoStart(PyNs3MeshWifiInterfaceMac *self)
{
    PyObject *py_retval;
    PyNs3MeshWifiInterfaceMac__PythonHelper *helper = dynamic_cast< PyNs3MeshWifiInterfaceMac__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoStart of class RegularWifiMac is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoStart__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3MeshWifiInterfaceMac__PythonHelper::_wrap_SendAddBaResponse(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3MgtAddBaRequestHeader *reqHdr;
    ns3::MgtAddBaRequestHeader *reqHdr_ptr;
    PyNs3Mac48Address *originator;
    PyNs3MeshWifiInterfaceMac__PythonHelper *helper = dynamic_cast< PyNs3MeshWifiInterfaceMac__PythonHelper* >(self->obj);
    const char *keywords[] = {"reqHdr", "originator", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!", (char **) keywords, &PyNs3MgtAddBaRequestHeader_Type, &reqHdr, &PyNs3Mac48Address_Type, &originator)) {
        return NULL;
    }
    reqHdr_ptr = (reqHdr ? reqHdr->obj : NULL);
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method SendAddBaResponse of class RegularWifiMac is protected and can only be called by a subclass");
        return NULL;
    }
    helper->SendAddBaResponse__parent_caller(reqHdr_ptr, *((PyNs3Mac48Address *) originator)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3MeshWifiInterfaceMac__PythonHelper::_wrap_TxFailed(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3WifiMacHeader *hdr;
    PyNs3MeshWifiInterfaceMac__PythonHelper *helper = dynamic_cast< PyNs3MeshWifiInterfaceMac__PythonHelper* >(self->obj);
    const char *keywords[] = {"hdr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3WifiMacHeader_Type, &hdr)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method TxFailed of class RegularWifiMac is protected and can only be called by a subclass");
        return NULL;
    }
    helper->TxFailed__parent_caller(*((PyNs3WifiMacHeader *) hdr)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3MeshWifiInterfaceMac__PythonHelper::_wrap_DeaggregateAmsduAndForward(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Packet *aggregatedPacket;
    ns3::Packet *aggregatedPacket_ptr;
    PyNs3WifiMacHeader *hdr;
    ns3::WifiMacHeader *hdr_ptr;
    PyNs3MeshWifiInterfaceMac__PythonHelper *helper = dynamic_cast< PyNs3MeshWifiInterfaceMac__PythonHelper* >(self->obj);
    const char *keywords[] = {"aggregatedPacket", "hdr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!", (char **) keywords, &PyNs3Packet_Type, &aggregatedPacket, &PyNs3WifiMacHeader_Type, &hdr)) {
        return NULL;
    }
    aggregatedPacket_ptr = (aggregatedPacket ? aggregatedPacket->obj : NULL);
    hdr_ptr = (hdr ? hdr->obj : NULL);
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DeaggregateAmsduAndForward of class RegularWifiMac is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DeaggregateAmsduAndForward__parent_caller(ns3::Ptr< ns3::Packet  > (aggregatedPacket_ptr), hdr_ptr);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::Enqueue(ns3::Ptr< ns3::Packet const > packet, ns3::Mac48Address to, ns3::Mac48Address from)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshWifiInterfaceMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3Mac48Address *py_Mac48Address;
    PyNs3Mac48Address *py_Mac48Address2;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Enqueue"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::MeshWifiInterfaceMac::Enqueue(packet, to, from);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = (ns3::MeshWifiInterfaceMac*) this;
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
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(to);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_Mac48Address2 = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address2->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address2->obj = new ns3::Mac48Address(from);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address2->obj] = (PyObject *) py_Mac48Address2;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Enqueue", (char *) "NNN", py_Packet, py_Mac48Address, py_Mac48Address2);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::Enqueue(ns3::Ptr< ns3::Packet const > packet, ns3::Mac48Address to)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshWifiInterfaceMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3Mac48Address *py_Mac48Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Enqueue"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::MeshWifiInterfaceMac::Enqueue(packet, to);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = (ns3::MeshWifiInterfaceMac*) this;
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
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(to);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Enqueue", (char *) "NN", py_Packet, py_Mac48Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::FinishConfigureStandard(ns3::WifiPhyStandard standard)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshWifiInterfaceMac *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "FinishConfigureStandard"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::MeshWifiInterfaceMac::FinishConfigureStandard(standard);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = (ns3::MeshWifiInterfaceMac*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "FinishConfigureStandard", (char *) "i", standard);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


bool
PyNs3MeshWifiInterfaceMac__PythonHelper::SupportsSendFrom() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshWifiInterfaceMac *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SupportsSendFrom"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshWifiInterfaceMac::SupportsSendFrom();
    }
    self_obj_before = reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = const_cast< ns3::MeshWifiInterfaceMac* >((const ns3::MeshWifiInterfaceMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SupportsSendFrom", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshWifiInterfaceMac::SupportsSendFrom();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MeshWifiInterfaceMac::SupportsSendFrom();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshWifiInterfaceMac *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = (ns3::MeshWifiInterfaceMac*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::Receive(ns3::Ptr< ns3::Packet > packet, ns3::WifiMacHeader const *hdr)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MeshWifiInterfaceMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3WifiMacHeader *py_WifiMacHeader;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter2;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Receive"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = (ns3::MeshWifiInterfaceMac*) this;
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
    if (typeid(*(hdr)) == typeid(PyNs3WifiMacHeader__PythonHelper))
    {
        py_WifiMacHeader = (PyNs3WifiMacHeader*) (((PyNs3WifiMacHeader__PythonHelper*) ((ns3::WifiMacHeader*) hdr))->m_pyself);
        py_WifiMacHeader->obj =  (ns3::WifiMacHeader*) (hdr);
        Py_INCREF(py_WifiMacHeader);
    } else {
        wrapper_lookup_iter2 = PyNs3ObjectBase_wrapper_registry.find((void *) hdr);
        if (wrapper_lookup_iter2 == PyNs3ObjectBase_wrapper_registry.end()) {
            py_WifiMacHeader = NULL;
        } else {
            py_WifiMacHeader = (PyNs3WifiMacHeader *) wrapper_lookup_iter2->second;
            Py_INCREF(py_WifiMacHeader);
        }
    
        if (py_WifiMacHeader == NULL)
        {
            py_WifiMacHeader = PyObject_GC_New(PyNs3WifiMacHeader, &PyNs3WifiMacHeader_Type);
            py_WifiMacHeader->inst_dict = NULL;
            py_WifiMacHeader->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            py_WifiMacHeader->obj = new ns3::WifiMacHeader(*hdr);
            PyNs3ObjectBase_wrapper_registry[(void *) py_WifiMacHeader->obj] = (PyObject *) py_WifiMacHeader;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Receive", (char *) "NN", py_Packet, py_WifiMacHeader);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MeshWifiInterfaceMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::SetEifsNoDifs(ns3::Time eifsNoDifs)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetEifsNoDifs"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetEifsNoDifs(eifsNoDifs);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(eifsNoDifs);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetEifsNoDifs", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


void
PyNs3MeshWifiInterfaceMac__PythonHelper::SetBasicBlockAckTimeout(ns3::Time blockAckTimeout)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetBasicBlockAckTimeout"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetBasicBlockAckTimeout(blockAckTimeout);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(blockAckTimeout);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetBasicBlockAckTimeout", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::SetBssid(ns3::Mac48Address bssid)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Mac48Address *py_Mac48Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetBssid"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetBssid(bssid);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(bssid);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetBssid", (char *) "N", py_Mac48Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::SetWifiPhy(ns3::Ptr< ns3::WifiPhy > phy)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3WifiPhy *py_WifiPhy;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetWifiPhy"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetWifiPhy(phy);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::WifiPhy *> (ns3::PeekPointer (phy)));
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_WifiPhy = NULL;
    } else {
        py_WifiPhy = (PyNs3WifiPhy *) wrapper_lookup_iter->second;
        Py_INCREF(py_WifiPhy);
    }
    
    if (py_WifiPhy == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::WifiPhy *> (ns3::PeekPointer (phy))), &PyNs3WifiPhy_Type);
        py_WifiPhy = PyObject_GC_New(PyNs3WifiPhy, wrapper_type);
        py_WifiPhy->inst_dict = NULL;
        py_WifiPhy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::WifiPhy *> (ns3::PeekPointer (phy))->Ref();
        py_WifiPhy->obj = const_cast<ns3::WifiPhy *> (ns3::PeekPointer (phy));
        PyNs3ObjectBase_wrapper_registry[(void *) py_WifiPhy->obj] = (PyObject *) py_WifiPhy;
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetWifiPhy", (char *) "N", py_WifiPhy);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Mac48Address
PyNs3MeshWifiInterfaceMac__PythonHelper::GetBssid() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Mac48Address *tmp_Mac48Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetBssid"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetBssid();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetBssid", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetBssid();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Mac48Address_Type, &tmp_Mac48Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetBssid();
    }
    ns3::Mac48Address retval = *tmp_Mac48Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::SetPifs(ns3::Time pifs)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetPifs"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetPifs(pifs);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(pifs);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetPifs", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Time
PyNs3MeshWifiInterfaceMac__PythonHelper::GetEifsNoDifs() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetEifsNoDifs"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetEifsNoDifs();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetEifsNoDifs", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetEifsNoDifs();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetEifsNoDifs();
    }
    ns3::Time retval = *tmp_Time->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::SetSlot(ns3::Time slotTime)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetSlot"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetSlot(slotTime);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(slotTime);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetSlot", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Time
PyNs3MeshWifiInterfaceMac__PythonHelper::GetBasicBlockAckTimeout() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetBasicBlockAckTimeout"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetBasicBlockAckTimeout();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetBasicBlockAckTimeout", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetBasicBlockAckTimeout();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetBasicBlockAckTimeout();
    }
    ns3::Time retval = *tmp_Time->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Time
PyNs3MeshWifiInterfaceMac__PythonHelper::GetPifs() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetPifs"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetPifs();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetPifs", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetPifs();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetPifs();
    }
    ns3::Time retval = *tmp_Time->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::SetCompressedBlockAckTimeout(ns3::Time blockAckTimeout)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetCompressedBlockAckTimeout"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetCompressedBlockAckTimeout(blockAckTimeout);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(blockAckTimeout);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetCompressedBlockAckTimeout", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Ptr< ns3::WifiPhy >
PyNs3MeshWifiInterfaceMac__PythonHelper::GetWifiPhy() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::WifiPhy > retval;
    PyNs3WifiPhy *tmp_WifiPhy;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetWifiPhy"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetWifiPhy();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetWifiPhy", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetWifiPhy();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3WifiPhy_Type, &tmp_WifiPhy)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetWifiPhy();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::WifiPhy  > (tmp_WifiPhy->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::SetCtsTimeout(ns3::Time ctsTimeout)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetCtsTimeout"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetCtsTimeout(ctsTimeout);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(ctsTimeout);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetCtsTimeout", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Time
PyNs3MeshWifiInterfaceMac__PythonHelper::GetCtsTimeout() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetCtsTimeout"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetCtsTimeout();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetCtsTimeout", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetCtsTimeout();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetCtsTimeout();
    }
    ns3::Time retval = *tmp_Time->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Mac48Address
PyNs3MeshWifiInterfaceMac__PythonHelper::GetAddress() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Mac48Address *tmp_Mac48Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetAddress"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetAddress();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetAddress", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetAddress();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Mac48Address_Type, &tmp_Mac48Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetAddress();
    }
    ns3::Mac48Address retval = *tmp_Mac48Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Time
PyNs3MeshWifiInterfaceMac__PythonHelper::GetSlot() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetSlot"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetSlot();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetSlot", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetSlot();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetSlot();
    }
    ns3::Time retval = *tmp_Time->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}


void
PyNs3MeshWifiInterfaceMac__PythonHelper::SetSifs(ns3::Time sifs)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetSifs"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetSifs(sifs);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(sifs);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetSifs", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::SetAddress(ns3::Mac48Address address)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Mac48Address *py_Mac48Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetAddress"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetAddress(address);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(address);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetAddress", (char *) "N", py_Mac48Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::SetWifiRemoteStationManager(ns3::Ptr< ns3::WifiRemoteStationManager > stationManager)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3WifiRemoteStationManager *py_WifiRemoteStationManager;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetWifiRemoteStationManager"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetWifiRemoteStationManager(stationManager);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::WifiRemoteStationManager *> (ns3::PeekPointer (stationManager)));
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_WifiRemoteStationManager = NULL;
    } else {
        py_WifiRemoteStationManager = (PyNs3WifiRemoteStationManager *) wrapper_lookup_iter->second;
        Py_INCREF(py_WifiRemoteStationManager);
    }
    
    if (py_WifiRemoteStationManager == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::WifiRemoteStationManager *> (ns3::PeekPointer (stationManager))), &PyNs3WifiRemoteStationManager_Type);
        py_WifiRemoteStationManager = PyObject_GC_New(PyNs3WifiRemoteStationManager, wrapper_type);
        py_WifiRemoteStationManager->inst_dict = NULL;
        py_WifiRemoteStationManager->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::WifiRemoteStationManager *> (ns3::PeekPointer (stationManager))->Ref();
        py_WifiRemoteStationManager->obj = const_cast<ns3::WifiRemoteStationManager *> (ns3::PeekPointer (stationManager));
        PyNs3ObjectBase_wrapper_registry[(void *) py_WifiRemoteStationManager->obj] = (PyObject *) py_WifiRemoteStationManager;
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetWifiRemoteStationManager", (char *) "N", py_WifiRemoteStationManager);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Time
PyNs3MeshWifiInterfaceMac__PythonHelper::GetCompressedBlockAckTimeout() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetCompressedBlockAckTimeout"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetCompressedBlockAckTimeout();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetCompressedBlockAckTimeout", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetCompressedBlockAckTimeout();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetCompressedBlockAckTimeout();
    }
    ns3::Time retval = *tmp_Time->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::SetSsid(ns3::Ssid ssid)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Ssid *py_Ssid;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetSsid"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetSsid(ssid);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Ssid = PyObject_New(PyNs3Ssid, &PyNs3Ssid_Type);
    py_Ssid->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ssid->obj = new ns3::Ssid(ssid);
    PyNs3Empty_wrapper_registry[(void *) py_Ssid->obj] = (PyObject *) py_Ssid;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetSsid", (char *) "N", py_Ssid);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::SetAckTimeout(ns3::Time ackTimeout)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetAckTimeout"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetAckTimeout(ackTimeout);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(ackTimeout);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetAckTimeout", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Ssid
PyNs3MeshWifiInterfaceMac__PythonHelper::GetSsid() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Ssid *tmp_Ssid;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetSsid"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetSsid();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetSsid", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetSsid();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Ssid_Type, &tmp_Ssid)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetSsid();
    }
    ns3::Ssid retval = *tmp_Ssid->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::WifiRemoteStationManager >
PyNs3MeshWifiInterfaceMac__PythonHelper::GetWifiRemoteStationManager() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::WifiRemoteStationManager > retval;
    PyNs3WifiRemoteStationManager *tmp_WifiRemoteStationManager;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetWifiRemoteStationManager"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetWifiRemoteStationManager();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetWifiRemoteStationManager", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetWifiRemoteStationManager();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3WifiRemoteStationManager_Type, &tmp_WifiRemoteStationManager)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetWifiRemoteStationManager();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::WifiRemoteStationManager  > (tmp_WifiRemoteStationManager->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Time
PyNs3MeshWifiInterfaceMac__PythonHelper::GetAckTimeout() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetAckTimeout"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetAckTimeout();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetAckTimeout", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetAckTimeout();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetAckTimeout();
    }
    ns3::Time retval = *tmp_Time->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Time
PyNs3MeshWifiInterfaceMac__PythonHelper::GetSifs() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetSifs"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetSifs();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetSifs", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetSifs();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetSifs();
    }
    ns3::Time retval = *tmp_Time->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::DeaggregateAmsduAndForward(ns3::Ptr< ns3::Packet > aggregatedPacket, ns3::WifiMacHeader const *hdr)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3WifiMacHeader *py_WifiMacHeader;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter2;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DeaggregateAmsduAndForward"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::DeaggregateAmsduAndForward(aggregatedPacket, hdr);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::Packet *> (ns3::PeekPointer (aggregatedPacket)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_Packet = NULL;
    } else {
        py_Packet = (PyNs3Packet *) wrapper_lookup_iter->second;
        Py_INCREF(py_Packet);
    }
    
    if (py_Packet == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Packet *> (ns3::PeekPointer (aggregatedPacket))), &PyNs3Packet_Type);
        py_Packet = PyObject_New(PyNs3Packet, wrapper_type);
        py_Packet->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::Packet *> (ns3::PeekPointer (aggregatedPacket))->Ref();
        py_Packet->obj = const_cast<ns3::Packet *> (ns3::PeekPointer (aggregatedPacket));
        PyNs3Empty_wrapper_registry[(void *) py_Packet->obj] = (PyObject *) py_Packet;
    }
    if (typeid(*(hdr)) == typeid(PyNs3WifiMacHeader__PythonHelper))
    {
        py_WifiMacHeader = (PyNs3WifiMacHeader*) (((PyNs3WifiMacHeader__PythonHelper*) ((ns3::WifiMacHeader*) hdr))->m_pyself);
        py_WifiMacHeader->obj =  (ns3::WifiMacHeader*) (hdr);
        Py_INCREF(py_WifiMacHeader);
    } else {
        wrapper_lookup_iter2 = PyNs3ObjectBase_wrapper_registry.find((void *) hdr);
        if (wrapper_lookup_iter2 == PyNs3ObjectBase_wrapper_registry.end()) {
            py_WifiMacHeader = NULL;
        } else {
            py_WifiMacHeader = (PyNs3WifiMacHeader *) wrapper_lookup_iter2->second;
            Py_INCREF(py_WifiMacHeader);
        }
    
        if (py_WifiMacHeader == NULL)
        {
            py_WifiMacHeader = PyObject_GC_New(PyNs3WifiMacHeader, &PyNs3WifiMacHeader_Type);
            py_WifiMacHeader->inst_dict = NULL;
            py_WifiMacHeader->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            py_WifiMacHeader->obj = new ns3::WifiMacHeader(*hdr);
            PyNs3ObjectBase_wrapper_registry[(void *) py_WifiMacHeader->obj] = (PyObject *) py_WifiMacHeader;
        }
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DeaggregateAmsduAndForward", (char *) "NN", py_Packet, py_WifiMacHeader);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::DoStart()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::DoStart();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoStart", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::SendAddBaResponse(ns3::MgtAddBaRequestHeader const *reqHdr, ns3::Mac48Address originator)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3MgtAddBaRequestHeader *py_MgtAddBaRequestHeader;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyNs3Mac48Address *py_Mac48Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SendAddBaResponse"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::SendAddBaResponse(reqHdr, originator);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    if (typeid(*(reqHdr)) == typeid(PyNs3MgtAddBaRequestHeader__PythonHelper))
    {
        py_MgtAddBaRequestHeader = (PyNs3MgtAddBaRequestHeader*) (((PyNs3MgtAddBaRequestHeader__PythonHelper*) ((ns3::MgtAddBaRequestHeader*) reqHdr))->m_pyself);
        py_MgtAddBaRequestHeader->obj =  (ns3::MgtAddBaRequestHeader*) (reqHdr);
        Py_INCREF(py_MgtAddBaRequestHeader);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) reqHdr);
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_MgtAddBaRequestHeader = NULL;
        } else {
            py_MgtAddBaRequestHeader = (PyNs3MgtAddBaRequestHeader *) wrapper_lookup_iter->second;
            Py_INCREF(py_MgtAddBaRequestHeader);
        }
    
        if (py_MgtAddBaRequestHeader == NULL)
        {
            py_MgtAddBaRequestHeader = PyObject_GC_New(PyNs3MgtAddBaRequestHeader, &PyNs3MgtAddBaRequestHeader_Type);
            py_MgtAddBaRequestHeader->inst_dict = NULL;
            py_MgtAddBaRequestHeader->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            py_MgtAddBaRequestHeader->obj = new ns3::MgtAddBaRequestHeader(*reqHdr);
            PyNs3ObjectBase_wrapper_registry[(void *) py_MgtAddBaRequestHeader->obj] = (PyObject *) py_MgtAddBaRequestHeader;
        }
    }
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(originator);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SendAddBaResponse", (char *) "NN", py_MgtAddBaRequestHeader, py_Mac48Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::TxFailed(ns3::WifiMacHeader const & hdr)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3WifiMacHeader *py_WifiMacHeader;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "TxFailed"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::TxFailed(hdr);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_WifiMacHeader = PyObject_GC_New(PyNs3WifiMacHeader, &PyNs3WifiMacHeader_Type);
    py_WifiMacHeader->inst_dict = NULL;
    py_WifiMacHeader->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_WifiMacHeader->obj = new ns3::WifiMacHeader(hdr);
    PyNs3ObjectBase_wrapper_registry[(void *) py_WifiMacHeader->obj] = (PyObject *) py_WifiMacHeader;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "TxFailed", (char *) "N", py_WifiMacHeader);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MeshWifiInterfaceMac__PythonHelper::TxOk(ns3::WifiMacHeader const & hdr)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3WifiMacHeader *py_WifiMacHeader;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "TxOk"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::RegularWifiMac::TxOk(hdr);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_WifiMacHeader = PyObject_GC_New(PyNs3WifiMacHeader, &PyNs3WifiMacHeader_Type);
    py_WifiMacHeader->inst_dict = NULL;
    py_WifiMacHeader->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_WifiMacHeader->obj = new ns3::WifiMacHeader(hdr);
    PyNs3ObjectBase_wrapper_registry[(void *) py_WifiMacHeader->obj] = (PyObject *) py_WifiMacHeader;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "TxOk", (char *) "N", py_WifiMacHeader);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3MeshWifiInterfaceMac__PythonHelper::GetInstanceTypeId() const
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
PyNs3MeshWifiInterfaceMac__PythonHelper::NotifyNewAggregate()
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
PyNs3MeshWifiInterfaceMac__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3MeshWifiInterfaceMac__tp_init__0(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3MeshWifiInterfaceMac *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3MeshWifiInterfaceMac_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3MeshWifiInterfaceMac_Type)
    {
        self->obj = new PyNs3MeshWifiInterfaceMac__PythonHelper(*((PyNs3MeshWifiInterfaceMac *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3MeshWifiInterfaceMac__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::MeshWifiInterfaceMac(*((PyNs3MeshWifiInterfaceMac *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3MeshWifiInterfaceMac__tp_init__1(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3MeshWifiInterfaceMac_Type)
    {
        self->obj = new PyNs3MeshWifiInterfaceMac__PythonHelper();
        self->obj->Ref ();
        ((PyNs3MeshWifiInterfaceMac__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::MeshWifiInterfaceMac();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3MeshWifiInterfaceMac__tp_init(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3MeshWifiInterfaceMac__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3MeshWifiInterfaceMac__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3MeshWifiInterfaceMac_GetSupportedRates(PyNs3MeshWifiInterfaceMac *self)
{
    PyObject *py_retval;
    PyNs3SupportedRates *py_SupportedRates;
    
    ns3::SupportedRates retval = self->obj->GetSupportedRates();
    py_SupportedRates = PyObject_New(PyNs3SupportedRates, &PyNs3SupportedRates_Type);
    py_SupportedRates->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_SupportedRates->obj = new ns3::SupportedRates(retval);
    PyNs3Empty_wrapper_registry[(void *) py_SupportedRates->obj] = (PyObject *) py_SupportedRates;
    py_retval = Py_BuildValue((char *) "N", py_SupportedRates);
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::MeshWifiInterfaceMac::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_GetTbtt(PyNs3MeshWifiInterfaceMac *self)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = self->obj->GetTbtt();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_SetLinkMetricCallback(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *cb;
    ns3::Ptr<PythonCallbackImpl11> cb_cb_impl;
    const char *keywords[] = {"cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &cb)) {
        return NULL;
    }
    if (!PyCallable_Check(cb)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'cb' must be callbale");
        return NULL;
    }
    cb_cb_impl = ns3::Create<PythonCallbackImpl11> (cb);
    self->obj->SetLinkMetricCallback(ns3::Callback<unsigned int, ns3::Mac48Address, ns3::Ptr<ns3::MeshWifiInterfaceMac>, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_SupportsSendFrom(PyNs3MeshWifiInterfaceMac *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3MeshWifiInterfaceMac__PythonHelper *helper_class = dynamic_cast<PyNs3MeshWifiInterfaceMac__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->SupportsSendFrom()) : (self->obj->ns3::MeshWifiInterfaceMac::SupportsSendFrom());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_SetMeshPointAddress(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Mac48Address *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Mac48Address_Type, &arg0)) {
        return NULL;
    }
    self->obj->SetMeshPointAddress(*((PyNs3Mac48Address *) arg0)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_GetMeshPointAddress(PyNs3MeshWifiInterfaceMac *self)
{
    PyObject *py_retval;
    PyNs3Mac48Address *py_Mac48Address;
    
    ns3::Mac48Address retval = self->obj->GetMeshPointAddress();
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(retval);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_retval = Py_BuildValue((char *) "N", py_Mac48Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_ShiftTbtt(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *shift;
    ns3::Time shift2;
    const char *keywords[] = {"shift", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &shift)) {
        return NULL;
    }
    if (PyObject_IsInstance(shift, (PyObject*) &PyNs3Time_Type)) {
        shift2 = *((PyNs3Time *) shift)->obj;
    } else if (PyObject_IsInstance(shift, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        shift2 = *((PyNs3TracedValue__Ns3Time *) shift)->obj;
    } else if (PyObject_IsInstance(shift, (PyObject*) &PyNs3Scalar_Type)) {
        shift2 = *((PyNs3Scalar *) shift)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", shift->ob_type->tp_name);
        return NULL;
    }
    self->obj->ShiftTbtt(shift2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_GetPhyStandard(PyNs3MeshWifiInterfaceMac *self)
{
    PyObject *py_retval;
    ns3::WifiPhyStandard retval;
    
    retval = self->obj->GetPhyStandard();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_GetLinkMetric(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint32_t retval;
    PyNs3Mac48Address *peerAddress;
    const char *keywords[] = {"peerAddress", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Mac48Address_Type, &peerAddress)) {
        return NULL;
    }
    retval = self->obj->GetLinkMetric(*((PyNs3Mac48Address *) peerAddress)->obj);
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_CheckSupportedRates(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3SupportedRates *rates;
    const char *keywords[] = {"rates", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SupportedRates_Type, &rates)) {
        return NULL;
    }
    retval = self->obj->CheckSupportedRates(*((PyNs3SupportedRates *) rates)->obj);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_SetBeaconInterval(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *interval;
    ns3::Time interval2;
    const char *keywords[] = {"interval", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &interval)) {
        return NULL;
    }
    if (PyObject_IsInstance(interval, (PyObject*) &PyNs3Time_Type)) {
        interval2 = *((PyNs3Time *) interval)->obj;
    } else if (PyObject_IsInstance(interval, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        interval2 = *((PyNs3TracedValue__Ns3Time *) interval)->obj;
    } else if (PyObject_IsInstance(interval, (PyObject*) &PyNs3Scalar_Type)) {
        interval2 = *((PyNs3Scalar *) interval)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", interval->ob_type->tp_name);
        return NULL;
    }
    self->obj->SetBeaconInterval(interval2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}



PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_Enqueue__0(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    PyNs3Mac48Address *to;
    PyNs3Mac48Address *from;
    PyNs3MeshWifiInterfaceMac__PythonHelper *helper_class = dynamic_cast<PyNs3MeshWifiInterfaceMac__PythonHelper*> (self->obj);
    const char *keywords[] = {"packet", "to", "from", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!O!", (char **) keywords, &PyNs3Packet_Type, &packet, &PyNs3Mac48Address_Type, &to, &PyNs3Mac48Address_Type, &from)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    (helper_class == NULL)? (self->obj->Enqueue(ns3::Ptr< ns3::Packet  > (packet_ptr), *((PyNs3Mac48Address *) to)->obj, *((PyNs3Mac48Address *) from)->obj)) : (self->obj->ns3::MeshWifiInterfaceMac::Enqueue(ns3::Ptr< ns3::Packet  > (packet_ptr), *((PyNs3Mac48Address *) to)->obj, *((PyNs3Mac48Address *) from)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_Enqueue__1(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    PyNs3Mac48Address *to;
    PyNs3MeshWifiInterfaceMac__PythonHelper *helper_class = dynamic_cast<PyNs3MeshWifiInterfaceMac__PythonHelper*> (self->obj);
    const char *keywords[] = {"packet", "to", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!", (char **) keywords, &PyNs3Packet_Type, &packet, &PyNs3Mac48Address_Type, &to)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    (helper_class == NULL)? (self->obj->Enqueue(ns3::Ptr< ns3::Packet  > (packet_ptr), *((PyNs3Mac48Address *) to)->obj)) : (self->obj->ns3::MeshWifiInterfaceMac::Enqueue(ns3::Ptr< ns3::Packet  > (packet_ptr), *((PyNs3Mac48Address *) to)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject * _wrap_PyNs3MeshWifiInterfaceMac_Enqueue(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3MeshWifiInterfaceMac_Enqueue__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3MeshWifiInterfaceMac_Enqueue__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3MeshWifiInterfaceMac_InstallPlugin(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3MeshWifiInterfaceMacPlugin *plugin;
    ns3::MeshWifiInterfaceMacPlugin *plugin_ptr;
    const char *keywords[] = {"plugin", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3MeshWifiInterfaceMacPlugin_Type, &plugin)) {
        return NULL;
    }
    plugin_ptr = (plugin ? plugin->obj : NULL);
    self->obj->InstallPlugin(ns3::Ptr< ns3::MeshWifiInterfaceMacPlugin  > (plugin_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_Report(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3MeshWifiInterfaceMac_FinishConfigureStandard(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::WifiPhyStandard standard;
    PyNs3MeshWifiInterfaceMac__PythonHelper *helper_class = dynamic_cast<PyNs3MeshWifiInterfaceMac__PythonHelper*> (self->obj);
    const char *keywords[] = {"standard", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &standard)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->FinishConfigureStandard(standard)) : (self->obj->ns3::MeshWifiInterfaceMac::FinishConfigureStandard(standard));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_SetRandomStartDelay(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *interval;
    ns3::Time interval2;
    const char *keywords[] = {"interval", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &interval)) {
        return NULL;
    }
    if (PyObject_IsInstance(interval, (PyObject*) &PyNs3Time_Type)) {
        interval2 = *((PyNs3Time *) interval)->obj;
    } else if (PyObject_IsInstance(interval, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        interval2 = *((PyNs3TracedValue__Ns3Time *) interval)->obj;
    } else if (PyObject_IsInstance(interval, (PyObject*) &PyNs3Scalar_Type)) {
        interval2 = *((PyNs3Scalar *) interval)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", interval->ob_type->tp_name);
        return NULL;
    }
    self->obj->SetRandomStartDelay(interval2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_ResetStats(PyNs3MeshWifiInterfaceMac *self)
{
    PyObject *py_retval;
    
    self->obj->ResetStats();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_GetFrequencyChannel(PyNs3MeshWifiInterfaceMac *self)
{
    PyObject *py_retval;
    uint16_t retval;
    
    retval = self->obj->GetFrequencyChannel();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_SetBeaconGeneration(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool enable;
    PyObject *py_enable;
    const char *keywords[] = {"enable", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_enable)) {
        return NULL;
    }
    enable = (bool) PyObject_IsTrue(py_enable);
    self->obj->SetBeaconGeneration(enable);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_SendManagementFrame(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Packet *frame;
    ns3::Packet *frame_ptr;
    PyNs3WifiMacHeader *hdr;
    const char *keywords[] = {"frame", "hdr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!", (char **) keywords, &PyNs3Packet_Type, &frame, &PyNs3WifiMacHeader_Type, &hdr)) {
        return NULL;
    }
    frame_ptr = (frame ? frame->obj : NULL);
    self->obj->SendManagementFrame(ns3::Ptr< ns3::Packet  > (frame_ptr), *((PyNs3WifiMacHeader *) hdr)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_GetBeaconInterval(PyNs3MeshWifiInterfaceMac *self)
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
_wrap_PyNs3MeshWifiInterfaceMac_SwitchFrequencyChannel(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int new_id;
    const char *keywords[] = {"new_id", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &new_id)) {
        return NULL;
    }
    if (new_id > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SwitchFrequencyChannel(new_id);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MeshWifiInterfaceMac_SetLinkUpCallback(PyNs3MeshWifiInterfaceMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *linkUp;
    ns3::Ptr<PythonCallbackImpl0> linkUp_cb_impl;
    PyNs3MeshWifiInterfaceMac__PythonHelper *helper_class = dynamic_cast<PyNs3MeshWifiInterfaceMac__PythonHelper*> (self->obj);
    const char *keywords[] = {"linkUp", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &linkUp)) {
        return NULL;
    }
    if (!PyCallable_Check(linkUp)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'linkUp' must be callbale");
        return NULL;
    }
    linkUp_cb_impl = ns3::Create<PythonCallbackImpl0> (linkUp);
    (helper_class == NULL)? (self->obj->SetLinkUpCallback(ns3::Callback<void, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (linkUp_cb_impl))) : (self->obj->ns3::MeshWifiInterfaceMac::SetLinkUpCallback(ns3::Callback<void, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (linkUp_cb_impl)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3MeshWifiInterfaceMac__copy__(PyNs3MeshWifiInterfaceMac *self)
{

    PyNs3MeshWifiInterfaceMac *py_copy;
    py_copy = PyObject_GC_New(PyNs3MeshWifiInterfaceMac, &PyNs3MeshWifiInterfaceMac_Type);
    py_copy->obj = new ns3::MeshWifiInterfaceMac(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3MeshWifiInterfaceMac_methods[] = {
    {(char *) "GetSupportedRates", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_GetSupportedRates, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "GetTbtt", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_GetTbtt, METH_NOARGS, NULL },
    {(char *) "SetLinkMetricCallback", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_SetLinkMetricCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SupportsSendFrom", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_SupportsSendFrom, METH_NOARGS, NULL },
    {(char *) "SetMeshPointAddress", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_SetMeshPointAddress, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetMeshPointAddress", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_GetMeshPointAddress, METH_NOARGS, NULL },
    {(char *) "ShiftTbtt", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_ShiftTbtt, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetPhyStandard", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_GetPhyStandard, METH_NOARGS, NULL },
    {(char *) "GetLinkMetric", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_GetLinkMetric, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "CheckSupportedRates", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_CheckSupportedRates, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetBeaconInterval", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_SetBeaconInterval, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Enqueue", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_Enqueue, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "InstallPlugin", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_InstallPlugin, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Report", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_Report, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "FinishConfigureStandard", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_FinishConfigureStandard, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetRandomStartDelay", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_SetRandomStartDelay, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "ResetStats", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_ResetStats, METH_NOARGS, NULL },
    {(char *) "GetFrequencyChannel", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_GetFrequencyChannel, METH_NOARGS, NULL },
    {(char *) "SetBeaconGeneration", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_SetBeaconGeneration, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SendManagementFrame", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_SendManagementFrame, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetBeaconInterval", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_GetBeaconInterval, METH_NOARGS, NULL },
    {(char *) "SwitchFrequencyChannel", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_SwitchFrequencyChannel, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetLinkUpCallback", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac_SetLinkUpCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3MeshWifiInterfaceMac__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "TxOk", (PyCFunction) PyNs3MeshWifiInterfaceMac__PythonHelper::_wrap_TxOk, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3MeshWifiInterfaceMac__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3MeshWifiInterfaceMac__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "SendAddBaResponse", (PyCFunction) PyNs3MeshWifiInterfaceMac__PythonHelper::_wrap_SendAddBaResponse, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "TxFailed", (PyCFunction) PyNs3MeshWifiInterfaceMac__PythonHelper::_wrap_TxFailed, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DeaggregateAmsduAndForward", (PyCFunction) PyNs3MeshWifiInterfaceMac__PythonHelper::_wrap_DeaggregateAmsduAndForward, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3MeshWifiInterfaceMac__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3MeshWifiInterfaceMac__tp_clear(PyNs3MeshWifiInterfaceMac *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::MeshWifiInterfaceMac *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3MeshWifiInterfaceMac__tp_traverse(PyNs3MeshWifiInterfaceMac *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3MeshWifiInterfaceMac__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3MeshWifiInterfaceMac__tp_dealloc(PyNs3MeshWifiInterfaceMac *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3MeshWifiInterfaceMac__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3MeshWifiInterfaceMac__tp_richcompare (PyNs3MeshWifiInterfaceMac *PYBINDGEN_UNUSED(self), PyNs3MeshWifiInterfaceMac *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3MeshWifiInterfaceMac_Type)) {
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

PyTypeObject PyNs3MeshWifiInterfaceMac_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.MeshWifiInterfaceMac",            /* tp_name */
    sizeof(PyNs3MeshWifiInterfaceMac),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3MeshWifiInterfaceMac__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3MeshWifiInterfaceMac__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3MeshWifiInterfaceMac__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3MeshWifiInterfaceMac__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3MeshWifiInterfaceMac_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3MeshWifiInterfaceMac, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3MeshWifiInterfaceMac__tp_init,             /* tp_init */
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


