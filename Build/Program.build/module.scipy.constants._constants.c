/* Generated code for Python module 'scipy.constants._constants'
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

/* The "module_scipy$constants$_constants" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$constants$_constants;
PyDictObject *moduledict_scipy$constants$_constants;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[292];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[292];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("scipy.constants._constants"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 292; i++) {
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
void checkModuleConstants_scipy$constants$_constants(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 292; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_892f6ebc4cf4c5e3506e4b73e0019807;
static PyCodeObject *codeobj_05369424c317acb1efd688fe7fff842a;
static PyCodeObject *codeobj_24c8342462260660be7c0954205dd489;
static PyCodeObject *codeobj_3f016772e389e81420c2b81d016e98c9;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[286]); CHECK_OBJECT(module_filename_obj);
    codeobj_892f6ebc4cf4c5e3506e4b73e0019807 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[287], mod_consts[287], NULL, NULL, 0, 0, 0);
    codeobj_05369424c317acb1efd688fe7fff842a = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[281], mod_consts[281], mod_consts[288], NULL, 3, 0, 0);
    codeobj_24c8342462260660be7c0954205dd489 = MAKE_CODE_OBJECT(module_filename_obj, 304, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[283], mod_consts[283], mod_consts[289], NULL, 1, 0, 0);
    codeobj_3f016772e389e81420c2b81d016e98c9 = MAKE_CODE_OBJECT(module_filename_obj, 334, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[285], mod_consts[285], mod_consts[290], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$constants$_constants$$$function__1_convert_temperature(PyObject *annotations);


static PyObject *MAKE_FUNCTION_scipy$constants$_constants$$$function__2_lambda2nu(PyObject *annotations);


static PyObject *MAKE_FUNCTION_scipy$constants$_constants$$$function__3_nu2lambda(PyObject *annotations);


// The module function definitions.
static PyObject *impl_scipy$constants$_constants$$$function__1_convert_temperature(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[0];
    PyObject *par_old_scale = python_pars[1];
    PyObject *par_new_scale = python_pars[2];
    PyObject *var_tempo = NULL;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_05369424c317acb1efd688fe7fff842a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_05369424c317acb1efd688fe7fff842a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_05369424c317acb1efd688fe7fff842a)) {
        Py_XDECREF(cache_frame_05369424c317acb1efd688fe7fff842a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05369424c317acb1efd688fe7fff842a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05369424c317acb1efd688fe7fff842a = MAKE_FUNCTION_FRAME(tstate, codeobj_05369424c317acb1efd688fe7fff842a, module_scipy$constants$_constants, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_05369424c317acb1efd688fe7fff842a->m_type_description == NULL);
    frame_05369424c317acb1efd688fe7fff842a = cache_frame_05369424c317acb1efd688fe7fff842a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_05369424c317acb1efd688fe7fff842a);
    assert(Py_REFCNT(frame_05369424c317acb1efd688fe7fff842a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_old_scale);
        tmp_expression_value_1 = par_old_scale;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_05369424c317acb1efd688fe7fff842a->m_frame.f_lineno = 272;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_LIST2(mod_consts[1],mod_consts[2]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_val);
        tmp_args_element_value_1 = par_val;
        frame_05369424c317acb1efd688fe7fff842a->m_frame.f_lineno = 273;
        tmp_add_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[4], tmp_args_element_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_add_expr_right_1 == NULL)) {
            tmp_add_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 273;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tempo == NULL);
        var_tempo = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_old_scale);
        tmp_expression_value_2 = par_old_scale;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_05369424c317acb1efd688fe7fff842a->m_frame.f_lineno = 274;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = MAKE_LIST2(mod_consts[6],mod_consts[7]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_val);
        tmp_args_element_value_2 = par_val;
        frame_05369424c317acb1efd688fe7fff842a->m_frame.f_lineno = 275;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[4], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tempo == NULL);
        var_tempo = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_old_scale);
        tmp_expression_value_3 = par_old_scale;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_05369424c317acb1efd688fe7fff842a->m_frame.f_lineno = 276;
        tmp_cmp_expr_left_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = MAKE_LIST2(mod_consts[8],mod_consts[9]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_val);
        tmp_args_element_value_3 = par_val;
        frame_05369424c317acb1efd688fe7fff842a->m_frame.f_lineno = 277;
        tmp_sub_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[4], tmp_args_element_value_3);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[10];
        tmp_mult_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = mod_consts[11];
        tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[12];
        tmp_add_expr_left_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_add_expr_right_2 == NULL)) {
            tmp_add_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tempo == NULL);
        var_tempo = tmp_assign_source_3;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_old_scale);
        tmp_expression_value_4 = par_old_scale;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[0]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_05369424c317acb1efd688fe7fff842a->m_frame.f_lineno = 278;
        tmp_cmp_expr_left_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = MAKE_LIST2(mod_consts[13],mod_consts[14]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_val);
        tmp_args_element_value_4 = par_val;
        frame_05369424c317acb1efd688fe7fff842a->m_frame.f_lineno = 279;
        tmp_mult_expr_left_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[4], tmp_args_element_value_4);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = mod_consts[11];
        tmp_truediv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_2 = mod_consts[12];
        tmp_assign_source_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tempo == NULL);
        var_tempo = tmp_assign_source_4;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[15];
        CHECK_OBJECT(par_old_scale);
        tmp_mod_expr_right_1 = par_old_scale;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_05369424c317acb1efd688fe7fff842a->m_frame.f_lineno = 281;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 281;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_new_scale);
        tmp_expression_value_5 = par_new_scale;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[0]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_05369424c317acb1efd688fe7fff842a->m_frame.f_lineno = 285;
        tmp_cmp_expr_left_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = MAKE_LIST2(mod_consts[1],mod_consts[2]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(var_tempo);
        tmp_sub_expr_left_2 = var_tempo;
        tmp_sub_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_sub_expr_right_2 == NULL)) {
            tmp_sub_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_sub_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_5;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_new_scale);
        tmp_expression_value_6 = par_new_scale;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[0]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_05369424c317acb1efd688fe7fff842a->m_frame.f_lineno = 287;
        tmp_cmp_expr_left_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = MAKE_LIST2(mod_consts[6],mod_consts[7]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(var_tempo);
        tmp_assign_source_6 = var_tempo;
        assert(var_res == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_res = tmp_assign_source_6;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_new_scale);
        tmp_expression_value_7 = par_new_scale;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[0]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_05369424c317acb1efd688fe7fff842a->m_frame.f_lineno = 289;
        tmp_cmp_expr_left_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
        Py_DECREF(tmp_called_value_7);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = MAKE_LIST2(mod_consts[8],mod_consts[9]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        CHECK_OBJECT(var_tempo);
        tmp_sub_expr_left_3 = var_tempo;
        tmp_sub_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_sub_expr_right_3 == NULL)) {
            tmp_sub_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_sub_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_3 = mod_consts[12];
        tmp_truediv_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_3 = mod_consts[11];
        tmp_add_expr_left_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = mod_consts[10];
        tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_7;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_new_scale);
        tmp_expression_value_8 = par_new_scale;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[0]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_05369424c317acb1efd688fe7fff842a->m_frame.f_lineno = 291;
        tmp_cmp_expr_left_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
        Py_DECREF(tmp_called_value_8);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = MAKE_LIST2(mod_consts[13],mod_consts[14]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        Py_DECREF(tmp_cmp_expr_right_8);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        CHECK_OBJECT(var_tempo);
        tmp_mult_expr_left_4 = var_tempo;
        tmp_mult_expr_right_4 = mod_consts[12];
        tmp_truediv_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_truediv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_4 = mod_consts[11];
        tmp_assign_source_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_left_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_8;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        tmp_mod_expr_left_2 = mod_consts[16];
        CHECK_OBJECT(par_new_scale);
        tmp_mod_expr_right_2 = par_new_scale;
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_05369424c317acb1efd688fe7fff842a->m_frame.f_lineno = 294;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 294;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_05369424c317acb1efd688fe7fff842a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05369424c317acb1efd688fe7fff842a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05369424c317acb1efd688fe7fff842a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05369424c317acb1efd688fe7fff842a,
        type_description_1,
        par_val,
        par_old_scale,
        par_new_scale,
        var_tempo,
        var_res
    );


    // Release cached frame if used for exception.
    if (frame_05369424c317acb1efd688fe7fff842a == cache_frame_05369424c317acb1efd688fe7fff842a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_05369424c317acb1efd688fe7fff842a);
        cache_frame_05369424c317acb1efd688fe7fff842a = NULL;
    }

    assertFrameObject(frame_05369424c317acb1efd688fe7fff842a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_res);
    tmp_return_value = var_res;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_tempo);
    var_tempo = NULL;
    CHECK_OBJECT(var_res);
    Py_DECREF(var_res);
    var_res = NULL;
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

    Py_XDECREF(var_tempo);
    var_tempo = NULL;
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
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
    CHECK_OBJECT(par_old_scale);
    Py_DECREF(par_old_scale);
    CHECK_OBJECT(par_new_scale);
    Py_DECREF(par_new_scale);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
    CHECK_OBJECT(par_old_scale);
    Py_DECREF(par_old_scale);
    CHECK_OBJECT(par_new_scale);
    Py_DECREF(par_new_scale);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$constants$_constants$$$function__2_lambda2nu(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_lambda_ = python_pars[0];
    struct Nuitka_FrameObject *frame_24c8342462260660be7c0954205dd489;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_24c8342462260660be7c0954205dd489 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_24c8342462260660be7c0954205dd489)) {
        Py_XDECREF(cache_frame_24c8342462260660be7c0954205dd489);

#if _DEBUG_REFCOUNTS
        if (cache_frame_24c8342462260660be7c0954205dd489 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_24c8342462260660be7c0954205dd489 = MAKE_FUNCTION_FRAME(tstate, codeobj_24c8342462260660be7c0954205dd489, module_scipy$constants$_constants, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_24c8342462260660be7c0954205dd489->m_type_description == NULL);
    frame_24c8342462260660be7c0954205dd489 = cache_frame_24c8342462260660be7c0954205dd489;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_24c8342462260660be7c0954205dd489);
    assert(Py_REFCNT(frame_24c8342462260660be7c0954205dd489) == 2);

    // Framed code:
    {
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_truediv_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_truediv_expr_left_1 == NULL)) {
            tmp_truediv_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_lambda_);
        tmp_args_element_value_1 = par_lambda_;
        frame_24c8342462260660be7c0954205dd489->m_frame.f_lineno = 331;
        tmp_truediv_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[4], tmp_args_element_value_1);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_24c8342462260660be7c0954205dd489, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_24c8342462260660be7c0954205dd489->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_24c8342462260660be7c0954205dd489, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_24c8342462260660be7c0954205dd489,
        type_description_1,
        par_lambda_
    );


    // Release cached frame if used for exception.
    if (frame_24c8342462260660be7c0954205dd489 == cache_frame_24c8342462260660be7c0954205dd489) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_24c8342462260660be7c0954205dd489);
        cache_frame_24c8342462260660be7c0954205dd489 = NULL;
    }

    assertFrameObject(frame_24c8342462260660be7c0954205dd489);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lambda_);
    Py_DECREF(par_lambda_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lambda_);
    Py_DECREF(par_lambda_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$constants$_constants$$$function__3_nu2lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_nu = python_pars[0];
    struct Nuitka_FrameObject *frame_3f016772e389e81420c2b81d016e98c9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3f016772e389e81420c2b81d016e98c9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3f016772e389e81420c2b81d016e98c9)) {
        Py_XDECREF(cache_frame_3f016772e389e81420c2b81d016e98c9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3f016772e389e81420c2b81d016e98c9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3f016772e389e81420c2b81d016e98c9 = MAKE_FUNCTION_FRAME(tstate, codeobj_3f016772e389e81420c2b81d016e98c9, module_scipy$constants$_constants, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3f016772e389e81420c2b81d016e98c9->m_type_description == NULL);
    frame_3f016772e389e81420c2b81d016e98c9 = cache_frame_3f016772e389e81420c2b81d016e98c9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3f016772e389e81420c2b81d016e98c9);
    assert(Py_REFCNT(frame_3f016772e389e81420c2b81d016e98c9) == 2);

    // Framed code:
    {
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_truediv_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_truediv_expr_left_1 == NULL)) {
            tmp_truediv_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nu);
        tmp_args_element_value_1 = par_nu;
        frame_3f016772e389e81420c2b81d016e98c9->m_frame.f_lineno = 361;
        tmp_truediv_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[4], tmp_args_element_value_1);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_3f016772e389e81420c2b81d016e98c9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3f016772e389e81420c2b81d016e98c9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3f016772e389e81420c2b81d016e98c9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3f016772e389e81420c2b81d016e98c9,
        type_description_1,
        par_nu
    );


    // Release cached frame if used for exception.
    if (frame_3f016772e389e81420c2b81d016e98c9 == cache_frame_3f016772e389e81420c2b81d016e98c9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3f016772e389e81420c2b81d016e98c9);
        cache_frame_3f016772e389e81420c2b81d016e98c9 = NULL;
    }

    assertFrameObject(frame_3f016772e389e81420c2b81d016e98c9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_nu);
    Py_DECREF(par_nu);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_nu);
    Py_DECREF(par_nu);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$constants$_constants$$$function__1_convert_temperature(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$constants$_constants$$$function__1_convert_temperature,
        mod_consts[281],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_05369424c317acb1efd688fe7fff842a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_scipy$constants$_constants,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$constants$_constants$$$function__2_lambda2nu(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$constants$_constants$$$function__2_lambda2nu,
        mod_consts[283],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_24c8342462260660be7c0954205dd489,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_scipy$constants$_constants,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$constants$_constants$$$function__3_nu2lambda(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$constants$_constants$$$function__3_nu2lambda,
        mod_consts[285],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3f016772e389e81420c2b81d016e98c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_scipy$constants$_constants,
        mod_consts[19],
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

function_impl_code functable_scipy$constants$_constants[] = {
    impl_scipy$constants$_constants$$$function__1_convert_temperature,
    impl_scipy$constants$_constants$$$function__2_lambda2nu,
    impl_scipy$constants$_constants$$$function__3_nu2lambda,
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

    function_impl_code *current = functable_scipy$constants$_constants;
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

    if (offset > sizeof(functable_scipy$constants$_constants) || offset < 0) {
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
        functable_scipy$constants$_constants[offset],
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
        module_scipy$constants$_constants,
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
PyObject *modulecode_scipy$constants$_constants(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy.constants._constants");

    // Store the module for future use.
    module_scipy$constants$_constants = module;

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
        PRINT_STRING("scipy.constants._constants: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("scipy.constants._constants: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$constants$_constants\n");

    moduledict_scipy$constants$_constants = MODULE_DICT(module_scipy$constants$_constants);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$constants$_constants,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$constants$_constants,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[291]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$constants$_constants,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$constants$_constants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$constants$_constants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$constants$_constants);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_scipy$constants$_constants);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_assign_unpack_10__assign_source = NULL;
    PyObject *tmp_assign_unpack_11__assign_source = NULL;
    PyObject *tmp_assign_unpack_12__assign_source = NULL;
    PyObject *tmp_assign_unpack_13__assign_source = NULL;
    PyObject *tmp_assign_unpack_14__assign_source = NULL;
    PyObject *tmp_assign_unpack_15__assign_source = NULL;
    PyObject *tmp_assign_unpack_16__assign_source = NULL;
    PyObject *tmp_assign_unpack_17__assign_source = NULL;
    PyObject *tmp_assign_unpack_18__assign_source = NULL;
    PyObject *tmp_assign_unpack_19__assign_source = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_20__assign_source = NULL;
    PyObject *tmp_assign_unpack_22__assign_source = NULL;
    PyObject *tmp_assign_unpack_23__assign_source = NULL;
    PyObject *tmp_assign_unpack_25__assign_source = NULL;
    PyObject *tmp_assign_unpack_26__assign_source = NULL;
    PyObject *tmp_assign_unpack_27__assign_source = NULL;
    PyObject *tmp_assign_unpack_29__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_assign_unpack_31__assign_source = NULL;
    PyObject *tmp_assign_unpack_32__assign_source = NULL;
    PyObject *tmp_assign_unpack_34__assign_source = NULL;
    PyObject *tmp_assign_unpack_35__assign_source = NULL;
    PyObject *tmp_assign_unpack_3__assign_source = NULL;
    PyObject *tmp_assign_unpack_4__assign_source = NULL;
    PyObject *tmp_assign_unpack_5__assign_source = NULL;
    PyObject *tmp_assign_unpack_6__assign_source = NULL;
    PyObject *tmp_assign_unpack_7__assign_source = NULL;
    PyObject *tmp_assign_unpack_8__assign_source = NULL;
    PyObject *tmp_assign_unpack_9__assign_source = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_892f6ebc4cf4c5e3506e4b73e0019807;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_2);
    }
    frame_892f6ebc4cf4c5e3506e4b73e0019807 = MAKE_MODULE_FRAME(codeobj_892f6ebc4cf4c5e3506e4b73e0019807, module_scipy$constants$_constants);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_892f6ebc4cf4c5e3506e4b73e0019807);
    assert(Py_REFCNT(frame_892f6ebc4cf4c5e3506e4b73e0019807) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[24], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[25], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[27]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[28];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$constants$_constants;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[29];
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 12;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_6);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_False;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_7);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$constants$_constants,
                mod_consts[32],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[32]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_8);
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[33];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$constants$_constants;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[34];
        tmp_level_value_2 = mod_consts[35];
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 15;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$constants$_constants,
                mod_consts[36],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[36]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[38];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_scipy$constants$_constants;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[29];
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 16;
        tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = LIST_COPY(mod_consts[39]);
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[41]);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        tmp_add_expr_left_1 = mod_consts[35];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 70;
        tmp_add_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[42],
            PyTuple_GET_ITEM(mod_consts[43], 0)
        );

        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[44];
        tmp_assign_source_13 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_14 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_15 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_15);
    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[89];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[91];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[93];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[103];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[105];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        tmp_pow_expr_left_1 = mod_consts[44];
        tmp_pow_expr_right_1 = mod_consts[107];
        tmp_assign_source_46 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_pow_expr_left_2;
        PyObject *tmp_pow_expr_right_2;
        tmp_pow_expr_left_2 = mod_consts[44];
        tmp_pow_expr_right_2 = mod_consts[109];
        tmp_assign_source_47 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_2, tmp_pow_expr_right_2);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 109;
        tmp_assign_source_48 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[111]);

        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_2__assign_source == NULL);
        tmp_assign_unpack_2__assign_source = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_49 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_50 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_50);
    }
    CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
    Py_DECREF(tmp_assign_unpack_2__assign_source);
    tmp_assign_unpack_2__assign_source = NULL;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 110;
        tmp_assign_source_51 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[113]);

        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 111;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[115]);

        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 112;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[117]);

        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_3__assign_source == NULL);
        tmp_assign_unpack_3__assign_source = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
        tmp_assign_source_54 = tmp_assign_unpack_3__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
        tmp_assign_source_55 = tmp_assign_unpack_3__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_55);
    }
    CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
    Py_DECREF(tmp_assign_unpack_3__assign_source);
    tmp_assign_unpack_3__assign_source = NULL;
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_truediv_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_truediv_expr_left_2 == NULL)) {
            tmp_truediv_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_truediv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = mod_consts[44];
        tmp_mult_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_mult_expr_right_1 == NULL)) {
            tmp_mult_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_56 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 114;
        tmp_assign_source_57 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_5, mod_consts[121]);

        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_4__assign_source == NULL);
        tmp_assign_unpack_4__assign_source = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
        tmp_assign_source_58 = tmp_assign_unpack_4__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
        tmp_assign_source_59 = tmp_assign_unpack_4__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_59);
    }
    CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
    Py_DECREF(tmp_assign_unpack_4__assign_source);
    tmp_assign_unpack_4__assign_source = NULL;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 115;
        tmp_assign_source_60 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_6, mod_consts[124]);

        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 116;
        tmp_assign_source_61 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_7, mod_consts[126]);

        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_5__assign_source == NULL);
        tmp_assign_unpack_5__assign_source = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
        tmp_assign_source_62 = tmp_assign_unpack_5__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
        tmp_assign_source_63 = tmp_assign_unpack_5__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_63);
    }
    CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
    Py_DECREF(tmp_assign_unpack_5__assign_source);
    tmp_assign_unpack_5__assign_source = NULL;
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 117;
        tmp_assign_source_64 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_8, mod_consts[129]);

        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_6__assign_source == NULL);
        tmp_assign_unpack_6__assign_source = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
        tmp_assign_source_65 = tmp_assign_unpack_6__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
        tmp_assign_source_66 = tmp_assign_unpack_6__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_66);
    }
    CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
    Py_DECREF(tmp_assign_unpack_6__assign_source);
    tmp_assign_unpack_6__assign_source = NULL;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 118;
        tmp_assign_source_67 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_9, mod_consts[132]);

        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_7__assign_source == NULL);
        tmp_assign_unpack_7__assign_source = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT(tmp_assign_unpack_7__assign_source);
        tmp_assign_source_68 = tmp_assign_unpack_7__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        CHECK_OBJECT(tmp_assign_unpack_7__assign_source);
        tmp_assign_source_69 = tmp_assign_unpack_7__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_69);
    }
    CHECK_OBJECT(tmp_assign_unpack_7__assign_source);
    Py_DECREF(tmp_assign_unpack_7__assign_source);
    tmp_assign_unpack_7__assign_source = NULL;
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 119;
        tmp_assign_source_70 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_10, mod_consts[135]);

        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_8__assign_source == NULL);
        tmp_assign_unpack_8__assign_source = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
        tmp_assign_source_71 = tmp_assign_unpack_8__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
        tmp_assign_source_72 = tmp_assign_unpack_8__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_72);
    }
    CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
    Py_DECREF(tmp_assign_unpack_8__assign_source);
    tmp_assign_unpack_8__assign_source = NULL;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 120;
        tmp_assign_source_73 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_11, mod_consts[138]);

        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_9__assign_source == NULL);
        tmp_assign_unpack_9__assign_source = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT(tmp_assign_unpack_9__assign_source);
        tmp_assign_source_74 = tmp_assign_unpack_9__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(tmp_assign_unpack_9__assign_source);
        tmp_assign_source_75 = tmp_assign_unpack_9__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_75);
    }
    CHECK_OBJECT(tmp_assign_unpack_9__assign_source);
    Py_DECREF(tmp_assign_unpack_9__assign_source);
    tmp_assign_unpack_9__assign_source = NULL;
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 121;
        tmp_assign_source_76 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_12, mod_consts[140]);

        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_10__assign_source == NULL);
        tmp_assign_unpack_10__assign_source = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        CHECK_OBJECT(tmp_assign_unpack_10__assign_source);
        tmp_assign_source_77 = tmp_assign_unpack_10__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        CHECK_OBJECT(tmp_assign_unpack_10__assign_source);
        tmp_assign_source_78 = tmp_assign_unpack_10__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_78);
    }
    CHECK_OBJECT(tmp_assign_unpack_10__assign_source);
    Py_DECREF(tmp_assign_unpack_10__assign_source);
    tmp_assign_unpack_10__assign_source = NULL;
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 122;
        tmp_assign_source_79 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_13, mod_consts[143]);

        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_value_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 123;
        tmp_assign_source_80 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_14, mod_consts[145]);

        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[149];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        double tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        tmp_mult_expr_left_2 = 7000;
        tmp_mult_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_mult_expr_right_2 == NULL)) {
            tmp_mult_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[150]);
        }

        assert(!(tmp_mult_expr_right_2 == NULL));
        tmp_assign_source_84 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_2, tmp_mult_expr_left_2);
        assert(!(tmp_assign_source_84 == NULL));
        assert(tmp_assign_unpack_11__assign_source == NULL);
        tmp_assign_unpack_11__assign_source = tmp_assign_source_84;
    }
    {
        PyObject *tmp_assign_source_85;
        CHECK_OBJECT(tmp_assign_unpack_11__assign_source);
        tmp_assign_source_85 = tmp_assign_unpack_11__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        CHECK_OBJECT(tmp_assign_unpack_11__assign_source);
        tmp_assign_source_86 = tmp_assign_unpack_11__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_86);
    }
    CHECK_OBJECT(tmp_assign_unpack_11__assign_source);
    Py_DECREF(tmp_assign_unpack_11__assign_source);
    tmp_assign_unpack_11__assign_source = NULL;
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        tmp_mult_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_mult_expr_left_3 == NULL)) {
            tmp_mult_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_mult_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_mult_expr_right_3 == NULL)) {
            tmp_mult_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_mult_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_3 = mod_consts[153];
        tmp_assign_source_87 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_12__assign_source == NULL);
        tmp_assign_unpack_12__assign_source = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        CHECK_OBJECT(tmp_assign_unpack_12__assign_source);
        tmp_assign_source_88 = tmp_assign_unpack_12__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        CHECK_OBJECT(tmp_assign_unpack_12__assign_source);
        tmp_assign_source_89 = tmp_assign_unpack_12__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_89);
    }
    CHECK_OBJECT(tmp_assign_unpack_12__assign_source);
    Py_DECREF(tmp_assign_unpack_12__assign_source);
    tmp_assign_unpack_12__assign_source = NULL;
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        tmp_truediv_expr_left_4 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_truediv_expr_left_4 == NULL)) {
            tmp_truediv_expr_left_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
        }

        if (tmp_truediv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_4 = mod_consts[156];
        tmp_assign_source_90 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_truediv_expr_left_5;
        PyObject *tmp_truediv_expr_right_5;
        tmp_truediv_expr_left_5 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_truediv_expr_left_5 == NULL)) {
            tmp_truediv_expr_left_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_truediv_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_5 = mod_consts[158];
        tmp_assign_source_91 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_13__assign_source == NULL);
        tmp_assign_unpack_13__assign_source = tmp_assign_source_91;
    }
    {
        PyObject *tmp_assign_source_92;
        CHECK_OBJECT(tmp_assign_unpack_13__assign_source);
        tmp_assign_source_92 = tmp_assign_unpack_13__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        CHECK_OBJECT(tmp_assign_unpack_13__assign_source);
        tmp_assign_source_93 = tmp_assign_unpack_13__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_93);
    }
    CHECK_OBJECT(tmp_assign_unpack_13__assign_source);
    Py_DECREF(tmp_assign_unpack_13__assign_source);
    tmp_assign_unpack_13__assign_source = NULL;
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        tmp_mult_expr_left_4 = mod_consts[161];
        tmp_mult_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_mult_expr_right_4 == NULL)) {
            tmp_mult_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_mult_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_94 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        tmp_mult_expr_left_5 = mod_consts[163];
        tmp_mult_expr_right_5 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_mult_expr_right_5 == NULL)) {
            tmp_mult_expr_right_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_mult_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_95 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        if (tmp_assign_source_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        tmp_mult_expr_left_6 = mod_consts[165];
        tmp_mult_expr_right_6 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_mult_expr_right_6 == NULL)) {
            tmp_mult_expr_right_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_mult_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_96 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        tmp_mult_expr_left_7 = mod_consts[167];
        tmp_mult_expr_right_7 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_mult_expr_right_7 == NULL)) {
            tmp_mult_expr_right_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[150]);
        }

        if (tmp_mult_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_97 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        tmp_mult_expr_left_8 = mod_consts[156];
        tmp_mult_expr_right_8 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_mult_expr_right_8 == NULL)) {
            tmp_mult_expr_right_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[168]);
        }

        assert(!(tmp_mult_expr_right_8 == NULL));
        tmp_assign_source_98 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        if (tmp_assign_source_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[170];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_value_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 141;
        tmp_assign_source_100 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_15, mod_consts[172]);

        if (tmp_assign_source_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_14__assign_source == NULL);
        tmp_assign_unpack_14__assign_source = tmp_assign_source_100;
    }
    {
        PyObject *tmp_assign_source_101;
        CHECK_OBJECT(tmp_assign_unpack_14__assign_source);
        tmp_assign_source_101 = tmp_assign_unpack_14__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        CHECK_OBJECT(tmp_assign_unpack_14__assign_source);
        tmp_assign_source_102 = tmp_assign_unpack_14__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_102);
    }
    CHECK_OBJECT(tmp_assign_unpack_14__assign_source);
    Py_DECREF(tmp_assign_unpack_14__assign_source);
    tmp_assign_unpack_14__assign_source = NULL;
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 142;
        tmp_assign_source_103 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_16, mod_consts[175]);

        if (tmp_assign_source_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_15__assign_source == NULL);
        tmp_assign_unpack_15__assign_source = tmp_assign_source_103;
    }
    {
        PyObject *tmp_assign_source_104;
        CHECK_OBJECT(tmp_assign_unpack_15__assign_source);
        tmp_assign_source_104 = tmp_assign_unpack_15__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        CHECK_OBJECT(tmp_assign_unpack_15__assign_source);
        tmp_assign_source_105 = tmp_assign_unpack_15__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_105);
    }
    CHECK_OBJECT(tmp_assign_unpack_15__assign_source);
    Py_DECREF(tmp_assign_unpack_15__assign_source);
    tmp_assign_unpack_15__assign_source = NULL;
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_called_value_17;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 143;
        tmp_assign_source_106 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_17, mod_consts[178]);

        if (tmp_assign_source_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_16__assign_source == NULL);
        tmp_assign_unpack_16__assign_source = tmp_assign_source_106;
    }
    {
        PyObject *tmp_assign_source_107;
        CHECK_OBJECT(tmp_assign_unpack_16__assign_source);
        tmp_assign_source_107 = tmp_assign_unpack_16__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        CHECK_OBJECT(tmp_assign_unpack_16__assign_source);
        tmp_assign_source_108 = tmp_assign_unpack_16__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_108);
    }
    CHECK_OBJECT(tmp_assign_unpack_16__assign_source);
    Py_DECREF(tmp_assign_unpack_16__assign_source);
    tmp_assign_unpack_16__assign_source = NULL;
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_18;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 144;
        tmp_assign_source_109 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_18, mod_consts[181]);

        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_17__assign_source == NULL);
        tmp_assign_unpack_17__assign_source = tmp_assign_source_109;
    }
    {
        PyObject *tmp_assign_source_110;
        CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
        tmp_assign_source_110 = tmp_assign_unpack_17__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
        tmp_assign_source_111 = tmp_assign_unpack_17__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
        tmp_assign_source_112 = tmp_assign_unpack_17__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_112);
    }
    CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
    Py_DECREF(tmp_assign_unpack_17__assign_source);
    tmp_assign_unpack_17__assign_source = NULL;
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_truediv_expr_left_6;
        PyObject *tmp_truediv_expr_right_6;
        tmp_truediv_expr_left_6 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_truediv_expr_left_6 == NULL)) {
            tmp_truediv_expr_left_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_truediv_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_6 = mod_consts[185];
        tmp_assign_source_113 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
        if (tmp_assign_source_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_truediv_expr_left_7;
        PyObject *tmp_truediv_expr_right_7;
        tmp_truediv_expr_left_7 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_truediv_expr_left_7 == NULL)) {
            tmp_truediv_expr_left_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[186]);
        }

        assert(!(tmp_truediv_expr_left_7 == NULL));
        tmp_truediv_expr_right_7 = mod_consts[187];
        tmp_assign_source_114 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_7, tmp_truediv_expr_right_7);
        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_18__assign_source == NULL);
        tmp_assign_unpack_18__assign_source = tmp_assign_source_114;
    }
    {
        PyObject *tmp_assign_source_115;
        CHECK_OBJECT(tmp_assign_unpack_18__assign_source);
        tmp_assign_source_115 = tmp_assign_unpack_18__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        CHECK_OBJECT(tmp_assign_unpack_18__assign_source);
        tmp_assign_source_116 = tmp_assign_unpack_18__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_116);
    }
    CHECK_OBJECT(tmp_assign_unpack_18__assign_source);
    Py_DECREF(tmp_assign_unpack_18__assign_source);
    tmp_assign_unpack_18__assign_source = NULL;
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_truediv_expr_left_8;
        PyObject *tmp_truediv_expr_right_8;
        tmp_truediv_expr_left_8 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_truediv_expr_left_8 == NULL)) {
            tmp_truediv_expr_left_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[188]);
        }

        if (tmp_truediv_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_8 = mod_consts[187];
        tmp_assign_source_117 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_8, tmp_truediv_expr_right_8);
        if (tmp_assign_source_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_19__assign_source == NULL);
        tmp_assign_unpack_19__assign_source = tmp_assign_source_117;
    }
    {
        PyObject *tmp_assign_source_118;
        CHECK_OBJECT(tmp_assign_unpack_19__assign_source);
        tmp_assign_source_118 = tmp_assign_unpack_19__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        CHECK_OBJECT(tmp_assign_unpack_19__assign_source);
        tmp_assign_source_119 = tmp_assign_unpack_19__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_119);
    }
    CHECK_OBJECT(tmp_assign_unpack_19__assign_source);
    Py_DECREF(tmp_assign_unpack_19__assign_source);
    tmp_assign_unpack_19__assign_source = NULL;
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        double tmp_mult_expr_left_9;
        PyObject *tmp_mult_expr_right_9;
        tmp_mult_expr_left_9 = 60;
        tmp_mult_expr_right_9 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_mult_expr_right_9 == NULL)) {
            tmp_mult_expr_right_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[193]);
        }

        assert(!(tmp_mult_expr_right_9 == NULL));
        tmp_assign_source_121 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_9, tmp_mult_expr_left_9);
        assert(!(tmp_assign_source_121 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        double tmp_mult_expr_left_10;
        PyObject *tmp_mult_expr_right_10;
        tmp_mult_expr_left_10 = 24;
        tmp_mult_expr_right_10 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_mult_expr_right_10 == NULL)) {
            tmp_mult_expr_right_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[194]);
        }

        assert(!(tmp_mult_expr_right_10 == NULL));
        tmp_assign_source_122 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_10, tmp_mult_expr_left_10);
        assert(!(tmp_assign_source_122 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        double tmp_mult_expr_left_11;
        PyObject *tmp_mult_expr_right_11;
        tmp_mult_expr_left_11 = 7;
        tmp_mult_expr_right_11 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_mult_expr_right_11 == NULL)) {
            tmp_mult_expr_right_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[195]);
        }

        assert(!(tmp_mult_expr_right_11 == NULL));
        tmp_assign_source_123 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_11, tmp_mult_expr_left_11);
        assert(!(tmp_assign_source_123 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        double tmp_mult_expr_left_12;
        PyObject *tmp_mult_expr_right_12;
        tmp_mult_expr_left_12 = 365;
        tmp_mult_expr_right_12 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_mult_expr_right_12 == NULL)) {
            tmp_mult_expr_right_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[195]);
        }

        assert(!(tmp_mult_expr_right_12 == NULL));
        tmp_assign_source_124 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_12, tmp_mult_expr_left_12);
        assert(!(tmp_assign_source_124 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        double tmp_mult_expr_left_13;
        PyObject *tmp_mult_expr_right_13;
        tmp_mult_expr_left_13 = 365.25;
        tmp_mult_expr_right_13 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_mult_expr_right_13 == NULL)) {
            tmp_mult_expr_right_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[195]);
        }

        assert(!(tmp_mult_expr_right_13 == NULL));
        tmp_assign_source_125 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_13, tmp_mult_expr_left_13);
        assert(!(tmp_assign_source_125 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[153];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        double tmp_mult_expr_left_14;
        PyObject *tmp_mult_expr_right_14;
        tmp_mult_expr_left_14 = 12;
        tmp_mult_expr_right_14 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[199]);

        if (unlikely(tmp_mult_expr_right_14 == NULL)) {
            tmp_mult_expr_right_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[199]);
        }

        assert(!(tmp_mult_expr_right_14 == NULL));
        tmp_assign_source_127 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_14, tmp_mult_expr_left_14);
        assert(!(tmp_assign_source_127 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        double tmp_mult_expr_left_15;
        PyObject *tmp_mult_expr_right_15;
        tmp_mult_expr_left_15 = 3;
        tmp_mult_expr_right_15 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[200]);

        if (unlikely(tmp_mult_expr_right_15 == NULL)) {
            tmp_mult_expr_right_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
        }

        assert(!(tmp_mult_expr_right_15 == NULL));
        tmp_assign_source_128 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_15, tmp_mult_expr_left_15);
        assert(!(tmp_assign_source_128 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        double tmp_mult_expr_left_16;
        PyObject *tmp_mult_expr_right_16;
        tmp_mult_expr_left_16 = 1760;
        tmp_mult_expr_right_16 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_mult_expr_right_16 == NULL)) {
            tmp_mult_expr_right_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[201]);
        }

        assert(!(tmp_mult_expr_right_16 == NULL));
        tmp_assign_source_129 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_16, tmp_mult_expr_left_16);
        assert(!(tmp_assign_source_129 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_truediv_expr_left_9;
        double tmp_truediv_expr_right_9;
        tmp_truediv_expr_left_9 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[199]);

        if (unlikely(tmp_truediv_expr_left_9 == NULL)) {
            tmp_truediv_expr_left_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[199]);
        }

        assert(!(tmp_truediv_expr_left_9 == NULL));
        tmp_truediv_expr_right_9 = 1000;
        tmp_assign_source_130 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_CFLOAT(tmp_truediv_expr_left_9, tmp_truediv_expr_right_9);
        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_truediv_expr_left_10;
        double tmp_truediv_expr_right_10;
        tmp_truediv_expr_left_10 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[199]);

        if (unlikely(tmp_truediv_expr_left_10 == NULL)) {
            tmp_truediv_expr_left_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[199]);
        }

        assert(!(tmp_truediv_expr_left_10 == NULL));
        tmp_truediv_expr_right_10 = 72;
        tmp_assign_source_131 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_CFLOAT(tmp_truediv_expr_left_10, tmp_truediv_expr_right_10);
        if (tmp_assign_source_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_20__assign_source == NULL);
        tmp_assign_unpack_20__assign_source = tmp_assign_source_131;
    }
    {
        PyObject *tmp_assign_source_132;
        CHECK_OBJECT(tmp_assign_unpack_20__assign_source);
        tmp_assign_source_132 = tmp_assign_unpack_20__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        CHECK_OBJECT(tmp_assign_unpack_20__assign_source);
        tmp_assign_source_133 = tmp_assign_unpack_20__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_133);
    }
    CHECK_OBJECT(tmp_assign_unpack_20__assign_source);
    Py_DECREF(tmp_assign_unpack_20__assign_source);
    tmp_assign_unpack_20__assign_source = NULL;
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[206];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        double tmp_mult_expr_left_17;
        PyObject *tmp_mult_expr_right_17;
        tmp_mult_expr_left_17 = 5280;
        tmp_mult_expr_right_17 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_mult_expr_right_17 == NULL)) {
            tmp_mult_expr_right_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[207]);
        }

        assert(!(tmp_mult_expr_right_17 == NULL));
        tmp_assign_source_135 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_17, tmp_mult_expr_left_17);
        assert(!(tmp_assign_source_135 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[209];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[212];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[215];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[215];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_mult_expr_left_18;
        PyObject *tmp_mult_expr_right_18;
        tmp_mult_expr_left_18 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_mult_expr_left_18 == NULL)) {
            tmp_mult_expr_left_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_mult_expr_left_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_18 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_mult_expr_right_18 == NULL)) {
            tmp_mult_expr_right_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_mult_expr_right_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_142 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_18, tmp_mult_expr_right_18);
        if (tmp_assign_source_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_truediv_expr_left_11;
        PyObject *tmp_truediv_expr_right_11;
        tmp_truediv_expr_left_11 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_truediv_expr_left_11 == NULL)) {
            tmp_truediv_expr_left_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[216]);
        }

        if (tmp_truediv_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_11 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_truediv_expr_right_11 == NULL)) {
            tmp_truediv_expr_right_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
        }

        if (tmp_truediv_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_143 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_11, tmp_truediv_expr_right_11);
        if (tmp_assign_source_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_called_value_19;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame.f_lineno = 177;
        tmp_assign_source_144 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_19, mod_consts[220]);

        if (tmp_assign_source_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_22__assign_source == NULL);
        tmp_assign_unpack_22__assign_source = tmp_assign_source_144;
    }
    {
        PyObject *tmp_assign_source_145;
        CHECK_OBJECT(tmp_assign_unpack_22__assign_source);
        tmp_assign_source_145 = tmp_assign_unpack_22__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        CHECK_OBJECT(tmp_assign_unpack_22__assign_source);
        tmp_assign_source_146 = tmp_assign_unpack_22__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_146);
    }
    CHECK_OBJECT(tmp_assign_unpack_22__assign_source);
    Py_DECREF(tmp_assign_unpack_22__assign_source);
    tmp_assign_unpack_22__assign_source = NULL;
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[223];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_truediv_expr_left_12;
        PyObject *tmp_truediv_expr_right_12;
        tmp_truediv_expr_left_12 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[221]);

        if (unlikely(tmp_truediv_expr_left_12 == NULL)) {
            tmp_truediv_expr_left_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[221]);
        }

        if (tmp_truediv_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_12 = mod_consts[225];
        tmp_assign_source_148 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_12, tmp_truediv_expr_right_12);
        if (tmp_assign_source_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_23__assign_source == NULL);
        tmp_assign_unpack_23__assign_source = tmp_assign_source_148;
    }
    {
        PyObject *tmp_assign_source_149;
        CHECK_OBJECT(tmp_assign_unpack_23__assign_source);
        tmp_assign_source_149 = tmp_assign_unpack_23__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        CHECK_OBJECT(tmp_assign_unpack_23__assign_source);
        tmp_assign_source_150 = tmp_assign_unpack_23__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_150);
    }
    CHECK_OBJECT(tmp_assign_unpack_23__assign_source);
    Py_DECREF(tmp_assign_unpack_23__assign_source);
    tmp_assign_unpack_23__assign_source = NULL;
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_truediv_expr_left_13;
        PyObject *tmp_truediv_expr_right_13;
        PyObject *tmp_mult_expr_left_19;
        PyObject *tmp_mult_expr_right_19;
        PyObject *tmp_mult_expr_left_20;
        PyObject *tmp_mult_expr_right_20;
        tmp_mult_expr_left_19 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_mult_expr_left_19 == NULL)) {
            tmp_mult_expr_left_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_mult_expr_left_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_19 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_mult_expr_right_19 == NULL)) {
            tmp_mult_expr_right_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_mult_expr_right_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_19, tmp_mult_expr_right_19);
        if (tmp_truediv_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_20 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[199]);

        if (unlikely(tmp_mult_expr_left_20 == NULL)) {
            tmp_mult_expr_left_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[199]);
        }

        if (tmp_mult_expr_left_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_13);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_20 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[199]);

        if (unlikely(tmp_mult_expr_right_20 == NULL)) {
            tmp_mult_expr_right_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[199]);
        }

        if (tmp_mult_expr_right_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_13);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_20, tmp_mult_expr_right_20);
        if (tmp_truediv_expr_right_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_13);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_151 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_13, tmp_truediv_expr_right_13);
        Py_DECREF(tmp_truediv_expr_left_13);
        Py_DECREF(tmp_truediv_expr_right_13);
        if (tmp_assign_source_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[229];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_mult_expr_left_21;
        PyObject *tmp_mult_expr_right_21;
        PyObject *tmp_pow_expr_left_3;
        PyObject *tmp_pow_expr_right_3;
        tmp_mult_expr_left_21 = mod_consts[231];
        tmp_pow_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[200]);

        if (unlikely(tmp_pow_expr_left_3 == NULL)) {
            tmp_pow_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
        }

        if (tmp_pow_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_pow_expr_right_3 = mod_consts[44];
        tmp_mult_expr_right_21 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_3, tmp_pow_expr_right_3);
        if (tmp_mult_expr_right_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_153 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_21, tmp_mult_expr_right_21);
        Py_DECREF(tmp_mult_expr_right_21);
        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_mult_expr_left_22;
        PyObject *tmp_mult_expr_right_22;
        PyObject *tmp_pow_expr_left_4;
        PyObject *tmp_pow_expr_right_4;
        tmp_mult_expr_left_22 = mod_consts[235];
        tmp_pow_expr_left_4 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[199]);

        if (unlikely(tmp_pow_expr_left_4 == NULL)) {
            tmp_pow_expr_left_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[199]);
        }

        if (tmp_pow_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_pow_expr_right_4 = mod_consts[236];
        tmp_mult_expr_right_22 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_4, tmp_pow_expr_right_4);
        if (tmp_mult_expr_right_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_156 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_22, tmp_mult_expr_right_22);
        Py_DECREF(tmp_mult_expr_right_22);
        if (tmp_assign_source_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_25__assign_source == NULL);
        tmp_assign_unpack_25__assign_source = tmp_assign_source_156;
    }
    {
        PyObject *tmp_assign_source_157;
        CHECK_OBJECT(tmp_assign_unpack_25__assign_source);
        tmp_assign_source_157 = tmp_assign_unpack_25__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        CHECK_OBJECT(tmp_assign_unpack_25__assign_source);
        tmp_assign_source_158 = tmp_assign_unpack_25__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_158);
    }
    CHECK_OBJECT(tmp_assign_unpack_25__assign_source);
    Py_DECREF(tmp_assign_unpack_25__assign_source);
    tmp_assign_unpack_25__assign_source = NULL;
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_truediv_expr_left_14;
        PyObject *tmp_truediv_expr_right_14;
        tmp_truediv_expr_left_14 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[238]);

        if (unlikely(tmp_truediv_expr_left_14 == NULL)) {
            tmp_truediv_expr_left_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[238]);
        }

        if (tmp_truediv_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_14 = mod_consts[239];
        tmp_assign_source_159 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_14, tmp_truediv_expr_right_14);
        if (tmp_assign_source_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_26__assign_source == NULL);
        tmp_assign_unpack_26__assign_source = tmp_assign_source_159;
    }
    {
        PyObject *tmp_assign_source_160;
        CHECK_OBJECT(tmp_assign_unpack_26__assign_source);
        tmp_assign_source_160 = tmp_assign_unpack_26__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        CHECK_OBJECT(tmp_assign_unpack_26__assign_source);
        tmp_assign_source_161 = tmp_assign_unpack_26__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_161);
    }
    CHECK_OBJECT(tmp_assign_unpack_26__assign_source);
    Py_DECREF(tmp_assign_unpack_26__assign_source);
    tmp_assign_unpack_26__assign_source = NULL;
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_mult_expr_left_23;
        PyObject *tmp_mult_expr_right_23;
        tmp_mult_expr_left_23 = mod_consts[242];
        tmp_mult_expr_right_23 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[238]);

        if (unlikely(tmp_mult_expr_right_23 == NULL)) {
            tmp_mult_expr_right_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[238]);
        }

        if (tmp_mult_expr_right_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_162 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_23, tmp_mult_expr_right_23);
        if (tmp_assign_source_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_27__assign_source == NULL);
        tmp_assign_unpack_27__assign_source = tmp_assign_source_162;
    }
    {
        PyObject *tmp_assign_source_163;
        CHECK_OBJECT(tmp_assign_unpack_27__assign_source);
        tmp_assign_source_163 = tmp_assign_unpack_27__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        CHECK_OBJECT(tmp_assign_unpack_27__assign_source);
        tmp_assign_source_164 = tmp_assign_unpack_27__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_164);
    }
    CHECK_OBJECT(tmp_assign_unpack_27__assign_source);
    Py_DECREF(tmp_assign_unpack_27__assign_source);
    tmp_assign_unpack_27__assign_source = NULL;
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[245];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_truediv_expr_left_15;
        double tmp_truediv_expr_right_15;
        tmp_truediv_expr_left_15 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[246]);

        if (unlikely(tmp_truediv_expr_left_15 == NULL)) {
            tmp_truediv_expr_left_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[246]);
        }

        assert(!(tmp_truediv_expr_left_15 == NULL));
        tmp_truediv_expr_right_15 = 160;
        tmp_assign_source_166 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_CFLOAT(tmp_truediv_expr_left_15, tmp_truediv_expr_right_15);
        if (tmp_assign_source_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_truediv_expr_left_16;
        PyObject *tmp_truediv_expr_right_16;
        tmp_truediv_expr_left_16 = mod_consts[65];
        tmp_truediv_expr_right_16 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_truediv_expr_right_16 == NULL)) {
            tmp_truediv_expr_right_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[194]);
        }

        if (tmp_truediv_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_167 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_16, tmp_truediv_expr_right_16);
        if (tmp_assign_source_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_truediv_expr_left_17;
        PyObject *tmp_truediv_expr_right_17;
        tmp_truediv_expr_left_17 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[202]);

        if (unlikely(tmp_truediv_expr_left_17 == NULL)) {
            tmp_truediv_expr_left_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[202]);
        }

        if (tmp_truediv_expr_left_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_17 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_truediv_expr_right_17 == NULL)) {
            tmp_truediv_expr_right_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[194]);
        }

        if (tmp_truediv_expr_right_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_168 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_17, tmp_truediv_expr_right_17);
        if (tmp_assign_source_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[250];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[250];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_truediv_expr_left_18;
        PyObject *tmp_truediv_expr_right_18;
        tmp_truediv_expr_left_18 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[210]);

        if (unlikely(tmp_truediv_expr_left_18 == NULL)) {
            tmp_truediv_expr_left_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[210]);
        }

        if (tmp_truediv_expr_left_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_18 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_truediv_expr_right_18 == NULL)) {
            tmp_truediv_expr_right_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[194]);
        }

        if (tmp_truediv_expr_right_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_171 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_18, tmp_truediv_expr_right_18);
        if (tmp_assign_source_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[254];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = mod_consts[255];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_assign_source_174 == NULL)) {
            tmp_assign_source_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
        }

        if (tmp_assign_source_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_29__assign_source == NULL);
        Py_INCREF(tmp_assign_source_174);
        tmp_assign_unpack_29__assign_source = tmp_assign_source_174;
    }
    {
        PyObject *tmp_assign_source_175;
        CHECK_OBJECT(tmp_assign_unpack_29__assign_source);
        tmp_assign_source_175 = tmp_assign_unpack_29__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        CHECK_OBJECT(tmp_assign_unpack_29__assign_source);
        tmp_assign_source_176 = tmp_assign_unpack_29__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_176);
    }
    CHECK_OBJECT(tmp_assign_unpack_29__assign_source);
    Py_DECREF(tmp_assign_unpack_29__assign_source);
    tmp_assign_unpack_29__assign_source = NULL;
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = mod_consts[259];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = mod_consts[259];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[262];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[264];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_truediv_expr_left_19;
        PyObject *tmp_truediv_expr_right_19;
        PyObject *tmp_mult_expr_left_24;
        PyObject *tmp_mult_expr_right_24;
        PyObject *tmp_mult_expr_left_25;
        PyObject *tmp_mult_expr_right_25;
        tmp_mult_expr_left_25 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_mult_expr_left_25 == NULL)) {
            tmp_mult_expr_left_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_mult_expr_left_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_25 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[256]);

        if (unlikely(tmp_mult_expr_right_25 == NULL)) {
            tmp_mult_expr_right_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[256]);
        }

        if (tmp_mult_expr_right_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_24 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_25, tmp_mult_expr_right_25);
        if (tmp_mult_expr_left_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_24 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[261]);

        if (unlikely(tmp_mult_expr_right_24 == NULL)) {
            tmp_mult_expr_right_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[261]);
        }

        if (tmp_mult_expr_right_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_24);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_19 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_24, tmp_mult_expr_right_24);
        Py_DECREF(tmp_mult_expr_left_24);
        if (tmp_truediv_expr_left_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_19 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_truediv_expr_right_19 == NULL)) {
            tmp_truediv_expr_right_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[147]);
        }

        if (tmp_truediv_expr_right_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_19);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_181 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_19, tmp_truediv_expr_right_19);
        Py_DECREF(tmp_truediv_expr_left_19);
        if (tmp_assign_source_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_truediv_expr_left_20;
        PyObject *tmp_truediv_expr_right_20;
        PyObject *tmp_mult_expr_left_26;
        PyObject *tmp_mult_expr_right_26;
        PyObject *tmp_mult_expr_left_27;
        PyObject *tmp_mult_expr_right_27;
        tmp_mult_expr_left_27 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_mult_expr_left_27 == NULL)) {
            tmp_mult_expr_left_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_mult_expr_left_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_27 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[256]);

        if (unlikely(tmp_mult_expr_right_27 == NULL)) {
            tmp_mult_expr_right_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[256]);
        }

        if (tmp_mult_expr_right_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_26 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_27, tmp_mult_expr_right_27);
        if (tmp_mult_expr_left_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_26 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_mult_expr_right_26 == NULL)) {
            tmp_mult_expr_right_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_mult_expr_right_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_26);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_20 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_26, tmp_mult_expr_right_26);
        Py_DECREF(tmp_mult_expr_left_26);
        if (tmp_truediv_expr_left_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_20 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_truediv_expr_right_20 == NULL)) {
            tmp_truediv_expr_right_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[147]);
        }

        if (tmp_truediv_expr_right_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_20);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_182 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_20, tmp_truediv_expr_right_20);
        Py_DECREF(tmp_truediv_expr_left_20);
        if (tmp_assign_source_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_31__assign_source == NULL);
        tmp_assign_unpack_31__assign_source = tmp_assign_source_182;
    }
    {
        PyObject *tmp_assign_source_183;
        CHECK_OBJECT(tmp_assign_unpack_31__assign_source);
        tmp_assign_source_183 = tmp_assign_unpack_31__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        CHECK_OBJECT(tmp_assign_unpack_31__assign_source);
        tmp_assign_source_184 = tmp_assign_unpack_31__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_184);
    }
    CHECK_OBJECT(tmp_assign_unpack_31__assign_source);
    Py_DECREF(tmp_assign_unpack_31__assign_source);
    tmp_assign_unpack_31__assign_source = NULL;
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_mult_expr_left_28;
        PyObject *tmp_mult_expr_right_28;
        tmp_mult_expr_left_28 = mod_consts[61];
        tmp_mult_expr_right_28 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[261]);

        if (unlikely(tmp_mult_expr_right_28 == NULL)) {
            tmp_mult_expr_right_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[261]);
        }

        if (tmp_mult_expr_right_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_185 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_28, tmp_mult_expr_right_28);
        if (tmp_assign_source_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_mult_expr_left_29;
        PyObject *tmp_mult_expr_right_29;
        PyObject *tmp_mult_expr_left_30;
        PyObject *tmp_mult_expr_right_30;
        PyObject *tmp_mult_expr_left_31;
        PyObject *tmp_mult_expr_right_31;
        tmp_mult_expr_left_31 = mod_consts[270];
        tmp_mult_expr_right_31 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[200]);

        if (unlikely(tmp_mult_expr_right_31 == NULL)) {
            tmp_mult_expr_right_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
        }

        if (tmp_mult_expr_right_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_30 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_31, tmp_mult_expr_right_31);
        if (tmp_mult_expr_left_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_30 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_mult_expr_right_30 == NULL)) {
            tmp_mult_expr_right_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_mult_expr_right_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_30);

            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_29 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_30, tmp_mult_expr_right_30);
        Py_DECREF(tmp_mult_expr_left_30);
        if (tmp_mult_expr_left_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_29 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_mult_expr_right_29 == NULL)) {
            tmp_mult_expr_right_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_mult_expr_right_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_29);

            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_186 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_29, tmp_mult_expr_right_29);
        Py_DECREF(tmp_mult_expr_left_29);
        if (tmp_assign_source_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_32__assign_source == NULL);
        tmp_assign_unpack_32__assign_source = tmp_assign_source_186;
    }
    {
        PyObject *tmp_assign_source_187;
        CHECK_OBJECT(tmp_assign_unpack_32__assign_source);
        tmp_assign_source_187 = tmp_assign_unpack_32__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        CHECK_OBJECT(tmp_assign_unpack_32__assign_source);
        tmp_assign_source_188 = tmp_assign_unpack_32__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_188);
    }
    CHECK_OBJECT(tmp_assign_unpack_32__assign_source);
    Py_DECREF(tmp_assign_unpack_32__assign_source);
    tmp_assign_unpack_32__assign_source = NULL;
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = mod_consts[273];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        tmp_assign_source_190 = mod_consts[273];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_mult_expr_left_32;
        PyObject *tmp_mult_expr_right_32;
        tmp_mult_expr_left_32 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_mult_expr_left_32 == NULL)) {
            tmp_mult_expr_left_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_mult_expr_left_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_32 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_mult_expr_right_32 == NULL)) {
            tmp_mult_expr_right_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_mult_expr_right_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_191 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_32, tmp_mult_expr_right_32);
        if (tmp_assign_source_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_34__assign_source == NULL);
        tmp_assign_unpack_34__assign_source = tmp_assign_source_191;
    }
    {
        PyObject *tmp_assign_source_192;
        CHECK_OBJECT(tmp_assign_unpack_34__assign_source);
        tmp_assign_source_192 = tmp_assign_unpack_34__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        CHECK_OBJECT(tmp_assign_unpack_34__assign_source);
        tmp_assign_source_193 = tmp_assign_unpack_34__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_193);
    }
    CHECK_OBJECT(tmp_assign_unpack_34__assign_source);
    Py_DECREF(tmp_assign_unpack_34__assign_source);
    tmp_assign_unpack_34__assign_source = NULL;
    {
        PyObject *tmp_assign_source_194;
        tmp_assign_source_194 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_assign_source_194 == NULL)) {
            tmp_assign_source_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_assign_source_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_35__assign_source == NULL);
        Py_INCREF(tmp_assign_source_194);
        tmp_assign_unpack_35__assign_source = tmp_assign_source_194;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_892f6ebc4cf4c5e3506e4b73e0019807, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_892f6ebc4cf4c5e3506e4b73e0019807->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_892f6ebc4cf4c5e3506e4b73e0019807, exception_lineno);
    }



    assertFrameObject(frame_892f6ebc4cf4c5e3506e4b73e0019807);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_195;
        CHECK_OBJECT(tmp_assign_unpack_35__assign_source);
        tmp_assign_source_195 = tmp_assign_unpack_35__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        CHECK_OBJECT(tmp_assign_unpack_35__assign_source);
        tmp_assign_source_196 = tmp_assign_unpack_35__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_196);
    }
    CHECK_OBJECT(tmp_assign_unpack_35__assign_source);
    Py_DECREF(tmp_assign_unpack_35__assign_source);
    tmp_assign_unpack_35__assign_source = NULL;
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[280]);


        tmp_assign_source_197 = MAKE_FUNCTION_scipy$constants$_constants$$$function__1_convert_temperature(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_annotations_2;
        tmp_annotations_2 = DICT_COPY(mod_consts[282]);


        tmp_assign_source_198 = MAKE_FUNCTION_scipy$constants$_constants$$$function__2_lambda2nu(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_annotations_3;
        tmp_annotations_3 = DICT_COPY(mod_consts[284]);


        tmp_assign_source_199 = MAKE_FUNCTION_scipy$constants$_constants$$$function__3_nu2lambda(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_199);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy.constants._constants", false);

    Py_INCREF(module_scipy$constants$_constants);
    return module_scipy$constants$_constants;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$constants$_constants", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
