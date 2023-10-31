/* Generated code for Python module 'scipy.spatial.transform._rotation_groups'
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

/* The "module_scipy$spatial$transform$_rotation_groups" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$spatial$transform$_rotation_groups;
PyDictObject *moduledict_scipy$spatial$transform$_rotation_groups;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[69];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[69];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("scipy.spatial.transform._rotation_groups"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 69; i++) {
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
void checkModuleConstants_scipy$spatial$transform$_rotation_groups(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 69; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e5d0045d578a4d0551b986197cf01250;
static PyCodeObject *codeobj_da87855f31098ecf7795b05e9e736c8f;
static PyCodeObject *codeobj_b51d77a3212917f835dbb06c0e33f342;
static PyCodeObject *codeobj_beaca855dcf4e26401edfb670c719f06;
static PyCodeObject *codeobj_6a3328d9b27c50642478e992195ffca2;
static PyCodeObject *codeobj_b89bbfeb69656476d1219a1739e954b5;
static PyCodeObject *codeobj_8b98827a9777161b6b1a4c697f1045f5;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[61]); CHECK_OBJECT(module_filename_obj);
    codeobj_e5d0045d578a4d0551b986197cf01250 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[62], mod_consts[62], NULL, NULL, 0, 0, 0);
    codeobj_da87855f31098ecf7795b05e9e736c8f = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[60], mod_consts[60], mod_consts[63], NULL, 3, 0, 0);
    codeobj_b51d77a3212917f835dbb06c0e33f342 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[16], mod_consts[16], mod_consts[64], NULL, 3, 0, 0);
    codeobj_beaca855dcf4e26401edfb670c719f06 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[47], mod_consts[47], mod_consts[65], NULL, 3, 0, 0);
    codeobj_6a3328d9b27c50642478e992195ffca2 = MAKE_CODE_OBJECT(module_filename_obj, 5, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[45], mod_consts[45], mod_consts[66], NULL, 1, 0, 0);
    codeobj_b89bbfeb69656476d1219a1739e954b5 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[46], mod_consts[46], mod_consts[67], NULL, 1, 0, 0);
    codeobj_8b98827a9777161b6b1a4c697f1045f5 = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[0], mod_consts[0], mod_consts[67], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__1_icosahedral();


static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__2_octahedral();


static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__3_tetrahedral();


static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__4_dicyclic(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__5_cyclic(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__6_create_group(PyObject *defaults);


// The module function definitions.
static PyObject *impl_scipy$spatial$transform$_rotation_groups$$$function__1_icosahedral(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *var_g1 = NULL;
    PyObject *var_b = NULL;
    PyObject *var_c = NULL;
    PyObject *var_g2 = NULL;
    struct Nuitka_FrameObject *frame_6a3328d9b27c50642478e992195ffca2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6a3328d9b27c50642478e992195ffca2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6a3328d9b27c50642478e992195ffca2)) {
        Py_XDECREF(cache_frame_6a3328d9b27c50642478e992195ffca2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6a3328d9b27c50642478e992195ffca2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6a3328d9b27c50642478e992195ffca2 = MAKE_FUNCTION_FRAME(tstate, codeobj_6a3328d9b27c50642478e992195ffca2, module_scipy$spatial$transform$_rotation_groups, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6a3328d9b27c50642478e992195ffca2->m_type_description == NULL);
    frame_6a3328d9b27c50642478e992195ffca2 = cache_frame_6a3328d9b27c50642478e992195ffca2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6a3328d9b27c50642478e992195ffca2);
    assert(Py_REFCNT(frame_6a3328d9b27c50642478e992195ffca2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "ooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_1 = par_cls;
        frame_6a3328d9b27c50642478e992195ffca2->m_frame.f_lineno = 6;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "ooNooo";
            goto frame_exception_exit_1;
        }
        frame_6a3328d9b27c50642478e992195ffca2->m_frame.f_lineno = 6;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "ooNooo";
            goto frame_exception_exit_1;
        }
        assert(var_g1 == NULL);
        var_g1 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        tmp_truediv_expr_left_1 = mod_consts[2];
        tmp_truediv_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_truediv_expr_right_1 == NULL)) {
            tmp_truediv_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "ooNooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "ooNooo";
            goto frame_exception_exit_1;
        }
        assert(var_b == NULL);
        var_b = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        tmp_truediv_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_truediv_expr_left_2 == NULL)) {
            tmp_truediv_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_truediv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "ooNooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_2 = mod_consts[4];
        tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "ooNooo";
            goto frame_exception_exit_1;
        }
        assert(var_c == NULL);
        var_c = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_list_element_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "ooNooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "ooNooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_2 = mod_consts[2];
        tmp_list_element_1 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_operand_value_1;
            PyObject *tmp_operand_value_2;
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_2);
            CHECK_OBJECT(var_b);
            tmp_operand_value_1 = var_b;
            tmp_list_element_2 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_1);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_1 = "ooNooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_2);
            CHECK_OBJECT(var_c);
            tmp_operand_value_2 = var_c;
            tmp_list_element_2 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_2);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_1 = "ooNooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[7];
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_2);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_list_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(48);
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_list_element_4;
            PyObject *tmp_list_element_5;
            PyObject *tmp_list_element_6;
            PyObject *tmp_list_element_7;
            PyObject *tmp_list_element_8;
            PyObject *tmp_list_element_9;
            PyObject *tmp_list_element_10;
            PyObject *tmp_list_element_11;
            PyObject *tmp_list_element_12;
            PyObject *tmp_list_element_13;
            PyObject *tmp_list_element_14;
            PyObject *tmp_operand_value_25;
            PyObject *tmp_list_element_15;
            PyObject *tmp_operand_value_27;
            PyObject *tmp_list_element_16;
            PyObject *tmp_operand_value_29;
            PyObject *tmp_list_element_17;
            PyObject *tmp_operand_value_31;
            PyObject *tmp_list_element_18;
            PyObject *tmp_operand_value_33;
            PyObject *tmp_list_element_19;
            PyObject *tmp_operand_value_35;
            PyObject *tmp_list_element_20;
            PyObject *tmp_operand_value_37;
            PyObject *tmp_list_element_21;
            PyObject *tmp_operand_value_39;
            PyObject *tmp_list_element_22;
            PyObject *tmp_operand_value_41;
            PyObject *tmp_list_element_23;
            PyObject *tmp_operand_value_43;
            PyObject *tmp_list_element_24;
            PyObject *tmp_operand_value_45;
            PyObject *tmp_list_element_25;
            PyObject *tmp_operand_value_47;
            PyObject *tmp_list_element_26;
            PyObject *tmp_operand_value_49;
            PyObject *tmp_list_element_27;
            PyObject *tmp_operand_value_51;
            PyObject *tmp_list_element_28;
            PyObject *tmp_operand_value_53;
            PyObject *tmp_list_element_29;
            PyObject *tmp_operand_value_55;
            PyObject *tmp_list_element_30;
            PyObject *tmp_operand_value_57;
            PyObject *tmp_list_element_31;
            PyObject *tmp_operand_value_59;
            PyObject *tmp_list_element_32;
            PyObject *tmp_operand_value_61;
            PyObject *tmp_list_element_33;
            PyObject *tmp_operand_value_63;
            PyObject *tmp_list_element_34;
            PyObject *tmp_operand_value_65;
            PyObject *tmp_list_element_35;
            PyObject *tmp_operand_value_67;
            PyObject *tmp_list_element_36;
            PyObject *tmp_operand_value_69;
            PyObject *tmp_list_element_37;
            PyObject *tmp_operand_value_71;
            PyObject *tmp_list_element_38;
            PyObject *tmp_list_element_39;
            PyObject *tmp_list_element_40;
            PyObject *tmp_list_element_41;
            PyObject *tmp_list_element_42;
            PyObject *tmp_list_element_43;
            PyObject *tmp_list_element_44;
            PyObject *tmp_list_element_45;
            PyObject *tmp_list_element_46;
            PyObject *tmp_list_element_47;
            PyObject *tmp_list_element_48;
            PyObject *tmp_list_element_49;
            PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_1);
            tmp_list_element_3 = mod_consts[2];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_3;
                PyObject *tmp_operand_value_4;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_3);
                CHECK_OBJECT(var_b);
                tmp_operand_value_3 = var_b;
                tmp_list_element_3 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_3);
                if (tmp_list_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 11;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_3);
                CHECK_OBJECT(var_c);
                tmp_operand_value_4 = var_c;
                tmp_list_element_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_4);
                if (tmp_list_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 11;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_3);
                tmp_list_element_3 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_3);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            PyList_SET_ITEM(tmp_args_element_value_2, 1, tmp_list_element_1);
            tmp_list_element_4 = mod_consts[2];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_5;
                PyObject *tmp_operand_value_6;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_4);
                CHECK_OBJECT(var_c);
                tmp_operand_value_5 = var_c;
                tmp_list_element_4 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_5);
                if (tmp_list_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 12;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_4);
                tmp_list_element_4 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_4);
                CHECK_OBJECT(var_b);
                tmp_operand_value_6 = var_b;
                tmp_list_element_4 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_6);
                if (tmp_list_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 12;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_4);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            PyList_SET_ITEM(tmp_args_element_value_2, 2, tmp_list_element_1);
            tmp_list_element_5 = mod_consts[2];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_7;
                PyObject *tmp_operand_value_8;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_5);
                CHECK_OBJECT(var_c);
                tmp_operand_value_7 = var_c;
                tmp_list_element_5 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_7);
                if (tmp_list_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 13;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_5;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_5);
                tmp_list_element_5 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_5);
                CHECK_OBJECT(var_b);
                tmp_operand_value_8 = var_b;
                tmp_list_element_5 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_8);
                if (tmp_list_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 13;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_5;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_5);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            PyList_SET_ITEM(tmp_args_element_value_2, 3, tmp_list_element_1);
            tmp_list_element_6 = mod_consts[2];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_9;
                PyObject *tmp_operand_value_10;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_6);
                CHECK_OBJECT(var_b);
                tmp_operand_value_9 = var_b;
                tmp_list_element_6 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_9);
                if (tmp_list_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 14;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_6);
                CHECK_OBJECT(var_c);
                tmp_operand_value_10 = var_c;
                tmp_list_element_6 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_10);
                if (tmp_list_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 14;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_6);
                tmp_list_element_6 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_6);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            PyList_SET_ITEM(tmp_args_element_value_2, 4, tmp_list_element_1);
            tmp_list_element_7 = mod_consts[2];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_11;
                PyObject *tmp_operand_value_12;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_7);
                CHECK_OBJECT(var_b);
                tmp_operand_value_11 = var_b;
                tmp_list_element_7 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_11);
                if (tmp_list_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 15;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_7;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_7);
                CHECK_OBJECT(var_c);
                tmp_operand_value_12 = var_c;
                tmp_list_element_7 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_12);
                if (tmp_list_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 15;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_7;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_7);
                tmp_list_element_7 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_7);
            }
            goto list_build_noexception_6;
            // Exception handling pass through code for list_build:
            list_build_exception_7:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_6:;
            PyList_SET_ITEM(tmp_args_element_value_2, 5, tmp_list_element_1);
            tmp_list_element_8 = mod_consts[2];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_13;
                PyObject *tmp_operand_value_14;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_8);
                CHECK_OBJECT(var_c);
                tmp_operand_value_13 = var_c;
                tmp_list_element_8 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_13);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 16;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_8;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_8);
                tmp_list_element_8 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_8);
                CHECK_OBJECT(var_b);
                tmp_operand_value_14 = var_b;
                tmp_list_element_8 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_14);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 16;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_8;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_8);
            }
            goto list_build_noexception_7;
            // Exception handling pass through code for list_build:
            list_build_exception_8:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_7:;
            PyList_SET_ITEM(tmp_args_element_value_2, 6, tmp_list_element_1);
            tmp_list_element_9 = mod_consts[2];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_15;
                PyObject *tmp_operand_value_16;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_9);
                CHECK_OBJECT(var_c);
                tmp_operand_value_15 = var_c;
                tmp_list_element_9 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_15);
                if (tmp_list_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 17;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_9);
                tmp_list_element_9 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_9);
                CHECK_OBJECT(var_b);
                tmp_operand_value_16 = var_b;
                tmp_list_element_9 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_16);
                if (tmp_list_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 17;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_9);
            }
            goto list_build_noexception_8;
            // Exception handling pass through code for list_build:
            list_build_exception_9:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_8:;
            PyList_SET_ITEM(tmp_args_element_value_2, 7, tmp_list_element_1);
            tmp_list_element_10 = mod_consts[2];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_17;
                PyObject *tmp_operand_value_18;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_10);
                tmp_list_element_10 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_10);
                CHECK_OBJECT(var_b);
                tmp_operand_value_17 = var_b;
                tmp_list_element_10 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_17);
                if (tmp_list_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_10;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_10);
                CHECK_OBJECT(var_c);
                tmp_operand_value_18 = var_c;
                tmp_list_element_10 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_18);
                if (tmp_list_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_10;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_10);
            }
            goto list_build_noexception_9;
            // Exception handling pass through code for list_build:
            list_build_exception_10:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_9:;
            PyList_SET_ITEM(tmp_args_element_value_2, 8, tmp_list_element_1);
            tmp_list_element_11 = mod_consts[2];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_19;
                PyObject *tmp_operand_value_20;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_11);
                tmp_list_element_11 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_11);
                CHECK_OBJECT(var_b);
                tmp_operand_value_19 = var_b;
                tmp_list_element_11 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_19);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 19;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_11;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_11);
                CHECK_OBJECT(var_c);
                tmp_operand_value_20 = var_c;
                tmp_list_element_11 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_20);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 19;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_11;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_11);
            }
            goto list_build_noexception_10;
            // Exception handling pass through code for list_build:
            list_build_exception_11:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_10:;
            PyList_SET_ITEM(tmp_args_element_value_2, 9, tmp_list_element_1);
            tmp_list_element_12 = mod_consts[2];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_21;
                PyObject *tmp_operand_value_22;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_12);
                tmp_list_element_12 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_12);
                CHECK_OBJECT(var_b);
                tmp_operand_value_21 = var_b;
                tmp_list_element_12 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_21);
                if (tmp_list_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 20;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_12;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_12);
                CHECK_OBJECT(var_c);
                tmp_operand_value_22 = var_c;
                tmp_list_element_12 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_22);
                if (tmp_list_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 20;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_12;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_12);
            }
            goto list_build_noexception_11;
            // Exception handling pass through code for list_build:
            list_build_exception_12:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_11:;
            PyList_SET_ITEM(tmp_args_element_value_2, 10, tmp_list_element_1);
            tmp_list_element_13 = mod_consts[2];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_23;
                PyObject *tmp_operand_value_24;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_13);
                tmp_list_element_13 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_13);
                CHECK_OBJECT(var_b);
                tmp_operand_value_23 = var_b;
                tmp_list_element_13 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_23);
                if (tmp_list_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 21;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_13;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_13);
                CHECK_OBJECT(var_c);
                tmp_operand_value_24 = var_c;
                tmp_list_element_13 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_24);
                if (tmp_list_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 21;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_13;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_13);
            }
            goto list_build_noexception_12;
            // Exception handling pass through code for list_build:
            list_build_exception_13:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_12:;
            PyList_SET_ITEM(tmp_args_element_value_2, 11, tmp_list_element_1);
            CHECK_OBJECT(var_b);
            tmp_operand_value_25 = var_b;
            tmp_list_element_14 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_25);
            if (tmp_list_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_26;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_14);
                tmp_list_element_14 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_14);
                tmp_list_element_14 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_14);
                CHECK_OBJECT(var_c);
                tmp_operand_value_26 = var_c;
                tmp_list_element_14 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_26);
                if (tmp_list_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 22;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_14;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_14);
            }
            goto list_build_noexception_13;
            // Exception handling pass through code for list_build:
            list_build_exception_14:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_13:;
            PyList_SET_ITEM(tmp_args_element_value_2, 12, tmp_list_element_1);
            CHECK_OBJECT(var_b);
            tmp_operand_value_27 = var_b;
            tmp_list_element_15 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_27);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_28;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_15);
                tmp_list_element_15 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_15);
                tmp_list_element_15 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_15);
                CHECK_OBJECT(var_c);
                tmp_operand_value_28 = var_c;
                tmp_list_element_15 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_28);
                if (tmp_list_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 23;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_15;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_15);
            }
            goto list_build_noexception_14;
            // Exception handling pass through code for list_build:
            list_build_exception_15:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_14:;
            PyList_SET_ITEM(tmp_args_element_value_2, 13, tmp_list_element_1);
            CHECK_OBJECT(var_b);
            tmp_operand_value_29 = var_b;
            tmp_list_element_16 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_29);
            if (tmp_list_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_30;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_16);
                CHECK_OBJECT(var_c);
                tmp_operand_value_30 = var_c;
                tmp_list_element_16 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_30);
                if (tmp_list_element_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 24;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_16;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_16);
                tmp_list_element_16 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_16);
                tmp_list_element_16 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_16);
            }
            goto list_build_noexception_15;
            // Exception handling pass through code for list_build:
            list_build_exception_16:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_15:;
            PyList_SET_ITEM(tmp_args_element_value_2, 14, tmp_list_element_1);
            CHECK_OBJECT(var_b);
            tmp_operand_value_31 = var_b;
            tmp_list_element_17 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_31);
            if (tmp_list_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_32;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_17);
                CHECK_OBJECT(var_c);
                tmp_operand_value_32 = var_c;
                tmp_list_element_17 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_32);
                if (tmp_list_element_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 25;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_17;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_17);
                tmp_list_element_17 = mod_consts[8];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_17);
                tmp_list_element_17 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_17);
            }
            goto list_build_noexception_16;
            // Exception handling pass through code for list_build:
            list_build_exception_17:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_16:;
            PyList_SET_ITEM(tmp_args_element_value_2, 15, tmp_list_element_1);
            CHECK_OBJECT(var_b);
            tmp_operand_value_33 = var_b;
            tmp_list_element_18 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_33);
            if (tmp_list_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_34;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_18);
                tmp_list_element_18 = mod_consts[8];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_18);
                tmp_list_element_18 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_18);
                CHECK_OBJECT(var_c);
                tmp_operand_value_34 = var_c;
                tmp_list_element_18 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_34);
                if (tmp_list_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 26;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_18;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_18);
            }
            goto list_build_noexception_17;
            // Exception handling pass through code for list_build:
            list_build_exception_18:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_17:;
            PyList_SET_ITEM(tmp_args_element_value_2, 16, tmp_list_element_1);
            CHECK_OBJECT(var_b);
            tmp_operand_value_35 = var_b;
            tmp_list_element_19 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_35);
            if (tmp_list_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_36;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_19);
                tmp_list_element_19 = mod_consts[8];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_19);
                tmp_list_element_19 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_19);
                CHECK_OBJECT(var_c);
                tmp_operand_value_36 = var_c;
                tmp_list_element_19 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_36);
                if (tmp_list_element_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_19;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_19);
            }
            goto list_build_noexception_18;
            // Exception handling pass through code for list_build:
            list_build_exception_19:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_18:;
            PyList_SET_ITEM(tmp_args_element_value_2, 17, tmp_list_element_1);
            CHECK_OBJECT(var_b);
            tmp_operand_value_37 = var_b;
            tmp_list_element_20 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_37);
            if (tmp_list_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_38;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_20);
                CHECK_OBJECT(var_c);
                tmp_operand_value_38 = var_c;
                tmp_list_element_20 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_38);
                if (tmp_list_element_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 28;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_20;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_20);
                tmp_list_element_20 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_20);
                tmp_list_element_20 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_20);
            }
            goto list_build_noexception_19;
            // Exception handling pass through code for list_build:
            list_build_exception_20:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_19:;
            PyList_SET_ITEM(tmp_args_element_value_2, 18, tmp_list_element_1);
            CHECK_OBJECT(var_b);
            tmp_operand_value_39 = var_b;
            tmp_list_element_21 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_39);
            if (tmp_list_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_40;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_21);
                CHECK_OBJECT(var_c);
                tmp_operand_value_40 = var_c;
                tmp_list_element_21 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_40);
                if (tmp_list_element_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 29;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_21;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_21);
                tmp_list_element_21 = mod_consts[8];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_21);
                tmp_list_element_21 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_21);
            }
            goto list_build_noexception_20;
            // Exception handling pass through code for list_build:
            list_build_exception_21:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_20:;
            PyList_SET_ITEM(tmp_args_element_value_2, 19, tmp_list_element_1);
            CHECK_OBJECT(var_b);
            tmp_operand_value_41 = var_b;
            tmp_list_element_22 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_41);
            if (tmp_list_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_42;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_22);
                tmp_list_element_22 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_22);
                CHECK_OBJECT(var_c);
                tmp_operand_value_42 = var_c;
                tmp_list_element_22 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_42);
                if (tmp_list_element_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 30;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_22;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_22);
                tmp_list_element_22 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_22);
            }
            goto list_build_noexception_21;
            // Exception handling pass through code for list_build:
            list_build_exception_22:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_21:;
            PyList_SET_ITEM(tmp_args_element_value_2, 20, tmp_list_element_1);
            CHECK_OBJECT(var_b);
            tmp_operand_value_43 = var_b;
            tmp_list_element_23 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_43);
            if (tmp_list_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_44;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_23);
                tmp_list_element_23 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_23);
                CHECK_OBJECT(var_c);
                tmp_operand_value_44 = var_c;
                tmp_list_element_23 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_44);
                if (tmp_list_element_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 31;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_23;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_23);
                tmp_list_element_23 = mod_consts[8];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_23);
            }
            goto list_build_noexception_22;
            // Exception handling pass through code for list_build:
            list_build_exception_23:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_22:;
            PyList_SET_ITEM(tmp_args_element_value_2, 21, tmp_list_element_1);
            CHECK_OBJECT(var_b);
            tmp_operand_value_45 = var_b;
            tmp_list_element_24 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_45);
            if (tmp_list_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_46;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_24);
                tmp_list_element_24 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_24);
                CHECK_OBJECT(var_c);
                tmp_operand_value_46 = var_c;
                tmp_list_element_24 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_46);
                if (tmp_list_element_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_24;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_24);
                tmp_list_element_24 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_24);
            }
            goto list_build_noexception_23;
            // Exception handling pass through code for list_build:
            list_build_exception_24:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_23:;
            PyList_SET_ITEM(tmp_args_element_value_2, 22, tmp_list_element_1);
            CHECK_OBJECT(var_b);
            tmp_operand_value_47 = var_b;
            tmp_list_element_25 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_47);
            if (tmp_list_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_48;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_25);
                tmp_list_element_25 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_25);
                CHECK_OBJECT(var_c);
                tmp_operand_value_48 = var_c;
                tmp_list_element_25 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_48);
                if (tmp_list_element_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_25;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_25);
                tmp_list_element_25 = mod_consts[8];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_25);
            }
            goto list_build_noexception_24;
            // Exception handling pass through code for list_build:
            list_build_exception_25:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_24:;
            PyList_SET_ITEM(tmp_args_element_value_2, 23, tmp_list_element_1);
            CHECK_OBJECT(var_c);
            tmp_operand_value_49 = var_c;
            tmp_list_element_26 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_49);
            if (tmp_list_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_50;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_26);
                tmp_list_element_26 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_26);
                CHECK_OBJECT(var_b);
                tmp_operand_value_50 = var_b;
                tmp_list_element_26 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_50);
                if (tmp_list_element_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 34;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_26;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_26);
                tmp_list_element_26 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_26);
            }
            goto list_build_noexception_25;
            // Exception handling pass through code for list_build:
            list_build_exception_26:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_25:;
            PyList_SET_ITEM(tmp_args_element_value_2, 24, tmp_list_element_1);
            CHECK_OBJECT(var_c);
            tmp_operand_value_51 = var_c;
            tmp_list_element_27 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_51);
            if (tmp_list_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_52;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_27);
                tmp_list_element_27 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_27);
                CHECK_OBJECT(var_b);
                tmp_operand_value_52 = var_b;
                tmp_list_element_27 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_52);
                if (tmp_list_element_27 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 35;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_27;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_27);
                tmp_list_element_27 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_27);
            }
            goto list_build_noexception_26;
            // Exception handling pass through code for list_build:
            list_build_exception_27:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_26:;
            PyList_SET_ITEM(tmp_args_element_value_2, 25, tmp_list_element_1);
            CHECK_OBJECT(var_c);
            tmp_operand_value_53 = var_c;
            tmp_list_element_28 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_53);
            if (tmp_list_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_54;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_28);
                CHECK_OBJECT(var_b);
                tmp_operand_value_54 = var_b;
                tmp_list_element_28 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_54);
                if (tmp_list_element_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_28;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_28);
                tmp_list_element_28 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_28);
                tmp_list_element_28 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_28);
            }
            goto list_build_noexception_27;
            // Exception handling pass through code for list_build:
            list_build_exception_28:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_27:;
            PyList_SET_ITEM(tmp_args_element_value_2, 26, tmp_list_element_1);
            CHECK_OBJECT(var_c);
            tmp_operand_value_55 = var_c;
            tmp_list_element_29 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_55);
            if (tmp_list_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_56;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_29);
                CHECK_OBJECT(var_b);
                tmp_operand_value_56 = var_b;
                tmp_list_element_29 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_56);
                if (tmp_list_element_29 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_29;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_29);
                tmp_list_element_29 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_29);
                tmp_list_element_29 = mod_consts[8];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_29);
            }
            goto list_build_noexception_28;
            // Exception handling pass through code for list_build:
            list_build_exception_29:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_28:;
            PyList_SET_ITEM(tmp_args_element_value_2, 27, tmp_list_element_1);
            CHECK_OBJECT(var_c);
            tmp_operand_value_57 = var_c;
            tmp_list_element_30 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_57);
            if (tmp_list_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_58;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_30);
                tmp_list_element_30 = mod_consts[8];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_30);
                CHECK_OBJECT(var_b);
                tmp_operand_value_58 = var_b;
                tmp_list_element_30 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_58);
                if (tmp_list_element_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_30;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_30);
                tmp_list_element_30 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_30);
            }
            goto list_build_noexception_29;
            // Exception handling pass through code for list_build:
            list_build_exception_30:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_29:;
            PyList_SET_ITEM(tmp_args_element_value_2, 28, tmp_list_element_1);
            CHECK_OBJECT(var_c);
            tmp_operand_value_59 = var_c;
            tmp_list_element_31 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_59);
            if (tmp_list_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_60;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_31);
                tmp_list_element_31 = mod_consts[8];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_31);
                CHECK_OBJECT(var_b);
                tmp_operand_value_60 = var_b;
                tmp_list_element_31 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_60);
                if (tmp_list_element_31 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_31;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_31);
                tmp_list_element_31 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_31);
            }
            goto list_build_noexception_30;
            // Exception handling pass through code for list_build:
            list_build_exception_31:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_30:;
            PyList_SET_ITEM(tmp_args_element_value_2, 29, tmp_list_element_1);
            CHECK_OBJECT(var_c);
            tmp_operand_value_61 = var_c;
            tmp_list_element_32 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_61);
            if (tmp_list_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_62;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_32);
                CHECK_OBJECT(var_b);
                tmp_operand_value_62 = var_b;
                tmp_list_element_32 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_62);
                if (tmp_list_element_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_32;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_32);
                tmp_list_element_32 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_32);
                tmp_list_element_32 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_32);
            }
            goto list_build_noexception_31;
            // Exception handling pass through code for list_build:
            list_build_exception_32:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_31:;
            PyList_SET_ITEM(tmp_args_element_value_2, 30, tmp_list_element_1);
            CHECK_OBJECT(var_c);
            tmp_operand_value_63 = var_c;
            tmp_list_element_33 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_63);
            if (tmp_list_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_64;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_33);
                CHECK_OBJECT(var_b);
                tmp_operand_value_64 = var_b;
                tmp_list_element_33 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_64);
                if (tmp_list_element_33 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 41;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_33;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_33);
                tmp_list_element_33 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_33);
                tmp_list_element_33 = mod_consts[8];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_33);
            }
            goto list_build_noexception_32;
            // Exception handling pass through code for list_build:
            list_build_exception_33:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_32:;
            PyList_SET_ITEM(tmp_args_element_value_2, 31, tmp_list_element_1);
            CHECK_OBJECT(var_c);
            tmp_operand_value_65 = var_c;
            tmp_list_element_34 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_65);
            if (tmp_list_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_66;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_34);
                tmp_list_element_34 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_34);
                tmp_list_element_34 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_34);
                CHECK_OBJECT(var_b);
                tmp_operand_value_66 = var_b;
                tmp_list_element_34 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_66);
                if (tmp_list_element_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_34;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_34);
            }
            goto list_build_noexception_33;
            // Exception handling pass through code for list_build:
            list_build_exception_34:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_33:;
            PyList_SET_ITEM(tmp_args_element_value_2, 32, tmp_list_element_1);
            CHECK_OBJECT(var_c);
            tmp_operand_value_67 = var_c;
            tmp_list_element_35 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_67);
            if (tmp_list_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_68;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_35);
                tmp_list_element_35 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_35);
                tmp_list_element_35 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_35);
                CHECK_OBJECT(var_b);
                tmp_operand_value_68 = var_b;
                tmp_list_element_35 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_68);
                if (tmp_list_element_35 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 43;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_35;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_35);
            }
            goto list_build_noexception_34;
            // Exception handling pass through code for list_build:
            list_build_exception_35:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_34:;
            PyList_SET_ITEM(tmp_args_element_value_2, 33, tmp_list_element_1);
            CHECK_OBJECT(var_c);
            tmp_operand_value_69 = var_c;
            tmp_list_element_36 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_69);
            if (tmp_list_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_70;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_36);
                tmp_list_element_36 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_36);
                tmp_list_element_36 = mod_consts[8];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_36);
                CHECK_OBJECT(var_b);
                tmp_operand_value_70 = var_b;
                tmp_list_element_36 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_70);
                if (tmp_list_element_36 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_36;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_36);
            }
            goto list_build_noexception_35;
            // Exception handling pass through code for list_build:
            list_build_exception_36:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_35:;
            PyList_SET_ITEM(tmp_args_element_value_2, 34, tmp_list_element_1);
            CHECK_OBJECT(var_c);
            tmp_operand_value_71 = var_c;
            tmp_list_element_37 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_71);
            if (tmp_list_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_1 = "ooNooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_72;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_37);
                tmp_list_element_37 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_37);
                tmp_list_element_37 = mod_consts[8];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_37);
                CHECK_OBJECT(var_b);
                tmp_operand_value_72 = var_b;
                tmp_list_element_37 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_72);
                if (tmp_list_element_37 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 45;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_37;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_37);
            }
            goto list_build_noexception_36;
            // Exception handling pass through code for list_build:
            list_build_exception_37:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_36:;
            PyList_SET_ITEM(tmp_args_element_value_2, 35, tmp_list_element_1);
            tmp_list_element_38 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_73;
                PyObject *tmp_operand_value_74;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_38);
                tmp_list_element_38 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_38);
                CHECK_OBJECT(var_c);
                tmp_operand_value_73 = var_c;
                tmp_list_element_38 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_73);
                if (tmp_list_element_38 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_38;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_38);
                CHECK_OBJECT(var_b);
                tmp_operand_value_74 = var_b;
                tmp_list_element_38 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_74);
                if (tmp_list_element_38 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_38;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_38);
            }
            goto list_build_noexception_37;
            // Exception handling pass through code for list_build:
            list_build_exception_38:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_37:;
            PyList_SET_ITEM(tmp_args_element_value_2, 36, tmp_list_element_1);
            tmp_list_element_39 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_75;
                PyObject *tmp_operand_value_76;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_39);
                tmp_list_element_39 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_39);
                CHECK_OBJECT(var_c);
                tmp_operand_value_75 = var_c;
                tmp_list_element_39 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_75);
                if (tmp_list_element_39 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 47;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_39;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_39);
                CHECK_OBJECT(var_b);
                tmp_operand_value_76 = var_b;
                tmp_list_element_39 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_76);
                if (tmp_list_element_39 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 47;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_39;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_39);
            }
            goto list_build_noexception_38;
            // Exception handling pass through code for list_build:
            list_build_exception_39:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_38:;
            PyList_SET_ITEM(tmp_args_element_value_2, 37, tmp_list_element_1);
            tmp_list_element_40 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_77;
                PyObject *tmp_operand_value_78;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_40);
                tmp_list_element_40 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_40);
                CHECK_OBJECT(var_c);
                tmp_operand_value_77 = var_c;
                tmp_list_element_40 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_77);
                if (tmp_list_element_40 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_40;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_40);
                CHECK_OBJECT(var_b);
                tmp_operand_value_78 = var_b;
                tmp_list_element_40 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_78);
                if (tmp_list_element_40 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_40;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_40);
            }
            goto list_build_noexception_39;
            // Exception handling pass through code for list_build:
            list_build_exception_40:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_39:;
            PyList_SET_ITEM(tmp_args_element_value_2, 38, tmp_list_element_1);
            tmp_list_element_41 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_79;
                PyObject *tmp_operand_value_80;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_41);
                tmp_list_element_41 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_41);
                CHECK_OBJECT(var_c);
                tmp_operand_value_79 = var_c;
                tmp_list_element_41 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_79);
                if (tmp_list_element_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_41;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_41);
                CHECK_OBJECT(var_b);
                tmp_operand_value_80 = var_b;
                tmp_list_element_41 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_80);
                if (tmp_list_element_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_41;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_41);
            }
            goto list_build_noexception_40;
            // Exception handling pass through code for list_build:
            list_build_exception_41:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_40:;
            PyList_SET_ITEM(tmp_args_element_value_2, 39, tmp_list_element_1);
            tmp_list_element_42 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_81;
                PyObject *tmp_operand_value_82;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_42);
                CHECK_OBJECT(var_b);
                tmp_operand_value_81 = var_b;
                tmp_list_element_42 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_81);
                if (tmp_list_element_42 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_42;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_42);
                tmp_list_element_42 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_42);
                CHECK_OBJECT(var_c);
                tmp_operand_value_82 = var_c;
                tmp_list_element_42 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_82);
                if (tmp_list_element_42 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_42;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_42);
            }
            goto list_build_noexception_41;
            // Exception handling pass through code for list_build:
            list_build_exception_42:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_41:;
            PyList_SET_ITEM(tmp_args_element_value_2, 40, tmp_list_element_1);
            tmp_list_element_43 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_83;
                PyObject *tmp_operand_value_84;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_43);
                CHECK_OBJECT(var_b);
                tmp_operand_value_83 = var_b;
                tmp_list_element_43 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_83);
                if (tmp_list_element_43 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 51;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_43;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_43);
                tmp_list_element_43 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_43);
                CHECK_OBJECT(var_c);
                tmp_operand_value_84 = var_c;
                tmp_list_element_43 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_84);
                if (tmp_list_element_43 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 51;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_43;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_43);
            }
            goto list_build_noexception_42;
            // Exception handling pass through code for list_build:
            list_build_exception_43:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_42:;
            PyList_SET_ITEM(tmp_args_element_value_2, 41, tmp_list_element_1);
            tmp_list_element_44 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_85;
                PyObject *tmp_operand_value_86;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_44);
                CHECK_OBJECT(var_b);
                tmp_operand_value_85 = var_b;
                tmp_list_element_44 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_85);
                if (tmp_list_element_44 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 52;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_44;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_44);
                tmp_list_element_44 = mod_consts[8];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_44);
                CHECK_OBJECT(var_c);
                tmp_operand_value_86 = var_c;
                tmp_list_element_44 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_86);
                if (tmp_list_element_44 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 52;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_44;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_44);
            }
            goto list_build_noexception_43;
            // Exception handling pass through code for list_build:
            list_build_exception_44:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_43:;
            PyList_SET_ITEM(tmp_args_element_value_2, 42, tmp_list_element_1);
            tmp_list_element_45 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_87;
                PyObject *tmp_operand_value_88;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_45);
                CHECK_OBJECT(var_b);
                tmp_operand_value_87 = var_b;
                tmp_list_element_45 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_87);
                if (tmp_list_element_45 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 53;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_45;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_45);
                tmp_list_element_45 = mod_consts[8];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_45);
                CHECK_OBJECT(var_c);
                tmp_operand_value_88 = var_c;
                tmp_list_element_45 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_88);
                if (tmp_list_element_45 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 53;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_45;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_45);
            }
            goto list_build_noexception_44;
            // Exception handling pass through code for list_build:
            list_build_exception_45:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_44:;
            PyList_SET_ITEM(tmp_args_element_value_2, 43, tmp_list_element_1);
            tmp_list_element_46 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_89;
                PyObject *tmp_operand_value_90;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_46);
                CHECK_OBJECT(var_c);
                tmp_operand_value_89 = var_c;
                tmp_list_element_46 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_89);
                if (tmp_list_element_46 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 54;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_46;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_46);
                CHECK_OBJECT(var_b);
                tmp_operand_value_90 = var_b;
                tmp_list_element_46 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_90);
                if (tmp_list_element_46 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 54;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_46;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_46);
                tmp_list_element_46 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_46);
            }
            goto list_build_noexception_45;
            // Exception handling pass through code for list_build:
            list_build_exception_46:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_45:;
            PyList_SET_ITEM(tmp_args_element_value_2, 44, tmp_list_element_1);
            tmp_list_element_47 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_91;
                PyObject *tmp_operand_value_92;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_47);
                CHECK_OBJECT(var_c);
                tmp_operand_value_91 = var_c;
                tmp_list_element_47 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_91);
                if (tmp_list_element_47 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 55;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_47;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_47);
                CHECK_OBJECT(var_b);
                tmp_operand_value_92 = var_b;
                tmp_list_element_47 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_92);
                if (tmp_list_element_47 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 55;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_47;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_47);
                tmp_list_element_47 = mod_consts[8];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_47);
            }
            goto list_build_noexception_46;
            // Exception handling pass through code for list_build:
            list_build_exception_47:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_46:;
            PyList_SET_ITEM(tmp_args_element_value_2, 45, tmp_list_element_1);
            tmp_list_element_48 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_93;
                PyObject *tmp_operand_value_94;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_48);
                CHECK_OBJECT(var_c);
                tmp_operand_value_93 = var_c;
                tmp_list_element_48 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_93);
                if (tmp_list_element_48 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 56;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_48;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_48);
                CHECK_OBJECT(var_b);
                tmp_operand_value_94 = var_b;
                tmp_list_element_48 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_94);
                if (tmp_list_element_48 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 56;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_48;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_48);
                tmp_list_element_48 = mod_consts[2];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_48);
            }
            goto list_build_noexception_47;
            // Exception handling pass through code for list_build:
            list_build_exception_48:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_47:;
            PyList_SET_ITEM(tmp_args_element_value_2, 46, tmp_list_element_1);
            tmp_list_element_49 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_95;
                PyObject *tmp_operand_value_96;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_49);
                CHECK_OBJECT(var_c);
                tmp_operand_value_95 = var_c;
                tmp_list_element_49 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_95);
                if (tmp_list_element_49 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_49;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_49);
                CHECK_OBJECT(var_b);
                tmp_operand_value_96 = var_b;
                tmp_list_element_49 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_96);
                if (tmp_list_element_49 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;
                    type_description_1 = "ooNooo";
                    goto list_build_exception_49;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_49);
                tmp_list_element_49 = mod_consts[8];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_49);
            }
            goto list_build_noexception_48;
            // Exception handling pass through code for list_build:
            list_build_exception_49:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_48:;
            PyList_SET_ITEM(tmp_args_element_value_2, 47, tmp_list_element_1);
        }
        goto list_build_noexception_49;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_49:;
        frame_6a3328d9b27c50642478e992195ffca2->m_frame.f_lineno = 10;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "ooNooo";
            goto frame_exception_exit_1;
        }
        assert(var_g2 == NULL);
        var_g2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooNooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 58;
            type_description_1 = "ooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_g1);
        tmp_tuple_element_1 = var_g1;
        tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_4, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_g2);
        tmp_tuple_element_1 = var_g2;
        PyTuple_SET_ITEM0(tmp_args_element_value_4, 1, tmp_tuple_element_1);
        frame_6a3328d9b27c50642478e992195ffca2->m_frame.f_lineno = 58;
        tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[10], tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 58;
            type_description_1 = "ooNooo";
            goto frame_exception_exit_1;
        }
        frame_6a3328d9b27c50642478e992195ffca2->m_frame.f_lineno = 58;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooNooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6a3328d9b27c50642478e992195ffca2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6a3328d9b27c50642478e992195ffca2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a3328d9b27c50642478e992195ffca2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6a3328d9b27c50642478e992195ffca2,
        type_description_1,
        par_cls,
        var_g1,
        NULL,
        var_b,
        var_c,
        var_g2
    );


    // Release cached frame if used for exception.
    if (frame_6a3328d9b27c50642478e992195ffca2 == cache_frame_6a3328d9b27c50642478e992195ffca2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6a3328d9b27c50642478e992195ffca2);
        cache_frame_6a3328d9b27c50642478e992195ffca2 = NULL;
    }

    assertFrameObject(frame_6a3328d9b27c50642478e992195ffca2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_g1);
    Py_DECREF(var_g1);
    var_g1 = NULL;
    CHECK_OBJECT(var_b);
    Py_DECREF(var_b);
    var_b = NULL;
    CHECK_OBJECT(var_c);
    Py_DECREF(var_c);
    var_c = NULL;
    CHECK_OBJECT(var_g2);
    Py_DECREF(var_g2);
    var_g2 = NULL;
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

    Py_XDECREF(var_g1);
    var_g1 = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_g2);
    var_g2 = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$spatial$transform$_rotation_groups$$$function__2_octahedral(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *var_g1 = NULL;
    PyObject *var_c = NULL;
    PyObject *var_g2 = NULL;
    struct Nuitka_FrameObject *frame_b89bbfeb69656476d1219a1739e954b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b89bbfeb69656476d1219a1739e954b5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b89bbfeb69656476d1219a1739e954b5)) {
        Py_XDECREF(cache_frame_b89bbfeb69656476d1219a1739e954b5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b89bbfeb69656476d1219a1739e954b5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b89bbfeb69656476d1219a1739e954b5 = MAKE_FUNCTION_FRAME(tstate, codeobj_b89bbfeb69656476d1219a1739e954b5, module_scipy$spatial$transform$_rotation_groups, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b89bbfeb69656476d1219a1739e954b5->m_type_description == NULL);
    frame_b89bbfeb69656476d1219a1739e954b5 = cache_frame_b89bbfeb69656476d1219a1739e954b5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b89bbfeb69656476d1219a1739e954b5);
    assert(Py_REFCNT(frame_b89bbfeb69656476d1219a1739e954b5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_1 = par_cls;
        frame_b89bbfeb69656476d1219a1739e954b5->m_frame.f_lineno = 62;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_b89bbfeb69656476d1219a1739e954b5->m_frame.f_lineno = 62;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_g1 == NULL);
        var_g1 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_b89bbfeb69656476d1219a1739e954b5->m_frame.f_lineno = 63;
        tmp_truediv_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[11],
            PyTuple_GET_ITEM(mod_consts[12], 0)
        );

        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[4];
        tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_c == NULL);
        var_c = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_operand_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_c);
        tmp_operand_value_1 = var_c;
        tmp_list_element_2 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_1);
        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_operand_value_2;
            PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[7];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[7];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_2);
            CHECK_OBJECT(var_c);
            tmp_operand_value_2 = var_c;
            tmp_list_element_2 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_2);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_2);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_list_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(12);
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_list_element_4;
            PyObject *tmp_list_element_5;
            PyObject *tmp_list_element_6;
            PyObject *tmp_list_element_7;
            PyObject *tmp_operand_value_11;
            PyObject *tmp_list_element_8;
            PyObject *tmp_list_element_9;
            PyObject *tmp_list_element_10;
            PyObject *tmp_operand_value_17;
            PyObject *tmp_list_element_11;
            PyObject *tmp_operand_value_19;
            PyObject *tmp_list_element_12;
            PyObject *tmp_operand_value_21;
            PyObject *tmp_list_element_13;
            PyObject *tmp_operand_value_23;
            PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_1);
            tmp_list_element_3 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_3;
                PyObject *tmp_operand_value_4;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_3);
                CHECK_OBJECT(var_c);
                tmp_operand_value_3 = var_c;
                tmp_list_element_3 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_3);
                if (tmp_list_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_1 = "oooo";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_3);
                tmp_list_element_3 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_3);
                CHECK_OBJECT(var_c);
                tmp_operand_value_4 = var_c;
                tmp_list_element_3 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_4);
                if (tmp_list_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_1 = "oooo";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_3);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            PyList_SET_ITEM(tmp_args_element_value_2, 1, tmp_list_element_1);
            tmp_list_element_4 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_5;
                PyObject *tmp_operand_value_6;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_4);
                tmp_list_element_4 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_4);
                CHECK_OBJECT(var_c);
                tmp_operand_value_5 = var_c;
                tmp_list_element_4 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_5);
                if (tmp_list_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_1 = "oooo";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_4);
                CHECK_OBJECT(var_c);
                tmp_operand_value_6 = var_c;
                tmp_list_element_4 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_6);
                if (tmp_list_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_1 = "oooo";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_4);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            PyList_SET_ITEM(tmp_args_element_value_2, 2, tmp_list_element_1);
            tmp_list_element_5 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_7;
                PyObject *tmp_operand_value_8;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_5);
                tmp_list_element_5 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_5);
                CHECK_OBJECT(var_c);
                tmp_operand_value_7 = var_c;
                tmp_list_element_5 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_7);
                if (tmp_list_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;
                    type_description_1 = "oooo";
                    goto list_build_exception_5;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_5);
                CHECK_OBJECT(var_c);
                tmp_operand_value_8 = var_c;
                tmp_list_element_5 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_8);
                if (tmp_list_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;
                    type_description_1 = "oooo";
                    goto list_build_exception_5;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_5);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            PyList_SET_ITEM(tmp_args_element_value_2, 3, tmp_list_element_1);
            tmp_list_element_6 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_9;
                PyObject *tmp_operand_value_10;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_6);
                CHECK_OBJECT(var_c);
                tmp_operand_value_9 = var_c;
                tmp_list_element_6 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_9);
                if (tmp_list_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_1 = "oooo";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_6);
                tmp_list_element_6 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_6);
                CHECK_OBJECT(var_c);
                tmp_operand_value_10 = var_c;
                tmp_list_element_6 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_10);
                if (tmp_list_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_1 = "oooo";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_6);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            PyList_SET_ITEM(tmp_args_element_value_2, 4, tmp_list_element_1);
            CHECK_OBJECT(var_c);
            tmp_operand_value_11 = var_c;
            tmp_list_element_7 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_11);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "oooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_12;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_7);
                tmp_list_element_7 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_7);
                tmp_list_element_7 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_7);
                CHECK_OBJECT(var_c);
                tmp_operand_value_12 = var_c;
                tmp_list_element_7 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_12);
                if (tmp_list_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;
                    type_description_1 = "oooo";
                    goto list_build_exception_7;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_7);
            }
            goto list_build_noexception_6;
            // Exception handling pass through code for list_build:
            list_build_exception_7:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_6:;
            PyList_SET_ITEM(tmp_args_element_value_2, 5, tmp_list_element_1);
            tmp_list_element_8 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_13;
                PyObject *tmp_operand_value_14;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_8);
                CHECK_OBJECT(var_c);
                tmp_operand_value_13 = var_c;
                tmp_list_element_8 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_13);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_1 = "oooo";
                    goto list_build_exception_8;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_8);
                CHECK_OBJECT(var_c);
                tmp_operand_value_14 = var_c;
                tmp_list_element_8 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_14);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_1 = "oooo";
                    goto list_build_exception_8;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_8);
                tmp_list_element_8 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_8);
            }
            goto list_build_noexception_7;
            // Exception handling pass through code for list_build:
            list_build_exception_8:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_7:;
            PyList_SET_ITEM(tmp_args_element_value_2, 6, tmp_list_element_1);
            tmp_list_element_9 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_15;
                PyObject *tmp_operand_value_16;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_9);
                CHECK_OBJECT(var_c);
                tmp_operand_value_15 = var_c;
                tmp_list_element_9 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_15);
                if (tmp_list_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_1 = "oooo";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_9);
                CHECK_OBJECT(var_c);
                tmp_operand_value_16 = var_c;
                tmp_list_element_9 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_16);
                if (tmp_list_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 71;
                    type_description_1 = "oooo";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_9);
                tmp_list_element_9 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_9);
            }
            goto list_build_noexception_8;
            // Exception handling pass through code for list_build:
            list_build_exception_9:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_8:;
            PyList_SET_ITEM(tmp_args_element_value_2, 7, tmp_list_element_1);
            CHECK_OBJECT(var_c);
            tmp_operand_value_17 = var_c;
            tmp_list_element_10 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_17);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "oooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_18;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_10);
                tmp_list_element_10 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_10);
                CHECK_OBJECT(var_c);
                tmp_operand_value_18 = var_c;
                tmp_list_element_10 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_18);
                if (tmp_list_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_1 = "oooo";
                    goto list_build_exception_10;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_10);
                tmp_list_element_10 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_10);
            }
            goto list_build_noexception_9;
            // Exception handling pass through code for list_build:
            list_build_exception_10:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_9:;
            PyList_SET_ITEM(tmp_args_element_value_2, 8, tmp_list_element_1);
            CHECK_OBJECT(var_c);
            tmp_operand_value_19 = var_c;
            tmp_list_element_11 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_19);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_1 = "oooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_20;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_11);
                tmp_list_element_11 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_11);
                CHECK_OBJECT(var_c);
                tmp_operand_value_20 = var_c;
                tmp_list_element_11 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_20);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;
                    type_description_1 = "oooo";
                    goto list_build_exception_11;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_11);
                tmp_list_element_11 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_11);
            }
            goto list_build_noexception_10;
            // Exception handling pass through code for list_build:
            list_build_exception_11:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_10:;
            PyList_SET_ITEM(tmp_args_element_value_2, 9, tmp_list_element_1);
            CHECK_OBJECT(var_c);
            tmp_operand_value_21 = var_c;
            tmp_list_element_12 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_21);
            if (tmp_list_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_1 = "oooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_22;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_12);
                CHECK_OBJECT(var_c);
                tmp_operand_value_22 = var_c;
                tmp_list_element_12 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_22);
                if (tmp_list_element_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_1 = "oooo";
                    goto list_build_exception_12;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_12);
                tmp_list_element_12 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_12);
                tmp_list_element_12 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_12);
            }
            goto list_build_noexception_11;
            // Exception handling pass through code for list_build:
            list_build_exception_12:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_11:;
            PyList_SET_ITEM(tmp_args_element_value_2, 10, tmp_list_element_1);
            CHECK_OBJECT(var_c);
            tmp_operand_value_23 = var_c;
            tmp_list_element_13 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_23);
            if (tmp_list_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_1 = "oooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_24;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_13);
                CHECK_OBJECT(var_c);
                tmp_operand_value_24 = var_c;
                tmp_list_element_13 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_24);
                if (tmp_list_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;
                    type_description_1 = "oooo";
                    goto list_build_exception_13;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_13);
                tmp_list_element_13 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_13);
                tmp_list_element_13 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_13);
            }
            goto list_build_noexception_12;
            // Exception handling pass through code for list_build:
            list_build_exception_13:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_12:;
            PyList_SET_ITEM(tmp_args_element_value_2, 11, tmp_list_element_1);
        }
        goto list_build_noexception_13;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_13:;
        frame_b89bbfeb69656476d1219a1739e954b5->m_frame.f_lineno = 64;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_g2 == NULL);
        var_g2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_g1);
        tmp_tuple_element_1 = var_g1;
        tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_4, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_g2);
        tmp_tuple_element_1 = var_g2;
        PyTuple_SET_ITEM0(tmp_args_element_value_4, 1, tmp_tuple_element_1);
        frame_b89bbfeb69656476d1219a1739e954b5->m_frame.f_lineno = 76;
        tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[10], tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_b89bbfeb69656476d1219a1739e954b5->m_frame.f_lineno = 76;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b89bbfeb69656476d1219a1739e954b5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b89bbfeb69656476d1219a1739e954b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b89bbfeb69656476d1219a1739e954b5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b89bbfeb69656476d1219a1739e954b5,
        type_description_1,
        par_cls,
        var_g1,
        var_c,
        var_g2
    );


    // Release cached frame if used for exception.
    if (frame_b89bbfeb69656476d1219a1739e954b5 == cache_frame_b89bbfeb69656476d1219a1739e954b5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b89bbfeb69656476d1219a1739e954b5);
        cache_frame_b89bbfeb69656476d1219a1739e954b5 = NULL;
    }

    assertFrameObject(frame_b89bbfeb69656476d1219a1739e954b5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_g1);
    Py_DECREF(var_g1);
    var_g1 = NULL;
    CHECK_OBJECT(var_c);
    Py_DECREF(var_c);
    var_c = NULL;
    CHECK_OBJECT(var_g2);
    Py_DECREF(var_g2);
    var_g2 = NULL;
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

    Py_XDECREF(var_g1);
    var_g1 = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_g2);
    var_g2 = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$spatial$transform$_rotation_groups$$$function__3_tetrahedral(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *var_g1 = NULL;
    PyObject *var_g2 = NULL;
    struct Nuitka_FrameObject *frame_8b98827a9777161b6b1a4c697f1045f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8b98827a9777161b6b1a4c697f1045f5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8b98827a9777161b6b1a4c697f1045f5)) {
        Py_XDECREF(cache_frame_8b98827a9777161b6b1a4c697f1045f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b98827a9777161b6b1a4c697f1045f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b98827a9777161b6b1a4c697f1045f5 = MAKE_FUNCTION_FRAME(tstate, codeobj_8b98827a9777161b6b1a4c697f1045f5, module_scipy$spatial$transform$_rotation_groups, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8b98827a9777161b6b1a4c697f1045f5->m_type_description == NULL);
    frame_8b98827a9777161b6b1a4c697f1045f5 = cache_frame_8b98827a9777161b6b1a4c697f1045f5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8b98827a9777161b6b1a4c697f1045f5);
    assert(Py_REFCNT(frame_8b98827a9777161b6b1a4c697f1045f5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooNo";
            goto frame_exception_exit_1;
        }
        frame_8b98827a9777161b6b1a4c697f1045f5->m_frame.f_lineno = 80;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[13],
            PyTuple_GET_ITEM(mod_consts[14], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooNo";
            goto frame_exception_exit_1;
        }
        assert(var_g1 == NULL);
        var_g1 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_arg_element_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooNo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = DEEP_COPY_LIST_GUIDED(tstate, mod_consts[15], "llllllll");
        frame_8b98827a9777161b6b1a4c697f1045f5->m_frame.f_lineno = 82;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[6], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooNo";
            goto frame_exception_exit_1;
        }
        assert(var_g2 == NULL);
        var_g2 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooNo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 90;
            type_description_1 = "ooNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_g1);
        tmp_tuple_element_1 = var_g1;
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_g2);
        tmp_tuple_element_1 = var_g2;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_1);
        frame_8b98827a9777161b6b1a4c697f1045f5->m_frame.f_lineno = 90;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[10], tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 90;
            type_description_1 = "ooNo";
            goto frame_exception_exit_1;
        }
        frame_8b98827a9777161b6b1a4c697f1045f5->m_frame.f_lineno = 90;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooNo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8b98827a9777161b6b1a4c697f1045f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b98827a9777161b6b1a4c697f1045f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b98827a9777161b6b1a4c697f1045f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b98827a9777161b6b1a4c697f1045f5,
        type_description_1,
        par_cls,
        var_g1,
        NULL,
        var_g2
    );


    // Release cached frame if used for exception.
    if (frame_8b98827a9777161b6b1a4c697f1045f5 == cache_frame_8b98827a9777161b6b1a4c697f1045f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8b98827a9777161b6b1a4c697f1045f5);
        cache_frame_8b98827a9777161b6b1a4c697f1045f5 = NULL;
    }

    assertFrameObject(frame_8b98827a9777161b6b1a4c697f1045f5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_g1);
    Py_DECREF(var_g1);
    var_g1 = NULL;
    CHECK_OBJECT(var_g2);
    Py_DECREF(var_g2);
    var_g2 = NULL;
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

    Py_XDECREF(var_g1);
    var_g1 = NULL;
    Py_XDECREF(var_g2);
    var_g2 = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$spatial$transform$_rotation_groups$$$function__4_dicyclic(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_n = python_pars[1];
    PyObject *par_axis = python_pars[2];
    PyObject *var_g1 = NULL;
    PyObject *var_thetas = NULL;
    PyObject *var_rv = NULL;
    PyObject *var_g2 = NULL;
    struct Nuitka_FrameObject *frame_beaca855dcf4e26401edfb670c719f06;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_beaca855dcf4e26401edfb670c719f06 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_beaca855dcf4e26401edfb670c719f06)) {
        Py_XDECREF(cache_frame_beaca855dcf4e26401edfb670c719f06);

#if _DEBUG_REFCOUNTS
        if (cache_frame_beaca855dcf4e26401edfb670c719f06 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_beaca855dcf4e26401edfb670c719f06 = MAKE_FUNCTION_FRAME(tstate, codeobj_beaca855dcf4e26401edfb670c719f06, module_scipy$spatial$transform$_rotation_groups, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_beaca855dcf4e26401edfb670c719f06->m_type_description == NULL);
    frame_beaca855dcf4e26401edfb670c719f06 = cache_frame_beaca855dcf4e26401edfb670c719f06;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_beaca855dcf4e26401edfb670c719f06);
    assert(Py_REFCNT(frame_beaca855dcf4e26401edfb670c719f06) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_1 = par_cls;
        CHECK_OBJECT(par_n);
        tmp_args_element_value_2 = par_n;
        CHECK_OBJECT(par_axis);
        tmp_args_element_value_3 = par_axis;
        frame_beaca855dcf4e26401edfb670c719f06->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_beaca855dcf4e26401edfb670c719f06->m_frame.f_lineno = 94;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[17]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_g1 == NULL);
        var_g1 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[7];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[19]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_n);
            tmp_tuple_element_1 = par_n;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[20]);
        frame_beaca855dcf4e26401edfb670c719f06->m_frame.f_lineno = 96;
        tmp_assign_source_2 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_thetas == NULL);
        var_thetas = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[19]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[21]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_n);
        tmp_args_element_value_5 = par_n;
        frame_beaca855dcf4e26401edfb670c719f06->m_frame.f_lineno = 97;
        tmp_list_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[22], tmp_args_element_value_5);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_7;
            PyList_SET_ITEM(tmp_args_element_value_4, 0, tmp_list_element_1);
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "ooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_thetas);
            tmp_args_element_value_6 = var_thetas;
            frame_beaca855dcf4e26401edfb670c719f06->m_frame.f_lineno = 97;
            tmp_list_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[23], tmp_args_element_value_6);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "ooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_4, 1, tmp_list_element_1);
            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_called_instance_4 == NULL)) {
                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "ooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_thetas);
            tmp_args_element_value_7 = var_thetas;
            frame_beaca855dcf4e26401edfb670c719f06->m_frame.f_lineno = 97;
            tmp_list_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[24], tmp_args_element_value_7);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "ooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_4, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_beaca855dcf4e26401edfb670c719f06->m_frame.f_lineno = 97;
        tmp_expression_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rv == NULL);
        var_rv = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[26]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rv);
        tmp_tuple_element_2 = var_rv;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_axis);
        tmp_tuple_element_2 = par_axis;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[27]);
        frame_beaca855dcf4e26401edfb670c719f06->m_frame.f_lineno = 98;
        tmp_assign_source_4 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_g2 == NULL);
        var_g2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_7 = par_cls;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[28]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_g1);
        tmp_tuple_element_3 = var_g1;
        tmp_args_element_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_9, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_g2);
        tmp_tuple_element_3 = var_g2;
        PyTuple_SET_ITEM0(tmp_args_element_value_9, 1, tmp_tuple_element_3);
        frame_beaca855dcf4e26401edfb670c719f06->m_frame.f_lineno = 99;
        tmp_args_element_value_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[10], tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_beaca855dcf4e26401edfb670c719f06->m_frame.f_lineno = 99;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_beaca855dcf4e26401edfb670c719f06, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_beaca855dcf4e26401edfb670c719f06->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_beaca855dcf4e26401edfb670c719f06, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_beaca855dcf4e26401edfb670c719f06,
        type_description_1,
        par_cls,
        par_n,
        par_axis,
        var_g1,
        var_thetas,
        var_rv,
        var_g2
    );


    // Release cached frame if used for exception.
    if (frame_beaca855dcf4e26401edfb670c719f06 == cache_frame_beaca855dcf4e26401edfb670c719f06) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_beaca855dcf4e26401edfb670c719f06);
        cache_frame_beaca855dcf4e26401edfb670c719f06 = NULL;
    }

    assertFrameObject(frame_beaca855dcf4e26401edfb670c719f06);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_g1);
    Py_DECREF(var_g1);
    var_g1 = NULL;
    CHECK_OBJECT(var_thetas);
    Py_DECREF(var_thetas);
    var_thetas = NULL;
    CHECK_OBJECT(var_rv);
    Py_DECREF(var_rv);
    var_rv = NULL;
    CHECK_OBJECT(var_g2);
    Py_DECREF(var_g2);
    var_g2 = NULL;
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

    Py_XDECREF(var_g1);
    var_g1 = NULL;
    Py_XDECREF(var_thetas);
    var_thetas = NULL;
    Py_XDECREF(var_rv);
    var_rv = NULL;
    Py_XDECREF(var_g2);
    var_g2 = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$spatial$transform$_rotation_groups$$$function__5_cyclic(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_n = python_pars[1];
    PyObject *par_axis = python_pars[2];
    PyObject *var_thetas = NULL;
    PyObject *var_rv = NULL;
    struct Nuitka_FrameObject *frame_b51d77a3212917f835dbb06c0e33f342;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b51d77a3212917f835dbb06c0e33f342 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b51d77a3212917f835dbb06c0e33f342)) {
        Py_XDECREF(cache_frame_b51d77a3212917f835dbb06c0e33f342);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b51d77a3212917f835dbb06c0e33f342 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b51d77a3212917f835dbb06c0e33f342 = MAKE_FUNCTION_FRAME(tstate, codeobj_b51d77a3212917f835dbb06c0e33f342, module_scipy$spatial$transform$_rotation_groups, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b51d77a3212917f835dbb06c0e33f342->m_type_description == NULL);
    frame_b51d77a3212917f835dbb06c0e33f342 = cache_frame_b51d77a3212917f835dbb06c0e33f342;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b51d77a3212917f835dbb06c0e33f342);
    assert(Py_REFCNT(frame_b51d77a3212917f835dbb06c0e33f342) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[7];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_mult_expr_left_1 = mod_consts[4];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[19]);
            if (tmp_mult_expr_right_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            Py_DECREF(tmp_mult_expr_right_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_n);
            tmp_tuple_element_1 = par_n;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[20]);
        frame_b51d77a3212917f835dbb06c0e33f342->m_frame.f_lineno = 103;
        tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_thetas == NULL);
        var_thetas = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[21]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_thetas);
        tmp_list_element_1 = var_thetas;
        tmp_args_element_value_1 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_3;
            PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(par_n);
            tmp_args_element_value_2 = par_n;
            frame_b51d77a3212917f835dbb06c0e33f342->m_frame.f_lineno = 104;
            tmp_list_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[22], tmp_args_element_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_1, 1, tmp_list_element_1);
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(par_n);
            tmp_args_element_value_3 = par_n;
            frame_b51d77a3212917f835dbb06c0e33f342->m_frame.f_lineno = 104;
            tmp_list_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[22], tmp_args_element_value_3);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_1, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_b51d77a3212917f835dbb06c0e33f342->m_frame.f_lineno = 104;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[25]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rv == NULL);
        var_rv = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_5 = par_cls;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[28]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[26]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rv);
        tmp_tuple_element_2 = var_rv;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_axis);
        tmp_tuple_element_2 = par_axis;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[27]);
        frame_b51d77a3212917f835dbb06c0e33f342->m_frame.f_lineno = 105;
        tmp_args_element_value_4 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_b51d77a3212917f835dbb06c0e33f342->m_frame.f_lineno = 105;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b51d77a3212917f835dbb06c0e33f342, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b51d77a3212917f835dbb06c0e33f342->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b51d77a3212917f835dbb06c0e33f342, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b51d77a3212917f835dbb06c0e33f342,
        type_description_1,
        par_cls,
        par_n,
        par_axis,
        var_thetas,
        var_rv
    );


    // Release cached frame if used for exception.
    if (frame_b51d77a3212917f835dbb06c0e33f342 == cache_frame_b51d77a3212917f835dbb06c0e33f342) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b51d77a3212917f835dbb06c0e33f342);
        cache_frame_b51d77a3212917f835dbb06c0e33f342 = NULL;
    }

    assertFrameObject(frame_b51d77a3212917f835dbb06c0e33f342);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_thetas);
    Py_DECREF(var_thetas);
    var_thetas = NULL;
    CHECK_OBJECT(var_rv);
    Py_DECREF(var_rv);
    var_rv = NULL;
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

    Py_XDECREF(var_thetas);
    var_thetas = NULL;
    Py_XDECREF(var_rv);
    var_rv = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$spatial$transform$_rotation_groups$$$function__6_create_group(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_group = python_pars[1];
    PyObject *par_axis = python_pars[2];
    PyObject *var_permitted_axes = NULL;
    PyObject *var_symbol = NULL;
    PyObject *var_order = NULL;
    struct Nuitka_FrameObject *frame_da87855f31098ecf7795b05e9e736c8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_da87855f31098ecf7795b05e9e736c8f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_da87855f31098ecf7795b05e9e736c8f)) {
        Py_XDECREF(cache_frame_da87855f31098ecf7795b05e9e736c8f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da87855f31098ecf7795b05e9e736c8f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da87855f31098ecf7795b05e9e736c8f = MAKE_FUNCTION_FRAME(tstate, codeobj_da87855f31098ecf7795b05e9e736c8f, module_scipy$spatial$transform$_rotation_groups, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_da87855f31098ecf7795b05e9e736c8f->m_type_description == NULL);
    frame_da87855f31098ecf7795b05e9e736c8f = cache_frame_da87855f31098ecf7795b05e9e736c8f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_da87855f31098ecf7795b05e9e736c8f);
    assert(Py_REFCNT(frame_da87855f31098ecf7795b05e9e736c8f) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_group);
        tmp_isinstance_inst_1 = par_group;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[29];
        frame_da87855f31098ecf7795b05e9e736c8f->m_frame.f_lineno = 110;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 110;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST6(mod_consts[30]);
        assert(var_permitted_axes == NULL);
        var_permitted_axes = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_axis);
        tmp_cmp_expr_left_1 = par_axis;
        CHECK_OBJECT(var_permitted_axes);
        tmp_cmp_expr_right_1 = var_permitted_axes;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_add_expr_left_1 = mod_consts[31];
        tmp_str_arg_value_1 = mod_consts[32];
        CHECK_OBJECT(var_permitted_axes);
        tmp_iterable_value_1 = var_permitted_axes;
        tmp_add_expr_right_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_make_exception_arg_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        assert(!(tmp_make_exception_arg_2 == NULL));
        frame_da87855f31098ecf7795b05e9e736c8f->m_frame.f_lineno = 114;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 114;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_group);
        tmp_cmp_expr_left_2 = par_group;
        tmp_cmp_expr_right_2 = MAKE_LIST3(mod_consts[33],mod_consts[34],mod_consts[25]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
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
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(par_group);
        tmp_assign_source_2 = par_group;
        assert(var_symbol == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_symbol = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[35];
        assert(var_order == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_order = tmp_assign_source_3;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_group);
        tmp_expression_value_1 = par_group;
        tmp_subscript_value_1 = mod_consts[36];
        tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = MAKE_LIST2(mod_consts[37],mod_consts[38]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_group);
        tmp_expression_value_3 = par_group;
        tmp_subscript_value_2 = mod_consts[39];
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[40]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_da87855f31098ecf7795b05e9e736c8f->m_frame.f_lineno = 119;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_group);
        tmp_expression_value_4 = par_group;
        tmp_subscript_value_3 = mod_consts[36];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_symbol == NULL);
        var_symbol = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_group);
        tmp_expression_value_5 = par_group;
        tmp_subscript_value_4 = mod_consts[39];
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_4);
        if (tmp_int_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_order == NULL);
        var_order = tmp_assign_source_5;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[41];
        frame_da87855f31098ecf7795b05e9e736c8f->m_frame.f_lineno = 123;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 123;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_end_4:;
    branch_end_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_order);
        tmp_cmp_expr_left_4 = var_order;
        tmp_cmp_expr_right_4 = mod_consts[35];
        tmp_condition_result_5 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        tmp_make_exception_arg_4 = mod_consts[42];
        frame_da87855f31098ecf7795b05e9e736c8f->m_frame.f_lineno = 126;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 126;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_str_arg_value_2;
        PyObject *tmp_sub_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        tmp_str_arg_value_2 = mod_consts[43];
        CHECK_OBJECT(par_axis);
        tmp_expression_value_6 = par_axis;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[44]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_da87855f31098ecf7795b05e9e736c8f->m_frame.f_lineno = 128;
        tmp_sub_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_sub_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = UNICODE_INDEX2(tstate, tmp_str_arg_value_2, tmp_sub_value_1);
        Py_DECREF(tmp_sub_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_axis;
            assert(old != NULL);
            par_axis = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_symbol);
        tmp_cmp_expr_left_5 = var_symbol;
        tmp_cmp_expr_right_5 = mod_consts[33];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_1 = par_cls;
        frame_da87855f31098ecf7795b05e9e736c8f->m_frame.f_lineno = 130;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_symbol);
        tmp_cmp_expr_left_6 = var_symbol;
        tmp_cmp_expr_right_6 = mod_consts[34];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_2 = par_cls;
        frame_da87855f31098ecf7795b05e9e736c8f->m_frame.f_lineno = 132;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_symbol);
        tmp_cmp_expr_left_7 = var_symbol;
        tmp_cmp_expr_right_7 = mod_consts[25];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_3 = par_cls;
        frame_da87855f31098ecf7795b05e9e736c8f->m_frame.f_lineno = 134;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_symbol);
        tmp_cmp_expr_left_8 = var_symbol;
        tmp_cmp_expr_right_8 = mod_consts[38];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_kw_call_arg_value_0_1 = par_cls;
        CHECK_OBJECT(var_order);
        tmp_kw_call_arg_value_1_1 = var_order;
        CHECK_OBJECT(par_axis);
        tmp_kw_call_dict_value_0_1 = par_axis;
        frame_da87855f31098ecf7795b05e9e736c8f->m_frame.f_lineno = 136;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts[48]);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(var_symbol);
        tmp_cmp_expr_left_9 = var_symbol;
        tmp_cmp_expr_right_9 = mod_consts[37];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_kw_call_arg_value_0_2 = par_cls;
        CHECK_OBJECT(var_order);
        tmp_kw_call_arg_value_1_2 = var_order;
        CHECK_OBJECT(par_axis);
        tmp_kw_call_dict_value_0_2 = par_axis;
        frame_da87855f31098ecf7795b05e9e736c8f->m_frame.f_lineno = 138;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts[48]);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_raise_type_5;
        tmp_raise_type_5 = PyExc_AssertionError;
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_lineno = 140;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_end_10:;
    branch_end_9:;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da87855f31098ecf7795b05e9e736c8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da87855f31098ecf7795b05e9e736c8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da87855f31098ecf7795b05e9e736c8f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da87855f31098ecf7795b05e9e736c8f,
        type_description_1,
        par_cls,
        par_group,
        par_axis,
        var_permitted_axes,
        var_symbol,
        var_order
    );


    // Release cached frame if used for exception.
    if (frame_da87855f31098ecf7795b05e9e736c8f == cache_frame_da87855f31098ecf7795b05e9e736c8f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_da87855f31098ecf7795b05e9e736c8f);
        cache_frame_da87855f31098ecf7795b05e9e736c8f = NULL;
    }

    assertFrameObject(frame_da87855f31098ecf7795b05e9e736c8f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_axis);
    par_axis = NULL;
    CHECK_OBJECT(var_permitted_axes);
    Py_DECREF(var_permitted_axes);
    var_permitted_axes = NULL;
    CHECK_OBJECT(var_symbol);
    Py_DECREF(var_symbol);
    var_symbol = NULL;
    Py_XDECREF(var_order);
    var_order = NULL;
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

    Py_XDECREF(par_axis);
    par_axis = NULL;
    Py_XDECREF(var_permitted_axes);
    var_permitted_axes = NULL;
    Py_XDECREF(var_symbol);
    var_symbol = NULL;
    Py_XDECREF(var_order);
    var_order = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_group);
    Py_DECREF(par_group);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_group);
    Py_DECREF(par_group);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__1_icosahedral() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$spatial$transform$_rotation_groups$$$function__1_icosahedral,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6a3328d9b27c50642478e992195ffca2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$spatial$transform$_rotation_groups,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__2_octahedral() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$spatial$transform$_rotation_groups$$$function__2_octahedral,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b89bbfeb69656476d1219a1739e954b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$spatial$transform$_rotation_groups,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__3_tetrahedral() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$spatial$transform$_rotation_groups$$$function__3_tetrahedral,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8b98827a9777161b6b1a4c697f1045f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$spatial$transform$_rotation_groups,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__4_dicyclic(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$spatial$transform$_rotation_groups$$$function__4_dicyclic,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_beaca855dcf4e26401edfb670c719f06,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$spatial$transform$_rotation_groups,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__5_cyclic(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$spatial$transform$_rotation_groups$$$function__5_cyclic,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b51d77a3212917f835dbb06c0e33f342,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$spatial$transform$_rotation_groups,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__6_create_group(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$spatial$transform$_rotation_groups$$$function__6_create_group,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_da87855f31098ecf7795b05e9e736c8f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$spatial$transform$_rotation_groups,
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

function_impl_code functable_scipy$spatial$transform$_rotation_groups[] = {
    impl_scipy$spatial$transform$_rotation_groups$$$function__1_icosahedral,
    impl_scipy$spatial$transform$_rotation_groups$$$function__2_octahedral,
    impl_scipy$spatial$transform$_rotation_groups$$$function__3_tetrahedral,
    impl_scipy$spatial$transform$_rotation_groups$$$function__4_dicyclic,
    impl_scipy$spatial$transform$_rotation_groups$$$function__5_cyclic,
    impl_scipy$spatial$transform$_rotation_groups$$$function__6_create_group,
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

    function_impl_code *current = functable_scipy$spatial$transform$_rotation_groups;
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

    if (offset > sizeof(functable_scipy$spatial$transform$_rotation_groups) || offset < 0) {
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
        functable_scipy$spatial$transform$_rotation_groups[offset],
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
        module_scipy$spatial$transform$_rotation_groups,
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
PyObject *modulecode_scipy$spatial$transform$_rotation_groups(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy.spatial.transform._rotation_groups");

    // Store the module for future use.
    module_scipy$spatial$transform$_rotation_groups = module;

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
        PRINT_STRING("scipy.spatial.transform._rotation_groups: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("scipy.spatial.transform._rotation_groups: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$spatial$transform$_rotation_groups\n");

    moduledict_scipy$spatial$transform$_rotation_groups = MODULE_DICT(module_scipy$spatial$transform$_rotation_groups);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$spatial$transform$_rotation_groups,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$spatial$transform$_rotation_groups,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[68]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$spatial$transform$_rotation_groups,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$spatial$transform$_rotation_groups,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$spatial$transform$_rotation_groups,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$spatial$transform$_rotation_groups);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_scipy$spatial$transform$_rotation_groups);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_e5d0045d578a4d0551b986197cf01250;
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
        UPDATE_STRING_DICT0(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_2);
    }
    frame_e5d0045d578a4d0551b986197cf01250 = MAKE_MODULE_FRAME(codeobj_e5d0045d578a4d0551b986197cf01250, module_scipy$spatial$transform$_rotation_groups);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e5d0045d578a4d0551b986197cf01250);
    assert(Py_REFCNT(frame_e5d0045d578a4d0551b986197cf01250) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[52], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[53], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[55];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$spatial$transform$_rotation_groups;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[7];
        frame_e5d0045d578a4d0551b986197cf01250->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[56];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$spatial$transform$_rotation_groups;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[57];
        tmp_level_value_2 = mod_consts[7];
        frame_e5d0045d578a4d0551b986197cf01250->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$spatial$transform$_rotation_groups,
                mod_consts[58],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_5);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e5d0045d578a4d0551b986197cf01250, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e5d0045d578a4d0551b986197cf01250->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e5d0045d578a4d0551b986197cf01250, exception_lineno);
    }



    assertFrameObject(frame_e5d0045d578a4d0551b986197cf01250);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__1_icosahedral();

        UPDATE_STRING_DICT1(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__2_octahedral();

        UPDATE_STRING_DICT1(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__3_tetrahedral();

        UPDATE_STRING_DICT1(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[12];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_9 = MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__4_dicyclic(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[12];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_10 = MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__5_cyclic(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[59];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_11 = MAKE_FUNCTION_scipy$spatial$transform$_rotation_groups$$$function__6_create_group(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_11);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy.spatial.transform._rotation_groups", false);

    Py_INCREF(module_scipy$spatial$transform$_rotation_groups);
    return module_scipy$spatial$transform$_rotation_groups;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$spatial$transform$_rotation_groups, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$spatial$transform$_rotation_groups", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
