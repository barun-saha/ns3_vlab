#include "ns3module.h"

PyObject *
_wrap_ns3TimeStep(PyObject * PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint64_t ts;
    const char *keywords[] = {"ts", NULL};
    PyNs3Time *py_Time;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "K", (char **) keywords, &ts)) {
        return NULL;
    }
    ns3::Time retval = ns3::TimeStep(ts);
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}



PyObject *
_wrap_ns3Abs__0(PyObject * PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3HighPrecision *value;
    const char *keywords[] = {"value", NULL};
    PyNs3HighPrecision *py_HighPrecision;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3HighPrecision_Type, &value)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::HighPrecision retval = ns3::Abs(*((PyNs3HighPrecision *) value)->obj);
    py_HighPrecision = PyObject_New(PyNs3HighPrecision, &PyNs3HighPrecision_Type);
    py_HighPrecision->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_HighPrecision->obj = new ns3::HighPrecision(retval);
    PyNs3HighPrecision_wrapper_registry[(void *) py_HighPrecision->obj] = (PyObject *) py_HighPrecision;
    py_retval = Py_BuildValue((char *) "N", py_HighPrecision);
    return py_retval;
}

PyObject *
_wrap_ns3Abs__1(PyObject * PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyObject *time;
    ns3::Time time2;
    const char *keywords[] = {"time", NULL};
    PyNs3Time *py_Time;
    
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
    ns3::Time retval = ns3::Abs(time2);
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}

PyObject * _wrap_ns3Abs(PyObject *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_ns3Abs__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_ns3Abs__1(self, args, kwargs, &exceptions[1]);
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
_wrap_ns3Seconds(PyObject * PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    double seconds;
    const char *keywords[] = {"seconds", NULL};
    PyNs3Time *py_Time;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "d", (char **) keywords, &seconds)) {
        return NULL;
    }
    ns3::Time retval = ns3::Seconds(seconds);
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}



PyObject *
_wrap_ns3Max__0(PyObject * PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3HighPrecision *a;
    PyNs3HighPrecision *b;
    const char *keywords[] = {"a", "b", NULL};
    PyNs3HighPrecision *py_HighPrecision;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!", (char **) keywords, &PyNs3HighPrecision_Type, &a, &PyNs3HighPrecision_Type, &b)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::HighPrecision retval = ns3::Max(*((PyNs3HighPrecision *) a)->obj, *((PyNs3HighPrecision *) b)->obj);
    py_HighPrecision = PyObject_New(PyNs3HighPrecision, &PyNs3HighPrecision_Type);
    py_HighPrecision->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_HighPrecision->obj = new ns3::HighPrecision(retval);
    PyNs3HighPrecision_wrapper_registry[(void *) py_HighPrecision->obj] = (PyObject *) py_HighPrecision;
    py_retval = Py_BuildValue((char *) "N", py_HighPrecision);
    return py_retval;
}

