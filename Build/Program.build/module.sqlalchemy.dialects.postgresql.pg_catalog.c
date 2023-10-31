/* Generated code for Python module 'sqlalchemy.dialects.postgresql.pg_catalog'
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

/* The "module_sqlalchemy$dialects$postgresql$pg_catalog" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlalchemy$dialects$postgresql$pg_catalog;
PyDictObject *moduledict_sqlalchemy$dialects$postgresql$pg_catalog;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[261];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[261];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("sqlalchemy.dialects.postgresql.pg_catalog"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 261; i++) {
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
void checkModuleConstants_sqlalchemy$dialects$postgresql$pg_catalog(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 261; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9ad142c5bdd577a87f7dbee5c3f23831;
static PyCodeObject *codeobj_ffab6c8fb5915c3e65c37316fb2dc97c;
static PyCodeObject *codeobj_4d7a64ae8822685b3ec5df247e204da1;
static PyCodeObject *codeobj_acc389fc644d43a08526ccf03fa6d48d;
static PyCodeObject *codeobj_c81003a9a96940c026a2ef8ad27325d3;
static PyCodeObject *codeobj_2fdc497835d30674685c4c0eae6f9465;
static PyCodeObject *codeobj_0f05e89a8881dbace5cdffa07bad5ec3;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[256]); CHECK_OBJECT(module_filename_obj);
    codeobj_9ad142c5bdd577a87f7dbee5c3f23831 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[257], mod_consts[257], NULL, NULL, 0, 0, 0);
    codeobj_ffab6c8fb5915c3e65c37316fb2dc97c = MAKE_CODE_OBJECT(module_filename_obj, 38, 0, mod_consts[64], mod_consts[64], mod_consts[258], NULL, 0, 0, 0);
    codeobj_4d7a64ae8822685b3ec5df247e204da1 = MAKE_CODE_OBJECT(module_filename_obj, 28, 0, mod_consts[49], mod_consts[49], mod_consts[258], NULL, 0, 0, 0);
    codeobj_acc389fc644d43a08526ccf03fa6d48d = MAKE_CODE_OBJECT(module_filename_obj, 43, 0, mod_consts[65], mod_consts[65], mod_consts[258], NULL, 0, 0, 0);
    codeobj_c81003a9a96940c026a2ef8ad27325d3 = MAKE_CODE_OBJECT(module_filename_obj, 33, 0, mod_consts[62], mod_consts[62], mod_consts[258], NULL, 0, 0, 0);
    codeobj_2fdc497835d30674685c4c0eae6f9465 = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[0], mod_consts[0], mod_consts[259], NULL, 1, 0, 0);
    codeobj_0f05e89a8881dbace5cdffa07bad5ec3 = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[67], mod_consts[67], mod_consts[260], NULL, 3, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$pg_catalog$$$function__1_result_processor();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$pg_catalog$$$function__1_result_processor$$$function__1_process();


// The module function definitions.
static PyObject *impl_sqlalchemy$dialects$postgresql$pg_catalog$$$function__1_result_processor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dialect = python_pars[1];
    PyObject *par_coltype = python_pars[2];
    PyObject *var_process = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$pg_catalog$$$function__1_result_processor$$$function__1_process();

        assert(var_process == NULL);
        var_process = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_process);
    tmp_return_value = var_process;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_process);
    Py_DECREF(var_process);
    var_process = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dialect);
    Py_DECREF(par_dialect);
    CHECK_OBJECT(par_coltype);
    Py_DECREF(par_coltype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$postgresql$pg_catalog$$$function__1_result_processor$$$function__1_process(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *outline_0_var_p = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_2fdc497835d30674685c4c0eae6f9465;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_2fdc497835d30674685c4c0eae6f9465 = NULL;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_value);
    tmp_return_value = par_value;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;
    branch_no_1:;
    if (isFrameUnusable(cache_frame_2fdc497835d30674685c4c0eae6f9465)) {
        Py_XDECREF(cache_frame_2fdc497835d30674685c4c0eae6f9465);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2fdc497835d30674685c4c0eae6f9465 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2fdc497835d30674685c4c0eae6f9465 = MAKE_FUNCTION_FRAME(tstate, codeobj_2fdc497835d30674685c4c0eae6f9465, module_sqlalchemy$dialects$postgresql$pg_catalog, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2fdc497835d30674685c4c0eae6f9465->m_type_description == NULL);
    frame_2fdc497835d30674685c4c0eae6f9465 = cache_frame_2fdc497835d30674685c4c0eae6f9465;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2fdc497835d30674685c4c0eae6f9465);
    assert(Py_REFCNT(frame_2fdc497835d30674685c4c0eae6f9465) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        frame_2fdc497835d30674685c4c0eae6f9465->m_frame.f_lineno = 53;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[3]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "o";
                exception_lineno = 53;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_p;
            outline_0_var_p = tmp_assign_source_4;
            Py_INCREF(outline_0_var_p);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_p);
        tmp_int_arg_1 = outline_0_var_p;
        tmp_append_value_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_append_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 53;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    goto try_return_handler_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(outline_0_var_p);
    outline_0_var_p = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_0_var_p);
    outline_0_var_p = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    exception_lineno = 53;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2fdc497835d30674685c4c0eae6f9465, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2fdc497835d30674685c4c0eae6f9465->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2fdc497835d30674685c4c0eae6f9465, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2fdc497835d30674685c4c0eae6f9465,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_2fdc497835d30674685c4c0eae6f9465 == cache_frame_2fdc497835d30674685c4c0eae6f9465) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2fdc497835d30674685c4c0eae6f9465);
        cache_frame_2fdc497835d30674685c4c0eae6f9465 = NULL;
    }

    assertFrameObject(frame_2fdc497835d30674685c4c0eae6f9465);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$pg_catalog$$$function__1_result_processor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$pg_catalog$$$function__1_result_processor,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        mod_consts[68],
#endif
        codeobj_0f05e89a8881dbace5cdffa07bad5ec3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$pg_catalog,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$postgresql$pg_catalog$$$function__1_result_processor$$$function__1_process() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$postgresql$pg_catalog$$$function__1_result_processor$$$function__1_process,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[1],
#endif
        codeobj_2fdc497835d30674685c4c0eae6f9465,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$postgresql$pg_catalog,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


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

function_impl_code functable_sqlalchemy$dialects$postgresql$pg_catalog[] = {
    impl_sqlalchemy$dialects$postgresql$pg_catalog$$$function__1_result_processor$$$function__1_process,
    impl_sqlalchemy$dialects$postgresql$pg_catalog$$$function__1_result_processor,
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

    function_impl_code *current = functable_sqlalchemy$dialects$postgresql$pg_catalog;
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

    if (offset > sizeof(functable_sqlalchemy$dialects$postgresql$pg_catalog) || offset < 0) {
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
        functable_sqlalchemy$dialects$postgresql$pg_catalog[offset],
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
        module_sqlalchemy$dialects$postgresql$pg_catalog,
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
PyObject *modulecode_sqlalchemy$dialects$postgresql$pg_catalog(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlalchemy.dialects.postgresql.pg_catalog");

    // Store the module for future use.
    module_sqlalchemy$dialects$postgresql$pg_catalog = module;

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
        PRINT_STRING("sqlalchemy.dialects.postgresql.pg_catalog: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("sqlalchemy.dialects.postgresql.pg_catalog: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlalchemy$dialects$postgresql$pg_catalog\n");

    moduledict_sqlalchemy$dialects$postgresql$pg_catalog = MODULE_DICT(module_sqlalchemy$dialects$postgresql$pg_catalog);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[20]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlalchemy$dialects$postgresql$pg_catalog);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_sqlalchemy$dialects$postgresql$pg_catalog);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    struct Nuitka_FrameObject *frame_9ad142c5bdd577a87f7dbee5c3f23831;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__1_NAME_28 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_4d7a64ae8822685b3ec5df247e204da1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__2_PG_NODE_TREE_33 = NULL;
    struct Nuitka_FrameObject *frame_c81003a9a96940c026a2ef8ad27325d3_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__3_INT2VECTOR_38 = NULL;
    struct Nuitka_FrameObject *frame_ffab6c8fb5915c3e65c37316fb2dc97c_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__4_OIDVECTOR_43 = NULL;
    struct Nuitka_FrameObject *frame_acc389fc644d43a08526ccf03fa6d48d_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__5__SpaceVector_48 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_2);
    }
    frame_9ad142c5bdd577a87f7dbee5c3f23831 = MAKE_MODULE_FRAME(codeobj_9ad142c5bdd577a87f7dbee5c3f23831, module_sqlalchemy$dialects$postgresql$pg_catalog);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9ad142c5bdd577a87f7dbee5c3f23831);
    assert(Py_REFCNT(frame_9ad142c5bdd577a87f7dbee5c3f23831) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[8], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[10];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[11];
        tmp_level_value_1 = mod_consts[12];
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 9;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                mod_consts[13],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[15];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[16];
        tmp_level_value_2 = mod_consts[12];
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 10;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                mod_consts[17],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[17]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[15];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[18];
        tmp_level_value_3 = mod_consts[12];
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 11;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                mod_consts[19],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[20];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[21];
        tmp_level_value_4 = mod_consts[22];
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 12;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                mod_consts[23],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[23]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[20];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[24];
        tmp_level_value_5 = mod_consts[22];
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 13;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                mod_consts[25],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[25]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[20];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[26];
        tmp_level_value_6 = mod_consts[22];
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 14;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                mod_consts[27],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[27]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[20];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[28];
        tmp_level_value_7 = mod_consts[22];
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 15;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                mod_consts[29],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[15];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[30];
        tmp_level_value_8 = mod_consts[22];
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 16;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                mod_consts[31],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[15];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[32];
        tmp_level_value_9 = mod_consts[22];
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 17;
        tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                mod_consts[33],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[33]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[15];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[34];
        tmp_level_value_10 = mod_consts[22];
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 18;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                mod_consts[35],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[35]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[15];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[36];
        tmp_level_value_11 = mod_consts[22];
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 19;
        tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                mod_consts[37],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[37]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[15];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[38];
        tmp_level_value_12 = mod_consts[22];
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 20;
        tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                mod_consts[39],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[39]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[15];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[40];
        tmp_level_value_13 = mod_consts[22];
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 21;
        tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                mod_consts[41],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[41]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[15];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[42];
        tmp_level_value_14 = mod_consts[22];
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 22;
        tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                mod_consts[43],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[15];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[44];
        tmp_level_value_15 = mod_consts[22];
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 23;
        tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                mod_consts[45],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[15];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[46];
        tmp_level_value_16 = mod_consts[22];
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 24;
        tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_sqlalchemy$dialects$postgresql$pg_catalog,
                mod_consts[47],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[47]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        tmp_assign_source_20 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_20, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_21 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_23 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_23;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[48]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[48]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[49];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 28;
        tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_17;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[51];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_17 = mod_consts[52];
        tmp_default_value_1 = mod_consts[53];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_17, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[52]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 28;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__1_NAME_28 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__1_NAME_28, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__1_NAME_28, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_3;
        }
        frame_4d7a64ae8822685b3ec5df247e204da1_2 = MAKE_CLASS_FRAME(tstate, codeobj_4d7a64ae8822685b3ec5df247e204da1, module_sqlalchemy$dialects$postgresql$pg_catalog, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_4d7a64ae8822685b3ec5df247e204da1_2);
        assert(Py_REFCNT(frame_4d7a64ae8822685b3ec5df247e204da1_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_2;
            tmp_called_value_2 = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__1_NAME_28, mod_consts[43]);

            if (tmp_called_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[43]);

                    if (unlikely(tmp_called_value_2 == NULL)) {
                        tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
                    }

                    if (tmp_called_value_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 29;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_4d7a64ae8822685b3ec5df247e204da1_2->m_frame.f_lineno = 29;
            tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[57], 0), mod_consts[58]);
            Py_DECREF(tmp_called_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__1_NAME_28, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__1_NAME_28, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4d7a64ae8822685b3ec5df247e204da1_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4d7a64ae8822685b3ec5df247e204da1_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4d7a64ae8822685b3ec5df247e204da1_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4d7a64ae8822685b3ec5df247e204da1_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_4d7a64ae8822685b3ec5df247e204da1_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__1_NAME_28, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[49];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__1_NAME_28;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 28;
            tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_26 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_26);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__1_NAME_28);
        locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__1_NAME_28 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__1_NAME_28);
        locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__1_NAME_28 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 28;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_26);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_4;
        }
        tmp_assign_source_28 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_28, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_29 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_4;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_7 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[14];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_31 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[48]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[48]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_4;
        }
        tmp_tuple_element_6 = mod_consts[62];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 33;
        tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_10 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_4;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_name_value_18;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[51];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_name_value_18 = mod_consts[52];
        tmp_default_value_2 = mod_consts[53];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_18, tmp_default_value_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[52]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 33;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_33;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__2_PG_NODE_TREE_33 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__2_PG_NODE_TREE_33, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[62];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__2_PG_NODE_TREE_33, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        frame_c81003a9a96940c026a2ef8ad27325d3_3 = MAKE_CLASS_FRAME(tstate, codeobj_c81003a9a96940c026a2ef8ad27325d3, module_sqlalchemy$dialects$postgresql$pg_catalog, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_c81003a9a96940c026a2ef8ad27325d3_3);
        assert(Py_REFCNT(frame_c81003a9a96940c026a2ef8ad27325d3_3) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_5;
            tmp_called_value_5 = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__2_PG_NODE_TREE_33, mod_consts[45]);

            if (tmp_called_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[45]);

                    if (unlikely(tmp_called_value_5 == NULL)) {
                        tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                    }

                    if (tmp_called_value_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 34;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_c81003a9a96940c026a2ef8ad27325d3_3->m_frame.f_lineno = 34;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[58]);
            Py_DECREF(tmp_called_value_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__2_PG_NODE_TREE_33, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__2_PG_NODE_TREE_33, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c81003a9a96940c026a2ef8ad27325d3_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c81003a9a96940c026a2ef8ad27325d3_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c81003a9a96940c026a2ef8ad27325d3_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c81003a9a96940c026a2ef8ad27325d3_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_c81003a9a96940c026a2ef8ad27325d3_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__2_PG_NODE_TREE_33, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[62];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__2_PG_NODE_TREE_33;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 33;
            tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_35;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_34 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__2_PG_NODE_TREE_33);
        locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__2_PG_NODE_TREE_33 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__2_PG_NODE_TREE_33);
        locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__2_PG_NODE_TREE_33 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 33;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_34);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_7;
        }
        tmp_assign_source_36 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_36, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_37 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_7;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_13 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[14];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_39 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_39;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_14 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts[48]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_7;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_15 = tmp_class_creation_3__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[48]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_7;
        }
        tmp_tuple_element_10 = mod_consts[64];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 38;
        tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_16 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_7;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_name_value_19;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[51];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_17 = tmp_class_creation_3__metaclass;
        tmp_name_value_19 = mod_consts[52];
        tmp_default_value_3 = mod_consts[53];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_19, tmp_default_value_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[52]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 38;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_41;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_42;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__3_INT2VECTOR_38 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__3_INT2VECTOR_38, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[64];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__3_INT2VECTOR_38, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_9;
        }
        frame_ffab6c8fb5915c3e65c37316fb2dc97c_4 = MAKE_CLASS_FRAME(tstate, codeobj_ffab6c8fb5915c3e65c37316fb2dc97c, module_sqlalchemy$dialects$postgresql$pg_catalog, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_ffab6c8fb5915c3e65c37316fb2dc97c_4);
        assert(Py_REFCNT(frame_ffab6c8fb5915c3e65c37316fb2dc97c_4) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_8 = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__3_INT2VECTOR_38, mod_consts[13]);

            if (tmp_called_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_value_8 == NULL)) {
                        tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                    }

                    if (tmp_called_value_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 39;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_8);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_1 = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__3_INT2VECTOR_38, mod_consts[41]);

            if (tmp_args_element_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_args_element_value_1 == NULL)) {
                        tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                    }

                    if (tmp_args_element_value_1 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);

                        exception_lineno = 39;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_args_element_value_1);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_ffab6c8fb5915c3e65c37316fb2dc97c_4->m_frame.f_lineno = 39;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__3_INT2VECTOR_38, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__3_INT2VECTOR_38, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ffab6c8fb5915c3e65c37316fb2dc97c_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ffab6c8fb5915c3e65c37316fb2dc97c_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ffab6c8fb5915c3e65c37316fb2dc97c_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ffab6c8fb5915c3e65c37316fb2dc97c_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_ffab6c8fb5915c3e65c37316fb2dc97c_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__3_INT2VECTOR_38, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_9;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_9 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_12 = mod_consts[64];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__3_INT2VECTOR_38;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 38;
            tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_43;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_42 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_42);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__3_INT2VECTOR_38);
        locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__3_INT2VECTOR_38 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__3_INT2VECTOR_38);
        locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__3_INT2VECTOR_38 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 38;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_42);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_13;
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_tuple_element_13 == NULL)) {
            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_tuple_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_10;
        }
        tmp_assign_source_44 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_44, 0, tmp_tuple_element_13);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_45 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_10;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_19 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[14];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_10;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_47 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_47;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_20 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts[48]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_10;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_21 = tmp_class_creation_4__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[48]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_10;
        }
        tmp_tuple_element_14 = mod_consts[65];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_14 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 43;
        tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_22 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_10;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_name_value_20;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[51];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_23 = tmp_class_creation_4__metaclass;
        tmp_name_value_20 = mod_consts[52];
        tmp_default_value_4 = mod_consts[53];
        tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_20, tmp_default_value_4);
        if (tmp_tuple_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_24;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_24 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[52]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 43;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_49;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_50;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__4_OIDVECTOR_43 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__4_OIDVECTOR_43, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__4_OIDVECTOR_43, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_12;
        }
        frame_acc389fc644d43a08526ccf03fa6d48d_5 = MAKE_CLASS_FRAME(tstate, codeobj_acc389fc644d43a08526ccf03fa6d48d, module_sqlalchemy$dialects$postgresql$pg_catalog, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_acc389fc644d43a08526ccf03fa6d48d_5);
        assert(Py_REFCNT(frame_acc389fc644d43a08526ccf03fa6d48d_5) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_11 = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__4_OIDVECTOR_43, mod_consts[13]);

            if (tmp_called_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[13]);

                    if (unlikely(tmp_called_value_11 == NULL)) {
                        tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                    }

                    if (tmp_called_value_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 44;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_11);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_args_element_value_2 = PyObject_GetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__4_OIDVECTOR_43, mod_consts[17]);

            if (tmp_args_element_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_args_element_value_2 == NULL)) {
                        tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
                    }

                    if (tmp_args_element_value_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);

                        exception_lineno = 44;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_args_element_value_2);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_acc389fc644d43a08526ccf03fa6d48d_5->m_frame.f_lineno = 44;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__4_OIDVECTOR_43, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__4_OIDVECTOR_43, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_acc389fc644d43a08526ccf03fa6d48d_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_acc389fc644d43a08526ccf03fa6d48d_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_acc389fc644d43a08526ccf03fa6d48d_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_acc389fc644d43a08526ccf03fa6d48d_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_acc389fc644d43a08526ccf03fa6d48d_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_12;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__4_OIDVECTOR_43, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_12;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_12 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_16 = mod_consts[65];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_16 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__4_OIDVECTOR_43;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 43;
            tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_51;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_50 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_50);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__4_OIDVECTOR_43);
        locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__4_OIDVECTOR_43 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__4_OIDVECTOR_43);
        locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__4_OIDVECTOR_43 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 43;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_50);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_53;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__5__SpaceVector_48 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__5__SpaceVector_48, mod_consts[55], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[66];
        tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__5__SpaceVector_48, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$postgresql$pg_catalog$$$function__1_result_processor();

        tmp_res = PyDict_SetItem(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__5__SpaceVector_48, mod_consts[67], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kwargs_value_9;
            tmp_called_value_13 = (PyObject *)&PyType_Type;
            tmp_tuple_element_17 = mod_consts[66];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_17);
            tmp_tuple_element_17 = mod_consts[69];
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__5__SpaceVector_48;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 48;
            tmp_assign_source_55 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_55;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_54 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_54);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__5__SpaceVector_48);
        locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__5__SpaceVector_48 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__5__SpaceVector_48);
        locals_sqlalchemy$dialects$postgresql$pg_catalog$$$class__5__SpaceVector_48 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 48;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_54);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assign_source_56 == NULL)) {
            tmp_assign_source_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_expression_value_25;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[71]);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_expression_value_26;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        assert(!(tmp_expression_value_26 == NULL));
        tmp_assign_source_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[73]);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_expression_value_27;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[74]);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_expression_value_28;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[75]);
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_expression_value_29;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[76]);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_expression_value_30;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[77]);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_expression_value_31;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[78]);
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_expression_value_32;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[79]);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_expression_value_33;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[80]);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_expression_value_34;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[81]);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_add_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_add_expr_left_1 == NULL)) {
            tmp_add_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        assert(!(tmp_add_expr_left_1 == NULL));
        tmp_add_expr_right_1 = mod_consts[84];
        tmp_assign_source_68 = BINARY_OPERATION_ADD_OBJECT_TUPLE_TUPLE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        assert(!(tmp_assign_source_68 == NULL));
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        tmp_add_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_add_expr_left_3 == NULL)) {
            tmp_add_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        assert(!(tmp_add_expr_left_3 == NULL));
        tmp_add_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_add_expr_right_3 == NULL)) {
            tmp_add_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        assert(!(tmp_add_expr_right_3 == NULL));
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_TUPLE_TUPLE(tmp_add_expr_left_3, tmp_add_expr_right_3);
        assert(!(tmp_add_expr_left_2 == NULL));
        tmp_add_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_add_expr_right_2 == NULL)) {
            tmp_add_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        assert(!(tmp_add_expr_right_2 == NULL));
        tmp_assign_source_71 = BINARY_OPERATION_ADD_OBJECT_TUPLE_TUPLE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        assert(!(tmp_assign_source_71 == NULL));
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 80;
        tmp_assign_source_72 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_14);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_value_10;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_10;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_18 = mod_consts[92];
        tmp_args_value_10 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_args_element_value_8;
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_tuple_element_18 == NULL)) {
                tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
            }

            assert(!(tmp_tuple_element_18 == NULL));
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_18);
            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_16 == NULL)) {
                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto tuple_build_exception_5;
            }
            tmp_args_element_value_3 = mod_consts[93];
            tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_4 == NULL)) {
                tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto tuple_build_exception_5;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 85;
            {
                PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_args_value_10, 2, tmp_tuple_element_18);
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto tuple_build_exception_5;
            }
            tmp_args_element_value_5 = mod_consts[94];
            tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_args_element_value_6 == NULL)) {
                tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_args_element_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto tuple_build_exception_5;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 86;
            {
                PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_args_value_10, 3, tmp_tuple_element_18);
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto tuple_build_exception_5;
            }
            tmp_args_element_value_7 = mod_consts[95];
            tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_8 == NULL)) {
                tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto tuple_build_exception_5;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 87;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_args_value_10, 4, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_args_value_10);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_kwargs_value_10 = DICT_COPY(mod_consts[96]);
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 82;
        tmp_assign_source_73 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_10, tmp_kwargs_value_10);
        Py_DECREF(tmp_args_value_10);
        Py_DECREF(tmp_kwargs_value_10);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_kwargs_value_19;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_19 = mod_consts[97];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(31);
        {
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_11;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_12;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kwargs_value_13;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_value_15;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kwargs_value_14;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_15;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_value_17;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_kwargs_value_16;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_kwargs_value_17;
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_value_19;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kwargs_value_18;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_args_element_value_50;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_51;
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_19);
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_19);
            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_20 == NULL)) {
                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_20 = mod_consts[93];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_20);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_args_value_12);
            goto tuple_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_kwargs_value_11 = DEEP_COPY_DICT(tstate, mod_consts[98]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 94;
            tmp_tuple_element_19 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_12, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_12);
            Py_DECREF(tmp_kwargs_value_11);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 2, tmp_tuple_element_19);
            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_21 == NULL)) {
                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_9 = mod_consts[99];
            tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_args_element_value_10 == NULL)) {
                tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_args_element_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 95;
            {
                PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_21, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 3, tmp_tuple_element_19);
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_11 = mod_consts[100];
            tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_12 == NULL)) {
                tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 96;
            {
                PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_22, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 4, tmp_tuple_element_19);
            tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_23 == NULL)) {
                tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_13 = mod_consts[101];
            tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_14 == NULL)) {
                tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 97;
            {
                PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_23, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 5, tmp_tuple_element_19);
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_15 = mod_consts[102];
            tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_16 == NULL)) {
                tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 98;
            {
                PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_24, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 6, tmp_tuple_element_19);
            tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_25 == NULL)) {
                tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_17 = mod_consts[103];
            tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_18 == NULL)) {
                tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 99;
            {
                PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_25, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 7, tmp_tuple_element_19);
            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_26 == NULL)) {
                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_19 = mod_consts[104];
            tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_20 == NULL)) {
                tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 100;
            {
                PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_26, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 8, tmp_tuple_element_19);
            tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_27 == NULL)) {
                tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_21 = mod_consts[105];
            tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_22 == NULL)) {
                tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 101;
            {
                PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_27, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 9, tmp_tuple_element_19);
            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_28 == NULL)) {
                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_23 = mod_consts[106];
            tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_24 == NULL)) {
                tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 102;
            {
                PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_28, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 10, tmp_tuple_element_19);
            tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_29 == NULL)) {
                tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_25 = mod_consts[107];
            tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_args_element_value_26 == NULL)) {
                tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_args_element_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 103;
            {
                PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_29, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 11, tmp_tuple_element_19);
            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_30 == NULL)) {
                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_27 = mod_consts[108];
            tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_args_element_value_28 == NULL)) {
                tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
            }

            if (tmp_args_element_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 104;
            {
                PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_30, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 12, tmp_tuple_element_19);
            tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_31 == NULL)) {
                tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_21 = mod_consts[109];
            tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_21);
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_21);
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_args_value_13);
            goto tuple_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_kwargs_value_12 = DEEP_COPY_DICT(tstate, mod_consts[110]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 105;
            tmp_tuple_element_19 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_13, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_13);
            Py_DECREF(tmp_kwargs_value_12);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 13, tmp_tuple_element_19);
            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_32 == NULL)) {
                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_29 = mod_consts[111];
            tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_30 == NULL)) {
                tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 106;
            {
                PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_32, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 14, tmp_tuple_element_19);
            tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_33 == NULL)) {
                tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_31 = mod_consts[112];
            tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_32 == NULL)) {
                tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 107;
            {
                PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_33, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 15, tmp_tuple_element_19);
            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_34 == NULL)) {
                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_33 = mod_consts[113];
            tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_34 == NULL)) {
                tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 108;
            {
                PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_34, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 16, tmp_tuple_element_19);
            tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_35 == NULL)) {
                tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_22 = mod_consts[114];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_tuple_element_22 == NULL)) {
                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_22);
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_args_value_14);
            goto tuple_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_kwargs_value_13 = DEEP_COPY_DICT(tstate, mod_consts[115]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 109;
            tmp_tuple_element_19 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_14, tmp_kwargs_value_13);
            Py_DECREF(tmp_args_value_14);
            Py_DECREF(tmp_kwargs_value_13);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 17, tmp_tuple_element_19);
            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_36 == NULL)) {
                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_35 = mod_consts[116];
            tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_36 == NULL)) {
                tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 110;
            {
                PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_36, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 18, tmp_tuple_element_19);
            tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_37 == NULL)) {
                tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_37 = mod_consts[117];
            tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_args_element_value_38 == NULL)) {
                tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
            }

            if (tmp_args_element_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 111;
            {
                PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_37, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 19, tmp_tuple_element_19);
            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_38 == NULL)) {
                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_39 = mod_consts[118];
            tmp_args_element_value_40 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_args_element_value_40 == NULL)) {
                tmp_args_element_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
            }

            if (tmp_args_element_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 112;
            {
                PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_38, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 20, tmp_tuple_element_19);
            tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_39 == NULL)) {
                tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_41 = mod_consts[119];
            tmp_args_element_value_42 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_42 == NULL)) {
                tmp_args_element_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 113;
            {
                PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_39, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 21, tmp_tuple_element_19);
            tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_40 == NULL)) {
                tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_43 = mod_consts[120];
            tmp_args_element_value_44 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_44 == NULL)) {
                tmp_args_element_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 114;
            {
                PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_40, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 22, tmp_tuple_element_19);
            tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_41 == NULL)) {
                tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_45 = mod_consts[121];
            tmp_args_element_value_46 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_46 == NULL)) {
                tmp_args_element_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 115;
            {
                PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_41, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 23, tmp_tuple_element_19);
            tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_42 == NULL)) {
                tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_47 = mod_consts[122];
            tmp_args_element_value_48 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_48 == NULL)) {
                tmp_args_element_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 116;
            {
                PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_42, call_args);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 24, tmp_tuple_element_19);
            tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_43 == NULL)) {
                tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_23 = mod_consts[123];
            tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_23);
            tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_tuple_element_23 == NULL)) {
                tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_tuple_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_23);
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_args_value_15);
            goto tuple_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_kwargs_value_14 = DEEP_COPY_DICT(tstate, mod_consts[124]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 117;
            tmp_tuple_element_19 = CALL_FUNCTION(tstate, tmp_called_value_43, tmp_args_value_15, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_15);
            Py_DECREF(tmp_kwargs_value_14);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 25, tmp_tuple_element_19);
            tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_44 == NULL)) {
                tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_24 = mod_consts[125];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_24);
            tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_tuple_element_24 == NULL)) {
                tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_tuple_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_24);
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_args_value_16);
            goto tuple_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_kwargs_value_15 = DEEP_COPY_DICT(tstate, mod_consts[98]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 118;
            tmp_tuple_element_19 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_16, tmp_kwargs_value_15);
            Py_DECREF(tmp_args_value_16);
            Py_DECREF(tmp_kwargs_value_15);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 26, tmp_tuple_element_19);
            tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_45 == NULL)) {
                tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_25 = mod_consts[126];
            tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_25);
            tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_tuple_element_25 == NULL)) {
                tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_tuple_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_25);
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_args_value_17);
            goto tuple_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_kwargs_value_16 = DEEP_COPY_DICT(tstate, mod_consts[127]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 119;
            tmp_tuple_element_19 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_17, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_17);
            Py_DECREF(tmp_kwargs_value_16);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 27, tmp_tuple_element_19);
            tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_46 == NULL)) {
                tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_26 = mod_consts[128];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_26);
            tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_tuple_element_26 == NULL)) {
                tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_26);
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_args_value_18);
            goto tuple_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_kwargs_value_17 = DEEP_COPY_DICT(tstate, mod_consts[129]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 120;
            tmp_tuple_element_19 = CALL_FUNCTION(tstate, tmp_called_value_46, tmp_args_value_18, tmp_kwargs_value_17);
            Py_DECREF(tmp_args_value_18);
            Py_DECREF(tmp_kwargs_value_17);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 28, tmp_tuple_element_19);
            tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_47 == NULL)) {
                tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_27 = mod_consts[130];
            tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_27);
            tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_27 == NULL)) {
                tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_tuple_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_27);
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_args_value_19);
            goto tuple_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_kwargs_value_18 = DEEP_COPY_DICT(tstate, mod_consts[131]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 121;
            tmp_tuple_element_19 = CALL_FUNCTION(tstate, tmp_called_value_47, tmp_args_value_19, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_19);
            Py_DECREF(tmp_kwargs_value_18);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 29, tmp_tuple_element_19);
            tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_48 == NULL)) {
                tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_49 = mod_consts[132];
            tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_49 == NULL)) {
                tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto tuple_build_exception_6;
            }
            tmp_args_element_value_51 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_args_element_value_51 == NULL)) {
                tmp_args_element_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_args_element_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 122;
            tmp_args_element_value_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_51);
            if (tmp_args_element_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto tuple_build_exception_6;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 122;
            {
                PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50};
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_48, call_args);
            }

            Py_DECREF(tmp_args_element_value_50);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_11, 30, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_args_value_11);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_kwargs_value_19 = DICT_COPY(mod_consts[96]);
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 91;
        tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_11, tmp_kwargs_value_19);
        Py_DECREF(tmp_args_value_11);
        Py_DECREF(tmp_kwargs_value_19);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_50;
        PyObject *tmp_args_value_20;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_kwargs_value_22;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_28 = mod_consts[133];
        tmp_args_value_20 = MAKE_TUPLE_EMPTY(31);
        {
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_value_21;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_kwargs_value_20;
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_args_element_value_53;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_element_value_54;
            PyObject *tmp_args_element_value_55;
            PyObject *tmp_called_value_54;
            PyObject *tmp_args_element_value_56;
            PyObject *tmp_args_element_value_57;
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_element_value_58;
            PyObject *tmp_args_element_value_59;
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_element_value_60;
            PyObject *tmp_args_element_value_61;
            PyObject *tmp_called_value_57;
            PyObject *tmp_args_element_value_62;
            PyObject *tmp_args_element_value_63;
            PyObject *tmp_called_value_58;
            PyObject *tmp_args_element_value_64;
            PyObject *tmp_args_element_value_65;
            PyObject *tmp_called_value_59;
            PyObject *tmp_args_element_value_66;
            PyObject *tmp_args_element_value_67;
            PyObject *tmp_called_value_60;
            PyObject *tmp_args_element_value_68;
            PyObject *tmp_args_element_value_69;
            PyObject *tmp_called_value_61;
            PyObject *tmp_args_element_value_70;
            PyObject *tmp_args_element_value_71;
            PyObject *tmp_called_value_62;
            PyObject *tmp_args_element_value_72;
            PyObject *tmp_args_element_value_73;
            PyObject *tmp_called_value_63;
            PyObject *tmp_args_element_value_74;
            PyObject *tmp_args_element_value_75;
            PyObject *tmp_called_value_64;
            PyObject *tmp_args_element_value_76;
            PyObject *tmp_args_element_value_77;
            PyObject *tmp_called_value_65;
            PyObject *tmp_args_element_value_78;
            PyObject *tmp_args_element_value_79;
            PyObject *tmp_called_value_66;
            PyObject *tmp_args_element_value_80;
            PyObject *tmp_args_element_value_81;
            PyObject *tmp_called_value_67;
            PyObject *tmp_args_element_value_82;
            PyObject *tmp_args_element_value_83;
            PyObject *tmp_called_value_68;
            PyObject *tmp_args_element_value_84;
            PyObject *tmp_args_element_value_85;
            PyObject *tmp_called_value_69;
            PyObject *tmp_args_element_value_86;
            PyObject *tmp_args_element_value_87;
            PyObject *tmp_called_value_70;
            PyObject *tmp_args_element_value_88;
            PyObject *tmp_args_element_value_89;
            PyObject *tmp_called_value_71;
            PyObject *tmp_args_element_value_90;
            PyObject *tmp_args_element_value_91;
            PyObject *tmp_called_value_72;
            PyObject *tmp_args_element_value_92;
            PyObject *tmp_args_element_value_93;
            PyObject *tmp_called_value_73;
            PyObject *tmp_args_element_value_94;
            PyObject *tmp_args_element_value_95;
            PyObject *tmp_called_value_74;
            PyObject *tmp_args_element_value_96;
            PyObject *tmp_args_element_value_97;
            PyObject *tmp_called_value_75;
            PyObject *tmp_args_element_value_98;
            PyObject *tmp_args_element_value_99;
            PyObject *tmp_called_value_76;
            PyObject *tmp_args_element_value_100;
            PyObject *tmp_args_element_value_101;
            PyObject *tmp_called_value_77;
            PyObject *tmp_args_element_value_102;
            PyObject *tmp_args_element_value_103;
            PyObject *tmp_called_value_78;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_kwargs_value_21;
            PyObject *tmp_called_value_79;
            PyObject *tmp_args_element_value_104;
            PyObject *tmp_args_element_value_105;
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_28);
            tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_tuple_element_28 == NULL)) {
                tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_28);
            tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_51 == NULL)) {
                tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto tuple_build_exception_15;
            }
            tmp_tuple_element_29 = mod_consts[93];
            tmp_args_value_21 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_29);
            tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_29 == NULL)) {
                tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_tuple_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_29);
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_args_value_21);
            goto tuple_build_exception_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_kwargs_value_20 = DEEP_COPY_DICT(tstate, mod_consts[98]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 129;
            tmp_tuple_element_28 = CALL_FUNCTION(tstate, tmp_called_value_51, tmp_args_value_21, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_21);
            Py_DECREF(tmp_kwargs_value_20);
            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 2, tmp_tuple_element_28);
            tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_52 == NULL)) {
                tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_52 = mod_consts[134];
            tmp_args_element_value_53 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_args_element_value_53 == NULL)) {
                tmp_args_element_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_args_element_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 130;
            {
                PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_52, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 3, tmp_tuple_element_28);
            tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_53 == NULL)) {
                tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_54 = mod_consts[135];
            tmp_args_element_value_55 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_55 == NULL)) {
                tmp_args_element_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 131;
            {
                PyObject *call_args[] = {tmp_args_element_value_54, tmp_args_element_value_55};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_53, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 4, tmp_tuple_element_28);
            tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_54 == NULL)) {
                tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_56 = mod_consts[136];
            tmp_args_element_value_57 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_57 == NULL)) {
                tmp_args_element_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 132;
            {
                PyObject *call_args[] = {tmp_args_element_value_56, tmp_args_element_value_57};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_54, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 5, tmp_tuple_element_28);
            tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_55 == NULL)) {
                tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_58 = mod_consts[137];
            tmp_args_element_value_59 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_args_element_value_59 == NULL)) {
                tmp_args_element_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
            }

            if (tmp_args_element_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 133;
            {
                PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_55, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 6, tmp_tuple_element_28);
            tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_56 == NULL)) {
                tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_60 = mod_consts[138];
            tmp_args_element_value_61 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_61 == NULL)) {
                tmp_args_element_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 134;
            {
                PyObject *call_args[] = {tmp_args_element_value_60, tmp_args_element_value_61};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_56, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 7, tmp_tuple_element_28);
            tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_57 == NULL)) {
                tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_62 = mod_consts[139];
            tmp_args_element_value_63 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_63 == NULL)) {
                tmp_args_element_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 135;
            {
                PyObject *call_args[] = {tmp_args_element_value_62, tmp_args_element_value_63};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_57, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 8, tmp_tuple_element_28);
            tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_58 == NULL)) {
                tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_64 = mod_consts[140];
            tmp_args_element_value_65 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_65 == NULL)) {
                tmp_args_element_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 136;
            {
                PyObject *call_args[] = {tmp_args_element_value_64, tmp_args_element_value_65};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_58, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 9, tmp_tuple_element_28);
            tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_59 == NULL)) {
                tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_66 = mod_consts[141];
            tmp_args_element_value_67 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_67 == NULL)) {
                tmp_args_element_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 137;
            {
                PyObject *call_args[] = {tmp_args_element_value_66, tmp_args_element_value_67};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_59, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 10, tmp_tuple_element_28);
            tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_60 == NULL)) {
                tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_68 = mod_consts[142];
            tmp_args_element_value_69 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_69 == NULL)) {
                tmp_args_element_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 138;
            {
                PyObject *call_args[] = {tmp_args_element_value_68, tmp_args_element_value_69};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_60, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 11, tmp_tuple_element_28);
            tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_61 == NULL)) {
                tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_70 = mod_consts[143];
            tmp_args_element_value_71 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_71 == NULL)) {
                tmp_args_element_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 139;
            {
                PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_61, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 12, tmp_tuple_element_28);
            tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_62 == NULL)) {
                tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_72 = mod_consts[144];
            tmp_args_element_value_73 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_73 == NULL)) {
                tmp_args_element_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 140;
            {
                PyObject *call_args[] = {tmp_args_element_value_72, tmp_args_element_value_73};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_62, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 13, tmp_tuple_element_28);
            tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_63 == NULL)) {
                tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_74 = mod_consts[145];
            tmp_args_element_value_75 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_75 == NULL)) {
                tmp_args_element_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 141;
            {
                PyObject *call_args[] = {tmp_args_element_value_74, tmp_args_element_value_75};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_63, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 14, tmp_tuple_element_28);
            tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_64 == NULL)) {
                tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_76 = mod_consts[146];
            tmp_args_element_value_77 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_77 == NULL)) {
                tmp_args_element_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 142;
            {
                PyObject *call_args[] = {tmp_args_element_value_76, tmp_args_element_value_77};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_64, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 15, tmp_tuple_element_28);
            tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_65 == NULL)) {
                tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_78 = mod_consts[147];
            tmp_args_element_value_79 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_args_element_value_79 == NULL)) {
                tmp_args_element_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
            }

            if (tmp_args_element_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 143;
            {
                PyObject *call_args[] = {tmp_args_element_value_78, tmp_args_element_value_79};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_65, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 16, tmp_tuple_element_28);
            tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_66 == NULL)) {
                tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_80 = mod_consts[148];
            tmp_args_element_value_81 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_args_element_value_81 == NULL)) {
                tmp_args_element_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
            }

            if (tmp_args_element_value_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 144;
            {
                PyObject *call_args[] = {tmp_args_element_value_80, tmp_args_element_value_81};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_66, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 17, tmp_tuple_element_28);
            tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_67 == NULL)) {
                tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_82 = mod_consts[149];
            tmp_args_element_value_83 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_args_element_value_83 == NULL)) {
                tmp_args_element_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
            }

            if (tmp_args_element_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 145;
            {
                PyObject *call_args[] = {tmp_args_element_value_82, tmp_args_element_value_83};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_67, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 18, tmp_tuple_element_28);
            tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_68 == NULL)) {
                tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_84 = mod_consts[150];
            tmp_args_element_value_85 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_args_element_value_85 == NULL)) {
                tmp_args_element_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
            }

            if (tmp_args_element_value_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 146;
            {
                PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_68, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 19, tmp_tuple_element_28);
            tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_69 == NULL)) {
                tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_86 = mod_consts[151];
            tmp_args_element_value_87 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_args_element_value_87 == NULL)) {
                tmp_args_element_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
            }

            if (tmp_args_element_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 147;
            {
                PyObject *call_args[] = {tmp_args_element_value_86, tmp_args_element_value_87};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_69, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 20, tmp_tuple_element_28);
            tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_70 == NULL)) {
                tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_88 = mod_consts[152];
            tmp_args_element_value_89 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_args_element_value_89 == NULL)) {
                tmp_args_element_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
            }

            if (tmp_args_element_value_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 148;
            {
                PyObject *call_args[] = {tmp_args_element_value_88, tmp_args_element_value_89};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_70, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 21, tmp_tuple_element_28);
            tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_71 == NULL)) {
                tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_90 = mod_consts[153];
            tmp_args_element_value_91 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_args_element_value_91 == NULL)) {
                tmp_args_element_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
            }

            if (tmp_args_element_value_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 149;
            {
                PyObject *call_args[] = {tmp_args_element_value_90, tmp_args_element_value_91};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_71, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 22, tmp_tuple_element_28);
            tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_72 == NULL)) {
                tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_92 = mod_consts[154];
            tmp_args_element_value_93 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_93 == NULL)) {
                tmp_args_element_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 150;
            {
                PyObject *call_args[] = {tmp_args_element_value_92, tmp_args_element_value_93};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_72, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 23, tmp_tuple_element_28);
            tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_73 == NULL)) {
                tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_94 = mod_consts[155];
            tmp_args_element_value_95 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_95 == NULL)) {
                tmp_args_element_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 151;
            {
                PyObject *call_args[] = {tmp_args_element_value_94, tmp_args_element_value_95};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_73, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 24, tmp_tuple_element_28);
            tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_74 == NULL)) {
                tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_96 = mod_consts[156];
            tmp_args_element_value_97 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_97 == NULL)) {
                tmp_args_element_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 152;
            {
                PyObject *call_args[] = {tmp_args_element_value_96, tmp_args_element_value_97};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_74, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 25, tmp_tuple_element_28);
            tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_75 == NULL)) {
                tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_98 = mod_consts[157];
            tmp_args_element_value_99 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_99 == NULL)) {
                tmp_args_element_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 153;
            {
                PyObject *call_args[] = {tmp_args_element_value_98, tmp_args_element_value_99};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_75, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 26, tmp_tuple_element_28);
            tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_76 == NULL)) {
                tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_100 = mod_consts[158];
            tmp_args_element_value_101 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_args_element_value_101 == NULL)) {
                tmp_args_element_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_args_element_value_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 154;
            {
                PyObject *call_args[] = {tmp_args_element_value_100, tmp_args_element_value_101};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_76, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 27, tmp_tuple_element_28);
            tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_77 == NULL)) {
                tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_102 = mod_consts[159];
            tmp_args_element_value_103 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_args_element_value_103 == NULL)) {
                tmp_args_element_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_args_element_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 155;
            {
                PyObject *call_args[] = {tmp_args_element_value_102, tmp_args_element_value_103};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_77, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 28, tmp_tuple_element_28);
            tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_78 == NULL)) {
                tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto tuple_build_exception_15;
            }
            tmp_tuple_element_30 = mod_consts[160];
            tmp_args_value_22 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_30);
            tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_30 == NULL)) {
                tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_30);
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_args_value_22);
            goto tuple_build_exception_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_kwargs_value_21 = DEEP_COPY_DICT(tstate, mod_consts[115]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 156;
            tmp_tuple_element_28 = CALL_FUNCTION(tstate, tmp_called_value_78, tmp_args_value_22, tmp_kwargs_value_21);
            Py_DECREF(tmp_args_value_22);
            Py_DECREF(tmp_kwargs_value_21);
            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 29, tmp_tuple_element_28);
            tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_79 == NULL)) {
                tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto tuple_build_exception_15;
            }
            tmp_args_element_value_104 = mod_consts[161];
            tmp_args_element_value_105 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_args_element_value_105 == NULL)) {
                tmp_args_element_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_args_element_value_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto tuple_build_exception_15;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 157;
            {
                PyObject *call_args[] = {tmp_args_element_value_104, tmp_args_element_value_105};
                tmp_tuple_element_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_79, call_args);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_args_value_20, 30, tmp_tuple_element_28);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_args_value_20);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_kwargs_value_22 = DICT_COPY(mod_consts[96]);
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 126;
        tmp_assign_source_75 = CALL_FUNCTION(tstate, tmp_called_value_50, tmp_args_value_20, tmp_kwargs_value_22);
        Py_DECREF(tmp_args_value_20);
        Py_DECREF(tmp_kwargs_value_22);
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_80;
        PyObject *tmp_args_value_23;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_kwargs_value_28;
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_31 = mod_consts[162];
        tmp_args_value_23 = MAKE_TUPLE_EMPTY(23);
        {
            PyObject *tmp_called_value_81;
            PyObject *tmp_args_element_value_106;
            PyObject *tmp_args_element_value_107;
            PyObject *tmp_called_value_82;
            PyObject *tmp_args_element_value_108;
            PyObject *tmp_args_element_value_109;
            PyObject *tmp_called_value_83;
            PyObject *tmp_args_element_value_110;
            PyObject *tmp_args_element_value_111;
            PyObject *tmp_called_value_84;
            PyObject *tmp_args_value_24;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_kwargs_value_23;
            PyObject *tmp_called_value_85;
            PyObject *tmp_args_element_value_112;
            PyObject *tmp_args_element_value_113;
            PyObject *tmp_called_value_86;
            PyObject *tmp_args_value_25;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_kwargs_value_24;
            PyObject *tmp_called_value_87;
            PyObject *tmp_args_element_value_114;
            PyObject *tmp_args_element_value_115;
            PyObject *tmp_called_value_88;
            PyObject *tmp_args_value_26;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_kwargs_value_25;
            PyObject *tmp_called_value_89;
            PyObject *tmp_args_element_value_116;
            PyObject *tmp_args_element_value_117;
            PyObject *tmp_called_value_90;
            PyObject *tmp_args_element_value_118;
            PyObject *tmp_args_element_value_119;
            PyObject *tmp_called_value_91;
            PyObject *tmp_args_element_value_120;
            PyObject *tmp_args_element_value_121;
            PyObject *tmp_called_value_92;
            PyObject *tmp_args_element_value_122;
            PyObject *tmp_args_element_value_123;
            PyObject *tmp_called_value_93;
            PyObject *tmp_args_element_value_124;
            PyObject *tmp_args_element_value_125;
            PyObject *tmp_called_value_94;
            PyObject *tmp_args_value_27;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_kwargs_value_26;
            PyObject *tmp_called_value_95;
            PyObject *tmp_args_element_value_126;
            PyObject *tmp_args_element_value_127;
            PyObject *tmp_called_value_96;
            PyObject *tmp_args_element_value_128;
            PyObject *tmp_args_element_value_129;
            PyObject *tmp_called_value_97;
            PyObject *tmp_args_value_28;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_kwargs_value_27;
            PyObject *tmp_called_value_98;
            PyObject *tmp_args_element_value_130;
            PyObject *tmp_args_element_value_131;
            PyObject *tmp_called_value_99;
            PyObject *tmp_args_element_value_132;
            PyObject *tmp_args_element_value_133;
            PyObject *tmp_called_value_100;
            PyObject *tmp_args_element_value_134;
            PyObject *tmp_args_element_value_135;
            PyObject *tmp_called_value_101;
            PyObject *tmp_args_element_value_136;
            PyObject *tmp_args_element_value_137;
            PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_31);
            tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_tuple_element_31 == NULL)) {
                tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_31);
            tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_81 == NULL)) {
                tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto tuple_build_exception_18;
            }
            tmp_args_element_value_106 = mod_consts[163];
            tmp_args_element_value_107 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_107 == NULL)) {
                tmp_args_element_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto tuple_build_exception_18;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 164;
            {
                PyObject *call_args[] = {tmp_args_element_value_106, tmp_args_element_value_107};
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_81, call_args);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 2, tmp_tuple_element_31);
            tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_82 == NULL)) {
                tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto tuple_build_exception_18;
            }
            tmp_args_element_value_108 = mod_consts[164];
            tmp_args_element_value_109 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_109 == NULL)) {
                tmp_args_element_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto tuple_build_exception_18;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 165;
            {
                PyObject *call_args[] = {tmp_args_element_value_108, tmp_args_element_value_109};
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_82, call_args);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 3, tmp_tuple_element_31);
            tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_83 == NULL)) {
                tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto tuple_build_exception_18;
            }
            tmp_args_element_value_110 = mod_consts[165];
            tmp_args_element_value_111 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_args_element_value_111 == NULL)) {
                tmp_args_element_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
            }

            if (tmp_args_element_value_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto tuple_build_exception_18;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 166;
            {
                PyObject *call_args[] = {tmp_args_element_value_110, tmp_args_element_value_111};
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_83, call_args);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 4, tmp_tuple_element_31);
            tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_84 == NULL)) {
                tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto tuple_build_exception_18;
            }
            tmp_tuple_element_32 = mod_consts[166];
            tmp_args_value_24 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_32);
            tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_tuple_element_32 == NULL)) {
                tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
            }

            if (tmp_tuple_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_32);
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_args_value_24);
            goto tuple_build_exception_18;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            tmp_kwargs_value_23 = DEEP_COPY_DICT(tstate, mod_consts[131]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 167;
            tmp_tuple_element_31 = CALL_FUNCTION(tstate, tmp_called_value_84, tmp_args_value_24, tmp_kwargs_value_23);
            Py_DECREF(tmp_args_value_24);
            Py_DECREF(tmp_kwargs_value_23);
            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 5, tmp_tuple_element_31);
            tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_85 == NULL)) {
                tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_18;
            }
            tmp_args_element_value_112 = mod_consts[167];
            tmp_args_element_value_113 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_113 == NULL)) {
                tmp_args_element_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_18;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 168;
            {
                PyObject *call_args[] = {tmp_args_element_value_112, tmp_args_element_value_113};
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_85, call_args);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 6, tmp_tuple_element_31);
            tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_86 == NULL)) {
                tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_18;
            }
            tmp_tuple_element_33 = mod_consts[168];
            tmp_args_value_25 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_33);
            tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_tuple_element_33 == NULL)) {
                tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_tuple_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_33);
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_args_value_25);
            goto tuple_build_exception_18;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            tmp_kwargs_value_24 = DEEP_COPY_DICT(tstate, mod_consts[169]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 169;
            tmp_tuple_element_31 = CALL_FUNCTION(tstate, tmp_called_value_86, tmp_args_value_25, tmp_kwargs_value_24);
            Py_DECREF(tmp_args_value_25);
            Py_DECREF(tmp_kwargs_value_24);
            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 7, tmp_tuple_element_31);
            tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_87 == NULL)) {
                tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_18;
            }
            tmp_args_element_value_114 = mod_consts[170];
            tmp_args_element_value_115 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_115 == NULL)) {
                tmp_args_element_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_115 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_18;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 170;
            {
                PyObject *call_args[] = {tmp_args_element_value_114, tmp_args_element_value_115};
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_87, call_args);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 8, tmp_tuple_element_31);
            tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_88 == NULL)) {
                tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_18;
            }
            tmp_tuple_element_34 = mod_consts[171];
            tmp_args_value_26 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_34);
            tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_tuple_element_34 == NULL)) {
                tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_34);
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_21:;
            Py_DECREF(tmp_args_value_26);
            goto tuple_build_exception_18;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            tmp_kwargs_value_25 = DEEP_COPY_DICT(tstate, mod_consts[115]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 171;
            tmp_tuple_element_31 = CALL_FUNCTION(tstate, tmp_called_value_88, tmp_args_value_26, tmp_kwargs_value_25);
            Py_DECREF(tmp_args_value_26);
            Py_DECREF(tmp_kwargs_value_25);
            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 9, tmp_tuple_element_31);
            tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_89 == NULL)) {
                tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto tuple_build_exception_18;
            }
            tmp_args_element_value_116 = mod_consts[172];
            tmp_args_element_value_117 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_117 == NULL)) {
                tmp_args_element_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_117 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto tuple_build_exception_18;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 172;
            {
                PyObject *call_args[] = {tmp_args_element_value_116, tmp_args_element_value_117};
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_89, call_args);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 10, tmp_tuple_element_31);
            tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_90 == NULL)) {
                tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto tuple_build_exception_18;
            }
            tmp_args_element_value_118 = mod_consts[173];
            tmp_args_element_value_119 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_119 == NULL)) {
                tmp_args_element_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_119 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto tuple_build_exception_18;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 173;
            {
                PyObject *call_args[] = {tmp_args_element_value_118, tmp_args_element_value_119};
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_90, call_args);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 11, tmp_tuple_element_31);
            tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_91 == NULL)) {
                tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto tuple_build_exception_18;
            }
            tmp_args_element_value_120 = mod_consts[174];
            tmp_args_element_value_121 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_121 == NULL)) {
                tmp_args_element_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_121 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto tuple_build_exception_18;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 174;
            {
                PyObject *call_args[] = {tmp_args_element_value_120, tmp_args_element_value_121};
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_91, call_args);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 12, tmp_tuple_element_31);
            tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_92 == NULL)) {
                tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto tuple_build_exception_18;
            }
            tmp_args_element_value_122 = mod_consts[175];
            tmp_args_element_value_123 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_123 == NULL)) {
                tmp_args_element_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_123 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto tuple_build_exception_18;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 175;
            {
                PyObject *call_args[] = {tmp_args_element_value_122, tmp_args_element_value_123};
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_92, call_args);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 13, tmp_tuple_element_31);
            tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_93 == NULL)) {
                tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto tuple_build_exception_18;
            }
            tmp_args_element_value_124 = mod_consts[176];
            tmp_args_element_value_125 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_125 == NULL)) {
                tmp_args_element_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_125 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto tuple_build_exception_18;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 176;
            {
                PyObject *call_args[] = {tmp_args_element_value_124, tmp_args_element_value_125};
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_93, call_args);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 14, tmp_tuple_element_31);
            tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_94 == NULL)) {
                tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto tuple_build_exception_18;
            }
            tmp_tuple_element_35 = mod_consts[177];
            tmp_args_value_27 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_35);
            tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_tuple_element_35 == NULL)) {
                tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_tuple_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_35);
            goto tuple_build_noexception_21;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_22:;
            Py_DECREF(tmp_args_value_27);
            goto tuple_build_exception_18;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_21:;
            tmp_kwargs_value_26 = DEEP_COPY_DICT(tstate, mod_consts[98]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 177;
            tmp_tuple_element_31 = CALL_FUNCTION(tstate, tmp_called_value_94, tmp_args_value_27, tmp_kwargs_value_26);
            Py_DECREF(tmp_args_value_27);
            Py_DECREF(tmp_kwargs_value_26);
            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 15, tmp_tuple_element_31);
            tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_95 == NULL)) {
                tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto tuple_build_exception_18;
            }
            tmp_args_element_value_126 = mod_consts[178];
            tmp_args_element_value_127 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_127 == NULL)) {
                tmp_args_element_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_127 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto tuple_build_exception_18;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 178;
            {
                PyObject *call_args[] = {tmp_args_element_value_126, tmp_args_element_value_127};
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_95, call_args);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 16, tmp_tuple_element_31);
            tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_96 == NULL)) {
                tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto tuple_build_exception_18;
            }
            tmp_args_element_value_128 = mod_consts[179];
            tmp_args_element_value_129 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_args_element_value_129 == NULL)) {
                tmp_args_element_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
            }

            if (tmp_args_element_value_129 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto tuple_build_exception_18;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 179;
            {
                PyObject *call_args[] = {tmp_args_element_value_128, tmp_args_element_value_129};
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_96, call_args);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 17, tmp_tuple_element_31);
            tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_97 == NULL)) {
                tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto tuple_build_exception_18;
            }
            tmp_tuple_element_36 = mod_consts[180];
            tmp_args_value_28 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_36);
            tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_tuple_element_36 == NULL)) {
                tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
            }

            if (tmp_tuple_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_36);
            goto tuple_build_noexception_22;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_23:;
            Py_DECREF(tmp_args_value_28);
            goto tuple_build_exception_18;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_22:;
            tmp_kwargs_value_27 = DEEP_COPY_DICT(tstate, mod_consts[115]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 180;
            tmp_tuple_element_31 = CALL_FUNCTION(tstate, tmp_called_value_97, tmp_args_value_28, tmp_kwargs_value_27);
            Py_DECREF(tmp_args_value_28);
            Py_DECREF(tmp_kwargs_value_27);
            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 18, tmp_tuple_element_31);
            tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_98 == NULL)) {
                tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto tuple_build_exception_18;
            }
            tmp_args_element_value_130 = mod_consts[181];
            tmp_args_element_value_131 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_args_element_value_131 == NULL)) {
                tmp_args_element_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
            }

            if (tmp_args_element_value_131 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto tuple_build_exception_18;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 181;
            {
                PyObject *call_args[] = {tmp_args_element_value_130, tmp_args_element_value_131};
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_98, call_args);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 19, tmp_tuple_element_31);
            tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_99 == NULL)) {
                tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto tuple_build_exception_18;
            }
            tmp_args_element_value_132 = mod_consts[182];
            tmp_args_element_value_133 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_args_element_value_133 == NULL)) {
                tmp_args_element_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
            }

            if (tmp_args_element_value_133 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto tuple_build_exception_18;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 182;
            {
                PyObject *call_args[] = {tmp_args_element_value_132, tmp_args_element_value_133};
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_99, call_args);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 20, tmp_tuple_element_31);
            tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_100 == NULL)) {
                tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto tuple_build_exception_18;
            }
            tmp_args_element_value_134 = mod_consts[183];
            tmp_args_element_value_135 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_args_element_value_135 == NULL)) {
                tmp_args_element_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
            }

            if (tmp_args_element_value_135 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto tuple_build_exception_18;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 183;
            {
                PyObject *call_args[] = {tmp_args_element_value_134, tmp_args_element_value_135};
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_100, call_args);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 21, tmp_tuple_element_31);
            tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_101 == NULL)) {
                tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto tuple_build_exception_18;
            }
            tmp_args_element_value_136 = mod_consts[184];
            tmp_args_element_value_137 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_args_element_value_137 == NULL)) {
                tmp_args_element_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
            }

            if (tmp_args_element_value_137 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto tuple_build_exception_18;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 184;
            {
                PyObject *call_args[] = {tmp_args_element_value_136, tmp_args_element_value_137};
                tmp_tuple_element_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_101, call_args);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_args_value_23, 22, tmp_tuple_element_31);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_args_value_23);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_kwargs_value_28 = DICT_COPY(mod_consts[96]);
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 161;
        tmp_assign_source_76 = CALL_FUNCTION(tstate, tmp_called_value_80, tmp_args_value_23, tmp_kwargs_value_28);
        Py_DECREF(tmp_args_value_23);
        Py_DECREF(tmp_kwargs_value_28);
        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_102;
        PyObject *tmp_args_value_29;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_kwargs_value_33;
        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_102 == NULL)) {
            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_37 = mod_consts[185];
        tmp_args_value_29 = MAKE_TUPLE_EMPTY(23);
        {
            PyObject *tmp_called_value_103;
            PyObject *tmp_args_element_value_138;
            PyObject *tmp_args_element_value_139;
            PyObject *tmp_called_value_104;
            PyObject *tmp_args_element_value_140;
            PyObject *tmp_args_element_value_141;
            PyObject *tmp_called_value_105;
            PyObject *tmp_args_element_value_142;
            PyObject *tmp_args_element_value_143;
            PyObject *tmp_called_value_106;
            PyObject *tmp_args_element_value_144;
            PyObject *tmp_args_element_value_145;
            PyObject *tmp_called_value_107;
            PyObject *tmp_args_element_value_146;
            PyObject *tmp_args_element_value_147;
            PyObject *tmp_called_value_108;
            PyObject *tmp_args_element_value_148;
            PyObject *tmp_args_element_value_149;
            PyObject *tmp_called_value_109;
            PyObject *tmp_args_element_value_150;
            PyObject *tmp_args_element_value_151;
            PyObject *tmp_called_value_110;
            PyObject *tmp_args_element_value_152;
            PyObject *tmp_args_element_value_153;
            PyObject *tmp_called_value_111;
            PyObject *tmp_args_element_value_154;
            PyObject *tmp_args_element_value_155;
            PyObject *tmp_called_value_112;
            PyObject *tmp_args_element_value_156;
            PyObject *tmp_args_element_value_157;
            PyObject *tmp_called_value_113;
            PyObject *tmp_args_element_value_158;
            PyObject *tmp_args_element_value_159;
            PyObject *tmp_called_value_114;
            PyObject *tmp_args_element_value_160;
            PyObject *tmp_args_element_value_161;
            PyObject *tmp_called_value_115;
            PyObject *tmp_args_element_value_162;
            PyObject *tmp_args_element_value_163;
            PyObject *tmp_called_value_116;
            PyObject *tmp_args_element_value_164;
            PyObject *tmp_args_element_value_165;
            PyObject *tmp_called_value_117;
            PyObject *tmp_args_value_30;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_kwargs_value_29;
            PyObject *tmp_called_value_118;
            PyObject *tmp_args_value_31;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_kwargs_value_30;
            PyObject *tmp_called_value_119;
            PyObject *tmp_args_value_32;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_kwargs_value_31;
            PyObject *tmp_called_value_120;
            PyObject *tmp_args_element_value_166;
            PyObject *tmp_args_element_value_167;
            PyObject *tmp_called_value_121;
            PyObject *tmp_args_element_value_168;
            PyObject *tmp_args_element_value_169;
            PyObject *tmp_called_value_122;
            PyObject *tmp_args_element_value_170;
            PyObject *tmp_args_element_value_171;
            PyObject *tmp_called_value_123;
            PyObject *tmp_args_value_33;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_kwargs_value_32;
            PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_37);
            tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_tuple_element_37 == NULL)) {
                tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_37);
            tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_103 == NULL)) {
                tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_138 = mod_consts[186];
            tmp_args_element_value_139 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_139 == NULL)) {
                tmp_args_element_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_139 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto tuple_build_exception_24;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 191;
            {
                PyObject *call_args[] = {tmp_args_element_value_138, tmp_args_element_value_139};
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_103, call_args);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 2, tmp_tuple_element_37);
            tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_104 == NULL)) {
                tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_140 = mod_consts[187];
            tmp_args_element_value_141 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_args_element_value_141 == NULL)) {
                tmp_args_element_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_args_element_value_141 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto tuple_build_exception_24;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 192;
            {
                PyObject *call_args[] = {tmp_args_element_value_140, tmp_args_element_value_141};
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_104, call_args);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 3, tmp_tuple_element_37);
            tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_105 == NULL)) {
                tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_142 = mod_consts[188];
            tmp_args_element_value_143 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_143 == NULL)) {
                tmp_args_element_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_143 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto tuple_build_exception_24;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 193;
            {
                PyObject *call_args[] = {tmp_args_element_value_142, tmp_args_element_value_143};
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_105, call_args);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 4, tmp_tuple_element_37);
            tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_106 == NULL)) {
                tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_144 = mod_consts[189];
            tmp_args_element_value_145 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_args_element_value_145 == NULL)) {
                tmp_args_element_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_args_element_value_145 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto tuple_build_exception_24;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 194;
            {
                PyObject *call_args[] = {tmp_args_element_value_144, tmp_args_element_value_145};
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_106, call_args);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 5, tmp_tuple_element_37);
            tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_107 == NULL)) {
                tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_146 = mod_consts[190];
            tmp_args_element_value_147 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_args_element_value_147 == NULL)) {
                tmp_args_element_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
            }

            if (tmp_args_element_value_147 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto tuple_build_exception_24;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 195;
            {
                PyObject *call_args[] = {tmp_args_element_value_146, tmp_args_element_value_147};
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_107, call_args);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 6, tmp_tuple_element_37);
            tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_108 == NULL)) {
                tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_148 = mod_consts[191];
            tmp_args_element_value_149 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_args_element_value_149 == NULL)) {
                tmp_args_element_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
            }

            if (tmp_args_element_value_149 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto tuple_build_exception_24;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 196;
            {
                PyObject *call_args[] = {tmp_args_element_value_148, tmp_args_element_value_149};
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_108, call_args);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 7, tmp_tuple_element_37);
            tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_109 == NULL)) {
                tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_150 = mod_consts[192];
            tmp_args_element_value_151 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_args_element_value_151 == NULL)) {
                tmp_args_element_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_args_element_value_151 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;

                goto tuple_build_exception_24;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 197;
            {
                PyObject *call_args[] = {tmp_args_element_value_150, tmp_args_element_value_151};
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_109, call_args);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 8, tmp_tuple_element_37);
            tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_110 == NULL)) {
                tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_152 = mod_consts[193];
            tmp_args_element_value_153 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_args_element_value_153 == NULL)) {
                tmp_args_element_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_args_element_value_153 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto tuple_build_exception_24;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 198;
            {
                PyObject *call_args[] = {tmp_args_element_value_152, tmp_args_element_value_153};
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_110, call_args);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 9, tmp_tuple_element_37);
            tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_111 == NULL)) {
                tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_154 = mod_consts[194];
            tmp_args_element_value_155 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_args_element_value_155 == NULL)) {
                tmp_args_element_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_args_element_value_155 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto tuple_build_exception_24;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 199;
            {
                PyObject *call_args[] = {tmp_args_element_value_154, tmp_args_element_value_155};
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_111, call_args);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 10, tmp_tuple_element_37);
            tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_112 == NULL)) {
                tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_112 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_156 = mod_consts[195];
            tmp_args_element_value_157 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_157 == NULL)) {
                tmp_args_element_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_157 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto tuple_build_exception_24;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 200;
            {
                PyObject *call_args[] = {tmp_args_element_value_156, tmp_args_element_value_157};
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_112, call_args);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 11, tmp_tuple_element_37);
            tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_113 == NULL)) {
                tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_158 = mod_consts[196];
            tmp_args_element_value_159 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_159 == NULL)) {
                tmp_args_element_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_159 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto tuple_build_exception_24;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 201;
            {
                PyObject *call_args[] = {tmp_args_element_value_158, tmp_args_element_value_159};
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_113, call_args);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 12, tmp_tuple_element_37);
            tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_114 == NULL)) {
                tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_114 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_160 = mod_consts[197];
            tmp_args_element_value_161 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_161 == NULL)) {
                tmp_args_element_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_161 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto tuple_build_exception_24;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 202;
            {
                PyObject *call_args[] = {tmp_args_element_value_160, tmp_args_element_value_161};
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_114, call_args);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 13, tmp_tuple_element_37);
            tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_115 == NULL)) {
                tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_115 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_162 = mod_consts[198];
            tmp_args_element_value_163 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_163 == NULL)) {
                tmp_args_element_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_163 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto tuple_build_exception_24;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 203;
            {
                PyObject *call_args[] = {tmp_args_element_value_162, tmp_args_element_value_163};
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_115, call_args);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 14, tmp_tuple_element_37);
            tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_116 == NULL)) {
                tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_116 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_164 = mod_consts[199];
            tmp_args_element_value_165 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_165 == NULL)) {
                tmp_args_element_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_165 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto tuple_build_exception_24;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 204;
            {
                PyObject *call_args[] = {tmp_args_element_value_164, tmp_args_element_value_165};
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_116, call_args);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 15, tmp_tuple_element_37);
            tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_117 == NULL)) {
                tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_117 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto tuple_build_exception_24;
            }
            tmp_tuple_element_38 = mod_consts[200];
            tmp_args_value_30 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_38);
            tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_tuple_element_38 == NULL)) {
                tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_tuple_element_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_38);
            goto tuple_build_noexception_24;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_25:;
            Py_DECREF(tmp_args_value_30);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_24:;
            tmp_kwargs_value_29 = DEEP_COPY_DICT(tstate, mod_consts[131]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 205;
            tmp_tuple_element_37 = CALL_FUNCTION(tstate, tmp_called_value_117, tmp_args_value_30, tmp_kwargs_value_29);
            Py_DECREF(tmp_args_value_30);
            Py_DECREF(tmp_kwargs_value_29);
            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 16, tmp_tuple_element_37);
            tmp_called_value_118 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_118 == NULL)) {
                tmp_called_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_118 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto tuple_build_exception_24;
            }
            tmp_tuple_element_39 = mod_consts[201];
            tmp_args_value_31 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_39);
            tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_tuple_element_39 == NULL)) {
                tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_tuple_element_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_39);
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_args_value_31);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            tmp_kwargs_value_30 = DEEP_COPY_DICT(tstate, mod_consts[129]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 206;
            tmp_tuple_element_37 = CALL_FUNCTION(tstate, tmp_called_value_118, tmp_args_value_31, tmp_kwargs_value_30);
            Py_DECREF(tmp_args_value_31);
            Py_DECREF(tmp_kwargs_value_30);
            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 17, tmp_tuple_element_37);
            tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_119 == NULL)) {
                tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_119 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto tuple_build_exception_24;
            }
            tmp_tuple_element_40 = mod_consts[202];
            tmp_args_value_32 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_40);
            tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_tuple_element_40 == NULL)) {
                tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_tuple_element_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_40);
            goto tuple_build_noexception_26;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_27:;
            Py_DECREF(tmp_args_value_32);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_26:;
            tmp_kwargs_value_31 = DEEP_COPY_DICT(tstate, mod_consts[203]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 207;
            tmp_tuple_element_37 = CALL_FUNCTION(tstate, tmp_called_value_119, tmp_args_value_32, tmp_kwargs_value_31);
            Py_DECREF(tmp_args_value_32);
            Py_DECREF(tmp_kwargs_value_31);
            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 18, tmp_tuple_element_37);
            tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_120 == NULL)) {
                tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_120 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_166 = mod_consts[204];
            tmp_args_element_value_167 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_167 == NULL)) {
                tmp_args_element_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_167 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto tuple_build_exception_24;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 208;
            {
                PyObject *call_args[] = {tmp_args_element_value_166, tmp_args_element_value_167};
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_120, call_args);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 19, tmp_tuple_element_37);
            tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_121 == NULL)) {
                tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_121 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_168 = mod_consts[205];
            tmp_args_element_value_169 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_169 == NULL)) {
                tmp_args_element_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_169 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto tuple_build_exception_24;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 209;
            {
                PyObject *call_args[] = {tmp_args_element_value_168, tmp_args_element_value_169};
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_121, call_args);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 20, tmp_tuple_element_37);
            tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_122 == NULL)) {
                tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_122 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto tuple_build_exception_24;
            }
            tmp_args_element_value_170 = mod_consts[206];
            tmp_args_element_value_171 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_args_element_value_171 == NULL)) {
                tmp_args_element_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_args_element_value_171 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto tuple_build_exception_24;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 210;
            {
                PyObject *call_args[] = {tmp_args_element_value_170, tmp_args_element_value_171};
                tmp_tuple_element_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_122, call_args);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 21, tmp_tuple_element_37);
            tmp_called_value_123 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_123 == NULL)) {
                tmp_called_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_123 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto tuple_build_exception_24;
            }
            tmp_tuple_element_41 = mod_consts[207];
            tmp_args_value_33 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_41);
            tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_41 == NULL)) {
                tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_tuple_element_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_41);
            goto tuple_build_noexception_27;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_28:;
            Py_DECREF(tmp_args_value_33);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_27:;
            tmp_kwargs_value_32 = DEEP_COPY_DICT(tstate, mod_consts[115]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 211;
            tmp_tuple_element_37 = CALL_FUNCTION(tstate, tmp_called_value_123, tmp_args_value_33, tmp_kwargs_value_32);
            Py_DECREF(tmp_args_value_33);
            Py_DECREF(tmp_kwargs_value_32);
            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_29, 22, tmp_tuple_element_37);
        }
        goto tuple_build_noexception_28;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_args_value_29);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_28:;
        tmp_kwargs_value_33 = DICT_COPY(mod_consts[96]);
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 188;
        tmp_assign_source_77 = CALL_FUNCTION(tstate, tmp_called_value_102, tmp_args_value_29, tmp_kwargs_value_33);
        Py_DECREF(tmp_args_value_29);
        Py_DECREF(tmp_kwargs_value_33);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_124;
        PyObject *tmp_args_value_34;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_kwargs_value_37;
        tmp_called_value_124 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_124 == NULL)) {
            tmp_called_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_42 = mod_consts[208];
        tmp_args_value_34 = MAKE_TUPLE_EMPTY(22);
        {
            PyObject *tmp_called_value_125;
            PyObject *tmp_args_element_value_172;
            PyObject *tmp_args_element_value_173;
            PyObject *tmp_called_value_126;
            PyObject *tmp_args_element_value_174;
            PyObject *tmp_args_element_value_175;
            PyObject *tmp_called_value_127;
            PyObject *tmp_args_element_value_176;
            PyObject *tmp_args_element_value_177;
            PyObject *tmp_called_value_128;
            PyObject *tmp_args_element_value_178;
            PyObject *tmp_args_element_value_179;
            PyObject *tmp_called_value_129;
            PyObject *tmp_args_element_value_180;
            PyObject *tmp_args_element_value_181;
            PyObject *tmp_called_value_130;
            PyObject *tmp_args_element_value_182;
            PyObject *tmp_args_element_value_183;
            PyObject *tmp_called_value_131;
            PyObject *tmp_args_value_35;
            PyObject *tmp_tuple_element_43;
            PyObject *tmp_kwargs_value_34;
            PyObject *tmp_called_value_132;
            PyObject *tmp_args_element_value_184;
            PyObject *tmp_args_element_value_185;
            PyObject *tmp_called_value_133;
            PyObject *tmp_args_element_value_186;
            PyObject *tmp_args_element_value_187;
            PyObject *tmp_called_value_134;
            PyObject *tmp_args_element_value_188;
            PyObject *tmp_args_element_value_189;
            PyObject *tmp_called_value_135;
            PyObject *tmp_args_value_36;
            PyObject *tmp_tuple_element_44;
            PyObject *tmp_kwargs_value_35;
            PyObject *tmp_called_value_136;
            PyObject *tmp_args_element_value_190;
            PyObject *tmp_args_element_value_191;
            PyObject *tmp_called_value_137;
            PyObject *tmp_args_element_value_192;
            PyObject *tmp_args_element_value_193;
            PyObject *tmp_called_value_138;
            PyObject *tmp_args_element_value_194;
            PyObject *tmp_args_element_value_195;
            PyObject *tmp_called_value_139;
            PyObject *tmp_args_element_value_196;
            PyObject *tmp_args_element_value_197;
            PyObject *tmp_called_value_140;
            PyObject *tmp_args_element_value_198;
            PyObject *tmp_args_element_value_199;
            PyObject *tmp_called_value_141;
            PyObject *tmp_args_element_value_200;
            PyObject *tmp_args_element_value_201;
            PyObject *tmp_called_value_142;
            PyObject *tmp_args_value_37;
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_kwargs_value_36;
            PyObject *tmp_called_value_143;
            PyObject *tmp_args_element_value_202;
            PyObject *tmp_args_element_value_203;
            PyObject *tmp_called_value_144;
            PyObject *tmp_args_element_value_204;
            PyObject *tmp_called_value_145;
            PyObject *tmp_args_element_value_205;
            PyObject *tmp_args_element_value_206;
            PyObject *tmp_called_value_146;
            PyObject *tmp_args_element_value_207;
            PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_42);
            tmp_tuple_element_42 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_tuple_element_42 == NULL)) {
                tmp_tuple_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_42);
            tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_125 == NULL)) {
                tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_125 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_172 = mod_consts[93];
            tmp_args_element_value_173 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_173 == NULL)) {
                tmp_args_element_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_173 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 218;
            {
                PyObject *call_args[] = {tmp_args_element_value_172, tmp_args_element_value_173};
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_125, call_args);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 2, tmp_tuple_element_42);
            tmp_called_value_126 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_126 == NULL)) {
                tmp_called_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_126 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_174 = mod_consts[209];
            tmp_args_element_value_175 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_args_element_value_175 == NULL)) {
                tmp_args_element_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_args_element_value_175 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 219;
            {
                PyObject *call_args[] = {tmp_args_element_value_174, tmp_args_element_value_175};
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_126, call_args);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 3, tmp_tuple_element_42);
            tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_127 == NULL)) {
                tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_127 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_176 = mod_consts[210];
            tmp_args_element_value_177 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_177 == NULL)) {
                tmp_args_element_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_177 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 220;
            {
                PyObject *call_args[] = {tmp_args_element_value_176, tmp_args_element_value_177};
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_127, call_args);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 4, tmp_tuple_element_42);
            tmp_called_value_128 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_128 == NULL)) {
                tmp_called_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_128 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_178 = mod_consts[211];
            tmp_args_element_value_179 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_179 == NULL)) {
                tmp_args_element_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_179 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 221;
            {
                PyObject *call_args[] = {tmp_args_element_value_178, tmp_args_element_value_179};
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_128, call_args);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 5, tmp_tuple_element_42);
            tmp_called_value_129 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_129 == NULL)) {
                tmp_called_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_129 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_180 = mod_consts[212];
            tmp_args_element_value_181 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_181 == NULL)) {
                tmp_args_element_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_181 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 222;
            {
                PyObject *call_args[] = {tmp_args_element_value_180, tmp_args_element_value_181};
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_129, call_args);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 6, tmp_tuple_element_42);
            tmp_called_value_130 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_130 == NULL)) {
                tmp_called_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_130 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_182 = mod_consts[213];
            tmp_args_element_value_183 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_183 == NULL)) {
                tmp_args_element_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_183 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 223;
            {
                PyObject *call_args[] = {tmp_args_element_value_182, tmp_args_element_value_183};
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_130, call_args);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 7, tmp_tuple_element_42);
            tmp_called_value_131 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_131 == NULL)) {
                tmp_called_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_131 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_29;
            }
            tmp_tuple_element_43 = mod_consts[214];
            tmp_args_value_35 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_43);
            tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_tuple_element_43 == NULL)) {
                tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_tuple_element_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_30;
            }
            PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_43);
            goto tuple_build_noexception_29;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_30:;
            Py_DECREF(tmp_args_value_35);
            goto tuple_build_exception_29;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_29:;
            tmp_kwargs_value_34 = DEEP_COPY_DICT(tstate, mod_consts[115]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 224;
            tmp_tuple_element_42 = CALL_FUNCTION(tstate, tmp_called_value_131, tmp_args_value_35, tmp_kwargs_value_34);
            Py_DECREF(tmp_args_value_35);
            Py_DECREF(tmp_kwargs_value_34);
            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 8, tmp_tuple_element_42);
            tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_132 == NULL)) {
                tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_132 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_184 = mod_consts[215];
            tmp_args_element_value_185 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_185 == NULL)) {
                tmp_args_element_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_185 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 225;
            {
                PyObject *call_args[] = {tmp_args_element_value_184, tmp_args_element_value_185};
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_132, call_args);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 9, tmp_tuple_element_42);
            tmp_called_value_133 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_133 == NULL)) {
                tmp_called_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_133 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_186 = mod_consts[216];
            tmp_args_element_value_187 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_187 == NULL)) {
                tmp_args_element_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_187 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 226;
            {
                PyObject *call_args[] = {tmp_args_element_value_186, tmp_args_element_value_187};
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_133, call_args);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 10, tmp_tuple_element_42);
            tmp_called_value_134 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_134 == NULL)) {
                tmp_called_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_134 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_188 = mod_consts[217];
            tmp_args_element_value_189 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_189 == NULL)) {
                tmp_args_element_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_189 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 227;
            {
                PyObject *call_args[] = {tmp_args_element_value_188, tmp_args_element_value_189};
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_134, call_args);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 11, tmp_tuple_element_42);
            tmp_called_value_135 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_135 == NULL)) {
                tmp_called_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_135 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto tuple_build_exception_29;
            }
            tmp_tuple_element_44 = mod_consts[218];
            tmp_args_value_36 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_44);
            tmp_tuple_element_44 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_44 == NULL)) {
                tmp_tuple_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_tuple_element_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_44);
            goto tuple_build_noexception_30;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_31:;
            Py_DECREF(tmp_args_value_36);
            goto tuple_build_exception_29;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_30:;
            tmp_kwargs_value_35 = DEEP_COPY_DICT(tstate, mod_consts[131]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 228;
            tmp_tuple_element_42 = CALL_FUNCTION(tstate, tmp_called_value_135, tmp_args_value_36, tmp_kwargs_value_35);
            Py_DECREF(tmp_args_value_36);
            Py_DECREF(tmp_kwargs_value_35);
            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 12, tmp_tuple_element_42);
            tmp_called_value_136 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_136 == NULL)) {
                tmp_called_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_136 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_190 = mod_consts[219];
            tmp_args_element_value_191 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_191 == NULL)) {
                tmp_args_element_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_191 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 229;
            {
                PyObject *call_args[] = {tmp_args_element_value_190, tmp_args_element_value_191};
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_136, call_args);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 13, tmp_tuple_element_42);
            tmp_called_value_137 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_137 == NULL)) {
                tmp_called_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_137 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_192 = mod_consts[220];
            tmp_args_element_value_193 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_193 == NULL)) {
                tmp_args_element_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_193 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 230;
            {
                PyObject *call_args[] = {tmp_args_element_value_192, tmp_args_element_value_193};
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_137, call_args);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 14, tmp_tuple_element_42);
            tmp_called_value_138 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_138 == NULL)) {
                tmp_called_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_138 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_194 = mod_consts[221];
            tmp_args_element_value_195 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_195 == NULL)) {
                tmp_args_element_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_195 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 231;
            {
                PyObject *call_args[] = {tmp_args_element_value_194, tmp_args_element_value_195};
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_138, call_args);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 15, tmp_tuple_element_42);
            tmp_called_value_139 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_139 == NULL)) {
                tmp_called_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_139 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_196 = mod_consts[222];
            tmp_args_element_value_197 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_197 == NULL)) {
                tmp_args_element_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_197 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 232;
            {
                PyObject *call_args[] = {tmp_args_element_value_196, tmp_args_element_value_197};
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_139, call_args);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 16, tmp_tuple_element_42);
            tmp_called_value_140 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_140 == NULL)) {
                tmp_called_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_140 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_198 = mod_consts[223];
            tmp_args_element_value_199 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_199 == NULL)) {
                tmp_args_element_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_199 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 233;
            {
                PyObject *call_args[] = {tmp_args_element_value_198, tmp_args_element_value_199};
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_140, call_args);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 17, tmp_tuple_element_42);
            tmp_called_value_141 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_141 == NULL)) {
                tmp_called_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_141 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_200 = mod_consts[224];
            tmp_args_element_value_201 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_args_element_value_201 == NULL)) {
                tmp_args_element_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_args_element_value_201 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 234;
            {
                PyObject *call_args[] = {tmp_args_element_value_200, tmp_args_element_value_201};
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_141, call_args);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 18, tmp_tuple_element_42);
            tmp_called_value_142 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_142 == NULL)) {
                tmp_called_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_142 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto tuple_build_exception_29;
            }
            tmp_tuple_element_45 = mod_consts[225];
            tmp_args_value_37 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_45);
            tmp_tuple_element_45 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_tuple_element_45 == NULL)) {
                tmp_tuple_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_tuple_element_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto tuple_build_exception_32;
            }
            PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_45);
            goto tuple_build_noexception_31;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_32:;
            Py_DECREF(tmp_args_value_37);
            goto tuple_build_exception_29;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_31:;
            tmp_kwargs_value_36 = DEEP_COPY_DICT(tstate, mod_consts[110]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 235;
            tmp_tuple_element_42 = CALL_FUNCTION(tstate, tmp_called_value_142, tmp_args_value_37, tmp_kwargs_value_36);
            Py_DECREF(tmp_args_value_37);
            Py_DECREF(tmp_kwargs_value_36);
            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 19, tmp_tuple_element_42);
            tmp_called_value_143 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_143 == NULL)) {
                tmp_called_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_143 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_202 = mod_consts[226];
            tmp_called_value_144 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_144 == NULL)) {
                tmp_called_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_144 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_204 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_args_element_value_204 == NULL)) {
                tmp_args_element_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
            }

            if (tmp_args_element_value_204 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 236;
            tmp_args_element_value_203 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_144, tmp_args_element_value_204);
            if (tmp_args_element_value_203 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 236;
            {
                PyObject *call_args[] = {tmp_args_element_value_202, tmp_args_element_value_203};
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_143, call_args);
            }

            Py_DECREF(tmp_args_element_value_203);
            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 20, tmp_tuple_element_42);
            tmp_called_value_145 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_145 == NULL)) {
                tmp_called_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_145 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_205 = mod_consts[227];
            tmp_called_value_146 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_146 == NULL)) {
                tmp_called_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_146 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto tuple_build_exception_29;
            }
            tmp_args_element_value_207 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_args_element_value_207 == NULL)) {
                tmp_args_element_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
            }

            if (tmp_args_element_value_207 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 237;
            tmp_args_element_value_206 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_146, tmp_args_element_value_207);
            if (tmp_args_element_value_206 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto tuple_build_exception_29;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 237;
            {
                PyObject *call_args[] = {tmp_args_element_value_205, tmp_args_element_value_206};
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_145, call_args);
            }

            Py_DECREF(tmp_args_element_value_206);
            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_args_value_34, 21, tmp_tuple_element_42);
        }
        goto tuple_build_noexception_32;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_29:;
        Py_DECREF(tmp_args_value_34);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_32:;
        tmp_kwargs_value_37 = DICT_COPY(mod_consts[96]);
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 215;
        tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_124, tmp_args_value_34, tmp_kwargs_value_37);
        Py_DECREF(tmp_args_value_34);
        Py_DECREF(tmp_kwargs_value_37);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_147;
        PyObject *tmp_args_value_38;
        PyObject *tmp_tuple_element_46;
        PyObject *tmp_kwargs_value_38;
        tmp_called_value_147 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_147 == NULL)) {
            tmp_called_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_value_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_46 = mod_consts[228];
        tmp_args_value_38 = MAKE_TUPLE_EMPTY(10);
        {
            PyObject *tmp_called_value_148;
            PyObject *tmp_args_element_value_208;
            PyObject *tmp_args_element_value_209;
            PyObject *tmp_called_value_149;
            PyObject *tmp_args_element_value_210;
            PyObject *tmp_args_element_value_211;
            PyObject *tmp_called_value_150;
            PyObject *tmp_args_element_value_212;
            PyObject *tmp_args_element_value_213;
            PyObject *tmp_called_value_151;
            PyObject *tmp_args_element_value_214;
            PyObject *tmp_args_element_value_215;
            PyObject *tmp_called_value_152;
            PyObject *tmp_args_element_value_216;
            PyObject *tmp_args_element_value_217;
            PyObject *tmp_called_value_153;
            PyObject *tmp_args_element_value_218;
            PyObject *tmp_args_element_value_219;
            PyObject *tmp_called_value_154;
            PyObject *tmp_args_element_value_220;
            PyObject *tmp_args_element_value_221;
            PyObject *tmp_called_value_155;
            PyObject *tmp_args_element_value_222;
            PyObject *tmp_args_element_value_223;
            PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_46);
            tmp_tuple_element_46 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_tuple_element_46 == NULL)) {
                tmp_tuple_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
            }

            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_46);
            tmp_called_value_148 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_148 == NULL)) {
                tmp_called_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_148 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto tuple_build_exception_33;
            }
            tmp_args_element_value_208 = mod_consts[229];
            tmp_args_element_value_209 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_209 == NULL)) {
                tmp_args_element_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_209 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto tuple_build_exception_33;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 244;
            {
                PyObject *call_args[] = {tmp_args_element_value_208, tmp_args_element_value_209};
                tmp_tuple_element_46 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_148, call_args);
            }

            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM(tmp_args_value_38, 2, tmp_tuple_element_46);
            tmp_called_value_149 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_149 == NULL)) {
                tmp_called_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_149 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto tuple_build_exception_33;
            }
            tmp_args_element_value_210 = mod_consts[230];
            tmp_args_element_value_211 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_211 == NULL)) {
                tmp_args_element_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_211 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto tuple_build_exception_33;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 245;
            {
                PyObject *call_args[] = {tmp_args_element_value_210, tmp_args_element_value_211};
                tmp_tuple_element_46 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_149, call_args);
            }

            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM(tmp_args_value_38, 3, tmp_tuple_element_46);
            tmp_called_value_150 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_150 == NULL)) {
                tmp_called_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_150 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto tuple_build_exception_33;
            }
            tmp_args_element_value_212 = mod_consts[231];
            tmp_args_element_value_213 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_args_element_value_213 == NULL)) {
                tmp_args_element_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
            }

            if (tmp_args_element_value_213 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto tuple_build_exception_33;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 246;
            {
                PyObject *call_args[] = {tmp_args_element_value_212, tmp_args_element_value_213};
                tmp_tuple_element_46 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_150, call_args);
            }

            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM(tmp_args_value_38, 4, tmp_tuple_element_46);
            tmp_called_value_151 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_151 == NULL)) {
                tmp_called_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_151 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto tuple_build_exception_33;
            }
            tmp_args_element_value_214 = mod_consts[232];
            tmp_args_element_value_215 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_args_element_value_215 == NULL)) {
                tmp_args_element_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
            }

            if (tmp_args_element_value_215 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto tuple_build_exception_33;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 247;
            {
                PyObject *call_args[] = {tmp_args_element_value_214, tmp_args_element_value_215};
                tmp_tuple_element_46 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_151, call_args);
            }

            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM(tmp_args_value_38, 5, tmp_tuple_element_46);
            tmp_called_value_152 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_152 == NULL)) {
                tmp_called_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_152 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto tuple_build_exception_33;
            }
            tmp_args_element_value_216 = mod_consts[233];
            tmp_args_element_value_217 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_args_element_value_217 == NULL)) {
                tmp_args_element_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
            }

            if (tmp_args_element_value_217 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto tuple_build_exception_33;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 248;
            {
                PyObject *call_args[] = {tmp_args_element_value_216, tmp_args_element_value_217};
                tmp_tuple_element_46 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_152, call_args);
            }

            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM(tmp_args_value_38, 6, tmp_tuple_element_46);
            tmp_called_value_153 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_153 == NULL)) {
                tmp_called_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_153 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto tuple_build_exception_33;
            }
            tmp_args_element_value_218 = mod_consts[234];
            tmp_args_element_value_219 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_args_element_value_219 == NULL)) {
                tmp_args_element_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
            }

            if (tmp_args_element_value_219 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto tuple_build_exception_33;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 249;
            {
                PyObject *call_args[] = {tmp_args_element_value_218, tmp_args_element_value_219};
                tmp_tuple_element_46 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_153, call_args);
            }

            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM(tmp_args_value_38, 7, tmp_tuple_element_46);
            tmp_called_value_154 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_154 == NULL)) {
                tmp_called_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_154 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto tuple_build_exception_33;
            }
            tmp_args_element_value_220 = mod_consts[235];
            tmp_args_element_value_221 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_args_element_value_221 == NULL)) {
                tmp_args_element_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
            }

            if (tmp_args_element_value_221 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto tuple_build_exception_33;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 250;
            {
                PyObject *call_args[] = {tmp_args_element_value_220, tmp_args_element_value_221};
                tmp_tuple_element_46 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_154, call_args);
            }

            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM(tmp_args_value_38, 8, tmp_tuple_element_46);
            tmp_called_value_155 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_155 == NULL)) {
                tmp_called_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_155 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto tuple_build_exception_33;
            }
            tmp_args_element_value_222 = mod_consts[236];
            tmp_args_element_value_223 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_args_element_value_223 == NULL)) {
                tmp_args_element_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_args_element_value_223 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto tuple_build_exception_33;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 251;
            {
                PyObject *call_args[] = {tmp_args_element_value_222, tmp_args_element_value_223};
                tmp_tuple_element_46 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_155, call_args);
            }

            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM(tmp_args_value_38, 9, tmp_tuple_element_46);
        }
        goto tuple_build_noexception_33;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_33:;
        Py_DECREF(tmp_args_value_38);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_33:;
        tmp_kwargs_value_38 = DEEP_COPY_DICT(tstate, mod_consts[237]);
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 241;
        tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_called_value_147, tmp_args_value_38, tmp_kwargs_value_38);
        Py_DECREF(tmp_args_value_38);
        Py_DECREF(tmp_kwargs_value_38);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_value_156;
        PyObject *tmp_args_value_39;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_kwargs_value_40;
        tmp_called_value_156 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_156 == NULL)) {
            tmp_called_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_value_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_47 = mod_consts[238];
        tmp_args_value_39 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_called_value_157;
            PyObject *tmp_args_value_40;
            PyObject *tmp_tuple_element_48;
            PyObject *tmp_kwargs_value_39;
            PyObject *tmp_called_value_158;
            PyObject *tmp_args_element_value_224;
            PyObject *tmp_args_element_value_225;
            PyObject *tmp_called_value_159;
            PyObject *tmp_args_element_value_226;
            PyObject *tmp_args_element_value_227;
            PyObject *tmp_called_value_160;
            PyObject *tmp_args_element_value_228;
            PyObject *tmp_args_element_value_229;
            PyTuple_SET_ITEM0(tmp_args_value_39, 0, tmp_tuple_element_47);
            tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_tuple_element_47 == NULL)) {
                tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
            }

            if (tmp_tuple_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;

                goto tuple_build_exception_34;
            }
            PyTuple_SET_ITEM0(tmp_args_value_39, 1, tmp_tuple_element_47);
            tmp_called_value_157 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_157 == NULL)) {
                tmp_called_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_157 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto tuple_build_exception_34;
            }
            tmp_tuple_element_48 = mod_consts[93];
            tmp_args_value_40 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_40, 0, tmp_tuple_element_48);
            tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_48 == NULL)) {
                tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_tuple_element_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto tuple_build_exception_35;
            }
            PyTuple_SET_ITEM0(tmp_args_value_40, 1, tmp_tuple_element_48);
            goto tuple_build_noexception_34;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_35:;
            Py_DECREF(tmp_args_value_40);
            goto tuple_build_exception_34;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_34:;
            tmp_kwargs_value_39 = DEEP_COPY_DICT(tstate, mod_consts[98]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 259;
            tmp_tuple_element_47 = CALL_FUNCTION(tstate, tmp_called_value_157, tmp_args_value_40, tmp_kwargs_value_39);
            Py_DECREF(tmp_args_value_40);
            Py_DECREF(tmp_kwargs_value_39);
            if (tmp_tuple_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto tuple_build_exception_34;
            }
            PyTuple_SET_ITEM(tmp_args_value_39, 2, tmp_tuple_element_47);
            tmp_called_value_158 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_158 == NULL)) {
                tmp_called_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_158 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto tuple_build_exception_34;
            }
            tmp_args_element_value_224 = mod_consts[239];
            tmp_args_element_value_225 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_225 == NULL)) {
                tmp_args_element_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_225 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto tuple_build_exception_34;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 260;
            {
                PyObject *call_args[] = {tmp_args_element_value_224, tmp_args_element_value_225};
                tmp_tuple_element_47 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_158, call_args);
            }

            if (tmp_tuple_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto tuple_build_exception_34;
            }
            PyTuple_SET_ITEM(tmp_args_value_39, 3, tmp_tuple_element_47);
            tmp_called_value_159 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_159 == NULL)) {
                tmp_called_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_159 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto tuple_build_exception_34;
            }
            tmp_args_element_value_226 = mod_consts[240];
            tmp_args_element_value_227 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_args_element_value_227 == NULL)) {
                tmp_args_element_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
            }

            if (tmp_args_element_value_227 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto tuple_build_exception_34;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 261;
            {
                PyObject *call_args[] = {tmp_args_element_value_226, tmp_args_element_value_227};
                tmp_tuple_element_47 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_159, call_args);
            }

            if (tmp_tuple_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto tuple_build_exception_34;
            }
            PyTuple_SET_ITEM(tmp_args_value_39, 4, tmp_tuple_element_47);
            tmp_called_value_160 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_160 == NULL)) {
                tmp_called_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_160 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_34;
            }
            tmp_args_element_value_228 = mod_consts[241];
            tmp_args_element_value_229 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_args_element_value_229 == NULL)) {
                tmp_args_element_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
            }

            if (tmp_args_element_value_229 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_34;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 262;
            {
                PyObject *call_args[] = {tmp_args_element_value_228, tmp_args_element_value_229};
                tmp_tuple_element_47 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_160, call_args);
            }

            if (tmp_tuple_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_34;
            }
            PyTuple_SET_ITEM(tmp_args_value_39, 5, tmp_tuple_element_47);
        }
        goto tuple_build_noexception_35;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_34:;
        Py_DECREF(tmp_args_value_39);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_35:;
        tmp_kwargs_value_40 = DICT_COPY(mod_consts[96]);
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 256;
        tmp_assign_source_80 = CALL_FUNCTION(tstate, tmp_called_value_156, tmp_args_value_39, tmp_kwargs_value_40);
        Py_DECREF(tmp_args_value_39);
        Py_DECREF(tmp_kwargs_value_40);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_161;
        PyObject *tmp_args_value_41;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_kwargs_value_41;
        tmp_called_value_161 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_161 == NULL)) {
            tmp_called_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_value_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_49 = mod_consts[242];
        tmp_args_value_41 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_called_value_162;
            PyObject *tmp_args_element_value_230;
            PyObject *tmp_args_element_value_231;
            PyObject *tmp_called_value_163;
            PyObject *tmp_args_element_value_232;
            PyObject *tmp_args_element_value_233;
            PyObject *tmp_called_value_164;
            PyObject *tmp_args_element_value_234;
            PyObject *tmp_args_element_value_235;
            PyObject *tmp_called_value_165;
            PyObject *tmp_args_element_value_236;
            PyObject *tmp_args_element_value_237;
            PyObject *tmp_called_value_166;
            PyTuple_SET_ITEM0(tmp_args_value_41, 0, tmp_tuple_element_49);
            tmp_tuple_element_49 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_tuple_element_49 == NULL)) {
                tmp_tuple_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
            }

            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM0(tmp_args_value_41, 1, tmp_tuple_element_49);
            tmp_called_value_162 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_162 == NULL)) {
                tmp_called_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_162 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto tuple_build_exception_36;
            }
            tmp_args_element_value_230 = mod_consts[243];
            tmp_args_element_value_231 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_231 == NULL)) {
                tmp_args_element_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_231 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto tuple_build_exception_36;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 269;
            {
                PyObject *call_args[] = {tmp_args_element_value_230, tmp_args_element_value_231};
                tmp_tuple_element_49 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_162, call_args);
            }

            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM(tmp_args_value_41, 2, tmp_tuple_element_49);
            tmp_called_value_163 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_163 == NULL)) {
                tmp_called_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_163 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

                goto tuple_build_exception_36;
            }
            tmp_args_element_value_232 = mod_consts[244];
            tmp_args_element_value_233 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_233 == NULL)) {
                tmp_args_element_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_233 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

                goto tuple_build_exception_36;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 270;
            {
                PyObject *call_args[] = {tmp_args_element_value_232, tmp_args_element_value_233};
                tmp_tuple_element_49 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_163, call_args);
            }

            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM(tmp_args_value_41, 3, tmp_tuple_element_49);
            tmp_called_value_164 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_164 == NULL)) {
                tmp_called_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_164 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto tuple_build_exception_36;
            }
            tmp_args_element_value_234 = mod_consts[245];
            tmp_args_element_value_235 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_args_element_value_235 == NULL)) {
                tmp_args_element_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_args_element_value_235 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto tuple_build_exception_36;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 271;
            {
                PyObject *call_args[] = {tmp_args_element_value_234, tmp_args_element_value_235};
                tmp_tuple_element_49 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_164, call_args);
            }

            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM(tmp_args_value_41, 4, tmp_tuple_element_49);
            tmp_called_value_165 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_165 == NULL)) {
                tmp_called_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_165 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto tuple_build_exception_36;
            }
            tmp_args_element_value_236 = mod_consts[246];
            tmp_called_value_166 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_166 == NULL)) {
                tmp_called_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_166 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto tuple_build_exception_36;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 272;
            tmp_args_element_value_237 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_166, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[58]);
            if (tmp_args_element_value_237 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto tuple_build_exception_36;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 272;
            {
                PyObject *call_args[] = {tmp_args_element_value_236, tmp_args_element_value_237};
                tmp_tuple_element_49 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_165, call_args);
            }

            Py_DECREF(tmp_args_element_value_237);
            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM(tmp_args_value_41, 5, tmp_tuple_element_49);
        }
        goto tuple_build_noexception_36;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_36:;
        Py_DECREF(tmp_args_value_41);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_36:;
        tmp_kwargs_value_41 = DICT_COPY(mod_consts[96]);
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 266;
        tmp_assign_source_81 = CALL_FUNCTION(tstate, tmp_called_value_161, tmp_args_value_41, tmp_kwargs_value_41);
        Py_DECREF(tmp_args_value_41);
        Py_DECREF(tmp_kwargs_value_41);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_167;
        PyObject *tmp_args_value_42;
        PyObject *tmp_tuple_element_50;
        PyObject *tmp_kwargs_value_44;
        tmp_called_value_167 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_167 == NULL)) {
            tmp_called_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_value_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_50 = mod_consts[247];
        tmp_args_value_42 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_called_value_168;
            PyObject *tmp_args_value_43;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_kwargs_value_42;
            PyObject *tmp_called_value_169;
            PyObject *tmp_args_element_value_238;
            PyObject *tmp_args_element_value_239;
            PyObject *tmp_called_value_170;
            PyObject *tmp_args_value_44;
            PyObject *tmp_tuple_element_52;
            PyObject *tmp_kwargs_value_43;
            PyObject *tmp_called_value_172;
            PyObject *tmp_args_element_value_240;
            PyObject *tmp_args_element_value_241;
            PyTuple_SET_ITEM0(tmp_args_value_42, 0, tmp_tuple_element_50);
            tmp_tuple_element_50 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_tuple_element_50 == NULL)) {
                tmp_tuple_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
            }

            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto tuple_build_exception_37;
            }
            PyTuple_SET_ITEM0(tmp_args_value_42, 1, tmp_tuple_element_50);
            tmp_called_value_168 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_168 == NULL)) {
                tmp_called_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_168 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_37;
            }
            tmp_tuple_element_51 = mod_consts[93];
            tmp_args_value_43 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_43, 0, tmp_tuple_element_51);
            tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_51 == NULL)) {
                tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_tuple_element_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_38;
            }
            PyTuple_SET_ITEM0(tmp_args_value_43, 1, tmp_tuple_element_51);
            goto tuple_build_noexception_37;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_38:;
            Py_DECREF(tmp_args_value_43);
            goto tuple_build_exception_37;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_37:;
            tmp_kwargs_value_42 = DEEP_COPY_DICT(tstate, mod_consts[98]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 279;
            tmp_tuple_element_50 = CALL_FUNCTION(tstate, tmp_called_value_168, tmp_args_value_43, tmp_kwargs_value_42);
            Py_DECREF(tmp_args_value_43);
            Py_DECREF(tmp_kwargs_value_42);
            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto tuple_build_exception_37;
            }
            PyTuple_SET_ITEM(tmp_args_value_42, 2, tmp_tuple_element_50);
            tmp_called_value_169 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_169 == NULL)) {
                tmp_called_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_169 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_37;
            }
            tmp_args_element_value_238 = mod_consts[248];
            tmp_args_element_value_239 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_args_element_value_239 == NULL)) {
                tmp_args_element_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_args_element_value_239 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_37;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 280;
            {
                PyObject *call_args[] = {tmp_args_element_value_238, tmp_args_element_value_239};
                tmp_tuple_element_50 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_169, call_args);
            }

            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_37;
            }
            PyTuple_SET_ITEM(tmp_args_value_42, 3, tmp_tuple_element_50);
            tmp_called_value_170 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_170 == NULL)) {
                tmp_called_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_170 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_37;
            }
            tmp_tuple_element_52 = mod_consts[249];
            tmp_args_value_44 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_171;
                PyTuple_SET_ITEM0(tmp_args_value_44, 0, tmp_tuple_element_52);
                tmp_called_value_171 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[37]);

                if (unlikely(tmp_called_value_171 == NULL)) {
                    tmp_called_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
                }

                if (tmp_called_value_171 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 281;

                    goto tuple_build_exception_39;
                }
                frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 281;
                tmp_tuple_element_52 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_171);
                if (tmp_tuple_element_52 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 281;

                    goto tuple_build_exception_39;
                }
                PyTuple_SET_ITEM(tmp_args_value_44, 1, tmp_tuple_element_52);
            }
            goto tuple_build_noexception_38;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_39:;
            Py_DECREF(tmp_args_value_44);
            goto tuple_build_exception_37;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_38:;
            tmp_kwargs_value_43 = DEEP_COPY_DICT(tstate, mod_consts[115]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 281;
            tmp_tuple_element_50 = CALL_FUNCTION(tstate, tmp_called_value_170, tmp_args_value_44, tmp_kwargs_value_43);
            Py_DECREF(tmp_args_value_44);
            Py_DECREF(tmp_kwargs_value_43);
            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_37;
            }
            PyTuple_SET_ITEM(tmp_args_value_42, 4, tmp_tuple_element_50);
            tmp_called_value_172 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_172 == NULL)) {
                tmp_called_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_172 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;

                goto tuple_build_exception_37;
            }
            tmp_args_element_value_240 = mod_consts[250];
            tmp_args_element_value_241 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_args_element_value_241 == NULL)) {
                tmp_args_element_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_args_element_value_241 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;

                goto tuple_build_exception_37;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 282;
            {
                PyObject *call_args[] = {tmp_args_element_value_240, tmp_args_element_value_241};
                tmp_tuple_element_50 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_172, call_args);
            }

            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;

                goto tuple_build_exception_37;
            }
            PyTuple_SET_ITEM(tmp_args_value_42, 5, tmp_tuple_element_50);
        }
        goto tuple_build_noexception_39;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_37:;
        Py_DECREF(tmp_args_value_42);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_39:;
        tmp_kwargs_value_44 = DICT_COPY(mod_consts[96]);
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 276;
        tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_167, tmp_args_value_42, tmp_kwargs_value_44);
        Py_DECREF(tmp_args_value_42);
        Py_DECREF(tmp_kwargs_value_44);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_173;
        PyObject *tmp_args_value_45;
        PyObject *tmp_tuple_element_53;
        PyObject *tmp_kwargs_value_48;
        tmp_called_value_173 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_173 == NULL)) {
            tmp_called_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_value_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_53 = mod_consts[251];
        tmp_args_value_45 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_called_value_174;
            PyObject *tmp_args_value_46;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_kwargs_value_45;
            PyObject *tmp_called_value_175;
            PyObject *tmp_args_element_value_242;
            PyObject *tmp_args_element_value_243;
            PyObject *tmp_called_value_176;
            PyObject *tmp_args_value_47;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_kwargs_value_46;
            PyObject *tmp_called_value_177;
            PyObject *tmp_args_value_48;
            PyObject *tmp_tuple_element_56;
            PyObject *tmp_kwargs_value_47;
            PyTuple_SET_ITEM0(tmp_args_value_45, 0, tmp_tuple_element_53);
            tmp_tuple_element_53 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_tuple_element_53 == NULL)) {
                tmp_tuple_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
            }

            if (tmp_tuple_element_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;

                goto tuple_build_exception_40;
            }
            PyTuple_SET_ITEM0(tmp_args_value_45, 1, tmp_tuple_element_53);
            tmp_called_value_174 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_174 == NULL)) {
                tmp_called_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_174 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto tuple_build_exception_40;
            }
            tmp_tuple_element_54 = mod_consts[93];
            tmp_args_value_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_46, 0, tmp_tuple_element_54);
            tmp_tuple_element_54 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_tuple_element_54 == NULL)) {
                tmp_tuple_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
            }

            if (tmp_tuple_element_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto tuple_build_exception_41;
            }
            PyTuple_SET_ITEM0(tmp_args_value_46, 1, tmp_tuple_element_54);
            goto tuple_build_noexception_40;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_41:;
            Py_DECREF(tmp_args_value_46);
            goto tuple_build_exception_40;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_40:;
            tmp_kwargs_value_45 = DEEP_COPY_DICT(tstate, mod_consts[98]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 289;
            tmp_tuple_element_53 = CALL_FUNCTION(tstate, tmp_called_value_174, tmp_args_value_46, tmp_kwargs_value_45);
            Py_DECREF(tmp_args_value_46);
            Py_DECREF(tmp_kwargs_value_45);
            if (tmp_tuple_element_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto tuple_build_exception_40;
            }
            PyTuple_SET_ITEM(tmp_args_value_45, 2, tmp_tuple_element_53);
            tmp_called_value_175 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_175 == NULL)) {
                tmp_called_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_175 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;

                goto tuple_build_exception_40;
            }
            tmp_args_element_value_242 = mod_consts[252];
            tmp_args_element_value_243 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_args_element_value_243 == NULL)) {
                tmp_args_element_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_args_element_value_243 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;

                goto tuple_build_exception_40;
            }
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 290;
            {
                PyObject *call_args[] = {tmp_args_element_value_242, tmp_args_element_value_243};
                tmp_tuple_element_53 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_175, call_args);
            }

            if (tmp_tuple_element_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;

                goto tuple_build_exception_40;
            }
            PyTuple_SET_ITEM(tmp_args_value_45, 3, tmp_tuple_element_53);
            tmp_called_value_176 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_176 == NULL)) {
                tmp_called_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_176 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto tuple_build_exception_40;
            }
            tmp_tuple_element_55 = mod_consts[253];
            tmp_args_value_47 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_47, 0, tmp_tuple_element_55);
            tmp_tuple_element_55 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_tuple_element_55 == NULL)) {
                tmp_tuple_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
            }

            if (tmp_tuple_element_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto tuple_build_exception_42;
            }
            PyTuple_SET_ITEM0(tmp_args_value_47, 1, tmp_tuple_element_55);
            goto tuple_build_noexception_41;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_42:;
            Py_DECREF(tmp_args_value_47);
            goto tuple_build_exception_40;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_41:;
            tmp_kwargs_value_46 = DEEP_COPY_DICT(tstate, mod_consts[254]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 291;
            tmp_tuple_element_53 = CALL_FUNCTION(tstate, tmp_called_value_176, tmp_args_value_47, tmp_kwargs_value_46);
            Py_DECREF(tmp_args_value_47);
            Py_DECREF(tmp_kwargs_value_46);
            if (tmp_tuple_element_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto tuple_build_exception_40;
            }
            PyTuple_SET_ITEM(tmp_args_value_45, 4, tmp_tuple_element_53);
            tmp_called_value_177 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_called_value_177 == NULL)) {
                tmp_called_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_called_value_177 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto tuple_build_exception_40;
            }
            tmp_tuple_element_56 = mod_consts[255];
            tmp_args_value_48 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_48, 0, tmp_tuple_element_56);
            tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_tuple_element_56 == NULL)) {
                tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_tuple_element_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto tuple_build_exception_43;
            }
            PyTuple_SET_ITEM0(tmp_args_value_48, 1, tmp_tuple_element_56);
            goto tuple_build_noexception_42;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_43:;
            Py_DECREF(tmp_args_value_48);
            goto tuple_build_exception_40;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_42:;
            tmp_kwargs_value_47 = DEEP_COPY_DICT(tstate, mod_consts[254]);
            frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 292;
            tmp_tuple_element_53 = CALL_FUNCTION(tstate, tmp_called_value_177, tmp_args_value_48, tmp_kwargs_value_47);
            Py_DECREF(tmp_args_value_48);
            Py_DECREF(tmp_kwargs_value_47);
            if (tmp_tuple_element_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto tuple_build_exception_40;
            }
            PyTuple_SET_ITEM(tmp_args_value_45, 5, tmp_tuple_element_53);
        }
        goto tuple_build_noexception_43;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_40:;
        Py_DECREF(tmp_args_value_45);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_43:;
        tmp_kwargs_value_48 = DICT_COPY(mod_consts[96]);
        frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame.f_lineno = 286;
        tmp_assign_source_83 = CALL_FUNCTION(tstate, tmp_called_value_173, tmp_args_value_45, tmp_kwargs_value_48);
        Py_DECREF(tmp_args_value_45);
        Py_DECREF(tmp_kwargs_value_48);
        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_83);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_5;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9ad142c5bdd577a87f7dbee5c3f23831, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ad142c5bdd577a87f7dbee5c3f23831->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ad142c5bdd577a87f7dbee5c3f23831, exception_lineno);
    }



    assertFrameObject(frame_9ad142c5bdd577a87f7dbee5c3f23831);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_5:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlalchemy.dialects.postgresql.pg_catalog", false);

    Py_INCREF(module_sqlalchemy$dialects$postgresql$pg_catalog);
    return module_sqlalchemy$dialects$postgresql$pg_catalog;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$postgresql$pg_catalog, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlalchemy$dialects$postgresql$pg_catalog", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
