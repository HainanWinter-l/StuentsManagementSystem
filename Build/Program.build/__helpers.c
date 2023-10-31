// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.h"

extern PyObject *callPythonFunction(PyObject *func, PyObject *const *args, int count);


PyObject *CALL_FUNCTION_WITH_ARGS11(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 11); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 11 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 11; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 11 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 11 * sizeof(PyObject *));
            memcpy(python_pars + 11, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 11);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 11);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 11 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[11 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 11; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 11 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 11 * sizeof(PyObject *));
                memcpy(python_pars+1 + 11, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 11);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (11 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (11 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 11);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 11);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 11, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 11);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 11);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 11);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            11
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 11, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 11);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 11);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS11(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 11);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 11);
        } else {
            result = CALL_FUNCTION_WITH_ARGS11(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 11, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 11);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS12(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 12); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 12 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 12; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 12 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 12 * sizeof(PyObject *));
            memcpy(python_pars + 12, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 12);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 12);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 12 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[12 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 12; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 12 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 12 * sizeof(PyObject *));
                memcpy(python_pars+1 + 12, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 12);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (12 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (12 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 12);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 12);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 12, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 12);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 12);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 12);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            12
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 12, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 12);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 12);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS12(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 12);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 12);
        } else {
            result = CALL_FUNCTION_WITH_ARGS12(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 12, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 12);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS13(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 13); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 13 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 13; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 13 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 13 * sizeof(PyObject *));
            memcpy(python_pars + 13, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 13);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 13);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 13 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[13 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 13; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 13 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 13 * sizeof(PyObject *));
                memcpy(python_pars+1 + 13, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 13);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (13 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (13 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 13);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 13);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 13, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 13);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 13);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 13);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            13
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 13, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 13);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 13);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS13(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 13);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 13);
        } else {
            result = CALL_FUNCTION_WITH_ARGS13(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 13, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 13);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS14(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 14); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 14 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 14; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 14 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 14 * sizeof(PyObject *));
            memcpy(python_pars + 14, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 14);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 14);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 14 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[14 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 14; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 14 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 14 * sizeof(PyObject *));
                memcpy(python_pars+1 + 14, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 14);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (14 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (14 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 14);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 14);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 14, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 14);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 14);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 14);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            14
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 14, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 14);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 14);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS14(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 14);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 14);
        } else {
            result = CALL_FUNCTION_WITH_ARGS14(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 14, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 14);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS15(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 15); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 15 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 15; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 15 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 15 * sizeof(PyObject *));
            memcpy(python_pars + 15, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 15);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 15);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 15 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[15 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 15; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 15 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 15 * sizeof(PyObject *));
                memcpy(python_pars+1 + 15, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 15);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (15 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (15 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 15);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 15);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 15, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 15);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 15);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 15);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            15
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 15, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 15);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 15);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS15(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 15);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 15);
        } else {
            result = CALL_FUNCTION_WITH_ARGS15(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 15, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 15);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS16(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 16); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 16 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 16; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 16 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 16 * sizeof(PyObject *));
            memcpy(python_pars + 16, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 16);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 16);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 16 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[16 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 16; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 16 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 16 * sizeof(PyObject *));
                memcpy(python_pars+1 + 16, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 16);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (16 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (16 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 16);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 16);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 16, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 16);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 16);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 16);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            16
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 16, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 16);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 16);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS16(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 16);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 16);
        } else {
            result = CALL_FUNCTION_WITH_ARGS16(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 16, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 16);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS17(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 17); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 17 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 17; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 17 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 17 * sizeof(PyObject *));
            memcpy(python_pars + 17, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 17);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 17);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 17 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[17 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 17; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 17 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 17 * sizeof(PyObject *));
                memcpy(python_pars+1 + 17, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 17);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (17 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (17 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 17);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 17);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 17, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 17);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 17);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 17);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            17
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 17, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 17);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 17);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS17(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 17);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 17);
        } else {
            result = CALL_FUNCTION_WITH_ARGS17(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 17, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 17);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS18(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 18); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 18 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 18; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 18 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 18 * sizeof(PyObject *));
            memcpy(python_pars + 18, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 18);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 18);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 18 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[18 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 18; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 18 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 18 * sizeof(PyObject *));
                memcpy(python_pars+1 + 18, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 18);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (18 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (18 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 18);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 18);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 18, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 18);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 18);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 18);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            18
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 18, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 18);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 18);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS18(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 18);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 18);
        } else {
            result = CALL_FUNCTION_WITH_ARGS18(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 18, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 18);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS20(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 20); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 20 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 20; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 20 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 20 * sizeof(PyObject *));
            memcpy(python_pars + 20, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 20);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 20);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 20 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[20 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 20; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 20 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 20 * sizeof(PyObject *));
                memcpy(python_pars+1 + 20, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 20);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (20 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (20 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 20);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 20);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 20, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 20);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 20);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 20);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            20
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 20, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 20);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 20);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS20(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 20);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 20);
        } else {
            result = CALL_FUNCTION_WITH_ARGS20(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 20, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 20);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS21(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 21); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 21 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 21; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 21 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 21 * sizeof(PyObject *));
            memcpy(python_pars + 21, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 21);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 21);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 21 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[21 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 21; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 21 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 21 * sizeof(PyObject *));
                memcpy(python_pars+1 + 21, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 21);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (21 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (21 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 21);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 21);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 21, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 21);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 21);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 21);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            21
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 21, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 21);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 21);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS21(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 21);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 21);
        } else {
            result = CALL_FUNCTION_WITH_ARGS21(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 21, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 21);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS24(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 24); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 24 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 24; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 24 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 24 * sizeof(PyObject *));
            memcpy(python_pars + 24, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 24);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 24);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 24 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[24 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 24; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 24 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 24 * sizeof(PyObject *));
                memcpy(python_pars+1 + 24, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 24);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (24 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (24 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 24);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 24);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 24, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 24);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 24);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 24);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            24
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 24, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 24);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 24);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS24(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 24);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 24);
        } else {
            result = CALL_FUNCTION_WITH_ARGS24(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 24, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 24);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS27(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 27); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 27 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 27; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 27 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 27 * sizeof(PyObject *));
            memcpy(python_pars + 27, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 27);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 27);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 27 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[27 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 27; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 27 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 27 * sizeof(PyObject *));
                memcpy(python_pars+1 + 27, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 27);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (27 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (27 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 27);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 27);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 27, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 27);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 27);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 27);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            27
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 27, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 27);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 27);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS27(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 27);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 27);
        } else {
            result = CALL_FUNCTION_WITH_ARGS27(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 27, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 27);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS28(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 28); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 28 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 28; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 28 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 28 * sizeof(PyObject *));
            memcpy(python_pars + 28, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 28);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 28);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 28 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[28 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 28; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 28 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 28 * sizeof(PyObject *));
                memcpy(python_pars+1 + 28, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 28);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (28 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (28 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 28);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 28);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 28, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 28);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 28);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 28);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            28
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 28, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 28);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 28);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS28(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 28);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 28);
        } else {
            result = CALL_FUNCTION_WITH_ARGS28(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 28, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 28);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS32(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 32); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 32 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 32; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 32 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 32 * sizeof(PyObject *));
            memcpy(python_pars + 32, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 32);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 32);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 32 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[32 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 32; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 32 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 32 * sizeof(PyObject *));
                memcpy(python_pars+1 + 32, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 32);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (32 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (32 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 32);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 32);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 32, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 32);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 32);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 32);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            32
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 32, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 32);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 32);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS32(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 32);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 32);
        } else {
            result = CALL_FUNCTION_WITH_ARGS32(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 32, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 32);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS41(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 41); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 41 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 41; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 41 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 41 * sizeof(PyObject *));
            memcpy(python_pars + 41, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 41);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 41);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 41 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[41 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 41; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 41 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 41 * sizeof(PyObject *));
                memcpy(python_pars+1 + 41, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 41);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (41 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (41 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 41);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 41);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 41, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 41);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 41);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 41);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            41
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 41, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 41);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 41);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS41(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 41);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 41);
        } else {
            result = CALL_FUNCTION_WITH_ARGS41(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 41, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 41);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS46(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 46); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 46 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 46; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 46 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 46 * sizeof(PyObject *));
            memcpy(python_pars + 46, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 46);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 46);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 46 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[46 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 46; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 46 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 46 * sizeof(PyObject *));
                memcpy(python_pars+1 + 46, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 46);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (46 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (46 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 46);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 46);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 46, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 46);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 46);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 46);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            46
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 46, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 46);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 46);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS46(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 46);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 46);
        } else {
            result = CALL_FUNCTION_WITH_ARGS46(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 46, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 46);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS63(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 63); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 63 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 63; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 63 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 63 * sizeof(PyObject *));
            memcpy(python_pars + 63, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 63);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 63);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 63 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[63 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 63; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 63 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 63 * sizeof(PyObject *));
                memcpy(python_pars+1 + 63, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 63);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (63 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (63 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 63);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 63);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 63, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 63);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 63);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 63);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            63
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 63, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 63);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 63);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS63(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 63);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 63);
        } else {
            result = CALL_FUNCTION_WITH_ARGS63(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 63, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 63);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS88(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 88); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 88 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 88; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 88 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 88 * sizeof(PyObject *));
            memcpy(python_pars + 88, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 88);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 88);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 88 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[88 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 88; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 88 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 88 * sizeof(PyObject *));
                memcpy(python_pars+1 + 88, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 88);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (88 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (88 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(args, 88);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(args, 88);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 88, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(args, 88);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 88);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(args, 88);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            88
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 88, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(args, 88);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 88);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS88(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(args, 88);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 88);
        } else {
            result = CALL_FUNCTION_WITH_ARGS88(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 88, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(args, 88);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_POSARGS12(PyThreadState *tstate, PyObject *called, PyObject *pos_args) {
    assert(PyTuple_CheckExact(pos_args));
    assert(PyTuple_GET_SIZE(pos_args) == 12);
    PyObject *const *args = &PyTuple_GET_ITEM(pos_args, 0);
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 12); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 12 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 12; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 12 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 12 * sizeof(PyObject *));
            memcpy(python_pars + 12, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 12);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 12);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 12 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[12 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 12; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 12 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 12 * sizeof(PyObject *));
                memcpy(python_pars+1 + 12, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 12);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (12 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (12 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 12, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 12);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            12
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 12, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 12);
                        } else {
                            result = CALL_FUNCTION_WITH_POSARGS12(tstate, init_method, pos_args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            return NULL;
                        }
                    }
                }
            }


            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 12);
        } else {
            result = CALL_FUNCTION_WITH_POSARGS12(tstate, init_method, pos_args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 12, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif


    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);


    CHECK_OBJECT_X(result);

    return result;
}
PyObject *CALL_FUNCTION_WITH_ARGS15_KWSPLIT(PyThreadState *tstate, PyObject *called, PyObject *const *args, PyObject *const *kw_values, PyObject *kw_names) {
     CHECK_OBJECTS(args, 15); 
    CHECK_OBJECT(kw_names);
    assert(PyTuple_CheckExact(kw_names));
    CHECK_OBJECT(called);

    Py_ssize_t nkwargs = PyTuple_GET_SIZE(kw_names);

    CHECK_OBJECTS(kw_values, PyTuple_GET_SIZE(kw_names));

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;

        PyObject *result = Nuitka_CallFunctionPosArgsKwSplit(tstate, function, args, 15, kw_values, kw_names);

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            NUITKA_DYNAMIC_ARRAY_DECL(vectorcall_args, PyObject *, 15 + nkwargs);

            memcpy(vectorcall_args, args, 15*sizeof(PyObject *));
            memcpy(&vectorcall_args[15], kw_values, nkwargs*sizeof(PyObject *));

            PyObject *result = func(called, vectorcall_args, 15, kw_names);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    ternaryfunc call_slot = Py_TYPE(called)->tp_call;

    if (unlikely(call_slot == NULL)) {
        SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("'%s' object is not callable", called);

        return NULL;
    }

    if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
        return NULL;
    }

    PyObject *pos_args = MAKE_TUPLE(args, 15);

    PyObject *named_args = _PyDict_NewPresized(nkwargs);

    for (Py_ssize_t i = 0; i < nkwargs; i++) {
        PyObject *key = PyTuple_GET_ITEM(kw_names, i);

        PyObject *value = kw_values[i];

        CHECK_OBJECT(key);
        CHECK_OBJECT(value);

        DICT_SET_ITEM(named_args, key, value);
    }

    PyObject *result = (*call_slot)(called, pos_args, named_args);

    Py_DECREF(pos_args);
    Py_DECREF(named_args);

    Py_LeaveRecursiveCall();

    CHECK_OBJECT_X(result);

    return Nuitka_CheckFunctionResult(tstate, called, result);
}
PyObject *CALL_METHOD_WITH_ARGS11(PyThreadState *tstate, PyObject *source, PyObject *attr_name, PyObject *const *args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

     CHECK_OBJECTS(args, 11); 

    PyTypeObject *type = Py_TYPE(source);

    if (hasTypeGenericGetAttr(type)) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = Nuitka_TypeLookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL) {
            Py_INCREF(descr);

            if (NuitkaType_HasFeatureClass(Py_TYPE(descr))) {
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr)) {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS11(tstate, called_object, args)
;
                    Py_DECREF(called_object);
                    return result;
                }
            }
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if (dictoffset != 0) {
            // Negative dictionary offsets have special meaning.
            if (dictoffset < 0) {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0) {
                    tsize = -tsize;
                }
                size = _PyObject_VAR_SIZE(type, tsize);

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL) {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = DICT_GET_ITEM1(tstate, dict, attr_name);

            if (called_object != NULL) {
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS11(tstate, called_object, args)
;
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    tstate,
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    11
                );
                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS11(tstate, called_object, args)
;
                Py_DECREF(called_object);
                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS11(tstate, descr, args)
;
            Py_DECREF(descr);
            return result;
        }

