/* Generated code for Python module 'openpyxl.xml.constants'
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

/* The "module_openpyxl$xml$constants" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openpyxl$xml$constants;
PyDictObject *moduledict_openpyxl$xml$constants;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[165];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[165];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("openpyxl.xml.constants"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 165; i++) {
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
void checkModuleConstants_openpyxl$xml$constants(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 165; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e443f5a697b8ca1411b7c3d360c19c7a;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[162]); CHECK_OBJECT(module_filename_obj);
    codeobj_e443f5a697b8ca1411b7c3d360c19c7a = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[163], mod_consts[163], NULL, NULL, 0, 0, 0);
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

function_impl_code functable_openpyxl$xml$constants[] = {

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

    function_impl_code *current = functable_openpyxl$xml$constants;
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

    if (offset > sizeof(functable_openpyxl$xml$constants) || offset < 0) {
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
        functable_openpyxl$xml$constants[offset],
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
        module_openpyxl$xml$constants,
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
PyObject *modulecode_openpyxl$xml$constants(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openpyxl.xml.constants");

    // Store the module for future use.
    module_openpyxl$xml$constants = module;

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
        PRINT_STRING("openpyxl.xml.constants: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openpyxl.xml.constants: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initopenpyxl$xml$constants\n");

    moduledict_openpyxl$xml$constants = MODULE_DICT(module_openpyxl$xml$constants);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openpyxl$xml$constants,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openpyxl$xml$constants,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[164]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openpyxl$xml$constants,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openpyxl$xml$constants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openpyxl$xml$constants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openpyxl$xml$constants);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openpyxl$xml$constants);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_e443f5a697b8ca1411b7c3d360c19c7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_e443f5a697b8ca1411b7c3d360c19c7a = MAKE_MODULE_FRAME(codeobj_e443f5a697b8ca1411b7c3d360c19c7a, module_openpyxl$xml$constants);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e443f5a697b8ca1411b7c3d360c19c7a);
    assert(Py_REFCNT(frame_e443f5a697b8ca1411b7c3d360c19c7a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[3]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[3]);

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
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        tmp_add_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_add_expr_left_2 == NULL)) {
            tmp_add_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        assert(!(tmp_add_expr_left_2 == NULL));
        tmp_add_expr_right_2 = mod_consts[20];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        assert(!(tmp_add_expr_left_1 == NULL));
        tmp_add_expr_right_1 = mod_consts[21];
        tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        assert(!(tmp_assign_source_11 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        tmp_add_expr_left_4 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_add_expr_left_4 == NULL)) {
            tmp_add_expr_left_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        assert(!(tmp_add_expr_left_4 == NULL));
        tmp_add_expr_right_4 = mod_consts[20];
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_4, tmp_add_expr_right_4);
        assert(!(tmp_add_expr_left_3 == NULL));
        tmp_add_expr_right_3 = mod_consts[23];
        tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        assert(!(tmp_assign_source_12 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        tmp_add_expr_left_6 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_add_expr_left_6 == NULL)) {
            tmp_add_expr_left_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        assert(!(tmp_add_expr_left_6 == NULL));
        tmp_add_expr_right_6 = mod_consts[20];
        tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_6, tmp_add_expr_right_6);
        assert(!(tmp_add_expr_left_5 == NULL));
        tmp_add_expr_right_5 = mod_consts[25];
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        assert(!(tmp_assign_source_13 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        tmp_add_expr_left_8 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_add_expr_left_8 == NULL)) {
            tmp_add_expr_left_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        assert(!(tmp_add_expr_left_8 == NULL));
        tmp_add_expr_right_8 = mod_consts[20];
        tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_8, tmp_add_expr_right_8);
        assert(!(tmp_add_expr_left_7 == NULL));
        tmp_add_expr_right_7 = mod_consts[27];
        tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_left_7);
        assert(!(tmp_assign_source_14 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        tmp_add_expr_left_10 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_add_expr_left_10 == NULL)) {
            tmp_add_expr_left_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        assert(!(tmp_add_expr_left_10 == NULL));
        tmp_add_expr_right_10 = mod_consts[20];
        tmp_add_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_10, tmp_add_expr_right_10);
        assert(!(tmp_add_expr_left_9 == NULL));
        tmp_add_expr_right_9 = mod_consts[29];
        tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_9, tmp_add_expr_right_9);
        Py_DECREF(tmp_add_expr_left_9);
        assert(!(tmp_assign_source_15 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        tmp_add_expr_left_12 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_add_expr_left_12 == NULL)) {
            tmp_add_expr_left_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        assert(!(tmp_add_expr_left_12 == NULL));
        tmp_add_expr_right_12 = mod_consts[20];
        tmp_add_expr_left_11 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_12, tmp_add_expr_right_12);
        assert(!(tmp_add_expr_left_11 == NULL));
        tmp_add_expr_right_11 = mod_consts[31];
        tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_11, tmp_add_expr_right_11);
        Py_DECREF(tmp_add_expr_left_11);
        assert(!(tmp_assign_source_16 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        tmp_add_expr_left_14 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_add_expr_left_14 == NULL)) {
            tmp_add_expr_left_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        assert(!(tmp_add_expr_left_14 == NULL));
        tmp_add_expr_right_14 = mod_consts[20];
        tmp_add_expr_left_13 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_14, tmp_add_expr_right_14);
        assert(!(tmp_add_expr_left_13 == NULL));
        tmp_add_expr_right_13 = mod_consts[18];
        tmp_assign_source_17 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_13, tmp_add_expr_right_13);
        Py_DECREF(tmp_add_expr_left_13);
        assert(!(tmp_assign_source_17 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_add_expr_left_15;
        PyObject *tmp_add_expr_right_15;
        PyObject *tmp_add_expr_left_16;
        PyObject *tmp_add_expr_right_16;
        tmp_add_expr_left_16 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_add_expr_left_16 == NULL)) {
            tmp_add_expr_left_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        assert(!(tmp_add_expr_left_16 == NULL));
        tmp_add_expr_right_16 = mod_consts[20];
        tmp_add_expr_left_15 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_16, tmp_add_expr_right_16);
        assert(!(tmp_add_expr_left_15 == NULL));
        tmp_add_expr_right_15 = mod_consts[18];
        tmp_assign_source_18 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_15, tmp_add_expr_right_15);
        Py_DECREF(tmp_add_expr_left_15);
        assert(!(tmp_assign_source_18 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_add_expr_left_17;
        PyObject *tmp_add_expr_right_17;
        PyObject *tmp_add_expr_left_18;
        PyObject *tmp_add_expr_right_18;
        tmp_add_expr_left_18 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_add_expr_left_18 == NULL)) {
            tmp_add_expr_left_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        assert(!(tmp_add_expr_left_18 == NULL));
        tmp_add_expr_right_18 = mod_consts[20];
        tmp_add_expr_left_17 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_18, tmp_add_expr_right_18);
        assert(!(tmp_add_expr_left_17 == NULL));
        tmp_add_expr_right_17 = mod_consts[35];
        tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_17, tmp_add_expr_right_17);
        Py_DECREF(tmp_add_expr_left_17);
        assert(!(tmp_assign_source_19 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_add_expr_left_19;
        PyObject *tmp_add_expr_right_19;
        PyObject *tmp_add_expr_left_20;
        PyObject *tmp_add_expr_right_20;
        tmp_add_expr_left_20 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_add_expr_left_20 == NULL)) {
            tmp_add_expr_left_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        assert(!(tmp_add_expr_left_20 == NULL));
        tmp_add_expr_right_20 = mod_consts[20];
        tmp_add_expr_left_19 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_20, tmp_add_expr_right_20);
        assert(!(tmp_add_expr_left_19 == NULL));
        tmp_add_expr_right_19 = mod_consts[37];
        tmp_assign_source_20 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_19, tmp_add_expr_right_19);
        Py_DECREF(tmp_add_expr_left_19);
        assert(!(tmp_assign_source_20 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_add_expr_left_21;
        PyObject *tmp_add_expr_right_21;
        tmp_add_expr_left_21 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_add_expr_left_21 == NULL)) {
            tmp_add_expr_left_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        assert(!(tmp_add_expr_left_21 == NULL));
        tmp_add_expr_right_21 = mod_consts[41];
        tmp_assign_source_22 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_21, tmp_add_expr_right_21);
        assert(!(tmp_assign_source_22 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_add_expr_left_22;
        PyObject *tmp_add_expr_right_22;
        PyObject *tmp_add_expr_left_23;
        PyObject *tmp_add_expr_right_23;
        PyObject *tmp_add_expr_left_24;
        PyObject *tmp_add_expr_right_24;
        tmp_add_expr_left_24 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_add_expr_left_24 == NULL)) {
            tmp_add_expr_left_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        assert(!(tmp_add_expr_left_24 == NULL));
        tmp_add_expr_right_24 = mod_consts[20];
        tmp_add_expr_left_23 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_24, tmp_add_expr_right_24);
        assert(!(tmp_add_expr_left_23 == NULL));
        tmp_add_expr_right_23 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_add_expr_right_23 == NULL)) {
            tmp_add_expr_right_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        assert(!(tmp_add_expr_right_23 == NULL));
        tmp_add_expr_left_22 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_23, tmp_add_expr_right_23);
        Py_DECREF(tmp_add_expr_left_23);
        assert(!(tmp_add_expr_left_22 == NULL));
        tmp_add_expr_right_22 = mod_consts[43];
        tmp_assign_source_23 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_22, tmp_add_expr_right_22);
        Py_DECREF(tmp_add_expr_left_22);
        assert(!(tmp_assign_source_23 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_add_expr_left_25;
        PyObject *tmp_add_expr_right_25;
        tmp_add_expr_left_25 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_add_expr_left_25 == NULL)) {
            tmp_add_expr_left_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        assert(!(tmp_add_expr_left_25 == NULL));
        tmp_add_expr_right_25 = mod_consts[45];
        tmp_assign_source_24 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_25, tmp_add_expr_right_25);
        assert(!(tmp_assign_source_24 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_add_expr_left_26;
        PyObject *tmp_add_expr_right_26;
        tmp_add_expr_left_26 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_add_expr_left_26 == NULL)) {
            tmp_add_expr_left_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        assert(!(tmp_add_expr_left_26 == NULL));
        tmp_add_expr_right_26 = mod_consts[47];
        tmp_assign_source_25 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_26, tmp_add_expr_right_26);
        assert(!(tmp_assign_source_25 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_add_expr_left_27;
        PyObject *tmp_add_expr_right_27;
        tmp_add_expr_left_27 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_add_expr_left_27 == NULL)) {
            tmp_add_expr_left_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        assert(!(tmp_add_expr_left_27 == NULL));
        tmp_add_expr_right_27 = mod_consts[49];
        tmp_assign_source_26 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_27, tmp_add_expr_right_27);
        assert(!(tmp_assign_source_26 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_add_expr_left_28;
        PyObject *tmp_add_expr_right_28;
        tmp_add_expr_left_28 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_add_expr_left_28 == NULL)) {
            tmp_add_expr_left_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        assert(!(tmp_add_expr_left_28 == NULL));
        tmp_add_expr_right_28 = mod_consts[51];
        tmp_assign_source_27 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_28, tmp_add_expr_right_28);
        assert(!(tmp_assign_source_27 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_add_expr_left_29;
        PyObject *tmp_add_expr_right_29;
        tmp_add_expr_left_29 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_add_expr_left_29 == NULL)) {
            tmp_add_expr_left_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        assert(!(tmp_add_expr_left_29 == NULL));
        tmp_add_expr_right_29 = mod_consts[53];
        tmp_assign_source_28 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_29, tmp_add_expr_right_29);
        assert(!(tmp_assign_source_28 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_add_expr_left_30;
        PyObject *tmp_add_expr_right_30;
        tmp_add_expr_left_30 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_add_expr_left_30 == NULL)) {
            tmp_add_expr_left_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        assert(!(tmp_add_expr_left_30 == NULL));
        tmp_add_expr_right_30 = mod_consts[55];
        tmp_assign_source_29 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_30, tmp_add_expr_right_30);
        assert(!(tmp_assign_source_29 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_add_expr_left_31;
        PyObject *tmp_add_expr_right_31;
        tmp_add_expr_left_31 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_add_expr_left_31 == NULL)) {
            tmp_add_expr_left_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        assert(!(tmp_add_expr_left_31 == NULL));
        tmp_add_expr_right_31 = mod_consts[57];
        tmp_assign_source_30 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_31, tmp_add_expr_right_31);
        assert(!(tmp_assign_source_30 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_add_expr_left_32;
        PyObject *tmp_add_expr_right_32;
        tmp_add_expr_left_32 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_add_expr_left_32 == NULL)) {
            tmp_add_expr_left_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        assert(!(tmp_add_expr_left_32 == NULL));
        tmp_add_expr_right_32 = mod_consts[71];
        tmp_assign_source_37 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_32, tmp_add_expr_right_32);
        assert(!(tmp_assign_source_37 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_add_expr_left_33;
        PyObject *tmp_add_expr_right_33;
        tmp_add_expr_left_33 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_add_expr_left_33 == NULL)) {
            tmp_add_expr_left_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        assert(!(tmp_add_expr_left_33 == NULL));
        tmp_add_expr_right_33 = mod_consts[73];
        tmp_assign_source_38 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_33, tmp_add_expr_right_33);
        assert(!(tmp_assign_source_38 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_add_expr_left_34;
        PyObject *tmp_add_expr_right_34;
        tmp_add_expr_left_34 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_add_expr_left_34 == NULL)) {
            tmp_add_expr_left_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        assert(!(tmp_add_expr_left_34 == NULL));
        tmp_add_expr_right_34 = mod_consts[75];
        tmp_assign_source_39 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_34, tmp_add_expr_right_34);
        assert(!(tmp_assign_source_39 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_add_expr_left_35;
        PyObject *tmp_add_expr_right_35;
        tmp_add_expr_left_35 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_add_expr_left_35 == NULL)) {
            tmp_add_expr_left_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        assert(!(tmp_add_expr_left_35 == NULL));
        tmp_add_expr_right_35 = mod_consts[77];
        tmp_assign_source_40 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_35, tmp_add_expr_right_35);
        assert(!(tmp_assign_source_40 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_add_expr_left_36;
        PyObject *tmp_add_expr_right_36;
        tmp_add_expr_left_36 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_add_expr_left_36 == NULL)) {
            tmp_add_expr_left_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        assert(!(tmp_add_expr_left_36 == NULL));
        tmp_add_expr_right_36 = mod_consts[79];
        tmp_assign_source_41 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_36, tmp_add_expr_right_36);
        assert(!(tmp_assign_source_41 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_add_expr_left_37;
        PyObject *tmp_add_expr_right_37;
        tmp_add_expr_left_37 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_add_expr_left_37 == NULL)) {
            tmp_add_expr_left_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        assert(!(tmp_add_expr_left_37 == NULL));
        tmp_add_expr_right_37 = mod_consts[81];
        tmp_assign_source_42 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_37, tmp_add_expr_right_37);
        assert(!(tmp_assign_source_42 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_add_expr_left_38;
        PyObject *tmp_add_expr_right_38;
        tmp_add_expr_left_38 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_add_expr_left_38 == NULL)) {
            tmp_add_expr_left_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        assert(!(tmp_add_expr_left_38 == NULL));
        tmp_add_expr_right_38 = mod_consts[83];
        tmp_assign_source_43 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_38, tmp_add_expr_right_38);
        assert(!(tmp_assign_source_43 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_add_expr_left_39;
        PyObject *tmp_add_expr_right_39;
        tmp_add_expr_left_39 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_add_expr_left_39 == NULL)) {
            tmp_add_expr_left_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        assert(!(tmp_add_expr_left_39 == NULL));
        tmp_add_expr_right_39 = mod_consts[85];
        tmp_assign_source_44 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_39, tmp_add_expr_right_39);
        assert(!(tmp_assign_source_44 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[89];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_add_expr_left_40;
        PyObject *tmp_add_expr_right_40;
        tmp_add_expr_left_40 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_add_expr_left_40 == NULL)) {
            tmp_add_expr_left_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        assert(!(tmp_add_expr_left_40 == NULL));
        tmp_add_expr_right_40 = mod_consts[71];
        tmp_assign_source_47 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_40, tmp_add_expr_right_40);
        assert(!(tmp_assign_source_47 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_add_expr_left_41;
        PyObject *tmp_add_expr_right_41;
        tmp_add_expr_left_41 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_add_expr_left_41 == NULL)) {
            tmp_add_expr_left_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        assert(!(tmp_add_expr_left_41 == NULL));
        tmp_add_expr_right_41 = mod_consts[92];
        tmp_assign_source_48 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_41, tmp_add_expr_right_41);
        assert(!(tmp_assign_source_48 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_add_expr_left_42;
        PyObject *tmp_add_expr_right_42;
        tmp_add_expr_left_42 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_add_expr_left_42 == NULL)) {
            tmp_add_expr_left_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        assert(!(tmp_add_expr_left_42 == NULL));
        tmp_add_expr_right_42 = mod_consts[94];
        tmp_assign_source_49 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_42, tmp_add_expr_right_42);
        assert(!(tmp_assign_source_49 == NULL));
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[100];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[110];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_assign_source_58 = _PyDict_NewPresized( 9 );
        tmp_res = PyDict_SetItem(tmp_assign_source_58, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[111];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_58, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_dict_key_1 == NULL));
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_58, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[112];
        tmp_dict_value_1 = mod_consts[113];
        tmp_res = PyDict_SetItem(tmp_assign_source_58, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[114];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_58, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[115];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_58, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[116];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_58, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[117];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_58, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[118];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_58, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_58);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_mod_expr_left_1 == NULL)) {
            tmp_mod_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        assert(!(tmp_mod_expr_left_1 == NULL));
        tmp_mod_expr_right_1 = mod_consts[126];
        tmp_assign_source_62 = BINARY_OPERATION_MOD_OBJECT_UNICODE_UNICODE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        tmp_mod_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_mod_expr_left_2 == NULL)) {
            tmp_mod_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_mod_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_2 = mod_consts[128];
        tmp_assign_source_63 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        tmp_mod_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_mod_expr_left_3 == NULL)) {
            tmp_mod_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_mod_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_3 = mod_consts[130];
        tmp_assign_source_64 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        tmp_mod_expr_left_4 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_mod_expr_left_4 == NULL)) {
            tmp_mod_expr_left_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_mod_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_4 = mod_consts[132];
        tmp_assign_source_65 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        tmp_mod_expr_left_5 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_mod_expr_left_5 == NULL)) {
            tmp_mod_expr_left_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_mod_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_5 = mod_consts[134];
        tmp_assign_source_66 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        tmp_mod_expr_left_6 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_mod_expr_left_6 == NULL)) {
            tmp_mod_expr_left_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_mod_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_6 = mod_consts[136];
        tmp_assign_source_67 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[138];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[140];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[142];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[144];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[146];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        tmp_mod_expr_left_7 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_mod_expr_left_7 == NULL)) {
            tmp_mod_expr_left_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_mod_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_7 = mod_consts[148];
        tmp_assign_source_73 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        tmp_mod_expr_left_8 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_mod_expr_left_8 == NULL)) {
            tmp_mod_expr_left_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_mod_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_8 = mod_consts[150];
        tmp_assign_source_74 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        tmp_mod_expr_left_9 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_mod_expr_left_9 == NULL)) {
            tmp_mod_expr_left_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_mod_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_9 = mod_consts[148];
        tmp_assign_source_75 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_mod_expr_left_10;
        PyObject *tmp_mod_expr_right_10;
        tmp_mod_expr_left_10 = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_mod_expr_left_10 == NULL)) {
            tmp_mod_expr_left_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_mod_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_10 = mod_consts[150];
        tmp_assign_source_76 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_76);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e443f5a697b8ca1411b7c3d360c19c7a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e443f5a697b8ca1411b7c3d360c19c7a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e443f5a697b8ca1411b7c3d360c19c7a, exception_lineno);
    }



    assertFrameObject(frame_e443f5a697b8ca1411b7c3d360c19c7a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = DICT_COPY(mod_consts[154]);
        UPDATE_STRING_DICT1(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[156];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[158];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[160];
        UPDATE_STRING_DICT0(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_80);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openpyxl.xml.constants", false);

    Py_INCREF(module_openpyxl$xml$constants);
    return module_openpyxl$xml$constants;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openpyxl$xml$constants, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openpyxl$xml$constants", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