PyObject *
_wrap_ns3Max__1(PyObject * PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyObject *ta;
    ns3::Time ta2;
    PyObject *tb;
    ns3::Time tb2;
    const char *keywords[] = {"ta", "tb", NULL};
    PyNs3Time *py_Time;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "OO", (char **) keywords, &ta, &tb)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    if (PyObject_IsInstance(ta, (PyObject*) &PyNs3Time_Type)) {
        ta2 = *((PyNs3Time *) ta)->obj;
    } else if (PyObject_IsInstance(ta, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        ta2 = *((PyNs3TracedValue__Ns3Time *) ta)->obj;
    } else if (PyObject_IsInstance(ta, (PyObject*) &PyNs3Scalar_Type)) {
        ta2 = *((PyNs3Scalar *) ta)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", ta->ob_type->tp_name);
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    if (PyObject_IsInstance(tb, (PyObject*) &PyNs3Time_Type)) {
        tb2 = *((PyNs3Time *) tb)->obj;
    } else if (PyObject_IsInstance(tb, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        tb2 = *((PyNs3TracedValue__Ns3Time *) tb)->obj;
    } else if (PyObject_IsInstance(tb, (PyObject*) &PyNs3Scalar_Type)) {
        tb2 = *((PyNs3Scalar *) tb)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", tb->ob_type->tp_name);
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::Time retval = ns3::Max(ta2, tb2);
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}

PyObject * _wrap_ns3Max(PyObject *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_ns3Max__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_ns3Max__1(self, args, kwargs, &exceptions[1]);
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
_wrap_ns3Min__0(PyObject * PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3HighPrecision *a;
    PyNs3HighPrecision *b;
    const char *keywords[] = {"a", "b", NULL};
    PyNs3HighPrecision *py_HighPrecision;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!", (char **) keywords, &PyNs3HighPrecision_Type, &a, &PyNs3HighPrecision_Type, &b)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::HighPrecision retval = ns3::Min(*((PyNs3HighPrecision *) a)->obj, *((PyNs3HighPrecision *) b)->obj);
    py_HighPrecision = PyObject_New(PyNs3HighPrecision, &PyNs3HighPrecision_Type);
    py_HighPrecision->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_HighPrecision->obj = new ns3::HighPrecision(retval);
    PyNs3HighPrecision_wrapper_registry[(void *) py_HighPrecision->obj] = (PyObject *) py_HighPrecision;
    py_retval = Py_BuildValue((char *) "N", py_HighPrecision);
    return py_retval;
}

PyObject *
_wrap_ns3Min__1(PyObject * PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyObject *ta;
    ns3::Time ta2;
    PyObject *tb;
    ns3::Time tb2;
    const char *keywords[] = {"ta", "tb", NULL};
    PyNs3Time *py_Time;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "OO", (char **) keywords, &ta, &tb)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    if (PyObject_IsInstance(ta, (PyObject*) &PyNs3Time_Type)) {
        ta2 = *((PyNs3Time *) ta)->obj;
    } else if (PyObject_IsInstance(ta, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        ta2 = *((PyNs3TracedValue__Ns3Time *) ta)->obj;
    } else if (PyObject_IsInstance(ta, (PyObject*) &PyNs3Scalar_Type)) {
        ta2 = *((PyNs3Scalar *) ta)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", ta->ob_type->tp_name);
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    if (PyObject_IsInstance(tb, (PyObject*) &PyNs3Time_Type)) {
        tb2 = *((PyNs3Time *) tb)->obj;
    } else if (PyObject_IsInstance(tb, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        tb2 = *((PyNs3TracedValue__Ns3Time *) tb)->obj;
    } else if (PyObject_IsInstance(tb, (PyObject*) &PyNs3Scalar_Type)) {
        tb2 = *((PyNs3Scalar *) tb)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", tb->ob_type->tp_name);
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::Time retval = ns3::Min(ta2, tb2);
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}

PyObject * _wrap_ns3Min(PyObject *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_ns3Min__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_ns3Min__1(self, args, kwargs, &exceptions[1]);
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
_wrap_ns3FemtoSeconds(PyObject * PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint64_t fs;
    const char *keywords[] = {"fs", NULL};
    PyNs3Time *py_Time;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "K", (char **) keywords, &fs)) {
        return NULL;
    }
    ns3::Time retval = ns3::FemtoSeconds(fs);
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_ns3Now()
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = ns3::Now();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_ns3MilliSeconds(PyObject * PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint64_t ms;
    const char *keywords[] = {"ms", NULL};
    PyNs3Time *py_Time;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "K", (char **) keywords, &ms)) {
        return NULL;
    }
    ns3::Time retval = ns3::MilliSeconds(ms);
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_ns3NanoSeconds(PyObject * PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint64_t ns;
    const char *keywords[] = {"ns", NULL};
    PyNs3Time *py_Time;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "K", (char **) keywords, &ns)) {
        return NULL;
    }
    ns3::Time retval = ns3::NanoSeconds(ns);
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_ns3MakeTimeChecker()
{
    PyObject *py_retval;
    ns3::Ptr< ns3::AttributeChecker const > retval;
    PyNs3AttributeChecker *py_AttributeChecker;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = ns3::MakeTimeChecker();
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


PyObject *
_wrap_ns3PicoSeconds(PyObject * PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint64_t ps;
    const char *keywords[] = {"ps", NULL};
    PyNs3Time *py_Time;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "K", (char **) keywords, &ps)) {
        return NULL;
    }
    ns3::Time retval = ns3::PicoSeconds(ps);
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_ns3MicroSeconds(PyObject * PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint64_t us;
    const char *keywords[] = {"us", NULL};
    PyNs3Time *py_Time;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "K", (char **) keywords, &us)) {
        return NULL;
    }
    ns3::Time retval = ns3::MicroSeconds(us);
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


std::map<void*, PyObject*> PyNs3EventId_wrapper_registry;


static int
_wrap_PyNs3EventId__tp_init__0(PyNs3EventId *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3EventId *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3EventId_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::EventId(*((PyNs3EventId *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3EventId__tp_init__1(PyNs3EventId *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::EventId();
    return 0;
}

int _wrap_PyNs3EventId__tp_init(PyNs3EventId *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3EventId__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3EventId__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3EventId_IsRunning(PyNs3EventId *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsRunning();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3EventId_GetContext(PyNs3EventId *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetContext();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3EventId_Cancel(PyNs3EventId *self)
{
    PyObject *py_retval;
    
    self->obj->Cancel();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3EventId_GetUid(PyNs3EventId *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetUid();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3EventId_IsExpired(PyNs3EventId *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsExpired();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3EventId_GetTs(PyNs3EventId *self)
{
    PyObject *py_retval;
    uint64_t retval;
    
    retval = self->obj->GetTs();
    py_retval = Py_BuildValue((char *) "K", retval);
    return py_retval;
}


static PyObject*
_wrap_PyNs3EventId__copy__(PyNs3EventId *self)
{

    PyNs3EventId *py_copy;
    py_copy = PyObject_New(PyNs3EventId, &PyNs3EventId_Type);
    py_copy->obj = new ns3::EventId(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3EventId_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3EventId_methods[] = {
    {(char *) "IsRunning", (PyCFunction) _wrap_PyNs3EventId_IsRunning, METH_NOARGS, NULL },
    {(char *) "GetContext", (PyCFunction) _wrap_PyNs3EventId_GetContext, METH_NOARGS, NULL },
    {(char *) "Cancel", (PyCFunction) _wrap_PyNs3EventId_Cancel, METH_NOARGS, NULL },
    {(char *) "GetUid", (PyCFunction) _wrap_PyNs3EventId_GetUid, METH_NOARGS, NULL },
    {(char *) "IsExpired", (PyCFunction) _wrap_PyNs3EventId_IsExpired, METH_NOARGS, NULL },
    {(char *) "GetTs", (PyCFunction) _wrap_PyNs3EventId_GetTs, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3EventId__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3EventId__tp_dealloc(PyNs3EventId *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3EventId_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3EventId_wrapper_registry.end()) {
        PyNs3EventId_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::EventId *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3EventId__tp_richcompare (PyNs3EventId *PYBINDGEN_UNUSED(self), PyNs3EventId *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3EventId_Type)) {
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
        if (*self->obj != *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
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

PyTypeObject PyNs3EventId_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.EventId",            /* tp_name */
    sizeof(PyNs3EventId),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3EventId__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3EventId__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3EventId_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3EventId__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3HighPrecision_wrapper_registry;


static int
_wrap_PyNs3HighPrecision__tp_init__0(PyNs3HighPrecision *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3HighPrecision *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3HighPrecision_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::HighPrecision(*((PyNs3HighPrecision *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3HighPrecision__tp_init__1(PyNs3HighPrecision *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::HighPrecision();
    return 0;
}

static int
_wrap_PyNs3HighPrecision__tp_init__2(PyNs3HighPrecision *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    int64_t value;
    bool dummy;
    PyObject *py_dummy;
    const char *keywords[] = {"value", "dummy", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "LO", (char **) keywords, &value, &py_dummy)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    dummy = (bool) PyObject_IsTrue(py_dummy);
    self->obj = new ns3::HighPrecision(value, dummy);
    return 0;
}

static int
_wrap_PyNs3HighPrecision__tp_init__3(PyNs3HighPrecision *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    double value;
    const char *keywords[] = {"value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "d", (char **) keywords, &value)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::HighPrecision(value);
    return 0;
}

int _wrap_PyNs3HighPrecision__tp_init(PyNs3HighPrecision *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[4] = {0,};
    retval = _wrap_PyNs3HighPrecision__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3HighPrecision__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3HighPrecision__tp_init__2(self, args, kwargs, &exceptions[2]);
    if (!exceptions[2]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        return retval;
    }
    retval = _wrap_PyNs3HighPrecision__tp_init__3(self, args, kwargs, &exceptions[3]);
    if (!exceptions[3]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        return retval;
    }
    error_list = PyList_New(4);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyList_SET_ITEM(error_list, 2, PyObject_Str(exceptions[2]));
    Py_DECREF(exceptions[2]);
    PyList_SET_ITEM(error_list, 3, PyObject_Str(exceptions[3]));
    Py_DECREF(exceptions[3]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3HighPrecision_Compare(PyNs3HighPrecision *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int retval;
    PyNs3HighPrecision *o;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3HighPrecision_Type, &o)) {
        return NULL;
    }
    retval = self->obj->Compare(*((PyNs3HighPrecision *) o)->obj);
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3HighPrecision_Sub(PyNs3HighPrecision *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3HighPrecision *o;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3HighPrecision_Type, &o)) {
        return NULL;
    }
    self->obj->Sub(*((PyNs3HighPrecision *) o)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HighPrecision_GetInteger(PyNs3HighPrecision *self)
{
    PyObject *py_retval;
    int64_t retval;
    
    retval = self->obj->GetInteger();
    py_retval = Py_BuildValue((char *) "L", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3HighPrecision_Invert(PyNs3HighPrecision *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint64_t v;
    const char *keywords[] = {"v", NULL};
    PyNs3HighPrecision *py_HighPrecision;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "K", (char **) keywords, &v)) {
        return NULL;
    }
    ns3::HighPrecision retval = ns3::HighPrecision::Invert(v);
    py_HighPrecision = PyObject_New(PyNs3HighPrecision, &PyNs3HighPrecision_Type);
    py_HighPrecision->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_HighPrecision->obj = new ns3::HighPrecision(retval);
    PyNs3HighPrecision_wrapper_registry[(void *) py_HighPrecision->obj] = (PyObject *) py_HighPrecision;
    py_retval = Py_BuildValue((char *) "N", py_HighPrecision);
    return py_retval;
}


PyObject *
_wrap_PyNs3HighPrecision_GetDouble(PyNs3HighPrecision *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->GetDouble();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3HighPrecision_Add(PyNs3HighPrecision *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3HighPrecision *o;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3HighPrecision_Type, &o)) {
        return NULL;
    }
    self->obj->Add(*((PyNs3HighPrecision *) o)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HighPrecision_MulByInvert(PyNs3HighPrecision *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3HighPrecision *o;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3HighPrecision_Type, &o)) {
        return NULL;
    }
    self->obj->MulByInvert(*((PyNs3HighPrecision *) o)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HighPrecision_GetHigh(PyNs3HighPrecision *self)
{
    PyObject *py_retval;
    int64_t retval;
    
    retval = self->obj->GetHigh();
    py_retval = Py_BuildValue((char *) "L", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3HighPrecision_Mul(PyNs3HighPrecision *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3HighPrecision *o;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3HighPrecision_Type, &o)) {
        return NULL;
    }
    self->obj->Mul(*((PyNs3HighPrecision *) o)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HighPrecision_Div(PyNs3HighPrecision *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3HighPrecision *o;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3HighPrecision_Type, &o)) {
        return NULL;
    }
    self->obj->Div(*((PyNs3HighPrecision *) o)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HighPrecision_GetLow(PyNs3HighPrecision *self)
{
    PyObject *py_retval;
    uint64_t retval;
    
    retval = self->obj->GetLow();
    py_retval = Py_BuildValue((char *) "K", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3HighPrecision_Zero(void)
{
    PyObject *py_retval;
    PyNs3HighPrecision *py_HighPrecision;
    
    ns3::HighPrecision retval = ns3::HighPrecision::Zero();
    py_HighPrecision = PyObject_New(PyNs3HighPrecision, &PyNs3HighPrecision_Type);
    py_HighPrecision->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_HighPrecision->obj = new ns3::HighPrecision(retval);
    PyNs3HighPrecision_wrapper_registry[(void *) py_HighPrecision->obj] = (PyObject *) py_HighPrecision;
    py_retval = Py_BuildValue((char *) "N", py_HighPrecision);
    return py_retval;
}


static PyObject*
_wrap_PyNs3HighPrecision__copy__(PyNs3HighPrecision *self)
{

    PyNs3HighPrecision *py_copy;
    py_copy = PyObject_New(PyNs3HighPrecision, &PyNs3HighPrecision_Type);
    py_copy->obj = new ns3::HighPrecision(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3HighPrecision_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3HighPrecision_methods[] = {
    {(char *) "Compare", (PyCFunction) _wrap_PyNs3HighPrecision_Compare, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Sub", (PyCFunction) _wrap_PyNs3HighPrecision_Sub, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetInteger", (PyCFunction) _wrap_PyNs3HighPrecision_GetInteger, METH_NOARGS, NULL },
    {(char *) "Invert", (PyCFunction) _wrap_PyNs3HighPrecision_Invert, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "GetDouble", (PyCFunction) _wrap_PyNs3HighPrecision_GetDouble, METH_NOARGS, NULL },
    {(char *) "Add", (PyCFunction) _wrap_PyNs3HighPrecision_Add, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "MulByInvert", (PyCFunction) _wrap_PyNs3HighPrecision_MulByInvert, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetHigh", (PyCFunction) _wrap_PyNs3HighPrecision_GetHigh, METH_NOARGS, NULL },
    {(char *) "Mul", (PyCFunction) _wrap_PyNs3HighPrecision_Mul, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Div", (PyCFunction) _wrap_PyNs3HighPrecision_Div, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetLow", (PyCFunction) _wrap_PyNs3HighPrecision_GetLow, METH_NOARGS, NULL },
    {(char *) "Zero", (PyCFunction) _wrap_PyNs3HighPrecision_Zero, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3HighPrecision__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3HighPrecision__tp_dealloc(PyNs3HighPrecision *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3HighPrecision_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3HighPrecision_wrapper_registry.end()) {
        PyNs3HighPrecision_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::HighPrecision *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}



static PyObject *
_wrap_PyNs3HighPrecision__tp_str(PyNs3HighPrecision *self)
{
    std::ostringstream oss;
    oss << *self->obj;
    return PyString_FromString(oss.str ().c_str ());
}


static PyObject*
_wrap_PyNs3HighPrecision__tp_richcompare (PyNs3HighPrecision *PYBINDGEN_UNUSED(self), PyNs3HighPrecision *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3HighPrecision_Type)) {
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

PyTypeObject PyNs3HighPrecision_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.HighPrecision",            /* tp_name */
    sizeof(PyNs3HighPrecision),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3HighPrecision__tp_dealloc,        /* tp_dealloc */
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
    (reprfunc)_wrap_PyNs3HighPrecision__tp_str,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3HighPrecision__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3HighPrecision_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3HighPrecision__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3Simulator_wrapper_registry;

static int
_wrap_PyNs3Simulator__tp_init(PyNs3Simulator *self, PyObject *args, PyObject *kwargs)
{
    PyNs3Simulator *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Simulator_Type, &arg0)) {
        return -1;
    }
    self->obj = new ns3::Simulator(*((PyNs3Simulator *) arg0)->obj);
    return 0;
}



PyObject * _wrap_Simulator_ScheduleDestroy(PyNs3Simulator *self, PyObject *args, PyObject *kwargs, PyObject **return_exception);

PyObject * _wrap_PyNs3Simulator_ScheduleDestroy(PyNs3Simulator *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[1] = {0,};
    retval = _wrap_Simulator_ScheduleDestroy(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    error_list = PyList_New(1);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}


PyObject *
_wrap_PyNs3Simulator_Now(void)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = ns3::Simulator::Now();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}



PyObject * _wrap_Simulator_Run(PyNs3Simulator *self, PyObject *args, PyObject *kwargs, PyObject **return_exception);

PyObject * _wrap_PyNs3Simulator_Run(PyNs3Simulator *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[1] = {0,};
    retval = _wrap_Simulator_Run(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    error_list = PyList_New(1);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}



PyObject * _wrap_Simulator_Schedule(PyNs3Simulator *self, PyObject *args, PyObject *kwargs, PyObject **return_exception);

PyObject * _wrap_PyNs3Simulator_Schedule(PyNs3Simulator *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[1] = {0,};
    retval = _wrap_Simulator_Schedule(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    error_list = PyList_New(1);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}


PyObject *
_wrap_PyNs3Simulator_IsFinished(void)
{
    PyObject *py_retval;
    bool retval;
    
    retval = ns3::Simulator::IsFinished();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Simulator_GetDelayLeft(PyNs3Simulator *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3EventId *id;
    const char *keywords[] = {"id", NULL};
    PyNs3Time *py_Time;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3EventId_Type, &id)) {
        return NULL;
    }
    ns3::Time retval = ns3::Simulator::GetDelayLeft(*((PyNs3EventId *) id)->obj);
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3Simulator_GetSystemId(void)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = ns3::Simulator::GetSystemId();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}



PyObject *
_wrap_PyNs3Simulator_Stop__0(PyNs3Simulator *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    ns3::Simulator::Stop();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3Simulator_Stop__1(PyNs3Simulator *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    ns3::Simulator::Stop(time2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject * _wrap_PyNs3Simulator_Stop(PyNs3Simulator *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Simulator_Stop__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Simulator_Stop__1(self, args, kwargs, &exceptions[1]);
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



PyObject * _wrap_Simulator_ScheduleNow(PyNs3Simulator *self, PyObject *args, PyObject *kwargs, PyObject **return_exception);

PyObject * _wrap_PyNs3Simulator_ScheduleNow(PyNs3Simulator *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[1] = {0,};
    retval = _wrap_Simulator_ScheduleNow(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    error_list = PyList_New(1);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}


PyObject *
_wrap_PyNs3Simulator_GetContext(void)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = ns3::Simulator::GetContext();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Simulator_GetMaximumSimulationTime(void)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = ns3::Simulator::GetMaximumSimulationTime();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3Simulator_SetScheduler(PyNs3Simulator *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3ObjectFactory *schedulerFactory;
    const char *keywords[] = {"schedulerFactory", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3ObjectFactory_Type, &schedulerFactory)) {
        return NULL;
    }
    ns3::Simulator::SetScheduler(*((PyNs3ObjectFactory *) schedulerFactory)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Simulator_RunOneEvent(void)
{
    PyObject *py_retval;
    
    if (PyErr_Warn(PyExc_DeprecationWarning, (char *) "Deprecated")) {
        return NULL;
    }
    ns3::Simulator::RunOneEvent();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Simulator_Remove(PyNs3Simulator *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3EventId *id;
    const char *keywords[] = {"id", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3EventId_Type, &id)) {
        return NULL;
    }
    ns3::Simulator::Remove(*((PyNs3EventId *) id)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Simulator_SetImplementation(PyNs3Simulator *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SimulatorImpl *impl;
    ns3::SimulatorImpl *impl_ptr;
    const char *keywords[] = {"impl", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SimulatorImpl_Type, &impl)) {
        return NULL;
    }
    impl_ptr = (impl ? impl->obj : NULL);
    ns3::Simulator::SetImplementation(ns3::Ptr< ns3::SimulatorImpl  > (impl_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Simulator_Cancel(PyNs3Simulator *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3EventId *id;
    const char *keywords[] = {"id", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3EventId_Type, &id)) {
        return NULL;
    }
    ns3::Simulator::Cancel(*((PyNs3EventId *) id)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Simulator_Destroy(void)
{
    PyObject *py_retval;
    
    ns3::Simulator::Destroy();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Simulator_IsExpired(PyNs3Simulator *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3EventId *id;
    const char *keywords[] = {"id", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3EventId_Type, &id)) {
        return NULL;
    }
    retval = ns3::Simulator::IsExpired(*((PyNs3EventId *) id)->obj);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Simulator_GetImplementation(void)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::SimulatorImpl > retval;
    PyNs3SimulatorImpl *py_SimulatorImpl;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = ns3::Simulator::GetImplementation();
    if (!(const_cast<ns3::SimulatorImpl *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::SimulatorImpl *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_SimulatorImpl = NULL;
    } else {
        py_SimulatorImpl = (PyNs3SimulatorImpl *) wrapper_lookup_iter->second;
        Py_INCREF(py_SimulatorImpl);
    }
    
    if (py_SimulatorImpl == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::SimulatorImpl *> (ns3::PeekPointer (retval)))), &PyNs3SimulatorImpl_Type);
        py_SimulatorImpl = PyObject_GC_New(PyNs3SimulatorImpl, wrapper_type);
        py_SimulatorImpl->inst_dict = NULL;
        py_SimulatorImpl->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::SimulatorImpl *> (ns3::PeekPointer (retval))->Ref();
        py_SimulatorImpl->obj = const_cast<ns3::SimulatorImpl *> (ns3::PeekPointer (retval));
        PyNs3ObjectBase_wrapper_registry[(void *) py_SimulatorImpl->obj] = (PyObject *) py_SimulatorImpl;
    }
    py_retval = Py_BuildValue((char *) "N", py_SimulatorImpl);
    return py_retval;
}


PyObject *
_wrap_PyNs3Simulator_Next(void)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    if (PyErr_Warn(PyExc_DeprecationWarning, (char *) "Deprecated")) {
        return NULL;
    }
    ns3::Time retval = ns3::Simulator::Next();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


static PyObject*
_wrap_PyNs3Simulator__copy__(PyNs3Simulator *self)
{

    PyNs3Simulator *py_copy;
    py_copy = PyObject_New(PyNs3Simulator, &PyNs3Simulator_Type);
    py_copy->obj = new ns3::Simulator(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Simulator_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Simulator_methods[] = {
    {(char *) "ScheduleDestroy", (PyCFunction) _wrap_PyNs3Simulator_ScheduleDestroy, METH_STATIC|METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Now", (PyCFunction) _wrap_PyNs3Simulator_Now, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Run", (PyCFunction) _wrap_PyNs3Simulator_Run, METH_STATIC|METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Schedule", (PyCFunction) _wrap_PyNs3Simulator_Schedule, METH_STATIC|METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsFinished", (PyCFunction) _wrap_PyNs3Simulator_IsFinished, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "GetDelayLeft", (PyCFunction) _wrap_PyNs3Simulator_GetDelayLeft, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "GetSystemId", (PyCFunction) _wrap_PyNs3Simulator_GetSystemId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Stop", (PyCFunction) _wrap_PyNs3Simulator_Stop, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "ScheduleNow", (PyCFunction) _wrap_PyNs3Simulator_ScheduleNow, METH_STATIC|METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetContext", (PyCFunction) _wrap_PyNs3Simulator_GetContext, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "GetMaximumSimulationTime", (PyCFunction) _wrap_PyNs3Simulator_GetMaximumSimulationTime, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "SetScheduler", (PyCFunction) _wrap_PyNs3Simulator_SetScheduler, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "RunOneEvent", (PyCFunction) _wrap_PyNs3Simulator_RunOneEvent, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Remove", (PyCFunction) _wrap_PyNs3Simulator_Remove, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "SetImplementation", (PyCFunction) _wrap_PyNs3Simulator_SetImplementation, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "Cancel", (PyCFunction) _wrap_PyNs3Simulator_Cancel, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "Destroy", (PyCFunction) _wrap_PyNs3Simulator_Destroy, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "IsExpired", (PyCFunction) _wrap_PyNs3Simulator_IsExpired, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "GetImplementation", (PyCFunction) _wrap_PyNs3Simulator_GetImplementation, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Next", (PyCFunction) _wrap_PyNs3Simulator_Next, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Simulator__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Simulator__tp_dealloc(PyNs3Simulator *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Simulator_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Simulator_wrapper_registry.end()) {
        PyNs3Simulator_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Simulator__tp_richcompare (PyNs3Simulator *PYBINDGEN_UNUSED(self), PyNs3Simulator *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Simulator_Type)) {
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

PyTypeObject PyNs3Simulator_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.Simulator",            /* tp_name */
    sizeof(PyNs3Simulator),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Simulator__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3Simulator__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Simulator_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Simulator__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3Time_wrapper_registry;


static int
_wrap_PyNs3Time__tp_init__0(PyNs3Time *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::Time();
    return 0;
}

static int
_wrap_PyNs3Time__tp_init__1(PyNs3Time *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *o;
    ns3::Time o2;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &o)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (PyObject_IsInstance(o, (PyObject*) &PyNs3Time_Type)) {
        o2 = *((PyNs3Time *) o)->obj;
    } else if (PyObject_IsInstance(o, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        o2 = *((PyNs3TracedValue__Ns3Time *) o)->obj;
    } else if (PyObject_IsInstance(o, (PyObject*) &PyNs3Scalar_Type)) {
        o2 = *((PyNs3Scalar *) o)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", o->ob_type->tp_name);
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Time(o2);
    return 0;
}

static int
_wrap_PyNs3Time__tp_init__2(PyNs3Time *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3HighPrecision *data;
    const char *keywords[] = {"data", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3HighPrecision_Type, &data)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Time(*((PyNs3HighPrecision *) data)->obj);
    return 0;
}

static int
_wrap_PyNs3Time__tp_init__3(PyNs3Time *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *s;
    Py_ssize_t s_len;
    std::string s_std;
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
    s_std = std::string(s, s_len);
    self->obj = new ns3::Time(s_std);
    return 0;
}

int _wrap_PyNs3Time__tp_init(PyNs3Time *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[4] = {0,};
    retval = _wrap_PyNs3Time__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Time__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3Time__tp_init__2(self, args, kwargs, &exceptions[2]);
    if (!exceptions[2]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        return retval;
    }
    retval = _wrap_PyNs3Time__tp_init__3(self, args, kwargs, &exceptions[3]);
    if (!exceptions[3]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        return retval;
    }
    error_list = PyList_New(4);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyList_SET_ITEM(error_list, 2, PyObject_Str(exceptions[2]));
    Py_DECREF(exceptions[2]);
    PyList_SET_ITEM(error_list, 3, PyObject_Str(exceptions[3]));
    Py_DECREF(exceptions[3]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3Time_GetMicroSeconds(PyNs3Time *self)
{
    PyObject *py_retval;
    int64_t retval;
    
    retval = self->obj->GetMicroSeconds();
    py_retval = Py_BuildValue((char *) "L", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_GetSeconds(PyNs3Time *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->GetSeconds();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_Compare(PyNs3Time *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int retval;
    PyObject *o;
    ns3::Time o2;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &o)) {
        return NULL;
    }
    if (PyObject_IsInstance(o, (PyObject*) &PyNs3Time_Type)) {
        o2 = *((PyNs3Time *) o)->obj;
    } else if (PyObject_IsInstance(o, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        o2 = *((PyNs3TracedValue__Ns3Time *) o)->obj;
    } else if (PyObject_IsInstance(o, (PyObject*) &PyNs3Scalar_Type)) {
        o2 = *((PyNs3Scalar *) o)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", o->ob_type->tp_name);
        return NULL;
    }
    retval = self->obj->Compare(o2);
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_SetResolution(PyNs3Time *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Time::Unit resolution;
    const char *keywords[] = {"resolution", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &resolution)) {
        return NULL;
    }
    ns3::Time::SetResolution(resolution);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_GetHighPrecision(PyNs3Time *self)
{
    PyObject *py_retval;
    PyNs3HighPrecision *py_HighPrecision;
    
    ns3::HighPrecision const & retval = self->obj->GetHighPrecision();
    py_HighPrecision = PyObject_New(PyNs3HighPrecision, &PyNs3HighPrecision_Type);
    py_HighPrecision->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_HighPrecision->obj = new ns3::HighPrecision(retval);
    PyNs3HighPrecision_wrapper_registry[(void *) py_HighPrecision->obj] = (PyObject *) py_HighPrecision;
    py_retval = Py_BuildValue((char *) "N", py_HighPrecision);
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_FromDouble(PyNs3Time *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    double value;
    ns3::Time::Unit timeUnit;
    const char *keywords[] = {"value", "timeUnit", NULL};
    PyNs3Time *py_Time;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "di", (char **) keywords, &value, &timeUnit)) {
        return NULL;
    }
    ns3::Time retval = ns3::Time::FromDouble(value, timeUnit);
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_IsNegative(PyNs3Time *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsNegative();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_IsStrictlyNegative(PyNs3Time *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsStrictlyNegative();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_ToInteger(PyNs3Time *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint64_t retval;
    PyObject *time;
    ns3::Time time2;
    ns3::Time::Unit timeUnit;
    const char *keywords[] = {"time", "timeUnit", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "Oi", (char **) keywords, &time, &timeUnit)) {
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
        return NULL;
    }
    retval = ns3::Time::ToInteger(time2, timeUnit);
    py_retval = Py_BuildValue((char *) "K", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_IsStrictlyPositive(PyNs3Time *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsStrictlyPositive();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_GetMilliSeconds(PyNs3Time *self)
{
    PyObject *py_retval;
    int64_t retval;
    
    retval = self->obj->GetMilliSeconds();
    py_retval = Py_BuildValue((char *) "L", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_IsPositive(PyNs3Time *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsPositive();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_ToDouble(PyNs3Time *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    double retval;
    PyObject *time;
    ns3::Time time2;
    ns3::Time::Unit timeUnit;
    const char *keywords[] = {"time", "timeUnit", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "Oi", (char **) keywords, &time, &timeUnit)) {
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
        return NULL;
    }
    retval = ns3::Time::ToDouble(time2, timeUnit);
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_FromInteger(PyNs3Time *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint64_t value;
    ns3::Time::Unit timeUnit;
    const char *keywords[] = {"value", "timeUnit", NULL};
    PyNs3Time *py_Time;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "Ki", (char **) keywords, &value, &timeUnit)) {
        return NULL;
    }
    ns3::Time retval = ns3::Time::FromInteger(value, timeUnit);
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_GetTimeStep(PyNs3Time *self)
{
    PyObject *py_retval;
    int64_t retval;
    
    retval = self->obj->GetTimeStep();
    py_retval = Py_BuildValue((char *) "L", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_IsZero(PyNs3Time *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsZero();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_GetFemtoSeconds(PyNs3Time *self)
{
    PyObject *py_retval;
    int64_t retval;
    
    retval = self->obj->GetFemtoSeconds();
    py_retval = Py_BuildValue((char *) "L", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_GetNanoSeconds(PyNs3Time *self)
{
    PyObject *py_retval;
    int64_t retval;
    
    retval = self->obj->GetNanoSeconds();
    py_retval = Py_BuildValue((char *) "L", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_GetPicoSeconds(PyNs3Time *self)
{
    PyObject *py_retval;
    int64_t retval;
    
    retval = self->obj->GetPicoSeconds();
    py_retval = Py_BuildValue((char *) "L", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Time_GetResolution(void)
{
    PyObject *py_retval;
    ns3::Time::Unit retval;
    
    retval = ns3::Time::GetResolution();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


static PyObject*
_wrap_PyNs3Time__copy__(PyNs3Time *self)
{

    PyNs3Time *py_copy;
    py_copy = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_copy->obj = new ns3::Time(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Time_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Time_methods[] = {
    {(char *) "GetMicroSeconds", (PyCFunction) _wrap_PyNs3Time_GetMicroSeconds, METH_NOARGS, NULL },
    {(char *) "GetSeconds", (PyCFunction) _wrap_PyNs3Time_GetSeconds, METH_NOARGS, NULL },
    {(char *) "Compare", (PyCFunction) _wrap_PyNs3Time_Compare, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetResolution", (PyCFunction) _wrap_PyNs3Time_SetResolution, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "GetHighPrecision", (PyCFunction) _wrap_PyNs3Time_GetHighPrecision, METH_NOARGS, NULL },
    {(char *) "FromDouble", (PyCFunction) _wrap_PyNs3Time_FromDouble, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "IsNegative", (PyCFunction) _wrap_PyNs3Time_IsNegative, METH_NOARGS, NULL },
    {(char *) "IsStrictlyNegative", (PyCFunction) _wrap_PyNs3Time_IsStrictlyNegative, METH_NOARGS, NULL },
    {(char *) "ToInteger", (PyCFunction) _wrap_PyNs3Time_ToInteger, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "IsStrictlyPositive", (PyCFunction) _wrap_PyNs3Time_IsStrictlyPositive, METH_NOARGS, NULL },
    {(char *) "GetMilliSeconds", (PyCFunction) _wrap_PyNs3Time_GetMilliSeconds, METH_NOARGS, NULL },
    {(char *) "IsPositive", (PyCFunction) _wrap_PyNs3Time_IsPositive, METH_NOARGS, NULL },
    {(char *) "ToDouble", (PyCFunction) _wrap_PyNs3Time_ToDouble, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "FromInteger", (PyCFunction) _wrap_PyNs3Time_FromInteger, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "GetTimeStep", (PyCFunction) _wrap_PyNs3Time_GetTimeStep, METH_NOARGS, NULL },
    {(char *) "IsZero", (PyCFunction) _wrap_PyNs3Time_IsZero, METH_NOARGS, NULL },
    {(char *) "GetFemtoSeconds", (PyCFunction) _wrap_PyNs3Time_GetFemtoSeconds, METH_NOARGS, NULL },
    {(char *) "GetNanoSeconds", (PyCFunction) _wrap_PyNs3Time_GetNanoSeconds, METH_NOARGS, NULL },
    {(char *) "GetPicoSeconds", (PyCFunction) _wrap_PyNs3Time_GetPicoSeconds, METH_NOARGS, NULL },
    {(char *) "GetResolution", (PyCFunction) _wrap_PyNs3Time_GetResolution, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Time__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Time__tp_dealloc(PyNs3Time *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Time_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Time_wrapper_registry.end()) {
        PyNs3Time_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::Time *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}



static PyObject *
_wrap_PyNs3Time__tp_str(PyNs3Time *self)
{
    std::ostringstream oss;
    oss << *self->obj;
    return PyString_FromString(oss.str ().c_str ());
}


static PyObject*
_wrap_PyNs3Time__tp_richcompare (PyNs3Time *PYBINDGEN_UNUSED(self), PyNs3Time *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Time_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        if (*self->obj < *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
    case Py_LE:
        if (*self->obj <= *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
    case Py_EQ:
        if (*self->obj == *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
    case Py_NE:
        if (*self->obj != *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
    case Py_GE:
        if (*self->obj >= *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
    case Py_GT:
        if (*self->obj > *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


PyObject* _wrap_convert_c2py__ns3__Time(ns3::Time *cvalue)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(*cvalue);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


int _wrap_convert_py2c__ns3__Time(PyObject *value, ns3::Time *address)
{
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_Time->obj;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__ns3__Time_const___amp__(PyObject *value, ns3::Time *address)
{
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_Time->obj;
    Py_DECREF(py_retval);
    return 1;
}

static PyObject*
Ns3Time__nb_add (PyObject *py_left, PyObject *py_right)
{
    {
        ns3::Time left;
        ns3::Time right;
        if (_wrap_convert_py2c__ns3__Time(py_left, &left) && _wrap_convert_py2c__ns3__Time_const___amp__(py_right, &right)) {
            ns3::Time result = (left + right);
            return _wrap_convert_c2py__ns3__Time(&result);
        }
        PyErr_Clear();
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyObject*
Ns3Time__nb_subtract (PyObject *py_left, PyObject *py_right)
{
    {
        ns3::Time left;
        ns3::Time right;
        if (_wrap_convert_py2c__ns3__Time(py_left, &left) && _wrap_convert_py2c__ns3__Time_const___amp__(py_right, &right)) {
            ns3::Time result = (left - right);
            return _wrap_convert_c2py__ns3__Time(&result);
        }
        PyErr_Clear();
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyObject*
Ns3Time__nb_multiply (PyObject *py_left, PyObject *py_right)
{
    {
        ns3::Time left;
        ns3::Time right;
        if (_wrap_convert_py2c__ns3__Time(py_left, &left) && _wrap_convert_py2c__ns3__Time_const___amp__(py_right, &right)) {
            ns3::Time result = (left * right);
            return _wrap_convert_c2py__ns3__Time(&result);
        }
        PyErr_Clear();
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyObject*
Ns3Time__nb_divide (PyObject *py_left, PyObject *py_right)
{
    {
        ns3::Time left;
        ns3::Time right;
        if (_wrap_convert_py2c__ns3__Time(py_left, &left) && _wrap_convert_py2c__ns3__Time_const___amp__(py_right, &right)) {
            ns3::Time result = (left / right);
            return _wrap_convert_c2py__ns3__Time(&result);
        }
        PyErr_Clear();
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyObject*
Ns3Time__nb_inplace_add (PyObject *py_left, PyObject *py_right)
{
    {
        ns3::Time left;
        ns3::Time right;
        if (_wrap_convert_py2c__ns3__Time(py_left, &left) && _wrap_convert_py2c__ns3__Time_const___amp__(py_right, &right)) {
            ns3::Time result = (left += right);
            return _wrap_convert_c2py__ns3__Time(&result);
        }
        PyErr_Clear();
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyObject*
Ns3Time__nb_inplace_subtract (PyObject *py_left, PyObject *py_right)
{
    {
        ns3::Time left;
        ns3::Time right;
        if (_wrap_convert_py2c__ns3__Time(py_left, &left) && _wrap_convert_py2c__ns3__Time_const___amp__(py_right, &right)) {
            ns3::Time result = (left -= right);
            return _wrap_convert_c2py__ns3__Time(&result);
        }
        PyErr_Clear();
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyObject*
Ns3Time__nb_inplace_multiply (PyObject *py_left, PyObject *py_right)
{
    {
        ns3::Time left;
        ns3::Time right;
        if (_wrap_convert_py2c__ns3__Time(py_left, &left) && _wrap_convert_py2c__ns3__Time_const___amp__(py_right, &right)) {
            ns3::Time result = (left *= right);
            return _wrap_convert_c2py__ns3__Time(&result);
        }
        PyErr_Clear();
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyObject*
Ns3Time__nb_inplace_divide (PyObject *py_left, PyObject *py_right)
{
    {
        ns3::Time left;
        ns3::Time right;
        if (_wrap_convert_py2c__ns3__Time(py_left, &left) && _wrap_convert_py2c__ns3__Time_const___amp__(py_right, &right)) {
            ns3::Time result = (left /= right);
            return _wrap_convert_c2py__ns3__Time(&result);
        }
        PyErr_Clear();
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyNumberMethods Ns3Time__py_number_methods = {
    (binaryfunc) Ns3Time__nb_add,
    (binaryfunc) Ns3Time__nb_subtract,
    (binaryfunc) Ns3Time__nb_multiply,
    (binaryfunc) Ns3Time__nb_divide,
    (binaryfunc) NULL,
    (binaryfunc) NULL,
    (ternaryfunc) NULL,
    (unaryfunc) NULL,
    (unaryfunc) NULL,
    (unaryfunc) NULL,
    (inquiry) NULL,
    (unaryfunc) NULL,
    (binaryfunc) NULL,
    (binaryfunc) NULL,
    (binaryfunc) NULL,
    (binaryfunc) NULL,
    (binaryfunc) NULL,
    (coercion) NULL,
    (unaryfunc) NULL,
    (unaryfunc) NULL,
    (unaryfunc) NULL,
    (unaryfunc) NULL,
    (unaryfunc) NULL,
    /* Added in release 2.0 */
    (binaryfunc) Ns3Time__nb_inplace_add,
    (binaryfunc) Ns3Time__nb_inplace_subtract,
    (binaryfunc) Ns3Time__nb_inplace_multiply,
    (binaryfunc) Ns3Time__nb_inplace_divide,
    (binaryfunc) NULL,
    (ternaryfunc) NULL,
    (binaryfunc) NULL,
    (binaryfunc) NULL,
    (binaryfunc) NULL,
    (binaryfunc) NULL,
    (binaryfunc) NULL,

    /* Added in release 2.2 */
    /* The following require the Py_TPFLAGS_HAVE_CLASS flag */
    (binaryfunc) NULL,
    (binaryfunc) NULL,
    (binaryfunc) NULL,
    (binaryfunc) NULL,

#if PY_VERSION_HEX >= 0x020500F0
    /* Added in release 2.5 */
    (unaryfunc) NULL,

#endif
};

PyTypeObject PyNs3Time_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.Time",            /* tp_name */
    sizeof(PyNs3Time),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Time__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)&Ns3Time__py_number_methods,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)_wrap_PyNs3Time__tp_str,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3Time__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Time_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Time__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3TimeBase_wrapper_registry;


static int
_wrap_PyNs3TimeBase__tp_init__0(PyNs3TimeBase *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::TimeBase();
    return 0;
}

static int
_wrap_PyNs3TimeBase__tp_init__1(PyNs3TimeBase *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3TimeBase *o;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3TimeBase_Type, &o)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::TimeBase(*((PyNs3TimeBase *) o)->obj);
    return 0;
}

static int
_wrap_PyNs3TimeBase__tp_init__2(PyNs3TimeBase *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3HighPrecision *data;
    const char *keywords[] = {"data", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3HighPrecision_Type, &data)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::TimeBase(*((PyNs3HighPrecision *) data)->obj);
    return 0;
}

int _wrap_PyNs3TimeBase__tp_init(PyNs3TimeBase *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[3] = {0,};
    retval = _wrap_PyNs3TimeBase__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3TimeBase__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3TimeBase__tp_init__2(self, args, kwargs, &exceptions[2]);
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
_wrap_PyNs3TimeBase_GetHighPrecision(PyNs3TimeBase *self)
{
    PyObject *py_retval;
    PyNs3HighPrecision *py_HighPrecision;
    
    ns3::HighPrecision const & retval = self->obj->GetHighPrecision();
    py_HighPrecision = PyObject_New(PyNs3HighPrecision, &PyNs3HighPrecision_Type);
    py_HighPrecision->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_HighPrecision->obj = new ns3::HighPrecision(retval);
    PyNs3HighPrecision_wrapper_registry[(void *) py_HighPrecision->obj] = (PyObject *) py_HighPrecision;
    py_retval = Py_BuildValue((char *) "N", py_HighPrecision);
    return py_retval;
}


PyObject *
_wrap_PyNs3TimeBase_FromDouble(PyNs3TimeBase *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    double value;
    ns3::TimeBase::Unit timeUnit;
    const char *keywords[] = {"value", "timeUnit", NULL};
    PyNs3TimeBase *py_TimeBase;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "di", (char **) keywords, &value, &timeUnit)) {
        return NULL;
    }
    ns3::TimeBase retval = ns3::TimeBase::FromDouble(value, timeUnit);
    py_TimeBase = PyObject_New(PyNs3TimeBase, &PyNs3TimeBase_Type);
    py_TimeBase->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TimeBase->obj = new ns3::TimeBase(retval);
    PyNs3TimeBase_wrapper_registry[(void *) py_TimeBase->obj] = (PyObject *) py_TimeBase;
    py_retval = Py_BuildValue((char *) "N", py_TimeBase);
    return py_retval;
}


PyObject *
_wrap_PyNs3TimeBase_IsNegative(PyNs3TimeBase *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsNegative();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3TimeBase_IsStrictlyNegative(PyNs3TimeBase *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsStrictlyNegative();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3TimeBase_ToInteger(PyNs3TimeBase *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint64_t retval;
    PyNs3TimeBase *time;
    ns3::TimeBase::Unit timeUnit;
    const char *keywords[] = {"time", "timeUnit", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!i", (char **) keywords, &PyNs3TimeBase_Type, &time, &timeUnit)) {
        return NULL;
    }
    retval = ns3::TimeBase::ToInteger(*((PyNs3TimeBase *) time)->obj, timeUnit);
    py_retval = Py_BuildValue((char *) "K", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3TimeBase_IsStrictlyPositive(PyNs3TimeBase *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsStrictlyPositive();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3TimeBase_IsPositive(PyNs3TimeBase *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsPositive();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3TimeBase_ToDouble(PyNs3TimeBase *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    double retval;
    PyNs3TimeBase *time;
    ns3::TimeBase::Unit timeUnit;
    const char *keywords[] = {"time", "timeUnit", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!i", (char **) keywords, &PyNs3TimeBase_Type, &time, &timeUnit)) {
        return NULL;
    }
    retval = ns3::TimeBase::ToDouble(*((PyNs3TimeBase *) time)->obj, timeUnit);
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3TimeBase_FromInteger(PyNs3TimeBase *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint64_t value;
    ns3::TimeBase::Unit timeUnit;
    const char *keywords[] = {"value", "timeUnit", NULL};
    PyNs3TimeBase *py_TimeBase;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "Ki", (char **) keywords, &value, &timeUnit)) {
        return NULL;
    }
    ns3::TimeBase retval = ns3::TimeBase::FromInteger(value, timeUnit);
    py_TimeBase = PyObject_New(PyNs3TimeBase, &PyNs3TimeBase_Type);
    py_TimeBase->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TimeBase->obj = new ns3::TimeBase(retval);
    PyNs3TimeBase_wrapper_registry[(void *) py_TimeBase->obj] = (PyObject *) py_TimeBase;
    py_retval = Py_BuildValue((char *) "N", py_TimeBase);
    return py_retval;
}


PyObject *
_wrap_PyNs3TimeBase_IsZero(PyNs3TimeBase *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsZero();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3TimeBase_SetResolution(PyNs3TimeBase *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::TimeBase::Unit resolution;
    const char *keywords[] = {"resolution", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &resolution)) {
        return NULL;
    }
    ns3::TimeBase::SetResolution(resolution);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3TimeBase_GetResolution(void)
{
    PyObject *py_retval;
    ns3::TimeBase::Unit retval;
    
    retval = ns3::TimeBase::GetResolution();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


static PyObject*
_wrap_PyNs3TimeBase__copy__(PyNs3TimeBase *self)
{

    PyNs3TimeBase *py_copy;
    py_copy = PyObject_New(PyNs3TimeBase, &PyNs3TimeBase_Type);
    py_copy->obj = new ns3::TimeBase(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3TimeBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3TimeBase_methods[] = {
    {(char *) "GetHighPrecision", (PyCFunction) _wrap_PyNs3TimeBase_GetHighPrecision, METH_NOARGS, NULL },
    {(char *) "FromDouble", (PyCFunction) _wrap_PyNs3TimeBase_FromDouble, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "IsNegative", (PyCFunction) _wrap_PyNs3TimeBase_IsNegative, METH_NOARGS, NULL },
    {(char *) "IsStrictlyNegative", (PyCFunction) _wrap_PyNs3TimeBase_IsStrictlyNegative, METH_NOARGS, NULL },
    {(char *) "ToInteger", (PyCFunction) _wrap_PyNs3TimeBase_ToInteger, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "IsStrictlyPositive", (PyCFunction) _wrap_PyNs3TimeBase_IsStrictlyPositive, METH_NOARGS, NULL },
    {(char *) "IsPositive", (PyCFunction) _wrap_PyNs3TimeBase_IsPositive, METH_NOARGS, NULL },
    {(char *) "ToDouble", (PyCFunction) _wrap_PyNs3TimeBase_ToDouble, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "FromInteger", (PyCFunction) _wrap_PyNs3TimeBase_FromInteger, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "IsZero", (PyCFunction) _wrap_PyNs3TimeBase_IsZero, METH_NOARGS, NULL },
    {(char *) "SetResolution", (PyCFunction) _wrap_PyNs3TimeBase_SetResolution, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "GetResolution", (PyCFunction) _wrap_PyNs3TimeBase_GetResolution, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3TimeBase__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3TimeBase__tp_dealloc(PyNs3TimeBase *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3TimeBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3TimeBase_wrapper_registry.end()) {
        PyNs3TimeBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::TimeBase *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3TimeBase__tp_richcompare (PyNs3TimeBase *PYBINDGEN_UNUSED(self), PyNs3TimeBase *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3TimeBase_Type)) {
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

PyTypeObject PyNs3TimeBase_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.TimeBase",            /* tp_name */
    sizeof(PyNs3TimeBase),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3TimeBase__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3TimeBase__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3TimeBase_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3TimeBase__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3Timer_wrapper_registry;


static int
_wrap_PyNs3Timer__tp_init__0(PyNs3Timer *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Timer *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Timer_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Timer(*((PyNs3Timer *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3Timer__tp_init__1(PyNs3Timer *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::Timer();
    return 0;
}

static int
_wrap_PyNs3Timer__tp_init__2(PyNs3Timer *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    ns3::Timer::DestroyPolicy destroyPolicy;
    const char *keywords[] = {"destroyPolicy", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &destroyPolicy)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Timer(destroyPolicy);
    return 0;
}

int _wrap_PyNs3Timer__tp_init(PyNs3Timer *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[3] = {0,};
    retval = _wrap_PyNs3Timer__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Timer__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3Timer__tp_init__2(self, args, kwargs, &exceptions[2]);
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
_wrap_PyNs3Timer_GetDelay(PyNs3Timer *self)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = self->obj->GetDelay();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3Timer_GetState(PyNs3Timer *self)
{
    PyObject *py_retval;
    ns3::Timer::State retval;
    
    retval = self->obj->GetState();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Timer_IsRunning(PyNs3Timer *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsRunning();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Timer_Resume(PyNs3Timer *self)
{
    PyObject *py_retval;
    
    self->obj->Resume();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Timer_GetDelayLeft(PyNs3Timer *self)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = self->obj->GetDelayLeft();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}



PyObject *
_wrap_PyNs3Timer_Schedule__0(PyNs3Timer *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj->Schedule();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3Timer_Schedule__1(PyNs3Timer *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyObject *delay;
    ns3::Time delay2;
    const char *keywords[] = {"delay", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &delay)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    if (PyObject_IsInstance(delay, (PyObject*) &PyNs3Time_Type)) {
        delay2 = *((PyNs3Time *) delay)->obj;
    } else if (PyObject_IsInstance(delay, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        delay2 = *((PyNs3TracedValue__Ns3Time *) delay)->obj;
    } else if (PyObject_IsInstance(delay, (PyObject*) &PyNs3Scalar_Type)) {
        delay2 = *((PyNs3Scalar *) delay)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", delay->ob_type->tp_name);
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->Schedule(delay2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject * _wrap_PyNs3Timer_Schedule(PyNs3Timer *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Timer_Schedule__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Timer_Schedule__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Timer_IsSuspended(PyNs3Timer *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsSuspended();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Timer_Remove(PyNs3Timer *self)
{
    PyObject *py_retval;
    
    self->obj->Remove();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Timer_Suspend(PyNs3Timer *self)
{
    PyObject *py_retval;
    
    self->obj->Suspend();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Timer_Cancel(PyNs3Timer *self)
{
    PyObject *py_retval;
    
    self->obj->Cancel();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Timer_IsExpired(PyNs3Timer *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsExpired();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Timer_SetDelay(PyNs3Timer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *delay;
    ns3::Time delay2;
    const char *keywords[] = {"delay", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &delay)) {
        return NULL;
    }
    if (PyObject_IsInstance(delay, (PyObject*) &PyNs3Time_Type)) {
        delay2 = *((PyNs3Time *) delay)->obj;
    } else if (PyObject_IsInstance(delay, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        delay2 = *((PyNs3TracedValue__Ns3Time *) delay)->obj;
    } else if (PyObject_IsInstance(delay, (PyObject*) &PyNs3Scalar_Type)) {
        delay2 = *((PyNs3Scalar *) delay)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", delay->ob_type->tp_name);
        return NULL;
    }
    self->obj->SetDelay(delay2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3Timer__copy__(PyNs3Timer *self)
{

    PyNs3Timer *py_copy;
    py_copy = PyObject_New(PyNs3Timer, &PyNs3Timer_Type);
    py_copy->obj = new ns3::Timer(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Timer_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Timer_methods[] = {
    {(char *) "GetDelay", (PyCFunction) _wrap_PyNs3Timer_GetDelay, METH_NOARGS, NULL },
    {(char *) "GetState", (PyCFunction) _wrap_PyNs3Timer_GetState, METH_NOARGS, NULL },
    {(char *) "IsRunning", (PyCFunction) _wrap_PyNs3Timer_IsRunning, METH_NOARGS, NULL },
    {(char *) "Resume", (PyCFunction) _wrap_PyNs3Timer_Resume, METH_NOARGS, NULL },
    {(char *) "GetDelayLeft", (PyCFunction) _wrap_PyNs3Timer_GetDelayLeft, METH_NOARGS, NULL },
    {(char *) "Schedule", (PyCFunction) _wrap_PyNs3Timer_Schedule, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsSuspended", (PyCFunction) _wrap_PyNs3Timer_IsSuspended, METH_NOARGS, NULL },
    {(char *) "Remove", (PyCFunction) _wrap_PyNs3Timer_Remove, METH_NOARGS, NULL },
    {(char *) "Suspend", (PyCFunction) _wrap_PyNs3Timer_Suspend, METH_NOARGS, NULL },
    {(char *) "Cancel", (PyCFunction) _wrap_PyNs3Timer_Cancel, METH_NOARGS, NULL },
    {(char *) "IsExpired", (PyCFunction) _wrap_PyNs3Timer_IsExpired, METH_NOARGS, NULL },
    {(char *) "SetDelay", (PyCFunction) _wrap_PyNs3Timer_SetDelay, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Timer__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Timer__tp_dealloc(PyNs3Timer *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Timer_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Timer_wrapper_registry.end()) {
        PyNs3Timer_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::Timer *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Timer__tp_richcompare (PyNs3Timer *PYBINDGEN_UNUSED(self), PyNs3Timer *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Timer_Type)) {
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

PyTypeObject PyNs3Timer_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.Timer",            /* tp_name */
    sizeof(PyNs3Timer),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Timer__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3Timer__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Timer_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Timer__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3TimerImpl_wrapper_registry;

void
PyNs3TimerImpl__PythonHelper::Invoke()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::TimerImpl *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Invoke"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3TimerImpl* >(m_pyself)->obj;
    reinterpret_cast< PyNs3TimerImpl* >(m_pyself)->obj = (ns3::TimerImpl*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Invoke", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3TimerImpl* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3TimerImpl* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3TimerImpl* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::EventId
PyNs3TimerImpl__PythonHelper::Schedule(ns3::Time const & delay)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::TimerImpl *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    PyNs3EventId *tmp_EventId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Schedule"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EventId();
    }
    self_obj_before = reinterpret_cast< PyNs3TimerImpl* >(m_pyself)->obj;
    reinterpret_cast< PyNs3TimerImpl* >(m_pyself)->obj = (ns3::TimerImpl*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(delay);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Schedule", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3TimerImpl* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EventId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3EventId_Type, &tmp_EventId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3TimerImpl* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EventId();
    }
    ns3::EventId retval = *tmp_EventId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3TimerImpl* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}


static int
_wrap_PyNs3TimerImpl__tp_init__0(PyNs3TimerImpl *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3TimerImpl_Type)
    {
        self->obj = new PyNs3TimerImpl__PythonHelper();
        ((PyNs3TimerImpl__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        PyErr_SetString(PyExc_TypeError, "class 'TimerImpl' cannot be constructed");
        return -1;
    }
    return 0;
}

static int
_wrap_PyNs3TimerImpl__tp_init__1(PyNs3TimerImpl *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3TimerImpl *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3TimerImpl_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3TimerImpl_Type)
    {
        self->obj = new PyNs3TimerImpl__PythonHelper(*((PyNs3TimerImpl *) arg0)->obj);
        ((PyNs3TimerImpl__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        PyErr_SetString(PyExc_TypeError, "class 'TimerImpl' cannot be constructed");
        return -1;
    }
    return 0;
}

int _wrap_PyNs3TimerImpl__tp_init(PyNs3TimerImpl *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3TimerImpl__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3TimerImpl__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3TimerImpl_Invoke(PyNs3TimerImpl *self)
{
    PyObject *py_retval;
    
    self->obj->Invoke();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3TimerImpl_Schedule(PyNs3TimerImpl *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *delay;
    ns3::Time delay2;
    const char *keywords[] = {"delay", NULL};
    PyNs3EventId *py_EventId;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &delay)) {
        return NULL;
    }
    if (PyObject_IsInstance(delay, (PyObject*) &PyNs3Time_Type)) {
        delay2 = *((PyNs3Time *) delay)->obj;
    } else if (PyObject_IsInstance(delay, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        delay2 = *((PyNs3TracedValue__Ns3Time *) delay)->obj;
    } else if (PyObject_IsInstance(delay, (PyObject*) &PyNs3Scalar_Type)) {
        delay2 = *((PyNs3Scalar *) delay)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", delay->ob_type->tp_name);
        return NULL;
    }
    ns3::EventId retval = self->obj->Schedule(delay2);
    py_EventId = PyObject_New(PyNs3EventId, &PyNs3EventId_Type);
    py_EventId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_EventId->obj = new ns3::EventId(retval);
    PyNs3EventId_wrapper_registry[(void *) py_EventId->obj] = (PyObject *) py_EventId;
    py_retval = Py_BuildValue((char *) "N", py_EventId);
    return py_retval;
}

static PyMethodDef PyNs3TimerImpl_methods[] = {
    {(char *) "Invoke", (PyCFunction) _wrap_PyNs3TimerImpl_Invoke, METH_NOARGS, NULL },
    {(char *) "Schedule", (PyCFunction) _wrap_PyNs3TimerImpl_Schedule, METH_KEYWORDS|METH_VARARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3TimerImpl__tp_clear(PyNs3TimerImpl *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::TimerImpl *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3TimerImpl__tp_traverse(PyNs3TimerImpl *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3TimerImpl__PythonHelper) )
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3TimerImpl__tp_dealloc(PyNs3TimerImpl *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3TimerImpl_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3TimerImpl_wrapper_registry.end()) {
        PyNs3TimerImpl_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3TimerImpl__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3TimerImpl__tp_richcompare (PyNs3TimerImpl *PYBINDGEN_UNUSED(self), PyNs3TimerImpl *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3TimerImpl_Type)) {
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

PyTypeObject PyNs3TimerImpl_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.TimerImpl",            /* tp_name */
    sizeof(PyNs3TimerImpl),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3TimerImpl__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3TimerImpl__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3TimerImpl__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3TimerImpl__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3TimerImpl_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3TimerImpl, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3TimerImpl__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3TracedValue__Ns3Time_wrapper_registry;


static int
_wrap_PyNs3TracedValue__Ns3Time__tp_init__0(PyNs3TracedValue__Ns3Time *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::TracedValue< ns3::Time >();
    return 0;
}

static int
_wrap_PyNs3TracedValue__Ns3Time__tp_init__1(PyNs3TracedValue__Ns3Time *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3TracedValue__Ns3Time *o;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3TracedValue__Ns3Time_Type, &o)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::TracedValue< ns3::Time >(*((PyNs3TracedValue__Ns3Time *) o)->obj);
    return 0;
}

static int
_wrap_PyNs3TracedValue__Ns3Time__tp_init__2(PyNs3TracedValue__Ns3Time *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *v;
    ns3::Time v2;
    const char *keywords[] = {"v", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &v)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (PyObject_IsInstance(v, (PyObject*) &PyNs3Time_Type)) {
        v2 = *((PyNs3Time *) v)->obj;
    } else if (PyObject_IsInstance(v, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        v2 = *((PyNs3TracedValue__Ns3Time *) v)->obj;
    } else if (PyObject_IsInstance(v, (PyObject*) &PyNs3Scalar_Type)) {
        v2 = *((PyNs3Scalar *) v)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", v->ob_type->tp_name);
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::TracedValue< ns3::Time >(v2);
    return 0;
}

int _wrap_PyNs3TracedValue__Ns3Time__tp_init(PyNs3TracedValue__Ns3Time *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[3] = {0,};
    retval = _wrap_PyNs3TracedValue__Ns3Time__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3TracedValue__Ns3Time__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3TracedValue__Ns3Time__tp_init__2(self, args, kwargs, &exceptions[2]);
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
_wrap_PyNs3TracedValue__Ns3Time_Set(PyNs3TracedValue__Ns3Time *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *v;
    ns3::Time v2;
    const char *keywords[] = {"v", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &v)) {
        return NULL;
    }
    if (PyObject_IsInstance(v, (PyObject*) &PyNs3Time_Type)) {
        v2 = *((PyNs3Time *) v)->obj;
    } else if (PyObject_IsInstance(v, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        v2 = *((PyNs3TracedValue__Ns3Time *) v)->obj;
    } else if (PyObject_IsInstance(v, (PyObject*) &PyNs3Scalar_Type)) {
        v2 = *((PyNs3Scalar *) v)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", v->ob_type->tp_name);
        return NULL;
    }
    self->obj->Set(v2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3TracedValue__Ns3Time_Disconnect(PyNs3TracedValue__Ns3Time *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3CallbackBase *cb;
    const char *path;
    Py_ssize_t path_len;
    const char *keywords[] = {"cb", "path", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!s#", (char **) keywords, &PyNs3CallbackBase_Type, &cb, &path, &path_len)) {
        return NULL;
    }
    self->obj->Disconnect(*((PyNs3CallbackBase *) cb)->obj, std::string(path, path_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3TracedValue__Ns3Time_Get(PyNs3TracedValue__Ns3Time *self)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = self->obj->Get();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3TracedValue__Ns3Time_ConnectWithoutContext(PyNs3TracedValue__Ns3Time *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3CallbackBase *cb;
    const char *keywords[] = {"cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3CallbackBase_Type, &cb)) {
        return NULL;
    }
    self->obj->ConnectWithoutContext(*((PyNs3CallbackBase *) cb)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3TracedValue__Ns3Time_DisconnectWithoutContext(PyNs3TracedValue__Ns3Time *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3CallbackBase *cb;
    const char *keywords[] = {"cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3CallbackBase_Type, &cb)) {
        return NULL;
    }
    self->obj->DisconnectWithoutContext(*((PyNs3CallbackBase *) cb)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3TracedValue__Ns3Time_Connect(PyNs3TracedValue__Ns3Time *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3CallbackBase *cb;
    const char *path;
    Py_ssize_t path_len;
    const char *keywords[] = {"cb", "path", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!s#", (char **) keywords, &PyNs3CallbackBase_Type, &cb, &path, &path_len)) {
        return NULL;
    }
    self->obj->Connect(*((PyNs3CallbackBase *) cb)->obj, std::string(path, path_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3TracedValue__Ns3Time__copy__(PyNs3TracedValue__Ns3Time *self)
{

    PyNs3TracedValue__Ns3Time *py_copy;
    py_copy = PyObject_New(PyNs3TracedValue__Ns3Time, &PyNs3TracedValue__Ns3Time_Type);
    py_copy->obj = new ns3::TracedValue< ns3::Time >(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3TracedValue__Ns3Time_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3TracedValue__Ns3Time_methods[] = {
    {(char *) "Set", (PyCFunction) _wrap_PyNs3TracedValue__Ns3Time_Set, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Disconnect", (PyCFunction) _wrap_PyNs3TracedValue__Ns3Time_Disconnect, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Get", (PyCFunction) _wrap_PyNs3TracedValue__Ns3Time_Get, METH_NOARGS, NULL },
    {(char *) "ConnectWithoutContext", (PyCFunction) _wrap_PyNs3TracedValue__Ns3Time_ConnectWithoutContext, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DisconnectWithoutContext", (PyCFunction) _wrap_PyNs3TracedValue__Ns3Time_DisconnectWithoutContext, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Connect", (PyCFunction) _wrap_PyNs3TracedValue__Ns3Time_Connect, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3TracedValue__Ns3Time__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3TracedValue__Ns3Time__tp_dealloc(PyNs3TracedValue__Ns3Time *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3TracedValue__Ns3Time_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3TracedValue__Ns3Time_wrapper_registry.end()) {
        PyNs3TracedValue__Ns3Time_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::TracedValue< ns3::Time > *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3TracedValue__Ns3Time__tp_richcompare (PyNs3TracedValue__Ns3Time *PYBINDGEN_UNUSED(self), PyNs3TracedValue__Ns3Time *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
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

PyTypeObject PyNs3TracedValue__Ns3Time_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.TracedValue__Ns3Time",            /* tp_name */
    sizeof(PyNs3TracedValue__Ns3Time),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3TracedValue__Ns3Time__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3TracedValue__Ns3Time__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3TracedValue__Ns3Time_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3TracedValue__Ns3Time__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3Watchdog_wrapper_registry;


static int
_wrap_PyNs3Watchdog__tp_init__0(PyNs3Watchdog *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Watchdog *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Watchdog_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Watchdog(*((PyNs3Watchdog *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3Watchdog__tp_init__1(PyNs3Watchdog *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::Watchdog();
    return 0;
}

int _wrap_PyNs3Watchdog__tp_init(PyNs3Watchdog *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Watchdog__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Watchdog__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Watchdog_Ping(PyNs3Watchdog *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *delay;
    ns3::Time delay2;
    const char *keywords[] = {"delay", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &delay)) {
        return NULL;
    }
    if (PyObject_IsInstance(delay, (PyObject*) &PyNs3Time_Type)) {
        delay2 = *((PyNs3Time *) delay)->obj;
    } else if (PyObject_IsInstance(delay, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        delay2 = *((PyNs3TracedValue__Ns3Time *) delay)->obj;
    } else if (PyObject_IsInstance(delay, (PyObject*) &PyNs3Scalar_Type)) {
        delay2 = *((PyNs3Scalar *) delay)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", delay->ob_type->tp_name);
        return NULL;
    }
    self->obj->Ping(delay2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3Watchdog__copy__(PyNs3Watchdog *self)
{

    PyNs3Watchdog *py_copy;
    py_copy = PyObject_New(PyNs3Watchdog, &PyNs3Watchdog_Type);
    py_copy->obj = new ns3::Watchdog(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Watchdog_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Watchdog_methods[] = {
    {(char *) "Ping", (PyCFunction) _wrap_PyNs3Watchdog_Ping, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Watchdog__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Watchdog__tp_dealloc(PyNs3Watchdog *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Watchdog_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Watchdog_wrapper_registry.end()) {
        PyNs3Watchdog_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::Watchdog *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Watchdog__tp_richcompare (PyNs3Watchdog *PYBINDGEN_UNUSED(self), PyNs3Watchdog *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Watchdog_Type)) {
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

PyTypeObject PyNs3Watchdog_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.Watchdog",            /* tp_name */
    sizeof(PyNs3Watchdog),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Watchdog__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3Watchdog__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Watchdog_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Watchdog__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3Scalar_wrapper_registry;


static int
_wrap_PyNs3Scalar__tp_init__0(PyNs3Scalar *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Scalar *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Scalar_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Scalar(*((PyNs3Scalar *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3Scalar__tp_init__1(PyNs3Scalar *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::Scalar();
    return 0;
}

static int
_wrap_PyNs3Scalar__tp_init__2(PyNs3Scalar *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    double v;
    const char *keywords[] = {"v", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "d", (char **) keywords, &v)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Scalar(v);
    return 0;
}

static int
_wrap_PyNs3Scalar__tp_init__3(PyNs3Scalar *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    unsigned int v;
    const char *keywords[] = {"v", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &v)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Scalar(v);
    return 0;
}

static int
_wrap_PyNs3Scalar__tp_init__4(PyNs3Scalar *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    int32_t v;
    const char *keywords[] = {"v", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &v)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Scalar(v);
    return 0;
}

static int
_wrap_PyNs3Scalar__tp_init__5(PyNs3Scalar *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    uint64_t v;
    const char *keywords[] = {"v", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "K", (char **) keywords, &v)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Scalar(v);
    return 0;
}

static int
_wrap_PyNs3Scalar__tp_init__6(PyNs3Scalar *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    int64_t v;
    const char *keywords[] = {"v", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "L", (char **) keywords, &v)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Scalar(v);
    return 0;
}

static int
_wrap_PyNs3Scalar__tp_init__7(PyNs3Scalar *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *t;
    ns3::Time t2;
    const char *keywords[] = {"t", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &t)) {
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
    self->obj = new ns3::Scalar(t2);
    return 0;
}

int _wrap_PyNs3Scalar__tp_init(PyNs3Scalar *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[8] = {0,};
    retval = _wrap_PyNs3Scalar__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Scalar__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3Scalar__tp_init__2(self, args, kwargs, &exceptions[2]);
    if (!exceptions[2]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        return retval;
    }
    retval = _wrap_PyNs3Scalar__tp_init__3(self, args, kwargs, &exceptions[3]);
    if (!exceptions[3]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        return retval;
    }
    retval = _wrap_PyNs3Scalar__tp_init__4(self, args, kwargs, &exceptions[4]);
    if (!exceptions[4]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        Py_DECREF(exceptions[3]);
        return retval;
    }
    retval = _wrap_PyNs3Scalar__tp_init__5(self, args, kwargs, &exceptions[5]);
    if (!exceptions[5]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        Py_DECREF(exceptions[3]);
        Py_DECREF(exceptions[4]);
        return retval;
    }
    retval = _wrap_PyNs3Scalar__tp_init__6(self, args, kwargs, &exceptions[6]);
    if (!exceptions[6]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        Py_DECREF(exceptions[3]);
        Py_DECREF(exceptions[4]);
        Py_DECREF(exceptions[5]);
        return retval;
    }
    retval = _wrap_PyNs3Scalar__tp_init__7(self, args, kwargs, &exceptions[7]);
    if (!exceptions[7]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        Py_DECREF(exceptions[3]);
        Py_DECREF(exceptions[4]);
        Py_DECREF(exceptions[5]);
        Py_DECREF(exceptions[6]);
        return retval;
    }
    error_list = PyList_New(8);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyList_SET_ITEM(error_list, 2, PyObject_Str(exceptions[2]));
    Py_DECREF(exceptions[2]);
    PyList_SET_ITEM(error_list, 3, PyObject_Str(exceptions[3]));
    Py_DECREF(exceptions[3]);
    PyList_SET_ITEM(error_list, 4, PyObject_Str(exceptions[4]));
    Py_DECREF(exceptions[4]);
    PyList_SET_ITEM(error_list, 5, PyObject_Str(exceptions[5]));
    Py_DECREF(exceptions[5]);
    PyList_SET_ITEM(error_list, 6, PyObject_Str(exceptions[6]));
    Py_DECREF(exceptions[6]);
    PyList_SET_ITEM(error_list, 7, PyObject_Str(exceptions[7]));
    Py_DECREF(exceptions[7]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3Scalar_GetDouble(PyNs3Scalar *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->GetDouble();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


static PyObject*
_wrap_PyNs3Scalar__copy__(PyNs3Scalar *self)
{

    PyNs3Scalar *py_copy;
    py_copy = PyObject_New(PyNs3Scalar, &PyNs3Scalar_Type);
    py_copy->obj = new ns3::Scalar(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Scalar_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Scalar_methods[] = {
    {(char *) "GetDouble", (PyCFunction) _wrap_PyNs3Scalar_GetDouble, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Scalar__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Scalar__tp_dealloc(PyNs3Scalar *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Scalar_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Scalar_wrapper_registry.end()) {
        PyNs3Scalar_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::Scalar *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Scalar__tp_richcompare (PyNs3Scalar *PYBINDGEN_UNUSED(self), PyNs3Scalar *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Scalar_Type)) {
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

PyTypeObject PyNs3Scalar_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.Scalar",            /* tp_name */
    sizeof(PyNs3Scalar),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Scalar__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3Scalar__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Scalar_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Scalar__tp_init,             /* tp_init */
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
PyNs3Scheduler__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3Scheduler *self)
{
    PyObject *py_retval;
    PyNs3Scheduler__PythonHelper *helper = dynamic_cast< PyNs3Scheduler__PythonHelper* >(self->obj);
    
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
PyNs3Scheduler__PythonHelper::_wrap_NotifyNewAggregate(PyNs3Scheduler *self)
{
    PyObject *py_retval;
    PyNs3Scheduler__PythonHelper *helper = dynamic_cast< PyNs3Scheduler__PythonHelper* >(self->obj);
    
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
PyNs3Scheduler__PythonHelper::_wrap_DoStart(PyNs3Scheduler *self)
{
    PyObject *py_retval;
    PyNs3Scheduler__PythonHelper *helper = dynamic_cast< PyNs3Scheduler__PythonHelper* >(self->obj);
    
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
PyNs3Scheduler__PythonHelper::_wrap_DoDispose(PyNs3Scheduler *self)
{
    PyObject *py_retval;
    PyNs3Scheduler__PythonHelper *helper = dynamic_cast< PyNs3Scheduler__PythonHelper* >(self->obj);
    
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
PyNs3Scheduler__PythonHelper::Insert(ns3::Scheduler::Event const & ev)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Scheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *py_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Insert"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = (ns3::Scheduler*) this;
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(ev);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Insert", (char *) "N", py_Event);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

bool
PyNs3Scheduler__PythonHelper::IsEmpty() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Scheduler *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsEmpty"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = const_cast< ns3::Scheduler* >((const ns3::Scheduler*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsEmpty", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = self_obj_before;
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
        reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Scheduler::Event
PyNs3Scheduler__PythonHelper::PeekNext() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Scheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *tmp_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "PeekNext"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Scheduler::Event();
    }
    self_obj_before = reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = const_cast< ns3::Scheduler* >((const ns3::Scheduler*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "PeekNext", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Scheduler::Event();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SchedulerEvent_Type, &tmp_Event)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Scheduler::Event();
    }
    ns3::Scheduler::Event retval = *tmp_Event->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3Scheduler__PythonHelper::Remove(ns3::Scheduler::Event const & ev)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Scheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *py_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Remove"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = (ns3::Scheduler*) this;
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(ev);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Remove", (char *) "N", py_Event);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Scheduler::Event
PyNs3Scheduler__PythonHelper::RemoveNext()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Scheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *tmp_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "RemoveNext"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Scheduler::Event();
    }
    self_obj_before = reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = (ns3::Scheduler*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "RemoveNext", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Scheduler::Event();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SchedulerEvent_Type, &tmp_Event)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Scheduler::Event();
    }
    ns3::Scheduler::Event retval = *tmp_Event->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Scheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::TypeId
PyNs3Scheduler__PythonHelper::GetInstanceTypeId() const
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
PyNs3Scheduler__PythonHelper::DoDispose()
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
PyNs3Scheduler__PythonHelper::DoStart()
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
PyNs3Scheduler__PythonHelper::NotifyNewAggregate()
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
PyNs3Scheduler__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3Scheduler__tp_init__0(PyNs3Scheduler *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3Scheduler_Type)
    {
        self->obj = new PyNs3Scheduler__PythonHelper();
        self->obj->Ref ();
        ((PyNs3Scheduler__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        PyErr_SetString(PyExc_TypeError, "class 'Scheduler' cannot be constructed");
        return -1;
    }
    return 0;
}

static int
_wrap_PyNs3Scheduler__tp_init__1(PyNs3Scheduler *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Scheduler *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Scheduler_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3Scheduler_Type)
    {
        self->obj = new PyNs3Scheduler__PythonHelper(*((PyNs3Scheduler *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3Scheduler__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        PyErr_SetString(PyExc_TypeError, "class 'Scheduler' cannot be constructed");
        return -1;
    }
    return 0;
}

int _wrap_PyNs3Scheduler__tp_init(PyNs3Scheduler *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Scheduler__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Scheduler__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Scheduler_Insert(PyNs3Scheduler *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SchedulerEvent *ev;
    const char *keywords[] = {"ev", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SchedulerEvent_Type, &ev)) {
        return NULL;
    }
    self->obj->Insert(*((PyNs3SchedulerEvent *) ev)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Scheduler_PeekNext(PyNs3Scheduler *self)
{
    PyObject *py_retval;
    PyNs3SchedulerEvent *py_Event;
    
    ns3::Scheduler::Event retval = self->obj->PeekNext();
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(retval);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = Py_BuildValue((char *) "N", py_Event);
    return py_retval;
}


PyObject *
_wrap_PyNs3Scheduler_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::Scheduler::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3Scheduler_Remove(PyNs3Scheduler *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SchedulerEvent *ev;
    const char *keywords[] = {"ev", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SchedulerEvent_Type, &ev)) {
        return NULL;
    }
    self->obj->Remove(*((PyNs3SchedulerEvent *) ev)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Scheduler_IsEmpty(PyNs3Scheduler *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsEmpty();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Scheduler_RemoveNext(PyNs3Scheduler *self)
{
    PyObject *py_retval;
    PyNs3SchedulerEvent *py_Event;
    
    ns3::Scheduler::Event retval = self->obj->RemoveNext();
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(retval);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = Py_BuildValue((char *) "N", py_Event);
    return py_retval;
}

static PyMethodDef PyNs3Scheduler_methods[] = {
    {(char *) "Insert", (PyCFunction) _wrap_PyNs3Scheduler_Insert, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "PeekNext", (PyCFunction) _wrap_PyNs3Scheduler_PeekNext, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3Scheduler_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Remove", (PyCFunction) _wrap_PyNs3Scheduler_Remove, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsEmpty", (PyCFunction) _wrap_PyNs3Scheduler_IsEmpty, METH_NOARGS, NULL },
    {(char *) "RemoveNext", (PyCFunction) _wrap_PyNs3Scheduler_RemoveNext, METH_NOARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3Scheduler__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3Scheduler__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3Scheduler__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3Scheduler__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3Scheduler__tp_clear(PyNs3Scheduler *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::Scheduler *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3Scheduler__tp_traverse(PyNs3Scheduler *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3Scheduler__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3Scheduler__tp_dealloc(PyNs3Scheduler *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3Scheduler__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Scheduler__tp_richcompare (PyNs3Scheduler *PYBINDGEN_UNUSED(self), PyNs3Scheduler *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Scheduler_Type)) {
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

PyTypeObject PyNs3Scheduler_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.Scheduler",            /* tp_name */
    sizeof(PyNs3Scheduler),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Scheduler__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3Scheduler__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3Scheduler__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3Scheduler__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Scheduler_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3Scheduler, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Scheduler__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3SchedulerEvent_wrapper_registry;
static PyObject* _wrap_PyNs3SchedulerEvent__get_key(PyNs3SchedulerEvent *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyNs3SchedulerEventKey *py_EventKey;
    
    py_EventKey = PyObject_New(PyNs3SchedulerEventKey, &PyNs3SchedulerEventKey_Type);
    py_EventKey->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_EventKey->obj = new ns3::Scheduler::EventKey(self->obj->key);
    PyNs3SchedulerEventKey_wrapper_registry[(void *) py_EventKey->obj] = (PyObject *) py_EventKey;
    py_retval = Py_BuildValue((char *) "N", py_EventKey);
    return py_retval;
}
static int _wrap_PyNs3SchedulerEvent__set_key(PyNs3SchedulerEvent *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    PyNs3SchedulerEventKey *tmp_EventKey;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SchedulerEventKey_Type, &tmp_EventKey)) {
        Py_DECREF(py_retval);
        return -1;
    }
    self->obj->key = *tmp_EventKey->obj;
    Py_DECREF(py_retval);
    return 0;
}
static PyGetSetDef PyNs3SchedulerEvent__getsets[] = {
    {
        (char*) "key", /* attribute name */
        (getter) _wrap_PyNs3SchedulerEvent__get_key, /* C function to get the attribute */
        (setter) _wrap_PyNs3SchedulerEvent__set_key, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    { NULL, NULL, NULL, NULL, NULL }
};


static int
_wrap_PyNs3SchedulerEvent__tp_init__0(PyNs3SchedulerEvent *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::Scheduler::Event();
    return 0;
}

static int
_wrap_PyNs3SchedulerEvent__tp_init__1(PyNs3SchedulerEvent *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3SchedulerEvent *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SchedulerEvent_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Scheduler::Event(*((PyNs3SchedulerEvent *) arg0)->obj);
    return 0;
}

int _wrap_PyNs3SchedulerEvent__tp_init(PyNs3SchedulerEvent *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3SchedulerEvent__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3SchedulerEvent__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3SchedulerEvent__copy__(PyNs3SchedulerEvent *self)
{

    PyNs3SchedulerEvent *py_copy;
    py_copy = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_copy->obj = new ns3::Scheduler::Event(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3SchedulerEvent_methods[] = {
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3SchedulerEvent__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3SchedulerEvent__tp_dealloc(PyNs3SchedulerEvent *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3SchedulerEvent_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3SchedulerEvent_wrapper_registry.end()) {
        PyNs3SchedulerEvent_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::Scheduler::Event *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3SchedulerEvent__tp_richcompare (PyNs3SchedulerEvent *PYBINDGEN_UNUSED(self), PyNs3SchedulerEvent *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3SchedulerEvent_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        if (*self->obj < *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
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

PyTypeObject PyNs3SchedulerEvent_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.Scheduler.Event",            /* tp_name */
    sizeof(PyNs3SchedulerEvent),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3SchedulerEvent__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3SchedulerEvent__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3SchedulerEvent_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    PyNs3SchedulerEvent__getsets,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3SchedulerEvent__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3SchedulerEventKey_wrapper_registry;
static PyObject* _wrap_PyNs3SchedulerEventKey__get_m_context(PyNs3SchedulerEventKey *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(self->obj->m_context));
    return py_retval;
}
static int _wrap_PyNs3SchedulerEventKey__set_m_context(PyNs3SchedulerEventKey *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &self->obj->m_context)) {
        Py_DECREF(py_retval);
        return -1;
    }
    Py_DECREF(py_retval);
    return 0;
}
static PyObject* _wrap_PyNs3SchedulerEventKey__get_m_ts(PyNs3SchedulerEventKey *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "K", self->obj->m_ts);
    return py_retval;
}
static int _wrap_PyNs3SchedulerEventKey__set_m_ts(PyNs3SchedulerEventKey *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "K", &self->obj->m_ts)) {
        Py_DECREF(py_retval);
        return -1;
    }
    Py_DECREF(py_retval);
    return 0;
}
static PyObject* _wrap_PyNs3SchedulerEventKey__get_m_uid(PyNs3SchedulerEventKey *self, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(self->obj->m_uid));
    return py_retval;
}
static int _wrap_PyNs3SchedulerEventKey__set_m_uid(PyNs3SchedulerEventKey *self, PyObject *value, void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &self->obj->m_uid)) {
        Py_DECREF(py_retval);
        return -1;
    }
    Py_DECREF(py_retval);
    return 0;
}
static PyGetSetDef PyNs3SchedulerEventKey__getsets[] = {
    {
        (char*) "m_context", /* attribute name */
        (getter) _wrap_PyNs3SchedulerEventKey__get_m_context, /* C function to get the attribute */
        (setter) _wrap_PyNs3SchedulerEventKey__set_m_context, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    {
        (char*) "m_ts", /* attribute name */
        (getter) _wrap_PyNs3SchedulerEventKey__get_m_ts, /* C function to get the attribute */
        (setter) _wrap_PyNs3SchedulerEventKey__set_m_ts, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    {
        (char*) "m_uid", /* attribute name */
        (getter) _wrap_PyNs3SchedulerEventKey__get_m_uid, /* C function to get the attribute */
        (setter) _wrap_PyNs3SchedulerEventKey__set_m_uid, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    { NULL, NULL, NULL, NULL, NULL }
};


static int
_wrap_PyNs3SchedulerEventKey__tp_init__0(PyNs3SchedulerEventKey *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::Scheduler::EventKey();
    return 0;
}

static int
_wrap_PyNs3SchedulerEventKey__tp_init__1(PyNs3SchedulerEventKey *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3SchedulerEventKey *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SchedulerEventKey_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Scheduler::EventKey(*((PyNs3SchedulerEventKey *) arg0)->obj);
    return 0;
}

int _wrap_PyNs3SchedulerEventKey__tp_init(PyNs3SchedulerEventKey *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3SchedulerEventKey__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3SchedulerEventKey__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3SchedulerEventKey__copy__(PyNs3SchedulerEventKey *self)
{

    PyNs3SchedulerEventKey *py_copy;
    py_copy = PyObject_New(PyNs3SchedulerEventKey, &PyNs3SchedulerEventKey_Type);
    py_copy->obj = new ns3::Scheduler::EventKey(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3SchedulerEventKey_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3SchedulerEventKey_methods[] = {
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3SchedulerEventKey__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3SchedulerEventKey__tp_dealloc(PyNs3SchedulerEventKey *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3SchedulerEventKey_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3SchedulerEventKey_wrapper_registry.end()) {
        PyNs3SchedulerEventKey_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::Scheduler::EventKey *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3SchedulerEventKey__tp_richcompare (PyNs3SchedulerEventKey *PYBINDGEN_UNUSED(self), PyNs3SchedulerEventKey *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3SchedulerEventKey_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        if (*self->obj < *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        if (*self->obj != *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        if (*self->obj > *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3SchedulerEventKey_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.Scheduler.EventKey",            /* tp_name */
    sizeof(PyNs3SchedulerEventKey),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3SchedulerEventKey__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3SchedulerEventKey__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3SchedulerEventKey_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    PyNs3SchedulerEventKey__getsets,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3SchedulerEventKey__tp_init,             /* tp_init */
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




pybindgen::TypeMap PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map;



static int
_wrap_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____tp_init__0(PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__ *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::SimpleRefCount< ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> >();
    return 0;
}

static int
_wrap_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____tp_init__1(PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__ *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__ *o;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___Type, &o)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::SimpleRefCount< ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> >(*((PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__ *) o)->obj);
    return 0;
}

int _wrap_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____tp_init(PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__ *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___Cleanup(void)
{
    PyObject *py_retval;
    
    ns3::SimpleRefCount< ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> >::Cleanup();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____copy__(PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__ *self)
{

    PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__ *py_copy;
    py_copy = PyObject_New(PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__, &PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___Type);
    py_copy->obj = new ns3::SimpleRefCount< ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> >(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___methods[] = {
    {(char *) "Cleanup", (PyCFunction) _wrap_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___Cleanup, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____tp_dealloc(PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__ *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::SimpleRefCount< ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> > *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____tp_richcompare (PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__ *PYBINDGEN_UNUSED(self), PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__ *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___Type)) {
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

PyTypeObject PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__",            /* tp_name */
    sizeof(PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____tp_init,             /* tp_init */
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
_wrap_PyNs3SimulatorImpl__tp_init(void)
{
    PyErr_SetString(PyExc_TypeError, "class 'SimulatorImpl' cannot be constructed (have pure virtual methods but no helper class)");
    return -1;
}


PyObject *
_wrap_PyNs3SimulatorImpl_Run(PyNs3SimulatorImpl *self)
{
    PyObject *py_retval;
    
    self->obj->Run();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3SimulatorImpl_Now(PyNs3SimulatorImpl *self)
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
_wrap_PyNs3SimulatorImpl_GetMaximumSimulationTime(PyNs3SimulatorImpl *self)
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
_wrap_PyNs3SimulatorImpl_IsFinished(PyNs3SimulatorImpl *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsFinished();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3SimulatorImpl_GetDelayLeft(PyNs3SimulatorImpl *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3SimulatorImpl_GetSystemId(PyNs3SimulatorImpl *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetSystemId();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}



PyObject *
_wrap_PyNs3SimulatorImpl_Stop__0(PyNs3SimulatorImpl *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
_wrap_PyNs3SimulatorImpl_Stop__1(PyNs3SimulatorImpl *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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

PyObject * _wrap_PyNs3SimulatorImpl_Stop(PyNs3SimulatorImpl *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3SimulatorImpl_Stop__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3SimulatorImpl_Stop__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3SimulatorImpl_Remove(PyNs3SimulatorImpl *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3SimulatorImpl_GetContext(PyNs3SimulatorImpl *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetContext();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3SimulatorImpl_SetScheduler(PyNs3SimulatorImpl *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3SimulatorImpl_RunOneEvent(PyNs3SimulatorImpl *self)
{
    PyObject *py_retval;
    
    self->obj->RunOneEvent();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3SimulatorImpl_Cancel(PyNs3SimulatorImpl *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3SimulatorImpl_Destroy(PyNs3SimulatorImpl *self)
{
    PyObject *py_retval;
    
    self->obj->Destroy();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3SimulatorImpl_IsExpired(PyNs3SimulatorImpl *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3SimulatorImpl_Next(PyNs3SimulatorImpl *self)
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
_wrap_PyNs3SimulatorImpl_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::SimulatorImpl::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}

static PyMethodDef PyNs3SimulatorImpl_methods[] = {
    {(char *) "Run", (PyCFunction) _wrap_PyNs3SimulatorImpl_Run, METH_NOARGS, NULL },
    {(char *) "Now", (PyCFunction) _wrap_PyNs3SimulatorImpl_Now, METH_NOARGS, NULL },
    {(char *) "GetMaximumSimulationTime", (PyCFunction) _wrap_PyNs3SimulatorImpl_GetMaximumSimulationTime, METH_NOARGS, NULL },
    {(char *) "IsFinished", (PyCFunction) _wrap_PyNs3SimulatorImpl_IsFinished, METH_NOARGS, NULL },
    {(char *) "GetDelayLeft", (PyCFunction) _wrap_PyNs3SimulatorImpl_GetDelayLeft, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetSystemId", (PyCFunction) _wrap_PyNs3SimulatorImpl_GetSystemId, METH_NOARGS, NULL },
    {(char *) "Stop", (PyCFunction) _wrap_PyNs3SimulatorImpl_Stop, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Remove", (PyCFunction) _wrap_PyNs3SimulatorImpl_Remove, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetContext", (PyCFunction) _wrap_PyNs3SimulatorImpl_GetContext, METH_NOARGS, NULL },
    {(char *) "SetScheduler", (PyCFunction) _wrap_PyNs3SimulatorImpl_SetScheduler, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "RunOneEvent", (PyCFunction) _wrap_PyNs3SimulatorImpl_RunOneEvent, METH_NOARGS, NULL },
    {(char *) "Cancel", (PyCFunction) _wrap_PyNs3SimulatorImpl_Cancel, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Destroy", (PyCFunction) _wrap_PyNs3SimulatorImpl_Destroy, METH_NOARGS, NULL },
    {(char *) "IsExpired", (PyCFunction) _wrap_PyNs3SimulatorImpl_IsExpired, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Next", (PyCFunction) _wrap_PyNs3SimulatorImpl_Next, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3SimulatorImpl_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3SimulatorImpl__tp_clear(PyNs3SimulatorImpl *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::SimulatorImpl *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3SimulatorImpl__tp_traverse(PyNs3SimulatorImpl *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    return 0;
}


static void
_wrap_PyNs3SimulatorImpl__tp_dealloc(PyNs3SimulatorImpl *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3SimulatorImpl__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3SimulatorImpl__tp_richcompare (PyNs3SimulatorImpl *PYBINDGEN_UNUSED(self), PyNs3SimulatorImpl *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3SimulatorImpl_Type)) {
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

PyTypeObject PyNs3SimulatorImpl_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.SimulatorImpl",            /* tp_name */
    sizeof(PyNs3SimulatorImpl),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3SimulatorImpl__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3SimulatorImpl__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3SimulatorImpl__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3SimulatorImpl__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3SimulatorImpl_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3SimulatorImpl, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3SimulatorImpl__tp_init,             /* tp_init */
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
PyNs3Synchronizer__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3Synchronizer *self)
{
    PyObject *py_retval;
    PyNs3Synchronizer__PythonHelper *helper = dynamic_cast< PyNs3Synchronizer__PythonHelper* >(self->obj);
    
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
PyNs3Synchronizer__PythonHelper::_wrap_NotifyNewAggregate(PyNs3Synchronizer *self)
{
    PyObject *py_retval;
    PyNs3Synchronizer__PythonHelper *helper = dynamic_cast< PyNs3Synchronizer__PythonHelper* >(self->obj);
    
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
PyNs3Synchronizer__PythonHelper::_wrap_DoStart(PyNs3Synchronizer *self)
{
    PyObject *py_retval;
    PyNs3Synchronizer__PythonHelper *helper = dynamic_cast< PyNs3Synchronizer__PythonHelper* >(self->obj);
    
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
PyNs3Synchronizer__PythonHelper::_wrap_DoDispose(PyNs3Synchronizer *self)
{
    PyObject *py_retval;
    PyNs3Synchronizer__PythonHelper *helper = dynamic_cast< PyNs3Synchronizer__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

uint64_t
PyNs3Synchronizer__PythonHelper::DoEventEnd()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Synchronizer *self_obj_before;
    PyObject *py_retval;
    uint64_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoEventEnd"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = (ns3::Synchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoEventEnd", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "K", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3Synchronizer__PythonHelper::DoEventStart()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Synchronizer *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoEventStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = (ns3::Synchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoEventStart", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

uint64_t
PyNs3Synchronizer__PythonHelper::DoGetCurrentRealtime()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Synchronizer *self_obj_before;
    PyObject *py_retval;
    uint64_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoGetCurrentRealtime"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = (ns3::Synchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoGetCurrentRealtime", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "K", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

int64_t
PyNs3Synchronizer__PythonHelper::DoGetDrift(uint64_t ns)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Synchronizer *self_obj_before;
    PyObject *py_retval;
    int64_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoGetDrift"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = (ns3::Synchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoGetDrift", (char *) "K", ns);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "L", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3Synchronizer__PythonHelper::DoRealtime()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Synchronizer *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoRealtime"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = (ns3::Synchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoRealtime", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
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
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3Synchronizer__PythonHelper::DoSetCondition(bool arg0)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Synchronizer *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoSetCondition"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = (ns3::Synchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoSetCondition", (char *) "N", PyBool_FromLong(arg0));
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3Synchronizer__PythonHelper::DoSetOrigin(uint64_t ns)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Synchronizer *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoSetOrigin"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = (ns3::Synchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoSetOrigin", (char *) "K", ns);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3Synchronizer__PythonHelper::DoSignal()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Synchronizer *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoSignal"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = (ns3::Synchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoSignal", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

bool
PyNs3Synchronizer__PythonHelper::DoSynchronize(uint64_t nsCurrent, uint64_t nsDelay)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Synchronizer *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoSynchronize"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = (ns3::Synchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoSynchronize", (char *) "KK", nsCurrent, nsDelay);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
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
        reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Synchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::TypeId
PyNs3Synchronizer__PythonHelper::GetInstanceTypeId() const
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
PyNs3Synchronizer__PythonHelper::DoDispose()
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
PyNs3Synchronizer__PythonHelper::DoStart()
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
PyNs3Synchronizer__PythonHelper::NotifyNewAggregate()
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
PyNs3Synchronizer__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3Synchronizer__tp_init__0(PyNs3Synchronizer *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Synchronizer *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Synchronizer_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3Synchronizer_Type)
    {
        self->obj = new PyNs3Synchronizer__PythonHelper(*((PyNs3Synchronizer *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3Synchronizer__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        PyErr_SetString(PyExc_TypeError, "class 'Synchronizer' cannot be constructed");
        return -1;
    }
    return 0;
}

static int
_wrap_PyNs3Synchronizer__tp_init__1(PyNs3Synchronizer *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3Synchronizer_Type)
    {
        self->obj = new PyNs3Synchronizer__PythonHelper();
        self->obj->Ref ();
        ((PyNs3Synchronizer__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        PyErr_SetString(PyExc_TypeError, "class 'Synchronizer' cannot be constructed");
        return -1;
    }
    return 0;
}

int _wrap_PyNs3Synchronizer__tp_init(PyNs3Synchronizer *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Synchronizer__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Synchronizer__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Synchronizer_Signal(PyNs3Synchronizer *self)
{
    PyObject *py_retval;
    
    self->obj->Signal();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Synchronizer_Realtime(PyNs3Synchronizer *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->Realtime();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Synchronizer_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::Synchronizer::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3Synchronizer_GetOrigin(PyNs3Synchronizer *self)
{
    PyObject *py_retval;
    uint64_t retval;
    
    retval = self->obj->GetOrigin();
    py_retval = Py_BuildValue((char *) "K", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Synchronizer_SetOrigin(PyNs3Synchronizer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint64_t ts;
    const char *keywords[] = {"ts", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "K", (char **) keywords, &ts)) {
        return NULL;
    }
    self->obj->SetOrigin(ts);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Synchronizer_Synchronize(PyNs3Synchronizer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    uint64_t tsCurrent;
    uint64_t tsDelay;
    const char *keywords[] = {"tsCurrent", "tsDelay", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "KK", (char **) keywords, &tsCurrent, &tsDelay)) {
        return NULL;
    }
    retval = self->obj->Synchronize(tsCurrent, tsDelay);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Synchronizer_GetDrift(PyNs3Synchronizer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int64_t retval;
    uint64_t ts;
    const char *keywords[] = {"ts", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "K", (char **) keywords, &ts)) {
        return NULL;
    }
    retval = self->obj->GetDrift(ts);
    py_retval = Py_BuildValue((char *) "L", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Synchronizer_EventStart(PyNs3Synchronizer *self)
{
    PyObject *py_retval;
    
    self->obj->EventStart();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Synchronizer_EventEnd(PyNs3Synchronizer *self)
{
    PyObject *py_retval;
    uint64_t retval;
    
    retval = self->obj->EventEnd();
    py_retval = Py_BuildValue((char *) "K", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Synchronizer_SetCondition(PyNs3Synchronizer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool arg0;
    PyObject *py_arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_arg0)) {
        return NULL;
    }
    arg0 = (bool) PyObject_IsTrue(py_arg0);
    self->obj->SetCondition(arg0);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Synchronizer_GetCurrentRealtime(PyNs3Synchronizer *self)
{
    PyObject *py_retval;
    uint64_t retval;
    
    retval = self->obj->GetCurrentRealtime();
    py_retval = Py_BuildValue((char *) "K", retval);
    return py_retval;
}

static PyMethodDef PyNs3Synchronizer_methods[] = {
    {(char *) "Signal", (PyCFunction) _wrap_PyNs3Synchronizer_Signal, METH_NOARGS, NULL },
    {(char *) "Realtime", (PyCFunction) _wrap_PyNs3Synchronizer_Realtime, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3Synchronizer_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "GetOrigin", (PyCFunction) _wrap_PyNs3Synchronizer_GetOrigin, METH_NOARGS, NULL },
    {(char *) "SetOrigin", (PyCFunction) _wrap_PyNs3Synchronizer_SetOrigin, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Synchronize", (PyCFunction) _wrap_PyNs3Synchronizer_Synchronize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetDrift", (PyCFunction) _wrap_PyNs3Synchronizer_GetDrift, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "EventStart", (PyCFunction) _wrap_PyNs3Synchronizer_EventStart, METH_NOARGS, NULL },
    {(char *) "EventEnd", (PyCFunction) _wrap_PyNs3Synchronizer_EventEnd, METH_NOARGS, NULL },
    {(char *) "SetCondition", (PyCFunction) _wrap_PyNs3Synchronizer_SetCondition, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetCurrentRealtime", (PyCFunction) _wrap_PyNs3Synchronizer_GetCurrentRealtime, METH_NOARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3Synchronizer__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3Synchronizer__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3Synchronizer__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3Synchronizer__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3Synchronizer__tp_clear(PyNs3Synchronizer *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::Synchronizer *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3Synchronizer__tp_traverse(PyNs3Synchronizer *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3Synchronizer__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3Synchronizer__tp_dealloc(PyNs3Synchronizer *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3Synchronizer__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Synchronizer__tp_richcompare (PyNs3Synchronizer *PYBINDGEN_UNUSED(self), PyNs3Synchronizer *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Synchronizer_Type)) {
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

PyTypeObject PyNs3Synchronizer_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.Synchronizer",            /* tp_name */
    sizeof(PyNs3Synchronizer),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Synchronizer__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3Synchronizer__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3Synchronizer__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3Synchronizer__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Synchronizer_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3Synchronizer, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Synchronizer__tp_init,             /* tp_init */
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
PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoSetOrigin(PyNs3WallClockSynchronizer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint64_t ns;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    const char *keywords[] = {"ns", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "K", (char **) keywords, &ns)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoSetOrigin of class WallClockSynchronizer is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoSetOrigin__parent_caller(ns);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3WallClockSynchronizer__PythonHelper::_wrap_DriftCorrect(PyNs3WallClockSynchronizer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint64_t retval;
    uint64_t nsNow;
    uint64_t nsDelay;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    const char *keywords[] = {"nsNow", "nsDelay", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "KK", (char **) keywords, &nsNow, &nsDelay)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DriftCorrect of class WallClockSynchronizer is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->DriftCorrect__parent_caller(nsNow, nsDelay);
    py_retval = Py_BuildValue((char *) "K", retval);
    return py_retval;
}

PyObject *
PyNs3WallClockSynchronizer__PythonHelper::_wrap_SpinWait(PyNs3WallClockSynchronizer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    uint64_t arg0;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "K", (char **) keywords, &arg0)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method SpinWait of class WallClockSynchronizer is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->SpinWait__parent_caller(arg0);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}

PyObject *
PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoDispose(PyNs3WallClockSynchronizer *self)
{
    PyObject *py_retval;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3WallClockSynchronizer__PythonHelper::_wrap_GetRealtime(PyNs3WallClockSynchronizer *self)
{
    PyObject *py_retval;
    uint64_t retval;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method GetRealtime of class WallClockSynchronizer is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->GetRealtime__parent_caller();
    py_retval = Py_BuildValue((char *) "K", retval);
    return py_retval;
}

PyObject *
PyNs3WallClockSynchronizer__PythonHelper::_wrap_NotifyNewAggregate(PyNs3WallClockSynchronizer *self)
{
    PyObject *py_retval;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    
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
PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoEventEnd(PyNs3WallClockSynchronizer *self)
{
    PyObject *py_retval;
    uint64_t retval;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoEventEnd of class WallClockSynchronizer is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->DoEventEnd__parent_caller();
    py_retval = Py_BuildValue((char *) "K", retval);
    return py_retval;
}

PyObject *
PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoEventStart(PyNs3WallClockSynchronizer *self)
{
    PyObject *py_retval;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoEventStart of class WallClockSynchronizer is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoEventStart__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3WallClockSynchronizer__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3WallClockSynchronizer *self)
{
    PyObject *py_retval;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    
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
PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoStart(PyNs3WallClockSynchronizer *self)
{
    PyObject *py_retval;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    
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
PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoGetDrift(PyNs3WallClockSynchronizer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int64_t retval;
    uint64_t ns;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    const char *keywords[] = {"ns", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "K", (char **) keywords, &ns)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoGetDrift of class WallClockSynchronizer is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->DoGetDrift__parent_caller(ns);
    py_retval = Py_BuildValue((char *) "L", retval);
    return py_retval;
}

PyObject *
PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoRealtime(PyNs3WallClockSynchronizer *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoRealtime of class WallClockSynchronizer is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->DoRealtime__parent_caller();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}

PyObject *
PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoSetCondition(PyNs3WallClockSynchronizer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool cond;
    PyObject *py_cond;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    const char *keywords[] = {"cond", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_cond)) {
        return NULL;
    }
    cond = (bool) PyObject_IsTrue(py_cond);
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoSetCondition of class WallClockSynchronizer is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoSetCondition__parent_caller(cond);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoGetCurrentRealtime(PyNs3WallClockSynchronizer *self)
{
    PyObject *py_retval;
    uint64_t retval;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoGetCurrentRealtime of class WallClockSynchronizer is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->DoGetCurrentRealtime__parent_caller();
    py_retval = Py_BuildValue((char *) "K", retval);
    return py_retval;
}

PyObject *
PyNs3WallClockSynchronizer__PythonHelper::_wrap_SleepWait(PyNs3WallClockSynchronizer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    uint64_t arg0;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "K", (char **) keywords, &arg0)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method SleepWait of class WallClockSynchronizer is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->SleepWait__parent_caller(arg0);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}

PyObject *
PyNs3WallClockSynchronizer__PythonHelper::_wrap_GetNormalizedRealtime(PyNs3WallClockSynchronizer *self)
{
    PyObject *py_retval;
    uint64_t retval;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method GetNormalizedRealtime of class WallClockSynchronizer is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->GetNormalizedRealtime__parent_caller();
    py_retval = Py_BuildValue((char *) "K", retval);
    return py_retval;
}

PyObject *
PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoSynchronize(PyNs3WallClockSynchronizer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    uint64_t nsCurrent;
    uint64_t nsDelay;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    const char *keywords[] = {"nsCurrent", "nsDelay", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "KK", (char **) keywords, &nsCurrent, &nsDelay)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoSynchronize of class WallClockSynchronizer is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->DoSynchronize__parent_caller(nsCurrent, nsDelay);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}

PyObject *
PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoSignal(PyNs3WallClockSynchronizer *self)
{
    PyObject *py_retval;
    PyNs3WallClockSynchronizer__PythonHelper *helper = dynamic_cast< PyNs3WallClockSynchronizer__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoSignal of class WallClockSynchronizer is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoSignal__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

uint64_t
PyNs3WallClockSynchronizer__PythonHelper::DoEventEnd()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WallClockSynchronizer *self_obj_before;
    PyObject *py_retval;
    uint64_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoEventEnd"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WallClockSynchronizer::DoEventEnd();
    }
    self_obj_before = reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = (ns3::WallClockSynchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoEventEnd", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WallClockSynchronizer::DoEventEnd();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "K", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WallClockSynchronizer::DoEventEnd();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3WallClockSynchronizer__PythonHelper::DoEventStart()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WallClockSynchronizer *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoEventStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::WallClockSynchronizer::DoEventStart();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = (ns3::WallClockSynchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoEventStart", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

uint64_t
PyNs3WallClockSynchronizer__PythonHelper::DoGetCurrentRealtime()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WallClockSynchronizer *self_obj_before;
    PyObject *py_retval;
    uint64_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoGetCurrentRealtime"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WallClockSynchronizer::DoGetCurrentRealtime();
    }
    self_obj_before = reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = (ns3::WallClockSynchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoGetCurrentRealtime", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WallClockSynchronizer::DoGetCurrentRealtime();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "K", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WallClockSynchronizer::DoGetCurrentRealtime();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

int64_t
PyNs3WallClockSynchronizer__PythonHelper::DoGetDrift(uint64_t ns)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WallClockSynchronizer *self_obj_before;
    PyObject *py_retval;
    int64_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoGetDrift"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WallClockSynchronizer::DoGetDrift(ns);
    }
    self_obj_before = reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = (ns3::WallClockSynchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoGetDrift", (char *) "K", ns);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WallClockSynchronizer::DoGetDrift(ns);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "L", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WallClockSynchronizer::DoGetDrift(ns);
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3WallClockSynchronizer__PythonHelper::DoRealtime()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WallClockSynchronizer *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoRealtime"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WallClockSynchronizer::DoRealtime();
    }
    self_obj_before = reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = (ns3::WallClockSynchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoRealtime", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WallClockSynchronizer::DoRealtime();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WallClockSynchronizer::DoRealtime();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3WallClockSynchronizer__PythonHelper::DoSetCondition(bool cond)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WallClockSynchronizer *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoSetCondition"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::WallClockSynchronizer::DoSetCondition(cond);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = (ns3::WallClockSynchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoSetCondition", (char *) "N", PyBool_FromLong(cond));
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3WallClockSynchronizer__PythonHelper::DoSetOrigin(uint64_t ns)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WallClockSynchronizer *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoSetOrigin"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::WallClockSynchronizer::DoSetOrigin(ns);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = (ns3::WallClockSynchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoSetOrigin", (char *) "K", ns);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3WallClockSynchronizer__PythonHelper::DoSignal()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WallClockSynchronizer *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoSignal"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::WallClockSynchronizer::DoSignal();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = (ns3::WallClockSynchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoSignal", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

bool
PyNs3WallClockSynchronizer__PythonHelper::DoSynchronize(uint64_t nsCurrent, uint64_t nsDelay)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WallClockSynchronizer *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoSynchronize"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WallClockSynchronizer::DoSynchronize(nsCurrent, nsDelay);
    }
    self_obj_before = reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = (ns3::WallClockSynchronizer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoSynchronize", (char *) "KK", nsCurrent, nsDelay);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WallClockSynchronizer::DoSynchronize(nsCurrent, nsDelay);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WallClockSynchronizer::DoSynchronize(nsCurrent, nsDelay);
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WallClockSynchronizer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::TypeId
PyNs3WallClockSynchronizer__PythonHelper::GetInstanceTypeId() const
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
PyNs3WallClockSynchronizer__PythonHelper::DoDispose()
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
PyNs3WallClockSynchronizer__PythonHelper::DoStart()
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
PyNs3WallClockSynchronizer__PythonHelper::NotifyNewAggregate()
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
PyNs3WallClockSynchronizer__PythonHelper::NotifyConstructionCompleted()
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
static PyObject* _wrap_PyNs3WallClockSynchronizer__get_NS_PER_SEC(PyObject * PYBINDGEN_UNUSED(obj), void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "K", ns3::WallClockSynchronizer::NS_PER_SEC);
    return py_retval;
}
static PyObject* _wrap_PyNs3WallClockSynchronizer__get_US_PER_NS(PyObject * PYBINDGEN_UNUSED(obj), void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "K", ns3::WallClockSynchronizer::US_PER_NS);
    return py_retval;
}
static PyObject* _wrap_PyNs3WallClockSynchronizer__get_US_PER_SEC(PyObject * PYBINDGEN_UNUSED(obj), void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "K", ns3::WallClockSynchronizer::US_PER_SEC);
    return py_retval;
}
static PyGetSetDef Ns3WallClockSynchronizerMeta__getsets[] = {
    {
        (char*) "NS_PER_SEC", /* attribute name */
        (getter) _wrap_PyNs3WallClockSynchronizer__get_NS_PER_SEC, /* C function to get the attribute */
        (setter) NULL, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    {
        (char*) "US_PER_NS", /* attribute name */
        (getter) _wrap_PyNs3WallClockSynchronizer__get_US_PER_NS, /* C function to get the attribute */
        (setter) NULL, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    {
        (char*) "US_PER_SEC", /* attribute name */
        (getter) _wrap_PyNs3WallClockSynchronizer__get_US_PER_SEC, /* C function to get the attribute */
        (setter) NULL, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    { NULL, NULL, NULL, NULL, NULL }
};

PyTypeObject PyNs3WallClockSynchronizerMeta_Type = {
	PyObject_HEAD_INIT(NULL)
	0,					/* ob_size */
	(char *) "Ns3WallClockSynchronizerMeta",		        /* tp_name */
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
	Ns3WallClockSynchronizerMeta__getsets,				/* tp_getset */
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
_wrap_PyNs3WallClockSynchronizer__tp_init__0(PyNs3WallClockSynchronizer *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3WallClockSynchronizer *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3WallClockSynchronizer_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3WallClockSynchronizer_Type)
    {
        self->obj = new PyNs3WallClockSynchronizer__PythonHelper(*((PyNs3WallClockSynchronizer *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3WallClockSynchronizer__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::WallClockSynchronizer(*((PyNs3WallClockSynchronizer *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3WallClockSynchronizer__tp_init__1(PyNs3WallClockSynchronizer *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3WallClockSynchronizer_Type)
    {
        self->obj = new PyNs3WallClockSynchronizer__PythonHelper();
        self->obj->Ref ();
        ((PyNs3WallClockSynchronizer__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::WallClockSynchronizer();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3WallClockSynchronizer__tp_init(PyNs3WallClockSynchronizer *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3WallClockSynchronizer__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3WallClockSynchronizer__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3WallClockSynchronizer__copy__(PyNs3WallClockSynchronizer *self)
{

    PyNs3WallClockSynchronizer *py_copy;
    py_copy = PyObject_GC_New(PyNs3WallClockSynchronizer, &PyNs3WallClockSynchronizer_Type);
    py_copy->obj = new ns3::WallClockSynchronizer(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3WallClockSynchronizer_methods[] = {
    {(char *) "DoSetOrigin", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoSetOrigin, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DriftCorrect", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_DriftCorrect, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SpinWait", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_SpinWait, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "GetRealtime", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_GetRealtime, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoEventEnd", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoEventEnd, METH_NOARGS, NULL },
    {(char *) "DoEventStart", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoEventStart, METH_NOARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "DoGetDrift", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoGetDrift, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DoRealtime", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoRealtime, METH_NOARGS, NULL },
    {(char *) "DoSetCondition", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoSetCondition, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DoGetCurrentRealtime", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoGetCurrentRealtime, METH_NOARGS, NULL },
    {(char *) "SleepWait", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_SleepWait, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetNormalizedRealtime", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_GetNormalizedRealtime, METH_NOARGS, NULL },
    {(char *) "DoSynchronize", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoSynchronize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DoSignal", (PyCFunction) PyNs3WallClockSynchronizer__PythonHelper::_wrap_DoSignal, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3WallClockSynchronizer__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3WallClockSynchronizer__tp_clear(PyNs3WallClockSynchronizer *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::WallClockSynchronizer *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3WallClockSynchronizer__tp_traverse(PyNs3WallClockSynchronizer *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3WallClockSynchronizer__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3WallClockSynchronizer__tp_dealloc(PyNs3WallClockSynchronizer *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3WallClockSynchronizer__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3WallClockSynchronizer__tp_richcompare (PyNs3WallClockSynchronizer *PYBINDGEN_UNUSED(self), PyNs3WallClockSynchronizer *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3WallClockSynchronizer_Type)) {
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

PyTypeObject PyNs3WallClockSynchronizer_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.WallClockSynchronizer",            /* tp_name */
    sizeof(PyNs3WallClockSynchronizer),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3WallClockSynchronizer__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3WallClockSynchronizer__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3WallClockSynchronizer__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3WallClockSynchronizer__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3WallClockSynchronizer_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3WallClockSynchronizer, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3WallClockSynchronizer__tp_init,             /* tp_init */
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
PyNs3CalendarScheduler__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3CalendarScheduler *self)
{
    PyObject *py_retval;
    PyNs3CalendarScheduler__PythonHelper *helper = dynamic_cast< PyNs3CalendarScheduler__PythonHelper* >(self->obj);
    
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
PyNs3CalendarScheduler__PythonHelper::_wrap_NotifyNewAggregate(PyNs3CalendarScheduler *self)
{
    PyObject *py_retval;
    PyNs3CalendarScheduler__PythonHelper *helper = dynamic_cast< PyNs3CalendarScheduler__PythonHelper* >(self->obj);
    
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
PyNs3CalendarScheduler__PythonHelper::_wrap_DoStart(PyNs3CalendarScheduler *self)
{
    PyObject *py_retval;
    PyNs3CalendarScheduler__PythonHelper *helper = dynamic_cast< PyNs3CalendarScheduler__PythonHelper* >(self->obj);
    
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
PyNs3CalendarScheduler__PythonHelper::_wrap_DoDispose(PyNs3CalendarScheduler *self)
{
    PyObject *py_retval;
    PyNs3CalendarScheduler__PythonHelper *helper = dynamic_cast< PyNs3CalendarScheduler__PythonHelper* >(self->obj);
    
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
PyNs3CalendarScheduler__PythonHelper::Insert(ns3::Scheduler::Event const & ev)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::CalendarScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *py_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Insert"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::CalendarScheduler::Insert(ev);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = (ns3::CalendarScheduler*) this;
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(ev);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Insert", (char *) "N", py_Event);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

bool
PyNs3CalendarScheduler__PythonHelper::IsEmpty() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::CalendarScheduler *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsEmpty"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::CalendarScheduler::IsEmpty();
    }
    self_obj_before = reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = const_cast< ns3::CalendarScheduler* >((const ns3::CalendarScheduler*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsEmpty", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::CalendarScheduler::IsEmpty();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::CalendarScheduler::IsEmpty();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Scheduler::Event
PyNs3CalendarScheduler__PythonHelper::PeekNext() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::CalendarScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *tmp_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "PeekNext"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::CalendarScheduler::PeekNext();
    }
    self_obj_before = reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = const_cast< ns3::CalendarScheduler* >((const ns3::CalendarScheduler*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "PeekNext", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::CalendarScheduler::PeekNext();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SchedulerEvent_Type, &tmp_Event)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::CalendarScheduler::PeekNext();
    }
    ns3::Scheduler::Event retval = *tmp_Event->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3CalendarScheduler__PythonHelper::Remove(ns3::Scheduler::Event const & ev)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::CalendarScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *py_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Remove"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::CalendarScheduler::Remove(ev);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = (ns3::CalendarScheduler*) this;
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(ev);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Remove", (char *) "N", py_Event);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Scheduler::Event
PyNs3CalendarScheduler__PythonHelper::RemoveNext()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::CalendarScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *tmp_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "RemoveNext"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::CalendarScheduler::RemoveNext();
    }
    self_obj_before = reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = (ns3::CalendarScheduler*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "RemoveNext", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::CalendarScheduler::RemoveNext();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SchedulerEvent_Type, &tmp_Event)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::CalendarScheduler::RemoveNext();
    }
    ns3::Scheduler::Event retval = *tmp_Event->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3CalendarScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::TypeId
PyNs3CalendarScheduler__PythonHelper::GetInstanceTypeId() const
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
PyNs3CalendarScheduler__PythonHelper::DoDispose()
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
PyNs3CalendarScheduler__PythonHelper::DoStart()
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
PyNs3CalendarScheduler__PythonHelper::NotifyNewAggregate()
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
PyNs3CalendarScheduler__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3CalendarScheduler__tp_init__0(PyNs3CalendarScheduler *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3CalendarScheduler *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3CalendarScheduler_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3CalendarScheduler_Type)
    {
        self->obj = new PyNs3CalendarScheduler__PythonHelper(*((PyNs3CalendarScheduler *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3CalendarScheduler__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::CalendarScheduler(*((PyNs3CalendarScheduler *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3CalendarScheduler__tp_init__1(PyNs3CalendarScheduler *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3CalendarScheduler_Type)
    {
        self->obj = new PyNs3CalendarScheduler__PythonHelper();
        self->obj->Ref ();
        ((PyNs3CalendarScheduler__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::CalendarScheduler();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3CalendarScheduler__tp_init(PyNs3CalendarScheduler *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3CalendarScheduler__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3CalendarScheduler__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3CalendarScheduler_Insert(PyNs3CalendarScheduler *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SchedulerEvent *ev;
    PyNs3CalendarScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3CalendarScheduler__PythonHelper*> (self->obj);
    const char *keywords[] = {"ev", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SchedulerEvent_Type, &ev)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Insert(*((PyNs3SchedulerEvent *) ev)->obj)) : (self->obj->ns3::CalendarScheduler::Insert(*((PyNs3SchedulerEvent *) ev)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3CalendarScheduler_PeekNext(PyNs3CalendarScheduler *self)
{
    PyObject *py_retval;
    PyNs3CalendarScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3CalendarScheduler__PythonHelper*> (self->obj);
    PyNs3SchedulerEvent *py_Event;
    
    ns3::Scheduler::Event retval = (helper_class == NULL)? (self->obj->PeekNext()) : (self->obj->ns3::CalendarScheduler::PeekNext());
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(retval);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = Py_BuildValue((char *) "N", py_Event);
    return py_retval;
}


PyObject *
_wrap_PyNs3CalendarScheduler_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::CalendarScheduler::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3CalendarScheduler_Remove(PyNs3CalendarScheduler *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SchedulerEvent *ev;
    PyNs3CalendarScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3CalendarScheduler__PythonHelper*> (self->obj);
    const char *keywords[] = {"ev", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SchedulerEvent_Type, &ev)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Remove(*((PyNs3SchedulerEvent *) ev)->obj)) : (self->obj->ns3::CalendarScheduler::Remove(*((PyNs3SchedulerEvent *) ev)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3CalendarScheduler_IsEmpty(PyNs3CalendarScheduler *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3CalendarScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3CalendarScheduler__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsEmpty()) : (self->obj->ns3::CalendarScheduler::IsEmpty());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3CalendarScheduler_RemoveNext(PyNs3CalendarScheduler *self)
{
    PyObject *py_retval;
    PyNs3CalendarScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3CalendarScheduler__PythonHelper*> (self->obj);
    PyNs3SchedulerEvent *py_Event;
    
    ns3::Scheduler::Event retval = (helper_class == NULL)? (self->obj->RemoveNext()) : (self->obj->ns3::CalendarScheduler::RemoveNext());
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(retval);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = Py_BuildValue((char *) "N", py_Event);
    return py_retval;
}


static PyObject*
_wrap_PyNs3CalendarScheduler__copy__(PyNs3CalendarScheduler *self)
{

    PyNs3CalendarScheduler *py_copy;
    py_copy = PyObject_GC_New(PyNs3CalendarScheduler, &PyNs3CalendarScheduler_Type);
    py_copy->obj = new ns3::CalendarScheduler(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3CalendarScheduler_methods[] = {
    {(char *) "Insert", (PyCFunction) _wrap_PyNs3CalendarScheduler_Insert, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "PeekNext", (PyCFunction) _wrap_PyNs3CalendarScheduler_PeekNext, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3CalendarScheduler_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Remove", (PyCFunction) _wrap_PyNs3CalendarScheduler_Remove, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsEmpty", (PyCFunction) _wrap_PyNs3CalendarScheduler_IsEmpty, METH_NOARGS, NULL },
    {(char *) "RemoveNext", (PyCFunction) _wrap_PyNs3CalendarScheduler_RemoveNext, METH_NOARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3CalendarScheduler__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3CalendarScheduler__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3CalendarScheduler__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3CalendarScheduler__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3CalendarScheduler__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3CalendarScheduler__tp_clear(PyNs3CalendarScheduler *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::CalendarScheduler *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3CalendarScheduler__tp_traverse(PyNs3CalendarScheduler *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3CalendarScheduler__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3CalendarScheduler__tp_dealloc(PyNs3CalendarScheduler *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3CalendarScheduler__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3CalendarScheduler__tp_richcompare (PyNs3CalendarScheduler *PYBINDGEN_UNUSED(self), PyNs3CalendarScheduler *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3CalendarScheduler_Type)) {
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

PyTypeObject PyNs3CalendarScheduler_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.CalendarScheduler",            /* tp_name */
    sizeof(PyNs3CalendarScheduler),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3CalendarScheduler__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3CalendarScheduler__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3CalendarScheduler__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3CalendarScheduler__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3CalendarScheduler_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3CalendarScheduler, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3CalendarScheduler__tp_init,             /* tp_init */
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
_wrap_PyNs3DefaultSimulatorImpl__tp_init__0(PyNs3DefaultSimulatorImpl *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3DefaultSimulatorImpl *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DefaultSimulatorImpl_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::DefaultSimulatorImpl(*((PyNs3DefaultSimulatorImpl *) arg0)->obj);
    self->obj->Ref ();
    ns3::CompleteConstruct(self->obj);
    return 0;
}

static int
_wrap_PyNs3DefaultSimulatorImpl__tp_init__1(PyNs3DefaultSimulatorImpl *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::DefaultSimulatorImpl();
    self->obj->Ref ();
    ns3::CompleteConstruct(self->obj);
    return 0;
}

int _wrap_PyNs3DefaultSimulatorImpl__tp_init(PyNs3DefaultSimulatorImpl *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3DefaultSimulatorImpl__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3DefaultSimulatorImpl__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3DefaultSimulatorImpl_Run(PyNs3DefaultSimulatorImpl *self)
{
    PyObject *py_retval;
    
    self->obj->Run();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DefaultSimulatorImpl_Now(PyNs3DefaultSimulatorImpl *self)
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
_wrap_PyNs3DefaultSimulatorImpl_GetMaximumSimulationTime(PyNs3DefaultSimulatorImpl *self)
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
_wrap_PyNs3DefaultSimulatorImpl_IsFinished(PyNs3DefaultSimulatorImpl *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsFinished();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3DefaultSimulatorImpl_GetDelayLeft(PyNs3DefaultSimulatorImpl *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3DefaultSimulatorImpl_GetSystemId(PyNs3DefaultSimulatorImpl *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetSystemId();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}



PyObject *
_wrap_PyNs3DefaultSimulatorImpl_Stop__0(PyNs3DefaultSimulatorImpl *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
_wrap_PyNs3DefaultSimulatorImpl_Stop__1(PyNs3DefaultSimulatorImpl *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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

PyObject * _wrap_PyNs3DefaultSimulatorImpl_Stop(PyNs3DefaultSimulatorImpl *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3DefaultSimulatorImpl_Stop__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3DefaultSimulatorImpl_Stop__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3DefaultSimulatorImpl_Remove(PyNs3DefaultSimulatorImpl *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3DefaultSimulatorImpl_GetContext(PyNs3DefaultSimulatorImpl *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetContext();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3DefaultSimulatorImpl_SetScheduler(PyNs3DefaultSimulatorImpl *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3DefaultSimulatorImpl_RunOneEvent(PyNs3DefaultSimulatorImpl *self)
{
    PyObject *py_retval;
    
    self->obj->RunOneEvent();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DefaultSimulatorImpl_Cancel(PyNs3DefaultSimulatorImpl *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3DefaultSimulatorImpl_Destroy(PyNs3DefaultSimulatorImpl *self)
{
    PyObject *py_retval;
    
    self->obj->Destroy();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DefaultSimulatorImpl_IsExpired(PyNs3DefaultSimulatorImpl *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3DefaultSimulatorImpl_Next(PyNs3DefaultSimulatorImpl *self)
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
_wrap_PyNs3DefaultSimulatorImpl_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::DefaultSimulatorImpl::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


static PyObject*
_wrap_PyNs3DefaultSimulatorImpl__copy__(PyNs3DefaultSimulatorImpl *self)
{

    PyNs3DefaultSimulatorImpl *py_copy;
    py_copy = PyObject_GC_New(PyNs3DefaultSimulatorImpl, &PyNs3DefaultSimulatorImpl_Type);
    py_copy->obj = new ns3::DefaultSimulatorImpl(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3DefaultSimulatorImpl_methods[] = {
    {(char *) "Run", (PyCFunction) _wrap_PyNs3DefaultSimulatorImpl_Run, METH_NOARGS, NULL },
    {(char *) "Now", (PyCFunction) _wrap_PyNs3DefaultSimulatorImpl_Now, METH_NOARGS, NULL },
    {(char *) "GetMaximumSimulationTime", (PyCFunction) _wrap_PyNs3DefaultSimulatorImpl_GetMaximumSimulationTime, METH_NOARGS, NULL },
    {(char *) "IsFinished", (PyCFunction) _wrap_PyNs3DefaultSimulatorImpl_IsFinished, METH_NOARGS, NULL },
    {(char *) "GetDelayLeft", (PyCFunction) _wrap_PyNs3DefaultSimulatorImpl_GetDelayLeft, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetSystemId", (PyCFunction) _wrap_PyNs3DefaultSimulatorImpl_GetSystemId, METH_NOARGS, NULL },
    {(char *) "Stop", (PyCFunction) _wrap_PyNs3DefaultSimulatorImpl_Stop, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Remove", (PyCFunction) _wrap_PyNs3DefaultSimulatorImpl_Remove, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetContext", (PyCFunction) _wrap_PyNs3DefaultSimulatorImpl_GetContext, METH_NOARGS, NULL },
    {(char *) "SetScheduler", (PyCFunction) _wrap_PyNs3DefaultSimulatorImpl_SetScheduler, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "RunOneEvent", (PyCFunction) _wrap_PyNs3DefaultSimulatorImpl_RunOneEvent, METH_NOARGS, NULL },
    {(char *) "Cancel", (PyCFunction) _wrap_PyNs3DefaultSimulatorImpl_Cancel, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Destroy", (PyCFunction) _wrap_PyNs3DefaultSimulatorImpl_Destroy, METH_NOARGS, NULL },
    {(char *) "IsExpired", (PyCFunction) _wrap_PyNs3DefaultSimulatorImpl_IsExpired, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Next", (PyCFunction) _wrap_PyNs3DefaultSimulatorImpl_Next, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3DefaultSimulatorImpl_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3DefaultSimulatorImpl__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3DefaultSimulatorImpl__tp_clear(PyNs3DefaultSimulatorImpl *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::DefaultSimulatorImpl *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3DefaultSimulatorImpl__tp_traverse(PyNs3DefaultSimulatorImpl *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    return 0;
}


static void
_wrap_PyNs3DefaultSimulatorImpl__tp_dealloc(PyNs3DefaultSimulatorImpl *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3DefaultSimulatorImpl__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3DefaultSimulatorImpl__tp_richcompare (PyNs3DefaultSimulatorImpl *PYBINDGEN_UNUSED(self), PyNs3DefaultSimulatorImpl *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3DefaultSimulatorImpl_Type)) {
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

PyTypeObject PyNs3DefaultSimulatorImpl_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.DefaultSimulatorImpl",            /* tp_name */
    sizeof(PyNs3DefaultSimulatorImpl),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3DefaultSimulatorImpl__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3DefaultSimulatorImpl__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3DefaultSimulatorImpl__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3DefaultSimulatorImpl__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3DefaultSimulatorImpl_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3DefaultSimulatorImpl, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3DefaultSimulatorImpl__tp_init,             /* tp_init */
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
_wrap_PyNs3EventImpl__tp_init(void)
{
    PyErr_SetString(PyExc_TypeError, "class 'EventImpl' cannot be constructed (have pure virtual methods but no helper class)");
    return -1;
}


PyObject *
_wrap_PyNs3EventImpl_Cancel(PyNs3EventImpl *self)
{
    PyObject *py_retval;
    
    self->obj->Cancel();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3EventImpl_IsCancelled(PyNs3EventImpl *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsCancelled();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3EventImpl_Invoke(PyNs3EventImpl *self)
{
    PyObject *py_retval;
    
    self->obj->Invoke();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

static PyMethodDef PyNs3EventImpl_methods[] = {
    {(char *) "Cancel", (PyCFunction) _wrap_PyNs3EventImpl_Cancel, METH_NOARGS, NULL },
    {(char *) "IsCancelled", (PyCFunction) _wrap_PyNs3EventImpl_IsCancelled, METH_NOARGS, NULL },
    {(char *) "Invoke", (PyCFunction) _wrap_PyNs3EventImpl_Invoke, METH_NOARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3EventImpl__tp_dealloc(PyNs3EventImpl *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::EventImpl *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3EventImpl__tp_richcompare (PyNs3EventImpl *PYBINDGEN_UNUSED(self), PyNs3EventImpl *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3EventImpl_Type)) {
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

PyTypeObject PyNs3EventImpl_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.EventImpl",            /* tp_name */
    sizeof(PyNs3EventImpl),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3EventImpl__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3EventImpl__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3EventImpl_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3EventImpl__tp_init,             /* tp_init */
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
PyNs3HeapScheduler__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3HeapScheduler *self)
{
    PyObject *py_retval;
    PyNs3HeapScheduler__PythonHelper *helper = dynamic_cast< PyNs3HeapScheduler__PythonHelper* >(self->obj);
    
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
PyNs3HeapScheduler__PythonHelper::_wrap_NotifyNewAggregate(PyNs3HeapScheduler *self)
{
    PyObject *py_retval;
    PyNs3HeapScheduler__PythonHelper *helper = dynamic_cast< PyNs3HeapScheduler__PythonHelper* >(self->obj);
    
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
PyNs3HeapScheduler__PythonHelper::_wrap_DoStart(PyNs3HeapScheduler *self)
{
    PyObject *py_retval;
    PyNs3HeapScheduler__PythonHelper *helper = dynamic_cast< PyNs3HeapScheduler__PythonHelper* >(self->obj);
    
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
PyNs3HeapScheduler__PythonHelper::_wrap_DoDispose(PyNs3HeapScheduler *self)
{
    PyObject *py_retval;
    PyNs3HeapScheduler__PythonHelper *helper = dynamic_cast< PyNs3HeapScheduler__PythonHelper* >(self->obj);
    
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
PyNs3HeapScheduler__PythonHelper::Insert(ns3::Scheduler::Event const & ev)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::HeapScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *py_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Insert"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::HeapScheduler::Insert(ev);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = (ns3::HeapScheduler*) this;
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(ev);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Insert", (char *) "N", py_Event);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

bool
PyNs3HeapScheduler__PythonHelper::IsEmpty() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::HeapScheduler *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsEmpty"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HeapScheduler::IsEmpty();
    }
    self_obj_before = reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = const_cast< ns3::HeapScheduler* >((const ns3::HeapScheduler*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsEmpty", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HeapScheduler::IsEmpty();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HeapScheduler::IsEmpty();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Scheduler::Event
PyNs3HeapScheduler__PythonHelper::PeekNext() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::HeapScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *tmp_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "PeekNext"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HeapScheduler::PeekNext();
    }
    self_obj_before = reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = const_cast< ns3::HeapScheduler* >((const ns3::HeapScheduler*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "PeekNext", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HeapScheduler::PeekNext();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SchedulerEvent_Type, &tmp_Event)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HeapScheduler::PeekNext();
    }
    ns3::Scheduler::Event retval = *tmp_Event->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3HeapScheduler__PythonHelper::Remove(ns3::Scheduler::Event const & ev)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::HeapScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *py_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Remove"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::HeapScheduler::Remove(ev);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = (ns3::HeapScheduler*) this;
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(ev);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Remove", (char *) "N", py_Event);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Scheduler::Event
PyNs3HeapScheduler__PythonHelper::RemoveNext()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::HeapScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *tmp_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "RemoveNext"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HeapScheduler::RemoveNext();
    }
    self_obj_before = reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = (ns3::HeapScheduler*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "RemoveNext", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HeapScheduler::RemoveNext();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SchedulerEvent_Type, &tmp_Event)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::HeapScheduler::RemoveNext();
    }
    ns3::Scheduler::Event retval = *tmp_Event->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3HeapScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::TypeId
PyNs3HeapScheduler__PythonHelper::GetInstanceTypeId() const
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
PyNs3HeapScheduler__PythonHelper::DoDispose()
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
PyNs3HeapScheduler__PythonHelper::DoStart()
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
PyNs3HeapScheduler__PythonHelper::NotifyNewAggregate()
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
PyNs3HeapScheduler__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3HeapScheduler__tp_init__0(PyNs3HeapScheduler *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3HeapScheduler *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3HeapScheduler_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3HeapScheduler_Type)
    {
        self->obj = new PyNs3HeapScheduler__PythonHelper(*((PyNs3HeapScheduler *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3HeapScheduler__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::HeapScheduler(*((PyNs3HeapScheduler *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3HeapScheduler__tp_init__1(PyNs3HeapScheduler *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3HeapScheduler_Type)
    {
        self->obj = new PyNs3HeapScheduler__PythonHelper();
        self->obj->Ref ();
        ((PyNs3HeapScheduler__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::HeapScheduler();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3HeapScheduler__tp_init(PyNs3HeapScheduler *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3HeapScheduler__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3HeapScheduler__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3HeapScheduler_Insert(PyNs3HeapScheduler *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SchedulerEvent *ev;
    PyNs3HeapScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3HeapScheduler__PythonHelper*> (self->obj);
    const char *keywords[] = {"ev", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SchedulerEvent_Type, &ev)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Insert(*((PyNs3SchedulerEvent *) ev)->obj)) : (self->obj->ns3::HeapScheduler::Insert(*((PyNs3SchedulerEvent *) ev)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HeapScheduler_PeekNext(PyNs3HeapScheduler *self)
{
    PyObject *py_retval;
    PyNs3HeapScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3HeapScheduler__PythonHelper*> (self->obj);
    PyNs3SchedulerEvent *py_Event;
    
    ns3::Scheduler::Event retval = (helper_class == NULL)? (self->obj->PeekNext()) : (self->obj->ns3::HeapScheduler::PeekNext());
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(retval);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = Py_BuildValue((char *) "N", py_Event);
    return py_retval;
}


PyObject *
_wrap_PyNs3HeapScheduler_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::HeapScheduler::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3HeapScheduler_Remove(PyNs3HeapScheduler *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SchedulerEvent *ev;
    PyNs3HeapScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3HeapScheduler__PythonHelper*> (self->obj);
    const char *keywords[] = {"ev", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SchedulerEvent_Type, &ev)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Remove(*((PyNs3SchedulerEvent *) ev)->obj)) : (self->obj->ns3::HeapScheduler::Remove(*((PyNs3SchedulerEvent *) ev)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HeapScheduler_IsEmpty(PyNs3HeapScheduler *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3HeapScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3HeapScheduler__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsEmpty()) : (self->obj->ns3::HeapScheduler::IsEmpty());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3HeapScheduler_RemoveNext(PyNs3HeapScheduler *self)
{
    PyObject *py_retval;
    PyNs3HeapScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3HeapScheduler__PythonHelper*> (self->obj);
    PyNs3SchedulerEvent *py_Event;
    
    ns3::Scheduler::Event retval = (helper_class == NULL)? (self->obj->RemoveNext()) : (self->obj->ns3::HeapScheduler::RemoveNext());
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(retval);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = Py_BuildValue((char *) "N", py_Event);
    return py_retval;
}


static PyObject*
_wrap_PyNs3HeapScheduler__copy__(PyNs3HeapScheduler *self)
{

    PyNs3HeapScheduler *py_copy;
    py_copy = PyObject_GC_New(PyNs3HeapScheduler, &PyNs3HeapScheduler_Type);
    py_copy->obj = new ns3::HeapScheduler(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3HeapScheduler_methods[] = {
    {(char *) "Insert", (PyCFunction) _wrap_PyNs3HeapScheduler_Insert, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "PeekNext", (PyCFunction) _wrap_PyNs3HeapScheduler_PeekNext, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3HeapScheduler_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Remove", (PyCFunction) _wrap_PyNs3HeapScheduler_Remove, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsEmpty", (PyCFunction) _wrap_PyNs3HeapScheduler_IsEmpty, METH_NOARGS, NULL },
    {(char *) "RemoveNext", (PyCFunction) _wrap_PyNs3HeapScheduler_RemoveNext, METH_NOARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3HeapScheduler__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3HeapScheduler__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3HeapScheduler__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3HeapScheduler__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3HeapScheduler__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3HeapScheduler__tp_clear(PyNs3HeapScheduler *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::HeapScheduler *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3HeapScheduler__tp_traverse(PyNs3HeapScheduler *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3HeapScheduler__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3HeapScheduler__tp_dealloc(PyNs3HeapScheduler *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3HeapScheduler__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3HeapScheduler__tp_richcompare (PyNs3HeapScheduler *PYBINDGEN_UNUSED(self), PyNs3HeapScheduler *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3HeapScheduler_Type)) {
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

PyTypeObject PyNs3HeapScheduler_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.HeapScheduler",            /* tp_name */
    sizeof(PyNs3HeapScheduler),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3HeapScheduler__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3HeapScheduler__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3HeapScheduler__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3HeapScheduler__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3HeapScheduler_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3HeapScheduler, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3HeapScheduler__tp_init,             /* tp_init */
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
PyNs3ListScheduler__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3ListScheduler *self)
{
    PyObject *py_retval;
    PyNs3ListScheduler__PythonHelper *helper = dynamic_cast< PyNs3ListScheduler__PythonHelper* >(self->obj);
    
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
PyNs3ListScheduler__PythonHelper::_wrap_NotifyNewAggregate(PyNs3ListScheduler *self)
{
    PyObject *py_retval;
    PyNs3ListScheduler__PythonHelper *helper = dynamic_cast< PyNs3ListScheduler__PythonHelper* >(self->obj);
    
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
PyNs3ListScheduler__PythonHelper::_wrap_DoStart(PyNs3ListScheduler *self)
{
    PyObject *py_retval;
    PyNs3ListScheduler__PythonHelper *helper = dynamic_cast< PyNs3ListScheduler__PythonHelper* >(self->obj);
    
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
PyNs3ListScheduler__PythonHelper::_wrap_DoDispose(PyNs3ListScheduler *self)
{
    PyObject *py_retval;
    PyNs3ListScheduler__PythonHelper *helper = dynamic_cast< PyNs3ListScheduler__PythonHelper* >(self->obj);
    
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
PyNs3ListScheduler__PythonHelper::Insert(ns3::Scheduler::Event const & ev)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ListScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *py_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Insert"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ListScheduler::Insert(ev);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = (ns3::ListScheduler*) this;
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(ev);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Insert", (char *) "N", py_Event);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

bool
PyNs3ListScheduler__PythonHelper::IsEmpty() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ListScheduler *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsEmpty"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::ListScheduler::IsEmpty();
    }
    self_obj_before = reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = const_cast< ns3::ListScheduler* >((const ns3::ListScheduler*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsEmpty", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::ListScheduler::IsEmpty();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::ListScheduler::IsEmpty();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Scheduler::Event
PyNs3ListScheduler__PythonHelper::PeekNext() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ListScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *tmp_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "PeekNext"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::ListScheduler::PeekNext();
    }
    self_obj_before = reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = const_cast< ns3::ListScheduler* >((const ns3::ListScheduler*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "PeekNext", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::ListScheduler::PeekNext();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SchedulerEvent_Type, &tmp_Event)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::ListScheduler::PeekNext();
    }
    ns3::Scheduler::Event retval = *tmp_Event->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3ListScheduler__PythonHelper::Remove(ns3::Scheduler::Event const & ev)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ListScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *py_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Remove"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ListScheduler::Remove(ev);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = (ns3::ListScheduler*) this;
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(ev);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Remove", (char *) "N", py_Event);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Scheduler::Event
PyNs3ListScheduler__PythonHelper::RemoveNext()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ListScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *tmp_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "RemoveNext"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::ListScheduler::RemoveNext();
    }
    self_obj_before = reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = (ns3::ListScheduler*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "RemoveNext", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::ListScheduler::RemoveNext();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SchedulerEvent_Type, &tmp_Event)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::ListScheduler::RemoveNext();
    }
    ns3::Scheduler::Event retval = *tmp_Event->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ListScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::TypeId
PyNs3ListScheduler__PythonHelper::GetInstanceTypeId() const
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
PyNs3ListScheduler__PythonHelper::DoDispose()
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
PyNs3ListScheduler__PythonHelper::DoStart()
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
PyNs3ListScheduler__PythonHelper::NotifyNewAggregate()
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
PyNs3ListScheduler__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3ListScheduler__tp_init__0(PyNs3ListScheduler *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3ListScheduler *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3ListScheduler_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3ListScheduler_Type)
    {
        self->obj = new PyNs3ListScheduler__PythonHelper(*((PyNs3ListScheduler *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3ListScheduler__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::ListScheduler(*((PyNs3ListScheduler *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3ListScheduler__tp_init__1(PyNs3ListScheduler *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3ListScheduler_Type)
    {
        self->obj = new PyNs3ListScheduler__PythonHelper();
        self->obj->Ref ();
        ((PyNs3ListScheduler__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::ListScheduler();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3ListScheduler__tp_init(PyNs3ListScheduler *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3ListScheduler__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3ListScheduler__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3ListScheduler_Insert(PyNs3ListScheduler *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SchedulerEvent *ev;
    PyNs3ListScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3ListScheduler__PythonHelper*> (self->obj);
    const char *keywords[] = {"ev", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SchedulerEvent_Type, &ev)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Insert(*((PyNs3SchedulerEvent *) ev)->obj)) : (self->obj->ns3::ListScheduler::Insert(*((PyNs3SchedulerEvent *) ev)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3ListScheduler_PeekNext(PyNs3ListScheduler *self)
{
    PyObject *py_retval;
    PyNs3ListScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3ListScheduler__PythonHelper*> (self->obj);
    PyNs3SchedulerEvent *py_Event;
    
    ns3::Scheduler::Event retval = (helper_class == NULL)? (self->obj->PeekNext()) : (self->obj->ns3::ListScheduler::PeekNext());
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(retval);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = Py_BuildValue((char *) "N", py_Event);
    return py_retval;
}


PyObject *
_wrap_PyNs3ListScheduler_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::ListScheduler::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3ListScheduler_Remove(PyNs3ListScheduler *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SchedulerEvent *ev;
    PyNs3ListScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3ListScheduler__PythonHelper*> (self->obj);
    const char *keywords[] = {"ev", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SchedulerEvent_Type, &ev)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Remove(*((PyNs3SchedulerEvent *) ev)->obj)) : (self->obj->ns3::ListScheduler::Remove(*((PyNs3SchedulerEvent *) ev)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3ListScheduler_IsEmpty(PyNs3ListScheduler *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3ListScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3ListScheduler__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsEmpty()) : (self->obj->ns3::ListScheduler::IsEmpty());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3ListScheduler_RemoveNext(PyNs3ListScheduler *self)
{
    PyObject *py_retval;
    PyNs3ListScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3ListScheduler__PythonHelper*> (self->obj);
    PyNs3SchedulerEvent *py_Event;
    
    ns3::Scheduler::Event retval = (helper_class == NULL)? (self->obj->RemoveNext()) : (self->obj->ns3::ListScheduler::RemoveNext());
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(retval);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = Py_BuildValue((char *) "N", py_Event);
    return py_retval;
}


static PyObject*
_wrap_PyNs3ListScheduler__copy__(PyNs3ListScheduler *self)
{

    PyNs3ListScheduler *py_copy;
    py_copy = PyObject_GC_New(PyNs3ListScheduler, &PyNs3ListScheduler_Type);
    py_copy->obj = new ns3::ListScheduler(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3ListScheduler_methods[] = {
    {(char *) "Insert", (PyCFunction) _wrap_PyNs3ListScheduler_Insert, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "PeekNext", (PyCFunction) _wrap_PyNs3ListScheduler_PeekNext, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3ListScheduler_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Remove", (PyCFunction) _wrap_PyNs3ListScheduler_Remove, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsEmpty", (PyCFunction) _wrap_PyNs3ListScheduler_IsEmpty, METH_NOARGS, NULL },
    {(char *) "RemoveNext", (PyCFunction) _wrap_PyNs3ListScheduler_RemoveNext, METH_NOARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3ListScheduler__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3ListScheduler__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3ListScheduler__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3ListScheduler__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3ListScheduler__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3ListScheduler__tp_clear(PyNs3ListScheduler *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::ListScheduler *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3ListScheduler__tp_traverse(PyNs3ListScheduler *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3ListScheduler__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3ListScheduler__tp_dealloc(PyNs3ListScheduler *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3ListScheduler__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3ListScheduler__tp_richcompare (PyNs3ListScheduler *PYBINDGEN_UNUSED(self), PyNs3ListScheduler *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3ListScheduler_Type)) {
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

PyTypeObject PyNs3ListScheduler_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.ListScheduler",            /* tp_name */
    sizeof(PyNs3ListScheduler),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3ListScheduler__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3ListScheduler__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3ListScheduler__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3ListScheduler__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3ListScheduler_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3ListScheduler, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3ListScheduler__tp_init,             /* tp_init */
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
PyNs3MapScheduler__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3MapScheduler *self)
{
    PyObject *py_retval;
    PyNs3MapScheduler__PythonHelper *helper = dynamic_cast< PyNs3MapScheduler__PythonHelper* >(self->obj);
    
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
PyNs3MapScheduler__PythonHelper::_wrap_NotifyNewAggregate(PyNs3MapScheduler *self)
{
    PyObject *py_retval;
    PyNs3MapScheduler__PythonHelper *helper = dynamic_cast< PyNs3MapScheduler__PythonHelper* >(self->obj);
    
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
PyNs3MapScheduler__PythonHelper::_wrap_DoStart(PyNs3MapScheduler *self)
{
    PyObject *py_retval;
    PyNs3MapScheduler__PythonHelper *helper = dynamic_cast< PyNs3MapScheduler__PythonHelper* >(self->obj);
    
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
PyNs3MapScheduler__PythonHelper::_wrap_DoDispose(PyNs3MapScheduler *self)
{
    PyObject *py_retval;
    PyNs3MapScheduler__PythonHelper *helper = dynamic_cast< PyNs3MapScheduler__PythonHelper* >(self->obj);
    
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
PyNs3MapScheduler__PythonHelper::Insert(ns3::Scheduler::Event const & ev)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MapScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *py_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Insert"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::MapScheduler::Insert(ev);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = (ns3::MapScheduler*) this;
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(ev);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Insert", (char *) "N", py_Event);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

bool
PyNs3MapScheduler__PythonHelper::IsEmpty() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MapScheduler *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsEmpty"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MapScheduler::IsEmpty();
    }
    self_obj_before = reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = const_cast< ns3::MapScheduler* >((const ns3::MapScheduler*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsEmpty", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MapScheduler::IsEmpty();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MapScheduler::IsEmpty();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Scheduler::Event
PyNs3MapScheduler__PythonHelper::PeekNext() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MapScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *tmp_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "PeekNext"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MapScheduler::PeekNext();
    }
    self_obj_before = reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = const_cast< ns3::MapScheduler* >((const ns3::MapScheduler*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "PeekNext", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MapScheduler::PeekNext();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SchedulerEvent_Type, &tmp_Event)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MapScheduler::PeekNext();
    }
    ns3::Scheduler::Event retval = *tmp_Event->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3MapScheduler__PythonHelper::Remove(ns3::Scheduler::Event const & ev)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MapScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *py_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Remove"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::MapScheduler::Remove(ev);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = (ns3::MapScheduler*) this;
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(ev);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Remove", (char *) "N", py_Event);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Scheduler::Event
PyNs3MapScheduler__PythonHelper::RemoveNext()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MapScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *tmp_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "RemoveNext"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MapScheduler::RemoveNext();
    }
    self_obj_before = reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = (ns3::MapScheduler*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "RemoveNext", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MapScheduler::RemoveNext();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SchedulerEvent_Type, &tmp_Event)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MapScheduler::RemoveNext();
    }
    ns3::Scheduler::Event retval = *tmp_Event->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MapScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::TypeId
PyNs3MapScheduler__PythonHelper::GetInstanceTypeId() const
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
PyNs3MapScheduler__PythonHelper::DoDispose()
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
PyNs3MapScheduler__PythonHelper::DoStart()
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
PyNs3MapScheduler__PythonHelper::NotifyNewAggregate()
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
PyNs3MapScheduler__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3MapScheduler__tp_init__0(PyNs3MapScheduler *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3MapScheduler *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3MapScheduler_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3MapScheduler_Type)
    {
        self->obj = new PyNs3MapScheduler__PythonHelper(*((PyNs3MapScheduler *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3MapScheduler__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::MapScheduler(*((PyNs3MapScheduler *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3MapScheduler__tp_init__1(PyNs3MapScheduler *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3MapScheduler_Type)
    {
        self->obj = new PyNs3MapScheduler__PythonHelper();
        self->obj->Ref ();
        ((PyNs3MapScheduler__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::MapScheduler();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3MapScheduler__tp_init(PyNs3MapScheduler *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3MapScheduler__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3MapScheduler__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3MapScheduler_Insert(PyNs3MapScheduler *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SchedulerEvent *ev;
    PyNs3MapScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3MapScheduler__PythonHelper*> (self->obj);
    const char *keywords[] = {"ev", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SchedulerEvent_Type, &ev)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Insert(*((PyNs3SchedulerEvent *) ev)->obj)) : (self->obj->ns3::MapScheduler::Insert(*((PyNs3SchedulerEvent *) ev)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MapScheduler_PeekNext(PyNs3MapScheduler *self)
{
    PyObject *py_retval;
    PyNs3MapScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3MapScheduler__PythonHelper*> (self->obj);
    PyNs3SchedulerEvent *py_Event;
    
    ns3::Scheduler::Event retval = (helper_class == NULL)? (self->obj->PeekNext()) : (self->obj->ns3::MapScheduler::PeekNext());
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(retval);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = Py_BuildValue((char *) "N", py_Event);
    return py_retval;
}


PyObject *
_wrap_PyNs3MapScheduler_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::MapScheduler::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3MapScheduler_Remove(PyNs3MapScheduler *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SchedulerEvent *ev;
    PyNs3MapScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3MapScheduler__PythonHelper*> (self->obj);
    const char *keywords[] = {"ev", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SchedulerEvent_Type, &ev)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Remove(*((PyNs3SchedulerEvent *) ev)->obj)) : (self->obj->ns3::MapScheduler::Remove(*((PyNs3SchedulerEvent *) ev)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MapScheduler_IsEmpty(PyNs3MapScheduler *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3MapScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3MapScheduler__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsEmpty()) : (self->obj->ns3::MapScheduler::IsEmpty());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3MapScheduler_RemoveNext(PyNs3MapScheduler *self)
{
    PyObject *py_retval;
    PyNs3MapScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3MapScheduler__PythonHelper*> (self->obj);
    PyNs3SchedulerEvent *py_Event;
    
    ns3::Scheduler::Event retval = (helper_class == NULL)? (self->obj->RemoveNext()) : (self->obj->ns3::MapScheduler::RemoveNext());
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(retval);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = Py_BuildValue((char *) "N", py_Event);
    return py_retval;
}


static PyObject*
_wrap_PyNs3MapScheduler__copy__(PyNs3MapScheduler *self)
{

    PyNs3MapScheduler *py_copy;
    py_copy = PyObject_GC_New(PyNs3MapScheduler, &PyNs3MapScheduler_Type);
    py_copy->obj = new ns3::MapScheduler(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3MapScheduler_methods[] = {
    {(char *) "Insert", (PyCFunction) _wrap_PyNs3MapScheduler_Insert, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "PeekNext", (PyCFunction) _wrap_PyNs3MapScheduler_PeekNext, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3MapScheduler_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Remove", (PyCFunction) _wrap_PyNs3MapScheduler_Remove, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsEmpty", (PyCFunction) _wrap_PyNs3MapScheduler_IsEmpty, METH_NOARGS, NULL },
    {(char *) "RemoveNext", (PyCFunction) _wrap_PyNs3MapScheduler_RemoveNext, METH_NOARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3MapScheduler__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3MapScheduler__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3MapScheduler__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3MapScheduler__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3MapScheduler__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3MapScheduler__tp_clear(PyNs3MapScheduler *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::MapScheduler *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3MapScheduler__tp_traverse(PyNs3MapScheduler *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3MapScheduler__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3MapScheduler__tp_dealloc(PyNs3MapScheduler *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3MapScheduler__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3MapScheduler__tp_richcompare (PyNs3MapScheduler *PYBINDGEN_UNUSED(self), PyNs3MapScheduler *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3MapScheduler_Type)) {
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

PyTypeObject PyNs3MapScheduler_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.MapScheduler",            /* tp_name */
    sizeof(PyNs3MapScheduler),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3MapScheduler__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3MapScheduler__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3MapScheduler__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3MapScheduler__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3MapScheduler_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3MapScheduler, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3MapScheduler__tp_init,             /* tp_init */
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
PyNs3Ns2CalendarScheduler__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3Ns2CalendarScheduler *self)
{
    PyObject *py_retval;
    PyNs3Ns2CalendarScheduler__PythonHelper *helper = dynamic_cast< PyNs3Ns2CalendarScheduler__PythonHelper* >(self->obj);
    
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
PyNs3Ns2CalendarScheduler__PythonHelper::_wrap_NotifyNewAggregate(PyNs3Ns2CalendarScheduler *self)
{
    PyObject *py_retval;
    PyNs3Ns2CalendarScheduler__PythonHelper *helper = dynamic_cast< PyNs3Ns2CalendarScheduler__PythonHelper* >(self->obj);
    
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
PyNs3Ns2CalendarScheduler__PythonHelper::_wrap_DoStart(PyNs3Ns2CalendarScheduler *self)
{
    PyObject *py_retval;
    PyNs3Ns2CalendarScheduler__PythonHelper *helper = dynamic_cast< PyNs3Ns2CalendarScheduler__PythonHelper* >(self->obj);
    
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
PyNs3Ns2CalendarScheduler__PythonHelper::_wrap_DoDispose(PyNs3Ns2CalendarScheduler *self)
{
    PyObject *py_retval;
    PyNs3Ns2CalendarScheduler__PythonHelper *helper = dynamic_cast< PyNs3Ns2CalendarScheduler__PythonHelper* >(self->obj);
    
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
PyNs3Ns2CalendarScheduler__PythonHelper::Insert(ns3::Scheduler::Event const & ev)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Ns2CalendarScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *py_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Insert"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Ns2CalendarScheduler::Insert(ev);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = (ns3::Ns2CalendarScheduler*) this;
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(ev);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Insert", (char *) "N", py_Event);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

bool
PyNs3Ns2CalendarScheduler__PythonHelper::IsEmpty() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Ns2CalendarScheduler *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsEmpty"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Ns2CalendarScheduler::IsEmpty();
    }
    self_obj_before = reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = const_cast< ns3::Ns2CalendarScheduler* >((const ns3::Ns2CalendarScheduler*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsEmpty", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Ns2CalendarScheduler::IsEmpty();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Ns2CalendarScheduler::IsEmpty();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Scheduler::Event
PyNs3Ns2CalendarScheduler__PythonHelper::PeekNext() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Ns2CalendarScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *tmp_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "PeekNext"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Ns2CalendarScheduler::PeekNext();
    }
    self_obj_before = reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = const_cast< ns3::Ns2CalendarScheduler* >((const ns3::Ns2CalendarScheduler*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "PeekNext", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Ns2CalendarScheduler::PeekNext();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SchedulerEvent_Type, &tmp_Event)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Ns2CalendarScheduler::PeekNext();
    }
    ns3::Scheduler::Event retval = *tmp_Event->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3Ns2CalendarScheduler__PythonHelper::Remove(ns3::Scheduler::Event const & ev)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Ns2CalendarScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *py_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Remove"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Ns2CalendarScheduler::Remove(ev);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = (ns3::Ns2CalendarScheduler*) this;
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(ev);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Remove", (char *) "N", py_Event);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Scheduler::Event
PyNs3Ns2CalendarScheduler__PythonHelper::RemoveNext()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Ns2CalendarScheduler *self_obj_before;
    PyObject *py_retval;
    PyNs3SchedulerEvent *tmp_Event;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "RemoveNext"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Ns2CalendarScheduler::RemoveNext();
    }
    self_obj_before = reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = (ns3::Ns2CalendarScheduler*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "RemoveNext", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Ns2CalendarScheduler::RemoveNext();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SchedulerEvent_Type, &tmp_Event)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Ns2CalendarScheduler::RemoveNext();
    }
    ns3::Scheduler::Event retval = *tmp_Event->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Ns2CalendarScheduler* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::TypeId
PyNs3Ns2CalendarScheduler__PythonHelper::GetInstanceTypeId() const
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
PyNs3Ns2CalendarScheduler__PythonHelper::DoDispose()
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
PyNs3Ns2CalendarScheduler__PythonHelper::DoStart()
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
PyNs3Ns2CalendarScheduler__PythonHelper::NotifyNewAggregate()
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
PyNs3Ns2CalendarScheduler__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3Ns2CalendarScheduler__tp_init__0(PyNs3Ns2CalendarScheduler *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Ns2CalendarScheduler *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ns2CalendarScheduler_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3Ns2CalendarScheduler_Type)
    {
        self->obj = new PyNs3Ns2CalendarScheduler__PythonHelper(*((PyNs3Ns2CalendarScheduler *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3Ns2CalendarScheduler__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::Ns2CalendarScheduler(*((PyNs3Ns2CalendarScheduler *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3Ns2CalendarScheduler__tp_init__1(PyNs3Ns2CalendarScheduler *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3Ns2CalendarScheduler_Type)
    {
        self->obj = new PyNs3Ns2CalendarScheduler__PythonHelper();
        self->obj->Ref ();
        ((PyNs3Ns2CalendarScheduler__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::Ns2CalendarScheduler();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3Ns2CalendarScheduler__tp_init(PyNs3Ns2CalendarScheduler *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Ns2CalendarScheduler__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Ns2CalendarScheduler__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3Ns2CalendarScheduler_Insert(PyNs3Ns2CalendarScheduler *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SchedulerEvent *ev;
    PyNs3Ns2CalendarScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3Ns2CalendarScheduler__PythonHelper*> (self->obj);
    const char *keywords[] = {"ev", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SchedulerEvent_Type, &ev)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Insert(*((PyNs3SchedulerEvent *) ev)->obj)) : (self->obj->ns3::Ns2CalendarScheduler::Insert(*((PyNs3SchedulerEvent *) ev)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Ns2CalendarScheduler_PeekNext(PyNs3Ns2CalendarScheduler *self)
{
    PyObject *py_retval;
    PyNs3Ns2CalendarScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3Ns2CalendarScheduler__PythonHelper*> (self->obj);
    PyNs3SchedulerEvent *py_Event;
    
    ns3::Scheduler::Event retval = (helper_class == NULL)? (self->obj->PeekNext()) : (self->obj->ns3::Ns2CalendarScheduler::PeekNext());
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(retval);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = Py_BuildValue((char *) "N", py_Event);
    return py_retval;
}


PyObject *
_wrap_PyNs3Ns2CalendarScheduler_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::Ns2CalendarScheduler::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3Ns2CalendarScheduler_Remove(PyNs3Ns2CalendarScheduler *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3SchedulerEvent *ev;
    PyNs3Ns2CalendarScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3Ns2CalendarScheduler__PythonHelper*> (self->obj);
    const char *keywords[] = {"ev", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SchedulerEvent_Type, &ev)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->Remove(*((PyNs3SchedulerEvent *) ev)->obj)) : (self->obj->ns3::Ns2CalendarScheduler::Remove(*((PyNs3SchedulerEvent *) ev)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Ns2CalendarScheduler_IsEmpty(PyNs3Ns2CalendarScheduler *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3Ns2CalendarScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3Ns2CalendarScheduler__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsEmpty()) : (self->obj->ns3::Ns2CalendarScheduler::IsEmpty());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3Ns2CalendarScheduler_RemoveNext(PyNs3Ns2CalendarScheduler *self)
{
    PyObject *py_retval;
    PyNs3Ns2CalendarScheduler__PythonHelper *helper_class = dynamic_cast<PyNs3Ns2CalendarScheduler__PythonHelper*> (self->obj);
    PyNs3SchedulerEvent *py_Event;
    
    ns3::Scheduler::Event retval = (helper_class == NULL)? (self->obj->RemoveNext()) : (self->obj->ns3::Ns2CalendarScheduler::RemoveNext());
    py_Event = PyObject_New(PyNs3SchedulerEvent, &PyNs3SchedulerEvent_Type);
    py_Event->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Event->obj = new ns3::Scheduler::Event(retval);
    PyNs3SchedulerEvent_wrapper_registry[(void *) py_Event->obj] = (PyObject *) py_Event;
    py_retval = Py_BuildValue((char *) "N", py_Event);
    return py_retval;
}


static PyObject*
_wrap_PyNs3Ns2CalendarScheduler__copy__(PyNs3Ns2CalendarScheduler *self)
{

    PyNs3Ns2CalendarScheduler *py_copy;
    py_copy = PyObject_GC_New(PyNs3Ns2CalendarScheduler, &PyNs3Ns2CalendarScheduler_Type);
    py_copy->obj = new ns3::Ns2CalendarScheduler(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Ns2CalendarScheduler_methods[] = {
    {(char *) "Insert", (PyCFunction) _wrap_PyNs3Ns2CalendarScheduler_Insert, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "PeekNext", (PyCFunction) _wrap_PyNs3Ns2CalendarScheduler_PeekNext, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3Ns2CalendarScheduler_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Remove", (PyCFunction) _wrap_PyNs3Ns2CalendarScheduler_Remove, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsEmpty", (PyCFunction) _wrap_PyNs3Ns2CalendarScheduler_IsEmpty, METH_NOARGS, NULL },
    {(char *) "RemoveNext", (PyCFunction) _wrap_PyNs3Ns2CalendarScheduler_RemoveNext, METH_NOARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3Ns2CalendarScheduler__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3Ns2CalendarScheduler__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3Ns2CalendarScheduler__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3Ns2CalendarScheduler__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Ns2CalendarScheduler__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3Ns2CalendarScheduler__tp_clear(PyNs3Ns2CalendarScheduler *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::Ns2CalendarScheduler *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3Ns2CalendarScheduler__tp_traverse(PyNs3Ns2CalendarScheduler *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3Ns2CalendarScheduler__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3Ns2CalendarScheduler__tp_dealloc(PyNs3Ns2CalendarScheduler *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3Ns2CalendarScheduler__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Ns2CalendarScheduler__tp_richcompare (PyNs3Ns2CalendarScheduler *PYBINDGEN_UNUSED(self), PyNs3Ns2CalendarScheduler *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Ns2CalendarScheduler_Type)) {
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

PyTypeObject PyNs3Ns2CalendarScheduler_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.Ns2CalendarScheduler",            /* tp_name */
    sizeof(PyNs3Ns2CalendarScheduler),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Ns2CalendarScheduler__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3Ns2CalendarScheduler__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3Ns2CalendarScheduler__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3Ns2CalendarScheduler__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Ns2CalendarScheduler_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3Ns2CalendarScheduler, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Ns2CalendarScheduler__tp_init,             /* tp_init */
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
_wrap_PyNs3RealtimeSimulatorImpl__tp_init__0(PyNs3RealtimeSimulatorImpl *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3RealtimeSimulatorImpl *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3RealtimeSimulatorImpl_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::RealtimeSimulatorImpl(*((PyNs3RealtimeSimulatorImpl *) arg0)->obj);
    self->obj->Ref ();
    ns3::CompleteConstruct(self->obj);
    return 0;
}

static int
_wrap_PyNs3RealtimeSimulatorImpl__tp_init__1(PyNs3RealtimeSimulatorImpl *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::RealtimeSimulatorImpl();
    self->obj->Ref ();
    ns3::CompleteConstruct(self->obj);
    return 0;
}

int _wrap_PyNs3RealtimeSimulatorImpl__tp_init(PyNs3RealtimeSimulatorImpl *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3RealtimeSimulatorImpl__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3RealtimeSimulatorImpl__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3RealtimeSimulatorImpl_Run(PyNs3RealtimeSimulatorImpl *self)
{
    PyObject *py_retval;
    
    self->obj->Run();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RealtimeSimulatorImpl_Now(PyNs3RealtimeSimulatorImpl *self)
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
_wrap_PyNs3RealtimeSimulatorImpl_GetMaximumSimulationTime(PyNs3RealtimeSimulatorImpl *self)
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
_wrap_PyNs3RealtimeSimulatorImpl_IsFinished(PyNs3RealtimeSimulatorImpl *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsFinished();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RealtimeSimulatorImpl_GetDelayLeft(PyNs3RealtimeSimulatorImpl *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3RealtimeSimulatorImpl_GetSystemId(PyNs3RealtimeSimulatorImpl *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetSystemId();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}



PyObject *
_wrap_PyNs3RealtimeSimulatorImpl_Stop__0(PyNs3RealtimeSimulatorImpl *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
_wrap_PyNs3RealtimeSimulatorImpl_Stop__1(PyNs3RealtimeSimulatorImpl *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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

PyObject * _wrap_PyNs3RealtimeSimulatorImpl_Stop(PyNs3RealtimeSimulatorImpl *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3RealtimeSimulatorImpl_Stop__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3RealtimeSimulatorImpl_Stop__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3RealtimeSimulatorImpl_RealtimeNow(PyNs3RealtimeSimulatorImpl *self)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = self->obj->RealtimeNow();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3RealtimeSimulatorImpl_GetContext(PyNs3RealtimeSimulatorImpl *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetContext();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RealtimeSimulatorImpl_SetHardLimit(PyNs3RealtimeSimulatorImpl *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *limit;
    ns3::Time limit2;
    const char *keywords[] = {"limit", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &limit)) {
        return NULL;
    }
    if (PyObject_IsInstance(limit, (PyObject*) &PyNs3Time_Type)) {
        limit2 = *((PyNs3Time *) limit)->obj;
    } else if (PyObject_IsInstance(limit, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        limit2 = *((PyNs3TracedValue__Ns3Time *) limit)->obj;
    } else if (PyObject_IsInstance(limit, (PyObject*) &PyNs3Scalar_Type)) {
        limit2 = *((PyNs3Scalar *) limit)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", limit->ob_type->tp_name);
        return NULL;
    }
    self->obj->SetHardLimit(limit2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RealtimeSimulatorImpl_SetSynchronizationMode(PyNs3RealtimeSimulatorImpl *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::RealtimeSimulatorImpl::SynchronizationMode mode;
    const char *keywords[] = {"mode", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &mode)) {
        return NULL;
    }
    self->obj->SetSynchronizationMode(mode);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RealtimeSimulatorImpl_SetScheduler(PyNs3RealtimeSimulatorImpl *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3RealtimeSimulatorImpl_RunOneEvent(PyNs3RealtimeSimulatorImpl *self)
{
    PyObject *py_retval;
    
    self->obj->RunOneEvent();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RealtimeSimulatorImpl_Remove(PyNs3RealtimeSimulatorImpl *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3RealtimeSimulatorImpl_Cancel(PyNs3RealtimeSimulatorImpl *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3RealtimeSimulatorImpl_Destroy(PyNs3RealtimeSimulatorImpl *self)
{
    PyObject *py_retval;
    
    self->obj->Destroy();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RealtimeSimulatorImpl_IsExpired(PyNs3RealtimeSimulatorImpl *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3RealtimeSimulatorImpl_Next(PyNs3RealtimeSimulatorImpl *self)
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
_wrap_PyNs3RealtimeSimulatorImpl_GetHardLimit(PyNs3RealtimeSimulatorImpl *self)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = self->obj->GetHardLimit();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3RealtimeSimulatorImpl_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::RealtimeSimulatorImpl::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3RealtimeSimulatorImpl_GetSynchronizationMode(PyNs3RealtimeSimulatorImpl *self)
{
    PyObject *py_retval;
    ns3::RealtimeSimulatorImpl::SynchronizationMode retval;
    
    retval = self->obj->GetSynchronizationMode();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


static PyObject*
_wrap_PyNs3RealtimeSimulatorImpl__copy__(PyNs3RealtimeSimulatorImpl *self)
{

    PyNs3RealtimeSimulatorImpl *py_copy;
    py_copy = PyObject_GC_New(PyNs3RealtimeSimulatorImpl, &PyNs3RealtimeSimulatorImpl_Type);
    py_copy->obj = new ns3::RealtimeSimulatorImpl(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3RealtimeSimulatorImpl_methods[] = {
    {(char *) "Run", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_Run, METH_NOARGS, NULL },
    {(char *) "Now", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_Now, METH_NOARGS, NULL },
    {(char *) "GetMaximumSimulationTime", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_GetMaximumSimulationTime, METH_NOARGS, NULL },
    {(char *) "IsFinished", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_IsFinished, METH_NOARGS, NULL },
    {(char *) "GetDelayLeft", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_GetDelayLeft, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetSystemId", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_GetSystemId, METH_NOARGS, NULL },
    {(char *) "Stop", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_Stop, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "RealtimeNow", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_RealtimeNow, METH_NOARGS, NULL },
    {(char *) "GetContext", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_GetContext, METH_NOARGS, NULL },
    {(char *) "SetHardLimit", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_SetHardLimit, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetSynchronizationMode", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_SetSynchronizationMode, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetScheduler", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_SetScheduler, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "RunOneEvent", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_RunOneEvent, METH_NOARGS, NULL },
    {(char *) "Remove", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_Remove, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Cancel", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_Cancel, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Destroy", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_Destroy, METH_NOARGS, NULL },
    {(char *) "IsExpired", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_IsExpired, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Next", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_Next, METH_NOARGS, NULL },
    {(char *) "GetHardLimit", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_GetHardLimit, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "GetSynchronizationMode", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl_GetSynchronizationMode, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3RealtimeSimulatorImpl__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3RealtimeSimulatorImpl__tp_clear(PyNs3RealtimeSimulatorImpl *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::RealtimeSimulatorImpl *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3RealtimeSimulatorImpl__tp_traverse(PyNs3RealtimeSimulatorImpl *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    return 0;
}


static void
_wrap_PyNs3RealtimeSimulatorImpl__tp_dealloc(PyNs3RealtimeSimulatorImpl *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3RealtimeSimulatorImpl__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3RealtimeSimulatorImpl__tp_richcompare (PyNs3RealtimeSimulatorImpl *PYBINDGEN_UNUSED(self), PyNs3RealtimeSimulatorImpl *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3RealtimeSimulatorImpl_Type)) {
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

PyTypeObject PyNs3RealtimeSimulatorImpl_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.RealtimeSimulatorImpl",            /* tp_name */
    sizeof(PyNs3RealtimeSimulatorImpl),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3RealtimeSimulatorImpl__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3RealtimeSimulatorImpl__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3RealtimeSimulatorImpl__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3RealtimeSimulatorImpl__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3RealtimeSimulatorImpl_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3RealtimeSimulatorImpl, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3RealtimeSimulatorImpl__tp_init,             /* tp_init */
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
_wrap_PyNs3TimeChecker__tp_init(void)
{
    PyErr_SetString(PyExc_TypeError, "class 'TimeChecker' cannot be constructed (have pure virtual methods but no helper class)");
    return -1;
}

static PyMethodDef PyNs3TimeChecker_methods[] = {
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3TimeChecker__tp_dealloc(PyNs3TimeChecker *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::TimeChecker *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3TimeChecker__tp_richcompare (PyNs3TimeChecker *PYBINDGEN_UNUSED(self), PyNs3TimeChecker *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3TimeChecker_Type)) {
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

PyTypeObject PyNs3TimeChecker_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.TimeChecker",            /* tp_name */
    sizeof(PyNs3TimeChecker),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3TimeChecker__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3TimeChecker__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3TimeChecker_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3TimeChecker__tp_init,             /* tp_init */
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
_wrap_PyNs3TimeValue__tp_init__0(PyNs3TimeValue *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    self->obj = new ns3::TimeValue();
    return 0;
}

static int
_wrap_PyNs3TimeValue__tp_init__1(PyNs3TimeValue *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3TimeValue *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3TimeValue_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::TimeValue(*((PyNs3TimeValue *) arg0)->obj);
    return 0;
}

static int
_wrap_PyNs3TimeValue__tp_init__2(PyNs3TimeValue *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *value;
    ns3::Time value2;
    const char *keywords[] = {"value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &value)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (PyObject_IsInstance(value, (PyObject*) &PyNs3Time_Type)) {
        value2 = *((PyNs3Time *) value)->obj;
    } else if (PyObject_IsInstance(value, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        value2 = *((PyNs3TracedValue__Ns3Time *) value)->obj;
    } else if (PyObject_IsInstance(value, (PyObject*) &PyNs3Scalar_Type)) {
        value2 = *((PyNs3Scalar *) value)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", value->ob_type->tp_name);
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::TimeValue(value2);
    return 0;
}

int _wrap_PyNs3TimeValue__tp_init(PyNs3TimeValue *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[3] = {0,};
    retval = _wrap_PyNs3TimeValue__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3TimeValue__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3TimeValue__tp_init__2(self, args, kwargs, &exceptions[2]);
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
_wrap_PyNs3TimeValue_Set(PyNs3TimeValue *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *value;
    ns3::Time value2;
    const char *keywords[] = {"value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &value)) {
        return NULL;
    }
    if (PyObject_IsInstance(value, (PyObject*) &PyNs3Time_Type)) {
        value2 = *((PyNs3Time *) value)->obj;
    } else if (PyObject_IsInstance(value, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        value2 = *((PyNs3TracedValue__Ns3Time *) value)->obj;
    } else if (PyObject_IsInstance(value, (PyObject*) &PyNs3Scalar_Type)) {
        value2 = *((PyNs3Scalar *) value)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", value->ob_type->tp_name);
        return NULL;
    }
    self->obj->Set(value2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3TimeValue_Get(PyNs3TimeValue *self)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = self->obj->Get();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3TimeValue_Copy(PyNs3TimeValue *self)
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
_wrap_PyNs3TimeValue_SerializeToString(PyNs3TimeValue *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3TimeValue_DeserializeFromString(PyNs3TimeValue *self, PyObject *args, PyObject *kwargs)
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
_wrap_PyNs3TimeValue__copy__(PyNs3TimeValue *self)
{

    PyNs3TimeValue *py_copy;
    py_copy = PyObject_New(PyNs3TimeValue, &PyNs3TimeValue_Type);
    py_copy->obj = new ns3::TimeValue(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3TimeValue_methods[] = {
    {(char *) "Set", (PyCFunction) _wrap_PyNs3TimeValue_Set, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Get", (PyCFunction) _wrap_PyNs3TimeValue_Get, METH_NOARGS, NULL },
    {(char *) "Copy", (PyCFunction) _wrap_PyNs3TimeValue_Copy, METH_NOARGS, NULL },
    {(char *) "SerializeToString", (PyCFunction) _wrap_PyNs3TimeValue_SerializeToString, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DeserializeFromString", (PyCFunction) _wrap_PyNs3TimeValue_DeserializeFromString, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3TimeValue__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3TimeValue__tp_dealloc(PyNs3TimeValue *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::TimeValue *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3TimeValue__tp_richcompare (PyNs3TimeValue *PYBINDGEN_UNUSED(self), PyNs3TimeValue *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3TimeValue_Type)) {
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

PyTypeObject PyNs3TimeValue_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.TimeValue",            /* tp_name */
    sizeof(PyNs3TimeValue),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3TimeValue__tp_dealloc,        /* tp_dealloc */
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
    (richcmpfunc)_wrap_PyNs3TimeValue__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3TimeValue_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3TimeValue__tp_init,             /* tp_init */
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












