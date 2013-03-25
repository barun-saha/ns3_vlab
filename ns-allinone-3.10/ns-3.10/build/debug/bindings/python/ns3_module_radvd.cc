#include "ns3module.h"


pybindgen::TypeMap PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____typeid_map;



static int
_wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_init__0(PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::SimpleRefCount< ns3::RadvdInterface, ns3::empty, ns3::DefaultDeleter<ns3::RadvdInterface> >();
    return 0;
}

static int
_wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_init__1(PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *o;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___Type, &o)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::SimpleRefCount< ns3::RadvdInterface, ns3::empty, ns3::DefaultDeleter<ns3::RadvdInterface> >(*((PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *) o)->obj);
    return 0;
}

int _wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_init(PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___Cleanup(void)
{
    PyObject *py_retval;
    
    ns3::SimpleRefCount< ns3::RadvdInterface, ns3::empty, ns3::DefaultDeleter<ns3::RadvdInterface> >::Cleanup();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____copy__(PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *self)
{

    PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *py_copy;
    py_copy = PyObject_New(PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__, &PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___Type);
    py_copy->obj = new ns3::SimpleRefCount< ns3::RadvdInterface, ns3::empty, ns3::DefaultDeleter<ns3::RadvdInterface> >(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___methods[] = {
    {(char *) "Cleanup", (PyCFunction) _wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___Cleanup, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_dealloc(PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::SimpleRefCount< ns3::RadvdInterface, ns3::empty, ns3::DefaultDeleter<ns3::RadvdInterface> > *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_richcompare (PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *PYBINDGEN_UNUSED(self), PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___Type)) {
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

PyTypeObject PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__",            /* tp_name */
    sizeof(PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_init,             /* tp_init */
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




pybindgen::TypeMap PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____typeid_map;



static int
_wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_init__0(PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::SimpleRefCount< ns3::RadvdPrefix, ns3::empty, ns3::DefaultDeleter<ns3::RadvdPrefix> >();
    return 0;
}

static int
_wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_init__1(PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *o;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___Type, &o)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::SimpleRefCount< ns3::RadvdPrefix, ns3::empty, ns3::DefaultDeleter<ns3::RadvdPrefix> >(*((PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *) o)->obj);
    return 0;
}

int _wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_init(PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___Cleanup(void)
{
    PyObject *py_retval;
    
    ns3::SimpleRefCount< ns3::RadvdPrefix, ns3::empty, ns3::DefaultDeleter<ns3::RadvdPrefix> >::Cleanup();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____copy__(PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *self)
{

    PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *py_copy;
    py_copy = PyObject_New(PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__, &PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___Type);
    py_copy->obj = new ns3::SimpleRefCount< ns3::RadvdPrefix, ns3::empty, ns3::DefaultDeleter<ns3::RadvdPrefix> >(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___methods[] = {
    {(char *) "Cleanup", (PyCFunction) _wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___Cleanup, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_dealloc(PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::SimpleRefCount< ns3::RadvdPrefix, ns3::empty, ns3::DefaultDeleter<ns3::RadvdPrefix> > *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_richcompare (PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *PYBINDGEN_UNUSED(self), PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___Type)) {
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

PyTypeObject PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__",            /* tp_name */
    sizeof(PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_init,             /* tp_init */
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
PyNs3Radvd__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3Radvd *self)
{
    PyObject *py_retval;
    PyNs3Radvd__PythonHelper *helper = dynamic_cast< PyNs3Radvd__PythonHelper* >(self->obj);
    
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
PyNs3Radvd__PythonHelper::_wrap_NotifyNewAggregate(PyNs3Radvd *self)
{
    PyObject *py_retval;
    PyNs3Radvd__PythonHelper *helper = dynamic_cast< PyNs3Radvd__PythonHelper* >(self->obj);
    
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
PyNs3Radvd__PythonHelper::_wrap_DoStart(PyNs3Radvd *self)
{
    PyObject *py_retval;
    PyNs3Radvd__PythonHelper *helper = dynamic_cast< PyNs3Radvd__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoStart of class Application is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoStart__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3Radvd__PythonHelper::_wrap_DoDispose(PyNs3Radvd *self)
{
    PyObject *py_retval;
    PyNs3Radvd__PythonHelper *helper = dynamic_cast< PyNs3Radvd__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class Radvd is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3Radvd__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Radvd *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Radvd::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = (ns3::Radvd*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3Radvd__PythonHelper::StartApplication()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Radvd *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StartApplication"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = (ns3::Radvd*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StartApplication", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3Radvd__PythonHelper::StopApplication()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Radvd *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StopApplication"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = (ns3::Radvd*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StopApplication", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3Radvd__PythonHelper::DoStart()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Application *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Application::DoStart();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Application* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Application* >(m_pyself)->obj = (ns3::Application*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoStart", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3Radvd__PythonHelper::GetInstanceTypeId() const
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
PyNs3Radvd__PythonHelper::NotifyNewAggregate()
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
PyNs3Radvd__PythonHelper::NotifyConstructionCompleted()
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
static PyObject* _wrap_PyNs3Radvd__get_MAX_RA_DELAY_TIME(PyObject * PYBINDGEN_UNUSED(obj), void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(ns3::Radvd::MAX_RA_DELAY_TIME));
    return py_retval;
}
static PyGetSetDef Ns3RadvdMeta__getsets[] = {
    {
        (char*) "MAX_RA_DELAY_TIME", /* attribute name */
        (getter) _wrap_PyNs3Radvd__get_MAX_RA_DELAY_TIME, /* C function to get the attribute */
        (setter) NULL, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    { NULL, NULL, NULL, NULL, NULL }
};

PyTypeObject PyNs3RadvdMeta_Type = {
	PyObject_HEAD_INIT(NULL)
	0,					/* ob_size */
	(char *) "Ns3RadvdMeta",		        /* tp_name */
	0,					/* tp_basicsize */
	0,					/* tp_itemsize */
	0,	 				/* tp_dealloc */
	0,					/* tp_print */
	0,					/* tp_getattr */
	0,					/* tp_setattr */
	0,					/* tp_compare */
	0,					/* tp_repr */
	0,					/* tp_as_number */
	0,					/* tp_as_sequence */
	0,		       			/* tp_as_mapping */
	0,					/* tp_hash */
	0,					/* tp_call */
	0,					/* tp_str */
	0,					/* tp_getattro */
	0,					/* tp_setattro */
	0,					/* tp_as_buffer */
	Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, /* tp_flags */
 	0,					/* tp_doc */
	0,					/* tp_traverse */
 	0,					/* tp_clear */
	0,					/* tp_richcompare */
	0,					/* tp_weaklistoffset */
	0,					/* tp_iter */
	0,					/* tp_iternext */
	0,					/* tp_methods */
	0,					/* tp_members */
	Ns3RadvdMeta__getsets,				/* tp_getset */
	0,					/* tp_base */
	0,					/* tp_dict */
	0,	                                /* tp_descr_get */
	0,  		                        /* tp_descr_set */
	0,					/* tp_dictoffset */
	0,					/* tp_init */
	0,					/* tp_alloc */
	0,					/* tp_new */
	0,               			/* tp_free */
        0,                                      /* tp_is_gc */
        0,                                      /* tp_bases */
        0,                                      /* tp_mro */
        0,                                      /* tp_cache */
        0,                                      /* tp_subclasses */
        0,                                      /* tp_weaklist */
        0                                       /* tp_del */
};



static int
_wrap_PyNs3Radvd__tp_init__0(PyNs3Radvd *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Radvd *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Radvd_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3Radvd_Type)
    {
        self->obj = new PyNs3Radvd__PythonHelper(*((PyNs3Radvd *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3Radvd__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::Radvd(*((PyNs3Radvd *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3Radvd__tp_init__1(PyNs3Radvd *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3Radvd_Type)
    {
        self->obj = new PyNs3Radvd__PythonHelper();
        self->obj->Ref ();
        ((PyNs3Radvd__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::Radvd();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3Radvd__tp_init(PyNs3Radvd *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Radvd__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Radvd__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Radvd_AddConfiguration(PyNs3Radvd *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3RadvdInterface *routerInterface;
    ns3::RadvdInterface *routerInterface_ptr;
    const char *keywords[] = {"routerInterface", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3RadvdInterface_Type, &routerInterface)) {
        return NULL;
    }
    routerInterface_ptr = (routerInterface ? routerInterface->obj : NULL);
    self->obj->AddConfiguration(ns3::Ptr< ns3::RadvdInterface  > (routerInterface_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Radvd_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::Radvd::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


static PyObject*
_wrap_PyNs3Radvd__copy__(PyNs3Radvd *self)
{

    PyNs3Radvd *py_copy;
    py_copy = PyObject_GC_New(PyNs3Radvd, &PyNs3Radvd_Type);
    py_copy->obj = new ns3::Radvd(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Radvd_methods[] = {
    {(char *) "AddConfiguration", (PyCFunction) _wrap_PyNs3Radvd_AddConfiguration, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3Radvd_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3Radvd__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3Radvd__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3Radvd__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3Radvd__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Radvd__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3Radvd__tp_clear(PyNs3Radvd *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::Radvd *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3Radvd__tp_traverse(PyNs3Radvd *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3Radvd__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3Radvd__tp_dealloc(PyNs3Radvd *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3Radvd__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Radvd__tp_richcompare (PyNs3Radvd *PYBINDGEN_UNUSED(self), PyNs3Radvd *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Radvd_Type)) {
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

PyTypeObject PyNs3Radvd_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.Radvd",            /* tp_name */
    sizeof(PyNs3Radvd),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Radvd__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3Radvd__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3Radvd__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3Radvd__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Radvd_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3Radvd, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Radvd__tp_init,             /* tp_init */
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
_wrap_PyNs3RadvdInterface__tp_init__0(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3RadvdInterface *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3RadvdInterface_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::RadvdInterface(*((PyNs3RadvdInterface *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3RadvdInterface__tp_init__1(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    unsigned int interface;
    const char *keywords[] = {"interface", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &interface)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::RadvdInterface(interface);
    return 0;
}

static int
_wrap_PyNs3RadvdInterface__tp_init__2(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    unsigned int interface;
    unsigned int maxRtrAdvInterval;
    unsigned int minRtrAdvInterval;
    const char *keywords[] = {"interface", "maxRtrAdvInterval", "minRtrAdvInterval", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "III", (char **) keywords, &interface, &maxRtrAdvInterval, &minRtrAdvInterval)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::RadvdInterface(interface, maxRtrAdvInterval, minRtrAdvInterval);
    return 0;
}

int _wrap_PyNs3RadvdInterface__tp_init(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[3] = {0,};
    retval = _wrap_PyNs3RadvdInterface__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3RadvdInterface__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3RadvdInterface__tp_init__2(self, args, kwargs, &exceptions[2]);
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
_wrap_PyNs3RadvdInterface_SetMinRtrAdvInterval(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int minRtrAdvInterval;
    const char *keywords[] = {"minRtrAdvInterval", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &minRtrAdvInterval)) {
        return NULL;
    }
    self->obj->SetMinRtrAdvInterval(minRtrAdvInterval);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetHomeAgentPreference(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetHomeAgentPreference();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_IsManagedFlag(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsManagedFlag();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_IsHomeAgentInfo(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsHomeAgentInfo();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetDefaultPreference(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetDefaultPreference();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetHomeAgentLifeTime(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetHomeAgentLifeTime();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetManagedFlag(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool managedFlag;
    PyObject *py_managedFlag;
    const char *keywords[] = {"managedFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_managedFlag)) {
        return NULL;
    }
    managedFlag = (bool) PyObject_IsTrue(py_managedFlag);
    self->obj->SetManagedFlag(managedFlag);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetHomeAgentInfo(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool homeAgentFlag;
    PyObject *py_homeAgentFlag;
    const char *keywords[] = {"homeAgentFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_homeAgentFlag)) {
        return NULL;
    }
    homeAgentFlag = (bool) PyObject_IsTrue(py_homeAgentFlag);
    self->obj->SetHomeAgentInfo(homeAgentFlag);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_IsMobRtrSupportFlag(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsMobRtrSupportFlag();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetMinRtrAdvInterval(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetMinRtrAdvInterval();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetMaxRtrAdvInterval(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetMaxRtrAdvInterval();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_IsSendAdvert(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsSendAdvert();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetMinDelayBetweenRAs(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int minDelayBetweenRAs;
    const char *keywords[] = {"minDelayBetweenRAs", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &minDelayBetweenRAs)) {
        return NULL;
    }
    self->obj->SetMinDelayBetweenRAs(minDelayBetweenRAs);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetMaxRtrAdvInterval(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int maxRtrAdvInterval;
    const char *keywords[] = {"maxRtrAdvInterval", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &maxRtrAdvInterval)) {
        return NULL;
    }
    self->obj->SetMaxRtrAdvInterval(maxRtrAdvInterval);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetCurHopLimit(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetCurHopLimit();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetSourceLLAddress(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool sourceLLAddress;
    PyObject *py_sourceLLAddress;
    const char *keywords[] = {"sourceLLAddress", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_sourceLLAddress)) {
        return NULL;
    }
    sourceLLAddress = (bool) PyObject_IsTrue(py_sourceLLAddress);
    self->obj->SetSourceLLAddress(sourceLLAddress);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_AddPrefix(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3RadvdPrefix *routerPrefix;
    ns3::RadvdPrefix *routerPrefix_ptr;
    const char *keywords[] = {"routerPrefix", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3RadvdPrefix_Type, &routerPrefix)) {
        return NULL;
    }
    routerPrefix_ptr = (routerPrefix ? routerPrefix->obj : NULL);
    self->obj->AddPrefix(ns3::Ptr< ns3::RadvdPrefix  > (routerPrefix_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_IsHomeAgentFlag(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsHomeAgentFlag();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetReachableTime(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int reachableTime;
    const char *keywords[] = {"reachableTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &reachableTime)) {
        return NULL;
    }
    self->obj->SetReachableTime(reachableTime);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetHomeAgentLifeTime(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int homeAgentLifeTime;
    const char *keywords[] = {"homeAgentLifeTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &homeAgentLifeTime)) {
        return NULL;
    }
    self->obj->SetHomeAgentLifeTime(homeAgentLifeTime);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetHomeAgentFlag(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool homeAgentFlag;
    PyObject *py_homeAgentFlag;
    const char *keywords[] = {"homeAgentFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_homeAgentFlag)) {
        return NULL;
    }
    homeAgentFlag = (bool) PyObject_IsTrue(py_homeAgentFlag);
    self->obj->SetHomeAgentFlag(homeAgentFlag);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetLinkMtu(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int linkMtu;
    const char *keywords[] = {"linkMtu", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &linkMtu)) {
        return NULL;
    }
    self->obj->SetLinkMtu(linkMtu);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetHomeAgentPreference(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int homeAgentPreference;
    const char *keywords[] = {"homeAgentPreference", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &homeAgentPreference)) {
        return NULL;
    }
    self->obj->SetHomeAgentPreference(homeAgentPreference);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_IsSourceLLAddress(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsSourceLLAddress();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_IsOtherConfigFlag(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsOtherConfigFlag();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetRetransTimer(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int retransTimer;
    const char *keywords[] = {"retransTimer", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &retransTimer)) {
        return NULL;
    }
    self->obj->SetRetransTimer(retransTimer);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetCurHopLimit(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int curHopLimit;
    const char *keywords[] = {"curHopLimit", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &curHopLimit)) {
        return NULL;
    }
    if (curHopLimit > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetCurHopLimit(curHopLimit);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetMobRtrSupportFlag(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool mobRtrSupportFlag;
    PyObject *py_mobRtrSupportFlag;
    const char *keywords[] = {"mobRtrSupportFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_mobRtrSupportFlag)) {
        return NULL;
    }
    mobRtrSupportFlag = (bool) PyObject_IsTrue(py_mobRtrSupportFlag);
    self->obj->SetMobRtrSupportFlag(mobRtrSupportFlag);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetDefaultLifeTime(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetDefaultLifeTime();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetDefaultLifeTime(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int defaultLifeTime;
    const char *keywords[] = {"defaultLifeTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &defaultLifeTime)) {
        return NULL;
    }
    self->obj->SetDefaultLifeTime(defaultLifeTime);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_IsIntervalOpt(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsIntervalOpt();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetLinkMtu(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetLinkMtu();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetRetransTimer(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetRetransTimer();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetMinDelayBetweenRAs(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetMinDelayBetweenRAs();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetOtherConfigFlag(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool otherConfigFlag;
    PyObject *py_otherConfigFlag;
    const char *keywords[] = {"otherConfigFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_otherConfigFlag)) {
        return NULL;
    }
    otherConfigFlag = (bool) PyObject_IsTrue(py_otherConfigFlag);
    self->obj->SetOtherConfigFlag(otherConfigFlag);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetSendAdvert(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool sendAdvert;
    PyObject *py_sendAdvert;
    const char *keywords[] = {"sendAdvert", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_sendAdvert)) {
        return NULL;
    }
    sendAdvert = (bool) PyObject_IsTrue(py_sendAdvert);
    self->obj->SetSendAdvert(sendAdvert);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetDefaultPreference(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int defaultPreference;
    const char *keywords[] = {"defaultPreference", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &defaultPreference)) {
        return NULL;
    }
    if (defaultPreference > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetDefaultPreference(defaultPreference);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetInterface(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetInterface();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetIntervalOpt(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool intervalOpt;
    PyObject *py_intervalOpt;
    const char *keywords[] = {"intervalOpt", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_intervalOpt)) {
        return NULL;
    }
    intervalOpt = (bool) PyObject_IsTrue(py_intervalOpt);
    self->obj->SetIntervalOpt(intervalOpt);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetReachableTime(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetReachableTime();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


static PyObject*
_wrap_PyNs3RadvdInterface__copy__(PyNs3RadvdInterface *self)
{

    PyNs3RadvdInterface *py_copy;
    py_copy = PyObject_New(PyNs3RadvdInterface, &PyNs3RadvdInterface_Type);
    py_copy->obj = new ns3::RadvdInterface(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3RadvdInterface_methods[] = {
    {(char *) "SetMinRtrAdvInterval", (PyCFunction) _wrap_PyNs3RadvdInterface_SetMinRtrAdvInterval, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetHomeAgentPreference", (PyCFunction) _wrap_PyNs3RadvdInterface_GetHomeAgentPreference, METH_NOARGS, NULL },
    {(char *) "IsManagedFlag", (PyCFunction) _wrap_PyNs3RadvdInterface_IsManagedFlag, METH_NOARGS, NULL },
    {(char *) "IsHomeAgentInfo", (PyCFunction) _wrap_PyNs3RadvdInterface_IsHomeAgentInfo, METH_NOARGS, NULL },
    {(char *) "GetDefaultPreference", (PyCFunction) _wrap_PyNs3RadvdInterface_GetDefaultPreference, METH_NOARGS, NULL },
    {(char *) "GetHomeAgentLifeTime", (PyCFunction) _wrap_PyNs3RadvdInterface_GetHomeAgentLifeTime, METH_NOARGS, NULL },
    {(char *) "SetManagedFlag", (PyCFunction) _wrap_PyNs3RadvdInterface_SetManagedFlag, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetHomeAgentInfo", (PyCFunction) _wrap_PyNs3RadvdInterface_SetHomeAgentInfo, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsMobRtrSupportFlag", (PyCFunction) _wrap_PyNs3RadvdInterface_IsMobRtrSupportFlag, METH_NOARGS, NULL },
    {(char *) "GetMinRtrAdvInterval", (PyCFunction) _wrap_PyNs3RadvdInterface_GetMinRtrAdvInterval, METH_NOARGS, NULL },
    {(char *) "GetMaxRtrAdvInterval", (PyCFunction) _wrap_PyNs3RadvdInterface_GetMaxRtrAdvInterval, METH_NOARGS, NULL },
    {(char *) "IsSendAdvert", (PyCFunction) _wrap_PyNs3RadvdInterface_IsSendAdvert, METH_NOARGS, NULL },
    {(char *) "SetMinDelayBetweenRAs", (PyCFunction) _wrap_PyNs3RadvdInterface_SetMinDelayBetweenRAs, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetMaxRtrAdvInterval", (PyCFunction) _wrap_PyNs3RadvdInterface_SetMaxRtrAdvInterval, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetCurHopLimit", (PyCFunction) _wrap_PyNs3RadvdInterface_GetCurHopLimit, METH_NOARGS, NULL },
    {(char *) "SetSourceLLAddress", (PyCFunction) _wrap_PyNs3RadvdInterface_SetSourceLLAddress, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "AddPrefix", (PyCFunction) _wrap_PyNs3RadvdInterface_AddPrefix, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsHomeAgentFlag", (PyCFunction) _wrap_PyNs3RadvdInterface_IsHomeAgentFlag, METH_NOARGS, NULL },
    {(char *) "SetReachableTime", (PyCFunction) _wrap_PyNs3RadvdInterface_SetReachableTime, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetHomeAgentLifeTime", (PyCFunction) _wrap_PyNs3RadvdInterface_SetHomeAgentLifeTime, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetHomeAgentFlag", (PyCFunction) _wrap_PyNs3RadvdInterface_SetHomeAgentFlag, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetLinkMtu", (PyCFunction) _wrap_PyNs3RadvdInterface_SetLinkMtu, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetHomeAgentPreference", (PyCFunction) _wrap_PyNs3RadvdInterface_SetHomeAgentPreference, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsSourceLLAddress", (PyCFunction) _wrap_PyNs3RadvdInterface_IsSourceLLAddress, METH_NOARGS, NULL },
    {(char *) "IsOtherConfigFlag", (PyCFunction) _wrap_PyNs3RadvdInterface_IsOtherConfigFlag, METH_NOARGS, NULL },
    {(char *) "SetRetransTimer", (PyCFunction) _wrap_PyNs3RadvdInterface_SetRetransTimer, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetCurHopLimit", (PyCFunction) _wrap_PyNs3RadvdInterface_SetCurHopLimit, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetMobRtrSupportFlag", (PyCFunction) _wrap_PyNs3RadvdInterface_SetMobRtrSupportFlag, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetDefaultLifeTime", (PyCFunction) _wrap_PyNs3RadvdInterface_GetDefaultLifeTime, METH_NOARGS, NULL },
    {(char *) "SetDefaultLifeTime", (PyCFunction) _wrap_PyNs3RadvdInterface_SetDefaultLifeTime, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsIntervalOpt", (PyCFunction) _wrap_PyNs3RadvdInterface_IsIntervalOpt, METH_NOARGS, NULL },
    {(char *) "GetLinkMtu", (PyCFunction) _wrap_PyNs3RadvdInterface_GetLinkMtu, METH_NOARGS, NULL },
    {(char *) "GetRetransTimer", (PyCFunction) _wrap_PyNs3RadvdInterface_GetRetransTimer, METH_NOARGS, NULL },
    {(char *) "GetMinDelayBetweenRAs", (PyCFunction) _wrap_PyNs3RadvdInterface_GetMinDelayBetweenRAs, METH_NOARGS, NULL },
    {(char *) "SetOtherConfigFlag", (PyCFunction) _wrap_PyNs3RadvdInterface_SetOtherConfigFlag, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetSendAdvert", (PyCFunction) _wrap_PyNs3RadvdInterface_SetSendAdvert, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetDefaultPreference", (PyCFunction) _wrap_PyNs3RadvdInterface_SetDefaultPreference, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetInterface", (PyCFunction) _wrap_PyNs3RadvdInterface_GetInterface, METH_NOARGS, NULL },
    {(char *) "SetIntervalOpt", (PyCFunction) _wrap_PyNs3RadvdInterface_SetIntervalOpt, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetReachableTime", (PyCFunction) _wrap_PyNs3RadvdInterface_GetReachableTime, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3RadvdInterface__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3RadvdInterface__tp_dealloc(PyNs3RadvdInterface *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::RadvdInterface *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3RadvdInterface__tp_richcompare (PyNs3RadvdInterface *PYBINDGEN_UNUSED(self), PyNs3RadvdInterface *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3RadvdInterface_Type)) {
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

PyTypeObject PyNs3RadvdInterface_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.RadvdInterface",            /* tp_name */
    sizeof(PyNs3RadvdInterface),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3RadvdInterface__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3RadvdInterface__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3RadvdInterface_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3RadvdInterface__tp_init,             /* tp_init */
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
_wrap_PyNs3RadvdPrefix__tp_init__0(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3RadvdPrefix *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3RadvdPrefix_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::RadvdPrefix(*((PyNs3RadvdPrefix *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3RadvdPrefix__tp_init__1(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Ipv6Address *network;
    int prefixLength;
    unsigned int preferredLifeTime = 604800;
    unsigned int validLifeTime = 2592000;
    bool onLinkFlag;
    PyObject *py_onLinkFlag = NULL;
    bool autonomousFlag;
    PyObject *py_autonomousFlag = NULL;
    bool routerAddrFlag;
    PyObject *py_routerAddrFlag = NULL;
    const char *keywords[] = {"network", "prefixLength", "preferredLifeTime", "validLifeTime", "onLinkFlag", "autonomousFlag", "routerAddrFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!i|IIOOO", (char **) keywords, &PyNs3Ipv6Address_Type, &network, &prefixLength, &preferredLifeTime, &validLifeTime, &py_onLinkFlag, &py_autonomousFlag, &py_routerAddrFlag)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (prefixLength > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    onLinkFlag = py_onLinkFlag? (bool) PyObject_IsTrue(py_onLinkFlag) : true;
    autonomousFlag = py_autonomousFlag? (bool) PyObject_IsTrue(py_autonomousFlag) : true;
    routerAddrFlag = py_routerAddrFlag? (bool) PyObject_IsTrue(py_routerAddrFlag) : false;
    self->obj = new ns3::RadvdPrefix(*((PyNs3Ipv6Address *) network)->obj, prefixLength, preferredLifeTime, validLifeTime, onLinkFlag, autonomousFlag, routerAddrFlag);
    return 0;
}

int _wrap_PyNs3RadvdPrefix__tp_init(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3RadvdPrefix__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3RadvdPrefix__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3RadvdPrefix_IsRouterAddrFlag(PyNs3RadvdPrefix *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsRouterAddrFlag();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_SetNetwork(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Ipv6Address *network;
    const char *keywords[] = {"network", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv6Address_Type, &network)) {
        return NULL;
    }
    self->obj->SetNetwork(*((PyNs3Ipv6Address *) network)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_SetOnLinkFlag(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool onLinkFlag;
    PyObject *py_onLinkFlag;
    const char *keywords[] = {"onLinkFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_onLinkFlag)) {
        return NULL;
    }
    onLinkFlag = (bool) PyObject_IsTrue(py_onLinkFlag);
    self->obj->SetOnLinkFlag(onLinkFlag);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_SetValidLifeTime(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int validLifeTime;
    const char *keywords[] = {"validLifeTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &validLifeTime)) {
        return NULL;
    }
    self->obj->SetValidLifeTime(validLifeTime);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_IsOnLinkFlag(PyNs3RadvdPrefix *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsOnLinkFlag();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_GetPrefixLength(PyNs3RadvdPrefix *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetPrefixLength();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_SetPreferredLifeTime(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int preferredLifeTime;
    const char *keywords[] = {"preferredLifeTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &preferredLifeTime)) {
        return NULL;
    }
    self->obj->SetPreferredLifeTime(preferredLifeTime);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_SetAutonomousFlag(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool autonomousFlag;
    PyObject *py_autonomousFlag;
    const char *keywords[] = {"autonomousFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_autonomousFlag)) {
        return NULL;
    }
    autonomousFlag = (bool) PyObject_IsTrue(py_autonomousFlag);
    self->obj->SetAutonomousFlag(autonomousFlag);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_GetPreferredLifeTime(PyNs3RadvdPrefix *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetPreferredLifeTime();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_SetPrefixLength(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int prefixLength;
    const char *keywords[] = {"prefixLength", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &prefixLength)) {
        return NULL;
    }
    if (prefixLength > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetPrefixLength(prefixLength);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_GetNetwork(PyNs3RadvdPrefix *self)
{
    PyObject *py_retval;
    PyNs3Ipv6Address *py_Ipv6Address;
    
    ns3::Ipv6Address retval = self->obj->GetNetwork();
    py_Ipv6Address = PyObject_New(PyNs3Ipv6Address, &PyNs3Ipv6Address_Type);
    py_Ipv6Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ipv6Address->obj = new ns3::Ipv6Address(retval);
    PyNs3Ipv6Address_wrapper_registry[(void *) py_Ipv6Address->obj] = (PyObject *) py_Ipv6Address;
    py_retval = Py_BuildValue((char *) "N", py_Ipv6Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_SetRouterAddrFlag(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool routerAddrFlag;
    PyObject *py_routerAddrFlag;
    const char *keywords[] = {"routerAddrFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_routerAddrFlag)) {
        return NULL;
    }
    routerAddrFlag = (bool) PyObject_IsTrue(py_routerAddrFlag);
    self->obj->SetRouterAddrFlag(routerAddrFlag);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_IsAutonomousFlag(PyNs3RadvdPrefix *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsAutonomousFlag();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_GetValidLifeTime(PyNs3RadvdPrefix *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetValidLifeTime();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


static PyObject*
_wrap_PyNs3RadvdPrefix__copy__(PyNs3RadvdPrefix *self)
{

    PyNs3RadvdPrefix *py_copy;
    py_copy = PyObject_New(PyNs3RadvdPrefix, &PyNs3RadvdPrefix_Type);
    py_copy->obj = new ns3::RadvdPrefix(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3RadvdPrefix_methods[] = {
    {(char *) "IsRouterAddrFlag", (PyCFunction) _wrap_PyNs3RadvdPrefix_IsRouterAddrFlag, METH_NOARGS, NULL },
    {(char *) "SetNetwork", (PyCFunction) _wrap_PyNs3RadvdPrefix_SetNetwork, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetOnLinkFlag", (PyCFunction) _wrap_PyNs3RadvdPrefix_SetOnLinkFlag, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetValidLifeTime", (PyCFunction) _wrap_PyNs3RadvdPrefix_SetValidLifeTime, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsOnLinkFlag", (PyCFunction) _wrap_PyNs3RadvdPrefix_IsOnLinkFlag, METH_NOARGS, NULL },
    {(char *) "GetPrefixLength", (PyCFunction) _wrap_PyNs3RadvdPrefix_GetPrefixLength, METH_NOARGS, NULL },
    {(char *) "SetPreferredLifeTime", (PyCFunction) _wrap_PyNs3RadvdPrefix_SetPreferredLifeTime, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetAutonomousFlag", (PyCFunction) _wrap_PyNs3RadvdPrefix_SetAutonomousFlag, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetPreferredLifeTime", (PyCFunction) _wrap_PyNs3RadvdPrefix_GetPreferredLifeTime, METH_NOARGS, NULL },
    {(char *) "SetPrefixLength", (PyCFunction) _wrap_PyNs3RadvdPrefix_SetPrefixLength, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetNetwork", (PyCFunction) _wrap_PyNs3RadvdPrefix_GetNetwork, METH_NOARGS, NULL },
    {(char *) "SetRouterAddrFlag", (PyCFunction) _wrap_PyNs3RadvdPrefix_SetRouterAddrFlag, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsAutonomousFlag", (PyCFunction) _wrap_PyNs3RadvdPrefix_IsAutonomousFlag, METH_NOARGS, NULL },
    {(char *) "GetValidLifeTime", (PyCFunction) _wrap_PyNs3RadvdPrefix_GetValidLifeTime, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3RadvdPrefix__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3RadvdPrefix__tp_dealloc(PyNs3RadvdPrefix *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::RadvdPrefix *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3RadvdPrefix__tp_richcompare (PyNs3RadvdPrefix *PYBINDGEN_UNUSED(self), PyNs3RadvdPrefix *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3RadvdPrefix_Type)) {
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

PyTypeObject PyNs3RadvdPrefix_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.RadvdPrefix",            /* tp_name */
    sizeof(PyNs3RadvdPrefix),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3RadvdPrefix__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3RadvdPrefix__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3RadvdPrefix_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3RadvdPrefix__tp_init,             /* tp_init */
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


