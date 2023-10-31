/* Generated code for Python module 'openpyxl.styles.builtins'
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

/* The "module_openpyxl$styles$builtins" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openpyxl$styles$builtins;
PyDictObject *moduledict_openpyxl$styles$builtins;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[169];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[169];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("openpyxl.styles.builtins"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 169; i++) {
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
void checkModuleConstants_openpyxl$styles$builtins(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 169; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b0a53ba44abad26c6e09ee8f358e8520;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[166]); CHECK_OBJECT(module_filename_obj);
    codeobj_b0a53ba44abad26c6e09ee8f358e8520 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[167], mod_consts[167], NULL, NULL, 0, 0, 0);
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

function_impl_code functable_openpyxl$styles$builtins[] = {

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

    function_impl_code *current = functable_openpyxl$styles$builtins;
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

    if (offset > sizeof(functable_openpyxl$styles$builtins) || offset < 0) {
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
        functable_openpyxl$styles$builtins[offset],
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
        module_openpyxl$styles$builtins,
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
PyObject *modulecode_openpyxl$styles$builtins(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openpyxl.styles.builtins");

    // Store the module for future use.
    module_openpyxl$styles$builtins = module;

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
        PRINT_STRING("openpyxl.styles.builtins: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openpyxl.styles.builtins: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initopenpyxl$styles$builtins\n");

    moduledict_openpyxl$styles$builtins = MODULE_DICT(module_openpyxl$styles$builtins);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openpyxl$styles$builtins,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openpyxl$styles$builtins,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[168]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openpyxl$styles$builtins,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openpyxl$styles$builtins,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openpyxl$styles$builtins,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openpyxl$styles$builtins);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openpyxl$styles$builtins);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_b0a53ba44abad26c6e09ee8f358e8520;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_b0a53ba44abad26c6e09ee8f358e8520 = MAKE_MODULE_FRAME(codeobj_b0a53ba44abad26c6e09ee8f358e8520, module_openpyxl$styles$builtins);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b0a53ba44abad26c6e09ee8f358e8520);
    assert(Py_REFCNT(frame_b0a53ba44abad26c6e09ee8f358e8520) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_openpyxl$styles$builtins;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[7];
        tmp_level_value_1 = mod_consts[8];
        frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 5;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_openpyxl$styles$builtins,
                mod_consts[9],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[9]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[11];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_openpyxl$styles$builtins;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[12];
        tmp_level_value_2 = mod_consts[10];
        frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 6;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_openpyxl$styles$builtins,
                mod_consts[13],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[100];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[112];
        UPDATE_STRING_DICT0(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[114];
        tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_1);
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1346;

                goto tuple_build_exception_1;
            }
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[115]);
            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1346;

                goto tuple_build_exception_1;
            }
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_1);

                exception_lineno = 1346;

                goto tuple_build_exception_1;
            }
            tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_args_element_value_2 == NULL)) {
                tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
            }

            if (tmp_args_element_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_1);

                exception_lineno = 1346;

                goto tuple_build_exception_1;
            }
            frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1346;
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
            if (tmp_args_element_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_1);

                exception_lineno = 1346;

                goto tuple_build_exception_1;
            }
            frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1346;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1346;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_list_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_seq_1 = MAKE_LIST_EMPTY(50);
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_tuple_element_43;
            PyObject *tmp_tuple_element_44;
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_tuple_element_47;
            PyObject *tmp_tuple_element_48;
            PyObject *tmp_tuple_element_49;
            PyObject *tmp_tuple_element_50;
            PyList_SET_ITEM(tmp_dict_seq_1, 0, tmp_list_element_1);
            tmp_tuple_element_2 = mod_consts[116];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_3;
                PyObject *tmp_expression_value_2;
                PyObject *tmp_args_element_value_3;
                PyObject *tmp_called_value_4;
                PyObject *tmp_args_element_value_4;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_2);
                tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_2 == NULL)) {
                    tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1347;

                    goto tuple_build_exception_2;
                }
                tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[115]);
                if (tmp_called_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1347;

                    goto tuple_build_exception_2;
                }
                tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_4 == NULL)) {
                    tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_3);

                    exception_lineno = 1347;

                    goto tuple_build_exception_2;
                }
                tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[17]);

                if (unlikely(tmp_args_element_value_4 == NULL)) {
                    tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
                }

                if (tmp_args_element_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_3);

                    exception_lineno = 1347;

                    goto tuple_build_exception_2;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1347;
                tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
                if (tmp_args_element_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_3);

                    exception_lineno = 1347;

                    goto tuple_build_exception_2;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1347;
                tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
                Py_DECREF(tmp_called_value_3);
                Py_DECREF(tmp_args_element_value_3);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1347;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            PyList_SET_ITEM(tmp_dict_seq_1, 1, tmp_list_element_1);
            tmp_tuple_element_3 = mod_consts[117];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_5;
                PyObject *tmp_expression_value_3;
                PyObject *tmp_args_element_value_5;
                PyObject *tmp_called_value_6;
                PyObject *tmp_args_element_value_6;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_3);
                tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_3 == NULL)) {
                    tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1348;

                    goto tuple_build_exception_3;
                }
                tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[115]);
                if (tmp_called_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1348;

                    goto tuple_build_exception_3;
                }
                tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_6 == NULL)) {
                    tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_5);

                    exception_lineno = 1348;

                    goto tuple_build_exception_3;
                }
                tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[21]);

                if (unlikely(tmp_args_element_value_6 == NULL)) {
                    tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                }

                if (tmp_args_element_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_5);

                    exception_lineno = 1348;

                    goto tuple_build_exception_3;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1348;
                tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
                if (tmp_args_element_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_5);

                    exception_lineno = 1348;

                    goto tuple_build_exception_3;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1348;
                tmp_tuple_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
                Py_DECREF(tmp_called_value_5);
                Py_DECREF(tmp_args_element_value_5);
                if (tmp_tuple_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1348;

                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            PyList_SET_ITEM(tmp_dict_seq_1, 2, tmp_list_element_1);
            tmp_tuple_element_4 = mod_consts[118];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_7;
                PyObject *tmp_expression_value_4;
                PyObject *tmp_args_element_value_7;
                PyObject *tmp_called_value_8;
                PyObject *tmp_args_element_value_8;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
                tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_4 == NULL)) {
                    tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1349;

                    goto tuple_build_exception_4;
                }
                tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[115]);
                if (tmp_called_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1349;

                    goto tuple_build_exception_4;
                }
                tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_8 == NULL)) {
                    tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_7);

                    exception_lineno = 1349;

                    goto tuple_build_exception_4;
                }
                tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_args_element_value_8 == NULL)) {
                    tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                }

                if (tmp_args_element_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_7);

                    exception_lineno = 1349;

                    goto tuple_build_exception_4;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1349;
                tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
                if (tmp_args_element_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_7);

                    exception_lineno = 1349;

                    goto tuple_build_exception_4;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1349;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_7);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1349;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            PyList_SET_ITEM(tmp_dict_seq_1, 3, tmp_list_element_1);
            tmp_tuple_element_5 = mod_consts[119];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_9;
                PyObject *tmp_expression_value_5;
                PyObject *tmp_args_element_value_9;
                PyObject *tmp_called_value_10;
                PyObject *tmp_args_element_value_10;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_5 == NULL)) {
                    tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1350;

                    goto tuple_build_exception_5;
                }
                tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[115]);
                if (tmp_called_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1350;

                    goto tuple_build_exception_5;
                }
                tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_10 == NULL)) {
                    tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_9);

                    exception_lineno = 1350;

                    goto tuple_build_exception_5;
                }
                tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[19]);

                if (unlikely(tmp_args_element_value_10 == NULL)) {
                    tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
                }

                if (tmp_args_element_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_9);

                    exception_lineno = 1350;

                    goto tuple_build_exception_5;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1350;
                tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
                if (tmp_args_element_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_9);

                    exception_lineno = 1350;

                    goto tuple_build_exception_5;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1350;
                tmp_tuple_element_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
                Py_DECREF(tmp_called_value_9);
                Py_DECREF(tmp_args_element_value_9);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1350;

                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            PyList_SET_ITEM(tmp_dict_seq_1, 4, tmp_list_element_1);
            tmp_tuple_element_6 = mod_consts[120];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_11;
                PyObject *tmp_expression_value_6;
                PyObject *tmp_args_element_value_11;
                PyObject *tmp_called_value_12;
                PyObject *tmp_args_element_value_12;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
                tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_6 == NULL)) {
                    tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1351;

                    goto tuple_build_exception_6;
                }
                tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[115]);
                if (tmp_called_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1351;

                    goto tuple_build_exception_6;
                }
                tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_12 == NULL)) {
                    tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_11);

                    exception_lineno = 1351;

                    goto tuple_build_exception_6;
                }
                tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[23]);

                if (unlikely(tmp_args_element_value_12 == NULL)) {
                    tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                }

                if (tmp_args_element_value_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_11);

                    exception_lineno = 1351;

                    goto tuple_build_exception_6;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1351;
                tmp_args_element_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_12);
                if (tmp_args_element_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_11);

                    exception_lineno = 1351;

                    goto tuple_build_exception_6;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1351;
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_11);
                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_args_element_value_11);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1351;

                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            PyList_SET_ITEM(tmp_dict_seq_1, 5, tmp_list_element_1);
            tmp_tuple_element_7 = mod_consts[121];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_13;
                PyObject *tmp_expression_value_7;
                PyObject *tmp_args_element_value_13;
                PyObject *tmp_called_value_14;
                PyObject *tmp_args_element_value_14;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
                tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_7 == NULL)) {
                    tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1352;

                    goto tuple_build_exception_7;
                }
                tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[115]);
                if (tmp_called_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1352;

                    goto tuple_build_exception_7;
                }
                tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_14 == NULL)) {
                    tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_13);

                    exception_lineno = 1352;

                    goto tuple_build_exception_7;
                }
                tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[27]);

                if (unlikely(tmp_args_element_value_14 == NULL)) {
                    tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                }

                if (tmp_args_element_value_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_13);

                    exception_lineno = 1352;

                    goto tuple_build_exception_7;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1352;
                tmp_args_element_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_14);
                if (tmp_args_element_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_13);

                    exception_lineno = 1352;

                    goto tuple_build_exception_7;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1352;
                tmp_tuple_element_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_13);
                Py_DECREF(tmp_called_value_13);
                Py_DECREF(tmp_args_element_value_13);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1352;

                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            PyList_SET_ITEM(tmp_dict_seq_1, 6, tmp_list_element_1);
            tmp_tuple_element_8 = mod_consts[122];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_15;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_args_element_value_15;
                PyObject *tmp_called_value_16;
                PyObject *tmp_args_element_value_16;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_8);
                tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_8 == NULL)) {
                    tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1353;

                    goto tuple_build_exception_8;
                }
                tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[115]);
                if (tmp_called_value_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1353;

                    goto tuple_build_exception_8;
                }
                tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_16 == NULL)) {
                    tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_15);

                    exception_lineno = 1353;

                    goto tuple_build_exception_8;
                }
                tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[29]);

                if (unlikely(tmp_args_element_value_16 == NULL)) {
                    tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
                }

                if (tmp_args_element_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_15);

                    exception_lineno = 1353;

                    goto tuple_build_exception_8;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1353;
                tmp_args_element_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_16);
                if (tmp_args_element_value_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_15);

                    exception_lineno = 1353;

                    goto tuple_build_exception_8;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1353;
                tmp_tuple_element_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_15);
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_15);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1353;

                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            PyList_SET_ITEM(tmp_dict_seq_1, 7, tmp_list_element_1);
            tmp_tuple_element_9 = mod_consts[123];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_17;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_args_element_value_17;
                PyObject *tmp_called_value_18;
                PyObject *tmp_args_element_value_18;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_9);
                tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_9 == NULL)) {
                    tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1354;

                    goto tuple_build_exception_9;
                }
                tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[115]);
                if (tmp_called_value_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1354;

                    goto tuple_build_exception_9;
                }
                tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_18 == NULL)) {
                    tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_17);

                    exception_lineno = 1354;

                    goto tuple_build_exception_9;
                }
                tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[59]);

                if (unlikely(tmp_args_element_value_18 == NULL)) {
                    tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
                }

                if (tmp_args_element_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_17);

                    exception_lineno = 1354;

                    goto tuple_build_exception_9;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1354;
                tmp_args_element_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_18);
                if (tmp_args_element_value_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_17);

                    exception_lineno = 1354;

                    goto tuple_build_exception_9;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1354;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_17);
                Py_DECREF(tmp_called_value_17);
                Py_DECREF(tmp_args_element_value_17);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1354;

                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            PyList_SET_ITEM(tmp_dict_seq_1, 8, tmp_list_element_1);
            tmp_tuple_element_10 = mod_consts[124];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_19;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_args_element_value_19;
                PyObject *tmp_called_value_20;
                PyObject *tmp_args_element_value_20;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_10);
                tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_10 == NULL)) {
                    tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1355;

                    goto tuple_build_exception_10;
                }
                tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[115]);
                if (tmp_called_value_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1355;

                    goto tuple_build_exception_10;
                }
                tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_20 == NULL)) {
                    tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_19);

                    exception_lineno = 1355;

                    goto tuple_build_exception_10;
                }
                tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[57]);

                if (unlikely(tmp_args_element_value_20 == NULL)) {
                    tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
                }

                if (tmp_args_element_value_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_19);

                    exception_lineno = 1355;

                    goto tuple_build_exception_10;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1355;
                tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_20);
                if (tmp_args_element_value_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_19);

                    exception_lineno = 1355;

                    goto tuple_build_exception_10;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1355;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_19);
                Py_DECREF(tmp_called_value_19);
                Py_DECREF(tmp_args_element_value_19);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1355;

                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            PyList_SET_ITEM(tmp_dict_seq_1, 9, tmp_list_element_1);
            tmp_tuple_element_11 = mod_consts[125];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_21;
                PyObject *tmp_expression_value_11;
                PyObject *tmp_args_element_value_21;
                PyObject *tmp_called_value_22;
                PyObject *tmp_args_element_value_22;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_11);
                tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_11 == NULL)) {
                    tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1356;

                    goto tuple_build_exception_11;
                }
                tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[115]);
                if (tmp_called_value_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1356;

                    goto tuple_build_exception_11;
                }
                tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_22 == NULL)) {
                    tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_21);

                    exception_lineno = 1356;

                    goto tuple_build_exception_11;
                }
                tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[31]);

                if (unlikely(tmp_args_element_value_22 == NULL)) {
                    tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                }

                if (tmp_args_element_value_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_21);

                    exception_lineno = 1356;

                    goto tuple_build_exception_11;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1356;
                tmp_args_element_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_22);
                if (tmp_args_element_value_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_21);

                    exception_lineno = 1356;

                    goto tuple_build_exception_11;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1356;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_21);
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_21);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1356;

                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            PyList_SET_ITEM(tmp_dict_seq_1, 10, tmp_list_element_1);
            tmp_tuple_element_12 = mod_consts[126];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_23;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_args_element_value_23;
                PyObject *tmp_called_value_24;
                PyObject *tmp_args_element_value_24;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_12);
                tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_12 == NULL)) {
                    tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1357;

                    goto tuple_build_exception_12;
                }
                tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[115]);
                if (tmp_called_value_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1357;

                    goto tuple_build_exception_12;
                }
                tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_24 == NULL)) {
                    tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_23);

                    exception_lineno = 1357;

                    goto tuple_build_exception_12;
                }
                tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[33]);

                if (unlikely(tmp_args_element_value_24 == NULL)) {
                    tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
                }

                if (tmp_args_element_value_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_23);

                    exception_lineno = 1357;

                    goto tuple_build_exception_12;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1357;
                tmp_args_element_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_24);
                if (tmp_args_element_value_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_23);

                    exception_lineno = 1357;

                    goto tuple_build_exception_12;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1357;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_23);
                Py_DECREF(tmp_called_value_23);
                Py_DECREF(tmp_args_element_value_23);
                if (tmp_tuple_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1357;

                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_12);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            PyList_SET_ITEM(tmp_dict_seq_1, 11, tmp_list_element_1);
            tmp_tuple_element_13 = mod_consts[127];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_25;
                PyObject *tmp_expression_value_13;
                PyObject *tmp_args_element_value_25;
                PyObject *tmp_called_value_26;
                PyObject *tmp_args_element_value_26;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_13);
                tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_13 == NULL)) {
                    tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1358;

                    goto tuple_build_exception_13;
                }
                tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[115]);
                if (tmp_called_value_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1358;

                    goto tuple_build_exception_13;
                }
                tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_26 == NULL)) {
                    tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_25);

                    exception_lineno = 1358;

                    goto tuple_build_exception_13;
                }
                tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[35]);

                if (unlikely(tmp_args_element_value_26 == NULL)) {
                    tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
                }

                if (tmp_args_element_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_25);

                    exception_lineno = 1358;

                    goto tuple_build_exception_13;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1358;
                tmp_args_element_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_26);
                if (tmp_args_element_value_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_25);

                    exception_lineno = 1358;

                    goto tuple_build_exception_13;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1358;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_25);
                Py_DECREF(tmp_called_value_25);
                Py_DECREF(tmp_args_element_value_25);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1358;

                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_13);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            PyList_SET_ITEM(tmp_dict_seq_1, 12, tmp_list_element_1);
            tmp_tuple_element_14 = mod_consts[128];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_27;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_args_element_value_27;
                PyObject *tmp_called_value_28;
                PyObject *tmp_args_element_value_28;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_14);
                tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_14 == NULL)) {
                    tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1359;

                    goto tuple_build_exception_14;
                }
                tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[115]);
                if (tmp_called_value_27 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1359;

                    goto tuple_build_exception_14;
                }
                tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_28 == NULL)) {
                    tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_27);

                    exception_lineno = 1359;

                    goto tuple_build_exception_14;
                }
                tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[37]);

                if (unlikely(tmp_args_element_value_28 == NULL)) {
                    tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
                }

                if (tmp_args_element_value_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_27);

                    exception_lineno = 1359;

                    goto tuple_build_exception_14;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1359;
                tmp_args_element_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_28);
                if (tmp_args_element_value_27 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_27);

                    exception_lineno = 1359;

                    goto tuple_build_exception_14;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1359;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_27);
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_27);
                if (tmp_tuple_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1359;

                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            PyList_SET_ITEM(tmp_dict_seq_1, 13, tmp_list_element_1);
            tmp_tuple_element_15 = mod_consts[129];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_29;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_args_element_value_29;
                PyObject *tmp_called_value_30;
                PyObject *tmp_args_element_value_30;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_15);
                tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_15 == NULL)) {
                    tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1360;

                    goto tuple_build_exception_15;
                }
                tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[115]);
                if (tmp_called_value_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1360;

                    goto tuple_build_exception_15;
                }
                tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_30 == NULL)) {
                    tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_29);

                    exception_lineno = 1360;

                    goto tuple_build_exception_15;
                }
                tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[39]);

                if (unlikely(tmp_args_element_value_30 == NULL)) {
                    tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
                }

                if (tmp_args_element_value_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_29);

                    exception_lineno = 1360;

                    goto tuple_build_exception_15;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1360;
                tmp_args_element_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_30);
                if (tmp_args_element_value_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_29);

                    exception_lineno = 1360;

                    goto tuple_build_exception_15;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1360;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_29);
                Py_DECREF(tmp_called_value_29);
                Py_DECREF(tmp_args_element_value_29);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1360;

                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            PyList_SET_ITEM(tmp_dict_seq_1, 14, tmp_list_element_1);
            tmp_tuple_element_16 = mod_consts[130];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_31;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_args_element_value_31;
                PyObject *tmp_called_value_32;
                PyObject *tmp_args_element_value_32;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_16);
                tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_16 == NULL)) {
                    tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1361;

                    goto tuple_build_exception_16;
                }
                tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[115]);
                if (tmp_called_value_31 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1361;

                    goto tuple_build_exception_16;
                }
                tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_32 == NULL)) {
                    tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_31);

                    exception_lineno = 1361;

                    goto tuple_build_exception_16;
                }
                tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[47]);

                if (unlikely(tmp_args_element_value_32 == NULL)) {
                    tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
                }

                if (tmp_args_element_value_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_31);

                    exception_lineno = 1361;

                    goto tuple_build_exception_16;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1361;
                tmp_args_element_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_32);
                if (tmp_args_element_value_31 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_31);

                    exception_lineno = 1361;

                    goto tuple_build_exception_16;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1361;
                tmp_tuple_element_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_31);
                Py_DECREF(tmp_called_value_31);
                Py_DECREF(tmp_args_element_value_31);
                if (tmp_tuple_element_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1361;

                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_16);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            PyList_SET_ITEM(tmp_dict_seq_1, 15, tmp_list_element_1);
            tmp_tuple_element_17 = mod_consts[131];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_33;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_args_element_value_33;
                PyObject *tmp_called_value_34;
                PyObject *tmp_args_element_value_34;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_17);
                tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_17 == NULL)) {
                    tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1362;

                    goto tuple_build_exception_17;
                }
                tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[115]);
                if (tmp_called_value_33 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1362;

                    goto tuple_build_exception_17;
                }
                tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_34 == NULL)) {
                    tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_33);

                    exception_lineno = 1362;

                    goto tuple_build_exception_17;
                }
                tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[49]);

                if (unlikely(tmp_args_element_value_34 == NULL)) {
                    tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                }

                if (tmp_args_element_value_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_33);

                    exception_lineno = 1362;

                    goto tuple_build_exception_17;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1362;
                tmp_args_element_value_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_34);
                if (tmp_args_element_value_33 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_33);

                    exception_lineno = 1362;

                    goto tuple_build_exception_17;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1362;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_33);
                Py_DECREF(tmp_called_value_33);
                Py_DECREF(tmp_args_element_value_33);
                if (tmp_tuple_element_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1362;

                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_17);
            }
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            PyList_SET_ITEM(tmp_dict_seq_1, 16, tmp_list_element_1);
            tmp_tuple_element_18 = mod_consts[132];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_35;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_args_element_value_35;
                PyObject *tmp_called_value_36;
                PyObject *tmp_args_element_value_36;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_18);
                tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_18 == NULL)) {
                    tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1363;

                    goto tuple_build_exception_18;
                }
                tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[115]);
                if (tmp_called_value_35 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1363;

                    goto tuple_build_exception_18;
                }
                tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_36 == NULL)) {
                    tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_36 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_35);

                    exception_lineno = 1363;

                    goto tuple_build_exception_18;
                }
                tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[51]);

                if (unlikely(tmp_args_element_value_36 == NULL)) {
                    tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
                }

                if (tmp_args_element_value_36 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_35);

                    exception_lineno = 1363;

                    goto tuple_build_exception_18;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1363;
                tmp_args_element_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_36);
                if (tmp_args_element_value_35 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_35);

                    exception_lineno = 1363;

                    goto tuple_build_exception_18;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1363;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_35);
                Py_DECREF(tmp_called_value_35);
                Py_DECREF(tmp_args_element_value_35);
                if (tmp_tuple_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1363;

                    goto tuple_build_exception_18;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_18);
            }
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            PyList_SET_ITEM(tmp_dict_seq_1, 17, tmp_list_element_1);
            tmp_tuple_element_19 = mod_consts[133];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_37;
                PyObject *tmp_expression_value_19;
                PyObject *tmp_args_element_value_37;
                PyObject *tmp_called_value_38;
                PyObject *tmp_args_element_value_38;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_19);
                tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_19 == NULL)) {
                    tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1364;

                    goto tuple_build_exception_19;
                }
                tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[115]);
                if (tmp_called_value_37 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1364;

                    goto tuple_build_exception_19;
                }
                tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_38 == NULL)) {
                    tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_38 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_37);

                    exception_lineno = 1364;

                    goto tuple_build_exception_19;
                }
                tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[55]);

                if (unlikely(tmp_args_element_value_38 == NULL)) {
                    tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
                }

                if (tmp_args_element_value_38 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_37);

                    exception_lineno = 1364;

                    goto tuple_build_exception_19;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1364;
                tmp_args_element_value_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_38);
                if (tmp_args_element_value_37 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_37);

                    exception_lineno = 1364;

                    goto tuple_build_exception_19;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1364;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_37);
                Py_DECREF(tmp_called_value_37);
                Py_DECREF(tmp_args_element_value_37);
                if (tmp_tuple_element_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1364;

                    goto tuple_build_exception_19;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_19);
            }
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            PyList_SET_ITEM(tmp_dict_seq_1, 18, tmp_list_element_1);
            tmp_tuple_element_20 = mod_consts[134];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_39;
                PyObject *tmp_expression_value_20;
                PyObject *tmp_args_element_value_39;
                PyObject *tmp_called_value_40;
                PyObject *tmp_args_element_value_40;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_20);
                tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_20 == NULL)) {
                    tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1365;

                    goto tuple_build_exception_20;
                }
                tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[115]);
                if (tmp_called_value_39 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1365;

                    goto tuple_build_exception_20;
                }
                tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_40 == NULL)) {
                    tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_40 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_39);

                    exception_lineno = 1365;

                    goto tuple_build_exception_20;
                }
                tmp_args_element_value_40 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[53]);

                if (unlikely(tmp_args_element_value_40 == NULL)) {
                    tmp_args_element_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
                }

                if (tmp_args_element_value_40 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_39);

                    exception_lineno = 1365;

                    goto tuple_build_exception_20;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1365;
                tmp_args_element_value_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_40);
                if (tmp_args_element_value_39 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_39);

                    exception_lineno = 1365;

                    goto tuple_build_exception_20;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1365;
                tmp_tuple_element_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_39);
                Py_DECREF(tmp_called_value_39);
                Py_DECREF(tmp_args_element_value_39);
                if (tmp_tuple_element_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1365;

                    goto tuple_build_exception_20;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_20);
            }
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            PyList_SET_ITEM(tmp_dict_seq_1, 19, tmp_list_element_1);
            tmp_tuple_element_21 = mod_consts[135];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_41;
                PyObject *tmp_expression_value_21;
                PyObject *tmp_args_element_value_41;
                PyObject *tmp_called_value_42;
                PyObject *tmp_args_element_value_42;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_21);
                tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_21 == NULL)) {
                    tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1366;

                    goto tuple_build_exception_21;
                }
                tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[115]);
                if (tmp_called_value_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1366;

                    goto tuple_build_exception_21;
                }
                tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_42 == NULL)) {
                    tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_42 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_41);

                    exception_lineno = 1366;

                    goto tuple_build_exception_21;
                }
                tmp_args_element_value_42 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[63]);

                if (unlikely(tmp_args_element_value_42 == NULL)) {
                    tmp_args_element_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
                }

                if (tmp_args_element_value_42 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_41);

                    exception_lineno = 1366;

                    goto tuple_build_exception_21;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1366;
                tmp_args_element_value_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_42);
                if (tmp_args_element_value_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_41);

                    exception_lineno = 1366;

                    goto tuple_build_exception_21;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1366;
                tmp_tuple_element_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_41);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_args_element_value_41);
                if (tmp_tuple_element_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1366;

                    goto tuple_build_exception_21;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_21);
            }
            goto tuple_build_noexception_21;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_21:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_21:;
            PyList_SET_ITEM(tmp_dict_seq_1, 20, tmp_list_element_1);
            tmp_tuple_element_22 = mod_consts[136];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_43;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_args_element_value_43;
                PyObject *tmp_called_value_44;
                PyObject *tmp_args_element_value_44;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_22);
                tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_22 == NULL)) {
                    tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1367;

                    goto tuple_build_exception_22;
                }
                tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[115]);
                if (tmp_called_value_43 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1367;

                    goto tuple_build_exception_22;
                }
                tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_44 == NULL)) {
                    tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_44 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_43);

                    exception_lineno = 1367;

                    goto tuple_build_exception_22;
                }
                tmp_args_element_value_44 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[41]);

                if (unlikely(tmp_args_element_value_44 == NULL)) {
                    tmp_args_element_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                }

                if (tmp_args_element_value_44 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_43);

                    exception_lineno = 1367;

                    goto tuple_build_exception_22;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1367;
                tmp_args_element_value_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_44);
                if (tmp_args_element_value_43 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_43);

                    exception_lineno = 1367;

                    goto tuple_build_exception_22;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1367;
                tmp_tuple_element_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_43);
                Py_DECREF(tmp_called_value_43);
                Py_DECREF(tmp_args_element_value_43);
                if (tmp_tuple_element_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1367;

                    goto tuple_build_exception_22;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_22);
            }
            goto tuple_build_noexception_22;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_22:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_22:;
            PyList_SET_ITEM(tmp_dict_seq_1, 21, tmp_list_element_1);
            tmp_tuple_element_23 = mod_consts[137];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_45;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_args_element_value_45;
                PyObject *tmp_called_value_46;
                PyObject *tmp_args_element_value_46;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_23);
                tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_23 == NULL)) {
                    tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1368;

                    goto tuple_build_exception_23;
                }
                tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[115]);
                if (tmp_called_value_45 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1368;

                    goto tuple_build_exception_23;
                }
                tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_46 == NULL)) {
                    tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_46 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_45);

                    exception_lineno = 1368;

                    goto tuple_build_exception_23;
                }
                tmp_args_element_value_46 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[43]);

                if (unlikely(tmp_args_element_value_46 == NULL)) {
                    tmp_args_element_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
                }

                if (tmp_args_element_value_46 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_45);

                    exception_lineno = 1368;

                    goto tuple_build_exception_23;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1368;
                tmp_args_element_value_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_46);
                if (tmp_args_element_value_45 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_45);

                    exception_lineno = 1368;

                    goto tuple_build_exception_23;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1368;
                tmp_tuple_element_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_45);
                Py_DECREF(tmp_called_value_45);
                Py_DECREF(tmp_args_element_value_45);
                if (tmp_tuple_element_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1368;

                    goto tuple_build_exception_23;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_23);
            }
            goto tuple_build_noexception_23;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_23:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_23:;
            PyList_SET_ITEM(tmp_dict_seq_1, 22, tmp_list_element_1);
            tmp_tuple_element_24 = mod_consts[138];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_47;
                PyObject *tmp_expression_value_24;
                PyObject *tmp_args_element_value_47;
                PyObject *tmp_called_value_48;
                PyObject *tmp_args_element_value_48;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_24);
                tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_24 == NULL)) {
                    tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1369;

                    goto tuple_build_exception_24;
                }
                tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[115]);
                if (tmp_called_value_47 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1369;

                    goto tuple_build_exception_24;
                }
                tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_48 == NULL)) {
                    tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_48 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_47);

                    exception_lineno = 1369;

                    goto tuple_build_exception_24;
                }
                tmp_args_element_value_48 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[45]);

                if (unlikely(tmp_args_element_value_48 == NULL)) {
                    tmp_args_element_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                }

                if (tmp_args_element_value_48 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_47);

                    exception_lineno = 1369;

                    goto tuple_build_exception_24;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1369;
                tmp_args_element_value_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_48);
                if (tmp_args_element_value_47 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_47);

                    exception_lineno = 1369;

                    goto tuple_build_exception_24;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1369;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_47);
                Py_DECREF(tmp_called_value_47);
                Py_DECREF(tmp_args_element_value_47);
                if (tmp_tuple_element_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1369;

                    goto tuple_build_exception_24;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_24);
            }
            goto tuple_build_noexception_24;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_24:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_24:;
            PyList_SET_ITEM(tmp_dict_seq_1, 23, tmp_list_element_1);
            tmp_tuple_element_25 = mod_consts[139];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_49;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_args_element_value_49;
                PyObject *tmp_called_value_50;
                PyObject *tmp_args_element_value_50;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_25);
                tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_25 == NULL)) {
                    tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1370;

                    goto tuple_build_exception_25;
                }
                tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[115]);
                if (tmp_called_value_49 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1370;

                    goto tuple_build_exception_25;
                }
                tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_50 == NULL)) {
                    tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_50 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_49);

                    exception_lineno = 1370;

                    goto tuple_build_exception_25;
                }
                tmp_args_element_value_50 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[65]);

                if (unlikely(tmp_args_element_value_50 == NULL)) {
                    tmp_args_element_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                }

                if (tmp_args_element_value_50 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_49);

                    exception_lineno = 1370;

                    goto tuple_build_exception_25;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1370;
                tmp_args_element_value_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_50);
                if (tmp_args_element_value_49 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_49);

                    exception_lineno = 1370;

                    goto tuple_build_exception_25;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1370;
                tmp_tuple_element_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_49);
                Py_DECREF(tmp_called_value_49);
                Py_DECREF(tmp_args_element_value_49);
                if (tmp_tuple_element_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1370;

                    goto tuple_build_exception_25;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_25);
            }
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_25:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            PyList_SET_ITEM(tmp_dict_seq_1, 24, tmp_list_element_1);
            tmp_tuple_element_26 = mod_consts[140];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_51;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_args_element_value_51;
                PyObject *tmp_called_value_52;
                PyObject *tmp_args_element_value_52;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_26);
                tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_26 == NULL)) {
                    tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1371;

                    goto tuple_build_exception_26;
                }
                tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[115]);
                if (tmp_called_value_51 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1371;

                    goto tuple_build_exception_26;
                }
                tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_52 == NULL)) {
                    tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_52 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_51);

                    exception_lineno = 1371;

                    goto tuple_build_exception_26;
                }
                tmp_args_element_value_52 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[67]);

                if (unlikely(tmp_args_element_value_52 == NULL)) {
                    tmp_args_element_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                }

                if (tmp_args_element_value_52 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_51);

                    exception_lineno = 1371;

                    goto tuple_build_exception_26;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1371;
                tmp_args_element_value_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_52);
                if (tmp_args_element_value_51 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_51);

                    exception_lineno = 1371;

                    goto tuple_build_exception_26;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1371;
                tmp_tuple_element_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_51);
                Py_DECREF(tmp_called_value_51);
                Py_DECREF(tmp_args_element_value_51);
                if (tmp_tuple_element_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1371;

                    goto tuple_build_exception_26;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_26);
            }
            goto tuple_build_noexception_26;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_26:;
            PyList_SET_ITEM(tmp_dict_seq_1, 25, tmp_list_element_1);
            tmp_tuple_element_27 = mod_consts[141];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_53;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_args_element_value_53;
                PyObject *tmp_called_value_54;
                PyObject *tmp_args_element_value_54;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_27);
                tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_27 == NULL)) {
                    tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_27 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1372;

                    goto tuple_build_exception_27;
                }
                tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[115]);
                if (tmp_called_value_53 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1372;

                    goto tuple_build_exception_27;
                }
                tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_54 == NULL)) {
                    tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_54 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_53);

                    exception_lineno = 1372;

                    goto tuple_build_exception_27;
                }
                tmp_args_element_value_54 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[69]);

                if (unlikely(tmp_args_element_value_54 == NULL)) {
                    tmp_args_element_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
                }

                if (tmp_args_element_value_54 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_53);

                    exception_lineno = 1372;

                    goto tuple_build_exception_27;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1372;
                tmp_args_element_value_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_54);
                if (tmp_args_element_value_53 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_53);

                    exception_lineno = 1372;

                    goto tuple_build_exception_27;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1372;
                tmp_tuple_element_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_53, tmp_args_element_value_53);
                Py_DECREF(tmp_called_value_53);
                Py_DECREF(tmp_args_element_value_53);
                if (tmp_tuple_element_27 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1372;

                    goto tuple_build_exception_27;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_27);
            }
            goto tuple_build_noexception_27;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_27:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_27:;
            PyList_SET_ITEM(tmp_dict_seq_1, 26, tmp_list_element_1);
            tmp_tuple_element_28 = mod_consts[142];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_55;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_args_element_value_55;
                PyObject *tmp_called_value_56;
                PyObject *tmp_args_element_value_56;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_28);
                tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_28 == NULL)) {
                    tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1373;

                    goto tuple_build_exception_28;
                }
                tmp_called_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[115]);
                if (tmp_called_value_55 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1373;

                    goto tuple_build_exception_28;
                }
                tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_56 == NULL)) {
                    tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_56 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_55);

                    exception_lineno = 1373;

                    goto tuple_build_exception_28;
                }
                tmp_args_element_value_56 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[71]);

                if (unlikely(tmp_args_element_value_56 == NULL)) {
                    tmp_args_element_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
                }

                if (tmp_args_element_value_56 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_55);

                    exception_lineno = 1373;

                    goto tuple_build_exception_28;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1373;
                tmp_args_element_value_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_56, tmp_args_element_value_56);
                if (tmp_args_element_value_55 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_55);

                    exception_lineno = 1373;

                    goto tuple_build_exception_28;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1373;
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_55, tmp_args_element_value_55);
                Py_DECREF(tmp_called_value_55);
                Py_DECREF(tmp_args_element_value_55);
                if (tmp_tuple_element_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1373;

                    goto tuple_build_exception_28;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_28);
            }
            goto tuple_build_noexception_28;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_28:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_28:;
            PyList_SET_ITEM(tmp_dict_seq_1, 27, tmp_list_element_1);
            tmp_tuple_element_29 = mod_consts[143];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_57;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_args_element_value_57;
                PyObject *tmp_called_value_58;
                PyObject *tmp_args_element_value_58;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_29);
                tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_29 == NULL)) {
                    tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1374;

                    goto tuple_build_exception_29;
                }
                tmp_called_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[115]);
                if (tmp_called_value_57 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1374;

                    goto tuple_build_exception_29;
                }
                tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_58 == NULL)) {
                    tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_58 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_57);

                    exception_lineno = 1374;

                    goto tuple_build_exception_29;
                }
                tmp_args_element_value_58 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_args_element_value_58 == NULL)) {
                    tmp_args_element_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
                }

                if (tmp_args_element_value_58 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_57);

                    exception_lineno = 1374;

                    goto tuple_build_exception_29;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1374;
                tmp_args_element_value_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_58);
                if (tmp_args_element_value_57 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_57);

                    exception_lineno = 1374;

                    goto tuple_build_exception_29;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1374;
                tmp_tuple_element_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_57);
                Py_DECREF(tmp_called_value_57);
                Py_DECREF(tmp_args_element_value_57);
                if (tmp_tuple_element_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1374;

                    goto tuple_build_exception_29;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_29);
            }
            goto tuple_build_noexception_29;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_29:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_29:;
            PyList_SET_ITEM(tmp_dict_seq_1, 28, tmp_list_element_1);
            tmp_tuple_element_30 = mod_consts[144];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_59;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_args_element_value_59;
                PyObject *tmp_called_value_60;
                PyObject *tmp_args_element_value_60;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_30);
                tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_30 == NULL)) {
                    tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1375;

                    goto tuple_build_exception_30;
                }
                tmp_called_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[115]);
                if (tmp_called_value_59 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1375;

                    goto tuple_build_exception_30;
                }
                tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_60 == NULL)) {
                    tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_60 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_59);

                    exception_lineno = 1375;

                    goto tuple_build_exception_30;
                }
                tmp_args_element_value_60 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_args_element_value_60 == NULL)) {
                    tmp_args_element_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
                }

                if (tmp_args_element_value_60 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_59);

                    exception_lineno = 1375;

                    goto tuple_build_exception_30;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1375;
                tmp_args_element_value_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_60, tmp_args_element_value_60);
                if (tmp_args_element_value_59 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_59);

                    exception_lineno = 1375;

                    goto tuple_build_exception_30;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1375;
                tmp_tuple_element_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_59);
                Py_DECREF(tmp_called_value_59);
                Py_DECREF(tmp_args_element_value_59);
                if (tmp_tuple_element_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1375;

                    goto tuple_build_exception_30;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_30);
            }
            goto tuple_build_noexception_30;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_30:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_30:;
            PyList_SET_ITEM(tmp_dict_seq_1, 29, tmp_list_element_1);
            tmp_tuple_element_31 = mod_consts[145];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_61;
                PyObject *tmp_expression_value_31;
                PyObject *tmp_args_element_value_61;
                PyObject *tmp_called_value_62;
                PyObject *tmp_args_element_value_62;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_31);
                tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_31 == NULL)) {
                    tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_31 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1376;

                    goto tuple_build_exception_31;
                }
                tmp_called_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[115]);
                if (tmp_called_value_61 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1376;

                    goto tuple_build_exception_31;
                }
                tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_62 == NULL)) {
                    tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_62 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_61);

                    exception_lineno = 1376;

                    goto tuple_build_exception_31;
                }
                tmp_args_element_value_62 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[77]);

                if (unlikely(tmp_args_element_value_62 == NULL)) {
                    tmp_args_element_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
                }

                if (tmp_args_element_value_62 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_61);

                    exception_lineno = 1376;

                    goto tuple_build_exception_31;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1376;
                tmp_args_element_value_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_62);
                if (tmp_args_element_value_61 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_61);

                    exception_lineno = 1376;

                    goto tuple_build_exception_31;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1376;
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_61, tmp_args_element_value_61);
                Py_DECREF(tmp_called_value_61);
                Py_DECREF(tmp_args_element_value_61);
                if (tmp_tuple_element_31 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1376;

                    goto tuple_build_exception_31;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_31);
            }
            goto tuple_build_noexception_31;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_31:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_31:;
            PyList_SET_ITEM(tmp_dict_seq_1, 30, tmp_list_element_1);
            tmp_tuple_element_32 = mod_consts[146];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_63;
                PyObject *tmp_expression_value_32;
                PyObject *tmp_args_element_value_63;
                PyObject *tmp_called_value_64;
                PyObject *tmp_args_element_value_64;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_32);
                tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_32 == NULL)) {
                    tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1377;

                    goto tuple_build_exception_32;
                }
                tmp_called_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[115]);
                if (tmp_called_value_63 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1377;

                    goto tuple_build_exception_32;
                }
                tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_64 == NULL)) {
                    tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_64 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_63);

                    exception_lineno = 1377;

                    goto tuple_build_exception_32;
                }
                tmp_args_element_value_64 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[79]);

                if (unlikely(tmp_args_element_value_64 == NULL)) {
                    tmp_args_element_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[79]);
                }

                if (tmp_args_element_value_64 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_63);

                    exception_lineno = 1377;

                    goto tuple_build_exception_32;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1377;
                tmp_args_element_value_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_64, tmp_args_element_value_64);
                if (tmp_args_element_value_63 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_63);

                    exception_lineno = 1377;

                    goto tuple_build_exception_32;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1377;
                tmp_tuple_element_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_63, tmp_args_element_value_63);
                Py_DECREF(tmp_called_value_63);
                Py_DECREF(tmp_args_element_value_63);
                if (tmp_tuple_element_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1377;

                    goto tuple_build_exception_32;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_32);
            }
            goto tuple_build_noexception_32;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_32:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_32:;
            PyList_SET_ITEM(tmp_dict_seq_1, 31, tmp_list_element_1);
            tmp_tuple_element_33 = mod_consts[147];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_65;
                PyObject *tmp_expression_value_33;
                PyObject *tmp_args_element_value_65;
                PyObject *tmp_called_value_66;
                PyObject *tmp_args_element_value_66;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_33);
                tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_33 == NULL)) {
                    tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_33 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1378;

                    goto tuple_build_exception_33;
                }
                tmp_called_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[115]);
                if (tmp_called_value_65 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1378;

                    goto tuple_build_exception_33;
                }
                tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_66 == NULL)) {
                    tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_66 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_65);

                    exception_lineno = 1378;

                    goto tuple_build_exception_33;
                }
                tmp_args_element_value_66 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[81]);

                if (unlikely(tmp_args_element_value_66 == NULL)) {
                    tmp_args_element_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
                }

                if (tmp_args_element_value_66 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_65);

                    exception_lineno = 1378;

                    goto tuple_build_exception_33;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1378;
                tmp_args_element_value_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_66, tmp_args_element_value_66);
                if (tmp_args_element_value_65 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_65);

                    exception_lineno = 1378;

                    goto tuple_build_exception_33;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1378;
                tmp_tuple_element_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_65, tmp_args_element_value_65);
                Py_DECREF(tmp_called_value_65);
                Py_DECREF(tmp_args_element_value_65);
                if (tmp_tuple_element_33 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1378;

                    goto tuple_build_exception_33;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_33);
            }
            goto tuple_build_noexception_33;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_33:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_33:;
            PyList_SET_ITEM(tmp_dict_seq_1, 32, tmp_list_element_1);
            tmp_tuple_element_34 = mod_consts[148];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_67;
                PyObject *tmp_expression_value_34;
                PyObject *tmp_args_element_value_67;
                PyObject *tmp_called_value_68;
                PyObject *tmp_args_element_value_68;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_34);
                tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_34 == NULL)) {
                    tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1379;

                    goto tuple_build_exception_34;
                }
                tmp_called_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[115]);
                if (tmp_called_value_67 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1379;

                    goto tuple_build_exception_34;
                }
                tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_68 == NULL)) {
                    tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_68 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_67);

                    exception_lineno = 1379;

                    goto tuple_build_exception_34;
                }
                tmp_args_element_value_68 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[83]);

                if (unlikely(tmp_args_element_value_68 == NULL)) {
                    tmp_args_element_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
                }

                if (tmp_args_element_value_68 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_67);

                    exception_lineno = 1379;

                    goto tuple_build_exception_34;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1379;
                tmp_args_element_value_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_68, tmp_args_element_value_68);
                if (tmp_args_element_value_67 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_67);

                    exception_lineno = 1379;

                    goto tuple_build_exception_34;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1379;
                tmp_tuple_element_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_67, tmp_args_element_value_67);
                Py_DECREF(tmp_called_value_67);
                Py_DECREF(tmp_args_element_value_67);
                if (tmp_tuple_element_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1379;

                    goto tuple_build_exception_34;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_34);
            }
            goto tuple_build_noexception_34;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_34:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_34:;
            PyList_SET_ITEM(tmp_dict_seq_1, 33, tmp_list_element_1);
            tmp_tuple_element_35 = mod_consts[149];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_69;
                PyObject *tmp_expression_value_35;
                PyObject *tmp_args_element_value_69;
                PyObject *tmp_called_value_70;
                PyObject *tmp_args_element_value_70;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_35);
                tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_35 == NULL)) {
                    tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_35 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1380;

                    goto tuple_build_exception_35;
                }
                tmp_called_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[115]);
                if (tmp_called_value_69 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1380;

                    goto tuple_build_exception_35;
                }
                tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_70 == NULL)) {
                    tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_70 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_69);

                    exception_lineno = 1380;

                    goto tuple_build_exception_35;
                }
                tmp_args_element_value_70 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[85]);

                if (unlikely(tmp_args_element_value_70 == NULL)) {
                    tmp_args_element_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
                }

                if (tmp_args_element_value_70 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_69);

                    exception_lineno = 1380;

                    goto tuple_build_exception_35;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1380;
                tmp_args_element_value_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_70, tmp_args_element_value_70);
                if (tmp_args_element_value_69 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_69);

                    exception_lineno = 1380;

                    goto tuple_build_exception_35;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1380;
                tmp_tuple_element_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_69, tmp_args_element_value_69);
                Py_DECREF(tmp_called_value_69);
                Py_DECREF(tmp_args_element_value_69);
                if (tmp_tuple_element_35 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1380;

                    goto tuple_build_exception_35;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_35);
            }
            goto tuple_build_noexception_35;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_35:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_35:;
            PyList_SET_ITEM(tmp_dict_seq_1, 34, tmp_list_element_1);
            tmp_tuple_element_36 = mod_consts[150];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_71;
                PyObject *tmp_expression_value_36;
                PyObject *tmp_args_element_value_71;
                PyObject *tmp_called_value_72;
                PyObject *tmp_args_element_value_72;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_36);
                tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_36 == NULL)) {
                    tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_36 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1381;

                    goto tuple_build_exception_36;
                }
                tmp_called_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[115]);
                if (tmp_called_value_71 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1381;

                    goto tuple_build_exception_36;
                }
                tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_72 == NULL)) {
                    tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_72 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_71);

                    exception_lineno = 1381;

                    goto tuple_build_exception_36;
                }
                tmp_args_element_value_72 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[87]);

                if (unlikely(tmp_args_element_value_72 == NULL)) {
                    tmp_args_element_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
                }

                if (tmp_args_element_value_72 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_71);

                    exception_lineno = 1381;

                    goto tuple_build_exception_36;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1381;
                tmp_args_element_value_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_72, tmp_args_element_value_72);
                if (tmp_args_element_value_71 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_71);

                    exception_lineno = 1381;

                    goto tuple_build_exception_36;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1381;
                tmp_tuple_element_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_71, tmp_args_element_value_71);
                Py_DECREF(tmp_called_value_71);
                Py_DECREF(tmp_args_element_value_71);
                if (tmp_tuple_element_36 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1381;

                    goto tuple_build_exception_36;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_36);
            }
            goto tuple_build_noexception_36;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_36:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_36:;
            PyList_SET_ITEM(tmp_dict_seq_1, 35, tmp_list_element_1);
            tmp_tuple_element_37 = mod_consts[151];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_73;
                PyObject *tmp_expression_value_37;
                PyObject *tmp_args_element_value_73;
                PyObject *tmp_called_value_74;
                PyObject *tmp_args_element_value_74;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_37);
                tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_37 == NULL)) {
                    tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_37 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1382;

                    goto tuple_build_exception_37;
                }
                tmp_called_value_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[115]);
                if (tmp_called_value_73 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1382;

                    goto tuple_build_exception_37;
                }
                tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_74 == NULL)) {
                    tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_74 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_73);

                    exception_lineno = 1382;

                    goto tuple_build_exception_37;
                }
                tmp_args_element_value_74 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[89]);

                if (unlikely(tmp_args_element_value_74 == NULL)) {
                    tmp_args_element_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
                }

                if (tmp_args_element_value_74 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_73);

                    exception_lineno = 1382;

                    goto tuple_build_exception_37;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1382;
                tmp_args_element_value_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_74, tmp_args_element_value_74);
                if (tmp_args_element_value_73 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_73);

                    exception_lineno = 1382;

                    goto tuple_build_exception_37;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1382;
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_73, tmp_args_element_value_73);
                Py_DECREF(tmp_called_value_73);
                Py_DECREF(tmp_args_element_value_73);
                if (tmp_tuple_element_37 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1382;

                    goto tuple_build_exception_37;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_37);
            }
            goto tuple_build_noexception_37;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_37:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_37:;
            PyList_SET_ITEM(tmp_dict_seq_1, 36, tmp_list_element_1);
            tmp_tuple_element_38 = mod_consts[152];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_75;
                PyObject *tmp_expression_value_38;
                PyObject *tmp_args_element_value_75;
                PyObject *tmp_called_value_76;
                PyObject *tmp_args_element_value_76;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_38);
                tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_38 == NULL)) {
                    tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_38 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1383;

                    goto tuple_build_exception_38;
                }
                tmp_called_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[115]);
                if (tmp_called_value_75 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1383;

                    goto tuple_build_exception_38;
                }
                tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_76 == NULL)) {
                    tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_76 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_75);

                    exception_lineno = 1383;

                    goto tuple_build_exception_38;
                }
                tmp_args_element_value_76 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[91]);

                if (unlikely(tmp_args_element_value_76 == NULL)) {
                    tmp_args_element_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
                }

                if (tmp_args_element_value_76 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_75);

                    exception_lineno = 1383;

                    goto tuple_build_exception_38;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1383;
                tmp_args_element_value_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_76, tmp_args_element_value_76);
                if (tmp_args_element_value_75 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_75);

                    exception_lineno = 1383;

                    goto tuple_build_exception_38;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1383;
                tmp_tuple_element_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_75, tmp_args_element_value_75);
                Py_DECREF(tmp_called_value_75);
                Py_DECREF(tmp_args_element_value_75);
                if (tmp_tuple_element_38 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1383;

                    goto tuple_build_exception_38;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_38);
            }
            goto tuple_build_noexception_38;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_38:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_38:;
            PyList_SET_ITEM(tmp_dict_seq_1, 37, tmp_list_element_1);
            tmp_tuple_element_39 = mod_consts[153];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_77;
                PyObject *tmp_expression_value_39;
                PyObject *tmp_args_element_value_77;
                PyObject *tmp_called_value_78;
                PyObject *tmp_args_element_value_78;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_39);
                tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_39 == NULL)) {
                    tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_39 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1384;

                    goto tuple_build_exception_39;
                }
                tmp_called_value_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[115]);
                if (tmp_called_value_77 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1384;

                    goto tuple_build_exception_39;
                }
                tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_78 == NULL)) {
                    tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_78 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_77);

                    exception_lineno = 1384;

                    goto tuple_build_exception_39;
                }
                tmp_args_element_value_78 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[93]);

                if (unlikely(tmp_args_element_value_78 == NULL)) {
                    tmp_args_element_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
                }

                if (tmp_args_element_value_78 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_77);

                    exception_lineno = 1384;

                    goto tuple_build_exception_39;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1384;
                tmp_args_element_value_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_78, tmp_args_element_value_78);
                if (tmp_args_element_value_77 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_77);

                    exception_lineno = 1384;

                    goto tuple_build_exception_39;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1384;
                tmp_tuple_element_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_77, tmp_args_element_value_77);
                Py_DECREF(tmp_called_value_77);
                Py_DECREF(tmp_args_element_value_77);
                if (tmp_tuple_element_39 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1384;

                    goto tuple_build_exception_39;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_39);
            }
            goto tuple_build_noexception_39;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_39:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_39:;
            PyList_SET_ITEM(tmp_dict_seq_1, 38, tmp_list_element_1);
            tmp_tuple_element_40 = mod_consts[154];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_79;
                PyObject *tmp_expression_value_40;
                PyObject *tmp_args_element_value_79;
                PyObject *tmp_called_value_80;
                PyObject *tmp_args_element_value_80;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_40);
                tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_40 == NULL)) {
                    tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_40 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1385;

                    goto tuple_build_exception_40;
                }
                tmp_called_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[115]);
                if (tmp_called_value_79 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1385;

                    goto tuple_build_exception_40;
                }
                tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_80 == NULL)) {
                    tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_80 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_79);

                    exception_lineno = 1385;

                    goto tuple_build_exception_40;
                }
                tmp_args_element_value_80 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[95]);

                if (unlikely(tmp_args_element_value_80 == NULL)) {
                    tmp_args_element_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
                }

                if (tmp_args_element_value_80 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_79);

                    exception_lineno = 1385;

                    goto tuple_build_exception_40;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1385;
                tmp_args_element_value_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_80, tmp_args_element_value_80);
                if (tmp_args_element_value_79 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_79);

                    exception_lineno = 1385;

                    goto tuple_build_exception_40;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1385;
                tmp_tuple_element_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_79, tmp_args_element_value_79);
                Py_DECREF(tmp_called_value_79);
                Py_DECREF(tmp_args_element_value_79);
                if (tmp_tuple_element_40 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1385;

                    goto tuple_build_exception_40;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_40);
            }
            goto tuple_build_noexception_40;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_40:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_40:;
            PyList_SET_ITEM(tmp_dict_seq_1, 39, tmp_list_element_1);
            tmp_tuple_element_41 = mod_consts[155];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_81;
                PyObject *tmp_expression_value_41;
                PyObject *tmp_args_element_value_81;
                PyObject *tmp_called_value_82;
                PyObject *tmp_args_element_value_82;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_41);
                tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_41 == NULL)) {
                    tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1386;

                    goto tuple_build_exception_41;
                }
                tmp_called_value_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[115]);
                if (tmp_called_value_81 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1386;

                    goto tuple_build_exception_41;
                }
                tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_82 == NULL)) {
                    tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_82 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_81);

                    exception_lineno = 1386;

                    goto tuple_build_exception_41;
                }
                tmp_args_element_value_82 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[97]);

                if (unlikely(tmp_args_element_value_82 == NULL)) {
                    tmp_args_element_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
                }

                if (tmp_args_element_value_82 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_81);

                    exception_lineno = 1386;

                    goto tuple_build_exception_41;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1386;
                tmp_args_element_value_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_82, tmp_args_element_value_82);
                if (tmp_args_element_value_81 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_81);

                    exception_lineno = 1386;

                    goto tuple_build_exception_41;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1386;
                tmp_tuple_element_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_81, tmp_args_element_value_81);
                Py_DECREF(tmp_called_value_81);
                Py_DECREF(tmp_args_element_value_81);
                if (tmp_tuple_element_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1386;

                    goto tuple_build_exception_41;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_41);
            }
            goto tuple_build_noexception_41;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_41:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_41:;
            PyList_SET_ITEM(tmp_dict_seq_1, 40, tmp_list_element_1);
            tmp_tuple_element_42 = mod_consts[156];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_83;
                PyObject *tmp_expression_value_42;
                PyObject *tmp_args_element_value_83;
                PyObject *tmp_called_value_84;
                PyObject *tmp_args_element_value_84;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_42);
                tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_42 == NULL)) {
                    tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_42 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1387;

                    goto tuple_build_exception_42;
                }
                tmp_called_value_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[115]);
                if (tmp_called_value_83 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1387;

                    goto tuple_build_exception_42;
                }
                tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_84 == NULL)) {
                    tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_84 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_83);

                    exception_lineno = 1387;

                    goto tuple_build_exception_42;
                }
                tmp_args_element_value_84 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[99]);

                if (unlikely(tmp_args_element_value_84 == NULL)) {
                    tmp_args_element_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
                }

                if (tmp_args_element_value_84 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_83);

                    exception_lineno = 1387;

                    goto tuple_build_exception_42;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1387;
                tmp_args_element_value_83 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_84, tmp_args_element_value_84);
                if (tmp_args_element_value_83 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_83);

                    exception_lineno = 1387;

                    goto tuple_build_exception_42;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1387;
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_83, tmp_args_element_value_83);
                Py_DECREF(tmp_called_value_83);
                Py_DECREF(tmp_args_element_value_83);
                if (tmp_tuple_element_42 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1387;

                    goto tuple_build_exception_42;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_42);
            }
            goto tuple_build_noexception_42;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_42:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_42:;
            PyList_SET_ITEM(tmp_dict_seq_1, 41, tmp_list_element_1);
            tmp_tuple_element_43 = mod_consts[157];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_85;
                PyObject *tmp_expression_value_43;
                PyObject *tmp_args_element_value_85;
                PyObject *tmp_called_value_86;
                PyObject *tmp_args_element_value_86;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_43);
                tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_43 == NULL)) {
                    tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_43 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1388;

                    goto tuple_build_exception_43;
                }
                tmp_called_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[115]);
                if (tmp_called_value_85 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1388;

                    goto tuple_build_exception_43;
                }
                tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_86 == NULL)) {
                    tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_86 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_85);

                    exception_lineno = 1388;

                    goto tuple_build_exception_43;
                }
                tmp_args_element_value_86 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[101]);

                if (unlikely(tmp_args_element_value_86 == NULL)) {
                    tmp_args_element_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
                }

                if (tmp_args_element_value_86 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_85);

                    exception_lineno = 1388;

                    goto tuple_build_exception_43;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1388;
                tmp_args_element_value_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_86, tmp_args_element_value_86);
                if (tmp_args_element_value_85 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_85);

                    exception_lineno = 1388;

                    goto tuple_build_exception_43;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1388;
                tmp_tuple_element_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_85, tmp_args_element_value_85);
                Py_DECREF(tmp_called_value_85);
                Py_DECREF(tmp_args_element_value_85);
                if (tmp_tuple_element_43 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1388;

                    goto tuple_build_exception_43;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_43);
            }
            goto tuple_build_noexception_43;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_43:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_43:;
            PyList_SET_ITEM(tmp_dict_seq_1, 42, tmp_list_element_1);
            tmp_tuple_element_44 = mod_consts[158];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_87;
                PyObject *tmp_expression_value_44;
                PyObject *tmp_args_element_value_87;
                PyObject *tmp_called_value_88;
                PyObject *tmp_args_element_value_88;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_44);
                tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_44 == NULL)) {
                    tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_44 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1389;

                    goto tuple_build_exception_44;
                }
                tmp_called_value_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[115]);
                if (tmp_called_value_87 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1389;

                    goto tuple_build_exception_44;
                }
                tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_88 == NULL)) {
                    tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_88 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_87);

                    exception_lineno = 1389;

                    goto tuple_build_exception_44;
                }
                tmp_args_element_value_88 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[103]);

                if (unlikely(tmp_args_element_value_88 == NULL)) {
                    tmp_args_element_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
                }

                if (tmp_args_element_value_88 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_87);

                    exception_lineno = 1389;

                    goto tuple_build_exception_44;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1389;
                tmp_args_element_value_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_88, tmp_args_element_value_88);
                if (tmp_args_element_value_87 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_87);

                    exception_lineno = 1389;

                    goto tuple_build_exception_44;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1389;
                tmp_tuple_element_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_87, tmp_args_element_value_87);
                Py_DECREF(tmp_called_value_87);
                Py_DECREF(tmp_args_element_value_87);
                if (tmp_tuple_element_44 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1389;

                    goto tuple_build_exception_44;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_44);
            }
            goto tuple_build_noexception_44;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_44:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_44:;
            PyList_SET_ITEM(tmp_dict_seq_1, 43, tmp_list_element_1);
            tmp_tuple_element_45 = mod_consts[159];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_89;
                PyObject *tmp_expression_value_45;
                PyObject *tmp_args_element_value_89;
                PyObject *tmp_called_value_90;
                PyObject *tmp_args_element_value_90;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_45);
                tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_45 == NULL)) {
                    tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_45 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1390;

                    goto tuple_build_exception_45;
                }
                tmp_called_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[115]);
                if (tmp_called_value_89 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1390;

                    goto tuple_build_exception_45;
                }
                tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_90 == NULL)) {
                    tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_90 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_89);

                    exception_lineno = 1390;

                    goto tuple_build_exception_45;
                }
                tmp_args_element_value_90 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[105]);

                if (unlikely(tmp_args_element_value_90 == NULL)) {
                    tmp_args_element_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
                }

                if (tmp_args_element_value_90 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_89);

                    exception_lineno = 1390;

                    goto tuple_build_exception_45;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1390;
                tmp_args_element_value_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_90, tmp_args_element_value_90);
                if (tmp_args_element_value_89 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_89);

                    exception_lineno = 1390;

                    goto tuple_build_exception_45;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1390;
                tmp_tuple_element_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_89, tmp_args_element_value_89);
                Py_DECREF(tmp_called_value_89);
                Py_DECREF(tmp_args_element_value_89);
                if (tmp_tuple_element_45 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1390;

                    goto tuple_build_exception_45;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_45);
            }
            goto tuple_build_noexception_45;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_45:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_45:;
            PyList_SET_ITEM(tmp_dict_seq_1, 44, tmp_list_element_1);
            tmp_tuple_element_46 = mod_consts[160];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_91;
                PyObject *tmp_expression_value_46;
                PyObject *tmp_args_element_value_91;
                PyObject *tmp_called_value_92;
                PyObject *tmp_args_element_value_92;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_46);
                tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_46 == NULL)) {
                    tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_46 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1391;

                    goto tuple_build_exception_46;
                }
                tmp_called_value_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[115]);
                if (tmp_called_value_91 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1391;

                    goto tuple_build_exception_46;
                }
                tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_92 == NULL)) {
                    tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_92 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_91);

                    exception_lineno = 1391;

                    goto tuple_build_exception_46;
                }
                tmp_args_element_value_92 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[107]);

                if (unlikely(tmp_args_element_value_92 == NULL)) {
                    tmp_args_element_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
                }

                if (tmp_args_element_value_92 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_91);

                    exception_lineno = 1391;

                    goto tuple_build_exception_46;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1391;
                tmp_args_element_value_91 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_92, tmp_args_element_value_92);
                if (tmp_args_element_value_91 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_91);

                    exception_lineno = 1391;

                    goto tuple_build_exception_46;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1391;
                tmp_tuple_element_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_91, tmp_args_element_value_91);
                Py_DECREF(tmp_called_value_91);
                Py_DECREF(tmp_args_element_value_91);
                if (tmp_tuple_element_46 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1391;

                    goto tuple_build_exception_46;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_46);
            }
            goto tuple_build_noexception_46;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_46:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_46:;
            PyList_SET_ITEM(tmp_dict_seq_1, 45, tmp_list_element_1);
            tmp_tuple_element_47 = mod_consts[161];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_93;
                PyObject *tmp_expression_value_47;
                PyObject *tmp_args_element_value_93;
                PyObject *tmp_called_value_94;
                PyObject *tmp_args_element_value_94;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_47);
                tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_47 == NULL)) {
                    tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_47 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1392;

                    goto tuple_build_exception_47;
                }
                tmp_called_value_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[115]);
                if (tmp_called_value_93 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1392;

                    goto tuple_build_exception_47;
                }
                tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_94 == NULL)) {
                    tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_94 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_93);

                    exception_lineno = 1392;

                    goto tuple_build_exception_47;
                }
                tmp_args_element_value_94 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[109]);

                if (unlikely(tmp_args_element_value_94 == NULL)) {
                    tmp_args_element_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
                }

                if (tmp_args_element_value_94 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_93);

                    exception_lineno = 1392;

                    goto tuple_build_exception_47;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1392;
                tmp_args_element_value_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_94, tmp_args_element_value_94);
                if (tmp_args_element_value_93 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_93);

                    exception_lineno = 1392;

                    goto tuple_build_exception_47;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1392;
                tmp_tuple_element_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_93, tmp_args_element_value_93);
                Py_DECREF(tmp_called_value_93);
                Py_DECREF(tmp_args_element_value_93);
                if (tmp_tuple_element_47 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1392;

                    goto tuple_build_exception_47;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_47);
            }
            goto tuple_build_noexception_47;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_47:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_47:;
            PyList_SET_ITEM(tmp_dict_seq_1, 46, tmp_list_element_1);
            tmp_tuple_element_48 = mod_consts[162];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_95;
                PyObject *tmp_expression_value_48;
                PyObject *tmp_args_element_value_95;
                PyObject *tmp_called_value_96;
                PyObject *tmp_args_element_value_96;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_48);
                tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_48 == NULL)) {
                    tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_48 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1393;

                    goto tuple_build_exception_48;
                }
                tmp_called_value_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[115]);
                if (tmp_called_value_95 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1393;

                    goto tuple_build_exception_48;
                }
                tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_96 == NULL)) {
                    tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_96 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_95);

                    exception_lineno = 1393;

                    goto tuple_build_exception_48;
                }
                tmp_args_element_value_96 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[111]);

                if (unlikely(tmp_args_element_value_96 == NULL)) {
                    tmp_args_element_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
                }

                if (tmp_args_element_value_96 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_95);

                    exception_lineno = 1393;

                    goto tuple_build_exception_48;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1393;
                tmp_args_element_value_95 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_96, tmp_args_element_value_96);
                if (tmp_args_element_value_95 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_95);

                    exception_lineno = 1393;

                    goto tuple_build_exception_48;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1393;
                tmp_tuple_element_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_95, tmp_args_element_value_95);
                Py_DECREF(tmp_called_value_95);
                Py_DECREF(tmp_args_element_value_95);
                if (tmp_tuple_element_48 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1393;

                    goto tuple_build_exception_48;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_48);
            }
            goto tuple_build_noexception_48;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_48:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_48:;
            PyList_SET_ITEM(tmp_dict_seq_1, 47, tmp_list_element_1);
            tmp_tuple_element_49 = mod_consts[163];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_97;
                PyObject *tmp_expression_value_49;
                PyObject *tmp_args_element_value_97;
                PyObject *tmp_called_value_98;
                PyObject *tmp_args_element_value_98;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_49);
                tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_49 == NULL)) {
                    tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_49 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1394;

                    goto tuple_build_exception_49;
                }
                tmp_called_value_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[115]);
                if (tmp_called_value_97 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1394;

                    goto tuple_build_exception_49;
                }
                tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_98 == NULL)) {
                    tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_98 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_97);

                    exception_lineno = 1394;

                    goto tuple_build_exception_49;
                }
                tmp_args_element_value_98 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[61]);

                if (unlikely(tmp_args_element_value_98 == NULL)) {
                    tmp_args_element_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
                }

                if (tmp_args_element_value_98 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_97);

                    exception_lineno = 1394;

                    goto tuple_build_exception_49;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1394;
                tmp_args_element_value_97 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_98, tmp_args_element_value_98);
                if (tmp_args_element_value_97 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_97);

                    exception_lineno = 1394;

                    goto tuple_build_exception_49;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1394;
                tmp_tuple_element_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_97, tmp_args_element_value_97);
                Py_DECREF(tmp_called_value_97);
                Py_DECREF(tmp_args_element_value_97);
                if (tmp_tuple_element_49 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1394;

                    goto tuple_build_exception_49;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_49);
            }
            goto tuple_build_noexception_49;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_49:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_49:;
            PyList_SET_ITEM(tmp_dict_seq_1, 48, tmp_list_element_1);
            tmp_tuple_element_50 = mod_consts[164];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_99;
                PyObject *tmp_expression_value_50;
                PyObject *tmp_args_element_value_99;
                PyObject *tmp_called_value_100;
                PyObject *tmp_args_element_value_100;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_50);
                tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_50 == NULL)) {
                    tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_50 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1395;

                    goto tuple_build_exception_50;
                }
                tmp_called_value_99 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[115]);
                if (tmp_called_value_99 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1395;

                    goto tuple_build_exception_50;
                }
                tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_called_value_100 == NULL)) {
                    tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_called_value_100 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_99);

                    exception_lineno = 1395;

                    goto tuple_build_exception_50;
                }
                tmp_args_element_value_100 = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[113]);

                if (unlikely(tmp_args_element_value_100 == NULL)) {
                    tmp_args_element_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
                }

                if (tmp_args_element_value_100 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_99);

                    exception_lineno = 1395;

                    goto tuple_build_exception_50;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1395;
                tmp_args_element_value_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_100, tmp_args_element_value_100);
                if (tmp_args_element_value_99 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_99);

                    exception_lineno = 1395;

                    goto tuple_build_exception_50;
                }
                frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame.f_lineno = 1395;
                tmp_tuple_element_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_99, tmp_args_element_value_99);
                Py_DECREF(tmp_called_value_99);
                Py_DECREF(tmp_args_element_value_99);
                if (tmp_tuple_element_50 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 1395;

                    goto tuple_build_exception_50;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_50);
            }
            goto tuple_build_noexception_50;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_50:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_50:;
            PyList_SET_ITEM(tmp_dict_seq_1, 49, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_dict_seq_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_assign_source_56 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1345;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_56);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b0a53ba44abad26c6e09ee8f358e8520, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b0a53ba44abad26c6e09ee8f358e8520->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0a53ba44abad26c6e09ee8f358e8520, exception_lineno);
    }



    assertFrameObject(frame_b0a53ba44abad26c6e09ee8f358e8520);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openpyxl.styles.builtins", false);

    Py_INCREF(module_openpyxl$styles$builtins);
    return module_openpyxl$styles$builtins;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openpyxl$styles$builtins, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openpyxl$styles$builtins", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
