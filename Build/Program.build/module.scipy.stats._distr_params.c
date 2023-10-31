/* Generated code for Python module 'scipy.stats._distr_params'
 * created by Nuitka version 1.8.5
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_scipy$stats$_distr_params" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$stats$_distr_params;
PyDictObject *moduledict_scipy$stats$_distr_params;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[151];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[151];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("scipy.stats._distr_params"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 151; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$stats$_distr_params(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 151; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_fb48e5af3f6d2771fee18e44e3cce68c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[148]); CHECK_OBJECT(module_filename_obj);
    codeobj_fb48e5af3f6d2771fee18e44e3cce68c = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[149], mod_consts[149], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_scipy$stats$_distr_params[] = {

    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_scipy$stats$_distr_params;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_scipy$stats$_distr_params) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_scipy$stats$_distr_params[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_scipy$stats$_distr_params,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_scipy$stats$_distr_params(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy.stats._distr_params");

    // Store the module for future use.
    module_scipy$stats$_distr_params = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.stats._distr_params: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("scipy.stats._distr_params: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$stats$_distr_params\n");

    moduledict_scipy$stats$_distr_params = MODULE_DICT(module_scipy$stats$_distr_params);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$stats$_distr_params,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$stats$_distr_params,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[150]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$stats$_distr_params,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$stats$_distr_params,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$stats$_distr_params,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$stats$_distr_params);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_scipy$stats$_distr_params);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_fb48e5af3f6d2771fee18e44e3cce68c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_fb48e5af3f6d2771fee18e44e3cce68c = MAKE_MODULE_FRAME(codeobj_fb48e5af3f6d2771fee18e44e3cce68c, module_scipy$stats$_distr_params);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fb48e5af3f6d2771fee18e44e3cce68c);
    assert(Py_REFCNT(frame_fb48e5af3f6d2771fee18e44e3cce68c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[7];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$stats$_distr_params;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[8];
        frame_fb48e5af3f6d2771fee18e44e3cce68c->m_frame.f_lineno = 4;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = DEEP_COPY_LIST_GUIDED(tstate, mod_consts[10], "lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll");
        UPDATE_STRING_DICT1(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = DEEP_COPY_LIST_GUIDED(tstate, mod_consts[12], "lllllllllllllllllllllll");
        UPDATE_STRING_DICT1(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = DEEP_COPY_LIST_GUIDED(tstate, mod_consts[14], "lllllllllllllllllll");
        UPDATE_STRING_DICT1(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = MAKE_LIST2(mod_consts[16],mod_consts[17]);
        tmp_assign_source_8 = MAKE_LIST_EMPTY(107);
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_list_element_3;
            PyObject *tmp_list_element_4;
            PyObject *tmp_list_element_5;
            PyObject *tmp_list_element_6;
            PyObject *tmp_list_element_7;
            PyList_SET_ITEM(tmp_assign_source_8, 0, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[18],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 1, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[20],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 2, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[21],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 3, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[22],mod_consts[23]);
            PyList_SET_ITEM(tmp_assign_source_8, 4, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[24],mod_consts[23]);
            PyList_SET_ITEM(tmp_assign_source_8, 5, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[25],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 6, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[26],mod_consts[27]);
            PyList_SET_ITEM(tmp_assign_source_8, 7, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[28],mod_consts[27]);
            PyList_SET_ITEM(tmp_assign_source_8, 8, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[29],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 9, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[30],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 10, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[31],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 11, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[32],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 12, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[33],mod_consts[34]);
            PyList_SET_ITEM(tmp_assign_source_8, 13, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[35],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 14, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[36],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 15, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[37],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 16, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[38],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 17, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[39],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 18, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[40],mod_consts[41]);
            PyList_SET_ITEM(tmp_assign_source_8, 19, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[42],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 20, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[43],mod_consts[44]);
            PyList_SET_ITEM(tmp_assign_source_8, 21, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[45],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 22, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[46],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 23, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[47],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 24, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[48],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 25, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[49],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 26, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[50],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 27, tmp_list_element_1);
            tmp_list_element_2 = mod_consts[51];
            tmp_list_element_1 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_expression_value_1;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_2);
                tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_1 == NULL)) {
                    tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                assert(!(tmp_expression_value_1 == NULL));
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[52]);
                if (tmp_tuple_element_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;

                    goto list_build_exception_2;
                }
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(1);
                PyTuple_SET_ITEM(tmp_list_element_2, 0, tmp_tuple_element_1);
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_2);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            PyList_SET_ITEM(tmp_assign_source_8, 28, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[53],mod_consts[54]);
            PyList_SET_ITEM(tmp_assign_source_8, 29, tmp_list_element_1);
            tmp_list_element_3 = mod_consts[55];
            tmp_list_element_1 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_expression_value_2;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_3);
                tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_2 == NULL)) {
                    tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 206;

                    goto list_build_exception_3;
                }
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[52]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 206;

                    goto list_build_exception_3;
                }
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(1);
                PyTuple_SET_ITEM(tmp_list_element_3, 0, tmp_tuple_element_2);
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_3);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            PyList_SET_ITEM(tmp_assign_source_8, 30, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[56],mod_consts[57]);
            PyList_SET_ITEM(tmp_assign_source_8, 31, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[58],mod_consts[59]);
            PyList_SET_ITEM(tmp_assign_source_8, 32, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[60],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 33, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[61],mod_consts[62]);
            PyList_SET_ITEM(tmp_assign_source_8, 34, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[63],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 35, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[64],mod_consts[65]);
            PyList_SET_ITEM(tmp_assign_source_8, 36, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[66],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 37, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[67],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 38, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[68],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 39, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[69],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 40, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[70],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 41, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[71],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 42, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[72],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 43, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[73],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 44, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[74],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 45, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[75],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 46, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[76],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 47, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[77],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 48, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[78],mod_consts[79]);
            PyList_SET_ITEM(tmp_assign_source_8, 49, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[80],mod_consts[79]);
            PyList_SET_ITEM(tmp_assign_source_8, 50, tmp_list_element_1);
            tmp_list_element_4 = mod_consts[81];
            tmp_list_element_1 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_expression_value_3;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_4);
                tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_3 == NULL)) {
                    tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 227;

                    goto list_build_exception_4;
                }
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[82]);
                if (tmp_tuple_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 227;

                    goto list_build_exception_4;
                }
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_list_element_4, 0, tmp_tuple_element_3);
                tmp_tuple_element_3 = mod_consts[8];
                PyTuple_SET_ITEM0(tmp_list_element_4, 1, tmp_tuple_element_3);
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_4);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            PyList_SET_ITEM(tmp_assign_source_8, 51, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[83],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 52, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[84],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 53, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[85],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 54, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[86],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 55, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[87],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 56, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[88],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 57, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[89],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 58, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[90],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 59, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[91],mod_consts[27]);
            PyList_SET_ITEM(tmp_assign_source_8, 60, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[92],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 61, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[93],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 62, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[94],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 63, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[95],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 64, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[96],mod_consts[97]);
            PyList_SET_ITEM(tmp_assign_source_8, 65, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[98],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 66, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[99],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 67, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[100],mod_consts[79]);
            PyList_SET_ITEM(tmp_assign_source_8, 68, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[101],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 69, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[102],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 70, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[103],mod_consts[34]);
            PyList_SET_ITEM(tmp_assign_source_8, 71, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[104],mod_consts[105]);
            PyList_SET_ITEM(tmp_assign_source_8, 72, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[106],mod_consts[34]);
            PyList_SET_ITEM(tmp_assign_source_8, 73, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[107],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 74, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[108],mod_consts[109]);
            PyList_SET_ITEM(tmp_assign_source_8, 75, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[110],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 76, tmp_list_element_1);
            tmp_list_element_5 = mod_consts[111];
            tmp_list_element_1 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_expression_value_4;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_5);
                tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_4 == NULL)) {
                    tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 253;

                    goto list_build_exception_5;
                }
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[82]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 253;

                    goto list_build_exception_5;
                }
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(1);
                PyTuple_SET_ITEM(tmp_list_element_5, 0, tmp_tuple_element_4);
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_5);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            PyList_SET_ITEM(tmp_assign_source_8, 77, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[112],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 78, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[113],mod_consts[79]);
            PyList_SET_ITEM(tmp_assign_source_8, 79, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[114],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 80, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[115],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 81, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[116],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 82, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[117],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 83, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[118],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 84, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[119],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 85, tmp_list_element_1);
            tmp_list_element_6 = mod_consts[120];
            tmp_list_element_1 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_expression_value_5;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_6);
                tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_5 == NULL)) {
                    tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;

                    goto list_build_exception_6;
                }
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[52]);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;

                    goto list_build_exception_6;
                }
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(1);
                PyTuple_SET_ITEM(tmp_list_element_6, 0, tmp_tuple_element_5);
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_6);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            PyList_SET_ITEM(tmp_assign_source_8, 86, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[121],mod_consts[27]);
            PyList_SET_ITEM(tmp_assign_source_8, 87, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[122],mod_consts[123]);
            PyList_SET_ITEM(tmp_assign_source_8, 88, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[124],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 89, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[125],mod_consts[126]);
            PyList_SET_ITEM(tmp_assign_source_8, 90, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[127],mod_consts[128]);
            PyList_SET_ITEM(tmp_assign_source_8, 91, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[129],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 92, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[130],mod_consts[97]);
            PyList_SET_ITEM(tmp_assign_source_8, 93, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[131],mod_consts[132]);
            PyList_SET_ITEM(tmp_assign_source_8, 94, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[131],mod_consts[133]);
            PyList_SET_ITEM(tmp_assign_source_8, 95, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[134],mod_consts[135]);
            PyList_SET_ITEM(tmp_assign_source_8, 96, tmp_list_element_1);
            tmp_list_element_7 = mod_consts[136];
            tmp_list_element_1 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_expression_value_6;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_7);
                tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_6 == NULL)) {
                    tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 273;

                    goto list_build_exception_7;
                }
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[82]);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 273;

                    goto list_build_exception_7;
                }
                tmp_list_element_7 = MAKE_TUPLE_EMPTY(1);
                PyTuple_SET_ITEM(tmp_list_element_7, 0, tmp_tuple_element_6);
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_7);
            }
            goto list_build_noexception_6;
            // Exception handling pass through code for list_build:
            list_build_exception_7:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_6:;
            PyList_SET_ITEM(tmp_assign_source_8, 97, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[137],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 98, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[138],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 99, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[139],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 100, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[140],mod_consts[19]);
            PyList_SET_ITEM(tmp_assign_source_8, 101, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[141],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 102, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[142],mod_consts[17]);
            PyList_SET_ITEM(tmp_assign_source_8, 103, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[143],mod_consts[128]);
            PyList_SET_ITEM(tmp_assign_source_8, 104, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[144],mod_consts[145]);
            PyList_SET_ITEM(tmp_assign_source_8, 105, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(mod_consts[146],mod_consts[128]);
            PyList_SET_ITEM(tmp_assign_source_8, 106, tmp_list_element_1);
        }
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_8);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        UPDATE_STRING_DICT1(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_8);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fb48e5af3f6d2771fee18e44e3cce68c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fb48e5af3f6d2771fee18e44e3cce68c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fb48e5af3f6d2771fee18e44e3cce68c, exception_lineno);
    }



    assertFrameObject(frame_fb48e5af3f6d2771fee18e44e3cce68c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy.stats._distr_params", false);

    Py_INCREF(module_scipy$stats$_distr_params);
    return module_scipy$stats$_distr_params;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$stats$_distr_params", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
