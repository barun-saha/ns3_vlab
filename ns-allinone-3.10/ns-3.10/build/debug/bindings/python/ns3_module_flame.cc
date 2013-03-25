#include "ns3module.h"


static int
_wrap_PyNs3FlameFlameProtocol__tp_init(PyNs3FlameFlameProtocol *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        return -1;
    }
    self->obj = new ns3::flame::FlameProtocol();
    self->obj->Ref ();
    ns3::CompleteConstruct(self->obj);
    return 0;
}


PyObject *
_wrap_PyNs3FlameFlameProtocol_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::flame::FlameProtocol::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3FlameFlameProtocol_GetAddress(PyNs3FlameFlameProtocol *self)
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
_wrap_PyNs3FlameFlameProtocol_Install(PyNs3FlameFlameProtocol *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3FlameFlameProtocol_DoDispose(PyNs3FlameFlameProtocol *self)
{
    PyObject *py_retval;
    
    self->obj->DoDispose();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3FlameFlameProtocol_Report(PyNs3FlameFlameProtocol *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3FlameFlameProtocol_RequestRoute(PyNs3FlameFlameProtocol *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3FlameFlameProtocol_ResetStats(PyNs3FlameFlameProtocol *self)
{
    PyObject *py_retval;
    
    self->obj->ResetStats();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

static PyMethodDef PyNs3FlameFlameProtocol_methods[] = {
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3FlameFlameProtocol_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "GetAddress", (PyCFunction) _wrap_PyNs3FlameFlameProtocol_GetAddress, METH_NOARGS, NULL },
    {(char *) "Install", (PyCFunction) _wrap_PyNs3FlameFlameProtocol_Install, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) _wrap_PyNs3FlameFlameProtocol_DoDispose, METH_NOARGS, NULL },
    {(char *) "Report", (PyCFunction) _wrap_PyNs3FlameFlameProtocol_Report, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "RequestRoute", (PyCFunction) _wrap_PyNs3FlameFlameProtocol_RequestRoute, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "ResetStats", (PyCFunction) _wrap_PyNs3FlameFlameProtocol_ResetStats, METH_NOARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3FlameFlameProtocol__tp_clear(PyNs3FlameFlameProtocol *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::flame::FlameProtocol *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3FlameFlameProtocol__tp_traverse(PyNs3FlameFlameProtocol *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    return 0;
}


static void
_wrap_PyNs3FlameFlameProtocol__tp_dealloc(PyNs3FlameFlameProtocol *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3FlameFlameProtocol__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3FlameFlameProtocol__tp_richcompare (PyNs3FlameFlameProtocol *PYBINDGEN_UNUSED(self), PyNs3FlameFlameProtocol *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3FlameFlameProtocol_Type)) {
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

PyTypeObject PyNs3FlameFlameProtocol_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.flame.FlameProtocol",            /* tp_name */
    sizeof(PyNs3FlameFlameProtocol),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3FlameFlameProtocol__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3FlameFlameProtocol__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3FlameFlameProtocol__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3FlameFlameProtocol__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3FlameFlameProtocol_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3FlameFlameProtocol, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3FlameFlameProtocol__tp_init,             /* tp_init */
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
PyNs3FlameFlameTag__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3FlameFlameTag *self)
{
    PyObject *py_retval;
    PyNs3FlameFlameTag__PythonHelper *helper = dynamic_cast< PyNs3FlameFlameTag__PythonHelper* >(self->obj);
    
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
PyNs3FlameFlameTag__PythonHelper::Deserialize(ns3::TagBuffer i)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::flame::FlameTag *self_obj_before;
    PyObject *py_retval;
    PyNs3TagBuffer *py_TagBuffer;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Deserialize"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::flame::FlameTag::Deserialize(i);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj;
    reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj = (ns3::flame::FlameTag*) this;
    py_TagBuffer = PyObject_New(PyNs3TagBuffer, &PyNs3TagBuffer_Type);
    py_TagBuffer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TagBuffer->obj = new ns3::TagBuffer(i);
    PyNs3TagBuffer_wrapper_registry[(void *) py_TagBuffer->obj] = (PyObject *) py_TagBuffer;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Deserialize", (char *) "N", py_TagBuffer);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3FlameFlameTag__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::flame::FlameTag *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::flame::FlameTag::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj;
    reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj = const_cast< ns3::flame::FlameTag* >((const ns3::flame::FlameTag*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::flame::FlameTag::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::flame::FlameTag::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

uint32_t
PyNs3FlameFlameTag__PythonHelper::GetSerializedSize() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::flame::FlameTag *self_obj_before;
    PyObject *py_retval;
    uint32_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetSerializedSize"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::flame::FlameTag::GetSerializedSize();
    }
    self_obj_before = reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj;
    reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj = const_cast< ns3::flame::FlameTag* >((const ns3::flame::FlameTag*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetSerializedSize", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::flame::FlameTag::GetSerializedSize();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::flame::FlameTag::GetSerializedSize();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}


void
PyNs3FlameFlameTag__PythonHelper::Serialize(ns3::TagBuffer i) const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::flame::FlameTag *self_obj_before;
    PyObject *py_retval;
    PyNs3TagBuffer *py_TagBuffer;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Serialize"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::flame::FlameTag::Serialize(i);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj;
    reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj = const_cast< ns3::flame::FlameTag* >((const ns3::flame::FlameTag*) this);
    py_TagBuffer = PyObject_New(PyNs3TagBuffer, &PyNs3TagBuffer_Type);
    py_TagBuffer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TagBuffer->obj = new ns3::TagBuffer(i);
    PyNs3TagBuffer_wrapper_registry[(void *) py_TagBuffer->obj] = (PyObject *) py_TagBuffer;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Serialize", (char *) "N", py_TagBuffer);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3FlameFlameTag* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3FlameFlameTag__PythonHelper::NotifyConstructionCompleted()
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
static PyObject* _wrap_PyNs3FlameFlameTag__get_receiver(PyNs3FlameFlameTag *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyNs3Mac48Address *py_Mac48Address;
    
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(self->obj->receiver);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_retval = Py_BuildValue((char *) "N", py_Mac48Address);
    return py_retval;
}
static int _wrap_PyNs3FlameFlameTag__set_receiver(PyNs3FlameFlameTag *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyNs3Mac48Address *tmp_Mac48Address;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Mac48Address_Type, &tmp_Mac48Address)) {
        Py_DECREF(py_retval);
        return -1;
    }
    self->obj->receiver = *tmp_Mac48Address->obj;
    Py_DECREF(py_retval);
    return 0;
}
static PyObject* _wrap_PyNs3FlameFlameTag__get_transmitter(PyNs3FlameFlameTag *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyNs3Mac48Address *py_Mac48Address;
    
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(self->obj->transmitter);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_retval = Py_BuildValue((char *) "N", py_Mac48Address);
    return py_retval;
}
static int _wrap_PyNs3FlameFlameTag__set_transmitter(PyNs3FlameFlameTag *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyNs3Mac48Address *tmp_Mac48Address;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Mac48Address_Type, &tmp_Mac48Address)) {
        Py_DECREF(py_retval);
        return -1;
    }
    self->obj->transmitter = *tmp_Mac48Address->obj;
    Py_DECREF(py_retval);
    return 0;
}
static PyGetSetDef PyNs3FlameFlameTag__getsets[] = {
    {
        (char*) "transmitter", /* attribute name */
        (getter) _wrap_PyNs3FlameFlameTag__get_transmitter, /* C function to get the attribute */
        (setter) _wrap_PyNs3FlameFlameTag__set_transmitter, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    {
        (char*) "receiver", /* attribute name */
        (getter) _wrap_PyNs3FlameFlameTag__get_receiver, /* C function to get the attribute */
        (setter) _wrap_PyNs3FlameFlameTag__set_receiver, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    { NULL, NULL, NULL, NULL, NULL }
};


static int
_wrap_PyNs3FlameFlameTag__tp_init__0(PyNs3FlameFlameTag *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3FlameFlameTag *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3FlameFlameTag_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3FlameFlameTag_Type)
    {
        self->obj = new PyNs3FlameFlameTag__PythonHelper(*((PyNs3FlameFlameTag *) arg0)->obj);
        ((PyNs3FlameFlameTag__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::flame::FlameTag(*((PyNs3FlameFlameTag *) arg0)->obj);
    }
    return 0;
}

static int
_wrap_PyNs3FlameFlameTag__tp_init__1(PyNs3FlameFlameTag *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Mac48Address *a = NULL;
    const char *keywords[] = {"a", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O!", (char **) keywords, &PyNs3Mac48Address_Type, &a)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3FlameFlameTag_Type)
    {
        self->obj = new PyNs3FlameFlameTag__PythonHelper((a ? (*((PyNs3Mac48Address *) a)->obj) : ns3::Mac48Address()));
        ((PyNs3FlameFlameTag__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::flame::FlameTag((a ? (*((PyNs3Mac48Address *) a)->obj) : ns3::Mac48Address()));
    }
    return 0;
}

int _wrap_PyNs3FlameFlameTag__tp_init(PyNs3FlameFlameTag *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3FlameFlameTag__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3FlameFlameTag__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3FlameFlameTag_Deserialize(PyNs3FlameFlameTag *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3TagBuffer *i;
    PyNs3FlameFlameTag__PythonHelper *helper_class = dynamic_cast<PyNs3FlameFlameTag__PythonHelper*> (self->obj);
    const char *keywords[] = {"i", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3TagBuffer_Type, &i)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Deserialize(*((PyNs3TagBuffer *) i)->obj)) : (self->obj->ns3::flame::FlameTag::Deserialize(*((PyNs3TagBuffer *) i)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3FlameFlameTag_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::flame::FlameTag::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3FlameFlameTag_Serialize(PyNs3FlameFlameTag *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3TagBuffer *i;
    PyNs3FlameFlameTag__PythonHelper *helper_class = dynamic_cast<PyNs3FlameFlameTag__PythonHelper*> (self->obj);
    const char *keywords[] = {"i", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3TagBuffer_Type, &i)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Serialize(*((PyNs3TagBuffer *) i)->obj)) : (self->obj->ns3::flame::FlameTag::Serialize(*((PyNs3TagBuffer *) i)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3FlameFlameTag_Print(PyNs3FlameFlameTag *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyStdOstream *os;
    PyNs3FlameFlameTag__PythonHelper *helper_class = dynamic_cast<PyNs3FlameFlameTag__PythonHelper*> (self->obj);
    const char *keywords[] = {"os", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyStdOstream_Type, &os)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Print(*((PyStdOstream *) os)->obj)) : (self->obj->ns3::flame::FlameTag::Print(*((PyStdOstream *) os)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3FlameFlameTag_GetInstanceTypeId(PyNs3FlameFlameTag *self)
{
    PyObject *py_retval;
    PyNs3FlameFlameTag__PythonHelper *helper_class = dynamic_cast<PyNs3FlameFlameTag__PythonHelper*> (self->obj);
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = (helper_class == NULL)? (self->obj->GetInstanceTypeId()) : (self->obj->ns3::flame::FlameTag::GetInstanceTypeId());
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3FlameFlameTag_GetSerializedSize(PyNs3FlameFlameTag *self)
{
    PyObject *py_retval;
    uint32_t retval;
    PyNs3FlameFlameTag__PythonHelper *helper_class = dynamic_cast<PyNs3FlameFlameTag__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->GetSerializedSize()) : (self->obj->ns3::flame::FlameTag::GetSerializedSize());
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


static PyObject*
_wrap_PyNs3FlameFlameTag__copy__(PyNs3FlameFlameTag *self)
{

    PyNs3FlameFlameTag *py_copy;
    py_copy = PyObject_GC_New(PyNs3FlameFlameTag, &PyNs3FlameFlameTag_Type);
    py_copy->obj = new ns3::flame::FlameTag(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3FlameFlameTag_methods[] = {
    {(char *) "Deserialize", (PyCFunction) _wrap_PyNs3FlameFlameTag_Deserialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3FlameFlameTag_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Serialize", (PyCFunction) _wrap_PyNs3FlameFlameTag_Serialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Print", (PyCFunction) _wrap_PyNs3FlameFlameTag_Print, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetInstanceTypeId", (PyCFunction) _wrap_PyNs3FlameFlameTag_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "GetSerializedSize", (PyCFunction) _wrap_PyNs3FlameFlameTag_GetSerializedSize, METH_NOARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3FlameFlameTag__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3FlameFlameTag__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3FlameFlameTag__tp_clear(PyNs3FlameFlameTag *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::flame::FlameTag *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3FlameFlameTag__tp_traverse(PyNs3FlameFlameTag *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3FlameFlameTag__PythonHelper) )
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3FlameFlameTag__tp_dealloc(PyNs3FlameFlameTag *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3FlameFlameTag__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3FlameFlameTag__tp_richcompare (PyNs3FlameFlameTag *PYBINDGEN_UNUSED(self), PyNs3FlameFlameTag *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3FlameFlameTag_Type)) {
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

PyTypeObject PyNs3FlameFlameTag_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.flame.FlameTag",            /* tp_name */
    sizeof(PyNs3FlameFlameTag),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3FlameFlameTag__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3FlameFlameTag__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3FlameFlameTag__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3FlameFlameTag__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3FlameFlameTag_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    PyNs3FlameFlameTag__getsets,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3FlameFlameTag, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3FlameFlameTag__tp_init,             /* tp_init */
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