#if PYTHON_VERSION < 0x300
        SET_CURRENT_EXCEPTION_TYPE0_FORMAT2(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING(attr_name)
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 0x300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS11(tstate, called_object, args)
;
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    tstate,
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    11
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS11(tstate, method, args)
;
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS11(tstate, called_object, args)
;
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT2(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING(source_instance->in_class->cl_name),
                PyString_AS_STRING(attr_name)
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                tstate,
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL)) {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS11(tstate, called_object, args)
;
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *descr = (*type->tp_getattro)(source, attr_name);

        if (unlikely(descr == NULL)) {
            return NULL;
        }

        descrgetfunc func = NULL;
        if (NuitkaType_HasFeatureClass(Py_TYPE(descr))) {
            func = Py_TYPE(descr)->tp_descr_get;

            if (func != NULL && PyDescr_IsData(descr)) {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                Py_DECREF(descr);

                if (unlikely(called_object == NULL))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS11(tstate, called_object, args)
;
                Py_DECREF(called_object);
                return result;
            }
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS11(tstate, descr, args)
;
        Py_DECREF(descr);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS11(tstate, called_object, args)
;
        Py_DECREF(called_object);
        return result;
    } else {
        SET_CURRENT_EXCEPTION_TYPE0_FORMAT2(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}
PyObject *CALL_METHOD_WITH_ARGS12(PyThreadState *tstate, PyObject *source, PyObject *attr_name, PyObject *const *args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

     CHECK_OBJECTS(args, 12); 

    PyTypeObject *type = Py_TYPE(source);

    if (hasTypeGenericGetAttr(type)) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = Nuitka_TypeLookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL) {
            Py_INCREF(descr);

            if (NuitkaType_HasFeatureClass(Py_TYPE(descr))) {
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr)) {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS12(tstate, called_object, args)
;
                    Py_DECREF(called_object);
                    return result;
                }
            }
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if (dictoffset != 0) {
            // Negative dictionary offsets have special meaning.
            if (dictoffset < 0) {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0) {
                    tsize = -tsize;
                }
                size = _PyObject_VAR_SIZE(type, tsize);

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL) {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = DICT_GET_ITEM1(tstate, dict, attr_name);

            if (called_object != NULL) {
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS12(tstate, called_object, args)
;
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    tstate,
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    12
                );
                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS12(tstate, called_object, args)
;
                Py_DECREF(called_object);
                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS12(tstate, descr, args)
;
            Py_DECREF(descr);
            return result;
        }

#if PYTHON_VERSION < 0x300
        SET_CURRENT_EXCEPTION_TYPE0_FORMAT2(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING(attr_name)
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 0x300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS12(tstate, called_object, args)
;
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    tstate,
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    12
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS12(tstate, method, args)
;
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS12(tstate, called_object, args)
;
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT2(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING(source_instance->in_class->cl_name),
                PyString_AS_STRING(attr_name)
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                tstate,
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL)) {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS12(tstate, called_object, args)
;
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *descr = (*type->tp_getattro)(source, attr_name);

        if (unlikely(descr == NULL)) {
            return NULL;
        }

        descrgetfunc func = NULL;
        if (NuitkaType_HasFeatureClass(Py_TYPE(descr))) {
            func = Py_TYPE(descr)->tp_descr_get;

            if (func != NULL && PyDescr_IsData(descr)) {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                Py_DECREF(descr);

                if (unlikely(called_object == NULL))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS12(tstate, called_object, args)
;
                Py_DECREF(called_object);
                return result;
            }
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS12(tstate, descr, args)
;
        Py_DECREF(descr);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS12(tstate, called_object, args)
;
        Py_DECREF(called_object);
        return result;
    } else {
        SET_CURRENT_EXCEPTION_TYPE0_FORMAT2(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}
PyObject *CALL_METHOD_WITH_ARGS13(PyThreadState *tstate, PyObject *source, PyObject *attr_name, PyObject *const *args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

     CHECK_OBJECTS(args, 13); 

    PyTypeObject *type = Py_TYPE(source);

    if (hasTypeGenericGetAttr(type)) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = Nuitka_TypeLookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL) {
            Py_INCREF(descr);

            if (NuitkaType_HasFeatureClass(Py_TYPE(descr))) {
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr)) {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS13(tstate, called_object, args)
;
                    Py_DECREF(called_object);
                    return result;
                }
            }
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if (dictoffset != 0) {
            // Negative dictionary offsets have special meaning.
            if (dictoffset < 0) {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0) {
                    tsize = -tsize;
                }
                size = _PyObject_VAR_SIZE(type, tsize);

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL) {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = DICT_GET_ITEM1(tstate, dict, attr_name);

            if (called_object != NULL) {
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS13(tstate, called_object, args)
;
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    tstate,
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    13
                );
                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS13(tstate, called_object, args)
;
                Py_DECREF(called_object);
                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS13(tstate, descr, args)
;
            Py_DECREF(descr);
            return result;
        }

#if PYTHON_VERSION < 0x300
        SET_CURRENT_EXCEPTION_TYPE0_FORMAT2(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING(attr_name)
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 0x300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS13(tstate, called_object, args)
;
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    tstate,
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    13
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS13(tstate, method, args)
;
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS13(tstate, called_object, args)
;
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT2(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING(source_instance->in_class->cl_name),
                PyString_AS_STRING(attr_name)
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                tstate,
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL)) {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS13(tstate, called_object, args)
;
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *descr = (*type->tp_getattro)(source, attr_name);

        if (unlikely(descr == NULL)) {
            return NULL;
        }

        descrgetfunc func = NULL;
        if (NuitkaType_HasFeatureClass(Py_TYPE(descr))) {
            func = Py_TYPE(descr)->tp_descr_get;

            if (func != NULL && PyDescr_IsData(descr)) {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                Py_DECREF(descr);

                if (unlikely(called_object == NULL))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS13(tstate, called_object, args)
;
                Py_DECREF(called_object);
                return result;
            }
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS13(tstate, descr, args)
;
        Py_DECREF(descr);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS13(tstate, called_object, args)
;
        Py_DECREF(called_object);
        return result;
    } else {
        SET_CURRENT_EXCEPTION_TYPE0_FORMAT2(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}
PyObject *CALL_METHOD_WITH_ARGS14(PyThreadState *tstate, PyObject *source, PyObject *attr_name, PyObject *const *args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

     CHECK_OBJECTS(args, 14); 

    PyTypeObject *type = Py_TYPE(source);

    if (hasTypeGenericGetAttr(type)) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = Nuitka_TypeLookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL) {
            Py_INCREF(descr);

            if (NuitkaType_HasFeatureClass(Py_TYPE(descr))) {
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr)) {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS14(tstate, called_object, args)
;
                    Py_DECREF(called_object);
                    return result;
                }
            }
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if (dictoffset != 0) {
            // Negative dictionary offsets have special meaning.
            if (dictoffset < 0) {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0) {
                    tsize = -tsize;
                }
                size = _PyObject_VAR_SIZE(type, tsize);

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL) {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = DICT_GET_ITEM1(tstate, dict, attr_name);

            if (called_object != NULL) {
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS14(tstate, called_object, args)
;
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    tstate,
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    14
                );
                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS14(tstate, called_object, args)
;
                Py_DECREF(called_object);
                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS14(tstate, descr, args)
;
            Py_DECREF(descr);
            return result;
        }

#if PYTHON_VERSION < 0x300
        SET_CURRENT_EXCEPTION_TYPE0_FORMAT2(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING(attr_name)
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 0x300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS14(tstate, called_object, args)
;
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    tstate,
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    14
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS14(tstate, method, args)
;
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS14(tstate, called_object, args)
;
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT2(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING(source_instance->in_class->cl_name),
                PyString_AS_STRING(attr_name)
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                tstate,
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL)) {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS14(tstate, called_object, args)
;
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *descr = (*type->tp_getattro)(source, attr_name);

        if (unlikely(descr == NULL)) {
            return NULL;
        }

        descrgetfunc func = NULL;
        if (NuitkaType_HasFeatureClass(Py_TYPE(descr))) {
            func = Py_TYPE(descr)->tp_descr_get;

            if (func != NULL && PyDescr_IsData(descr)) {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                Py_DECREF(descr);

                if (unlikely(called_object == NULL))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS14(tstate, called_object, args)
;
                Py_DECREF(called_object);
                return result;
            }
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS14(tstate, descr, args)
;
        Py_DECREF(descr);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS14(tstate, called_object, args)
;
        Py_DECREF(called_object);
        return result;
    } else {
        SET_CURRENT_EXCEPTION_TYPE0_FORMAT2(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}
PyObject *CALL_METHOD_WITH_ARGS15(PyThreadState *tstate, PyObject *source, PyObject *attr_name, PyObject *const *args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

     CHECK_OBJECTS(args, 15); 

    PyTypeObject *type = Py_TYPE(source);

    if (hasTypeGenericGetAttr(type)) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = Nuitka_TypeLookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL) {
            Py_INCREF(descr);

            if (NuitkaType_HasFeatureClass(Py_TYPE(descr))) {
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr)) {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS15(tstate, called_object, args)
;
                    Py_DECREF(called_object);
                    return result;
                }
            }
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if (dictoffset != 0) {
            // Negative dictionary offsets have special meaning.
            if (dictoffset < 0) {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0) {
                    tsize = -tsize;
                }
                size = _PyObject_VAR_SIZE(type, tsize);

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL) {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = DICT_GET_ITEM1(tstate, dict, attr_name);

            if (called_object != NULL) {
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS15(tstate, called_object, args)
;
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    tstate,
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    15
                );
                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS15(tstate, called_object, args)
;
                Py_DECREF(called_object);
                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS15(tstate, descr, args)
;
            Py_DECREF(descr);
            return result;
        }

#if PYTHON_VERSION < 0x300
        SET_CURRENT_EXCEPTION_TYPE0_FORMAT2(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING(attr_name)
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 0x300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS15(tstate, called_object, args)
;
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    tstate,
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    15
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS15(tstate, method, args)
;
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS15(tstate, called_object, args)
;
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT2(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING(source_instance->in_class->cl_name),
                PyString_AS_STRING(attr_name)
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                tstate,
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL)) {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS15(tstate, called_object, args)
;
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *descr = (*type->tp_getattro)(source, attr_name);

        if (unlikely(descr == NULL)) {
            return NULL;
        }

        descrgetfunc func = NULL;
        if (NuitkaType_HasFeatureClass(Py_TYPE(descr))) {
            func = Py_TYPE(descr)->tp_descr_get;

            if (func != NULL && PyDescr_IsData(descr)) {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                Py_DECREF(descr);

                if (unlikely(called_object == NULL))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS15(tstate, called_object, args)
;
                Py_DECREF(called_object);
                return result;
            }
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS15(tstate, descr, args)
;
        Py_DECREF(descr);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS15(tstate, called_object, args)
;
        Py_DECREF(called_object);
        return result;
    } else {
        SET_CURRENT_EXCEPTION_TYPE0_FORMAT2(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}