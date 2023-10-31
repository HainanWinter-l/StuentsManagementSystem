/* Generated code for Python module 'sqlalchemy.dialects.mssql.information_schema'
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

/* The "module_sqlalchemy$dialects$mssql$information_schema" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlalchemy$dialects$mssql$information_schema;
PyDictObject *moduledict_sqlalchemy$dialects$mssql$information_schema;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[183];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[183];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("sqlalchemy.dialects.mssql.information_schema"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 183; i++) {
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
void checkModuleConstants_sqlalchemy$dialects$mssql$information_schema(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 183; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ccb77747ad63a9943d8079f5e881ed0a;
static PyCodeObject *codeobj_0e1eee981a0fd462be6343172963c9ce;
static PyCodeObject *codeobj_e93bd44b39b8d6815f49a1d33372fbe1;
static PyCodeObject *codeobj_bc32dc40dc9592c25a301b86f05477b1;
static PyCodeObject *codeobj_cf5e81e765af4e034641c4497190b1b4;
static PyCodeObject *codeobj_5d0bb559b057d8e5644edb60051c5dfe;
static PyCodeObject *codeobj_5e58ebc518634fde9f17a300ec1e8cf2;
static PyCodeObject *codeobj_86bb7afc44a2bbcc6ffbadeded500406;
static PyCodeObject *codeobj_1015873e4c7807d95bba3c28dc178da9;
static PyCodeObject *codeobj_d48554e103b1741382866c3ab03eefcb;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[177]); CHECK_OBJECT(module_filename_obj);
    codeobj_ccb77747ad63a9943d8079f5e881ed0a = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[178], mod_consts[178], NULL, NULL, 0, 0, 0);
    codeobj_0e1eee981a0fd462be6343172963c9ce = MAKE_CODE_OBJECT(module_filename_obj, 27, 0, mod_consts[49], mod_consts[49], mod_consts[179], NULL, 0, 0, 0);
    codeobj_e93bd44b39b8d6815f49a1d33372fbe1 = MAKE_CODE_OBJECT(module_filename_obj, 231, 0, mod_consts[168], mod_consts[168], mod_consts[179], NULL, 0, 0, 0);
    codeobj_bc32dc40dc9592c25a301b86f05477b1 = MAKE_CODE_OBJECT(module_filename_obj, 201, 0, mod_consts[158], mod_consts[158], mod_consts[179], NULL, 0, 0, 0);
    codeobj_cf5e81e765af4e034641c4497190b1b4 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[63], mod_consts[63], mod_consts[180], NULL, 2, 0, 0);
    codeobj_5d0bb559b057d8e5644edb60051c5dfe = MAKE_CODE_OBJECT(module_filename_obj, 35, 0, mod_consts[0], mod_consts[0], mod_consts[179], NULL, 0, 0, 0);
    codeobj_5e58ebc518634fde9f17a300ec1e8cf2 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[65], mod_consts[65], mod_consts[181], NULL, 2, 0, 0);
    codeobj_86bb7afc44a2bbcc6ffbadeded500406 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[59], mod_consts[59], mod_consts[180], NULL, 2, 0, 0);
    codeobj_1015873e4c7807d95bba3c28dc178da9 = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[160], mod_consts[160], mod_consts[182], NULL, 2, 0, 0);
    codeobj_d48554e103b1741382866c3ab03eefcb = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[160], mod_consts[160], mod_consts[182], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$information_schema$$$function__1_bind_expression();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$information_schema$$$function__2___init__();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$information_schema$$$function__3__compile();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$information_schema$$$function__4_column_expression();


static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$information_schema$$$function__5_column_expression();


// The module function definitions.
static PyObject *impl_sqlalchemy$dialects$mssql$information_schema$$$function__1_bind_expression(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bindvalue = python_pars[1];
    struct Nuitka_FrameObject *frame_86bb7afc44a2bbcc6ffbadeded500406;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_86bb7afc44a2bbcc6ffbadeded500406 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_86bb7afc44a2bbcc6ffbadeded500406)) {
        Py_XDECREF(cache_frame_86bb7afc44a2bbcc6ffbadeded500406);

#if _DEBUG_REFCOUNTS
        if (cache_frame_86bb7afc44a2bbcc6ffbadeded500406 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_86bb7afc44a2bbcc6ffbadeded500406 = MAKE_FUNCTION_FRAME(tstate, codeobj_86bb7afc44a2bbcc6ffbadeded500406, module_sqlalchemy$dialects$mssql$information_schema, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_86bb7afc44a2bbcc6ffbadeded500406->m_type_description == NULL);
    frame_86bb7afc44a2bbcc6ffbadeded500406 = cache_frame_86bb7afc44a2bbcc6ffbadeded500406;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_86bb7afc44a2bbcc6ffbadeded500406);
    assert(Py_REFCNT(frame_86bb7afc44a2bbcc6ffbadeded500406) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bindvalue);
        tmp_args_element_value_1 = par_bindvalue;
        frame_86bb7afc44a2bbcc6ffbadeded500406->m_frame.f_lineno = 32;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_86bb7afc44a2bbcc6ffbadeded500406, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_86bb7afc44a2bbcc6ffbadeded500406->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_86bb7afc44a2bbcc6ffbadeded500406, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_86bb7afc44a2bbcc6ffbadeded500406,
        type_description_1,
        par_self,
        par_bindvalue
    );


    // Release cached frame if used for exception.
    if (frame_86bb7afc44a2bbcc6ffbadeded500406 == cache_frame_86bb7afc44a2bbcc6ffbadeded500406) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_86bb7afc44a2bbcc6ffbadeded500406);
        cache_frame_86bb7afc44a2bbcc6ffbadeded500406 = NULL;
    }

    assertFrameObject(frame_86bb7afc44a2bbcc6ffbadeded500406);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bindvalue);
    Py_DECREF(par_bindvalue);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bindvalue);
    Py_DECREF(par_bindvalue);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$information_schema$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bindvalue = python_pars[1];
    struct Nuitka_FrameObject *frame_cf5e81e765af4e034641c4497190b1b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cf5e81e765af4e034641c4497190b1b4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cf5e81e765af4e034641c4497190b1b4)) {
        Py_XDECREF(cache_frame_cf5e81e765af4e034641c4497190b1b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf5e81e765af4e034641c4497190b1b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf5e81e765af4e034641c4497190b1b4 = MAKE_FUNCTION_FRAME(tstate, codeobj_cf5e81e765af4e034641c4497190b1b4, module_sqlalchemy$dialects$mssql$information_schema, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf5e81e765af4e034641c4497190b1b4->m_type_description == NULL);
    frame_cf5e81e765af4e034641c4497190b1b4 = cache_frame_cf5e81e765af4e034641c4497190b1b4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cf5e81e765af4e034641c4497190b1b4);
    assert(Py_REFCNT(frame_cf5e81e765af4e034641c4497190b1b4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_bindvalue);
        tmp_assattr_value_1 = par_bindvalue;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf5e81e765af4e034641c4497190b1b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf5e81e765af4e034641c4497190b1b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf5e81e765af4e034641c4497190b1b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf5e81e765af4e034641c4497190b1b4,
        type_description_1,
        par_self,
        par_bindvalue
    );


    // Release cached frame if used for exception.
    if (frame_cf5e81e765af4e034641c4497190b1b4 == cache_frame_cf5e81e765af4e034641c4497190b1b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf5e81e765af4e034641c4497190b1b4);
        cache_frame_cf5e81e765af4e034641c4497190b1b4 = NULL;
    }

    assertFrameObject(frame_cf5e81e765af4e034641c4497190b1b4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bindvalue);
    Py_DECREF(par_bindvalue);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bindvalue);
    Py_DECREF(par_bindvalue);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$information_schema$$$function__3__compile(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_element = python_pars[0];
    PyObject *par_compiler = python_pars[1];
    PyObject *par_kw = python_pars[2];
    PyObject *var_base = NULL;
    struct Nuitka_FrameObject *frame_5e58ebc518634fde9f17a300ec1e8cf2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5e58ebc518634fde9f17a300ec1e8cf2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5e58ebc518634fde9f17a300ec1e8cf2)) {
        Py_XDECREF(cache_frame_5e58ebc518634fde9f17a300ec1e8cf2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5e58ebc518634fde9f17a300ec1e8cf2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5e58ebc518634fde9f17a300ec1e8cf2 = MAKE_FUNCTION_FRAME(tstate, codeobj_5e58ebc518634fde9f17a300ec1e8cf2, module_sqlalchemy$dialects$mssql$information_schema, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5e58ebc518634fde9f17a300ec1e8cf2->m_type_description == NULL);
    frame_5e58ebc518634fde9f17a300ec1e8cf2 = cache_frame_5e58ebc518634fde9f17a300ec1e8cf2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5e58ebc518634fde9f17a300ec1e8cf2);
    assert(Py_REFCNT(frame_5e58ebc518634fde9f17a300ec1e8cf2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[2];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[3];
        tmp_level_value_1 = mod_consts[4];
        frame_5e58ebc518634fde9f17a300ec1e8cf2->m_frame.f_lineno = 42;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema,
                mod_consts[5],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[5]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_base == NULL);
        var_base = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_compiler);
        tmp_expression_value_2 = par_compiler;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[7]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_compiler);
        tmp_expression_value_4 = par_compiler;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[7]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[8]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_base);
        tmp_expression_value_5 = var_base;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[9]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_compiler);
        tmp_expression_value_6 = par_compiler;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[10]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_element);
        tmp_expression_value_7 = par_element;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[1]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_1 = par_kw;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__6_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_dircall_arg3_2;
        CHECK_OBJECT(par_compiler);
        tmp_expression_value_8 = par_compiler;
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[10]);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_2);

            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_element);
        tmp_expression_value_9 = par_element;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[1]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_2);

            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_2);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_5e58ebc518634fde9f17a300ec1e8cf2->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_2);

            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_2 = par_kw;
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___main__$$$function__6_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5e58ebc518634fde9f17a300ec1e8cf2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5e58ebc518634fde9f17a300ec1e8cf2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5e58ebc518634fde9f17a300ec1e8cf2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5e58ebc518634fde9f17a300ec1e8cf2,
        type_description_1,
        par_element,
        par_compiler,
        par_kw,
        var_base
    );


    // Release cached frame if used for exception.
    if (frame_5e58ebc518634fde9f17a300ec1e8cf2 == cache_frame_5e58ebc518634fde9f17a300ec1e8cf2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5e58ebc518634fde9f17a300ec1e8cf2);
        cache_frame_5e58ebc518634fde9f17a300ec1e8cf2 = NULL;
    }

    assertFrameObject(frame_5e58ebc518634fde9f17a300ec1e8cf2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_base);
    var_base = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_base);
    var_base = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_compiler);
    Py_DECREF(par_compiler);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_compiler);
    Py_DECREF(par_compiler);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$information_schema$$$function__4_column_expression(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_colexpr = python_pars[1];
    struct Nuitka_FrameObject *frame_1015873e4c7807d95bba3c28dc178da9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1015873e4c7807d95bba3c28dc178da9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1015873e4c7807d95bba3c28dc178da9)) {
        Py_XDECREF(cache_frame_1015873e4c7807d95bba3c28dc178da9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1015873e4c7807d95bba3c28dc178da9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1015873e4c7807d95bba3c28dc178da9 = MAKE_FUNCTION_FRAME(tstate, codeobj_1015873e4c7807d95bba3c28dc178da9, module_sqlalchemy$dialects$mssql$information_schema, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1015873e4c7807d95bba3c28dc178da9->m_type_description == NULL);
    frame_1015873e4c7807d95bba3c28dc178da9 = cache_frame_1015873e4c7807d95bba3c28dc178da9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1015873e4c7807d95bba3c28dc178da9);
    assert(Py_REFCNT(frame_1015873e4c7807d95bba3c28dc178da9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_colexpr);
        tmp_args_element_value_1 = par_colexpr;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1015873e4c7807d95bba3c28dc178da9->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1015873e4c7807d95bba3c28dc178da9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1015873e4c7807d95bba3c28dc178da9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1015873e4c7807d95bba3c28dc178da9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1015873e4c7807d95bba3c28dc178da9,
        type_description_1,
        par_self,
        par_colexpr
    );


    // Release cached frame if used for exception.
    if (frame_1015873e4c7807d95bba3c28dc178da9 == cache_frame_1015873e4c7807d95bba3c28dc178da9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1015873e4c7807d95bba3c28dc178da9);
        cache_frame_1015873e4c7807d95bba3c28dc178da9 = NULL;
    }

    assertFrameObject(frame_1015873e4c7807d95bba3c28dc178da9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_colexpr);
    Py_DECREF(par_colexpr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_colexpr);
    Py_DECREF(par_colexpr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$dialects$mssql$information_schema$$$function__5_column_expression(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_colexpr = python_pars[1];
    struct Nuitka_FrameObject *frame_d48554e103b1741382866c3ab03eefcb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d48554e103b1741382866c3ab03eefcb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d48554e103b1741382866c3ab03eefcb)) {
        Py_XDECREF(cache_frame_d48554e103b1741382866c3ab03eefcb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d48554e103b1741382866c3ab03eefcb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d48554e103b1741382866c3ab03eefcb = MAKE_FUNCTION_FRAME(tstate, codeobj_d48554e103b1741382866c3ab03eefcb, module_sqlalchemy$dialects$mssql$information_schema, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d48554e103b1741382866c3ab03eefcb->m_type_description == NULL);
    frame_d48554e103b1741382866c3ab03eefcb = cache_frame_d48554e103b1741382866c3ab03eefcb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d48554e103b1741382866c3ab03eefcb);
    assert(Py_REFCNT(frame_d48554e103b1741382866c3ab03eefcb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_colexpr);
        tmp_args_element_value_1 = par_colexpr;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d48554e103b1741382866c3ab03eefcb->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d48554e103b1741382866c3ab03eefcb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d48554e103b1741382866c3ab03eefcb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d48554e103b1741382866c3ab03eefcb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d48554e103b1741382866c3ab03eefcb,
        type_description_1,
        par_self,
        par_colexpr
    );


    // Release cached frame if used for exception.
    if (frame_d48554e103b1741382866c3ab03eefcb == cache_frame_d48554e103b1741382866c3ab03eefcb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d48554e103b1741382866c3ab03eefcb);
        cache_frame_d48554e103b1741382866c3ab03eefcb = NULL;
    }

    assertFrameObject(frame_d48554e103b1741382866c3ab03eefcb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_colexpr);
    Py_DECREF(par_colexpr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_colexpr);
    Py_DECREF(par_colexpr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$information_schema$$$function__1_bind_expression() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$information_schema$$$function__1_bind_expression,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[60],
#endif
        codeobj_86bb7afc44a2bbcc6ffbadeded500406,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$information_schema,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$information_schema$$$function__2___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$information_schema$$$function__2___init__,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[64],
#endif
        codeobj_cf5e81e765af4e034641c4497190b1b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$information_schema,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$information_schema$$$function__3__compile() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$information_schema$$$function__3__compile,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5e58ebc518634fde9f17a300ec1e8cf2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$information_schema,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$information_schema$$$function__4_column_expression() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$information_schema$$$function__4_column_expression,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_1015873e4c7807d95bba3c28dc178da9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$information_schema,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$dialects$mssql$information_schema$$$function__5_column_expression() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$dialects$mssql$information_schema$$$function__5_column_expression,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_d48554e103b1741382866c3ab03eefcb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$dialects$mssql$information_schema,
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

function_impl_code functable_sqlalchemy$dialects$mssql$information_schema[] = {
    impl_sqlalchemy$dialects$mssql$information_schema$$$function__1_bind_expression,
    impl_sqlalchemy$dialects$mssql$information_schema$$$function__2___init__,
    impl_sqlalchemy$dialects$mssql$information_schema$$$function__3__compile,
    impl_sqlalchemy$dialects$mssql$information_schema$$$function__4_column_expression,
    impl_sqlalchemy$dialects$mssql$information_schema$$$function__5_column_expression,
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

    function_impl_code *current = functable_sqlalchemy$dialects$mssql$information_schema;
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

    if (offset > sizeof(functable_sqlalchemy$dialects$mssql$information_schema) || offset < 0) {
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
        functable_sqlalchemy$dialects$mssql$information_schema[offset],
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
        module_sqlalchemy$dialects$mssql$information_schema,
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
PyObject *modulecode_sqlalchemy$dialects$mssql$information_schema(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlalchemy.dialects.mssql.information_schema");

    // Store the module for future use.
    module_sqlalchemy$dialects$mssql$information_schema = module;

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
        PRINT_STRING("sqlalchemy.dialects.mssql.information_schema: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("sqlalchemy.dialects.mssql.information_schema: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlalchemy$dialects$mssql$information_schema\n");

    moduledict_sqlalchemy$dialects$mssql$information_schema = MODULE_DICT(module_sqlalchemy$dialects$mssql$information_schema);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlalchemy$dialects$mssql$information_schema,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$dialects$mssql$information_schema,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[2]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$dialects$mssql$information_schema,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$dialects$mssql$information_schema,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$dialects$mssql$information_schema,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlalchemy$dialects$mssql$information_schema);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_sqlalchemy$dialects$mssql$information_schema);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
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
    struct Nuitka_FrameObject *frame_ccb77747ad63a9943d8079f5e881ed0a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_sqlalchemy$dialects$mssql$information_schema$$$class__1_CoerceUnicode_27 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_0e1eee981a0fd462be6343172963c9ce_2;
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
    PyObject *locals_sqlalchemy$dialects$mssql$information_schema$$$class__2__cast_on_2005_35 = NULL;
    struct Nuitka_FrameObject *frame_5d0bb559b057d8e5644edb60051c5dfe_3;
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
    PyObject *locals_sqlalchemy$dialects$mssql$information_schema$$$class__3_NumericSqlVariant_201 = NULL;
    struct Nuitka_FrameObject *frame_bc32dc40dc9592c25a301b86f05477b1_4;
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
    PyObject *locals_sqlalchemy$dialects$mssql$information_schema$$$class__4_NVarcharSqlVariant_231 = NULL;
    struct Nuitka_FrameObject *frame_e93bd44b39b8d6815f49a1d33372fbe1_5;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_2);
    }
    frame_ccb77747ad63a9943d8079f5e881ed0a = MAKE_MODULE_FRAME(codeobj_ccb77747ad63a9943d8079f5e881ed0a, module_sqlalchemy$dialects$mssql$information_schema);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ccb77747ad63a9943d8079f5e881ed0a);
    assert(Py_REFCNT(frame_ccb77747ad63a9943d8079f5e881ed0a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[19], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[2];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[21];
        tmp_level_value_1 = mod_consts[22];
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 9;
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
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema,
                mod_consts[11],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[11]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[2];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[23];
        tmp_level_value_2 = mod_consts[22];
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 10;
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
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema,
                mod_consts[24],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[24]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[2];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[25];
        tmp_level_value_3 = mod_consts[22];
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 11;
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
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema,
                mod_consts[26],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[26]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[2];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[27];
        tmp_level_value_4 = mod_consts[22];
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 12;
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
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema,
                mod_consts[28],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[28]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[29];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[30];
        tmp_level_value_5 = mod_consts[22];
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 13;
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
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema,
                mod_consts[31],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[32];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[33];
        tmp_level_value_6 = mod_consts[22];
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 14;
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
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema,
                mod_consts[34],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[34]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[35];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[36];
        tmp_level_value_7 = mod_consts[22];
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 15;
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
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema,
                mod_consts[37],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[37]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[35];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[38];
        tmp_level_value_8 = mod_consts[22];
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 16;
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
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema,
                mod_consts[39],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[39]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[35];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[40];
        tmp_level_value_9 = mod_consts[22];
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 17;
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
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema,
                mod_consts[13],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[35];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[41];
        tmp_level_value_10 = mod_consts[22];
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 18;
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
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema,
                mod_consts[14],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[35];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[42];
        tmp_level_value_11 = mod_consts[22];
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 19;
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
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema,
                mod_consts[43],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[35];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[44];
        tmp_level_value_12 = mod_consts[22];
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 20;
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
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema,
                mod_consts[45],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[35];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[46];
        tmp_level_value_13 = mod_consts[22];
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 21;
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
                (PyObject *)moduledict_sqlalchemy$dialects$mssql$information_schema,
                mod_consts[12],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[12]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 24;
        tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_17);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_1;
        }
        tmp_assign_source_18 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_18, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_19 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
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


            exception_lineno = 27;

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
        tmp_subscript_value_1 = mod_consts[6];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_21 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_21;
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


            exception_lineno = 27;

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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[48]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

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
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 27;
        tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_22;
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


            exception_lineno = 27;

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
        PyObject *tmp_name_value_14;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[51];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_14 = mod_consts[52];
        tmp_default_value_1 = mod_consts[53];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_14, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

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


                exception_lineno = 27;

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


            exception_lineno = 27;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 27;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_23;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_sqlalchemy$dialects$mssql$information_schema$$$class__1_CoerceUnicode_27 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__1_CoerceUnicode_27, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__1_CoerceUnicode_27, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        frame_0e1eee981a0fd462be6343172963c9ce_2 = MAKE_CLASS_FRAME(tstate, codeobj_0e1eee981a0fd462be6343172963c9ce, module_sqlalchemy$dialects$mssql$information_schema, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_0e1eee981a0fd462be6343172963c9ce_2);
        assert(Py_REFCNT(frame_0e1eee981a0fd462be6343172963c9ce_2) == 2);

        // Framed code:
        tmp_dictset_value = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__1_CoerceUnicode_27, mod_consts[12]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[12]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 28;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }
                Py_INCREF(tmp_dictset_value);
            } else {
                goto frame_exception_exit_2;
            }
        }

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__1_CoerceUnicode_27, mod_consts[57], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__1_CoerceUnicode_27, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$information_schema$$$function__1_bind_expression();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__1_CoerceUnicode_27, mod_consts[59], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0e1eee981a0fd462be6343172963c9ce_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0e1eee981a0fd462be6343172963c9ce_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0e1eee981a0fd462be6343172963c9ce_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0e1eee981a0fd462be6343172963c9ce_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_0e1eee981a0fd462be6343172963c9ce_2);

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


                exception_lineno = 27;

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
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__1_CoerceUnicode_27, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_25;
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
            tmp_tuple_element_4 = locals_sqlalchemy$dialects$mssql$information_schema$$$class__1_CoerceUnicode_27;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 27;
            tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_24 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$information_schema$$$class__1_CoerceUnicode_27);
        locals_sqlalchemy$dialects$mssql$information_schema$$$class__1_CoerceUnicode_27 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$mssql$information_schema$$$class__1_CoerceUnicode_27);
        locals_sqlalchemy$dialects$mssql$information_schema$$$class__1_CoerceUnicode_27 = NULL;
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
        exception_lineno = 27;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_24);
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

    Py_XDECREF(tmp_class_creation_1__bases_orig);
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
        PyObject *tmp_assign_source_26;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[62]);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        tmp_assign_source_26 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_26, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_27 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

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
        tmp_expression_value_8 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[6];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_29 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts[48]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

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
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_10 = tmp_class_creation_2__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[48]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        tmp_tuple_element_6 = mod_consts[0];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 35;
        tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_11 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

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
        PyObject *tmp_expression_value_12;
        PyObject *tmp_name_value_15;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[51];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_name_value_15 = mod_consts[52];
        tmp_default_value_2 = mod_consts[53];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_15, tmp_default_value_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_13;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_13 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[52]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

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


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 35;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_31;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_32;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_sqlalchemy$dialects$mssql$information_schema$$$class__2__cast_on_2005_35 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__2__cast_on_2005_35, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[0];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__2__cast_on_2005_35, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_6;
        }
        frame_5d0bb559b057d8e5644edb60051c5dfe_3 = MAKE_CLASS_FRAME(tstate, codeobj_5d0bb559b057d8e5644edb60051c5dfe, module_sqlalchemy$dialects$mssql$information_schema, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_5d0bb559b057d8e5644edb60051c5dfe_3);
        assert(Py_REFCNT(frame_5d0bb559b057d8e5644edb60051c5dfe_3) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$information_schema$$$function__2___init__();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__2__cast_on_2005_35, mod_consts[63], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5d0bb559b057d8e5644edb60051c5dfe_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5d0bb559b057d8e5644edb60051c5dfe_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5d0bb559b057d8e5644edb60051c5dfe_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5d0bb559b057d8e5644edb60051c5dfe_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_5d0bb559b057d8e5644edb60051c5dfe_3);

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


                exception_lineno = 35;

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
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__2__cast_on_2005_35, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_5 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[0];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_sqlalchemy$dialects$mssql$information_schema$$$class__2__cast_on_2005_35;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 35;
            tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_33;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_32 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_32);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$information_schema$$$class__2__cast_on_2005_35);
        locals_sqlalchemy$dialects$mssql$information_schema$$$class__2__cast_on_2005_35 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$mssql$information_schema$$$class__2__cast_on_2005_35);
        locals_sqlalchemy$dialects$mssql$information_schema$$$class__2__cast_on_2005_35 = NULL;
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
        exception_lineno = 35;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_32);
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
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_6;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 40;
        tmp_called_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_1);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_2 = MAKE_FUNCTION_sqlalchemy$dialects$mssql$information_schema$$$function__3__compile();

        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 40;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_9 = mod_consts[66];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_5;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_6;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_7;
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_9 == NULL)) {
                tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_10 = mod_consts[67];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_10 == NULL)) {
                tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_args_value_6);
            goto tuple_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_kwargs_value_5 = DICT_COPY(mod_consts[68]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 56;
            tmp_tuple_element_9 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_6);
            Py_DECREF(tmp_kwargs_value_5);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_args_value_5, 2, tmp_tuple_element_9);
            tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_10 == NULL)) {
                tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_11 = mod_consts[69];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_11);
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_args_value_7);
            goto tuple_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_kwargs_value_6 = DICT_COPY(mod_consts[70]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 57;
            tmp_tuple_element_9 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_7, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_7);
            Py_DECREF(tmp_kwargs_value_6);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_args_value_5, 3, tmp_tuple_element_9);
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_12 = mod_consts[71];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_12 == NULL)) {
                tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_12);
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_args_value_8);
            goto tuple_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_kwargs_value_7 = DICT_COPY(mod_consts[72]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 58;
            tmp_tuple_element_9 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_8, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_8);
            Py_DECREF(tmp_kwargs_value_7);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_args_value_5, 4, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_args_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_kwargs_value_8 = DICT_COPY(mod_consts[73]);
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 53;
        tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_5, tmp_kwargs_value_8);
        Py_DECREF(tmp_args_value_5);
        Py_DECREF(tmp_kwargs_value_8);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_value_13;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_13 = mod_consts[75];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_9;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_10;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_11;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kwargs_value_12;
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_13);
            tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_13 == NULL)) {
                tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_14 = mod_consts[76];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_14 == NULL)) {
                tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_14);
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_args_value_10);
            goto tuple_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_kwargs_value_9 = DICT_COPY(mod_consts[77]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 65;
            tmp_tuple_element_13 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_10, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_10);
            Py_DECREF(tmp_kwargs_value_9);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_args_value_9, 2, tmp_tuple_element_13);
            tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_14 == NULL)) {
                tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_15 = mod_consts[78];
            tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_15);
            tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_15 == NULL)) {
                tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_15);
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_args_value_11);
            goto tuple_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_kwargs_value_10 = DICT_COPY(mod_consts[79]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 66;
            tmp_tuple_element_13 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_11, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_11);
            Py_DECREF(tmp_kwargs_value_10);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_args_value_9, 3, tmp_tuple_element_13);
            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_15 == NULL)) {
                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_16 = mod_consts[80];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_16 == NULL)) {
                tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_16);
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_args_value_12);
            goto tuple_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_kwargs_value_11 = DICT_COPY(mod_consts[81]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 67;
            tmp_tuple_element_13 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_12, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_12);
            Py_DECREF(tmp_kwargs_value_11);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_args_value_9, 4, tmp_tuple_element_13);
            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_16 == NULL)) {
                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_17 = mod_consts[82];
            tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_17);
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_17);
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_args_value_13);
            goto tuple_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_kwargs_value_12 = DICT_COPY(mod_consts[83]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 68;
            tmp_tuple_element_13 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_13, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_13);
            Py_DECREF(tmp_kwargs_value_12);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_args_value_9, 5, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_args_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_kwargs_value_13 = DICT_COPY(mod_consts[73]);
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 62;
        tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_9, tmp_kwargs_value_13);
        Py_DECREF(tmp_args_value_9);
        Py_DECREF(tmp_kwargs_value_13);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_value_14;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_25;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_18 = mod_consts[85];
        tmp_args_value_14 = MAKE_TUPLE_EMPTY(13);
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_15;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kwargs_value_14;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_15;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_17;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_16;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kwargs_value_17;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_19;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kwargs_value_18;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_19;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_value_21;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_kwargs_value_20;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_kwargs_value_21;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_value_23;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kwargs_value_22;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_value_24;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_kwargs_value_23;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_value_25;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_kwargs_value_24;
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_18 == NULL)) {
                tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_18);
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto tuple_build_exception_12;
            }
            tmp_tuple_element_19 = mod_consts[78];
            tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_19);
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_19);
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_args_value_15);
            goto tuple_build_exception_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_kwargs_value_14 = DICT_COPY(mod_consts[79]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 75;
            tmp_tuple_element_18 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_15, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_15);
            Py_DECREF(tmp_kwargs_value_14);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_args_value_14, 2, tmp_tuple_element_18);
            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_19 == NULL)) {
                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto tuple_build_exception_12;
            }
            tmp_tuple_element_20 = mod_consts[80];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_20);
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_args_value_16);
            goto tuple_build_exception_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_kwargs_value_15 = DICT_COPY(mod_consts[81]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 76;
            tmp_tuple_element_18 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_16, tmp_kwargs_value_15);
            Py_DECREF(tmp_args_value_16);
            Py_DECREF(tmp_kwargs_value_15);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_args_value_14, 3, tmp_tuple_element_18);
            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_20 == NULL)) {
                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto tuple_build_exception_12;
            }
            tmp_tuple_element_21 = mod_consts[86];
            tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_21);
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_21);
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_args_value_17);
            goto tuple_build_exception_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_kwargs_value_16 = DICT_COPY(mod_consts[87]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 77;
            tmp_tuple_element_18 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_17, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_17);
            Py_DECREF(tmp_kwargs_value_16);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_args_value_14, 4, tmp_tuple_element_18);
            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_21 == NULL)) {
                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto tuple_build_exception_12;
            }
            tmp_tuple_element_22 = mod_consts[88];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_tuple_element_22 == NULL)) {
                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_22);
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_args_value_18);
            goto tuple_build_exception_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_kwargs_value_17 = DICT_COPY(mod_consts[89]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 78;
            tmp_tuple_element_18 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_18, tmp_kwargs_value_17);
            Py_DECREF(tmp_args_value_18);
            Py_DECREF(tmp_kwargs_value_17);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_args_value_14, 5, tmp_tuple_element_18);
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto tuple_build_exception_12;
            }
            tmp_tuple_element_23 = mod_consts[90];
            tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_23);
            tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_23 == NULL)) {
                tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_23);
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_args_value_19);
            goto tuple_build_exception_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_kwargs_value_18 = DICT_COPY(mod_consts[91]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 79;
            tmp_tuple_element_18 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_19, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_19);
            Py_DECREF(tmp_kwargs_value_18);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_args_value_14, 6, tmp_tuple_element_18);
            tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_23 == NULL)) {
                tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto tuple_build_exception_12;
            }
            tmp_tuple_element_24 = mod_consts[92];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_24);
            tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_tuple_element_24 == NULL)) {
                tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_tuple_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_24);
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_args_value_20);
            goto tuple_build_exception_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            tmp_kwargs_value_19 = DICT_COPY(mod_consts[93]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 80;
            tmp_tuple_element_18 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_20, tmp_kwargs_value_19);
            Py_DECREF(tmp_args_value_20);
            Py_DECREF(tmp_kwargs_value_19);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_args_value_14, 7, tmp_tuple_element_18);
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_12;
            }
            tmp_tuple_element_25 = mod_consts[94];
            tmp_args_value_21 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_25);
            tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_tuple_element_25 == NULL)) {
                tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_tuple_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_25);
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_args_value_21);
            goto tuple_build_exception_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            tmp_kwargs_value_20 = DICT_COPY(mod_consts[95]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 81;
            tmp_tuple_element_18 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_21, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_21);
            Py_DECREF(tmp_kwargs_value_20);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_args_value_14, 8, tmp_tuple_element_18);
            tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_25 == NULL)) {
                tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto tuple_build_exception_12;
            }
            tmp_tuple_element_26 = mod_consts[96];
            tmp_args_value_22 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_26);
            tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_tuple_element_26 == NULL)) {
                tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_26);
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_args_value_22);
            goto tuple_build_exception_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            tmp_kwargs_value_21 = DICT_COPY(mod_consts[97]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 84;
            tmp_tuple_element_18 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_22, tmp_kwargs_value_21);
            Py_DECREF(tmp_args_value_22);
            Py_DECREF(tmp_kwargs_value_21);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_args_value_14, 9, tmp_tuple_element_18);
            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_26 == NULL)) {
                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto tuple_build_exception_12;
            }
            tmp_tuple_element_27 = mod_consts[98];
            tmp_args_value_23 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_27);
            tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_tuple_element_27 == NULL)) {
                tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_tuple_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_27);
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_21:;
            Py_DECREF(tmp_args_value_23);
            goto tuple_build_exception_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            tmp_kwargs_value_22 = DICT_COPY(mod_consts[99]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 85;
            tmp_tuple_element_18 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_23, tmp_kwargs_value_22);
            Py_DECREF(tmp_args_value_23);
            Py_DECREF(tmp_kwargs_value_22);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_args_value_14, 10, tmp_tuple_element_18);
            tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_27 == NULL)) {
                tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto tuple_build_exception_12;
            }
            tmp_tuple_element_28 = mod_consts[100];
            tmp_args_value_24 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_28);
            tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_tuple_element_28 == NULL)) {
                tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_28);
            goto tuple_build_noexception_21;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_22:;
            Py_DECREF(tmp_args_value_24);
            goto tuple_build_exception_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_21:;
            tmp_kwargs_value_23 = DICT_COPY(mod_consts[101]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 86;
            tmp_tuple_element_18 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_24, tmp_kwargs_value_23);
            Py_DECREF(tmp_args_value_24);
            Py_DECREF(tmp_kwargs_value_23);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_args_value_14, 11, tmp_tuple_element_18);
            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_28 == NULL)) {
                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto tuple_build_exception_12;
            }
            tmp_tuple_element_29 = mod_consts[102];
            tmp_args_value_25 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_29);
            tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_29 == NULL)) {
                tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_29);
            goto tuple_build_noexception_22;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_23:;
            Py_DECREF(tmp_args_value_25);
            goto tuple_build_exception_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_22:;
            tmp_kwargs_value_24 = DICT_COPY(mod_consts[103]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 87;
            tmp_tuple_element_18 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_25, tmp_kwargs_value_24);
            Py_DECREF(tmp_args_value_25);
            Py_DECREF(tmp_kwargs_value_24);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_args_value_14, 12, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_args_value_14);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_kwargs_value_25 = DICT_COPY(mod_consts[73]);
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 72;
        tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_14, tmp_kwargs_value_25);
        Py_DECREF(tmp_args_value_14);
        Py_DECREF(tmp_kwargs_value_25);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_value_26;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_kwargs_value_37;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_30 = mod_consts[85];
        tmp_args_value_26 = MAKE_TUPLE_EMPTY(13);
        {
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_value_27;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_kwargs_value_26;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_value_28;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_kwargs_value_27;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_value_29;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_kwargs_value_28;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_value_30;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_kwargs_value_29;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_value_31;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_kwargs_value_30;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_value_32;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_kwargs_value_31;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_value_33;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_kwargs_value_32;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_value_34;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_kwargs_value_33;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_value_35;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_kwargs_value_34;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_value_36;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_kwargs_value_35;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_value_37;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_kwargs_value_36;
            PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_30);
            tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_30 == NULL)) {
                tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
            }

            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_30);
            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_30 == NULL)) {
                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_24;
            }
            tmp_tuple_element_31 = mod_consts[78];
            tmp_args_value_27 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_31);
            tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_31 == NULL)) {
                tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_31);
            goto tuple_build_noexception_24;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_25:;
            Py_DECREF(tmp_args_value_27);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_24:;
            tmp_kwargs_value_26 = DICT_COPY(mod_consts[79]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 94;
            tmp_tuple_element_30 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_27, tmp_kwargs_value_26);
            Py_DECREF(tmp_args_value_27);
            Py_DECREF(tmp_kwargs_value_26);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_26, 2, tmp_tuple_element_30);
            tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_31 == NULL)) {
                tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_24;
            }
            tmp_tuple_element_32 = mod_consts[80];
            tmp_args_value_28 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_32);
            tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_32 == NULL)) {
                tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_32);
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_args_value_28);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            tmp_kwargs_value_27 = DICT_COPY(mod_consts[81]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 95;
            tmp_tuple_element_30 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_28, tmp_kwargs_value_27);
            Py_DECREF(tmp_args_value_28);
            Py_DECREF(tmp_kwargs_value_27);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_26, 3, tmp_tuple_element_30);
            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_32 == NULL)) {
                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto tuple_build_exception_24;
            }
            tmp_tuple_element_33 = mod_consts[86];
            tmp_args_value_29 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_33);
            tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_33 == NULL)) {
                tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_33);
            goto tuple_build_noexception_26;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_27:;
            Py_DECREF(tmp_args_value_29);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_26:;
            tmp_kwargs_value_28 = DICT_COPY(mod_consts[87]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 96;
            tmp_tuple_element_30 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_29, tmp_kwargs_value_28);
            Py_DECREF(tmp_args_value_29);
            Py_DECREF(tmp_kwargs_value_28);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_26, 4, tmp_tuple_element_30);
            tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_33 == NULL)) {
                tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_24;
            }
            tmp_tuple_element_34 = mod_consts[88];
            tmp_args_value_30 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_34);
            tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_tuple_element_34 == NULL)) {
                tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_34);
            goto tuple_build_noexception_27;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_28:;
            Py_DECREF(tmp_args_value_30);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_27:;
            tmp_kwargs_value_29 = DICT_COPY(mod_consts[89]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 97;
            tmp_tuple_element_30 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_30, tmp_kwargs_value_29);
            Py_DECREF(tmp_args_value_30);
            Py_DECREF(tmp_kwargs_value_29);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_26, 5, tmp_tuple_element_30);
            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_34 == NULL)) {
                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto tuple_build_exception_24;
            }
            tmp_tuple_element_35 = mod_consts[90];
            tmp_args_value_31 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_35);
            tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_35 == NULL)) {
                tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_35);
            goto tuple_build_noexception_28;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_29:;
            Py_DECREF(tmp_args_value_31);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_28:;
            tmp_kwargs_value_30 = DICT_COPY(mod_consts[91]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 98;
            tmp_tuple_element_30 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_31, tmp_kwargs_value_30);
            Py_DECREF(tmp_args_value_31);
            Py_DECREF(tmp_kwargs_value_30);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_26, 6, tmp_tuple_element_30);
            tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_35 == NULL)) {
                tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto tuple_build_exception_24;
            }
            tmp_tuple_element_36 = mod_consts[92];
            tmp_args_value_32 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_36);
            tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_tuple_element_36 == NULL)) {
                tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_tuple_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto tuple_build_exception_30;
            }
            PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_36);
            goto tuple_build_noexception_29;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_30:;
            Py_DECREF(tmp_args_value_32);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_29:;
            tmp_kwargs_value_31 = DICT_COPY(mod_consts[93]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 99;
            tmp_tuple_element_30 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_32, tmp_kwargs_value_31);
            Py_DECREF(tmp_args_value_32);
            Py_DECREF(tmp_kwargs_value_31);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_26, 7, tmp_tuple_element_30);
            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_36 == NULL)) {
                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_24;
            }
            tmp_tuple_element_37 = mod_consts[94];
            tmp_args_value_33 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_37);
            tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_tuple_element_37 == NULL)) {
                tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_37);
            goto tuple_build_noexception_30;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_31:;
            Py_DECREF(tmp_args_value_33);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_30:;
            tmp_kwargs_value_32 = DICT_COPY(mod_consts[95]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 100;
            tmp_tuple_element_30 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_33, tmp_kwargs_value_32);
            Py_DECREF(tmp_args_value_33);
            Py_DECREF(tmp_kwargs_value_32);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_26, 8, tmp_tuple_element_30);
            tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_37 == NULL)) {
                tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_24;
            }
            tmp_tuple_element_38 = mod_consts[96];
            tmp_args_value_34 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_38);
            tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_tuple_element_38 == NULL)) {
                tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_tuple_element_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_32;
            }
            PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_38);
            goto tuple_build_noexception_31;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_32:;
            Py_DECREF(tmp_args_value_34);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_31:;
            tmp_kwargs_value_33 = DICT_COPY(mod_consts[97]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 103;
            tmp_tuple_element_30 = CALL_FUNCTION(tstate, tmp_called_value_37, tmp_args_value_34, tmp_kwargs_value_33);
            Py_DECREF(tmp_args_value_34);
            Py_DECREF(tmp_kwargs_value_33);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_26, 9, tmp_tuple_element_30);
            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_38 == NULL)) {
                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_24;
            }
            tmp_tuple_element_39 = mod_consts[98];
            tmp_args_value_35 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_39);
            tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_tuple_element_39 == NULL)) {
                tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_tuple_element_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_39);
            goto tuple_build_noexception_32;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_33:;
            Py_DECREF(tmp_args_value_35);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_32:;
            tmp_kwargs_value_34 = DICT_COPY(mod_consts[99]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 104;
            tmp_tuple_element_30 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_35, tmp_kwargs_value_34);
            Py_DECREF(tmp_args_value_35);
            Py_DECREF(tmp_kwargs_value_34);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_26, 10, tmp_tuple_element_30);
            tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_39 == NULL)) {
                tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_24;
            }
            tmp_tuple_element_40 = mod_consts[100];
            tmp_args_value_36 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_40);
            tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_tuple_element_40 == NULL)) {
                tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_tuple_element_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_34;
            }
            PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_40);
            goto tuple_build_noexception_33;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_34:;
            Py_DECREF(tmp_args_value_36);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_33:;
            tmp_kwargs_value_35 = DICT_COPY(mod_consts[101]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 105;
            tmp_tuple_element_30 = CALL_FUNCTION(tstate, tmp_called_value_39, tmp_args_value_36, tmp_kwargs_value_35);
            Py_DECREF(tmp_args_value_36);
            Py_DECREF(tmp_kwargs_value_35);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_26, 11, tmp_tuple_element_30);
            tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_40 == NULL)) {
                tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_24;
            }
            tmp_tuple_element_41 = mod_consts[102];
            tmp_args_value_37 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_41);
            tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_41 == NULL)) {
                tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_35;
            }
            PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_41);
            goto tuple_build_noexception_34;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_35:;
            Py_DECREF(tmp_args_value_37);
            goto tuple_build_exception_24;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_34:;
            tmp_kwargs_value_36 = DICT_COPY(mod_consts[103]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 106;
            tmp_tuple_element_30 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_37, tmp_kwargs_value_36);
            Py_DECREF(tmp_args_value_37);
            Py_DECREF(tmp_kwargs_value_36);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_args_value_26, 12, tmp_tuple_element_30);
        }
        goto tuple_build_noexception_35;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_args_value_26);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_35:;
        tmp_kwargs_value_37 = DICT_COPY(mod_consts[105]);
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 91;
        tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_26, tmp_kwargs_value_37);
        Py_DECREF(tmp_args_value_26);
        Py_DECREF(tmp_kwargs_value_37);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_value_38;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_kwargs_value_42;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_42 = mod_consts[107];
        tmp_args_value_38 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_value_39;
            PyObject *tmp_tuple_element_43;
            PyObject *tmp_kwargs_value_38;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_value_40;
            PyObject *tmp_tuple_element_44;
            PyObject *tmp_kwargs_value_39;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_value_41;
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_kwargs_value_40;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_value_42;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_kwargs_value_41;
            PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_42);
            tmp_tuple_element_42 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_42 == NULL)) {
                tmp_tuple_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_42);
            tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_42 == NULL)) {
                tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_36;
            }
            tmp_tuple_element_43 = mod_consts[78];
            tmp_args_value_39 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_39, 0, tmp_tuple_element_43);
            tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_43 == NULL)) {
                tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_37;
            }
            PyTuple_SET_ITEM0(tmp_args_value_39, 1, tmp_tuple_element_43);
            goto tuple_build_noexception_36;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_37:;
            Py_DECREF(tmp_args_value_39);
            goto tuple_build_exception_36;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_36:;
            tmp_kwargs_value_38 = DICT_COPY(mod_consts[79]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 113;
            tmp_tuple_element_42 = CALL_FUNCTION(tstate, tmp_called_value_42, tmp_args_value_39, tmp_kwargs_value_38);
            Py_DECREF(tmp_args_value_39);
            Py_DECREF(tmp_kwargs_value_38);
            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM(tmp_args_value_38, 2, tmp_tuple_element_42);
            tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_43 == NULL)) {
                tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_36;
            }
            tmp_tuple_element_44 = mod_consts[80];
            tmp_args_value_40 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_40, 0, tmp_tuple_element_44);
            tmp_tuple_element_44 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_44 == NULL)) {
                tmp_tuple_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_38;
            }
            PyTuple_SET_ITEM0(tmp_args_value_40, 1, tmp_tuple_element_44);
            goto tuple_build_noexception_37;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_38:;
            Py_DECREF(tmp_args_value_40);
            goto tuple_build_exception_36;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_37:;
            tmp_kwargs_value_39 = DICT_COPY(mod_consts[81]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 114;
            tmp_tuple_element_42 = CALL_FUNCTION(tstate, tmp_called_value_43, tmp_args_value_40, tmp_kwargs_value_39);
            Py_DECREF(tmp_args_value_40);
            Py_DECREF(tmp_kwargs_value_39);
            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM(tmp_args_value_38, 3, tmp_tuple_element_42);
            tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_44 == NULL)) {
                tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_36;
            }
            tmp_tuple_element_45 = mod_consts[108];
            tmp_args_value_41 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_41, 0, tmp_tuple_element_45);
            tmp_tuple_element_45 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_45 == NULL)) {
                tmp_tuple_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_39;
            }
            PyTuple_SET_ITEM0(tmp_args_value_41, 1, tmp_tuple_element_45);
            goto tuple_build_noexception_38;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_39:;
            Py_DECREF(tmp_args_value_41);
            goto tuple_build_exception_36;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_38:;
            tmp_kwargs_value_40 = DICT_COPY(mod_consts[109]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 115;
            tmp_tuple_element_42 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_41, tmp_kwargs_value_40);
            Py_DECREF(tmp_args_value_41);
            Py_DECREF(tmp_kwargs_value_40);
            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM(tmp_args_value_38, 4, tmp_tuple_element_42);
            tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_45 == NULL)) {
                tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto tuple_build_exception_36;
            }
            tmp_tuple_element_46 = mod_consts[110];
            tmp_args_value_42 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_42, 0, tmp_tuple_element_46);
            tmp_tuple_element_46 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_46 == NULL)) {
                tmp_tuple_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto tuple_build_exception_40;
            }
            PyTuple_SET_ITEM0(tmp_args_value_42, 1, tmp_tuple_element_46);
            goto tuple_build_noexception_39;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_40:;
            Py_DECREF(tmp_args_value_42);
            goto tuple_build_exception_36;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_39:;
            tmp_kwargs_value_41 = DICT_COPY(mod_consts[111]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 116;
            tmp_tuple_element_42 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_42, tmp_kwargs_value_41);
            Py_DECREF(tmp_args_value_42);
            Py_DECREF(tmp_kwargs_value_41);
            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM(tmp_args_value_38, 5, tmp_tuple_element_42);
        }
        goto tuple_build_noexception_40;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_36:;
        Py_DECREF(tmp_args_value_38);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_40:;
        tmp_kwargs_value_42 = DICT_COPY(mod_consts[73]);
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 110;
        tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_41, tmp_args_value_38, tmp_kwargs_value_42);
        Py_DECREF(tmp_args_value_38);
        Py_DECREF(tmp_kwargs_value_42);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_46;
        PyObject *tmp_args_value_43;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_kwargs_value_47;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_47 = mod_consts[113];
        tmp_args_value_43 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_value_44;
            PyObject *tmp_tuple_element_48;
            PyObject *tmp_kwargs_value_43;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_value_45;
            PyObject *tmp_tuple_element_49;
            PyObject *tmp_kwargs_value_44;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_value_46;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_kwargs_value_45;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_value_47;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_kwargs_value_46;
            PyTuple_SET_ITEM0(tmp_args_value_43, 0, tmp_tuple_element_47);
            tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_47 == NULL)) {
                tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
            }

            if (tmp_tuple_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto tuple_build_exception_41;
            }
            PyTuple_SET_ITEM0(tmp_args_value_43, 1, tmp_tuple_element_47);
            tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_47 == NULL)) {
                tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto tuple_build_exception_41;
            }
            tmp_tuple_element_48 = mod_consts[78];
            tmp_args_value_44 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_44, 0, tmp_tuple_element_48);
            tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_48 == NULL)) {
                tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto tuple_build_exception_42;
            }
            PyTuple_SET_ITEM0(tmp_args_value_44, 1, tmp_tuple_element_48);
            goto tuple_build_noexception_41;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_42:;
            Py_DECREF(tmp_args_value_44);
            goto tuple_build_exception_41;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_41:;
            tmp_kwargs_value_43 = DICT_COPY(mod_consts[79]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 123;
            tmp_tuple_element_47 = CALL_FUNCTION(tstate, tmp_called_value_47, tmp_args_value_44, tmp_kwargs_value_43);
            Py_DECREF(tmp_args_value_44);
            Py_DECREF(tmp_kwargs_value_43);
            if (tmp_tuple_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto tuple_build_exception_41;
            }
            PyTuple_SET_ITEM(tmp_args_value_43, 2, tmp_tuple_element_47);
            tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_48 == NULL)) {
                tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto tuple_build_exception_41;
            }
            tmp_tuple_element_49 = mod_consts[80];
            tmp_args_value_45 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_45, 0, tmp_tuple_element_49);
            tmp_tuple_element_49 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_49 == NULL)) {
                tmp_tuple_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto tuple_build_exception_43;
            }
            PyTuple_SET_ITEM0(tmp_args_value_45, 1, tmp_tuple_element_49);
            goto tuple_build_noexception_42;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_43:;
            Py_DECREF(tmp_args_value_45);
            goto tuple_build_exception_41;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_42:;
            tmp_kwargs_value_44 = DICT_COPY(mod_consts[81]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 124;
            tmp_tuple_element_47 = CALL_FUNCTION(tstate, tmp_called_value_48, tmp_args_value_45, tmp_kwargs_value_44);
            Py_DECREF(tmp_args_value_45);
            Py_DECREF(tmp_kwargs_value_44);
            if (tmp_tuple_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto tuple_build_exception_41;
            }
            PyTuple_SET_ITEM(tmp_args_value_43, 3, tmp_tuple_element_47);
            tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_49 == NULL)) {
                tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto tuple_build_exception_41;
            }
            tmp_tuple_element_50 = mod_consts[86];
            tmp_args_value_46 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_46, 0, tmp_tuple_element_50);
            tmp_tuple_element_50 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_50 == NULL)) {
                tmp_tuple_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto tuple_build_exception_44;
            }
            PyTuple_SET_ITEM0(tmp_args_value_46, 1, tmp_tuple_element_50);
            goto tuple_build_noexception_43;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_44:;
            Py_DECREF(tmp_args_value_46);
            goto tuple_build_exception_41;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_43:;
            tmp_kwargs_value_45 = DICT_COPY(mod_consts[87]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 125;
            tmp_tuple_element_47 = CALL_FUNCTION(tstate, tmp_called_value_49, tmp_args_value_46, tmp_kwargs_value_45);
            Py_DECREF(tmp_args_value_46);
            Py_DECREF(tmp_kwargs_value_45);
            if (tmp_tuple_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto tuple_build_exception_41;
            }
            PyTuple_SET_ITEM(tmp_args_value_43, 4, tmp_tuple_element_47);
            tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_50 == NULL)) {
                tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto tuple_build_exception_41;
            }
            tmp_tuple_element_51 = mod_consts[108];
            tmp_args_value_47 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_47, 0, tmp_tuple_element_51);
            tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_51 == NULL)) {
                tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto tuple_build_exception_45;
            }
            PyTuple_SET_ITEM0(tmp_args_value_47, 1, tmp_tuple_element_51);
            goto tuple_build_noexception_44;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_45:;
            Py_DECREF(tmp_args_value_47);
            goto tuple_build_exception_41;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_44:;
            tmp_kwargs_value_46 = DICT_COPY(mod_consts[109]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 126;
            tmp_tuple_element_47 = CALL_FUNCTION(tstate, tmp_called_value_50, tmp_args_value_47, tmp_kwargs_value_46);
            Py_DECREF(tmp_args_value_47);
            Py_DECREF(tmp_kwargs_value_46);
            if (tmp_tuple_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto tuple_build_exception_41;
            }
            PyTuple_SET_ITEM(tmp_args_value_43, 5, tmp_tuple_element_47);
        }
        goto tuple_build_noexception_45;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_41:;
        Py_DECREF(tmp_args_value_43);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_45:;
        tmp_kwargs_value_47 = DICT_COPY(mod_consts[73]);
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 120;
        tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_46, tmp_args_value_43, tmp_kwargs_value_47);
        Py_DECREF(tmp_args_value_43);
        Py_DECREF(tmp_kwargs_value_47);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_51;
        PyObject *tmp_args_value_48;
        PyObject *tmp_tuple_element_52;
        PyObject *tmp_kwargs_value_54;
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_52 = mod_consts[115];
        tmp_args_value_48 = MAKE_TUPLE_EMPTY(8);
        {
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_value_49;
            PyObject *tmp_tuple_element_53;
            PyObject *tmp_kwargs_value_48;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_value_50;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_kwargs_value_49;
            PyObject *tmp_called_value_54;
            PyObject *tmp_args_value_51;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_kwargs_value_50;
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_value_52;
            PyObject *tmp_tuple_element_56;
            PyObject *tmp_kwargs_value_51;
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_value_53;
            PyObject *tmp_tuple_element_57;
            PyObject *tmp_kwargs_value_52;
            PyObject *tmp_called_value_57;
            PyObject *tmp_args_value_54;
            PyObject *tmp_tuple_element_58;
            PyObject *tmp_kwargs_value_53;
            PyTuple_SET_ITEM0(tmp_args_value_48, 0, tmp_tuple_element_52);
            tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_52 == NULL)) {
                tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
            }

            if (tmp_tuple_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto tuple_build_exception_46;
            }
            PyTuple_SET_ITEM0(tmp_args_value_48, 1, tmp_tuple_element_52);
            tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_52 == NULL)) {
                tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto tuple_build_exception_46;
            }
            tmp_tuple_element_53 = mod_consts[78];
            tmp_args_value_49 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_49, 0, tmp_tuple_element_53);
            tmp_tuple_element_53 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_53 == NULL)) {
                tmp_tuple_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto tuple_build_exception_47;
            }
            PyTuple_SET_ITEM0(tmp_args_value_49, 1, tmp_tuple_element_53);
            goto tuple_build_noexception_46;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_47:;
            Py_DECREF(tmp_args_value_49);
            goto tuple_build_exception_46;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_46:;
            tmp_kwargs_value_48 = DICT_COPY(mod_consts[79]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 133;
            tmp_tuple_element_52 = CALL_FUNCTION(tstate, tmp_called_value_52, tmp_args_value_49, tmp_kwargs_value_48);
            Py_DECREF(tmp_args_value_49);
            Py_DECREF(tmp_kwargs_value_48);
            if (tmp_tuple_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto tuple_build_exception_46;
            }
            PyTuple_SET_ITEM(tmp_args_value_48, 2, tmp_tuple_element_52);
            tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_53 == NULL)) {
                tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto tuple_build_exception_46;
            }
            tmp_tuple_element_54 = mod_consts[80];
            tmp_args_value_50 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_50, 0, tmp_tuple_element_54);
            tmp_tuple_element_54 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_54 == NULL)) {
                tmp_tuple_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto tuple_build_exception_48;
            }
            PyTuple_SET_ITEM0(tmp_args_value_50, 1, tmp_tuple_element_54);
            goto tuple_build_noexception_47;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_48:;
            Py_DECREF(tmp_args_value_50);
            goto tuple_build_exception_46;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_47:;
            tmp_kwargs_value_49 = DICT_COPY(mod_consts[81]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 134;
            tmp_tuple_element_52 = CALL_FUNCTION(tstate, tmp_called_value_53, tmp_args_value_50, tmp_kwargs_value_49);
            Py_DECREF(tmp_args_value_50);
            Py_DECREF(tmp_kwargs_value_49);
            if (tmp_tuple_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto tuple_build_exception_46;
            }
            PyTuple_SET_ITEM(tmp_args_value_48, 3, tmp_tuple_element_52);
            tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_54 == NULL)) {
                tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto tuple_build_exception_46;
            }
            tmp_tuple_element_55 = mod_consts[86];
            tmp_args_value_51 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_51, 0, tmp_tuple_element_55);
            tmp_tuple_element_55 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_55 == NULL)) {
                tmp_tuple_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto tuple_build_exception_49;
            }
            PyTuple_SET_ITEM0(tmp_args_value_51, 1, tmp_tuple_element_55);
            goto tuple_build_noexception_48;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_49:;
            Py_DECREF(tmp_args_value_51);
            goto tuple_build_exception_46;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_48:;
            tmp_kwargs_value_50 = DICT_COPY(mod_consts[87]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 135;
            tmp_tuple_element_52 = CALL_FUNCTION(tstate, tmp_called_value_54, tmp_args_value_51, tmp_kwargs_value_50);
            Py_DECREF(tmp_args_value_51);
            Py_DECREF(tmp_kwargs_value_50);
            if (tmp_tuple_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto tuple_build_exception_46;
            }
            PyTuple_SET_ITEM(tmp_args_value_48, 4, tmp_tuple_element_52);
            tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_55 == NULL)) {
                tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto tuple_build_exception_46;
            }
            tmp_tuple_element_56 = mod_consts[108];
            tmp_args_value_52 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_52, 0, tmp_tuple_element_56);
            tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_56 == NULL)) {
                tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto tuple_build_exception_50;
            }
            PyTuple_SET_ITEM0(tmp_args_value_52, 1, tmp_tuple_element_56);
            goto tuple_build_noexception_49;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_50:;
            Py_DECREF(tmp_args_value_52);
            goto tuple_build_exception_46;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_49:;
            tmp_kwargs_value_51 = DICT_COPY(mod_consts[109]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 136;
            tmp_tuple_element_52 = CALL_FUNCTION(tstate, tmp_called_value_55, tmp_args_value_52, tmp_kwargs_value_51);
            Py_DECREF(tmp_args_value_52);
            Py_DECREF(tmp_kwargs_value_51);
            if (tmp_tuple_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto tuple_build_exception_46;
            }
            PyTuple_SET_ITEM(tmp_args_value_48, 5, tmp_tuple_element_52);
            tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_56 == NULL)) {
                tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto tuple_build_exception_46;
            }
            tmp_tuple_element_57 = mod_consts[116];
            tmp_args_value_53 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_53, 0, tmp_tuple_element_57);
            tmp_tuple_element_57 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_57 == NULL)) {
                tmp_tuple_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto tuple_build_exception_51;
            }
            PyTuple_SET_ITEM0(tmp_args_value_53, 1, tmp_tuple_element_57);
            goto tuple_build_noexception_50;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_51:;
            Py_DECREF(tmp_args_value_53);
            goto tuple_build_exception_46;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_50:;
            tmp_kwargs_value_52 = DICT_COPY(mod_consts[117]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 137;
            tmp_tuple_element_52 = CALL_FUNCTION(tstate, tmp_called_value_56, tmp_args_value_53, tmp_kwargs_value_52);
            Py_DECREF(tmp_args_value_53);
            Py_DECREF(tmp_kwargs_value_52);
            if (tmp_tuple_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto tuple_build_exception_46;
            }
            PyTuple_SET_ITEM(tmp_args_value_48, 6, tmp_tuple_element_52);
            tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_57 == NULL)) {
                tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto tuple_build_exception_46;
            }
            tmp_tuple_element_58 = mod_consts[92];
            tmp_args_value_54 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_54, 0, tmp_tuple_element_58);
            tmp_tuple_element_58 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_tuple_element_58 == NULL)) {
                tmp_tuple_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_tuple_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM0(tmp_args_value_54, 1, tmp_tuple_element_58);
            goto tuple_build_noexception_51;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_52:;
            Py_DECREF(tmp_args_value_54);
            goto tuple_build_exception_46;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_51:;
            tmp_kwargs_value_53 = DICT_COPY(mod_consts[93]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 138;
            tmp_tuple_element_52 = CALL_FUNCTION(tstate, tmp_called_value_57, tmp_args_value_54, tmp_kwargs_value_53);
            Py_DECREF(tmp_args_value_54);
            Py_DECREF(tmp_kwargs_value_53);
            if (tmp_tuple_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto tuple_build_exception_46;
            }
            PyTuple_SET_ITEM(tmp_args_value_48, 7, tmp_tuple_element_52);
        }
        goto tuple_build_noexception_52;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_46:;
        Py_DECREF(tmp_args_value_48);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_52:;
        tmp_kwargs_value_54 = DICT_COPY(mod_consts[73]);
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 130;
        tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_51, tmp_args_value_48, tmp_kwargs_value_54);
        Py_DECREF(tmp_args_value_48);
        Py_DECREF(tmp_kwargs_value_54);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_58;
        PyObject *tmp_args_value_55;
        PyObject *tmp_tuple_element_59;
        PyObject *tmp_kwargs_value_64;
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_59 = mod_consts[119];
        tmp_args_value_55 = MAKE_TUPLE_EMPTY(11);
        {
            PyObject *tmp_called_value_59;
            PyObject *tmp_args_value_56;
            PyObject *tmp_tuple_element_60;
            PyObject *tmp_kwargs_value_55;
            PyObject *tmp_called_value_60;
            PyObject *tmp_args_value_57;
            PyObject *tmp_tuple_element_61;
            PyObject *tmp_kwargs_value_56;
            PyObject *tmp_called_value_61;
            PyObject *tmp_args_value_58;
            PyObject *tmp_tuple_element_62;
            PyObject *tmp_kwargs_value_57;
            PyObject *tmp_called_value_62;
            PyObject *tmp_args_value_59;
            PyObject *tmp_tuple_element_63;
            PyObject *tmp_kwargs_value_58;
            PyObject *tmp_called_value_63;
            PyObject *tmp_args_value_60;
            PyObject *tmp_tuple_element_64;
            PyObject *tmp_kwargs_value_59;
            PyObject *tmp_called_value_64;
            PyObject *tmp_args_value_61;
            PyObject *tmp_tuple_element_65;
            PyObject *tmp_kwargs_value_60;
            PyObject *tmp_called_value_65;
            PyObject *tmp_args_value_62;
            PyObject *tmp_tuple_element_66;
            PyObject *tmp_kwargs_value_61;
            PyObject *tmp_called_value_66;
            PyObject *tmp_args_value_63;
            PyObject *tmp_tuple_element_67;
            PyObject *tmp_kwargs_value_62;
            PyObject *tmp_called_value_67;
            PyObject *tmp_args_value_64;
            PyObject *tmp_tuple_element_68;
            PyObject *tmp_kwargs_value_63;
            PyTuple_SET_ITEM0(tmp_args_value_55, 0, tmp_tuple_element_59);
            tmp_tuple_element_59 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_59 == NULL)) {
                tmp_tuple_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
            }

            if (tmp_tuple_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM0(tmp_args_value_55, 1, tmp_tuple_element_59);
            tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_59 == NULL)) {
                tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_53;
            }
            tmp_tuple_element_60 = mod_consts[120];
            tmp_args_value_56 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_56, 0, tmp_tuple_element_60);
            tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_60 == NULL)) {
                tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_54;
            }
            PyTuple_SET_ITEM0(tmp_args_value_56, 1, tmp_tuple_element_60);
            goto tuple_build_noexception_53;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_54:;
            Py_DECREF(tmp_args_value_56);
            goto tuple_build_exception_53;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_53:;
            tmp_kwargs_value_55 = DICT_COPY(mod_consts[121]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 145;
            tmp_tuple_element_59 = CALL_FUNCTION(tstate, tmp_called_value_59, tmp_args_value_56, tmp_kwargs_value_55);
            Py_DECREF(tmp_args_value_56);
            Py_DECREF(tmp_kwargs_value_55);
            if (tmp_tuple_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_args_value_55, 2, tmp_tuple_element_59);
            tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_60 == NULL)) {
                tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_53;
            }
            tmp_tuple_element_61 = mod_consts[116];
            tmp_args_value_57 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_57, 0, tmp_tuple_element_61);
            tmp_tuple_element_61 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_61 == NULL)) {
                tmp_tuple_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_55;
            }
            PyTuple_SET_ITEM0(tmp_args_value_57, 1, tmp_tuple_element_61);
            goto tuple_build_noexception_54;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_55:;
            Py_DECREF(tmp_args_value_57);
            goto tuple_build_exception_53;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_54:;
            tmp_kwargs_value_56 = DICT_COPY(mod_consts[117]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 146;
            tmp_tuple_element_59 = CALL_FUNCTION(tstate, tmp_called_value_60, tmp_args_value_57, tmp_kwargs_value_56);
            Py_DECREF(tmp_args_value_57);
            Py_DECREF(tmp_kwargs_value_56);
            if (tmp_tuple_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_args_value_55, 3, tmp_tuple_element_59);
            tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_61 == NULL)) {
                tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto tuple_build_exception_53;
            }
            tmp_tuple_element_62 = mod_consts[108];
            tmp_args_value_58 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_58, 0, tmp_tuple_element_62);
            tmp_tuple_element_62 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_62 == NULL)) {
                tmp_tuple_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto tuple_build_exception_56;
            }
            PyTuple_SET_ITEM0(tmp_args_value_58, 1, tmp_tuple_element_62);
            goto tuple_build_noexception_55;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_56:;
            Py_DECREF(tmp_args_value_58);
            goto tuple_build_exception_53;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_55:;
            tmp_kwargs_value_57 = DICT_COPY(mod_consts[109]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 147;
            tmp_tuple_element_59 = CALL_FUNCTION(tstate, tmp_called_value_61, tmp_args_value_58, tmp_kwargs_value_57);
            Py_DECREF(tmp_args_value_58);
            Py_DECREF(tmp_kwargs_value_57);
            if (tmp_tuple_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_args_value_55, 4, tmp_tuple_element_59);
            tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_62 == NULL)) {
                tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_53;
            }
            tmp_tuple_element_63 = mod_consts[122];
            tmp_args_value_59 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_59, 0, tmp_tuple_element_63);
            tmp_tuple_element_63 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_63 == NULL)) {
                tmp_tuple_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto tuple_build_exception_57;
            }
            PyTuple_SET_ITEM0(tmp_args_value_59, 1, tmp_tuple_element_63);
            goto tuple_build_noexception_56;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_57:;
            Py_DECREF(tmp_args_value_59);
            goto tuple_build_exception_53;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_56:;
            tmp_kwargs_value_58 = DICT_COPY(mod_consts[123]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 149;
            tmp_tuple_element_59 = CALL_FUNCTION(tstate, tmp_called_value_62, tmp_args_value_59, tmp_kwargs_value_58);
            Py_DECREF(tmp_args_value_59);
            Py_DECREF(tmp_kwargs_value_58);
            if (tmp_tuple_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_args_value_55, 5, tmp_tuple_element_59);
            tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_63 == NULL)) {
                tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto tuple_build_exception_53;
            }
            tmp_tuple_element_64 = mod_consts[124];
            tmp_args_value_60 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_60, 0, tmp_tuple_element_64);
            tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_64 == NULL)) {
                tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto tuple_build_exception_58;
            }
            PyTuple_SET_ITEM0(tmp_args_value_60, 1, tmp_tuple_element_64);
            goto tuple_build_noexception_57;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_58:;
            Py_DECREF(tmp_args_value_60);
            goto tuple_build_exception_53;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_57:;
            tmp_kwargs_value_59 = DICT_COPY(mod_consts[125]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 154;
            tmp_tuple_element_59 = CALL_FUNCTION(tstate, tmp_called_value_63, tmp_args_value_60, tmp_kwargs_value_59);
            Py_DECREF(tmp_args_value_60);
            Py_DECREF(tmp_kwargs_value_59);
            if (tmp_tuple_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_args_value_55, 6, tmp_tuple_element_59);
            tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_64 == NULL)) {
                tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto tuple_build_exception_53;
            }
            tmp_tuple_element_65 = mod_consts[126];
            tmp_args_value_61 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_61, 0, tmp_tuple_element_65);
            tmp_tuple_element_65 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_65 == NULL)) {
                tmp_tuple_element_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_59;
            }
            PyTuple_SET_ITEM0(tmp_args_value_61, 1, tmp_tuple_element_65);
            goto tuple_build_noexception_58;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_59:;
            Py_DECREF(tmp_args_value_61);
            goto tuple_build_exception_53;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_58:;
            tmp_kwargs_value_60 = DICT_COPY(mod_consts[127]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 159;
            tmp_tuple_element_59 = CALL_FUNCTION(tstate, tmp_called_value_64, tmp_args_value_61, tmp_kwargs_value_60);
            Py_DECREF(tmp_args_value_61);
            Py_DECREF(tmp_kwargs_value_60);
            if (tmp_tuple_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_args_value_55, 7, tmp_tuple_element_59);
            tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_65 == NULL)) {
                tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_53;
            }
            tmp_tuple_element_66 = mod_consts[128];
            tmp_args_value_62 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_62, 0, tmp_tuple_element_66);
            tmp_tuple_element_66 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_66 == NULL)) {
                tmp_tuple_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_60;
            }
            PyTuple_SET_ITEM0(tmp_args_value_62, 1, tmp_tuple_element_66);
            goto tuple_build_noexception_59;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_60:;
            Py_DECREF(tmp_args_value_62);
            goto tuple_build_exception_53;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_59:;
            tmp_kwargs_value_61 = DICT_COPY(mod_consts[129]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 162;
            tmp_tuple_element_59 = CALL_FUNCTION(tstate, tmp_called_value_65, tmp_args_value_62, tmp_kwargs_value_61);
            Py_DECREF(tmp_args_value_62);
            Py_DECREF(tmp_kwargs_value_61);
            if (tmp_tuple_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_args_value_55, 8, tmp_tuple_element_59);
            tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_66 == NULL)) {
                tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_53;
            }
            tmp_tuple_element_67 = mod_consts[130];
            tmp_args_value_63 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_63, 0, tmp_tuple_element_67);
            tmp_tuple_element_67 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_67 == NULL)) {
                tmp_tuple_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_61;
            }
            PyTuple_SET_ITEM0(tmp_args_value_63, 1, tmp_tuple_element_67);
            goto tuple_build_noexception_60;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_61:;
            Py_DECREF(tmp_args_value_63);
            goto tuple_build_exception_53;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_60:;
            tmp_kwargs_value_62 = DICT_COPY(mod_consts[131]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 163;
            tmp_tuple_element_59 = CALL_FUNCTION(tstate, tmp_called_value_66, tmp_args_value_63, tmp_kwargs_value_62);
            Py_DECREF(tmp_args_value_63);
            Py_DECREF(tmp_kwargs_value_62);
            if (tmp_tuple_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_args_value_55, 9, tmp_tuple_element_59);
            tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_67 == NULL)) {
                tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto tuple_build_exception_53;
            }
            tmp_tuple_element_68 = mod_consts[132];
            tmp_args_value_64 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_64, 0, tmp_tuple_element_68);
            tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_68 == NULL)) {
                tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto tuple_build_exception_62;
            }
            PyTuple_SET_ITEM0(tmp_args_value_64, 1, tmp_tuple_element_68);
            goto tuple_build_noexception_61;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_62:;
            Py_DECREF(tmp_args_value_64);
            goto tuple_build_exception_53;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_61:;
            tmp_kwargs_value_63 = DICT_COPY(mod_consts[133]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 164;
            tmp_tuple_element_59 = CALL_FUNCTION(tstate, tmp_called_value_67, tmp_args_value_64, tmp_kwargs_value_63);
            Py_DECREF(tmp_args_value_64);
            Py_DECREF(tmp_kwargs_value_63);
            if (tmp_tuple_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_args_value_55, 10, tmp_tuple_element_59);
        }
        goto tuple_build_noexception_62;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_53:;
        Py_DECREF(tmp_args_value_55);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_62:;
        tmp_kwargs_value_64 = DICT_COPY(mod_consts[73]);
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 142;
        tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_58, tmp_args_value_55, tmp_kwargs_value_64);
        Py_DECREF(tmp_args_value_55);
        Py_DECREF(tmp_kwargs_value_64);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_68;
        PyObject *tmp_args_value_65;
        PyObject *tmp_tuple_element_69;
        PyObject *tmp_kwargs_value_71;
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_69 = mod_consts[135];
        tmp_args_value_65 = MAKE_TUPLE_EMPTY(8);
        {
            PyObject *tmp_called_value_69;
            PyObject *tmp_args_value_66;
            PyObject *tmp_tuple_element_70;
            PyObject *tmp_kwargs_value_65;
            PyObject *tmp_called_value_70;
            PyObject *tmp_args_value_67;
            PyObject *tmp_tuple_element_71;
            PyObject *tmp_kwargs_value_66;
            PyObject *tmp_called_value_71;
            PyObject *tmp_args_value_68;
            PyObject *tmp_tuple_element_72;
            PyObject *tmp_kwargs_value_67;
            PyObject *tmp_called_value_72;
            PyObject *tmp_args_value_69;
            PyObject *tmp_tuple_element_73;
            PyObject *tmp_kwargs_value_68;
            PyObject *tmp_called_value_73;
            PyObject *tmp_args_value_70;
            PyObject *tmp_tuple_element_74;
            PyObject *tmp_kwargs_value_69;
            PyObject *tmp_called_value_74;
            PyObject *tmp_args_value_71;
            PyObject *tmp_tuple_element_75;
            PyObject *tmp_kwargs_value_70;
            PyTuple_SET_ITEM0(tmp_args_value_65, 0, tmp_tuple_element_69);
            tmp_tuple_element_69 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_69 == NULL)) {
                tmp_tuple_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
            }

            if (tmp_tuple_element_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_63;
            }
            PyTuple_SET_ITEM0(tmp_args_value_65, 1, tmp_tuple_element_69);
            tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_69 == NULL)) {
                tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_63;
            }
            tmp_tuple_element_70 = mod_consts[76];
            tmp_args_value_66 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_66, 0, tmp_tuple_element_70);
            tmp_tuple_element_70 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_70 == NULL)) {
                tmp_tuple_element_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_64;
            }
            PyTuple_SET_ITEM0(tmp_args_value_66, 1, tmp_tuple_element_70);
            goto tuple_build_noexception_63;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_64:;
            Py_DECREF(tmp_args_value_66);
            goto tuple_build_exception_63;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_63:;
            tmp_kwargs_value_65 = DICT_COPY(mod_consts[77]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 171;
            tmp_tuple_element_69 = CALL_FUNCTION(tstate, tmp_called_value_69, tmp_args_value_66, tmp_kwargs_value_65);
            Py_DECREF(tmp_args_value_66);
            Py_DECREF(tmp_kwargs_value_65);
            if (tmp_tuple_element_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_63;
            }
            PyTuple_SET_ITEM(tmp_args_value_65, 2, tmp_tuple_element_69);
            tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_70 == NULL)) {
                tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto tuple_build_exception_63;
            }
            tmp_tuple_element_71 = mod_consts[78];
            tmp_args_value_67 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_67, 0, tmp_tuple_element_71);
            tmp_tuple_element_71 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_71 == NULL)) {
                tmp_tuple_element_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto tuple_build_exception_65;
            }
            PyTuple_SET_ITEM0(tmp_args_value_67, 1, tmp_tuple_element_71);
            goto tuple_build_noexception_64;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_65:;
            Py_DECREF(tmp_args_value_67);
            goto tuple_build_exception_63;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_64:;
            tmp_kwargs_value_66 = DICT_COPY(mod_consts[79]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 172;
            tmp_tuple_element_69 = CALL_FUNCTION(tstate, tmp_called_value_70, tmp_args_value_67, tmp_kwargs_value_66);
            Py_DECREF(tmp_args_value_67);
            Py_DECREF(tmp_kwargs_value_66);
            if (tmp_tuple_element_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto tuple_build_exception_63;
            }
            PyTuple_SET_ITEM(tmp_args_value_65, 3, tmp_tuple_element_69);
            tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_71 == NULL)) {
                tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto tuple_build_exception_63;
            }
            tmp_tuple_element_72 = mod_consts[80];
            tmp_args_value_68 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_68, 0, tmp_tuple_element_72);
            tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_72 == NULL)) {
                tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto tuple_build_exception_66;
            }
            PyTuple_SET_ITEM0(tmp_args_value_68, 1, tmp_tuple_element_72);
            goto tuple_build_noexception_65;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_66:;
            Py_DECREF(tmp_args_value_68);
            goto tuple_build_exception_63;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_65:;
            tmp_kwargs_value_67 = DICT_COPY(mod_consts[81]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 173;
            tmp_tuple_element_69 = CALL_FUNCTION(tstate, tmp_called_value_71, tmp_args_value_68, tmp_kwargs_value_67);
            Py_DECREF(tmp_args_value_68);
            Py_DECREF(tmp_kwargs_value_67);
            if (tmp_tuple_element_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto tuple_build_exception_63;
            }
            PyTuple_SET_ITEM(tmp_args_value_65, 4, tmp_tuple_element_69);
            tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_72 == NULL)) {
                tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto tuple_build_exception_63;
            }
            tmp_tuple_element_73 = mod_consts[136];
            tmp_args_value_69 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_69, 0, tmp_tuple_element_73);
            tmp_tuple_element_73 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_73 == NULL)) {
                tmp_tuple_element_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto tuple_build_exception_67;
            }
            PyTuple_SET_ITEM0(tmp_args_value_69, 1, tmp_tuple_element_73);
            goto tuple_build_noexception_66;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_67:;
            Py_DECREF(tmp_args_value_69);
            goto tuple_build_exception_63;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_66:;
            tmp_kwargs_value_68 = DICT_COPY(mod_consts[137]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 174;
            tmp_tuple_element_69 = CALL_FUNCTION(tstate, tmp_called_value_72, tmp_args_value_69, tmp_kwargs_value_68);
            Py_DECREF(tmp_args_value_69);
            Py_DECREF(tmp_kwargs_value_68);
            if (tmp_tuple_element_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto tuple_build_exception_63;
            }
            PyTuple_SET_ITEM(tmp_args_value_65, 5, tmp_tuple_element_69);
            tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_73 == NULL)) {
                tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto tuple_build_exception_63;
            }
            tmp_tuple_element_74 = mod_consts[138];
            tmp_args_value_70 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_70, 0, tmp_tuple_element_74);
            tmp_tuple_element_74 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_74 == NULL)) {
                tmp_tuple_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto tuple_build_exception_68;
            }
            PyTuple_SET_ITEM0(tmp_args_value_70, 1, tmp_tuple_element_74);
            goto tuple_build_noexception_67;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_68:;
            Py_DECREF(tmp_args_value_70);
            goto tuple_build_exception_63;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_67:;
            tmp_kwargs_value_69 = DICT_COPY(mod_consts[139]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 175;
            tmp_tuple_element_69 = CALL_FUNCTION(tstate, tmp_called_value_73, tmp_args_value_70, tmp_kwargs_value_69);
            Py_DECREF(tmp_args_value_70);
            Py_DECREF(tmp_kwargs_value_69);
            if (tmp_tuple_element_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto tuple_build_exception_63;
            }
            PyTuple_SET_ITEM(tmp_args_value_65, 6, tmp_tuple_element_69);
            tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_74 == NULL)) {
                tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto tuple_build_exception_63;
            }
            tmp_tuple_element_75 = mod_consts[140];
            tmp_args_value_71 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_71, 0, tmp_tuple_element_75);
            tmp_tuple_element_75 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_75 == NULL)) {
                tmp_tuple_element_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto tuple_build_exception_69;
            }
            PyTuple_SET_ITEM0(tmp_args_value_71, 1, tmp_tuple_element_75);
            goto tuple_build_noexception_68;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_69:;
            Py_DECREF(tmp_args_value_71);
            goto tuple_build_exception_63;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_68:;
            tmp_kwargs_value_70 = DICT_COPY(mod_consts[141]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 176;
            tmp_tuple_element_69 = CALL_FUNCTION(tstate, tmp_called_value_74, tmp_args_value_71, tmp_kwargs_value_70);
            Py_DECREF(tmp_args_value_71);
            Py_DECREF(tmp_kwargs_value_70);
            if (tmp_tuple_element_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto tuple_build_exception_63;
            }
            PyTuple_SET_ITEM(tmp_args_value_65, 7, tmp_tuple_element_69);
        }
        goto tuple_build_noexception_69;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_63:;
        Py_DECREF(tmp_args_value_65);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_69:;
        tmp_kwargs_value_71 = DICT_COPY(mod_consts[73]);
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 168;
        tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_68, tmp_args_value_65, tmp_kwargs_value_71);
        Py_DECREF(tmp_args_value_65);
        Py_DECREF(tmp_kwargs_value_71);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_75;
        PyObject *tmp_args_value_72;
        PyObject *tmp_tuple_element_76;
        PyObject *tmp_kwargs_value_72;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_76 = mod_consts[143];
        tmp_args_value_72 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_called_value_76;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_77;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_called_value_78;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_called_value_79;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_called_value_80;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_args_element_value_12;
            PyTuple_SET_ITEM0(tmp_args_value_72, 0, tmp_tuple_element_76);
            tmp_tuple_element_76 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_76 == NULL)) {
                tmp_tuple_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
            }

            if (tmp_tuple_element_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto tuple_build_exception_70;
            }
            PyTuple_SET_ITEM0(tmp_args_value_72, 1, tmp_tuple_element_76);
            tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_76 == NULL)) {
                tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto tuple_build_exception_70;
            }
            tmp_args_element_value_3 = mod_consts[144];
            tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_args_element_value_4 == NULL)) {
                tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_args_element_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto tuple_build_exception_70;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 183;
            {
                PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
                tmp_tuple_element_76 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_76, call_args);
            }

            if (tmp_tuple_element_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto tuple_build_exception_70;
            }
            PyTuple_SET_ITEM(tmp_args_value_72, 2, tmp_tuple_element_76);
            tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_77 == NULL)) {
                tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto tuple_build_exception_70;
            }
            tmp_args_element_value_5 = mod_consts[145];
            tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_args_element_value_6 == NULL)) {
                tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_args_element_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto tuple_build_exception_70;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 184;
            {
                PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_tuple_element_76 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_77, call_args);
            }

            if (tmp_tuple_element_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto tuple_build_exception_70;
            }
            PyTuple_SET_ITEM(tmp_args_value_72, 3, tmp_tuple_element_76);
            tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_78 == NULL)) {
                tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto tuple_build_exception_70;
            }
            tmp_args_element_value_7 = mod_consts[146];
            tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_args_element_value_8 == NULL)) {
                tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
            }

            if (tmp_args_element_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto tuple_build_exception_70;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 185;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
                tmp_tuple_element_76 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_78, call_args);
            }

            if (tmp_tuple_element_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto tuple_build_exception_70;
            }
            PyTuple_SET_ITEM(tmp_args_value_72, 4, tmp_tuple_element_76);
            tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_79 == NULL)) {
                tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto tuple_build_exception_70;
            }
            tmp_args_element_value_9 = mod_consts[147];
            tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_args_element_value_10 == NULL)) {
                tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
            }

            if (tmp_args_element_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto tuple_build_exception_70;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 186;
            {
                PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
                tmp_tuple_element_76 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_79, call_args);
            }

            if (tmp_tuple_element_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto tuple_build_exception_70;
            }
            PyTuple_SET_ITEM(tmp_args_value_72, 5, tmp_tuple_element_76);
            tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_80 == NULL)) {
                tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto tuple_build_exception_70;
            }
            tmp_args_element_value_11 = mod_consts[148];
            tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_args_element_value_12 == NULL)) {
                tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_args_element_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto tuple_build_exception_70;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 187;
            {
                PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
                tmp_tuple_element_76 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_80, call_args);
            }

            if (tmp_tuple_element_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto tuple_build_exception_70;
            }
            PyTuple_SET_ITEM(tmp_args_value_72, 6, tmp_tuple_element_76);
        }
        goto tuple_build_noexception_70;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_70:;
        Py_DECREF(tmp_args_value_72);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_70:;
        tmp_kwargs_value_72 = DICT_COPY(mod_consts[149]);
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 180;
        tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_75, tmp_args_value_72, tmp_kwargs_value_72);
        Py_DECREF(tmp_args_value_72);
        Py_DECREF(tmp_kwargs_value_72);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_81;
        PyObject *tmp_args_value_73;
        PyObject *tmp_tuple_element_77;
        PyObject *tmp_kwargs_value_76;
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_77 = mod_consts[150];
        tmp_args_value_73 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_called_value_82;
            PyObject *tmp_args_value_74;
            PyObject *tmp_tuple_element_78;
            PyObject *tmp_kwargs_value_73;
            PyObject *tmp_called_value_83;
            PyObject *tmp_args_value_75;
            PyObject *tmp_tuple_element_79;
            PyObject *tmp_kwargs_value_74;
            PyObject *tmp_called_value_84;
            PyObject *tmp_args_value_76;
            PyObject *tmp_tuple_element_80;
            PyObject *tmp_kwargs_value_75;
            PyTuple_SET_ITEM0(tmp_args_value_73, 0, tmp_tuple_element_77);
            tmp_tuple_element_77 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_77 == NULL)) {
                tmp_tuple_element_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
            }

            if (tmp_tuple_element_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto tuple_build_exception_71;
            }
            PyTuple_SET_ITEM0(tmp_args_value_73, 1, tmp_tuple_element_77);
            tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_82 == NULL)) {
                tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto tuple_build_exception_71;
            }
            tmp_tuple_element_78 = mod_consts[151];
            tmp_args_value_74 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_74, 0, tmp_tuple_element_78);
            tmp_tuple_element_78 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_78 == NULL)) {
                tmp_tuple_element_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto tuple_build_exception_72;
            }
            PyTuple_SET_ITEM0(tmp_args_value_74, 1, tmp_tuple_element_78);
            goto tuple_build_noexception_71;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_72:;
            Py_DECREF(tmp_args_value_74);
            goto tuple_build_exception_71;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_71:;
            tmp_kwargs_value_73 = DICT_COPY(mod_consts[152]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 194;
            tmp_tuple_element_77 = CALL_FUNCTION(tstate, tmp_called_value_82, tmp_args_value_74, tmp_kwargs_value_73);
            Py_DECREF(tmp_args_value_74);
            Py_DECREF(tmp_kwargs_value_73);
            if (tmp_tuple_element_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto tuple_build_exception_71;
            }
            PyTuple_SET_ITEM(tmp_args_value_73, 2, tmp_tuple_element_77);
            tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_83 == NULL)) {
                tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto tuple_build_exception_71;
            }
            tmp_tuple_element_79 = mod_consts[153];
            tmp_args_value_75 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_75, 0, tmp_tuple_element_79);
            tmp_tuple_element_79 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_79 == NULL)) {
                tmp_tuple_element_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto tuple_build_exception_73;
            }
            PyTuple_SET_ITEM0(tmp_args_value_75, 1, tmp_tuple_element_79);
            goto tuple_build_noexception_72;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_73:;
            Py_DECREF(tmp_args_value_75);
            goto tuple_build_exception_71;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_72:;
            tmp_kwargs_value_74 = DICT_COPY(mod_consts[154]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 195;
            tmp_tuple_element_77 = CALL_FUNCTION(tstate, tmp_called_value_83, tmp_args_value_75, tmp_kwargs_value_74);
            Py_DECREF(tmp_args_value_75);
            Py_DECREF(tmp_kwargs_value_74);
            if (tmp_tuple_element_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto tuple_build_exception_71;
            }
            PyTuple_SET_ITEM(tmp_args_value_73, 3, tmp_tuple_element_77);
            tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_84 == NULL)) {
                tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto tuple_build_exception_71;
            }
            tmp_tuple_element_80 = mod_consts[155];
            tmp_args_value_76 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_76, 0, tmp_tuple_element_80);
            tmp_tuple_element_80 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_tuple_element_80 == NULL)) {
                tmp_tuple_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_tuple_element_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto tuple_build_exception_74;
            }
            PyTuple_SET_ITEM0(tmp_args_value_76, 1, tmp_tuple_element_80);
            goto tuple_build_noexception_73;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_74:;
            Py_DECREF(tmp_args_value_76);
            goto tuple_build_exception_71;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_73:;
            tmp_kwargs_value_75 = DICT_COPY(mod_consts[156]);
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 196;
            tmp_tuple_element_77 = CALL_FUNCTION(tstate, tmp_called_value_84, tmp_args_value_76, tmp_kwargs_value_75);
            Py_DECREF(tmp_args_value_76);
            Py_DECREF(tmp_kwargs_value_75);
            if (tmp_tuple_element_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto tuple_build_exception_71;
            }
            PyTuple_SET_ITEM(tmp_args_value_73, 4, tmp_tuple_element_77);
        }
        goto tuple_build_noexception_74;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_71:;
        Py_DECREF(tmp_args_value_73);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_74:;
        tmp_kwargs_value_76 = DICT_COPY(mod_consts[73]);
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 191;
        tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_81, tmp_args_value_73, tmp_kwargs_value_76);
        Py_DECREF(tmp_args_value_73);
        Py_DECREF(tmp_kwargs_value_76);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_45);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_tuple_element_81;
        tmp_tuple_element_81 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_tuple_element_81 == NULL)) {
            tmp_tuple_element_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_tuple_element_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_7;
        }
        tmp_assign_source_46 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_46, 0, tmp_tuple_element_81);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_47 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

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
        tmp_expression_value_14 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[6];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_49 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_15 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts[48]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

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
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_value_77;
        PyObject *tmp_tuple_element_82;
        PyObject *tmp_kwargs_value_77;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_16 = tmp_class_creation_3__metaclass;
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[48]);
        if (tmp_called_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_7;
        }
        tmp_tuple_element_82 = mod_consts[158];
        tmp_args_value_77 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_77, 0, tmp_tuple_element_82);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_82 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_77, 1, tmp_tuple_element_82);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_77 = tmp_class_creation_3__class_decl_dict;
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 201;
        tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_85, tmp_args_value_77, tmp_kwargs_value_77);
        Py_DECREF(tmp_called_value_85);
        Py_DECREF(tmp_args_value_77);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_50;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_17 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

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
        PyObject *tmp_tuple_element_83;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_name_value_16;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[51];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_18 = tmp_class_creation_3__metaclass;
        tmp_name_value_16 = mod_consts[52];
        tmp_default_value_3 = mod_consts[53];
        tmp_tuple_element_83 = BUILTIN_GETATTR(tstate, tmp_expression_value_18, tmp_name_value_16, tmp_default_value_3);
        if (tmp_tuple_element_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_19;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_83);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_19 == NULL));
            tmp_tuple_element_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[52]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_tuple_element_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto tuple_build_exception_75;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_83);
        }
        goto tuple_build_noexception_75;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_75:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_75:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 201;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_51;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_52;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_sqlalchemy$dialects$mssql$information_schema$$$class__3_NumericSqlVariant_201 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__3_NumericSqlVariant_201, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[159];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__3_NumericSqlVariant_201, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[158];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__3_NumericSqlVariant_201, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_9;
        }
        frame_bc32dc40dc9592c25a301b86f05477b1_4 = MAKE_CLASS_FRAME(tstate, codeobj_bc32dc40dc9592c25a301b86f05477b1, module_sqlalchemy$dialects$mssql$information_schema, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_bc32dc40dc9592c25a301b86f05477b1_4);
        assert(Py_REFCNT(frame_bc32dc40dc9592c25a301b86f05477b1_4) == 2);

        // Framed code:
        tmp_dictset_value = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__3_NumericSqlVariant_201, mod_consts[12]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[12]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_2 = "o";
                    goto frame_exception_exit_4;
                }
                Py_INCREF(tmp_dictset_value);
            } else {
                goto frame_exception_exit_4;
            }
        }

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__3_NumericSqlVariant_201, mod_consts[57], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__3_NumericSqlVariant_201, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$information_schema$$$function__4_column_expression();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__3_NumericSqlVariant_201, mod_consts[160], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bc32dc40dc9592c25a301b86f05477b1_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bc32dc40dc9592c25a301b86f05477b1_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bc32dc40dc9592c25a301b86f05477b1_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bc32dc40dc9592c25a301b86f05477b1_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_bc32dc40dc9592c25a301b86f05477b1_4);

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


                exception_lineno = 201;

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
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__3_NumericSqlVariant_201, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto try_except_handler_9;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_called_value_86;
            PyObject *tmp_args_value_78;
            PyObject *tmp_tuple_element_84;
            PyObject *tmp_kwargs_value_78;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_86 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_84 = mod_consts[158];
            tmp_args_value_78 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_78, 0, tmp_tuple_element_84);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_84 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_78, 1, tmp_tuple_element_84);
            tmp_tuple_element_84 = locals_sqlalchemy$dialects$mssql$information_schema$$$class__3_NumericSqlVariant_201;
            PyTuple_SET_ITEM0(tmp_args_value_78, 2, tmp_tuple_element_84);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_78 = tmp_class_creation_3__class_decl_dict;
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 201;
            tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_86, tmp_args_value_78, tmp_kwargs_value_78);
            Py_DECREF(tmp_args_value_78);
            if (tmp_assign_source_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_53;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_52 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_52);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$information_schema$$$class__3_NumericSqlVariant_201);
        locals_sqlalchemy$dialects$mssql$information_schema$$$class__3_NumericSqlVariant_201 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$mssql$information_schema$$$class__3_NumericSqlVariant_201);
        locals_sqlalchemy$dialects$mssql$information_schema$$$class__3_NumericSqlVariant_201 = NULL;
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
        exception_lineno = 201;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_52);
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
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_87;
        PyObject *tmp_args_value_79;
        PyObject *tmp_tuple_element_85;
        PyObject *tmp_kwargs_value_79;
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_85 = mod_consts[162];
        tmp_args_value_79 = MAKE_TUPLE_EMPTY(9);
        {
            PyObject *tmp_called_value_88;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_called_value_89;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_called_value_90;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_called_value_91;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_called_value_92;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_called_value_93;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_called_value_94;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_args_element_value_26;
            PyTuple_SET_ITEM0(tmp_args_value_79, 0, tmp_tuple_element_85);
            tmp_tuple_element_85 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_85 == NULL)) {
                tmp_tuple_element_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
            }

            if (tmp_tuple_element_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto tuple_build_exception_76;
            }
            PyTuple_SET_ITEM0(tmp_args_value_79, 1, tmp_tuple_element_85);
            tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_88 == NULL)) {
                tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto tuple_build_exception_76;
            }
            tmp_args_element_value_13 = mod_consts[144];
            tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_args_element_value_14 == NULL)) {
                tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_args_element_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto tuple_build_exception_76;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 220;
            {
                PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
                tmp_tuple_element_85 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_88, call_args);
            }

            if (tmp_tuple_element_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto tuple_build_exception_76;
            }
            PyTuple_SET_ITEM(tmp_args_value_79, 2, tmp_tuple_element_85);
            tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_89 == NULL)) {
                tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto tuple_build_exception_76;
            }
            tmp_args_element_value_15 = mod_consts[145];
            tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_args_element_value_16 == NULL)) {
                tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_args_element_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto tuple_build_exception_76;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 221;
            {
                PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
                tmp_tuple_element_85 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_89, call_args);
            }

            if (tmp_tuple_element_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto tuple_build_exception_76;
            }
            PyTuple_SET_ITEM(tmp_args_value_79, 3, tmp_tuple_element_85);
            tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_90 == NULL)) {
                tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto tuple_build_exception_76;
            }
            tmp_args_element_value_17 = mod_consts[163];
            tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_args_element_value_18 == NULL)) {
                tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
            }

            if (tmp_args_element_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto tuple_build_exception_76;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 222;
            {
                PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
                tmp_tuple_element_85 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_90, call_args);
            }

            if (tmp_tuple_element_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto tuple_build_exception_76;
            }
            PyTuple_SET_ITEM(tmp_args_value_79, 4, tmp_tuple_element_85);
            tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_91 == NULL)) {
                tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_76;
            }
            tmp_args_element_value_19 = mod_consts[164];
            tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[158]);

            if (unlikely(tmp_args_element_value_20 == NULL)) {
                tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[158]);
            }

            if (tmp_args_element_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_76;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 223;
            {
                PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
                tmp_tuple_element_85 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_91, call_args);
            }

            if (tmp_tuple_element_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_76;
            }
            PyTuple_SET_ITEM(tmp_args_value_79, 5, tmp_tuple_element_85);
            tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_92 == NULL)) {
                tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_76;
            }
            tmp_args_element_value_21 = mod_consts[165];
            tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[158]);

            if (unlikely(tmp_args_element_value_22 == NULL)) {
                tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[158]);
            }

            if (tmp_args_element_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_76;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 224;
            {
                PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
                tmp_tuple_element_85 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_92, call_args);
            }

            if (tmp_tuple_element_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_76;
            }
            PyTuple_SET_ITEM(tmp_args_value_79, 6, tmp_tuple_element_85);
            tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_93 == NULL)) {
                tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto tuple_build_exception_76;
            }
            tmp_args_element_value_23 = mod_consts[166];
            tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[158]);

            if (unlikely(tmp_args_element_value_24 == NULL)) {
                tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[158]);
            }

            if (tmp_args_element_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto tuple_build_exception_76;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 225;
            {
                PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
                tmp_tuple_element_85 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_93, call_args);
            }

            if (tmp_tuple_element_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto tuple_build_exception_76;
            }
            PyTuple_SET_ITEM(tmp_args_value_79, 7, tmp_tuple_element_85);
            tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_94 == NULL)) {
                tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto tuple_build_exception_76;
            }
            tmp_args_element_value_25 = mod_consts[167];
            tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_args_element_value_26 == NULL)) {
                tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
            }

            if (tmp_args_element_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto tuple_build_exception_76;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 226;
            {
                PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
                tmp_tuple_element_85 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_94, call_args);
            }

            if (tmp_tuple_element_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto tuple_build_exception_76;
            }
            PyTuple_SET_ITEM(tmp_args_value_79, 8, tmp_tuple_element_85);
        }
        goto tuple_build_noexception_76;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_76:;
        Py_DECREF(tmp_args_value_79);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_76:;
        tmp_kwargs_value_79 = DICT_COPY(mod_consts[149]);
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 217;
        tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_87, tmp_args_value_79, tmp_kwargs_value_79);
        Py_DECREF(tmp_args_value_79);
        Py_DECREF(tmp_kwargs_value_79);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_54);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_tuple_element_86;
        tmp_tuple_element_86 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_tuple_element_86 == NULL)) {
            tmp_tuple_element_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_tuple_element_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_10;
        }
        tmp_assign_source_55 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_55, 0, tmp_tuple_element_86);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_56 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

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
        tmp_expression_value_20 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[6];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_10;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_58 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_58;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_21 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts[48]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

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
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_95;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_value_80;
        PyObject *tmp_tuple_element_87;
        PyObject *tmp_kwargs_value_80;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_22 = tmp_class_creation_4__metaclass;
        tmp_called_value_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[48]);
        if (tmp_called_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_10;
        }
        tmp_tuple_element_87 = mod_consts[168];
        tmp_args_value_80 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_80, 0, tmp_tuple_element_87);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_87 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_80, 1, tmp_tuple_element_87);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_80 = tmp_class_creation_4__class_decl_dict;
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 231;
        tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_95, tmp_args_value_80, tmp_kwargs_value_80);
        Py_DECREF(tmp_called_value_95);
        Py_DECREF(tmp_args_value_80);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_59;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_23 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

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
        PyObject *tmp_tuple_element_88;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_name_value_17;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[51];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_24 = tmp_class_creation_4__metaclass;
        tmp_name_value_17 = mod_consts[52];
        tmp_default_value_4 = mod_consts[53];
        tmp_tuple_element_88 = BUILTIN_GETATTR(tstate, tmp_expression_value_24, tmp_name_value_17, tmp_default_value_4);
        if (tmp_tuple_element_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_88);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[52]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto tuple_build_exception_77;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_88);
        }
        goto tuple_build_noexception_77;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_77:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_77:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 231;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_60;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_61;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_sqlalchemy$dialects$mssql$information_schema$$$class__4_NVarcharSqlVariant_231 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__4_NVarcharSqlVariant_231, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__4_NVarcharSqlVariant_231, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[168];
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__4_NVarcharSqlVariant_231, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_12;
        }
        frame_e93bd44b39b8d6815f49a1d33372fbe1_5 = MAKE_CLASS_FRAME(tstate, codeobj_e93bd44b39b8d6815f49a1d33372fbe1, module_sqlalchemy$dialects$mssql$information_schema, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_e93bd44b39b8d6815f49a1d33372fbe1_5);
        assert(Py_REFCNT(frame_e93bd44b39b8d6815f49a1d33372fbe1_5) == 2);

        // Framed code:
        tmp_dictset_value = PyObject_GetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__4_NVarcharSqlVariant_231, mod_consts[12]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[12]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 236;
                    type_description_2 = "o";
                    goto frame_exception_exit_5;
                }
                Py_INCREF(tmp_dictset_value);
            } else {
                goto frame_exception_exit_5;
            }
        }

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__4_NVarcharSqlVariant_231, mod_consts[57], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__4_NVarcharSqlVariant_231, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_sqlalchemy$dialects$mssql$information_schema$$$function__5_column_expression();

        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__4_NVarcharSqlVariant_231, mod_consts[160], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e93bd44b39b8d6815f49a1d33372fbe1_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e93bd44b39b8d6815f49a1d33372fbe1_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e93bd44b39b8d6815f49a1d33372fbe1_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e93bd44b39b8d6815f49a1d33372fbe1_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_e93bd44b39b8d6815f49a1d33372fbe1_5);

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


                exception_lineno = 231;

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
        tmp_res = PyObject_SetItem(locals_sqlalchemy$dialects$mssql$information_schema$$$class__4_NVarcharSqlVariant_231, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_12;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_called_value_96;
            PyObject *tmp_args_value_81;
            PyObject *tmp_tuple_element_89;
            PyObject *tmp_kwargs_value_81;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_96 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_89 = mod_consts[168];
            tmp_args_value_81 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_81, 0, tmp_tuple_element_89);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_89 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_81, 1, tmp_tuple_element_89);
            tmp_tuple_element_89 = locals_sqlalchemy$dialects$mssql$information_schema$$$class__4_NVarcharSqlVariant_231;
            PyTuple_SET_ITEM0(tmp_args_value_81, 2, tmp_tuple_element_89);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_81 = tmp_class_creation_4__class_decl_dict;
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 231;
            tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_96, tmp_args_value_81, tmp_kwargs_value_81);
            Py_DECREF(tmp_args_value_81);
            if (tmp_assign_source_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_62;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_61 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_61);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_sqlalchemy$dialects$mssql$information_schema$$$class__4_NVarcharSqlVariant_231);
        locals_sqlalchemy$dialects$mssql$information_schema$$$class__4_NVarcharSqlVariant_231 = NULL;
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

        Py_DECREF(locals_sqlalchemy$dialects$mssql$information_schema$$$class__4_NVarcharSqlVariant_231);
        locals_sqlalchemy$dialects$mssql$information_schema$$$class__4_NVarcharSqlVariant_231 = NULL;
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
        exception_lineno = 231;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_61);
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
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_97;
        PyObject *tmp_args_value_82;
        PyObject *tmp_tuple_element_90;
        PyObject *tmp_kwargs_value_82;
        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_97 == NULL)) {
            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_90 = mod_consts[171];
        tmp_args_value_82 = MAKE_TUPLE_EMPTY(8);
        {
            PyObject *tmp_called_value_98;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_called_value_99;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_called_value_100;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_called_value_101;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_called_value_102;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_called_value_103;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_args_element_value_38;
            PyTuple_SET_ITEM0(tmp_args_value_82, 0, tmp_tuple_element_90);
            tmp_tuple_element_90 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_tuple_element_90 == NULL)) {
                tmp_tuple_element_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
            }

            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto tuple_build_exception_78;
            }
            PyTuple_SET_ITEM0(tmp_args_value_82, 1, tmp_tuple_element_90);
            tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_98 == NULL)) {
                tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto tuple_build_exception_78;
            }
            tmp_args_element_value_27 = mod_consts[172];
            tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_args_element_value_28 == NULL)) {
                tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_args_element_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto tuple_build_exception_78;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 246;
            {
                PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
                tmp_tuple_element_90 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_98, call_args);
            }

            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto tuple_build_exception_78;
            }
            PyTuple_SET_ITEM(tmp_args_value_82, 2, tmp_tuple_element_90);
            tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_99 == NULL)) {
                tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto tuple_build_exception_78;
            }
            tmp_args_element_value_29 = mod_consts[173];
            tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_args_element_value_30 == NULL)) {
                tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_args_element_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto tuple_build_exception_78;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 247;
            {
                PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
                tmp_tuple_element_90 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_99, call_args);
            }

            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto tuple_build_exception_78;
            }
            PyTuple_SET_ITEM(tmp_args_value_82, 3, tmp_tuple_element_90);
            tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_100 == NULL)) {
                tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto tuple_build_exception_78;
            }
            tmp_args_element_value_31 = mod_consts[174];
            tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_args_element_value_32 == NULL)) {
                tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_args_element_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto tuple_build_exception_78;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 248;
            {
                PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
                tmp_tuple_element_90 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_100, call_args);
            }

            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto tuple_build_exception_78;
            }
            PyTuple_SET_ITEM(tmp_args_value_82, 4, tmp_tuple_element_90);
            tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_101 == NULL)) {
                tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto tuple_build_exception_78;
            }
            tmp_args_element_value_33 = mod_consts[175];
            tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_args_element_value_34 == NULL)) {
                tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
            }

            if (tmp_args_element_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto tuple_build_exception_78;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 249;
            {
                PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
                tmp_tuple_element_90 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_101, call_args);
            }

            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto tuple_build_exception_78;
            }
            PyTuple_SET_ITEM(tmp_args_value_82, 5, tmp_tuple_element_90);
            tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_102 == NULL)) {
                tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto tuple_build_exception_78;
            }
            tmp_args_element_value_35 = mod_consts[145];
            tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_args_element_value_36 == NULL)) {
                tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_args_element_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto tuple_build_exception_78;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 250;
            {
                PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
                tmp_tuple_element_90 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_102, call_args);
            }

            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto tuple_build_exception_78;
            }
            PyTuple_SET_ITEM(tmp_args_value_82, 6, tmp_tuple_element_90);
            tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_called_value_103 == NULL)) {
                tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_called_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto tuple_build_exception_78;
            }
            tmp_args_element_value_37 = mod_consts[176];
            tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[168]);

            if (unlikely(tmp_args_element_value_38 == NULL)) {
                tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[168]);
            }

            if (tmp_args_element_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto tuple_build_exception_78;
            }
            frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 251;
            {
                PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
                tmp_tuple_element_90 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_103, call_args);
            }

            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto tuple_build_exception_78;
            }
            PyTuple_SET_ITEM(tmp_args_value_82, 7, tmp_tuple_element_90);
        }
        goto tuple_build_noexception_78;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_78:;
        Py_DECREF(tmp_args_value_82);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_78:;
        tmp_kwargs_value_82 = DICT_COPY(mod_consts[149]);
        frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame.f_lineno = 243;
        tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_97, tmp_args_value_82, tmp_kwargs_value_82);
        Py_DECREF(tmp_args_value_82);
        Py_DECREF(tmp_kwargs_value_82);
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_63);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_5;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ccb77747ad63a9943d8079f5e881ed0a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ccb77747ad63a9943d8079f5e881ed0a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ccb77747ad63a9943d8079f5e881ed0a, exception_lineno);
    }



    assertFrameObject(frame_ccb77747ad63a9943d8079f5e881ed0a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_5:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlalchemy.dialects.mssql.information_schema", false);

    Py_INCREF(module_sqlalchemy$dialects$mssql$information_schema);
    return module_sqlalchemy$dialects$mssql$information_schema;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$dialects$mssql$information_schema, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlalchemy$dialects$mssql$information_schema", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
