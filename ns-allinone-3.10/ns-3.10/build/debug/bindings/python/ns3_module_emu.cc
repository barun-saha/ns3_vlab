#include "ns3module.h"


PyObject *
PyNs3EmuNetDevice__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    PyNs3EmuNetDevice__PythonHelper *helper = dynamic_cast< PyNs3EmuNetDevice__PythonHelper* >(self->obj);
    
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
PyNs3EmuNetDevice__PythonHelper::_wrap_NotifyNewAggregate(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    PyNs3EmuNetDevice__PythonHelper *helper = dynamic_cast< PyNs3EmuNetDevice__PythonHelper* >(self->obj);
    
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
PyNs3EmuNetDevice__PythonHelper::_wrap_DoStart(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    PyNs3EmuNetDevice__PythonHelper *helper = dynamic_cast< PyNs3EmuNetDevice__PythonHelper* >(self->obj);
    
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
PyNs3EmuNetDevice__PythonHelper::GetAddress() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Address *tmp_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetAddress"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetAddress();
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = const_cast< ns3::EmuNetDevice* >((const ns3::EmuNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetAddress", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetAddress();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Address_Type, &tmp_Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetAddress();
    }
    ns3::Address retval = *tmp_Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Address
PyNs3EmuNetDevice__PythonHelper::GetBroadcast() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Address *tmp_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetBroadcast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetBroadcast();
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = const_cast< ns3::EmuNetDevice* >((const ns3::EmuNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetBroadcast", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetBroadcast();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Address_Type, &tmp_Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetBroadcast();
    }
    ns3::Address retval = *tmp_Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::Channel >
PyNs3EmuNetDevice__PythonHelper::GetChannel() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::Channel > retval;
    PyNs3Channel *tmp_Channel;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetChannel"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetChannel();
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = const_cast< ns3::EmuNetDevice* >((const ns3::EmuNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetChannel", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetChannel();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Channel_Type, &tmp_Channel)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetChannel();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::Channel  > (tmp_Channel->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

uint32_t
PyNs3EmuNetDevice__PythonHelper::GetIfIndex() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    uint32_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetIfIndex"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetIfIndex();
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = const_cast< ns3::EmuNetDevice* >((const ns3::EmuNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetIfIndex", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetIfIndex();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetIfIndex();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

uint16_t
PyNs3EmuNetDevice__PythonHelper::GetMtu() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    uint16_t retval;
    int tmp;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetMtu"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetMtu();
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = const_cast< ns3::EmuNetDevice* >((const ns3::EmuNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetMtu", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetMtu();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "i", &tmp)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetMtu();
    }
    if (tmp > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetMtu();
    }
    retval = tmp;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Address
PyNs3EmuNetDevice__PythonHelper::GetMulticast(ns3::Ipv4Address multicastGroup) const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Ipv4Address *py_Ipv4Address;
    PyNs3Address *tmp_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetMulticast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetMulticast(multicastGroup);
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = const_cast< ns3::EmuNetDevice* >((const ns3::EmuNetDevice*) this);
    py_Ipv4Address = PyObject_New(PyNs3Ipv4Address, &PyNs3Ipv4Address_Type);
    py_Ipv4Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ipv4Address->obj = new ns3::Ipv4Address(multicastGroup);
    PyNs3Ipv4Address_wrapper_registry[(void *) py_Ipv4Address->obj] = (PyObject *) py_Ipv4Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetMulticast", (char *) "N", py_Ipv4Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetMulticast(multicastGroup);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Address_Type, &tmp_Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetMulticast(multicastGroup);
    }
    ns3::Address retval = *tmp_Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Address
PyNs3EmuNetDevice__PythonHelper::GetMulticast(ns3::Ipv6Address addr) const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Ipv6Address *py_Ipv6Address;
    PyNs3Address *tmp_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetMulticast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetMulticast(addr);
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = const_cast< ns3::EmuNetDevice* >((const ns3::EmuNetDevice*) this);
    py_Ipv6Address = PyObject_New(PyNs3Ipv6Address, &PyNs3Ipv6Address_Type);
    py_Ipv6Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ipv6Address->obj = new ns3::Ipv6Address(addr);
    PyNs3Ipv6Address_wrapper_registry[(void *) py_Ipv6Address->obj] = (PyObject *) py_Ipv6Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetMulticast", (char *) "N", py_Ipv6Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetMulticast(addr);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Address_Type, &tmp_Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetMulticast(addr);
    }
    ns3::Address retval = *tmp_Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::Node >
PyNs3EmuNetDevice__PythonHelper::GetNode() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::Node > retval;
    PyNs3Node *tmp_Node;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetNode"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetNode();
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = const_cast< ns3::EmuNetDevice* >((const ns3::EmuNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetNode", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetNode();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Node_Type, &tmp_Node)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::GetNode();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::Node  > (tmp_Node->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3EmuNetDevice__PythonHelper::IsBridge() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsBridge"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::IsBridge();
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = const_cast< ns3::EmuNetDevice* >((const ns3::EmuNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsBridge", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::IsBridge();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::IsBridge();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3EmuNetDevice__PythonHelper::IsBroadcast() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsBroadcast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::IsBroadcast();
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = const_cast< ns3::EmuNetDevice* >((const ns3::EmuNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsBroadcast", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::IsBroadcast();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::IsBroadcast();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3EmuNetDevice__PythonHelper::IsLinkUp() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsLinkUp"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::IsLinkUp();
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = const_cast< ns3::EmuNetDevice* >((const ns3::EmuNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsLinkUp", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::IsLinkUp();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::IsLinkUp();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3EmuNetDevice__PythonHelper::IsMulticast() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsMulticast"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::IsMulticast();
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = const_cast< ns3::EmuNetDevice* >((const ns3::EmuNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsMulticast", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::IsMulticast();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::IsMulticast();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3EmuNetDevice__PythonHelper::IsPointToPoint() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "IsPointToPoint"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::IsPointToPoint();
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = const_cast< ns3::EmuNetDevice* >((const ns3::EmuNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "IsPointToPoint", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::IsPointToPoint();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::IsPointToPoint();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3EmuNetDevice__PythonHelper::NeedsArp() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NeedsArp"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::NeedsArp();
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = const_cast< ns3::EmuNetDevice* >((const ns3::EmuNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NeedsArp", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::NeedsArp();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::NeedsArp();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3EmuNetDevice__PythonHelper::Send(ns3::Ptr< ns3::Packet > packet, ns3::Address const & dest, uint16_t protocolNumber)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
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
        return ns3::EmuNetDevice::Send(packet, dest, protocolNumber);
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = (ns3::EmuNetDevice*) this;
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
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::Send(packet, dest, protocolNumber);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::Send(packet, dest, protocolNumber);
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3EmuNetDevice__PythonHelper::SendFrom(ns3::Ptr< ns3::Packet > packet, ns3::Address const & source, ns3::Address const & dest, uint16_t protocolNumber)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
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
        return ns3::EmuNetDevice::SendFrom(packet, source, dest, protocolNumber);
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = (ns3::EmuNetDevice*) this;
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
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::SendFrom(packet, source, dest, protocolNumber);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::SendFrom(packet, source, dest, protocolNumber);
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3EmuNetDevice__PythonHelper::SetAddress(ns3::Address address)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Address *py_Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetAddress"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::EmuNetDevice::SetAddress(address);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = (ns3::EmuNetDevice*) this;
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(address);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetAddress", (char *) "N", py_Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3EmuNetDevice__PythonHelper::SetIfIndex(uint32_t const index)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetIfIndex"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::EmuNetDevice::SetIfIndex(index);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = (ns3::EmuNetDevice*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetIfIndex", (char *) "N", PyLong_FromUnsignedLong(index));
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

bool
PyNs3EmuNetDevice__PythonHelper::SetMtu(uint16_t const mtu)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetMtu"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::SetMtu(mtu);
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = (ns3::EmuNetDevice*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetMtu", (char *) "i", (int) mtu);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::SetMtu(mtu);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::SetMtu(mtu);
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3EmuNetDevice__PythonHelper::SetNode(ns3::Ptr< ns3::Node > node)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    PyNs3Node *py_Node;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetNode"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::EmuNetDevice::SetNode(node);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = (ns3::EmuNetDevice*) this;
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
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}



bool
PyNs3EmuNetDevice__PythonHelper::SupportsSendFrom() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SupportsSendFrom"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::SupportsSendFrom();
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = const_cast< ns3::EmuNetDevice* >((const ns3::EmuNetDevice*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SupportsSendFrom", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::SupportsSendFrom();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::EmuNetDevice::SupportsSendFrom();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3EmuNetDevice__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::EmuNetDevice *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj;
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = (ns3::EmuNetDevice*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3EmuNetDevice* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3EmuNetDevice__PythonHelper::GetInstanceTypeId() const
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
PyNs3EmuNetDevice__PythonHelper::DoStart()
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
PyNs3EmuNetDevice__PythonHelper::NotifyNewAggregate()
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
PyNs3EmuNetDevice__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3EmuNetDevice__tp_init__0(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3EmuNetDevice *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3EmuNetDevice_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3EmuNetDevice_Type)
    {
        self->obj = new PyNs3EmuNetDevice__PythonHelper(*((PyNs3EmuNetDevice *) arg0)->obj);
        self->obj->Ref ();
        ((PyNs3EmuNetDevice__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::EmuNetDevice(*((PyNs3EmuNetDevice *) arg0)->obj);
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3EmuNetDevice__tp_init__1(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3EmuNetDevice_Type)
    {
        self->obj = new PyNs3EmuNetDevice__PythonHelper();
        self->obj->Ref ();
        ((PyNs3EmuNetDevice__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::EmuNetDevice();
        self->obj->Ref ();
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3EmuNetDevice__tp_init(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3EmuNetDevice__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3EmuNetDevice__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3EmuNetDevice_SetEncapsulationMode(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::EmuNetDevice::EncapsulationMode mode;
    const char *keywords[] = {"mode", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &mode)) {
        return NULL;
    }
    self->obj->SetEncapsulationMode(mode);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}



PyObject *
_wrap_PyNs3EmuNetDevice_GetMulticast__0(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Ipv4Address *multicastGroup;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
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
    ns3::Address retval = (helper_class == NULL)? (self->obj->GetMulticast(*((PyNs3Ipv4Address *) multicastGroup)->obj)) : (self->obj->ns3::EmuNetDevice::GetMulticast(*((PyNs3Ipv4Address *) multicastGroup)->obj));
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}

PyObject *
_wrap_PyNs3EmuNetDevice_GetMulticast__1(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Ipv6Address *addr;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
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
    ns3::Address retval = (helper_class == NULL)? (self->obj->GetMulticast(*((PyNs3Ipv6Address *) addr)->obj)) : (self->obj->ns3::EmuNetDevice::GetMulticast(*((PyNs3Ipv6Address *) addr)->obj));
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}

PyObject * _wrap_PyNs3EmuNetDevice_GetMulticast(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3EmuNetDevice_GetMulticast__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3EmuNetDevice_GetMulticast__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3EmuNetDevice_IsPointToPoint(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsPointToPoint()) : (self->obj->ns3::EmuNetDevice::IsPointToPoint());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::EmuNetDevice::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_Send(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    PyObject *dest;
    ns3::Address dest2;
    int protocolNumber;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
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
    retval = (helper_class == NULL)? (self->obj->Send(ns3::Ptr< ns3::Packet  > (packet_ptr), dest2, protocolNumber)) : (self->obj->ns3::EmuNetDevice::Send(ns3::Ptr< ns3::Packet  > (packet_ptr), dest2, protocolNumber));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_GetIfIndex(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    uint32_t retval;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->GetIfIndex()) : (self->obj->ns3::EmuNetDevice::GetIfIndex());
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_NeedsArp(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->NeedsArp()) : (self->obj->ns3::EmuNetDevice::NeedsArp());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_SetPromiscReceiveCallback(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *cb;
    ns3::Ptr<PythonCallbackImpl28> cb_cb_impl;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &cb)) {
        return NULL;
    }
    if (!PyCallable_Check(cb)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'cb' must be callbale");
        return NULL;
    }
    cb_cb_impl = ns3::Create<PythonCallbackImpl28> (cb);
    (helper_class == NULL)? (self->obj->SetPromiscReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::Address const&, ns3::NetDevice::PacketType, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl))) : (self->obj->ns3::EmuNetDevice::SetPromiscReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::Address const&, ns3::NetDevice::PacketType, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_GetEncapsulationMode(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    ns3::EmuNetDevice::EncapsulationMode retval;
    
    retval = self->obj->GetEncapsulationMode();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_GetNode(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Node > retval;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    PyNs3Node *py_Node;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetNode()) : (self->obj->ns3::EmuNetDevice::GetNode());
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
_wrap_PyNs3EmuNetDevice_SendFrom(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs)
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
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
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
    retval = (helper_class == NULL)? (self->obj->SendFrom(ns3::Ptr< ns3::Packet  > (packet_ptr), source2, dest2, protocolNumber)) : (self->obj->ns3::EmuNetDevice::SendFrom(ns3::Ptr< ns3::Packet  > (packet_ptr), source2, dest2, protocolNumber));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_IsBroadcast(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsBroadcast()) : (self->obj->ns3::EmuNetDevice::IsBroadcast());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_Stop(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *tStop;
    ns3::Time tStop2;
    const char *keywords[] = {"tStop", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &tStop)) {
        return NULL;
    }
    if (PyObject_IsInstance(tStop, (PyObject*) &PyNs3Time_Type)) {
        tStop2 = *((PyNs3Time *) tStop)->obj;
    } else if (PyObject_IsInstance(tStop, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        tStop2 = *((PyNs3TracedValue__Ns3Time *) tStop)->obj;
    } else if (PyObject_IsInstance(tStop, (PyObject*) &PyNs3Scalar_Type)) {
        tStop2 = *((PyNs3Scalar *) tStop)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", tStop->ob_type->tp_name);
        return NULL;
    }
    self->obj->Stop(tStop2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_GetMtu(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    uint16_t retval;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->GetMtu()) : (self->obj->ns3::EmuNetDevice::GetMtu());
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_IsBridge(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsBridge()) : (self->obj->ns3::EmuNetDevice::IsBridge());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_GetQueue(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Queue > retval;
    PyNs3Queue *py_Queue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = self->obj->GetQueue();
    if (!(const_cast<ns3::Queue *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::Queue *> (ns3::PeekPointer (retval)))) == typeid(PyNs3Queue__PythonHelper))
    {
        py_Queue = reinterpret_cast< PyNs3Queue* >(reinterpret_cast< PyNs3Queue__PythonHelper* >(const_cast<ns3::Queue *> (ns3::PeekPointer (retval)))->m_pyself);
        py_Queue->obj = const_cast<ns3::Queue *> (ns3::PeekPointer (retval));
        Py_INCREF(py_Queue);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Queue *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Queue = NULL;
        } else {
            py_Queue = (PyNs3Queue *) wrapper_lookup_iter->second;
            Py_INCREF(py_Queue);
        }
    
        if (py_Queue == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Queue *> (ns3::PeekPointer (retval)))), &PyNs3Queue_Type);
            py_Queue = PyObject_GC_New(PyNs3Queue, wrapper_type);
            py_Queue->inst_dict = NULL;
            py_Queue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Queue *> (ns3::PeekPointer (retval))->Ref();
            py_Queue->obj = const_cast<ns3::Queue *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Queue->obj] = (PyObject *) py_Queue;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_Queue);
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_SetNode(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Node *node;
    ns3::Node *node_ptr;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"node", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Node_Type, &node)) {
        return NULL;
    }
    node_ptr = (node ? node->obj : NULL);
    (helper_class == NULL)? (self->obj->SetNode(ns3::Ptr< ns3::Node  > (node_ptr))) : (self->obj->ns3::EmuNetDevice::SetNode(ns3::Ptr< ns3::Node  > (node_ptr)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_SetDataRate(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataRate *bps;
    const char *keywords[] = {"bps", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataRate_Type, &bps)) {
        return NULL;
    }
    self->obj->SetDataRate(*((PyNs3DataRate *) bps)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_GetAddress(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    PyNs3Address *py_Address;
    
    ns3::Address retval = (helper_class == NULL)? (self->obj->GetAddress()) : (self->obj->ns3::EmuNetDevice::GetAddress());
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_IsLinkUp(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsLinkUp()) : (self->obj->ns3::EmuNetDevice::IsLinkUp());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_SetIfIndex(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int index;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"index", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &index)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->SetIfIndex(index)) : (self->obj->ns3::EmuNetDevice::SetIfIndex(index));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_SetAddress(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *address;
    ns3::Address address2;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
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
    (helper_class == NULL)? (self->obj->SetAddress(address2)) : (self->obj->ns3::EmuNetDevice::SetAddress(address2));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_Start(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *tStart;
    ns3::Time tStart2;
    const char *keywords[] = {"tStart", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &tStart)) {
        return NULL;
    }
    if (PyObject_IsInstance(tStart, (PyObject*) &PyNs3Time_Type)) {
        tStart2 = *((PyNs3Time *) tStart)->obj;
    } else if (PyObject_IsInstance(tStart, (PyObject*) &PyNs3TracedValue__Ns3Time_Type)) {
        tStart2 = *((PyNs3TracedValue__Ns3Time *) tStart)->obj;
    } else if (PyObject_IsInstance(tStart, (PyObject*) &PyNs3Scalar_Type)) {
        tStart2 = *((PyNs3Scalar *) tStart)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Time, TracedValue, Scalar), not %s", tStart->ob_type->tp_name);
        return NULL;
    }
    self->obj->Start(tStart2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_GetBroadcast(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    PyNs3Address *py_Address;
    
    ns3::Address retval = (helper_class == NULL)? (self->obj->GetBroadcast()) : (self->obj->ns3::EmuNetDevice::GetBroadcast());
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_AddLinkChangeCallback(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *callback;
    ns3::Ptr<PythonCallbackImpl0> callback_cb_impl;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"callback", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &callback)) {
        return NULL;
    }
    if (!PyCallable_Check(callback)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'callback' must be callbale");
        return NULL;
    }
    callback_cb_impl = ns3::Create<PythonCallbackImpl0> (callback);
    (helper_class == NULL)? (self->obj->AddLinkChangeCallback(ns3::Callback<void, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (callback_cb_impl))) : (self->obj->ns3::EmuNetDevice::AddLinkChangeCallback(ns3::Callback<void, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (callback_cb_impl)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_SetReceiveCallback(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *cb;
    ns3::Ptr<PythonCallbackImpl29> cb_cb_impl;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &cb)) {
        return NULL;
    }
    if (!PyCallable_Check(cb)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'cb' must be callbale");
        return NULL;
    }
    cb_cb_impl = ns3::Create<PythonCallbackImpl29> (cb);
    (helper_class == NULL)? (self->obj->SetReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl))) : (self->obj->ns3::EmuNetDevice::SetReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_IsMulticast(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->IsMulticast()) : (self->obj->ns3::EmuNetDevice::IsMulticast());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_SetMtu(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    int mtu;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    const char *keywords[] = {"mtu", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &mtu)) {
        return NULL;
    }
    if (mtu > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    retval = (helper_class == NULL)? (self->obj->SetMtu(mtu)) : (self->obj->ns3::EmuNetDevice::SetMtu(mtu));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_SupportsSendFrom(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    
    retval = (helper_class == NULL)? (self->obj->SupportsSendFrom()) : (self->obj->ns3::EmuNetDevice::SupportsSendFrom());
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3EmuNetDevice_GetChannel(PyNs3EmuNetDevice *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Channel > retval;
    PyNs3EmuNetDevice__PythonHelper *helper_class = dynamic_cast<PyNs3EmuNetDevice__PythonHelper*> (self->obj);
    PyNs3Channel *py_Channel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = (helper_class == NULL)? (self->obj->GetChannel()) : (self->obj->ns3::EmuNetDevice::GetChannel());
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
_wrap_PyNs3EmuNetDevice_SetQueue(PyNs3EmuNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Queue *queue;
    ns3::Queue *queue_ptr;
    const char *keywords[] = {"queue", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Queue_Type, &queue)) {
        return NULL;
    }
    queue_ptr = (queue ? queue->obj : NULL);
    self->obj->SetQueue(ns3::Ptr< ns3::Queue  > (queue_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3EmuNetDevice__copy__(PyNs3EmuNetDevice *self)
{

    PyNs3EmuNetDevice *py_copy;
    py_copy = PyObject_GC_New(PyNs3EmuNetDevice, &PyNs3EmuNetDevice_Type);
    py_copy->obj = new ns3::EmuNetDevice(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3EmuNetDevice_methods[] = {
    {(char *) "SetEncapsulationMode", (PyCFunction) _wrap_PyNs3EmuNetDevice_SetEncapsulationMode, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetMulticast", (PyCFunction) _wrap_PyNs3EmuNetDevice_GetMulticast, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsPointToPoint", (PyCFunction) _wrap_PyNs3EmuNetDevice_IsPointToPoint, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3EmuNetDevice_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Send", (PyCFunction) _wrap_PyNs3EmuNetDevice_Send, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetIfIndex", (PyCFunction) _wrap_PyNs3EmuNetDevice_GetIfIndex, METH_NOARGS, NULL },
    {(char *) "NeedsArp", (PyCFunction) _wrap_PyNs3EmuNetDevice_NeedsArp, METH_NOARGS, NULL },
    {(char *) "SetPromiscReceiveCallback", (PyCFunction) _wrap_PyNs3EmuNetDevice_SetPromiscReceiveCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetEncapsulationMode", (PyCFunction) _wrap_PyNs3EmuNetDevice_GetEncapsulationMode, METH_NOARGS, NULL },
    {(char *) "GetNode", (PyCFunction) _wrap_PyNs3EmuNetDevice_GetNode, METH_NOARGS, NULL },
    {(char *) "SendFrom", (PyCFunction) _wrap_PyNs3EmuNetDevice_SendFrom, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsBroadcast", (PyCFunction) _wrap_PyNs3EmuNetDevice_IsBroadcast, METH_NOARGS, NULL },
    {(char *) "Stop", (PyCFunction) _wrap_PyNs3EmuNetDevice_Stop, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetMtu", (PyCFunction) _wrap_PyNs3EmuNetDevice_GetMtu, METH_NOARGS, NULL },
    {(char *) "IsBridge", (PyCFunction) _wrap_PyNs3EmuNetDevice_IsBridge, METH_NOARGS, NULL },
    {(char *) "GetQueue", (PyCFunction) _wrap_PyNs3EmuNetDevice_GetQueue, METH_NOARGS, NULL },
    {(char *) "SetNode", (PyCFunction) _wrap_PyNs3EmuNetDevice_SetNode, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetDataRate", (PyCFunction) _wrap_PyNs3EmuNetDevice_SetDataRate, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetAddress", (PyCFunction) _wrap_PyNs3EmuNetDevice_GetAddress, METH_NOARGS, NULL },
    {(char *) "IsLinkUp", (PyCFunction) _wrap_PyNs3EmuNetDevice_IsLinkUp, METH_NOARGS, NULL },
    {(char *) "SetIfIndex", (PyCFunction) _wrap_PyNs3EmuNetDevice_SetIfIndex, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetAddress", (PyCFunction) _wrap_PyNs3EmuNetDevice_SetAddress, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Start", (PyCFunction) _wrap_PyNs3EmuNetDevice_Start, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetBroadcast", (PyCFunction) _wrap_PyNs3EmuNetDevice_GetBroadcast, METH_NOARGS, NULL },
    {(char *) "AddLinkChangeCallback", (PyCFunction) _wrap_PyNs3EmuNetDevice_AddLinkChangeCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetReceiveCallback", (PyCFunction) _wrap_PyNs3EmuNetDevice_SetReceiveCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsMulticast", (PyCFunction) _wrap_PyNs3EmuNetDevice_IsMulticast, METH_NOARGS, NULL },
    {(char *) "SetMtu", (PyCFunction) _wrap_PyNs3EmuNetDevice_SetMtu, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SupportsSendFrom", (PyCFunction) _wrap_PyNs3EmuNetDevice_SupportsSendFrom, METH_NOARGS, NULL },
    {(char *) "GetChannel", (PyCFunction) _wrap_PyNs3EmuNetDevice_GetChannel, METH_NOARGS, NULL },
    {(char *) "SetQueue", (PyCFunction) _wrap_PyNs3EmuNetDevice_SetQueue, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3EmuNetDevice__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3EmuNetDevice__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "DoStart", (PyCFunction) PyNs3EmuNetDevice__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3EmuNetDevice__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3EmuNetDevice__tp_clear(PyNs3EmuNetDevice *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::EmuNetDevice *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3EmuNetDevice__tp_traverse(PyNs3EmuNetDevice *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj) == typeid(PyNs3EmuNetDevice__PythonHelper)  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3EmuNetDevice__tp_dealloc(PyNs3EmuNetDevice *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3EmuNetDevice__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3EmuNetDevice__tp_richcompare (PyNs3EmuNetDevice *PYBINDGEN_UNUSED(self), PyNs3EmuNetDevice *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3EmuNetDevice_Type)) {
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

PyTypeObject PyNs3EmuNetDevice_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "ns3.EmuNetDevice",            /* tp_name */
    sizeof(PyNs3EmuNetDevice),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3EmuNetDevice__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3EmuNetDevice__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3EmuNetDevice__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3EmuNetDevice__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3EmuNetDevice_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3EmuNetDevice, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3EmuNetDevice__tp_init,             /* tp_init */
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




