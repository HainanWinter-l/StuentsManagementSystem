/* Generated code for Python module 'Design.Ui_HomePage'
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

/* The "module_Design$Ui_HomePage" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Design$Ui_HomePage;
PyDictObject *moduledict_Design$Ui_HomePage;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[252];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[252];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("Design.Ui_HomePage"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 252; i++) {
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
void checkModuleConstants_Design$Ui_HomePage(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 252; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_fe67db36a9b349755a6fa20ec2d7c820;
static PyCodeObject *codeobj_6f038692133177fa534b36478d8d50bb;
static PyCodeObject *codeobj_ced282b4e9aa3c5a96099fae69278649;
static PyCodeObject *codeobj_242d792fe32cc5d3ad5e508585620491;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[246]); CHECK_OBJECT(module_filename_obj);
    codeobj_fe67db36a9b349755a6fa20ec2d7c820 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[247], mod_consts[247], NULL, NULL, 0, 0, 0);
    codeobj_6f038692133177fa534b36478d8d50bb = MAKE_CODE_OBJECT(module_filename_obj, 14, 0, mod_consts[232], mod_consts[232], mod_consts[248], NULL, 0, 0, 0);
    codeobj_ced282b4e9aa3c5a96099fae69278649 = MAKE_CODE_OBJECT(module_filename_obj, 353, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[195], mod_consts[195], mod_consts[249], NULL, 2, 0, 0);
    codeobj_242d792fe32cc5d3ad5e508585620491 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[240], mod_consts[240], mod_consts[250], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_Design$Ui_HomePage$$$function__1_setupUi();


static PyObject *MAKE_FUNCTION_Design$Ui_HomePage$$$function__2_retranslateUi();


// The module function definitions.
static PyObject *impl_Design$Ui_HomePage$$$function__1_setupUi(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_HomePage = python_pars[1];
    PyObject *var_spacerItem = NULL;
    PyObject *var_spacerItem1 = NULL;
    PyObject *var_font = NULL;
    PyObject *var_spacerItem2 = NULL;
    PyObject *var_spacerItem3 = NULL;
    PyObject *var_spacerItem4 = NULL;
    PyObject *var_spacerItem5 = NULL;
    PyObject *var_spacerItem6 = NULL;
    PyObject *var_spacerItem7 = NULL;
    PyObject *var_spacerItem8 = NULL;
    PyObject *var_spacerItem9 = NULL;
    PyObject *var_spacerItem10 = NULL;
    PyObject *var_spacerItem11 = NULL;
    PyObject *var_spacerItem12 = NULL;
    PyObject *var_spacerItem13 = NULL;
    PyObject *var_spacerItem14 = NULL;
    PyObject *var_spacerItem15 = NULL;
    PyObject *var_sizePolicy = NULL;
    PyObject *var_icon = NULL;
    PyObject *var_spacerItem16 = NULL;
    PyObject *var_spacerItem17 = NULL;
    PyObject *var_spacerItem18 = NULL;
    PyObject *var_spacerItem19 = NULL;
    PyObject *var_spacerItem20 = NULL;
    PyObject *var_spacerItem21 = NULL;
    struct Nuitka_FrameObject *frame_242d792fe32cc5d3ad5e508585620491;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_242d792fe32cc5d3ad5e508585620491 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_242d792fe32cc5d3ad5e508585620491)) {
        Py_XDECREF(cache_frame_242d792fe32cc5d3ad5e508585620491);

#if _DEBUG_REFCOUNTS
        if (cache_frame_242d792fe32cc5d3ad5e508585620491 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_242d792fe32cc5d3ad5e508585620491 = MAKE_FUNCTION_FRAME(tstate, codeobj_242d792fe32cc5d3ad5e508585620491, module_Design$Ui_HomePage, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_242d792fe32cc5d3ad5e508585620491->m_type_description == NULL);
    frame_242d792fe32cc5d3ad5e508585620491 = cache_frame_242d792fe32cc5d3ad5e508585620491;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_242d792fe32cc5d3ad5e508585620491);
    assert(Py_REFCNT(frame_242d792fe32cc5d3ad5e508585620491) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_HomePage);
        tmp_called_instance_1 = par_HomePage;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 16;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[1], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_HomePage);
        tmp_called_instance_2 = par_HomePage;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 17;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_2,
            mod_consts[2],
            &PyTuple_GET_ITEM(mod_consts[3], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_HomePage);
        tmp_args_element_value_1 = par_HomePage;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 18;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[5], tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 19;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[9];
        tmp_args_element_value_3 = mod_consts[10];
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 20;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[11]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 20;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[12]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 20;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 20;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[11]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 20;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[13]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 20;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 20;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem == NULL);
        var_spacerItem = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[6]);
        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem);
        tmp_args_element_value_6 = var_spacerItem;
        tmp_args_element_value_7 = mod_consts[15];
        tmp_args_element_value_8 = mod_consts[15];
        tmp_args_element_value_9 = mod_consts[16];
        tmp_args_element_value_10 = mod_consts[17];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_5,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[8]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[10];
        tmp_args_element_value_12 = mod_consts[10];
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 22;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[11]);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 22;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[13]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 22;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 22;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[11]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 22;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[13]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 22;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem1 == NULL);
        var_spacerItem1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[6]);
        if (tmp_called_instance_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem1);
        tmp_args_element_value_15 = var_spacerItem1;
        tmp_args_element_value_16 = mod_consts[16];
        tmp_args_element_value_17 = mod_consts[15];
        tmp_args_element_value_18 = mod_consts[16];
        tmp_args_element_value_19 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 23;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_6,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_6);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_HomePage);
        tmp_args_element_value_20 = par_HomePage;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 24;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_20);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[19], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_7;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 25;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[21]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_font == NULL);
        var_font = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(var_font);
        tmp_called_instance_8 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 26;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_8,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[23], 0)
        );

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(var_font);
        tmp_called_instance_9 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 27;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_9,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(var_font);
        tmp_called_instance_10 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 28;
        tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_10,
            mod_consts[26],
            PyTuple_GET_ITEM(mod_consts[27], 0)
        );

        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(var_font);
        tmp_called_instance_11 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 29;
        tmp_call_result_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_11,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[29], 0)
        );

        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_21;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_called_instance_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[19]);
        if (tmp_called_instance_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_font);
        tmp_args_element_value_21 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 30;
        tmp_call_result_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_12, mod_consts[30], tmp_args_element_value_21);
        Py_DECREF(tmp_called_instance_12);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[19]);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[31]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 31;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[33]);
        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 31;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[34]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 31;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 31;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_19 = par_self;
        tmp_called_instance_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[19]);
        if (tmp_called_instance_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 32;
        tmp_call_result_12 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_13,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[35], 0)
        );

        Py_DECREF(tmp_called_instance_13);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        CHECK_OBJECT(par_self);
        tmp_expression_value_21 = par_self;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[6]);
        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[36]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_22 = par_self;
        tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[19]);
        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = mod_consts[16];
        tmp_args_element_value_25 = mod_consts[16];
        tmp_args_element_value_26 = mod_consts[16];
        tmp_args_element_value_27 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[8]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = mod_consts[37];
        tmp_args_element_value_29 = mod_consts[10];
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[11]);
        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[12]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_30);

            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[11]);
        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_30);

            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[13]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_args_element_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_30);

            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_30);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem2 == NULL);
        var_spacerItem2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_14;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        CHECK_OBJECT(par_self);
        tmp_expression_value_28 = par_self;
        tmp_called_instance_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[6]);
        if (tmp_called_instance_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem2);
        tmp_args_element_value_32 = var_spacerItem2;
        tmp_args_element_value_33 = mod_consts[16];
        tmp_args_element_value_34 = mod_consts[17];
        tmp_args_element_value_35 = mod_consts[16];
        tmp_args_element_value_36 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36};
            tmp_call_result_14 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_14,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_14);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_HomePage);
        tmp_args_element_value_37 = par_HomePage;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 36;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_37);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[39], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_15;
        CHECK_OBJECT(par_self);
        tmp_expression_value_29 = par_self;
        tmp_called_instance_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[39]);
        if (tmp_called_instance_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 37;
        tmp_call_result_15 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_15,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        Py_DECREF(tmp_called_instance_15);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        CHECK_OBJECT(par_self);
        tmp_expression_value_31 = par_self;
        tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[6]);
        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[36]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_32 = par_self;
        tmp_args_element_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[39]);
        if (tmp_args_element_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = mod_consts[17];
        tmp_args_element_value_40 = mod_consts[15];
        tmp_args_element_value_41 = mod_consts[16];
        tmp_args_element_value_42 = mod_consts[41];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_assattr_target_4;
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 39;
        tmp_assattr_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_16, mod_consts[42]);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[43], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_17;
        CHECK_OBJECT(par_self);
        tmp_expression_value_33 = par_self;
        tmp_called_instance_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[43]);
        if (tmp_called_instance_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 40;
        tmp_call_result_17 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_17,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        Py_DECREF(tmp_called_instance_17);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_assattr_target_5;
        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_18 == NULL)) {
            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 41;
        tmp_assattr_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_18, mod_consts[5]);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[45], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_19;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_call_result_18;
        CHECK_OBJECT(par_self);
        tmp_expression_value_34 = par_self;
        tmp_called_instance_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[45]);
        if (tmp_called_instance_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 42;
        tmp_call_result_18 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_19,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[46], 0)
        );

        Py_DECREF(tmp_called_instance_19);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_assattr_target_6;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_HomePage);
        tmp_args_element_value_43 = par_HomePage;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 43;
        tmp_assattr_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_43);
        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[48], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_20;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_19;
        CHECK_OBJECT(par_self);
        tmp_expression_value_35 = par_self;
        tmp_called_instance_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[48]);
        if (tmp_called_instance_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 44;
        tmp_call_result_19 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_20,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[49], 0)
        );

        Py_DECREF(tmp_called_instance_20);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_assattr_target_7;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[5]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_37 = par_self;
        tmp_args_element_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[48]);
        if (tmp_args_element_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 45;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 45;
        tmp_assattr_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_44);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[50], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_21;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_call_result_20;
        CHECK_OBJECT(par_self);
        tmp_expression_value_38 = par_self;
        tmp_called_instance_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[50]);
        if (tmp_called_instance_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 46;
        tmp_call_result_20 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_21,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[51], 0)
        );

        Py_DECREF(tmp_called_instance_21);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_assattr_target_8;
        tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_22 == NULL)) {
            tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 47;
        tmp_assattr_value_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_22, mod_consts[52]);
        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[53], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_23;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_21;
        CHECK_OBJECT(par_self);
        tmp_expression_value_39 = par_self;
        tmp_called_instance_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[53]);
        if (tmp_called_instance_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 48;
        tmp_call_result_21 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_23,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        Py_DECREF(tmp_called_instance_23);
        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_assattr_target_9;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_40 = par_self;
        tmp_args_element_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[48]);
        if (tmp_args_element_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 49;
        tmp_assattr_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_45);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[56], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_24;
        tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_24 == NULL)) {
            tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_instance_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 50;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_24, mod_consts[21]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_25;
        PyObject *tmp_call_result_22;
        CHECK_OBJECT(var_font);
        tmp_called_instance_25 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 51;
        tmp_call_result_22 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_25,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_instance_26;
        PyObject *tmp_call_result_23;
        CHECK_OBJECT(var_font);
        tmp_called_instance_26 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 52;
        tmp_call_result_23 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_26,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[58], 0)
        );

        if (tmp_call_result_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_instance_27;
        PyObject *tmp_call_result_24;
        CHECK_OBJECT(var_font);
        tmp_called_instance_27 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 53;
        tmp_call_result_24 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_27,
            mod_consts[26],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_call_result_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_instance_28;
        PyObject *tmp_call_result_25;
        CHECK_OBJECT(var_font);
        tmp_called_instance_28 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 54;
        tmp_call_result_25 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_28,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_call_result_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_instance_29;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_element_value_46;
        CHECK_OBJECT(par_self);
        tmp_expression_value_41 = par_self;
        tmp_called_instance_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[56]);
        if (tmp_called_instance_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_font);
        tmp_args_element_value_46 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 55;
        tmp_call_result_26 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_29, mod_consts[30], tmp_args_element_value_46);
        Py_DECREF(tmp_called_instance_29);
        if (tmp_call_result_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_instance_30;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_call_result_27;
        CHECK_OBJECT(par_self);
        tmp_expression_value_42 = par_self;
        tmp_called_instance_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[56]);
        if (tmp_called_instance_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 56;
        tmp_call_result_27 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_30,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[61], 0)
        );

        Py_DECREF(tmp_called_instance_30);
        if (tmp_call_result_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_expression_value_45;
        CHECK_OBJECT(par_self);
        tmp_expression_value_44 = par_self;
        tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[53]);
        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[36]);
        Py_DECREF(tmp_expression_value_43);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_45 = par_self;
        tmp_args_element_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[56]);
        if (tmp_args_element_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 57;
        tmp_call_result_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_47);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_call_result_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_assattr_target_10;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_46 = par_self;
        tmp_args_element_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[48]);
        if (tmp_args_element_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 58;
        tmp_assattr_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_48);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_assattr_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[62], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_31;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_call_result_29;
        CHECK_OBJECT(par_self);
        tmp_expression_value_47 = par_self;
        tmp_called_instance_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[62]);
        if (tmp_called_instance_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 59;
        tmp_call_result_29 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_31,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[63], 0)
        );

        Py_DECREF(tmp_called_instance_31);
        if (tmp_call_result_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_call_result_30;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(par_self);
        tmp_expression_value_49 = par_self;
        tmp_expression_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[53]);
        if (tmp_expression_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[36]);
        Py_DECREF(tmp_expression_value_48);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_50 = par_self;
        tmp_args_element_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[62]);
        if (tmp_args_element_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 60;
        tmp_call_result_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_49);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_call_result_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_call_result_31;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_args_element_value_54;
        CHECK_OBJECT(par_self);
        tmp_expression_value_52 = par_self;
        tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[50]);
        if (tmp_expression_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[64]);
        Py_DECREF(tmp_expression_value_51);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_53 = par_self;
        tmp_args_element_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[53]);
        if (tmp_args_element_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_51 = mod_consts[15];
        tmp_args_element_value_52 = mod_consts[15];
        tmp_args_element_value_53 = mod_consts[16];
        tmp_args_element_value_54 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54};
            tmp_call_result_31 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_call_result_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_called_instance_32;
        PyObject *tmp_assattr_target_11;
        tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_32 == NULL)) {
            tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 62;
        tmp_assattr_value_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_32, mod_consts[42]);
        if (tmp_assattr_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[65], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_33;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_call_result_32;
        CHECK_OBJECT(par_self);
        tmp_expression_value_54 = par_self;
        tmp_called_instance_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[65]);
        if (tmp_called_instance_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 63;
        tmp_call_result_32 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_33,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[66], 0)
        );

        Py_DECREF(tmp_called_instance_33);
        if (tmp_call_result_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_assattr_target_12;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_55 = par_self;
        tmp_args_element_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[48]);
        if (tmp_args_element_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 64;
        tmp_assattr_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_55);
        Py_DECREF(tmp_args_element_value_55);
        if (tmp_assattr_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[68], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_34;
        tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_34 == NULL)) {
            tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_instance_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 65;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_34, mod_consts[21]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_35;
        PyObject *tmp_call_result_33;
        CHECK_OBJECT(var_font);
        tmp_called_instance_35 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 66;
        tmp_call_result_33 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_35,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_instance_36;
        PyObject *tmp_call_result_34;
        CHECK_OBJECT(var_font);
        tmp_called_instance_36 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 67;
        tmp_call_result_34 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_36,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        if (tmp_call_result_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_instance_37;
        PyObject *tmp_call_result_35;
        CHECK_OBJECT(var_font);
        tmp_called_instance_37 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 68;
        tmp_call_result_35 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_37,
            mod_consts[26],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_call_result_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_instance_38;
        PyObject *tmp_call_result_36;
        CHECK_OBJECT(var_font);
        tmp_called_instance_38 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 69;
        tmp_call_result_36 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_38,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_call_result_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_called_instance_39;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_call_result_37;
        PyObject *tmp_args_element_value_56;
        CHECK_OBJECT(par_self);
        tmp_expression_value_56 = par_self;
        tmp_called_instance_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[68]);
        if (tmp_called_instance_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_font);
        tmp_args_element_value_56 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 70;
        tmp_call_result_37 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_39, mod_consts[30], tmp_args_element_value_56);
        Py_DECREF(tmp_called_instance_39);
        if (tmp_call_result_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_call_result_38;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_expression_value_60;
        CHECK_OBJECT(par_self);
        tmp_expression_value_58 = par_self;
        tmp_expression_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[68]);
        if (tmp_expression_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[70]);
        Py_DECREF(tmp_expression_value_57);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[33]);
        if (tmp_expression_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[71]);
        Py_DECREF(tmp_expression_value_59);
        if (tmp_args_element_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 71;
        tmp_call_result_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_57);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_call_result_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_call_result_39;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_expression_value_64;
        CHECK_OBJECT(par_self);
        tmp_expression_value_62 = par_self;
        tmp_expression_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[68]);
        if (tmp_expression_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[31]);
        Py_DECREF(tmp_expression_value_61);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[33]);
        if (tmp_expression_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[34]);
        Py_DECREF(tmp_expression_value_63);
        if (tmp_args_element_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 72;
        tmp_call_result_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_58);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_58);
        if (tmp_call_result_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_instance_40;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_call_result_40;
        CHECK_OBJECT(par_self);
        tmp_expression_value_65 = par_self;
        tmp_called_instance_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[68]);
        if (tmp_called_instance_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 73;
        tmp_call_result_40 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_40,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[72], 0)
        );

        Py_DECREF(tmp_called_instance_40);
        if (tmp_call_result_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_call_result_41;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_expression_value_68;
        CHECK_OBJECT(par_self);
        tmp_expression_value_67 = par_self;
        tmp_expression_value_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[65]);
        if (tmp_expression_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[36]);
        Py_DECREF(tmp_expression_value_66);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_68 = par_self;
        tmp_args_element_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[68]);
        if (tmp_args_element_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 74;
        tmp_call_result_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_59);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_59);
        if (tmp_call_result_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_assattr_target_13;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_69 = par_self;
        tmp_args_element_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[48]);
        if (tmp_args_element_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 75;
        tmp_assattr_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_60);
        Py_DECREF(tmp_args_element_value_60);
        if (tmp_assattr_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[73], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_call_result_42;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_expression_value_73;
        CHECK_OBJECT(par_self);
        tmp_expression_value_71 = par_self;
        tmp_expression_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[73]);
        if (tmp_expression_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[31]);
        Py_DECREF(tmp_expression_value_70);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[33]);
        if (tmp_expression_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[34]);
        Py_DECREF(tmp_expression_value_72);
        if (tmp_args_element_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 76;
        tmp_call_result_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_61);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_61);
        if (tmp_call_result_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_instance_41;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_call_result_43;
        CHECK_OBJECT(par_self);
        tmp_expression_value_74 = par_self;
        tmp_called_instance_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[73]);
        if (tmp_called_instance_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 77;
        tmp_call_result_43 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_41,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[74], 0)
        );

        Py_DECREF(tmp_called_instance_41);
        if (tmp_call_result_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_call_result_44;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_expression_value_77;
        CHECK_OBJECT(par_self);
        tmp_expression_value_76 = par_self;
        tmp_expression_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[65]);
        if (tmp_expression_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[36]);
        Py_DECREF(tmp_expression_value_75);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_77 = par_self;
        tmp_args_element_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[73]);
        if (tmp_args_element_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 78;
        tmp_call_result_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_62);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_call_result_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_call_result_45;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_args_element_value_67;
        CHECK_OBJECT(par_self);
        tmp_expression_value_79 = par_self;
        tmp_expression_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[50]);
        if (tmp_expression_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[64]);
        Py_DECREF(tmp_expression_value_78);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_80 = par_self;
        tmp_args_element_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[65]);
        if (tmp_args_element_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_64 = mod_consts[17];
        tmp_args_element_value_65 = mod_consts[15];
        tmp_args_element_value_66 = mod_consts[16];
        tmp_args_element_value_67 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = {tmp_args_element_value_63, tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67};
            tmp_call_result_45 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_63);
        if (tmp_call_result_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_expression_value_85;
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[8]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_68 = mod_consts[10];
        tmp_args_element_value_69 = mod_consts[75];
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[11]);
        if (tmp_expression_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[13]);
        Py_DECREF(tmp_expression_value_82);
        if (tmp_args_element_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_70);

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[11]);
        if (tmp_expression_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_70);

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[12]);
        Py_DECREF(tmp_expression_value_84);
        if (tmp_args_element_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_70);

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = {tmp_args_element_value_68, tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_24, call_args);
        }

        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_70);
        Py_DECREF(tmp_args_element_value_71);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem3 == NULL);
        var_spacerItem3 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_instance_42;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_call_result_46;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_args_element_value_76;
        CHECK_OBJECT(par_self);
        tmp_expression_value_86 = par_self;
        tmp_called_instance_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[50]);
        if (tmp_called_instance_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem3);
        tmp_args_element_value_72 = var_spacerItem3;
        tmp_args_element_value_73 = mod_consts[16];
        tmp_args_element_value_74 = mod_consts[15];
        tmp_args_element_value_75 = mod_consts[16];
        tmp_args_element_value_76 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_value_72, tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76};
            tmp_call_result_46 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_42,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_42);
        if (tmp_call_result_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_expression_value_91;
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[8]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_77 = mod_consts[10];
        tmp_args_element_value_78 = mod_consts[75];
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[11]);
        if (tmp_expression_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[13]);
        Py_DECREF(tmp_expression_value_88);
        if (tmp_args_element_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_79);

            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[11]);
        if (tmp_expression_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_79);

            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[12]);
        Py_DECREF(tmp_expression_value_90);
        if (tmp_args_element_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_79);

            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_args_element_value_77, tmp_args_element_value_78, tmp_args_element_value_79, tmp_args_element_value_80};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_79);
        Py_DECREF(tmp_args_element_value_80);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem4 == NULL);
        var_spacerItem4 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_instance_43;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_call_result_47;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_args_element_value_85;
        CHECK_OBJECT(par_self);
        tmp_expression_value_92 = par_self;
        tmp_called_instance_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[50]);
        if (tmp_called_instance_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem4);
        tmp_args_element_value_81 = var_spacerItem4;
        tmp_args_element_value_82 = mod_consts[41];
        tmp_args_element_value_83 = mod_consts[15];
        tmp_args_element_value_84 = mod_consts[16];
        tmp_args_element_value_85 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_value_81, tmp_args_element_value_82, tmp_args_element_value_83, tmp_args_element_value_84, tmp_args_element_value_85};
            tmp_call_result_47 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_43,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_43);
        if (tmp_call_result_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_call_result_48;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_args_element_value_90;
        CHECK_OBJECT(par_self);
        tmp_expression_value_94 = par_self;
        tmp_expression_value_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[45]);
        if (tmp_expression_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[36]);
        Py_DECREF(tmp_expression_value_93);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_95 = par_self;
        tmp_args_element_value_86 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[48]);
        if (tmp_args_element_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_87 = mod_consts[15];
        tmp_args_element_value_88 = mod_consts[16];
        tmp_args_element_value_89 = mod_consts[16];
        tmp_args_element_value_90 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = {tmp_args_element_value_86, tmp_args_element_value_87, tmp_args_element_value_88, tmp_args_element_value_89, tmp_args_element_value_90};
            tmp_call_result_48 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_86);
        if (tmp_call_result_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_assattr_target_14;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_HomePage);
        tmp_args_element_value_91 = par_HomePage;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 85;
        tmp_assattr_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_91);
        if (tmp_assattr_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[47], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_44;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_call_result_49;
        CHECK_OBJECT(par_self);
        tmp_expression_value_96 = par_self;
        tmp_called_instance_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[47]);
        if (tmp_called_instance_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 86;
        tmp_call_result_49 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_44,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[76], 0)
        );

        Py_DECREF(tmp_called_instance_44);
        if (tmp_call_result_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_assattr_target_15;
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[5]);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_98 = par_self;
        tmp_args_element_value_92 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[47]);
        if (tmp_args_element_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 87;
        tmp_assattr_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_92);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_92);
        if (tmp_assattr_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[77], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_45;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_call_result_50;
        CHECK_OBJECT(par_self);
        tmp_expression_value_99 = par_self;
        tmp_called_instance_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[77]);
        if (tmp_called_instance_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 88;
        tmp_call_result_50 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_45,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[78], 0)
        );

        Py_DECREF(tmp_called_instance_45);
        if (tmp_call_result_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_called_instance_46;
        PyObject *tmp_assattr_target_16;
        tmp_called_instance_46 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_46 == NULL)) {
            tmp_called_instance_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 89;
        tmp_assattr_value_16 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_46, mod_consts[52]);
        if (tmp_assattr_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[79], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_47;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_call_result_51;
        CHECK_OBJECT(par_self);
        tmp_expression_value_100 = par_self;
        tmp_called_instance_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[79]);
        if (tmp_called_instance_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 90;
        tmp_call_result_51 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_47,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[80], 0)
        );

        Py_DECREF(tmp_called_instance_47);
        if (tmp_call_result_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_assattr_target_17;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_101 = par_self;
        tmp_args_element_value_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[47]);
        if (tmp_args_element_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 91;
        tmp_assattr_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_93);
        Py_DECREF(tmp_args_element_value_93);
        if (tmp_assattr_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[81], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_48;
        tmp_called_instance_48 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_48 == NULL)) {
            tmp_called_instance_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_instance_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 92;
        tmp_assign_source_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_48, mod_consts[21]);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_49;
        PyObject *tmp_call_result_52;
        CHECK_OBJECT(var_font);
        tmp_called_instance_49 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 93;
        tmp_call_result_52 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_49,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_instance_50;
        PyObject *tmp_call_result_53;
        CHECK_OBJECT(var_font);
        tmp_called_instance_50 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 94;
        tmp_call_result_53 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_50,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[58], 0)
        );

        if (tmp_call_result_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_instance_51;
        PyObject *tmp_call_result_54;
        CHECK_OBJECT(var_font);
        tmp_called_instance_51 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 95;
        tmp_call_result_54 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_51,
            mod_consts[26],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_call_result_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_called_instance_52;
        PyObject *tmp_call_result_55;
        CHECK_OBJECT(var_font);
        tmp_called_instance_52 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 96;
        tmp_call_result_55 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_52,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_call_result_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_55);
    }
    {
        PyObject *tmp_called_instance_53;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_call_result_56;
        PyObject *tmp_args_element_value_94;
        CHECK_OBJECT(par_self);
        tmp_expression_value_102 = par_self;
        tmp_called_instance_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[81]);
        if (tmp_called_instance_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_font);
        tmp_args_element_value_94 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 97;
        tmp_call_result_56 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_53, mod_consts[30], tmp_args_element_value_94);
        Py_DECREF(tmp_called_instance_53);
        if (tmp_call_result_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_called_instance_54;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_call_result_57;
        CHECK_OBJECT(par_self);
        tmp_expression_value_103 = par_self;
        tmp_called_instance_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[81]);
        if (tmp_called_instance_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 98;
        tmp_call_result_57 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_54,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[82], 0)
        );

        Py_DECREF(tmp_called_instance_54);
        if (tmp_call_result_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_call_result_58;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_expression_value_106;
        CHECK_OBJECT(par_self);
        tmp_expression_value_105 = par_self;
        tmp_expression_value_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[79]);
        if (tmp_expression_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[36]);
        Py_DECREF(tmp_expression_value_104);
        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_106 = par_self;
        tmp_args_element_value_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[81]);
        if (tmp_args_element_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 99;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 99;
        tmp_call_result_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_95);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_95);
        if (tmp_call_result_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_assattr_target_18;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_107 = par_self;
        tmp_args_element_value_96 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[47]);
        if (tmp_args_element_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 100;
        tmp_assattr_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_96);
        Py_DECREF(tmp_args_element_value_96);
        if (tmp_assattr_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[38], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_55;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_call_result_59;
        CHECK_OBJECT(par_self);
        tmp_expression_value_108 = par_self;
        tmp_called_instance_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[38]);
        if (tmp_called_instance_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 101;
        tmp_call_result_59 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_55,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[83], 0)
        );

        Py_DECREF(tmp_called_instance_55);
        if (tmp_call_result_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_call_result_60;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_expression_value_111;
        CHECK_OBJECT(par_self);
        tmp_expression_value_110 = par_self;
        tmp_expression_value_109 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[79]);
        if (tmp_expression_value_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[36]);
        Py_DECREF(tmp_expression_value_109);
        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_111 = par_self;
        tmp_args_element_value_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[38]);
        if (tmp_args_element_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 102;
        tmp_call_result_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_97);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_97);
        if (tmp_call_result_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_60);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_call_result_61;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_args_element_value_102;
        CHECK_OBJECT(par_self);
        tmp_expression_value_113 = par_self;
        tmp_expression_value_112 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[77]);
        if (tmp_expression_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[64]);
        Py_DECREF(tmp_expression_value_112);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_114 = par_self;
        tmp_args_element_value_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[79]);
        if (tmp_args_element_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_99 = mod_consts[15];
        tmp_args_element_value_100 = mod_consts[15];
        tmp_args_element_value_101 = mod_consts[16];
        tmp_args_element_value_102 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = {tmp_args_element_value_98, tmp_args_element_value_99, tmp_args_element_value_100, tmp_args_element_value_101, tmp_args_element_value_102};
            tmp_call_result_61 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_33, call_args);
        }

        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_element_value_98);
        if (tmp_call_result_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_expression_value_119;
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[8]);
        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_103 = mod_consts[10];
        tmp_args_element_value_104 = mod_consts[75];
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[11]);
        if (tmp_expression_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_105 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[13]);
        Py_DECREF(tmp_expression_value_116);
        if (tmp_args_element_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_105);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[11]);
        if (tmp_expression_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_105);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_106 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[12]);
        Py_DECREF(tmp_expression_value_118);
        if (tmp_args_element_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_105);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = {tmp_args_element_value_103, tmp_args_element_value_104, tmp_args_element_value_105, tmp_args_element_value_106};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_34, call_args);
        }

        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_105);
        Py_DECREF(tmp_args_element_value_106);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem5 == NULL);
        var_spacerItem5 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_instance_56;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_call_result_62;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_args_element_value_111;
        CHECK_OBJECT(par_self);
        tmp_expression_value_120 = par_self;
        tmp_called_instance_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[77]);
        if (tmp_called_instance_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem5);
        tmp_args_element_value_107 = var_spacerItem5;
        tmp_args_element_value_108 = mod_consts[16];
        tmp_args_element_value_109 = mod_consts[15];
        tmp_args_element_value_110 = mod_consts[16];
        tmp_args_element_value_111 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_value_107, tmp_args_element_value_108, tmp_args_element_value_109, tmp_args_element_value_110, tmp_args_element_value_111};
            tmp_call_result_62 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_56,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_56);
        if (tmp_call_result_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_called_instance_57;
        PyObject *tmp_assattr_target_19;
        tmp_called_instance_57 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_57 == NULL)) {
            tmp_called_instance_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 106;
        tmp_assattr_value_19 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_57, mod_consts[42]);
        if (tmp_assattr_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_19 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[84], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_58;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_call_result_63;
        CHECK_OBJECT(par_self);
        tmp_expression_value_121 = par_self;
        tmp_called_instance_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[84]);
        if (tmp_called_instance_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 107;
        tmp_call_result_63 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_58,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[85], 0)
        );

        Py_DECREF(tmp_called_instance_58);
        if (tmp_call_result_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_assattr_target_20;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_122 = par_self;
        tmp_args_element_value_112 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[47]);
        if (tmp_args_element_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 108;
        tmp_assattr_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_112);
        Py_DECREF(tmp_args_element_value_112);
        if (tmp_assattr_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_20 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[86], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_59;
        tmp_called_instance_59 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_59 == NULL)) {
            tmp_called_instance_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_instance_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 109;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_59, mod_consts[21]);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_60;
        PyObject *tmp_call_result_64;
        CHECK_OBJECT(var_font);
        tmp_called_instance_60 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 110;
        tmp_call_result_64 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_60,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_64);
    }
    {
        PyObject *tmp_called_instance_61;
        PyObject *tmp_call_result_65;
        CHECK_OBJECT(var_font);
        tmp_called_instance_61 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 111;
        tmp_call_result_65 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_61,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        if (tmp_call_result_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_called_instance_62;
        PyObject *tmp_call_result_66;
        CHECK_OBJECT(var_font);
        tmp_called_instance_62 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 112;
        tmp_call_result_66 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_62,
            mod_consts[26],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_call_result_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_called_instance_63;
        PyObject *tmp_call_result_67;
        CHECK_OBJECT(var_font);
        tmp_called_instance_63 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 113;
        tmp_call_result_67 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_63,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_call_result_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_67);
    }
    {
        PyObject *tmp_called_instance_64;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_call_result_68;
        PyObject *tmp_args_element_value_113;
        CHECK_OBJECT(par_self);
        tmp_expression_value_123 = par_self;
        tmp_called_instance_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[86]);
        if (tmp_called_instance_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_font);
        tmp_args_element_value_113 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 114;
        tmp_call_result_68 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_64, mod_consts[30], tmp_args_element_value_113);
        Py_DECREF(tmp_called_instance_64);
        if (tmp_call_result_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_68);
    }
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_call_result_69;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_expression_value_127;
        CHECK_OBJECT(par_self);
        tmp_expression_value_125 = par_self;
        tmp_expression_value_124 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[86]);
        if (tmp_expression_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[70]);
        Py_DECREF(tmp_expression_value_124);
        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[33]);
        if (tmp_expression_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[71]);
        Py_DECREF(tmp_expression_value_126);
        if (tmp_args_element_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 115;
        tmp_call_result_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_114);
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_element_value_114);
        if (tmp_call_result_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_69);
    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_call_result_70;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_expression_value_131;
        CHECK_OBJECT(par_self);
        tmp_expression_value_129 = par_self;
        tmp_expression_value_128 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[86]);
        if (tmp_expression_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[31]);
        Py_DECREF(tmp_expression_value_128);
        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_131 == NULL)) {
            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_130 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[33]);
        if (tmp_expression_value_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[34]);
        Py_DECREF(tmp_expression_value_130);
        if (tmp_args_element_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 116;
        tmp_call_result_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_115);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_element_value_115);
        if (tmp_call_result_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_70);
    }
    {
        PyObject *tmp_called_instance_65;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_call_result_71;
        CHECK_OBJECT(par_self);
        tmp_expression_value_132 = par_self;
        tmp_called_instance_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[86]);
        if (tmp_called_instance_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 117;
        tmp_call_result_71 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_65,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[87], 0)
        );

        Py_DECREF(tmp_called_instance_65);
        if (tmp_call_result_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_71);
    }
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_call_result_72;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_expression_value_135;
        CHECK_OBJECT(par_self);
        tmp_expression_value_134 = par_self;
        tmp_expression_value_133 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts[84]);
        if (tmp_expression_value_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[36]);
        Py_DECREF(tmp_expression_value_133);
        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_135 = par_self;
        tmp_args_element_value_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[86]);
        if (tmp_args_element_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 118;
        tmp_call_result_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_116);
        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_116);
        if (tmp_call_result_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_assattr_target_21;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_136 = par_self;
        tmp_args_element_value_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts[47]);
        if (tmp_args_element_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 119;
        tmp_assattr_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_117);
        Py_DECREF(tmp_args_element_value_117);
        if (tmp_assattr_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_21 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts[18], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_value_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_call_result_73;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_expression_value_140;
        CHECK_OBJECT(par_self);
        tmp_expression_value_138 = par_self;
        tmp_expression_value_137 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts[18]);
        if (tmp_expression_value_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts[31]);
        Py_DECREF(tmp_expression_value_137);
        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_140 == NULL)) {
            tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_139 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, mod_consts[33]);
        if (tmp_expression_value_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, mod_consts[34]);
        Py_DECREF(tmp_expression_value_139);
        if (tmp_args_element_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 120;
        tmp_call_result_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_118);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_118);
        if (tmp_call_result_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_73);
    }
    {
        PyObject *tmp_called_instance_66;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_call_result_74;
        CHECK_OBJECT(par_self);
        tmp_expression_value_141 = par_self;
        tmp_called_instance_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts[18]);
        if (tmp_called_instance_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 121;
        tmp_call_result_74 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_66,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[88], 0)
        );

        Py_DECREF(tmp_called_instance_66);
        if (tmp_call_result_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_74);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_call_result_75;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_expression_value_144;
        CHECK_OBJECT(par_self);
        tmp_expression_value_143 = par_self;
        tmp_expression_value_142 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, mod_consts[84]);
        if (tmp_expression_value_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts[36]);
        Py_DECREF(tmp_expression_value_142);
        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_144 = par_self;
        tmp_args_element_value_119 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts[18]);
        if (tmp_args_element_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 122;
        tmp_call_result_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_119);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_119);
        if (tmp_call_result_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_75);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_call_result_76;
        PyObject *tmp_args_element_value_120;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_args_element_value_122;
        PyObject *tmp_args_element_value_123;
        PyObject *tmp_args_element_value_124;
        CHECK_OBJECT(par_self);
        tmp_expression_value_146 = par_self;
        tmp_expression_value_145 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_146, mod_consts[77]);
        if (tmp_expression_value_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, mod_consts[64]);
        Py_DECREF(tmp_expression_value_145);
        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_147 = par_self;
        tmp_args_element_value_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts[84]);
        if (tmp_args_element_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_121 = mod_consts[17];
        tmp_args_element_value_122 = mod_consts[15];
        tmp_args_element_value_123 = mod_consts[16];
        tmp_args_element_value_124 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_value_120, tmp_args_element_value_121, tmp_args_element_value_122, tmp_args_element_value_123, tmp_args_element_value_124};
            tmp_call_result_76 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_42, call_args);
        }

        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_120);
        if (tmp_call_result_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_76);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_args_element_value_126;
        PyObject *tmp_args_element_value_127;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_args_element_value_128;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_expression_value_152;
        tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_148 == NULL)) {
            tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_148, mod_consts[8]);
        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_125 = mod_consts[10];
        tmp_args_element_value_126 = mod_consts[75];
        tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_150 == NULL)) {
            tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_149 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, mod_consts[11]);
        if (tmp_expression_value_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_127 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_149, mod_consts[13]);
        Py_DECREF(tmp_expression_value_149);
        if (tmp_args_element_value_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_152 == NULL)) {
            tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_args_element_value_127);

            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_151 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_152, mod_consts[11]);
        if (tmp_expression_value_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_args_element_value_127);

            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_128 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, mod_consts[12]);
        Py_DECREF(tmp_expression_value_151);
        if (tmp_args_element_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_args_element_value_127);

            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = {tmp_args_element_value_125, tmp_args_element_value_126, tmp_args_element_value_127, tmp_args_element_value_128};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_43, call_args);
        }

        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_element_value_127);
        Py_DECREF(tmp_args_element_value_128);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem6 == NULL);
        var_spacerItem6 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_called_instance_67;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_call_result_77;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_args_element_value_130;
        PyObject *tmp_args_element_value_131;
        PyObject *tmp_args_element_value_132;
        PyObject *tmp_args_element_value_133;
        CHECK_OBJECT(par_self);
        tmp_expression_value_153 = par_self;
        tmp_called_instance_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts[77]);
        if (tmp_called_instance_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem6);
        tmp_args_element_value_129 = var_spacerItem6;
        tmp_args_element_value_130 = mod_consts[41];
        tmp_args_element_value_131 = mod_consts[15];
        tmp_args_element_value_132 = mod_consts[16];
        tmp_args_element_value_133 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = {tmp_args_element_value_129, tmp_args_element_value_130, tmp_args_element_value_131, tmp_args_element_value_132, tmp_args_element_value_133};
            tmp_call_result_77 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_67,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_67);
        if (tmp_call_result_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_77);
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_call_result_78;
        PyObject *tmp_args_element_value_134;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_args_element_value_135;
        PyObject *tmp_args_element_value_136;
        PyObject *tmp_args_element_value_137;
        PyObject *tmp_args_element_value_138;
        CHECK_OBJECT(par_self);
        tmp_expression_value_155 = par_self;
        tmp_expression_value_154 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_155, mod_consts[45]);
        if (tmp_expression_value_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_154, mod_consts[36]);
        Py_DECREF(tmp_expression_value_154);
        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_156 = par_self;
        tmp_args_element_value_134 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, mod_consts[47]);
        if (tmp_args_element_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_135 = mod_consts[15];
        tmp_args_element_value_136 = mod_consts[15];
        tmp_args_element_value_137 = mod_consts[16];
        tmp_args_element_value_138 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = {tmp_args_element_value_134, tmp_args_element_value_135, tmp_args_element_value_136, tmp_args_element_value_137, tmp_args_element_value_138};
            tmp_call_result_78 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_44, call_args);
        }

        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_134);
        if (tmp_call_result_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_78);
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_139;
        PyObject *tmp_assattr_target_22;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_HomePage);
        tmp_args_element_value_139 = par_HomePage;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 127;
        tmp_assattr_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_139);
        if (tmp_assattr_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_22 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts[89], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_value_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_68;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_call_result_79;
        CHECK_OBJECT(par_self);
        tmp_expression_value_157 = par_self;
        tmp_called_instance_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_157, mod_consts[89]);
        if (tmp_called_instance_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 128;
        tmp_call_result_79 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_68,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[90], 0)
        );

        Py_DECREF(tmp_called_instance_68);
        if (tmp_call_result_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_79);
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_args_element_value_140;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_assattr_target_23;
        tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_158 == NULL)) {
            tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_158, mod_consts[5]);
        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_159 = par_self;
        tmp_args_element_value_140 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_159, mod_consts[89]);
        if (tmp_args_element_value_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 129;
        tmp_assattr_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_140);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_140);
        if (tmp_assattr_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_23 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts[91], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_value_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_69;
        PyObject *tmp_expression_value_160;
        PyObject *tmp_call_result_80;
        CHECK_OBJECT(par_self);
        tmp_expression_value_160 = par_self;
        tmp_called_instance_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_160, mod_consts[91]);
        if (tmp_called_instance_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 130;
        tmp_call_result_80 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_69,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[92], 0)
        );

        Py_DECREF(tmp_called_instance_69);
        if (tmp_call_result_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_80);
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_called_instance_70;
        PyObject *tmp_assattr_target_24;
        tmp_called_instance_70 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_70 == NULL)) {
            tmp_called_instance_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 131;
        tmp_assattr_value_24 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_70, mod_consts[52]);
        if (tmp_assattr_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_24 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts[93], tmp_assattr_value_24);
        Py_DECREF(tmp_assattr_value_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_71;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_call_result_81;
        CHECK_OBJECT(par_self);
        tmp_expression_value_161 = par_self;
        tmp_called_instance_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_161, mod_consts[93]);
        if (tmp_called_instance_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 132;
        tmp_call_result_81 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_71,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[94], 0)
        );

        Py_DECREF(tmp_called_instance_71);
        if (tmp_call_result_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_81);
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_element_value_141;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_assattr_target_25;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_162 = par_self;
        tmp_args_element_value_141 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_162, mod_consts[89]);
        if (tmp_args_element_value_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 133;
        tmp_assattr_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_141);
        Py_DECREF(tmp_args_element_value_141);
        if (tmp_assattr_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_25 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, mod_consts[95], tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_value_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_72;
        tmp_called_instance_72 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_72 == NULL)) {
            tmp_called_instance_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_instance_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 134;
        tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_72, mod_consts[21]);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_73;
        PyObject *tmp_call_result_82;
        CHECK_OBJECT(var_font);
        tmp_called_instance_73 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 135;
        tmp_call_result_82 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_73,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_82);
    }
    {
        PyObject *tmp_called_instance_74;
        PyObject *tmp_call_result_83;
        CHECK_OBJECT(var_font);
        tmp_called_instance_74 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 136;
        tmp_call_result_83 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_74,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[58], 0)
        );

        if (tmp_call_result_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_83);
    }
    {
        PyObject *tmp_called_instance_75;
        PyObject *tmp_call_result_84;
        CHECK_OBJECT(var_font);
        tmp_called_instance_75 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 137;
        tmp_call_result_84 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_75,
            mod_consts[26],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_call_result_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_84);
    }
    {
        PyObject *tmp_called_instance_76;
        PyObject *tmp_call_result_85;
        CHECK_OBJECT(var_font);
        tmp_called_instance_76 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 138;
        tmp_call_result_85 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_76,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_call_result_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_85);
    }
    {
        PyObject *tmp_called_instance_77;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_call_result_86;
        PyObject *tmp_args_element_value_142;
        CHECK_OBJECT(par_self);
        tmp_expression_value_163 = par_self;
        tmp_called_instance_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_163, mod_consts[95]);
        if (tmp_called_instance_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_font);
        tmp_args_element_value_142 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 139;
        tmp_call_result_86 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_77, mod_consts[30], tmp_args_element_value_142);
        Py_DECREF(tmp_called_instance_77);
        if (tmp_call_result_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_86);
    }
    {
        PyObject *tmp_called_instance_78;
        PyObject *tmp_expression_value_164;
        PyObject *tmp_call_result_87;
        CHECK_OBJECT(par_self);
        tmp_expression_value_164 = par_self;
        tmp_called_instance_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_164, mod_consts[95]);
        if (tmp_called_instance_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 140;
        tmp_call_result_87 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_78,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[96], 0)
        );

        Py_DECREF(tmp_called_instance_78);
        if (tmp_call_result_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_87);
    }
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_call_result_88;
        PyObject *tmp_args_element_value_143;
        PyObject *tmp_expression_value_167;
        CHECK_OBJECT(par_self);
        tmp_expression_value_166 = par_self;
        tmp_expression_value_165 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_166, mod_consts[93]);
        if (tmp_expression_value_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_165, mod_consts[36]);
        Py_DECREF(tmp_expression_value_165);
        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_167 = par_self;
        tmp_args_element_value_143 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_167, mod_consts[95]);
        if (tmp_args_element_value_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 141;
        tmp_call_result_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_143);
        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_element_value_143);
        if (tmp_call_result_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_88);
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_called_value_49;
        PyObject *tmp_args_element_value_144;
        PyObject *tmp_expression_value_168;
        PyObject *tmp_assattr_target_26;
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_168 = par_self;
        tmp_args_element_value_144 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_168, mod_consts[89]);
        if (tmp_args_element_value_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 142;
        tmp_assattr_value_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_144);
        Py_DECREF(tmp_args_element_value_144);
        if (tmp_assattr_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_26 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_26, mod_consts[97], tmp_assattr_value_26);
        Py_DECREF(tmp_assattr_value_26);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_79;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_call_result_89;
        CHECK_OBJECT(par_self);
        tmp_expression_value_169 = par_self;
        tmp_called_instance_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_169, mod_consts[97]);
        if (tmp_called_instance_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 143;
        tmp_call_result_89 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_79,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[98], 0)
        );

        Py_DECREF(tmp_called_instance_79);
        if (tmp_call_result_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_89);
    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_call_result_90;
        PyObject *tmp_args_element_value_145;
        PyObject *tmp_expression_value_172;
        CHECK_OBJECT(par_self);
        tmp_expression_value_171 = par_self;
        tmp_expression_value_170 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_171, mod_consts[93]);
        if (tmp_expression_value_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_170, mod_consts[36]);
        Py_DECREF(tmp_expression_value_170);
        if (tmp_called_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_172 = par_self;
        tmp_args_element_value_145 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_172, mod_consts[97]);
        if (tmp_args_element_value_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 144;
        tmp_call_result_90 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_145);
        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_element_value_145);
        if (tmp_call_result_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_90);
    }
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_expression_value_174;
        PyObject *tmp_call_result_91;
        PyObject *tmp_args_element_value_146;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_args_element_value_147;
        PyObject *tmp_args_element_value_148;
        PyObject *tmp_args_element_value_149;
        PyObject *tmp_args_element_value_150;
        CHECK_OBJECT(par_self);
        tmp_expression_value_174 = par_self;
        tmp_expression_value_173 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_174, mod_consts[91]);
        if (tmp_expression_value_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_173, mod_consts[64]);
        Py_DECREF(tmp_expression_value_173);
        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_175 = par_self;
        tmp_args_element_value_146 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_175, mod_consts[93]);
        if (tmp_args_element_value_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_147 = mod_consts[15];
        tmp_args_element_value_148 = mod_consts[15];
        tmp_args_element_value_149 = mod_consts[16];
        tmp_args_element_value_150 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = {tmp_args_element_value_146, tmp_args_element_value_147, tmp_args_element_value_148, tmp_args_element_value_149, tmp_args_element_value_150};
            tmp_call_result_91 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_51, call_args);
        }

        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_element_value_146);
        if (tmp_call_result_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_91);
    }
    {
        PyObject *tmp_assattr_value_27;
        PyObject *tmp_called_instance_80;
        PyObject *tmp_assattr_target_27;
        tmp_called_instance_80 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_80 == NULL)) {
            tmp_called_instance_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 146;
        tmp_assattr_value_27 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_80, mod_consts[42]);
        if (tmp_assattr_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_27 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_27, mod_consts[99], tmp_assattr_value_27);
        Py_DECREF(tmp_assattr_value_27);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_81;
        PyObject *tmp_expression_value_176;
        PyObject *tmp_call_result_92;
        CHECK_OBJECT(par_self);
        tmp_expression_value_176 = par_self;
        tmp_called_instance_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_176, mod_consts[99]);
        if (tmp_called_instance_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 147;
        tmp_call_result_92 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_81,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[100], 0)
        );

        Py_DECREF(tmp_called_instance_81);
        if (tmp_call_result_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_92);
    }
    {
        PyObject *tmp_assattr_value_28;
        PyObject *tmp_called_value_52;
        PyObject *tmp_args_element_value_151;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_assattr_target_28;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_177 = par_self;
        tmp_args_element_value_151 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_177, mod_consts[89]);
        if (tmp_args_element_value_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 148;
        tmp_assattr_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_151);
        Py_DECREF(tmp_args_element_value_151);
        if (tmp_assattr_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_28 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_28, mod_consts[101], tmp_assattr_value_28);
        Py_DECREF(tmp_assattr_value_28);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_82;
        tmp_called_instance_82 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_82 == NULL)) {
            tmp_called_instance_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_instance_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 149;
        tmp_assign_source_14 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_82, mod_consts[21]);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_83;
        PyObject *tmp_call_result_93;
        CHECK_OBJECT(var_font);
        tmp_called_instance_83 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 150;
        tmp_call_result_93 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_83,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_93);
    }
    {
        PyObject *tmp_called_instance_84;
        PyObject *tmp_call_result_94;
        CHECK_OBJECT(var_font);
        tmp_called_instance_84 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 151;
        tmp_call_result_94 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_84,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        if (tmp_call_result_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_94);
    }
    {
        PyObject *tmp_called_instance_85;
        PyObject *tmp_call_result_95;
        CHECK_OBJECT(var_font);
        tmp_called_instance_85 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 152;
        tmp_call_result_95 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_85,
            mod_consts[26],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_call_result_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_95);
    }
    {
        PyObject *tmp_called_instance_86;
        PyObject *tmp_call_result_96;
        CHECK_OBJECT(var_font);
        tmp_called_instance_86 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 153;
        tmp_call_result_96 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_86,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_call_result_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_96);
    }
    {
        PyObject *tmp_called_instance_87;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_call_result_97;
        PyObject *tmp_args_element_value_152;
        CHECK_OBJECT(par_self);
        tmp_expression_value_178 = par_self;
        tmp_called_instance_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_178, mod_consts[101]);
        if (tmp_called_instance_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_font);
        tmp_args_element_value_152 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 154;
        tmp_call_result_97 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_87, mod_consts[30], tmp_args_element_value_152);
        Py_DECREF(tmp_called_instance_87);
        if (tmp_call_result_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_97);
    }
    {
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_call_result_98;
        PyObject *tmp_args_element_value_153;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_expression_value_182;
        CHECK_OBJECT(par_self);
        tmp_expression_value_180 = par_self;
        tmp_expression_value_179 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_180, mod_consts[101]);
        if (tmp_expression_value_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_179, mod_consts[70]);
        Py_DECREF(tmp_expression_value_179);
        if (tmp_called_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_182 == NULL)) {
            tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_181 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_182, mod_consts[33]);
        if (tmp_expression_value_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_153 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_181, mod_consts[71]);
        Py_DECREF(tmp_expression_value_181);
        if (tmp_args_element_value_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 155;
        tmp_call_result_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_53, tmp_args_element_value_153);
        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_args_element_value_153);
        if (tmp_call_result_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_98);
    }
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_expression_value_184;
        PyObject *tmp_call_result_99;
        PyObject *tmp_args_element_value_154;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_expression_value_186;
        CHECK_OBJECT(par_self);
        tmp_expression_value_184 = par_self;
        tmp_expression_value_183 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_184, mod_consts[101]);
        if (tmp_expression_value_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_183, mod_consts[31]);
        Py_DECREF(tmp_expression_value_183);
        if (tmp_called_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_186 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_186 == NULL)) {
            tmp_expression_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_185 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_186, mod_consts[33]);
        if (tmp_expression_value_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_154 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_185, mod_consts[34]);
        Py_DECREF(tmp_expression_value_185);
        if (tmp_args_element_value_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 156;
        tmp_call_result_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_154);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_element_value_154);
        if (tmp_call_result_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_99);
    }
    {
        PyObject *tmp_called_instance_88;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_call_result_100;
        CHECK_OBJECT(par_self);
        tmp_expression_value_187 = par_self;
        tmp_called_instance_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_187, mod_consts[101]);
        if (tmp_called_instance_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 157;
        tmp_call_result_100 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_88,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[102], 0)
        );

        Py_DECREF(tmp_called_instance_88);
        if (tmp_call_result_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_100);
    }
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_call_result_101;
        PyObject *tmp_args_element_value_155;
        PyObject *tmp_expression_value_190;
        CHECK_OBJECT(par_self);
        tmp_expression_value_189 = par_self;
        tmp_expression_value_188 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_189, mod_consts[99]);
        if (tmp_expression_value_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_188, mod_consts[36]);
        Py_DECREF(tmp_expression_value_188);
        if (tmp_called_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_190 = par_self;
        tmp_args_element_value_155 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_190, mod_consts[101]);
        if (tmp_args_element_value_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 158;
        tmp_call_result_101 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_55, tmp_args_element_value_155);
        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_args_element_value_155);
        if (tmp_call_result_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_101);
    }
    {
        PyObject *tmp_assattr_value_29;
        PyObject *tmp_called_value_56;
        PyObject *tmp_args_element_value_156;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_assattr_target_29;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_191 = par_self;
        tmp_args_element_value_156 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_191, mod_consts[89]);
        if (tmp_args_element_value_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 159;
        tmp_assattr_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_56, tmp_args_element_value_156);
        Py_DECREF(tmp_args_element_value_156);
        if (tmp_assattr_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_29 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_29, mod_consts[103], tmp_assattr_value_29);
        Py_DECREF(tmp_assattr_value_29);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_192;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_call_result_102;
        PyObject *tmp_args_element_value_157;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_expression_value_195;
        CHECK_OBJECT(par_self);
        tmp_expression_value_193 = par_self;
        tmp_expression_value_192 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_193, mod_consts[103]);
        if (tmp_expression_value_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_192, mod_consts[31]);
        Py_DECREF(tmp_expression_value_192);
        if (tmp_called_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_195 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_195 == NULL)) {
            tmp_expression_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_194 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_195, mod_consts[33]);
        if (tmp_expression_value_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_157 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_194, mod_consts[34]);
        Py_DECREF(tmp_expression_value_194);
        if (tmp_args_element_value_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 160;
        tmp_call_result_102 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_157);
        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_args_element_value_157);
        if (tmp_call_result_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_102);
    }
    {
        PyObject *tmp_called_instance_89;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_call_result_103;
        CHECK_OBJECT(par_self);
        tmp_expression_value_196 = par_self;
        tmp_called_instance_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_196, mod_consts[103]);
        if (tmp_called_instance_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 161;
        tmp_call_result_103 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_89,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[104], 0)
        );

        Py_DECREF(tmp_called_instance_89);
        if (tmp_call_result_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_103);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_expression_value_198;
        PyObject *tmp_call_result_104;
        PyObject *tmp_args_element_value_158;
        PyObject *tmp_expression_value_199;
        CHECK_OBJECT(par_self);
        tmp_expression_value_198 = par_self;
        tmp_expression_value_197 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_198, mod_consts[99]);
        if (tmp_expression_value_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_197, mod_consts[36]);
        Py_DECREF(tmp_expression_value_197);
        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_199 = par_self;
        tmp_args_element_value_158 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_199, mod_consts[103]);
        if (tmp_args_element_value_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 162;
        tmp_call_result_104 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_158);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_158);
        if (tmp_call_result_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_104);
    }
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_200;
        PyObject *tmp_expression_value_201;
        PyObject *tmp_call_result_105;
        PyObject *tmp_args_element_value_159;
        PyObject *tmp_expression_value_202;
        PyObject *tmp_args_element_value_160;
        PyObject *tmp_args_element_value_161;
        PyObject *tmp_args_element_value_162;
        PyObject *tmp_args_element_value_163;
        CHECK_OBJECT(par_self);
        tmp_expression_value_201 = par_self;
        tmp_expression_value_200 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_201, mod_consts[91]);
        if (tmp_expression_value_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_200, mod_consts[64]);
        Py_DECREF(tmp_expression_value_200);
        if (tmp_called_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_202 = par_self;
        tmp_args_element_value_159 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_202, mod_consts[99]);
        if (tmp_args_element_value_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);

            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_160 = mod_consts[17];
        tmp_args_element_value_161 = mod_consts[15];
        tmp_args_element_value_162 = mod_consts[16];
        tmp_args_element_value_163 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 163;
        {
            PyObject *call_args[] = {tmp_args_element_value_159, tmp_args_element_value_160, tmp_args_element_value_161, tmp_args_element_value_162, tmp_args_element_value_163};
            tmp_call_result_105 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_59, call_args);
        }

        Py_DECREF(tmp_called_value_59);
        Py_DECREF(tmp_args_element_value_159);
        if (tmp_call_result_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_105);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_args_element_value_164;
        PyObject *tmp_args_element_value_165;
        PyObject *tmp_args_element_value_166;
        PyObject *tmp_expression_value_204;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_args_element_value_167;
        PyObject *tmp_expression_value_206;
        PyObject *tmp_expression_value_207;
        tmp_expression_value_203 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_203 == NULL)) {
            tmp_expression_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_203, mod_consts[8]);
        if (tmp_called_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_164 = mod_consts[10];
        tmp_args_element_value_165 = mod_consts[75];
        tmp_expression_value_205 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_205 == NULL)) {
            tmp_expression_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_204 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_205, mod_consts[11]);
        if (tmp_expression_value_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_166 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_204, mod_consts[13]);
        Py_DECREF(tmp_expression_value_204);
        if (tmp_args_element_value_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_207 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_207 == NULL)) {
            tmp_expression_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_args_element_value_166);

            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_206 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_207, mod_consts[11]);
        if (tmp_expression_value_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_args_element_value_166);

            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_167 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_206, mod_consts[12]);
        Py_DECREF(tmp_expression_value_206);
        if (tmp_args_element_value_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_args_element_value_166);

            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = {tmp_args_element_value_164, tmp_args_element_value_165, tmp_args_element_value_166, tmp_args_element_value_167};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_60, call_args);
        }

        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_args_element_value_166);
        Py_DECREF(tmp_args_element_value_167);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem7 == NULL);
        var_spacerItem7 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_called_instance_90;
        PyObject *tmp_expression_value_208;
        PyObject *tmp_call_result_106;
        PyObject *tmp_args_element_value_168;
        PyObject *tmp_args_element_value_169;
        PyObject *tmp_args_element_value_170;
        PyObject *tmp_args_element_value_171;
        PyObject *tmp_args_element_value_172;
        CHECK_OBJECT(par_self);
        tmp_expression_value_208 = par_self;
        tmp_called_instance_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_208, mod_consts[91]);
        if (tmp_called_instance_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem7);
        tmp_args_element_value_168 = var_spacerItem7;
        tmp_args_element_value_169 = mod_consts[16];
        tmp_args_element_value_170 = mod_consts[15];
        tmp_args_element_value_171 = mod_consts[16];
        tmp_args_element_value_172 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = {tmp_args_element_value_168, tmp_args_element_value_169, tmp_args_element_value_170, tmp_args_element_value_171, tmp_args_element_value_172};
            tmp_call_result_106 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_90,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_90);
        if (tmp_call_result_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_106);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_209;
        PyObject *tmp_args_element_value_173;
        PyObject *tmp_args_element_value_174;
        PyObject *tmp_args_element_value_175;
        PyObject *tmp_expression_value_210;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_args_element_value_176;
        PyObject *tmp_expression_value_212;
        PyObject *tmp_expression_value_213;
        tmp_expression_value_209 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_209 == NULL)) {
            tmp_expression_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_209, mod_consts[8]);
        if (tmp_called_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_173 = mod_consts[10];
        tmp_args_element_value_174 = mod_consts[75];
        tmp_expression_value_211 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_211 == NULL)) {
            tmp_expression_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_210 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_211, mod_consts[11]);
        if (tmp_expression_value_210 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_175 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_210, mod_consts[13]);
        Py_DECREF(tmp_expression_value_210);
        if (tmp_args_element_value_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_213 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_213 == NULL)) {
            tmp_expression_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);
            Py_DECREF(tmp_args_element_value_175);

            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_212 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_213, mod_consts[11]);
        if (tmp_expression_value_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);
            Py_DECREF(tmp_args_element_value_175);

            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_176 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_212, mod_consts[12]);
        Py_DECREF(tmp_expression_value_212);
        if (tmp_args_element_value_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);
            Py_DECREF(tmp_args_element_value_175);

            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = {tmp_args_element_value_173, tmp_args_element_value_174, tmp_args_element_value_175, tmp_args_element_value_176};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_61, call_args);
        }

        Py_DECREF(tmp_called_value_61);
        Py_DECREF(tmp_args_element_value_175);
        Py_DECREF(tmp_args_element_value_176);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem8 == NULL);
        var_spacerItem8 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_called_instance_91;
        PyObject *tmp_expression_value_214;
        PyObject *tmp_call_result_107;
        PyObject *tmp_args_element_value_177;
        PyObject *tmp_args_element_value_178;
        PyObject *tmp_args_element_value_179;
        PyObject *tmp_args_element_value_180;
        PyObject *tmp_args_element_value_181;
        CHECK_OBJECT(par_self);
        tmp_expression_value_214 = par_self;
        tmp_called_instance_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_214, mod_consts[91]);
        if (tmp_called_instance_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem8);
        tmp_args_element_value_177 = var_spacerItem8;
        tmp_args_element_value_178 = mod_consts[41];
        tmp_args_element_value_179 = mod_consts[15];
        tmp_args_element_value_180 = mod_consts[16];
        tmp_args_element_value_181 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 167;
        {
            PyObject *call_args[] = {tmp_args_element_value_177, tmp_args_element_value_178, tmp_args_element_value_179, tmp_args_element_value_180, tmp_args_element_value_181};
            tmp_call_result_107 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_91,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_91);
        if (tmp_call_result_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_107);
    }
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_expression_value_215;
        PyObject *tmp_expression_value_216;
        PyObject *tmp_call_result_108;
        PyObject *tmp_args_element_value_182;
        PyObject *tmp_expression_value_217;
        PyObject *tmp_args_element_value_183;
        PyObject *tmp_args_element_value_184;
        PyObject *tmp_args_element_value_185;
        PyObject *tmp_args_element_value_186;
        CHECK_OBJECT(par_self);
        tmp_expression_value_216 = par_self;
        tmp_expression_value_215 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_216, mod_consts[45]);
        if (tmp_expression_value_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_215, mod_consts[36]);
        Py_DECREF(tmp_expression_value_215);
        if (tmp_called_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_217 = par_self;
        tmp_args_element_value_182 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_217, mod_consts[89]);
        if (tmp_args_element_value_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_183 = mod_consts[17];
        tmp_args_element_value_184 = mod_consts[16];
        tmp_args_element_value_185 = mod_consts[16];
        tmp_args_element_value_186 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = {tmp_args_element_value_182, tmp_args_element_value_183, tmp_args_element_value_184, tmp_args_element_value_185, tmp_args_element_value_186};
            tmp_call_result_108 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_62, call_args);
        }

        Py_DECREF(tmp_called_value_62);
        Py_DECREF(tmp_args_element_value_182);
        if (tmp_call_result_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_108);
    }
    {
        PyObject *tmp_assattr_value_30;
        PyObject *tmp_called_value_63;
        PyObject *tmp_args_element_value_187;
        PyObject *tmp_assattr_target_30;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_HomePage);
        tmp_args_element_value_187 = par_HomePage;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 169;
        tmp_assattr_value_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_63, tmp_args_element_value_187);
        if (tmp_assattr_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_30 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_30, mod_consts[105], tmp_assattr_value_30);
        Py_DECREF(tmp_assattr_value_30);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_92;
        PyObject *tmp_expression_value_218;
        PyObject *tmp_call_result_109;
        CHECK_OBJECT(par_self);
        tmp_expression_value_218 = par_self;
        tmp_called_instance_92 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_218, mod_consts[105]);
        if (tmp_called_instance_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 170;
        tmp_call_result_109 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_92,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[106], 0)
        );

        Py_DECREF(tmp_called_instance_92);
        if (tmp_call_result_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_109);
    }
    {
        PyObject *tmp_assattr_value_31;
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_219;
        PyObject *tmp_args_element_value_188;
        PyObject *tmp_expression_value_220;
        PyObject *tmp_assattr_target_31;
        tmp_expression_value_219 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_219 == NULL)) {
            tmp_expression_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_219, mod_consts[5]);
        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_220 = par_self;
        tmp_args_element_value_188 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_220, mod_consts[105]);
        if (tmp_args_element_value_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 171;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 171;
        tmp_assattr_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_64, tmp_args_element_value_188);
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_element_value_188);
        if (tmp_assattr_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_31 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_31, mod_consts[107], tmp_assattr_value_31);
        Py_DECREF(tmp_assattr_value_31);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_93;
        PyObject *tmp_expression_value_221;
        PyObject *tmp_call_result_110;
        CHECK_OBJECT(par_self);
        tmp_expression_value_221 = par_self;
        tmp_called_instance_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_221, mod_consts[107]);
        if (tmp_called_instance_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 172;
        tmp_call_result_110 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_93,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[108], 0)
        );

        Py_DECREF(tmp_called_instance_93);
        if (tmp_call_result_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_110);
    }
    {
        PyObject *tmp_assattr_value_32;
        PyObject *tmp_called_instance_94;
        PyObject *tmp_assattr_target_32;
        tmp_called_instance_94 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_94 == NULL)) {
            tmp_called_instance_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 173;
        tmp_assattr_value_32 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_94, mod_consts[42]);
        if (tmp_assattr_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_32 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_32, mod_consts[109], tmp_assattr_value_32);
        Py_DECREF(tmp_assattr_value_32);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_95;
        PyObject *tmp_expression_value_222;
        PyObject *tmp_call_result_111;
        CHECK_OBJECT(par_self);
        tmp_expression_value_222 = par_self;
        tmp_called_instance_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_222, mod_consts[109]);
        if (tmp_called_instance_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 174;
        tmp_call_result_111 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_95,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[110], 0)
        );

        Py_DECREF(tmp_called_instance_95);
        if (tmp_call_result_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_111);
    }
    {
        PyObject *tmp_assattr_value_33;
        PyObject *tmp_called_value_65;
        PyObject *tmp_args_element_value_189;
        PyObject *tmp_expression_value_223;
        PyObject *tmp_assattr_target_33;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_223 = par_self;
        tmp_args_element_value_189 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_223, mod_consts[105]);
        if (tmp_args_element_value_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 175;
        tmp_assattr_value_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_65, tmp_args_element_value_189);
        Py_DECREF(tmp_args_element_value_189);
        if (tmp_assattr_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_33 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_33, mod_consts[111], tmp_assattr_value_33);
        Py_DECREF(tmp_assattr_value_33);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_96;
        tmp_called_instance_96 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_96 == NULL)) {
            tmp_called_instance_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_instance_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 176;
        tmp_assign_source_17 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_96, mod_consts[21]);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_17;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_97;
        PyObject *tmp_call_result_112;
        CHECK_OBJECT(var_font);
        tmp_called_instance_97 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 177;
        tmp_call_result_112 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_97,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_112);
    }
    {
        PyObject *tmp_called_instance_98;
        PyObject *tmp_call_result_113;
        CHECK_OBJECT(var_font);
        tmp_called_instance_98 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 178;
        tmp_call_result_113 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_98,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        if (tmp_call_result_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_113);
    }
    {
        PyObject *tmp_called_instance_99;
        PyObject *tmp_call_result_114;
        CHECK_OBJECT(var_font);
        tmp_called_instance_99 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 179;
        tmp_call_result_114 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_99,
            mod_consts[26],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_call_result_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_114);
    }
    {
        PyObject *tmp_called_instance_100;
        PyObject *tmp_call_result_115;
        CHECK_OBJECT(var_font);
        tmp_called_instance_100 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 180;
        tmp_call_result_115 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_100,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_call_result_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_115);
    }
    {
        PyObject *tmp_called_instance_101;
        PyObject *tmp_expression_value_224;
        PyObject *tmp_call_result_116;
        PyObject *tmp_args_element_value_190;
        CHECK_OBJECT(par_self);
        tmp_expression_value_224 = par_self;
        tmp_called_instance_101 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_224, mod_consts[111]);
        if (tmp_called_instance_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_font);
        tmp_args_element_value_190 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 181;
        tmp_call_result_116 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_101, mod_consts[30], tmp_args_element_value_190);
        Py_DECREF(tmp_called_instance_101);
        if (tmp_call_result_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_116);
    }
    {
        PyObject *tmp_called_value_66;
        PyObject *tmp_expression_value_225;
        PyObject *tmp_expression_value_226;
        PyObject *tmp_call_result_117;
        PyObject *tmp_args_element_value_191;
        PyObject *tmp_expression_value_227;
        PyObject *tmp_expression_value_228;
        CHECK_OBJECT(par_self);
        tmp_expression_value_226 = par_self;
        tmp_expression_value_225 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_226, mod_consts[111]);
        if (tmp_expression_value_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_225, mod_consts[70]);
        Py_DECREF(tmp_expression_value_225);
        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_228 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_228 == NULL)) {
            tmp_expression_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_227 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_228, mod_consts[33]);
        if (tmp_expression_value_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_191 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_227, mod_consts[71]);
        Py_DECREF(tmp_expression_value_227);
        if (tmp_args_element_value_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 182;
        tmp_call_result_117 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_66, tmp_args_element_value_191);
        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_args_element_value_191);
        if (tmp_call_result_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_117);
    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_229;
        PyObject *tmp_expression_value_230;
        PyObject *tmp_call_result_118;
        PyObject *tmp_args_element_value_192;
        PyObject *tmp_expression_value_231;
        PyObject *tmp_expression_value_232;
        CHECK_OBJECT(par_self);
        tmp_expression_value_230 = par_self;
        tmp_expression_value_229 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_230, mod_consts[111]);
        if (tmp_expression_value_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_229, mod_consts[31]);
        Py_DECREF(tmp_expression_value_229);
        if (tmp_called_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_232 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_232 == NULL)) {
            tmp_expression_value_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_231 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_232, mod_consts[33]);
        if (tmp_expression_value_231 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_192 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_231, mod_consts[34]);
        Py_DECREF(tmp_expression_value_231);
        if (tmp_args_element_value_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 183;
        tmp_call_result_118 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_67, tmp_args_element_value_192);
        Py_DECREF(tmp_called_value_67);
        Py_DECREF(tmp_args_element_value_192);
        if (tmp_call_result_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_118);
    }
    {
        PyObject *tmp_called_instance_102;
        PyObject *tmp_expression_value_233;
        PyObject *tmp_call_result_119;
        CHECK_OBJECT(par_self);
        tmp_expression_value_233 = par_self;
        tmp_called_instance_102 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_233, mod_consts[111]);
        if (tmp_called_instance_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 184;
        tmp_call_result_119 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_102,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[112], 0)
        );

        Py_DECREF(tmp_called_instance_102);
        if (tmp_call_result_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_119);
    }
    {
        PyObject *tmp_called_value_68;
        PyObject *tmp_expression_value_234;
        PyObject *tmp_expression_value_235;
        PyObject *tmp_call_result_120;
        PyObject *tmp_args_element_value_193;
        PyObject *tmp_expression_value_236;
        CHECK_OBJECT(par_self);
        tmp_expression_value_235 = par_self;
        tmp_expression_value_234 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_235, mod_consts[109]);
        if (tmp_expression_value_234 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_234, mod_consts[36]);
        Py_DECREF(tmp_expression_value_234);
        if (tmp_called_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_236 = par_self;
        tmp_args_element_value_193 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_236, mod_consts[111]);
        if (tmp_args_element_value_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 185;
        tmp_call_result_120 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_68, tmp_args_element_value_193);
        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_args_element_value_193);
        if (tmp_call_result_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_120);
    }
    {
        PyObject *tmp_assattr_value_34;
        PyObject *tmp_called_value_69;
        PyObject *tmp_args_element_value_194;
        PyObject *tmp_expression_value_237;
        PyObject *tmp_assattr_target_34;
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_237 = par_self;
        tmp_args_element_value_194 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_237, mod_consts[105]);
        if (tmp_args_element_value_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 186;
        tmp_assattr_value_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_69, tmp_args_element_value_194);
        Py_DECREF(tmp_args_element_value_194);
        if (tmp_assattr_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_34 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_34, mod_consts[113], tmp_assattr_value_34);
        Py_DECREF(tmp_assattr_value_34);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_expression_value_238;
        PyObject *tmp_expression_value_239;
        PyObject *tmp_call_result_121;
        PyObject *tmp_args_element_value_195;
        PyObject *tmp_expression_value_240;
        PyObject *tmp_expression_value_241;
        CHECK_OBJECT(par_self);
        tmp_expression_value_239 = par_self;
        tmp_expression_value_238 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_239, mod_consts[113]);
        if (tmp_expression_value_238 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_238, mod_consts[31]);
        Py_DECREF(tmp_expression_value_238);
        if (tmp_called_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_241 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_241 == NULL)) {
            tmp_expression_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_241 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_240 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_241, mod_consts[33]);
        if (tmp_expression_value_240 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_195 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_240, mod_consts[34]);
        Py_DECREF(tmp_expression_value_240);
        if (tmp_args_element_value_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 187;
        tmp_call_result_121 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_70, tmp_args_element_value_195);
        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_args_element_value_195);
        if (tmp_call_result_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_121);
    }
    {
        PyObject *tmp_called_instance_103;
        PyObject *tmp_expression_value_242;
        PyObject *tmp_call_result_122;
        CHECK_OBJECT(par_self);
        tmp_expression_value_242 = par_self;
        tmp_called_instance_103 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_242, mod_consts[113]);
        if (tmp_called_instance_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 188;
        tmp_call_result_122 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_103,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[114], 0)
        );

        Py_DECREF(tmp_called_instance_103);
        if (tmp_call_result_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_122);
    }
    {
        PyObject *tmp_called_value_71;
        PyObject *tmp_expression_value_243;
        PyObject *tmp_expression_value_244;
        PyObject *tmp_call_result_123;
        PyObject *tmp_args_element_value_196;
        PyObject *tmp_expression_value_245;
        CHECK_OBJECT(par_self);
        tmp_expression_value_244 = par_self;
        tmp_expression_value_243 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_244, mod_consts[109]);
        if (tmp_expression_value_243 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_243, mod_consts[36]);
        Py_DECREF(tmp_expression_value_243);
        if (tmp_called_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_245 = par_self;
        tmp_args_element_value_196 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_245, mod_consts[113]);
        if (tmp_args_element_value_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);

            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 189;
        tmp_call_result_123 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_71, tmp_args_element_value_196);
        Py_DECREF(tmp_called_value_71);
        Py_DECREF(tmp_args_element_value_196);
        if (tmp_call_result_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_123);
    }
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_expression_value_246;
        PyObject *tmp_expression_value_247;
        PyObject *tmp_call_result_124;
        PyObject *tmp_args_element_value_197;
        PyObject *tmp_expression_value_248;
        PyObject *tmp_args_element_value_198;
        PyObject *tmp_args_element_value_199;
        PyObject *tmp_args_element_value_200;
        PyObject *tmp_args_element_value_201;
        CHECK_OBJECT(par_self);
        tmp_expression_value_247 = par_self;
        tmp_expression_value_246 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_247, mod_consts[107]);
        if (tmp_expression_value_246 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_246, mod_consts[64]);
        Py_DECREF(tmp_expression_value_246);
        if (tmp_called_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_248 = par_self;
        tmp_args_element_value_197 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_248, mod_consts[109]);
        if (tmp_args_element_value_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_198 = mod_consts[17];
        tmp_args_element_value_199 = mod_consts[15];
        tmp_args_element_value_200 = mod_consts[16];
        tmp_args_element_value_201 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_value_197, tmp_args_element_value_198, tmp_args_element_value_199, tmp_args_element_value_200, tmp_args_element_value_201};
            tmp_call_result_124 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_72, call_args);
        }

        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_args_element_value_197);
        if (tmp_call_result_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_124);
    }
    {
        PyObject *tmp_assattr_value_35;
        PyObject *tmp_called_instance_104;
        PyObject *tmp_assattr_target_35;
        tmp_called_instance_104 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_104 == NULL)) {
            tmp_called_instance_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 191;
        tmp_assattr_value_35 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_104, mod_consts[52]);
        if (tmp_assattr_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_35 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_35, mod_consts[115], tmp_assattr_value_35);
        Py_DECREF(tmp_assattr_value_35);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_105;
        PyObject *tmp_expression_value_249;
        PyObject *tmp_call_result_125;
        CHECK_OBJECT(par_self);
        tmp_expression_value_249 = par_self;
        tmp_called_instance_105 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_249, mod_consts[115]);
        if (tmp_called_instance_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 192;
        tmp_call_result_125 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_105,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[116], 0)
        );

        Py_DECREF(tmp_called_instance_105);
        if (tmp_call_result_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_125);
    }
    {
        PyObject *tmp_assattr_value_36;
        PyObject *tmp_called_value_73;
        PyObject *tmp_args_element_value_202;
        PyObject *tmp_expression_value_250;
        PyObject *tmp_assattr_target_36;
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_250 = par_self;
        tmp_args_element_value_202 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_250, mod_consts[105]);
        if (tmp_args_element_value_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 193;
        tmp_assattr_value_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_73, tmp_args_element_value_202);
        Py_DECREF(tmp_args_element_value_202);
        if (tmp_assattr_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_36 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_36, mod_consts[117], tmp_assattr_value_36);
        Py_DECREF(tmp_assattr_value_36);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_106;
        tmp_called_instance_106 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_106 == NULL)) {
            tmp_called_instance_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_instance_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 194;
        tmp_assign_source_18 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_106, mod_consts[21]);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_18;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_107;
        PyObject *tmp_call_result_126;
        CHECK_OBJECT(var_font);
        tmp_called_instance_107 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 195;
        tmp_call_result_126 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_107,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_126);
    }
    {
        PyObject *tmp_called_instance_108;
        PyObject *tmp_call_result_127;
        CHECK_OBJECT(var_font);
        tmp_called_instance_108 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 196;
        tmp_call_result_127 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_108,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[58], 0)
        );

        if (tmp_call_result_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_127);
    }
    {
        PyObject *tmp_called_instance_109;
        PyObject *tmp_call_result_128;
        CHECK_OBJECT(var_font);
        tmp_called_instance_109 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 197;
        tmp_call_result_128 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_109,
            mod_consts[26],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_call_result_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_128);
    }
    {
        PyObject *tmp_called_instance_110;
        PyObject *tmp_call_result_129;
        CHECK_OBJECT(var_font);
        tmp_called_instance_110 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 198;
        tmp_call_result_129 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_110,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_call_result_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_129);
    }
    {
        PyObject *tmp_called_instance_111;
        PyObject *tmp_expression_value_251;
        PyObject *tmp_call_result_130;
        PyObject *tmp_args_element_value_203;
        CHECK_OBJECT(par_self);
        tmp_expression_value_251 = par_self;
        tmp_called_instance_111 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_251, mod_consts[117]);
        if (tmp_called_instance_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_font);
        tmp_args_element_value_203 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 199;
        tmp_call_result_130 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_111, mod_consts[30], tmp_args_element_value_203);
        Py_DECREF(tmp_called_instance_111);
        if (tmp_call_result_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_130);
    }
    {
        PyObject *tmp_called_instance_112;
        PyObject *tmp_expression_value_252;
        PyObject *tmp_call_result_131;
        CHECK_OBJECT(par_self);
        tmp_expression_value_252 = par_self;
        tmp_called_instance_112 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_252, mod_consts[117]);
        if (tmp_called_instance_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 200;
        tmp_call_result_131 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_112,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[118], 0)
        );

        Py_DECREF(tmp_called_instance_112);
        if (tmp_call_result_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_131);
    }
    {
        PyObject *tmp_called_value_74;
        PyObject *tmp_expression_value_253;
        PyObject *tmp_expression_value_254;
        PyObject *tmp_call_result_132;
        PyObject *tmp_args_element_value_204;
        PyObject *tmp_expression_value_255;
        CHECK_OBJECT(par_self);
        tmp_expression_value_254 = par_self;
        tmp_expression_value_253 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_254, mod_consts[115]);
        if (tmp_expression_value_253 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_253, mod_consts[36]);
        Py_DECREF(tmp_expression_value_253);
        if (tmp_called_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_255 = par_self;
        tmp_args_element_value_204 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_255, mod_consts[117]);
        if (tmp_args_element_value_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 201;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 201;
        tmp_call_result_132 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_74, tmp_args_element_value_204);
        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_args_element_value_204);
        if (tmp_call_result_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_132);
    }
    {
        PyObject *tmp_assattr_value_37;
        PyObject *tmp_called_value_75;
        PyObject *tmp_args_element_value_205;
        PyObject *tmp_expression_value_256;
        PyObject *tmp_assattr_target_37;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_256 = par_self;
        tmp_args_element_value_205 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_256, mod_consts[105]);
        if (tmp_args_element_value_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 202;
        tmp_assattr_value_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_75, tmp_args_element_value_205);
        Py_DECREF(tmp_args_element_value_205);
        if (tmp_assattr_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_37 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_37, mod_consts[119], tmp_assattr_value_37);
        Py_DECREF(tmp_assattr_value_37);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_113;
        PyObject *tmp_expression_value_257;
        PyObject *tmp_call_result_133;
        CHECK_OBJECT(par_self);
        tmp_expression_value_257 = par_self;
        tmp_called_instance_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_257, mod_consts[119]);
        if (tmp_called_instance_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 203;
        tmp_call_result_133 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_113,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[120], 0)
        );

        Py_DECREF(tmp_called_instance_113);
        if (tmp_call_result_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_133);
    }
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_expression_value_258;
        PyObject *tmp_expression_value_259;
        PyObject *tmp_call_result_134;
        PyObject *tmp_args_element_value_206;
        PyObject *tmp_expression_value_260;
        CHECK_OBJECT(par_self);
        tmp_expression_value_259 = par_self;
        tmp_expression_value_258 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_259, mod_consts[115]);
        if (tmp_expression_value_258 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_258, mod_consts[36]);
        Py_DECREF(tmp_expression_value_258);
        if (tmp_called_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_260 = par_self;
        tmp_args_element_value_206 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_260, mod_consts[119]);
        if (tmp_args_element_value_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 204;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 204;
        tmp_call_result_134 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_76, tmp_args_element_value_206);
        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_args_element_value_206);
        if (tmp_call_result_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_134);
    }
    {
        PyObject *tmp_called_value_77;
        PyObject *tmp_expression_value_261;
        PyObject *tmp_expression_value_262;
        PyObject *tmp_call_result_135;
        PyObject *tmp_args_element_value_207;
        PyObject *tmp_expression_value_263;
        PyObject *tmp_args_element_value_208;
        PyObject *tmp_args_element_value_209;
        PyObject *tmp_args_element_value_210;
        PyObject *tmp_args_element_value_211;
        CHECK_OBJECT(par_self);
        tmp_expression_value_262 = par_self;
        tmp_expression_value_261 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_262, mod_consts[107]);
        if (tmp_expression_value_261 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_261, mod_consts[64]);
        Py_DECREF(tmp_expression_value_261);
        if (tmp_called_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_263 = par_self;
        tmp_args_element_value_207 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_263, mod_consts[115]);
        if (tmp_args_element_value_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);

            exception_lineno = 205;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_208 = mod_consts[15];
        tmp_args_element_value_209 = mod_consts[15];
        tmp_args_element_value_210 = mod_consts[16];
        tmp_args_element_value_211 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_207, tmp_args_element_value_208, tmp_args_element_value_209, tmp_args_element_value_210, tmp_args_element_value_211};
            tmp_call_result_135 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_77, call_args);
        }

        Py_DECREF(tmp_called_value_77);
        Py_DECREF(tmp_args_element_value_207);
        if (tmp_call_result_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_135);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_78;
        PyObject *tmp_expression_value_264;
        PyObject *tmp_args_element_value_212;
        PyObject *tmp_args_element_value_213;
        PyObject *tmp_args_element_value_214;
        PyObject *tmp_expression_value_265;
        PyObject *tmp_expression_value_266;
        PyObject *tmp_args_element_value_215;
        PyObject *tmp_expression_value_267;
        PyObject *tmp_expression_value_268;
        tmp_expression_value_264 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_264 == NULL)) {
            tmp_expression_value_264 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_264 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_264, mod_consts[8]);
        if (tmp_called_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_212 = mod_consts[10];
        tmp_args_element_value_213 = mod_consts[75];
        tmp_expression_value_266 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_266 == NULL)) {
            tmp_expression_value_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_266 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_265 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_266, mod_consts[11]);
        if (tmp_expression_value_265 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_214 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_265, mod_consts[13]);
        Py_DECREF(tmp_expression_value_265);
        if (tmp_args_element_value_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_268 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_268 == NULL)) {
            tmp_expression_value_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_268 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_args_element_value_214);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_267 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_268, mod_consts[11]);
        if (tmp_expression_value_267 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_args_element_value_214);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_215 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_267, mod_consts[12]);
        Py_DECREF(tmp_expression_value_267);
        if (tmp_args_element_value_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_args_element_value_214);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = {tmp_args_element_value_212, tmp_args_element_value_213, tmp_args_element_value_214, tmp_args_element_value_215};
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_78, call_args);
        }

        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_args_element_value_214);
        Py_DECREF(tmp_args_element_value_215);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem9 == NULL);
        var_spacerItem9 = tmp_assign_source_19;
    }
    {
        PyObject *tmp_called_instance_114;
        PyObject *tmp_expression_value_269;
        PyObject *tmp_call_result_136;
        PyObject *tmp_args_element_value_216;
        PyObject *tmp_args_element_value_217;
        PyObject *tmp_args_element_value_218;
        PyObject *tmp_args_element_value_219;
        PyObject *tmp_args_element_value_220;
        CHECK_OBJECT(par_self);
        tmp_expression_value_269 = par_self;
        tmp_called_instance_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_269, mod_consts[107]);
        if (tmp_called_instance_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem9);
        tmp_args_element_value_216 = var_spacerItem9;
        tmp_args_element_value_217 = mod_consts[16];
        tmp_args_element_value_218 = mod_consts[15];
        tmp_args_element_value_219 = mod_consts[16];
        tmp_args_element_value_220 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_value_216, tmp_args_element_value_217, tmp_args_element_value_218, tmp_args_element_value_219, tmp_args_element_value_220};
            tmp_call_result_136 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_114,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_114);
        if (tmp_call_result_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_136);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_79;
        PyObject *tmp_expression_value_270;
        PyObject *tmp_args_element_value_221;
        PyObject *tmp_args_element_value_222;
        PyObject *tmp_args_element_value_223;
        PyObject *tmp_expression_value_271;
        PyObject *tmp_expression_value_272;
        PyObject *tmp_args_element_value_224;
        PyObject *tmp_expression_value_273;
        PyObject *tmp_expression_value_274;
        tmp_expression_value_270 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_270 == NULL)) {
            tmp_expression_value_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_270 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_270, mod_consts[8]);
        if (tmp_called_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_221 = mod_consts[10];
        tmp_args_element_value_222 = mod_consts[75];
        tmp_expression_value_272 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_272 == NULL)) {
            tmp_expression_value_272 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_272 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);

            exception_lineno = 208;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_271 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_272, mod_consts[11]);
        if (tmp_expression_value_271 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);

            exception_lineno = 208;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_223 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_271, mod_consts[13]);
        Py_DECREF(tmp_expression_value_271);
        if (tmp_args_element_value_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);

            exception_lineno = 208;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_274 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_274 == NULL)) {
            tmp_expression_value_274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_274 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_args_element_value_223);

            exception_lineno = 208;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_273 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_274, mod_consts[11]);
        if (tmp_expression_value_273 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_args_element_value_223);

            exception_lineno = 208;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_224 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_273, mod_consts[12]);
        Py_DECREF(tmp_expression_value_273);
        if (tmp_args_element_value_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_args_element_value_223);

            exception_lineno = 208;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_value_221, tmp_args_element_value_222, tmp_args_element_value_223, tmp_args_element_value_224};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_79, call_args);
        }

        Py_DECREF(tmp_called_value_79);
        Py_DECREF(tmp_args_element_value_223);
        Py_DECREF(tmp_args_element_value_224);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem10 == NULL);
        var_spacerItem10 = tmp_assign_source_20;
    }
    {
        PyObject *tmp_called_instance_115;
        PyObject *tmp_expression_value_275;
        PyObject *tmp_call_result_137;
        PyObject *tmp_args_element_value_225;
        PyObject *tmp_args_element_value_226;
        PyObject *tmp_args_element_value_227;
        PyObject *tmp_args_element_value_228;
        PyObject *tmp_args_element_value_229;
        CHECK_OBJECT(par_self);
        tmp_expression_value_275 = par_self;
        tmp_called_instance_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_275, mod_consts[107]);
        if (tmp_called_instance_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem10);
        tmp_args_element_value_225 = var_spacerItem10;
        tmp_args_element_value_226 = mod_consts[41];
        tmp_args_element_value_227 = mod_consts[15];
        tmp_args_element_value_228 = mod_consts[16];
        tmp_args_element_value_229 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = {tmp_args_element_value_225, tmp_args_element_value_226, tmp_args_element_value_227, tmp_args_element_value_228, tmp_args_element_value_229};
            tmp_call_result_137 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_115,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_115);
        if (tmp_call_result_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_137);
    }
    {
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_276;
        PyObject *tmp_expression_value_277;
        PyObject *tmp_call_result_138;
        PyObject *tmp_args_element_value_230;
        PyObject *tmp_expression_value_278;
        PyObject *tmp_args_element_value_231;
        PyObject *tmp_args_element_value_232;
        PyObject *tmp_args_element_value_233;
        PyObject *tmp_args_element_value_234;
        CHECK_OBJECT(par_self);
        tmp_expression_value_277 = par_self;
        tmp_expression_value_276 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_277, mod_consts[45]);
        if (tmp_expression_value_276 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_276, mod_consts[36]);
        Py_DECREF(tmp_expression_value_276);
        if (tmp_called_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_278 = par_self;
        tmp_args_element_value_230 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_278, mod_consts[105]);
        if (tmp_args_element_value_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_231 = mod_consts[16];
        tmp_args_element_value_232 = mod_consts[16];
        tmp_args_element_value_233 = mod_consts[16];
        tmp_args_element_value_234 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = {tmp_args_element_value_230, tmp_args_element_value_231, tmp_args_element_value_232, tmp_args_element_value_233, tmp_args_element_value_234};
            tmp_call_result_138 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_80, call_args);
        }

        Py_DECREF(tmp_called_value_80);
        Py_DECREF(tmp_args_element_value_230);
        if (tmp_call_result_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_138);
    }
    {
        PyObject *tmp_assattr_value_38;
        PyObject *tmp_called_value_81;
        PyObject *tmp_args_element_value_235;
        PyObject *tmp_assattr_target_38;
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_HomePage);
        tmp_args_element_value_235 = par_HomePage;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 211;
        tmp_assattr_value_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_81, tmp_args_element_value_235);
        if (tmp_assattr_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_38 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_38, mod_consts[121], tmp_assattr_value_38);
        Py_DECREF(tmp_assattr_value_38);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_116;
        PyObject *tmp_expression_value_279;
        PyObject *tmp_call_result_139;
        CHECK_OBJECT(par_self);
        tmp_expression_value_279 = par_self;
        tmp_called_instance_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_279, mod_consts[121]);
        if (tmp_called_instance_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 212;
        tmp_call_result_139 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_116,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[122], 0)
        );

        Py_DECREF(tmp_called_instance_116);
        if (tmp_call_result_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_139);
    }
    {
        PyObject *tmp_assattr_value_39;
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_280;
        PyObject *tmp_args_element_value_236;
        PyObject *tmp_expression_value_281;
        PyObject *tmp_assattr_target_39;
        tmp_expression_value_280 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_280 == NULL)) {
            tmp_expression_value_280 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_280 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_280, mod_consts[5]);
        if (tmp_called_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_281 = par_self;
        tmp_args_element_value_236 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_281, mod_consts[121]);
        if (tmp_args_element_value_236 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 213;
        tmp_assattr_value_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_82, tmp_args_element_value_236);
        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_args_element_value_236);
        if (tmp_assattr_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_39 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_39, mod_consts[123], tmp_assattr_value_39);
        Py_DECREF(tmp_assattr_value_39);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_117;
        PyObject *tmp_expression_value_282;
        PyObject *tmp_call_result_140;
        CHECK_OBJECT(par_self);
        tmp_expression_value_282 = par_self;
        tmp_called_instance_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_282, mod_consts[123]);
        if (tmp_called_instance_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 214;
        tmp_call_result_140 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_117,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[124], 0)
        );

        Py_DECREF(tmp_called_instance_117);
        if (tmp_call_result_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_140);
    }
    {
        PyObject *tmp_assattr_value_40;
        PyObject *tmp_called_instance_118;
        PyObject *tmp_assattr_target_40;
        tmp_called_instance_118 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_118 == NULL)) {
            tmp_called_instance_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 215;
        tmp_assattr_value_40 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_118, mod_consts[42]);
        if (tmp_assattr_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_40 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_40, mod_consts[125], tmp_assattr_value_40);
        Py_DECREF(tmp_assattr_value_40);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_119;
        PyObject *tmp_expression_value_283;
        PyObject *tmp_call_result_141;
        CHECK_OBJECT(par_self);
        tmp_expression_value_283 = par_self;
        tmp_called_instance_119 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_283, mod_consts[125]);
        if (tmp_called_instance_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 216;
        tmp_call_result_141 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_119,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[126], 0)
        );

        Py_DECREF(tmp_called_instance_119);
        if (tmp_call_result_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_141);
    }
    {
        PyObject *tmp_assattr_value_41;
        PyObject *tmp_called_value_83;
        PyObject *tmp_args_element_value_237;
        PyObject *tmp_expression_value_284;
        PyObject *tmp_assattr_target_41;
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_284 = par_self;
        tmp_args_element_value_237 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_284, mod_consts[121]);
        if (tmp_args_element_value_237 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 217;
        tmp_assattr_value_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_83, tmp_args_element_value_237);
        Py_DECREF(tmp_args_element_value_237);
        if (tmp_assattr_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_41 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_41, mod_consts[127], tmp_assattr_value_41);
        Py_DECREF(tmp_assattr_value_41);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_120;
        tmp_called_instance_120 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_120 == NULL)) {
            tmp_called_instance_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_instance_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 218;
        tmp_assign_source_21 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_120, mod_consts[21]);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_21;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_121;
        PyObject *tmp_call_result_142;
        CHECK_OBJECT(var_font);
        tmp_called_instance_121 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 219;
        tmp_call_result_142 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_121,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_142);
    }
    {
        PyObject *tmp_called_instance_122;
        PyObject *tmp_call_result_143;
        CHECK_OBJECT(var_font);
        tmp_called_instance_122 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 220;
        tmp_call_result_143 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_122,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        if (tmp_call_result_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_143);
    }
    {
        PyObject *tmp_called_instance_123;
        PyObject *tmp_call_result_144;
        CHECK_OBJECT(var_font);
        tmp_called_instance_123 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 221;
        tmp_call_result_144 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_123,
            mod_consts[26],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_call_result_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_144);
    }
    {
        PyObject *tmp_called_instance_124;
        PyObject *tmp_call_result_145;
        CHECK_OBJECT(var_font);
        tmp_called_instance_124 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 222;
        tmp_call_result_145 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_124,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_call_result_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_145);
    }
    {
        PyObject *tmp_called_instance_125;
        PyObject *tmp_expression_value_285;
        PyObject *tmp_call_result_146;
        PyObject *tmp_args_element_value_238;
        CHECK_OBJECT(par_self);
        tmp_expression_value_285 = par_self;
        tmp_called_instance_125 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_285, mod_consts[127]);
        if (tmp_called_instance_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_font);
        tmp_args_element_value_238 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 223;
        tmp_call_result_146 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_125, mod_consts[30], tmp_args_element_value_238);
        Py_DECREF(tmp_called_instance_125);
        if (tmp_call_result_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_146);
    }
    {
        PyObject *tmp_called_value_84;
        PyObject *tmp_expression_value_286;
        PyObject *tmp_expression_value_287;
        PyObject *tmp_call_result_147;
        PyObject *tmp_args_element_value_239;
        PyObject *tmp_expression_value_288;
        PyObject *tmp_expression_value_289;
        CHECK_OBJECT(par_self);
        tmp_expression_value_287 = par_self;
        tmp_expression_value_286 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_287, mod_consts[127]);
        if (tmp_expression_value_286 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_286, mod_consts[70]);
        Py_DECREF(tmp_expression_value_286);
        if (tmp_called_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_289 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_289 == NULL)) {
            tmp_expression_value_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_289 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_288 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_289, mod_consts[33]);
        if (tmp_expression_value_288 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_239 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_288, mod_consts[71]);
        Py_DECREF(tmp_expression_value_288);
        if (tmp_args_element_value_239 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 224;
        tmp_call_result_147 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_84, tmp_args_element_value_239);
        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_args_element_value_239);
        if (tmp_call_result_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_147);
    }
    {
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_290;
        PyObject *tmp_expression_value_291;
        PyObject *tmp_call_result_148;
        PyObject *tmp_args_element_value_240;
        PyObject *tmp_expression_value_292;
        PyObject *tmp_expression_value_293;
        CHECK_OBJECT(par_self);
        tmp_expression_value_291 = par_self;
        tmp_expression_value_290 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_291, mod_consts[127]);
        if (tmp_expression_value_290 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_290, mod_consts[31]);
        Py_DECREF(tmp_expression_value_290);
        if (tmp_called_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_293 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_293 == NULL)) {
            tmp_expression_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_293 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);

            exception_lineno = 225;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_292 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_293, mod_consts[33]);
        if (tmp_expression_value_292 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);

            exception_lineno = 225;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_240 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_292, mod_consts[34]);
        Py_DECREF(tmp_expression_value_292);
        if (tmp_args_element_value_240 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_85);

            exception_lineno = 225;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 225;
        tmp_call_result_148 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_85, tmp_args_element_value_240);
        Py_DECREF(tmp_called_value_85);
        Py_DECREF(tmp_args_element_value_240);
        if (tmp_call_result_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_148);
    }
    {
        PyObject *tmp_called_instance_126;
        PyObject *tmp_expression_value_294;
        PyObject *tmp_call_result_149;
        CHECK_OBJECT(par_self);
        tmp_expression_value_294 = par_self;
        tmp_called_instance_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_294, mod_consts[127]);
        if (tmp_called_instance_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 226;
        tmp_call_result_149 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_126,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[128], 0)
        );

        Py_DECREF(tmp_called_instance_126);
        if (tmp_call_result_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_149);
    }
    {
        PyObject *tmp_called_value_86;
        PyObject *tmp_expression_value_295;
        PyObject *tmp_expression_value_296;
        PyObject *tmp_call_result_150;
        PyObject *tmp_args_element_value_241;
        PyObject *tmp_expression_value_297;
        CHECK_OBJECT(par_self);
        tmp_expression_value_296 = par_self;
        tmp_expression_value_295 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_296, mod_consts[125]);
        if (tmp_expression_value_295 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_86 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_295, mod_consts[36]);
        Py_DECREF(tmp_expression_value_295);
        if (tmp_called_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_297 = par_self;
        tmp_args_element_value_241 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_297, mod_consts[127]);
        if (tmp_args_element_value_241 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 227;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 227;
        tmp_call_result_150 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_86, tmp_args_element_value_241);
        Py_DECREF(tmp_called_value_86);
        Py_DECREF(tmp_args_element_value_241);
        if (tmp_call_result_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_150);
    }
    {
        PyObject *tmp_assattr_value_42;
        PyObject *tmp_called_value_87;
        PyObject *tmp_args_element_value_242;
        PyObject *tmp_expression_value_298;
        PyObject *tmp_assattr_target_42;
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_298 = par_self;
        tmp_args_element_value_242 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_298, mod_consts[121]);
        if (tmp_args_element_value_242 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 228;
        tmp_assattr_value_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_87, tmp_args_element_value_242);
        Py_DECREF(tmp_args_element_value_242);
        if (tmp_assattr_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_42 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_42, mod_consts[129], tmp_assattr_value_42);
        Py_DECREF(tmp_assattr_value_42);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_88;
        PyObject *tmp_expression_value_299;
        PyObject *tmp_expression_value_300;
        PyObject *tmp_call_result_151;
        PyObject *tmp_args_element_value_243;
        PyObject *tmp_expression_value_301;
        PyObject *tmp_expression_value_302;
        CHECK_OBJECT(par_self);
        tmp_expression_value_300 = par_self;
        tmp_expression_value_299 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_300, mod_consts[129]);
        if (tmp_expression_value_299 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_299, mod_consts[31]);
        Py_DECREF(tmp_expression_value_299);
        if (tmp_called_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_302 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_302 == NULL)) {
            tmp_expression_value_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_302 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_301 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_302, mod_consts[33]);
        if (tmp_expression_value_301 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_243 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_301, mod_consts[34]);
        Py_DECREF(tmp_expression_value_301);
        if (tmp_args_element_value_243 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 229;
        tmp_call_result_151 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_88, tmp_args_element_value_243);
        Py_DECREF(tmp_called_value_88);
        Py_DECREF(tmp_args_element_value_243);
        if (tmp_call_result_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_151);
    }
    {
        PyObject *tmp_called_instance_127;
        PyObject *tmp_expression_value_303;
        PyObject *tmp_call_result_152;
        CHECK_OBJECT(par_self);
        tmp_expression_value_303 = par_self;
        tmp_called_instance_127 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_303, mod_consts[129]);
        if (tmp_called_instance_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 230;
        tmp_call_result_152 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_127,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[130], 0)
        );

        Py_DECREF(tmp_called_instance_127);
        if (tmp_call_result_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_152);
    }
    {
        PyObject *tmp_called_value_89;
        PyObject *tmp_expression_value_304;
        PyObject *tmp_expression_value_305;
        PyObject *tmp_call_result_153;
        PyObject *tmp_args_element_value_244;
        PyObject *tmp_expression_value_306;
        CHECK_OBJECT(par_self);
        tmp_expression_value_305 = par_self;
        tmp_expression_value_304 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_305, mod_consts[125]);
        if (tmp_expression_value_304 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_304, mod_consts[36]);
        Py_DECREF(tmp_expression_value_304);
        if (tmp_called_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_306 = par_self;
        tmp_args_element_value_244 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_306, mod_consts[129]);
        if (tmp_args_element_value_244 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);

            exception_lineno = 231;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 231;
        tmp_call_result_153 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_89, tmp_args_element_value_244);
        Py_DECREF(tmp_called_value_89);
        Py_DECREF(tmp_args_element_value_244);
        if (tmp_call_result_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_153);
    }
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_expression_value_307;
        PyObject *tmp_expression_value_308;
        PyObject *tmp_call_result_154;
        PyObject *tmp_args_element_value_245;
        PyObject *tmp_expression_value_309;
        PyObject *tmp_args_element_value_246;
        PyObject *tmp_args_element_value_247;
        PyObject *tmp_args_element_value_248;
        PyObject *tmp_args_element_value_249;
        CHECK_OBJECT(par_self);
        tmp_expression_value_308 = par_self;
        tmp_expression_value_307 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_308, mod_consts[123]);
        if (tmp_expression_value_307 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_307, mod_consts[64]);
        Py_DECREF(tmp_expression_value_307);
        if (tmp_called_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_309 = par_self;
        tmp_args_element_value_245 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_309, mod_consts[125]);
        if (tmp_args_element_value_245 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_246 = mod_consts[17];
        tmp_args_element_value_247 = mod_consts[15];
        tmp_args_element_value_248 = mod_consts[16];
        tmp_args_element_value_249 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = {tmp_args_element_value_245, tmp_args_element_value_246, tmp_args_element_value_247, tmp_args_element_value_248, tmp_args_element_value_249};
            tmp_call_result_154 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_90, call_args);
        }

        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_args_element_value_245);
        if (tmp_call_result_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_154);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_91;
        PyObject *tmp_expression_value_310;
        PyObject *tmp_args_element_value_250;
        PyObject *tmp_args_element_value_251;
        PyObject *tmp_args_element_value_252;
        PyObject *tmp_expression_value_311;
        PyObject *tmp_expression_value_312;
        PyObject *tmp_args_element_value_253;
        PyObject *tmp_expression_value_313;
        PyObject *tmp_expression_value_314;
        tmp_expression_value_310 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_310 == NULL)) {
            tmp_expression_value_310 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_310 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_310, mod_consts[8]);
        if (tmp_called_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_250 = mod_consts[10];
        tmp_args_element_value_251 = mod_consts[75];
        tmp_expression_value_312 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_312 == NULL)) {
            tmp_expression_value_312 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_312 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_311 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_312, mod_consts[11]);
        if (tmp_expression_value_311 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_252 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_311, mod_consts[13]);
        Py_DECREF(tmp_expression_value_311);
        if (tmp_args_element_value_252 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_314 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_314 == NULL)) {
            tmp_expression_value_314 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_314 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_args_element_value_252);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_313 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_314, mod_consts[11]);
        if (tmp_expression_value_313 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_args_element_value_252);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_253 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_313, mod_consts[12]);
        Py_DECREF(tmp_expression_value_313);
        if (tmp_args_element_value_253 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_args_element_value_252);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_value_250, tmp_args_element_value_251, tmp_args_element_value_252, tmp_args_element_value_253};
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_91, call_args);
        }

        Py_DECREF(tmp_called_value_91);
        Py_DECREF(tmp_args_element_value_252);
        Py_DECREF(tmp_args_element_value_253);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem11 == NULL);
        var_spacerItem11 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_called_instance_128;
        PyObject *tmp_expression_value_315;
        PyObject *tmp_call_result_155;
        PyObject *tmp_args_element_value_254;
        PyObject *tmp_args_element_value_255;
        PyObject *tmp_args_element_value_256;
        PyObject *tmp_args_element_value_257;
        PyObject *tmp_args_element_value_258;
        CHECK_OBJECT(par_self);
        tmp_expression_value_315 = par_self;
        tmp_called_instance_128 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_315, mod_consts[123]);
        if (tmp_called_instance_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem11);
        tmp_args_element_value_254 = var_spacerItem11;
        tmp_args_element_value_255 = mod_consts[16];
        tmp_args_element_value_256 = mod_consts[15];
        tmp_args_element_value_257 = mod_consts[16];
        tmp_args_element_value_258 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = {tmp_args_element_value_254, tmp_args_element_value_255, tmp_args_element_value_256, tmp_args_element_value_257, tmp_args_element_value_258};
            tmp_call_result_155 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_128,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_128);
        if (tmp_call_result_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_155);
    }
    {
        PyObject *tmp_assattr_value_43;
        PyObject *tmp_called_instance_129;
        PyObject *tmp_assattr_target_43;
        tmp_called_instance_129 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_129 == NULL)) {
            tmp_called_instance_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 235;
        tmp_assattr_value_43 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_129, mod_consts[52]);
        if (tmp_assattr_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_43 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_43, mod_consts[131], tmp_assattr_value_43);
        Py_DECREF(tmp_assattr_value_43);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_130;
        PyObject *tmp_expression_value_316;
        PyObject *tmp_call_result_156;
        CHECK_OBJECT(par_self);
        tmp_expression_value_316 = par_self;
        tmp_called_instance_130 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_316, mod_consts[131]);
        if (tmp_called_instance_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 236;
        tmp_call_result_156 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_130,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[132], 0)
        );

        Py_DECREF(tmp_called_instance_130);
        if (tmp_call_result_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_156);
    }
    {
        PyObject *tmp_assattr_value_44;
        PyObject *tmp_called_value_92;
        PyObject *tmp_args_element_value_259;
        PyObject *tmp_expression_value_317;
        PyObject *tmp_assattr_target_44;
        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_92 == NULL)) {
            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_317 = par_self;
        tmp_args_element_value_259 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_317, mod_consts[121]);
        if (tmp_args_element_value_259 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 237;
        tmp_assattr_value_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_92, tmp_args_element_value_259);
        Py_DECREF(tmp_args_element_value_259);
        if (tmp_assattr_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_44 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_44, mod_consts[133], tmp_assattr_value_44);
        Py_DECREF(tmp_assattr_value_44);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_131;
        tmp_called_instance_131 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_131 == NULL)) {
            tmp_called_instance_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_instance_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 238;
        tmp_assign_source_23 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_131, mod_consts[21]);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_132;
        PyObject *tmp_call_result_157;
        CHECK_OBJECT(var_font);
        tmp_called_instance_132 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 239;
        tmp_call_result_157 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_132,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_157);
    }
    {
        PyObject *tmp_called_instance_133;
        PyObject *tmp_call_result_158;
        CHECK_OBJECT(var_font);
        tmp_called_instance_133 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 240;
        tmp_call_result_158 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_133,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[58], 0)
        );

        if (tmp_call_result_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_158);
    }
    {
        PyObject *tmp_called_instance_134;
        PyObject *tmp_call_result_159;
        CHECK_OBJECT(var_font);
        tmp_called_instance_134 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 241;
        tmp_call_result_159 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_134,
            mod_consts[26],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_call_result_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_159);
    }
    {
        PyObject *tmp_called_instance_135;
        PyObject *tmp_call_result_160;
        CHECK_OBJECT(var_font);
        tmp_called_instance_135 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 242;
        tmp_call_result_160 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_135,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_call_result_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_160);
    }
    {
        PyObject *tmp_called_instance_136;
        PyObject *tmp_expression_value_318;
        PyObject *tmp_call_result_161;
        PyObject *tmp_args_element_value_260;
        CHECK_OBJECT(par_self);
        tmp_expression_value_318 = par_self;
        tmp_called_instance_136 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_318, mod_consts[133]);
        if (tmp_called_instance_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_font);
        tmp_args_element_value_260 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 243;
        tmp_call_result_161 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_136, mod_consts[30], tmp_args_element_value_260);
        Py_DECREF(tmp_called_instance_136);
        if (tmp_call_result_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_161);
    }
    {
        PyObject *tmp_called_instance_137;
        PyObject *tmp_expression_value_319;
        PyObject *tmp_call_result_162;
        CHECK_OBJECT(par_self);
        tmp_expression_value_319 = par_self;
        tmp_called_instance_137 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_319, mod_consts[133]);
        if (tmp_called_instance_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 244;
        tmp_call_result_162 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_137,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[134], 0)
        );

        Py_DECREF(tmp_called_instance_137);
        if (tmp_call_result_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_162);
    }
    {
        PyObject *tmp_called_value_93;
        PyObject *tmp_expression_value_320;
        PyObject *tmp_expression_value_321;
        PyObject *tmp_call_result_163;
        PyObject *tmp_args_element_value_261;
        PyObject *tmp_expression_value_322;
        CHECK_OBJECT(par_self);
        tmp_expression_value_321 = par_self;
        tmp_expression_value_320 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_321, mod_consts[131]);
        if (tmp_expression_value_320 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_320, mod_consts[36]);
        Py_DECREF(tmp_expression_value_320);
        if (tmp_called_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_322 = par_self;
        tmp_args_element_value_261 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_322, mod_consts[133]);
        if (tmp_args_element_value_261 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_93);

            exception_lineno = 245;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 245;
        tmp_call_result_163 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_93, tmp_args_element_value_261);
        Py_DECREF(tmp_called_value_93);
        Py_DECREF(tmp_args_element_value_261);
        if (tmp_call_result_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_163);
    }
    {
        PyObject *tmp_assattr_value_45;
        PyObject *tmp_called_value_94;
        PyObject *tmp_args_element_value_262;
        PyObject *tmp_expression_value_323;
        PyObject *tmp_assattr_target_45;
        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_94 == NULL)) {
            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_323 = par_self;
        tmp_args_element_value_262 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_323, mod_consts[121]);
        if (tmp_args_element_value_262 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 246;
        tmp_assattr_value_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_94, tmp_args_element_value_262);
        Py_DECREF(tmp_args_element_value_262);
        if (tmp_assattr_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_45 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_45, mod_consts[135], tmp_assattr_value_45);
        Py_DECREF(tmp_assattr_value_45);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_138;
        PyObject *tmp_expression_value_324;
        PyObject *tmp_call_result_164;
        CHECK_OBJECT(par_self);
        tmp_expression_value_324 = par_self;
        tmp_called_instance_138 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_324, mod_consts[135]);
        if (tmp_called_instance_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 247;
        tmp_call_result_164 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_138,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[136], 0)
        );

        Py_DECREF(tmp_called_instance_138);
        if (tmp_call_result_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_164);
    }
    {
        PyObject *tmp_called_value_95;
        PyObject *tmp_expression_value_325;
        PyObject *tmp_expression_value_326;
        PyObject *tmp_call_result_165;
        PyObject *tmp_args_element_value_263;
        PyObject *tmp_expression_value_327;
        CHECK_OBJECT(par_self);
        tmp_expression_value_326 = par_self;
        tmp_expression_value_325 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_326, mod_consts[131]);
        if (tmp_expression_value_325 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_325, mod_consts[36]);
        Py_DECREF(tmp_expression_value_325);
        if (tmp_called_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_327 = par_self;
        tmp_args_element_value_263 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_327, mod_consts[135]);
        if (tmp_args_element_value_263 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_95);

            exception_lineno = 248;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 248;
        tmp_call_result_165 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_95, tmp_args_element_value_263);
        Py_DECREF(tmp_called_value_95);
        Py_DECREF(tmp_args_element_value_263);
        if (tmp_call_result_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_165);
    }
    {
        PyObject *tmp_called_value_96;
        PyObject *tmp_expression_value_328;
        PyObject *tmp_expression_value_329;
        PyObject *tmp_call_result_166;
        PyObject *tmp_args_element_value_264;
        PyObject *tmp_expression_value_330;
        PyObject *tmp_args_element_value_265;
        PyObject *tmp_args_element_value_266;
        PyObject *tmp_args_element_value_267;
        PyObject *tmp_args_element_value_268;
        CHECK_OBJECT(par_self);
        tmp_expression_value_329 = par_self;
        tmp_expression_value_328 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_329, mod_consts[123]);
        if (tmp_expression_value_328 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_96 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_328, mod_consts[64]);
        Py_DECREF(tmp_expression_value_328);
        if (tmp_called_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_330 = par_self;
        tmp_args_element_value_264 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_330, mod_consts[131]);
        if (tmp_args_element_value_264 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_265 = mod_consts[15];
        tmp_args_element_value_266 = mod_consts[15];
        tmp_args_element_value_267 = mod_consts[16];
        tmp_args_element_value_268 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_args_element_value_264, tmp_args_element_value_265, tmp_args_element_value_266, tmp_args_element_value_267, tmp_args_element_value_268};
            tmp_call_result_166 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_96, call_args);
        }

        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_args_element_value_264);
        if (tmp_call_result_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_166);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_97;
        PyObject *tmp_expression_value_331;
        PyObject *tmp_args_element_value_269;
        PyObject *tmp_args_element_value_270;
        PyObject *tmp_args_element_value_271;
        PyObject *tmp_expression_value_332;
        PyObject *tmp_expression_value_333;
        PyObject *tmp_args_element_value_272;
        PyObject *tmp_expression_value_334;
        PyObject *tmp_expression_value_335;
        tmp_expression_value_331 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_331 == NULL)) {
            tmp_expression_value_331 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_331 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_331, mod_consts[8]);
        if (tmp_called_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_269 = mod_consts[10];
        tmp_args_element_value_270 = mod_consts[75];
        tmp_expression_value_333 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_333 == NULL)) {
            tmp_expression_value_333 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_333 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_332 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_333, mod_consts[11]);
        if (tmp_expression_value_332 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_271 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_332, mod_consts[13]);
        Py_DECREF(tmp_expression_value_332);
        if (tmp_args_element_value_271 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);

            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_335 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_335 == NULL)) {
            tmp_expression_value_335 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_335 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_args_element_value_271);

            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_334 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_335, mod_consts[11]);
        if (tmp_expression_value_334 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_args_element_value_271);

            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_272 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_334, mod_consts[12]);
        Py_DECREF(tmp_expression_value_334);
        if (tmp_args_element_value_272 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_args_element_value_271);

            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = {tmp_args_element_value_269, tmp_args_element_value_270, tmp_args_element_value_271, tmp_args_element_value_272};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_97, call_args);
        }

        Py_DECREF(tmp_called_value_97);
        Py_DECREF(tmp_args_element_value_271);
        Py_DECREF(tmp_args_element_value_272);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem12 == NULL);
        var_spacerItem12 = tmp_assign_source_24;
    }
    {
        PyObject *tmp_called_instance_139;
        PyObject *tmp_expression_value_336;
        PyObject *tmp_call_result_167;
        PyObject *tmp_args_element_value_273;
        PyObject *tmp_args_element_value_274;
        PyObject *tmp_args_element_value_275;
        PyObject *tmp_args_element_value_276;
        PyObject *tmp_args_element_value_277;
        CHECK_OBJECT(par_self);
        tmp_expression_value_336 = par_self;
        tmp_called_instance_139 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_336, mod_consts[123]);
        if (tmp_called_instance_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem12);
        tmp_args_element_value_273 = var_spacerItem12;
        tmp_args_element_value_274 = mod_consts[41];
        tmp_args_element_value_275 = mod_consts[15];
        tmp_args_element_value_276 = mod_consts[16];
        tmp_args_element_value_277 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = {tmp_args_element_value_273, tmp_args_element_value_274, tmp_args_element_value_275, tmp_args_element_value_276, tmp_args_element_value_277};
            tmp_call_result_167 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_139,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_139);
        if (tmp_call_result_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_167);
    }
    {
        PyObject *tmp_called_value_98;
        PyObject *tmp_expression_value_337;
        PyObject *tmp_expression_value_338;
        PyObject *tmp_call_result_168;
        PyObject *tmp_args_element_value_278;
        PyObject *tmp_expression_value_339;
        PyObject *tmp_args_element_value_279;
        PyObject *tmp_args_element_value_280;
        PyObject *tmp_args_element_value_281;
        PyObject *tmp_args_element_value_282;
        CHECK_OBJECT(par_self);
        tmp_expression_value_338 = par_self;
        tmp_expression_value_337 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_338, mod_consts[45]);
        if (tmp_expression_value_337 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_337, mod_consts[36]);
        Py_DECREF(tmp_expression_value_337);
        if (tmp_called_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_339 = par_self;
        tmp_args_element_value_278 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_339, mod_consts[121]);
        if (tmp_args_element_value_278 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_279 = mod_consts[17];
        tmp_args_element_value_280 = mod_consts[15];
        tmp_args_element_value_281 = mod_consts[16];
        tmp_args_element_value_282 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = {tmp_args_element_value_278, tmp_args_element_value_279, tmp_args_element_value_280, tmp_args_element_value_281, tmp_args_element_value_282};
            tmp_call_result_168 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_98, call_args);
        }

        Py_DECREF(tmp_called_value_98);
        Py_DECREF(tmp_args_element_value_278);
        if (tmp_call_result_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_168);
    }
    {
        PyObject *tmp_assattr_value_46;
        PyObject *tmp_called_value_99;
        PyObject *tmp_args_element_value_283;
        PyObject *tmp_assattr_target_46;
        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_99 == NULL)) {
            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_HomePage);
        tmp_args_element_value_283 = par_HomePage;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 253;
        tmp_assattr_value_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_99, tmp_args_element_value_283);
        if (tmp_assattr_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_46 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_46, mod_consts[137], tmp_assattr_value_46);
        Py_DECREF(tmp_assattr_value_46);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_140;
        PyObject *tmp_expression_value_340;
        PyObject *tmp_call_result_169;
        CHECK_OBJECT(par_self);
        tmp_expression_value_340 = par_self;
        tmp_called_instance_140 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_340, mod_consts[137]);
        if (tmp_called_instance_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 254;
        tmp_call_result_169 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_140,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[138], 0)
        );

        Py_DECREF(tmp_called_instance_140);
        if (tmp_call_result_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_169);
    }
    {
        PyObject *tmp_assattr_value_47;
        PyObject *tmp_called_value_100;
        PyObject *tmp_expression_value_341;
        PyObject *tmp_args_element_value_284;
        PyObject *tmp_expression_value_342;
        PyObject *tmp_assattr_target_47;
        tmp_expression_value_341 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_341 == NULL)) {
            tmp_expression_value_341 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_341 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_341, mod_consts[5]);
        if (tmp_called_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_342 = par_self;
        tmp_args_element_value_284 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_342, mod_consts[137]);
        if (tmp_args_element_value_284 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 255;
        tmp_assattr_value_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_100, tmp_args_element_value_284);
        Py_DECREF(tmp_called_value_100);
        Py_DECREF(tmp_args_element_value_284);
        if (tmp_assattr_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_47 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_47, mod_consts[139], tmp_assattr_value_47);
        Py_DECREF(tmp_assattr_value_47);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_141;
        PyObject *tmp_expression_value_343;
        PyObject *tmp_call_result_170;
        CHECK_OBJECT(par_self);
        tmp_expression_value_343 = par_self;
        tmp_called_instance_141 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_343, mod_consts[139]);
        if (tmp_called_instance_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 256;
        tmp_call_result_170 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_141,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[140], 0)
        );

        Py_DECREF(tmp_called_instance_141);
        if (tmp_call_result_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_170);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_101;
        PyObject *tmp_expression_value_344;
        PyObject *tmp_args_element_value_285;
        PyObject *tmp_args_element_value_286;
        PyObject *tmp_args_element_value_287;
        PyObject *tmp_expression_value_345;
        PyObject *tmp_expression_value_346;
        PyObject *tmp_args_element_value_288;
        PyObject *tmp_expression_value_347;
        PyObject *tmp_expression_value_348;
        tmp_expression_value_344 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_344 == NULL)) {
            tmp_expression_value_344 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_344 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_101 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_344, mod_consts[8]);
        if (tmp_called_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_285 = mod_consts[10];
        tmp_args_element_value_286 = mod_consts[75];
        tmp_expression_value_346 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_346 == NULL)) {
            tmp_expression_value_346 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_346 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);

            exception_lineno = 257;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_345 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_346, mod_consts[11]);
        if (tmp_expression_value_345 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);

            exception_lineno = 257;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_287 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_345, mod_consts[13]);
        Py_DECREF(tmp_expression_value_345);
        if (tmp_args_element_value_287 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);

            exception_lineno = 257;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_348 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_348 == NULL)) {
            tmp_expression_value_348 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_348 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_args_element_value_287);

            exception_lineno = 257;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_347 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_348, mod_consts[11]);
        if (tmp_expression_value_347 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_args_element_value_287);

            exception_lineno = 257;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_288 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_347, mod_consts[12]);
        Py_DECREF(tmp_expression_value_347);
        if (tmp_args_element_value_288 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_args_element_value_287);

            exception_lineno = 257;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 257;
        {
            PyObject *call_args[] = {tmp_args_element_value_285, tmp_args_element_value_286, tmp_args_element_value_287, tmp_args_element_value_288};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_101, call_args);
        }

        Py_DECREF(tmp_called_value_101);
        Py_DECREF(tmp_args_element_value_287);
        Py_DECREF(tmp_args_element_value_288);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem13 == NULL);
        var_spacerItem13 = tmp_assign_source_25;
    }
    {
        PyObject *tmp_called_instance_142;
        PyObject *tmp_expression_value_349;
        PyObject *tmp_call_result_171;
        PyObject *tmp_args_element_value_289;
        PyObject *tmp_args_element_value_290;
        PyObject *tmp_args_element_value_291;
        PyObject *tmp_args_element_value_292;
        PyObject *tmp_args_element_value_293;
        CHECK_OBJECT(par_self);
        tmp_expression_value_349 = par_self;
        tmp_called_instance_142 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_349, mod_consts[139]);
        if (tmp_called_instance_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem13);
        tmp_args_element_value_289 = var_spacerItem13;
        tmp_args_element_value_290 = mod_consts[16];
        tmp_args_element_value_291 = mod_consts[15];
        tmp_args_element_value_292 = mod_consts[16];
        tmp_args_element_value_293 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_value_289, tmp_args_element_value_290, tmp_args_element_value_291, tmp_args_element_value_292, tmp_args_element_value_293};
            tmp_call_result_171 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_142,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_142);
        if (tmp_call_result_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_171);
    }
    {
        PyObject *tmp_assattr_value_48;
        PyObject *tmp_called_instance_143;
        PyObject *tmp_assattr_target_48;
        tmp_called_instance_143 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_143 == NULL)) {
            tmp_called_instance_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 259;
        tmp_assattr_value_48 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_143, mod_consts[42]);
        if (tmp_assattr_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_48 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_48, mod_consts[141], tmp_assattr_value_48);
        Py_DECREF(tmp_assattr_value_48);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_144;
        PyObject *tmp_expression_value_350;
        PyObject *tmp_call_result_172;
        CHECK_OBJECT(par_self);
        tmp_expression_value_350 = par_self;
        tmp_called_instance_144 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_350, mod_consts[141]);
        if (tmp_called_instance_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 260;
        tmp_call_result_172 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_144,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[142], 0)
        );

        Py_DECREF(tmp_called_instance_144);
        if (tmp_call_result_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_172);
    }
    {
        PyObject *tmp_assattr_value_49;
        PyObject *tmp_called_value_102;
        PyObject *tmp_args_element_value_294;
        PyObject *tmp_expression_value_351;
        PyObject *tmp_assattr_target_49;
        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_102 == NULL)) {
            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_351 = par_self;
        tmp_args_element_value_294 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_351, mod_consts[137]);
        if (tmp_args_element_value_294 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 261;
        tmp_assattr_value_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_102, tmp_args_element_value_294);
        Py_DECREF(tmp_args_element_value_294);
        if (tmp_assattr_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_49 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_49, mod_consts[143], tmp_assattr_value_49);
        Py_DECREF(tmp_assattr_value_49);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_145;
        tmp_called_instance_145 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_145 == NULL)) {
            tmp_called_instance_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_instance_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 262;
        tmp_assign_source_26 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_145, mod_consts[21]);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_26;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_146;
        PyObject *tmp_call_result_173;
        CHECK_OBJECT(var_font);
        tmp_called_instance_146 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 263;
        tmp_call_result_173 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_146,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_173);
    }
    {
        PyObject *tmp_called_instance_147;
        PyObject *tmp_call_result_174;
        CHECK_OBJECT(var_font);
        tmp_called_instance_147 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 264;
        tmp_call_result_174 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_147,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        if (tmp_call_result_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_174);
    }
    {
        PyObject *tmp_called_instance_148;
        PyObject *tmp_call_result_175;
        CHECK_OBJECT(var_font);
        tmp_called_instance_148 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 265;
        tmp_call_result_175 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_148,
            mod_consts[26],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_call_result_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_175);
    }
    {
        PyObject *tmp_called_instance_149;
        PyObject *tmp_call_result_176;
        CHECK_OBJECT(var_font);
        tmp_called_instance_149 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 266;
        tmp_call_result_176 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_149,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_call_result_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_176);
    }
    {
        PyObject *tmp_called_instance_150;
        PyObject *tmp_expression_value_352;
        PyObject *tmp_call_result_177;
        PyObject *tmp_args_element_value_295;
        CHECK_OBJECT(par_self);
        tmp_expression_value_352 = par_self;
        tmp_called_instance_150 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_352, mod_consts[143]);
        if (tmp_called_instance_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_font);
        tmp_args_element_value_295 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 267;
        tmp_call_result_177 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_150, mod_consts[30], tmp_args_element_value_295);
        Py_DECREF(tmp_called_instance_150);
        if (tmp_call_result_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_177);
    }
    {
        PyObject *tmp_called_value_103;
        PyObject *tmp_expression_value_353;
        PyObject *tmp_expression_value_354;
        PyObject *tmp_call_result_178;
        PyObject *tmp_args_element_value_296;
        PyObject *tmp_expression_value_355;
        PyObject *tmp_expression_value_356;
        CHECK_OBJECT(par_self);
        tmp_expression_value_354 = par_self;
        tmp_expression_value_353 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_354, mod_consts[143]);
        if (tmp_expression_value_353 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_103 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_353, mod_consts[70]);
        Py_DECREF(tmp_expression_value_353);
        if (tmp_called_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_356 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_356 == NULL)) {
            tmp_expression_value_356 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_356 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);

            exception_lineno = 268;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_355 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_356, mod_consts[33]);
        if (tmp_expression_value_355 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);

            exception_lineno = 268;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_296 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_355, mod_consts[71]);
        Py_DECREF(tmp_expression_value_355);
        if (tmp_args_element_value_296 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_103);

            exception_lineno = 268;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 268;
        tmp_call_result_178 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_103, tmp_args_element_value_296);
        Py_DECREF(tmp_called_value_103);
        Py_DECREF(tmp_args_element_value_296);
        if (tmp_call_result_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_178);
    }
    {
        PyObject *tmp_called_value_104;
        PyObject *tmp_expression_value_357;
        PyObject *tmp_expression_value_358;
        PyObject *tmp_call_result_179;
        PyObject *tmp_args_element_value_297;
        PyObject *tmp_expression_value_359;
        PyObject *tmp_expression_value_360;
        CHECK_OBJECT(par_self);
        tmp_expression_value_358 = par_self;
        tmp_expression_value_357 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_358, mod_consts[143]);
        if (tmp_expression_value_357 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_357, mod_consts[31]);
        Py_DECREF(tmp_expression_value_357);
        if (tmp_called_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_360 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_360 == NULL)) {
            tmp_expression_value_360 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_360 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_359 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_360, mod_consts[33]);
        if (tmp_expression_value_359 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_297 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_359, mod_consts[34]);
        Py_DECREF(tmp_expression_value_359);
        if (tmp_args_element_value_297 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 269;
        tmp_call_result_179 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_104, tmp_args_element_value_297);
        Py_DECREF(tmp_called_value_104);
        Py_DECREF(tmp_args_element_value_297);
        if (tmp_call_result_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_179);
    }
    {
        PyObject *tmp_called_instance_151;
        PyObject *tmp_expression_value_361;
        PyObject *tmp_call_result_180;
        CHECK_OBJECT(par_self);
        tmp_expression_value_361 = par_self;
        tmp_called_instance_151 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_361, mod_consts[143]);
        if (tmp_called_instance_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 270;
        tmp_call_result_180 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_151,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[144], 0)
        );

        Py_DECREF(tmp_called_instance_151);
        if (tmp_call_result_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_180);
    }
    {
        PyObject *tmp_called_value_105;
        PyObject *tmp_expression_value_362;
        PyObject *tmp_expression_value_363;
        PyObject *tmp_call_result_181;
        PyObject *tmp_args_element_value_298;
        PyObject *tmp_expression_value_364;
        CHECK_OBJECT(par_self);
        tmp_expression_value_363 = par_self;
        tmp_expression_value_362 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_363, mod_consts[141]);
        if (tmp_expression_value_362 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_105 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_362, mod_consts[36]);
        Py_DECREF(tmp_expression_value_362);
        if (tmp_called_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_364 = par_self;
        tmp_args_element_value_298 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_364, mod_consts[143]);
        if (tmp_args_element_value_298 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_105);

            exception_lineno = 271;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 271;
        tmp_call_result_181 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_105, tmp_args_element_value_298);
        Py_DECREF(tmp_called_value_105);
        Py_DECREF(tmp_args_element_value_298);
        if (tmp_call_result_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_181);
    }
    {
        PyObject *tmp_assattr_value_50;
        PyObject *tmp_called_value_106;
        PyObject *tmp_args_element_value_299;
        PyObject *tmp_expression_value_365;
        PyObject *tmp_assattr_target_50;
        tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_106 == NULL)) {
            tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_365 = par_self;
        tmp_args_element_value_299 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_365, mod_consts[137]);
        if (tmp_args_element_value_299 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 272;
        tmp_assattr_value_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_106, tmp_args_element_value_299);
        Py_DECREF(tmp_args_element_value_299);
        if (tmp_assattr_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_50 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_50, mod_consts[145], tmp_assattr_value_50);
        Py_DECREF(tmp_assattr_value_50);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_107;
        PyObject *tmp_expression_value_366;
        PyObject *tmp_expression_value_367;
        PyObject *tmp_call_result_182;
        PyObject *tmp_args_element_value_300;
        PyObject *tmp_expression_value_368;
        PyObject *tmp_expression_value_369;
        CHECK_OBJECT(par_self);
        tmp_expression_value_367 = par_self;
        tmp_expression_value_366 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_367, mod_consts[145]);
        if (tmp_expression_value_366 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_366, mod_consts[31]);
        Py_DECREF(tmp_expression_value_366);
        if (tmp_called_value_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_369 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_369 == NULL)) {
            tmp_expression_value_369 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_369 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_107);

            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_368 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_369, mod_consts[33]);
        if (tmp_expression_value_368 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_107);

            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_300 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_368, mod_consts[34]);
        Py_DECREF(tmp_expression_value_368);
        if (tmp_args_element_value_300 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_107);

            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 273;
        tmp_call_result_182 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_107, tmp_args_element_value_300);
        Py_DECREF(tmp_called_value_107);
        Py_DECREF(tmp_args_element_value_300);
        if (tmp_call_result_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_182);
    }
    {
        PyObject *tmp_called_instance_152;
        PyObject *tmp_expression_value_370;
        PyObject *tmp_call_result_183;
        CHECK_OBJECT(par_self);
        tmp_expression_value_370 = par_self;
        tmp_called_instance_152 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_370, mod_consts[145]);
        if (tmp_called_instance_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 274;
        tmp_call_result_183 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_152,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[146], 0)
        );

        Py_DECREF(tmp_called_instance_152);
        if (tmp_call_result_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_183);
    }
    {
        PyObject *tmp_called_value_108;
        PyObject *tmp_expression_value_371;
        PyObject *tmp_expression_value_372;
        PyObject *tmp_call_result_184;
        PyObject *tmp_args_element_value_301;
        PyObject *tmp_expression_value_373;
        CHECK_OBJECT(par_self);
        tmp_expression_value_372 = par_self;
        tmp_expression_value_371 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_372, mod_consts[141]);
        if (tmp_expression_value_371 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_108 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_371, mod_consts[36]);
        Py_DECREF(tmp_expression_value_371);
        if (tmp_called_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_373 = par_self;
        tmp_args_element_value_301 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_373, mod_consts[145]);
        if (tmp_args_element_value_301 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_108);

            exception_lineno = 275;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 275;
        tmp_call_result_184 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_108, tmp_args_element_value_301);
        Py_DECREF(tmp_called_value_108);
        Py_DECREF(tmp_args_element_value_301);
        if (tmp_call_result_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_184);
    }
    {
        PyObject *tmp_called_value_109;
        PyObject *tmp_expression_value_374;
        PyObject *tmp_expression_value_375;
        PyObject *tmp_call_result_185;
        PyObject *tmp_args_element_value_302;
        PyObject *tmp_expression_value_376;
        PyObject *tmp_args_element_value_303;
        PyObject *tmp_args_element_value_304;
        PyObject *tmp_args_element_value_305;
        PyObject *tmp_args_element_value_306;
        CHECK_OBJECT(par_self);
        tmp_expression_value_375 = par_self;
        tmp_expression_value_374 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_375, mod_consts[139]);
        if (tmp_expression_value_374 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_109 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_374, mod_consts[64]);
        Py_DECREF(tmp_expression_value_374);
        if (tmp_called_value_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_376 = par_self;
        tmp_args_element_value_302 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_376, mod_consts[141]);
        if (tmp_args_element_value_302 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_109);

            exception_lineno = 276;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_303 = mod_consts[17];
        tmp_args_element_value_304 = mod_consts[15];
        tmp_args_element_value_305 = mod_consts[16];
        tmp_args_element_value_306 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_value_302, tmp_args_element_value_303, tmp_args_element_value_304, tmp_args_element_value_305, tmp_args_element_value_306};
            tmp_call_result_185 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_109, call_args);
        }

        Py_DECREF(tmp_called_value_109);
        Py_DECREF(tmp_args_element_value_302);
        if (tmp_call_result_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_185);
    }
    {
        PyObject *tmp_assattr_value_51;
        PyObject *tmp_called_instance_153;
        PyObject *tmp_assattr_target_51;
        tmp_called_instance_153 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_153 == NULL)) {
            tmp_called_instance_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 277;
        tmp_assattr_value_51 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_153, mod_consts[52]);
        if (tmp_assattr_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_51 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_51, mod_consts[147], tmp_assattr_value_51);
        Py_DECREF(tmp_assattr_value_51);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_154;
        PyObject *tmp_expression_value_377;
        PyObject *tmp_call_result_186;
        CHECK_OBJECT(par_self);
        tmp_expression_value_377 = par_self;
        tmp_called_instance_154 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_377, mod_consts[147]);
        if (tmp_called_instance_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 278;
        tmp_call_result_186 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_154,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[148], 0)
        );

        Py_DECREF(tmp_called_instance_154);
        if (tmp_call_result_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_186);
    }
    {
        PyObject *tmp_assattr_value_52;
        PyObject *tmp_called_value_110;
        PyObject *tmp_args_element_value_307;
        PyObject *tmp_expression_value_378;
        PyObject *tmp_assattr_target_52;
        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_110 == NULL)) {
            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_called_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_378 = par_self;
        tmp_args_element_value_307 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_378, mod_consts[137]);
        if (tmp_args_element_value_307 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 279;
        tmp_assattr_value_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_110, tmp_args_element_value_307);
        Py_DECREF(tmp_args_element_value_307);
        if (tmp_assattr_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_52 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_52, mod_consts[149], tmp_assattr_value_52);
        Py_DECREF(tmp_assattr_value_52);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_instance_155;
        tmp_called_instance_155 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_155 == NULL)) {
            tmp_called_instance_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_instance_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 280;
        tmp_assign_source_27 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_155, mod_consts[21]);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_27;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_156;
        PyObject *tmp_call_result_187;
        CHECK_OBJECT(var_font);
        tmp_called_instance_156 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 281;
        tmp_call_result_187 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_156,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_call_result_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_187);
    }
    {
        PyObject *tmp_called_instance_157;
        PyObject *tmp_call_result_188;
        CHECK_OBJECT(var_font);
        tmp_called_instance_157 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 282;
        tmp_call_result_188 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_157,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[58], 0)
        );

        if (tmp_call_result_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_188);
    }
    {
        PyObject *tmp_called_instance_158;
        PyObject *tmp_call_result_189;
        CHECK_OBJECT(var_font);
        tmp_called_instance_158 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 283;
        tmp_call_result_189 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_158,
            mod_consts[26],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_call_result_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_189);
    }
    {
        PyObject *tmp_called_instance_159;
        PyObject *tmp_call_result_190;
        CHECK_OBJECT(var_font);
        tmp_called_instance_159 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 284;
        tmp_call_result_190 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_159,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_call_result_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_190);
    }
    {
        PyObject *tmp_called_instance_160;
        PyObject *tmp_expression_value_379;
        PyObject *tmp_call_result_191;
        PyObject *tmp_args_element_value_308;
        CHECK_OBJECT(par_self);
        tmp_expression_value_379 = par_self;
        tmp_called_instance_160 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_379, mod_consts[149]);
        if (tmp_called_instance_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_font);
        tmp_args_element_value_308 = var_font;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 285;
        tmp_call_result_191 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_160, mod_consts[30], tmp_args_element_value_308);
        Py_DECREF(tmp_called_instance_160);
        if (tmp_call_result_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_191);
    }
    {
        PyObject *tmp_called_instance_161;
        PyObject *tmp_expression_value_380;
        PyObject *tmp_call_result_192;
        CHECK_OBJECT(par_self);
        tmp_expression_value_380 = par_self;
        tmp_called_instance_161 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_380, mod_consts[149]);
        if (tmp_called_instance_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 286;
        tmp_call_result_192 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_161,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[150], 0)
        );

        Py_DECREF(tmp_called_instance_161);
        if (tmp_call_result_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_192);
    }
    {
        PyObject *tmp_called_value_111;
        PyObject *tmp_expression_value_381;
        PyObject *tmp_expression_value_382;
        PyObject *tmp_call_result_193;
        PyObject *tmp_args_element_value_309;
        PyObject *tmp_expression_value_383;
        CHECK_OBJECT(par_self);
        tmp_expression_value_382 = par_self;
        tmp_expression_value_381 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_382, mod_consts[147]);
        if (tmp_expression_value_381 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_111 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_381, mod_consts[36]);
        Py_DECREF(tmp_expression_value_381);
        if (tmp_called_value_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_383 = par_self;
        tmp_args_element_value_309 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_383, mod_consts[149]);
        if (tmp_args_element_value_309 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_111);

            exception_lineno = 287;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 287;
        tmp_call_result_193 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_111, tmp_args_element_value_309);
        Py_DECREF(tmp_called_value_111);
        Py_DECREF(tmp_args_element_value_309);
        if (tmp_call_result_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_193);
    }
    {
        PyObject *tmp_assattr_value_53;
        PyObject *tmp_called_value_112;
        PyObject *tmp_args_element_value_310;
        PyObject *tmp_expression_value_384;
        PyObject *tmp_assattr_target_53;
        tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_112 == NULL)) {
            tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_384 = par_self;
        tmp_args_element_value_310 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_384, mod_consts[137]);
        if (tmp_args_element_value_310 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 288;
        tmp_assattr_value_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_112, tmp_args_element_value_310);
        Py_DECREF(tmp_args_element_value_310);
        if (tmp_assattr_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_53 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_53, mod_consts[151], tmp_assattr_value_53);
        Py_DECREF(tmp_assattr_value_53);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_162;
        PyObject *tmp_expression_value_385;
        PyObject *tmp_call_result_194;
        CHECK_OBJECT(par_self);
        tmp_expression_value_385 = par_self;
        tmp_called_instance_162 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_385, mod_consts[151]);
        if (tmp_called_instance_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 289;
        tmp_call_result_194 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_162,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[152], 0)
        );

        Py_DECREF(tmp_called_instance_162);
        if (tmp_call_result_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_194);
    }
    {
        PyObject *tmp_called_value_113;
        PyObject *tmp_expression_value_386;
        PyObject *tmp_expression_value_387;
        PyObject *tmp_call_result_195;
        PyObject *tmp_args_element_value_311;
        PyObject *tmp_expression_value_388;
        CHECK_OBJECT(par_self);
        tmp_expression_value_387 = par_self;
        tmp_expression_value_386 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_387, mod_consts[147]);
        if (tmp_expression_value_386 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_386, mod_consts[36]);
        Py_DECREF(tmp_expression_value_386);
        if (tmp_called_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_388 = par_self;
        tmp_args_element_value_311 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_388, mod_consts[151]);
        if (tmp_args_element_value_311 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_113);

            exception_lineno = 290;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 290;
        tmp_call_result_195 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_113, tmp_args_element_value_311);
        Py_DECREF(tmp_called_value_113);
        Py_DECREF(tmp_args_element_value_311);
        if (tmp_call_result_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_195);
    }
    {
        PyObject *tmp_called_value_114;
        PyObject *tmp_expression_value_389;
        PyObject *tmp_expression_value_390;
        PyObject *tmp_call_result_196;
        PyObject *tmp_args_element_value_312;
        PyObject *tmp_expression_value_391;
        PyObject *tmp_args_element_value_313;
        PyObject *tmp_args_element_value_314;
        PyObject *tmp_args_element_value_315;
        PyObject *tmp_args_element_value_316;
        CHECK_OBJECT(par_self);
        tmp_expression_value_390 = par_self;
        tmp_expression_value_389 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_390, mod_consts[139]);
        if (tmp_expression_value_389 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_389, mod_consts[64]);
        Py_DECREF(tmp_expression_value_389);
        if (tmp_called_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_391 = par_self;
        tmp_args_element_value_312 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_391, mod_consts[147]);
        if (tmp_args_element_value_312 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);

            exception_lineno = 291;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_313 = mod_consts[15];
        tmp_args_element_value_314 = mod_consts[15];
        tmp_args_element_value_315 = mod_consts[16];
        tmp_args_element_value_316 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 291;
        {
            PyObject *call_args[] = {tmp_args_element_value_312, tmp_args_element_value_313, tmp_args_element_value_314, tmp_args_element_value_315, tmp_args_element_value_316};
            tmp_call_result_196 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_114, call_args);
        }

        Py_DECREF(tmp_called_value_114);
        Py_DECREF(tmp_args_element_value_312);
        if (tmp_call_result_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_196);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_115;
        PyObject *tmp_expression_value_392;
        PyObject *tmp_args_element_value_317;
        PyObject *tmp_args_element_value_318;
        PyObject *tmp_args_element_value_319;
        PyObject *tmp_expression_value_393;
        PyObject *tmp_expression_value_394;
        PyObject *tmp_args_element_value_320;
        PyObject *tmp_expression_value_395;
        PyObject *tmp_expression_value_396;
        tmp_expression_value_392 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_392 == NULL)) {
            tmp_expression_value_392 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_392 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_392, mod_consts[8]);
        if (tmp_called_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_317 = mod_consts[10];
        tmp_args_element_value_318 = mod_consts[75];
        tmp_expression_value_394 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_394 == NULL)) {
            tmp_expression_value_394 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_394 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);

            exception_lineno = 292;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_393 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_394, mod_consts[11]);
        if (tmp_expression_value_393 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);

            exception_lineno = 292;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_319 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_393, mod_consts[13]);
        Py_DECREF(tmp_expression_value_393);
        if (tmp_args_element_value_319 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);

            exception_lineno = 292;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_396 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_396 == NULL)) {
            tmp_expression_value_396 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_396 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);
            Py_DECREF(tmp_args_element_value_319);

            exception_lineno = 292;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_395 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_396, mod_consts[11]);
        if (tmp_expression_value_395 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);
            Py_DECREF(tmp_args_element_value_319);

            exception_lineno = 292;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_320 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_395, mod_consts[12]);
        Py_DECREF(tmp_expression_value_395);
        if (tmp_args_element_value_320 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_115);
            Py_DECREF(tmp_args_element_value_319);

            exception_lineno = 292;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = {tmp_args_element_value_317, tmp_args_element_value_318, tmp_args_element_value_319, tmp_args_element_value_320};
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_115, call_args);
        }

        Py_DECREF(tmp_called_value_115);
        Py_DECREF(tmp_args_element_value_319);
        Py_DECREF(tmp_args_element_value_320);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem14 == NULL);
        var_spacerItem14 = tmp_assign_source_28;
    }
    {
        PyObject *tmp_called_instance_163;
        PyObject *tmp_expression_value_397;
        PyObject *tmp_call_result_197;
        PyObject *tmp_args_element_value_321;
        PyObject *tmp_args_element_value_322;
        PyObject *tmp_args_element_value_323;
        PyObject *tmp_args_element_value_324;
        PyObject *tmp_args_element_value_325;
        CHECK_OBJECT(par_self);
        tmp_expression_value_397 = par_self;
        tmp_called_instance_163 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_397, mod_consts[139]);
        if (tmp_called_instance_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem14);
        tmp_args_element_value_321 = var_spacerItem14;
        tmp_args_element_value_322 = mod_consts[41];
        tmp_args_element_value_323 = mod_consts[15];
        tmp_args_element_value_324 = mod_consts[16];
        tmp_args_element_value_325 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 293;
        {
            PyObject *call_args[] = {tmp_args_element_value_321, tmp_args_element_value_322, tmp_args_element_value_323, tmp_args_element_value_324, tmp_args_element_value_325};
            tmp_call_result_197 = CALL_METHOD_WITH_ARGS5(
                tstate,
                tmp_called_instance_163,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_163);
        if (tmp_call_result_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_197);
    }
    {
        PyObject *tmp_called_value_116;
        PyObject *tmp_expression_value_398;
        PyObject *tmp_expression_value_399;
        PyObject *tmp_call_result_198;
        PyObject *tmp_args_element_value_326;
        PyObject *tmp_expression_value_400;
        PyObject *tmp_args_element_value_327;
        PyObject *tmp_args_element_value_328;
        PyObject *tmp_args_element_value_329;
        PyObject *tmp_args_element_value_330;
        CHECK_OBJECT(par_self);
        tmp_expression_value_399 = par_self;
        tmp_expression_value_398 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_399, mod_consts[45]);
        if (tmp_expression_value_398 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_398, mod_consts[36]);
        Py_DECREF(tmp_expression_value_398);
        if (tmp_called_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_400 = par_self;
        tmp_args_element_value_326 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_400, mod_consts[137]);
        if (tmp_args_element_value_326 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);

            exception_lineno = 294;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_327 = mod_consts[16];
        tmp_args_element_value_328 = mod_consts[15];
        tmp_args_element_value_329 = mod_consts[16];
        tmp_args_element_value_330 = mod_consts[16];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = {tmp_args_element_value_326, tmp_args_element_value_327, tmp_args_element_value_328, tmp_args_element_value_329, tmp_args_element_value_330};
            tmp_call_result_198 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_116, call_args);
        }

        Py_DECREF(tmp_called_value_116);
        Py_DECREF(tmp_args_element_value_326);
        if (tmp_call_result_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_198);
    }
    {
        PyObject *tmp_called_value_117;
        PyObject *tmp_expression_value_401;
        PyObject *tmp_expression_value_402;
        PyObject *tmp_call_result_199;
        PyObject *tmp_args_element_value_331;
        PyObject *tmp_expression_value_403;
        CHECK_OBJECT(par_self);
        tmp_expression_value_402 = par_self;
        tmp_expression_value_401 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_402, mod_consts[43]);
        if (tmp_expression_value_401 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_401, mod_consts[64]);
        Py_DECREF(tmp_expression_value_401);
        if (tmp_called_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_403 = par_self;
        tmp_args_element_value_331 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_403, mod_consts[45]);
        if (tmp_args_element_value_331 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_117);

            exception_lineno = 295;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 295;
        tmp_call_result_199 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_117, tmp_args_element_value_331);
        Py_DECREF(tmp_called_value_117);
        Py_DECREF(tmp_args_element_value_331);
        if (tmp_call_result_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_199);
    }
    {
        PyObject *tmp_assattr_value_54;
        PyObject *tmp_called_instance_164;
        PyObject *tmp_assattr_target_54;
        tmp_called_instance_164 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_164 == NULL)) {
            tmp_called_instance_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 296;
        tmp_assattr_value_54 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_164, mod_consts[52]);
        if (tmp_assattr_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_54 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_54, mod_consts[153], tmp_assattr_value_54);
        Py_DECREF(tmp_assattr_value_54);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_165;
        PyObject *tmp_expression_value_404;
        PyObject *tmp_call_result_200;
        CHECK_OBJECT(par_self);
        tmp_expression_value_404 = par_self;
        tmp_called_instance_165 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_404, mod_consts[153]);
        if (tmp_called_instance_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 297;
        tmp_call_result_200 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_165,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[154], 0)
        );

        Py_DECREF(tmp_called_instance_165);
        if (tmp_call_result_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_200);
    }
    {
        PyObject *tmp_assattr_value_55;
        PyObject *tmp_called_instance_166;
        PyObject *tmp_assattr_target_55;
        tmp_called_instance_166 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_166 == NULL)) {
            tmp_called_instance_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 298;
        tmp_assattr_value_55 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_166, mod_consts[42]);
        if (tmp_assattr_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_55 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_55, mod_consts[155], tmp_assattr_value_55);
        Py_DECREF(tmp_assattr_value_55);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_167;
        PyObject *tmp_expression_value_405;
        PyObject *tmp_call_result_201;
        CHECK_OBJECT(par_self);
        tmp_expression_value_405 = par_self;
        tmp_called_instance_167 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_405, mod_consts[155]);
        if (tmp_called_instance_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 299;
        tmp_call_result_201 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_167,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[156], 0)
        );

        Py_DECREF(tmp_called_instance_167);
        if (tmp_call_result_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_201);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_118;
        PyObject *tmp_expression_value_406;
        PyObject *tmp_args_element_value_332;
        PyObject *tmp_args_element_value_333;
        PyObject *tmp_args_element_value_334;
        PyObject *tmp_expression_value_407;
        PyObject *tmp_expression_value_408;
        PyObject *tmp_args_element_value_335;
        PyObject *tmp_expression_value_409;
        PyObject *tmp_expression_value_410;
        tmp_expression_value_406 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_406 == NULL)) {
            tmp_expression_value_406 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_406 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_406, mod_consts[8]);
        if (tmp_called_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_332 = mod_consts[75];
        tmp_args_element_value_333 = mod_consts[10];
        tmp_expression_value_408 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_408 == NULL)) {
            tmp_expression_value_408 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_408 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);

            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_407 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_408, mod_consts[11]);
        if (tmp_expression_value_407 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);

            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_334 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_407, mod_consts[157]);
        Py_DECREF(tmp_expression_value_407);
        if (tmp_args_element_value_334 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);

            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_410 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_410 == NULL)) {
            tmp_expression_value_410 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_410 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_args_element_value_334);

            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_409 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_410, mod_consts[11]);
        if (tmp_expression_value_409 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_args_element_value_334);

            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_335 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_409, mod_consts[13]);
        Py_DECREF(tmp_expression_value_409);
        if (tmp_args_element_value_335 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_args_element_value_334);

            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 300;
        {
            PyObject *call_args[] = {tmp_args_element_value_332, tmp_args_element_value_333, tmp_args_element_value_334, tmp_args_element_value_335};
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_118, call_args);
        }

        Py_DECREF(tmp_called_value_118);
        Py_DECREF(tmp_args_element_value_334);
        Py_DECREF(tmp_args_element_value_335);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem15 == NULL);
        var_spacerItem15 = tmp_assign_source_29;
    }
    {
        PyObject *tmp_called_instance_168;
        PyObject *tmp_expression_value_411;
        PyObject *tmp_call_result_202;
        PyObject *tmp_args_element_value_336;
        CHECK_OBJECT(par_self);
        tmp_expression_value_411 = par_self;
        tmp_called_instance_168 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_411, mod_consts[155]);
        if (tmp_called_instance_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem15);
        tmp_args_element_value_336 = var_spacerItem15;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 301;
        tmp_call_result_202 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_168, mod_consts[14], tmp_args_element_value_336);
        Py_DECREF(tmp_called_instance_168);
        if (tmp_call_result_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_202);
    }
    {
        PyObject *tmp_assattr_value_56;
        PyObject *tmp_called_value_119;
        PyObject *tmp_args_element_value_337;
        PyObject *tmp_assattr_target_56;
        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_called_value_119 == NULL)) {
            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[158]);
        }

        if (tmp_called_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_HomePage);
        tmp_args_element_value_337 = par_HomePage;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 302;
        tmp_assattr_value_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_119, tmp_args_element_value_337);
        if (tmp_assattr_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_56 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_56, mod_consts[158], tmp_assattr_value_56);
        Py_DECREF(tmp_assattr_value_56);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_120;
        PyObject *tmp_expression_value_412;
        PyObject *tmp_args_element_value_338;
        PyObject *tmp_expression_value_413;
        PyObject *tmp_expression_value_414;
        PyObject *tmp_args_element_value_339;
        PyObject *tmp_expression_value_415;
        PyObject *tmp_expression_value_416;
        tmp_expression_value_412 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_412 == NULL)) {
            tmp_expression_value_412 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_412 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_412, mod_consts[11]);
        if (tmp_called_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_414 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_414 == NULL)) {
            tmp_expression_value_414 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_414 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_120);

            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_413 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_414, mod_consts[11]);
        if (tmp_expression_value_413 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_120);

            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_338 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_413, mod_consts[159]);
        Py_DECREF(tmp_expression_value_413);
        if (tmp_args_element_value_338 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_120);

            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_416 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_416 == NULL)) {
            tmp_expression_value_416 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_416 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_args_element_value_338);

            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_415 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_416, mod_consts[11]);
        if (tmp_expression_value_415 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_args_element_value_338);

            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_339 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_415, mod_consts[159]);
        Py_DECREF(tmp_expression_value_415);
        if (tmp_args_element_value_339 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_args_element_value_338);

            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = {tmp_args_element_value_338, tmp_args_element_value_339};
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_120, call_args);
        }

        Py_DECREF(tmp_called_value_120);
        Py_DECREF(tmp_args_element_value_338);
        Py_DECREF(tmp_args_element_value_339);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sizePolicy == NULL);
        var_sizePolicy = tmp_assign_source_30;
    }
    {
        PyObject *tmp_called_instance_169;
        PyObject *tmp_call_result_203;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_169 = var_sizePolicy;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 304;
        tmp_call_result_203 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_169,
            mod_consts[160],
            PyTuple_GET_ITEM(mod_consts[161], 0)
        );

        if (tmp_call_result_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_203);
    }
    {
        PyObject *tmp_called_instance_170;
        PyObject *tmp_call_result_204;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_170 = var_sizePolicy;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 305;
        tmp_call_result_204 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_170,
            mod_consts[162],
            PyTuple_GET_ITEM(mod_consts[161], 0)
        );

        if (tmp_call_result_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_204);
    }
    {
        PyObject *tmp_called_value_121;
        PyObject *tmp_expression_value_417;
        PyObject *tmp_call_result_205;
        PyObject *tmp_args_element_value_340;
        PyObject *tmp_called_instance_171;
        PyObject *tmp_called_instance_172;
        PyObject *tmp_expression_value_418;
        CHECK_OBJECT(var_sizePolicy);
        tmp_expression_value_417 = var_sizePolicy;
        tmp_called_value_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_417, mod_consts[163]);
        if (tmp_called_value_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_418 = par_self;
        tmp_called_instance_172 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_418, mod_consts[158]);
        if (tmp_called_instance_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);

            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 306;
        tmp_called_instance_171 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_172, mod_consts[164]);
        Py_DECREF(tmp_called_instance_172);
        if (tmp_called_instance_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);

            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 306;
        tmp_args_element_value_340 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_171, mod_consts[165]);
        Py_DECREF(tmp_called_instance_171);
        if (tmp_args_element_value_340 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_121);

            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 306;
        tmp_call_result_205 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_121, tmp_args_element_value_340);
        Py_DECREF(tmp_called_value_121);
        Py_DECREF(tmp_args_element_value_340);
        if (tmp_call_result_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_205);
    }
    {
        PyObject *tmp_called_instance_173;
        PyObject *tmp_expression_value_419;
        PyObject *tmp_call_result_206;
        PyObject *tmp_args_element_value_341;
        CHECK_OBJECT(par_self);
        tmp_expression_value_419 = par_self;
        tmp_called_instance_173 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_419, mod_consts[158]);
        if (tmp_called_instance_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sizePolicy);
        tmp_args_element_value_341 = var_sizePolicy;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 307;
        tmp_call_result_206 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_173, mod_consts[166], tmp_args_element_value_341);
        Py_DECREF(tmp_called_instance_173);
        if (tmp_call_result_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_206);
    }
    {
        PyObject *tmp_called_value_122;
        PyObject *tmp_expression_value_420;
        PyObject *tmp_expression_value_421;
        PyObject *tmp_call_result_207;
        PyObject *tmp_args_element_value_342;
        PyObject *tmp_called_instance_174;
        CHECK_OBJECT(par_self);
        tmp_expression_value_421 = par_self;
        tmp_expression_value_420 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_421, mod_consts[158]);
        if (tmp_expression_value_420 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_122 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_420, mod_consts[167]);
        Py_DECREF(tmp_expression_value_420);
        if (tmp_called_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_174 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_instance_174 == NULL)) {
            tmp_called_instance_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_called_instance_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 308;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 308;
        tmp_args_element_value_342 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_174,
            mod_consts[168],
            &PyTuple_GET_ITEM(mod_consts[169], 0)
        );

        if (tmp_args_element_value_342 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 308;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 308;
        tmp_call_result_207 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_122, tmp_args_element_value_342);
        Py_DECREF(tmp_called_value_122);
        Py_DECREF(tmp_args_element_value_342);
        if (tmp_call_result_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_207);
    }
    {
        PyObject *tmp_called_value_123;
        PyObject *tmp_expression_value_422;
        PyObject *tmp_expression_value_423;
        PyObject *tmp_call_result_208;
        PyObject *tmp_args_element_value_343;
        PyObject *tmp_called_instance_175;
        CHECK_OBJECT(par_self);
        tmp_expression_value_423 = par_self;
        tmp_expression_value_422 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_423, mod_consts[158]);
        if (tmp_expression_value_422 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_422, mod_consts[170]);
        Py_DECREF(tmp_expression_value_422);
        if (tmp_called_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_175 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_instance_175 == NULL)) {
            tmp_called_instance_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_called_instance_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);

            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 309;
        tmp_args_element_value_343 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_175,
            mod_consts[168],
            &PyTuple_GET_ITEM(mod_consts[171], 0)
        );

        if (tmp_args_element_value_343 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_123);

            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 309;
        tmp_call_result_208 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_123, tmp_args_element_value_343);
        Py_DECREF(tmp_called_value_123);
        Py_DECREF(tmp_args_element_value_343);
        if (tmp_call_result_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_208);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_instance_176;
        tmp_called_instance_176 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_176 == NULL)) {
            tmp_called_instance_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_instance_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 310;
        tmp_assign_source_31 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_176, mod_consts[172]);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_icon == NULL);
        var_icon = tmp_assign_source_31;
    }
    {
        PyObject *tmp_called_value_124;
        PyObject *tmp_expression_value_424;
        PyObject *tmp_call_result_209;
        PyObject *tmp_args_element_value_344;
        PyObject *tmp_called_instance_177;
        PyObject *tmp_args_element_value_345;
        PyObject *tmp_expression_value_425;
        PyObject *tmp_expression_value_426;
        PyObject *tmp_args_element_value_346;
        PyObject *tmp_expression_value_427;
        PyObject *tmp_expression_value_428;
        CHECK_OBJECT(var_icon);
        tmp_expression_value_424 = var_icon;
        tmp_called_value_124 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_424, mod_consts[173]);
        if (tmp_called_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_177 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_177 == NULL)) {
            tmp_called_instance_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_instance_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);

            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 311;
        tmp_args_element_value_344 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_177,
            mod_consts[174],
            PyTuple_GET_ITEM(mod_consts[175], 0)
        );

        if (tmp_args_element_value_344 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);

            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_426 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_426 == NULL)) {
            tmp_expression_value_426 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_expression_value_426 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_344);

            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_425 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_426, mod_consts[172]);
        if (tmp_expression_value_425 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_344);

            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_345 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_425, mod_consts[176]);
        Py_DECREF(tmp_expression_value_425);
        if (tmp_args_element_value_345 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_344);

            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_428 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_428 == NULL)) {
            tmp_expression_value_428 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_expression_value_428 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_344);
            Py_DECREF(tmp_args_element_value_345);

            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_427 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_428, mod_consts[172]);
        if (tmp_expression_value_427 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_344);
            Py_DECREF(tmp_args_element_value_345);

            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_346 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_427, mod_consts[177]);
        Py_DECREF(tmp_expression_value_427);
        if (tmp_args_element_value_346 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_args_element_value_344);
            Py_DECREF(tmp_args_element_value_345);

            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 311;
        {
            PyObject *call_args[] = {tmp_args_element_value_344, tmp_args_element_value_345, tmp_args_element_value_346};
            tmp_call_result_209 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_124, call_args);
        }

        Py_DECREF(tmp_called_value_124);
        Py_DECREF(tmp_args_element_value_344);
        Py_DECREF(tmp_args_element_value_345);
        Py_DECREF(tmp_args_element_value_346);
        if (tmp_call_result_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_209);
    }
    {
        PyObject *tmp_called_instance_178;
        PyObject *tmp_expression_value_429;
        PyObject *tmp_call_result_210;
        PyObject *tmp_args_element_value_347;
        CHECK_OBJECT(par_self);
        tmp_expression_value_429 = par_self;
        tmp_called_instance_178 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_429, mod_consts[158]);
        if (tmp_called_instance_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_icon);
        tmp_args_element_value_347 = var_icon;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 312;
        tmp_call_result_210 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_178, mod_consts[178], tmp_args_element_value_347);
        Py_DECREF(tmp_called_instance_178);
        if (tmp_call_result_210 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_210);
    }
    {
        PyObject *tmp_called_instance_179;
        PyObject *tmp_expression_value_430;
        PyObject *tmp_call_result_211;
        CHECK_OBJECT(par_self);
        tmp_expression_value_430 = par_self;
        tmp_called_instance_179 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_430, mod_consts[158]);
        if (tmp_called_instance_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 313;
        tmp_call_result_211 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_179,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[179], 0)
        );

        Py_DECREF(tmp_called_instance_179);
        if (tmp_call_result_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_211);
    }
    {
        PyObject *tmp_called_value_125;
        PyObject *tmp_expression_value_431;
        PyObject *tmp_expression_value_432;
        PyObject *tmp_call_result_212;
        PyObject *tmp_args_element_value_348;
        PyObject *tmp_expression_value_433;
        CHECK_OBJECT(par_self);
        tmp_expression_value_432 = par_self;
        tmp_expression_value_431 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_432, mod_consts[155]);
        if (tmp_expression_value_431 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_125 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_431, mod_consts[36]);
        Py_DECREF(tmp_expression_value_431);
        if (tmp_called_value_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_433 = par_self;
        tmp_args_element_value_348 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_433, mod_consts[158]);
        if (tmp_args_element_value_348 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_125);

            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 314;
        tmp_call_result_212 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_125, tmp_args_element_value_348);
        Py_DECREF(tmp_called_value_125);
        Py_DECREF(tmp_args_element_value_348);
        if (tmp_call_result_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_212);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_126;
        PyObject *tmp_expression_value_434;
        PyObject *tmp_args_element_value_349;
        PyObject *tmp_args_element_value_350;
        PyObject *tmp_args_element_value_351;
        PyObject *tmp_expression_value_435;
        PyObject *tmp_expression_value_436;
        PyObject *tmp_args_element_value_352;
        PyObject *tmp_expression_value_437;
        PyObject *tmp_expression_value_438;
        tmp_expression_value_434 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_434 == NULL)) {
            tmp_expression_value_434 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_434 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_434, mod_consts[8]);
        if (tmp_called_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_349 = mod_consts[75];
        tmp_args_element_value_350 = mod_consts[10];
        tmp_expression_value_436 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_436 == NULL)) {
            tmp_expression_value_436 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_436 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_435 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_436, mod_consts[11]);
        if (tmp_expression_value_435 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_351 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_435, mod_consts[157]);
        Py_DECREF(tmp_expression_value_435);
        if (tmp_args_element_value_351 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_438 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_438 == NULL)) {
            tmp_expression_value_438 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_438 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_351);

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_437 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_438, mod_consts[11]);
        if (tmp_expression_value_437 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_351);

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_352 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_437, mod_consts[13]);
        Py_DECREF(tmp_expression_value_437);
        if (tmp_args_element_value_352 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_args_element_value_351);

            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 315;
        {
            PyObject *call_args[] = {tmp_args_element_value_349, tmp_args_element_value_350, tmp_args_element_value_351, tmp_args_element_value_352};
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_126, call_args);
        }

        Py_DECREF(tmp_called_value_126);
        Py_DECREF(tmp_args_element_value_351);
        Py_DECREF(tmp_args_element_value_352);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem16 == NULL);
        var_spacerItem16 = tmp_assign_source_32;
    }
    {
        PyObject *tmp_called_instance_180;
        PyObject *tmp_expression_value_439;
        PyObject *tmp_call_result_213;
        PyObject *tmp_args_element_value_353;
        CHECK_OBJECT(par_self);
        tmp_expression_value_439 = par_self;
        tmp_called_instance_180 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_439, mod_consts[155]);
        if (tmp_called_instance_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem16);
        tmp_args_element_value_353 = var_spacerItem16;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 316;
        tmp_call_result_213 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_180, mod_consts[14], tmp_args_element_value_353);
        Py_DECREF(tmp_called_instance_180);
        if (tmp_call_result_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_213);
    }
    {
        PyObject *tmp_called_value_127;
        PyObject *tmp_expression_value_440;
        PyObject *tmp_expression_value_441;
        PyObject *tmp_call_result_214;
        PyObject *tmp_args_element_value_354;
        PyObject *tmp_expression_value_442;
        CHECK_OBJECT(par_self);
        tmp_expression_value_441 = par_self;
        tmp_expression_value_440 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_441, mod_consts[153]);
        if (tmp_expression_value_440 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_127 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_440, mod_consts[64]);
        Py_DECREF(tmp_expression_value_440);
        if (tmp_called_value_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_442 = par_self;
        tmp_args_element_value_354 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_442, mod_consts[155]);
        if (tmp_args_element_value_354 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);

            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 317;
        tmp_call_result_214 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_127, tmp_args_element_value_354);
        Py_DECREF(tmp_called_value_127);
        Py_DECREF(tmp_args_element_value_354);
        if (tmp_call_result_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_214);
    }
    {
        PyObject *tmp_assattr_value_57;
        PyObject *tmp_called_instance_181;
        PyObject *tmp_assattr_target_57;
        tmp_called_instance_181 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_181 == NULL)) {
            tmp_called_instance_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 318;
        tmp_assattr_value_57 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_181, mod_consts[52]);
        if (tmp_assattr_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_57 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_57, mod_consts[180], tmp_assattr_value_57);
        Py_DECREF(tmp_assattr_value_57);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_182;
        PyObject *tmp_expression_value_443;
        PyObject *tmp_call_result_215;
        CHECK_OBJECT(par_self);
        tmp_expression_value_443 = par_self;
        tmp_called_instance_182 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_443, mod_consts[180]);
        if (tmp_called_instance_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 319;
        tmp_call_result_215 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_182,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[181], 0)
        );

        Py_DECREF(tmp_called_instance_182);
        if (tmp_call_result_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_215);
    }
    {
        PyObject *tmp_assattr_value_58;
        PyObject *tmp_called_instance_183;
        PyObject *tmp_assattr_target_58;
        tmp_called_instance_183 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_183 == NULL)) {
            tmp_called_instance_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 320;
        tmp_assattr_value_58 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_183, mod_consts[42]);
        if (tmp_assattr_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_58 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_58, mod_consts[182], tmp_assattr_value_58);
        Py_DECREF(tmp_assattr_value_58);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_184;
        PyObject *tmp_expression_value_444;
        PyObject *tmp_call_result_216;
        CHECK_OBJECT(par_self);
        tmp_expression_value_444 = par_self;
        tmp_called_instance_184 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_444, mod_consts[182]);
        if (tmp_called_instance_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 321;
        tmp_call_result_216 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_184,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[183], 0)
        );

        Py_DECREF(tmp_called_instance_184);
        if (tmp_call_result_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_216);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_128;
        PyObject *tmp_expression_value_445;
        PyObject *tmp_args_element_value_355;
        PyObject *tmp_args_element_value_356;
        PyObject *tmp_args_element_value_357;
        PyObject *tmp_expression_value_446;
        PyObject *tmp_expression_value_447;
        PyObject *tmp_args_element_value_358;
        PyObject *tmp_expression_value_448;
        PyObject *tmp_expression_value_449;
        tmp_expression_value_445 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_445 == NULL)) {
            tmp_expression_value_445 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_445 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_128 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_445, mod_consts[8]);
        if (tmp_called_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_355 = mod_consts[10];
        tmp_args_element_value_356 = mod_consts[10];
        tmp_expression_value_447 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_447 == NULL)) {
            tmp_expression_value_447 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_447 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_128);

            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_446 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_447, mod_consts[11]);
        if (tmp_expression_value_446 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_128);

            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_357 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_446, mod_consts[157]);
        Py_DECREF(tmp_expression_value_446);
        if (tmp_args_element_value_357 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_128);

            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_449 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_449 == NULL)) {
            tmp_expression_value_449 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_449 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_args_element_value_357);

            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_448 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_449, mod_consts[11]);
        if (tmp_expression_value_448 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_args_element_value_357);

            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_358 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_448, mod_consts[13]);
        Py_DECREF(tmp_expression_value_448);
        if (tmp_args_element_value_358 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_args_element_value_357);

            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 322;
        {
            PyObject *call_args[] = {tmp_args_element_value_355, tmp_args_element_value_356, tmp_args_element_value_357, tmp_args_element_value_358};
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_128, call_args);
        }

        Py_DECREF(tmp_called_value_128);
        Py_DECREF(tmp_args_element_value_357);
        Py_DECREF(tmp_args_element_value_358);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem17 == NULL);
        var_spacerItem17 = tmp_assign_source_33;
    }
    {
        PyObject *tmp_called_instance_185;
        PyObject *tmp_expression_value_450;
        PyObject *tmp_call_result_217;
        PyObject *tmp_args_element_value_359;
        CHECK_OBJECT(par_self);
        tmp_expression_value_450 = par_self;
        tmp_called_instance_185 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_450, mod_consts[182]);
        if (tmp_called_instance_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem17);
        tmp_args_element_value_359 = var_spacerItem17;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 323;
        tmp_call_result_217 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_185, mod_consts[14], tmp_args_element_value_359);
        Py_DECREF(tmp_called_instance_185);
        if (tmp_call_result_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_217);
    }
    {
        PyObject *tmp_assattr_value_59;
        PyObject *tmp_called_instance_186;
        PyObject *tmp_args_element_value_360;
        PyObject *tmp_assattr_target_59;
        tmp_called_instance_186 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_186 == NULL)) {
            tmp_called_instance_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_HomePage);
        tmp_args_element_value_360 = par_HomePage;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 324;
        tmp_assattr_value_59 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_186, mod_consts[184], tmp_args_element_value_360);
        if (tmp_assattr_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_59 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_59, mod_consts[185], tmp_assattr_value_59);
        Py_DECREF(tmp_assattr_value_59);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_129;
        PyObject *tmp_expression_value_451;
        PyObject *tmp_expression_value_452;
        PyObject *tmp_call_result_218;
        PyObject *tmp_args_element_value_361;
        PyObject *tmp_called_instance_187;
        CHECK_OBJECT(par_self);
        tmp_expression_value_452 = par_self;
        tmp_expression_value_451 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_452, mod_consts[185]);
        if (tmp_expression_value_451 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_129 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_451, mod_consts[167]);
        Py_DECREF(tmp_expression_value_451);
        if (tmp_called_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_187 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_instance_187 == NULL)) {
            tmp_called_instance_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_called_instance_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);

            exception_lineno = 325;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 325;
        tmp_args_element_value_361 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_187,
            mod_consts[168],
            &PyTuple_GET_ITEM(mod_consts[186], 0)
        );

        if (tmp_args_element_value_361 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_129);

            exception_lineno = 325;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 325;
        tmp_call_result_218 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_129, tmp_args_element_value_361);
        Py_DECREF(tmp_called_value_129);
        Py_DECREF(tmp_args_element_value_361);
        if (tmp_call_result_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_218);
    }
    {
        PyObject *tmp_called_instance_188;
        PyObject *tmp_expression_value_453;
        PyObject *tmp_call_result_219;
        CHECK_OBJECT(par_self);
        tmp_expression_value_453 = par_self;
        tmp_called_instance_188 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_453, mod_consts[185]);
        if (tmp_called_instance_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 326;
        tmp_call_result_219 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_188,
            mod_consts[187],
            PyTuple_GET_ITEM(mod_consts[188], 0)
        );

        Py_DECREF(tmp_called_instance_188);
        if (tmp_call_result_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_219);
    }
    {
        PyObject *tmp_called_instance_189;
        PyObject *tmp_expression_value_454;
        PyObject *tmp_call_result_220;
        CHECK_OBJECT(par_self);
        tmp_expression_value_454 = par_self;
        tmp_called_instance_189 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_454, mod_consts[185]);
        if (tmp_called_instance_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 327;
        tmp_call_result_220 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_189,
            mod_consts[189],
            PyTuple_GET_ITEM(mod_consts[190], 0)
        );

        Py_DECREF(tmp_called_instance_189);
        if (tmp_call_result_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_220);
    }
    {
        PyObject *tmp_called_instance_190;
        PyObject *tmp_expression_value_455;
        PyObject *tmp_call_result_221;
        CHECK_OBJECT(par_self);
        tmp_expression_value_455 = par_self;
        tmp_called_instance_190 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_455, mod_consts[185]);
        if (tmp_called_instance_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 328;
        tmp_call_result_221 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_190,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[191], 0)
        );

        Py_DECREF(tmp_called_instance_190);
        if (tmp_call_result_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_221);
    }
    {
        PyObject *tmp_called_value_130;
        PyObject *tmp_expression_value_456;
        PyObject *tmp_expression_value_457;
        PyObject *tmp_call_result_222;
        PyObject *tmp_args_element_value_362;
        PyObject *tmp_expression_value_458;
        CHECK_OBJECT(par_self);
        tmp_expression_value_457 = par_self;
        tmp_expression_value_456 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_457, mod_consts[182]);
        if (tmp_expression_value_456 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_130 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_456, mod_consts[36]);
        Py_DECREF(tmp_expression_value_456);
        if (tmp_called_value_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_458 = par_self;
        tmp_args_element_value_362 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_458, mod_consts[185]);
        if (tmp_args_element_value_362 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);

            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 329;
        tmp_call_result_222 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_130, tmp_args_element_value_362);
        Py_DECREF(tmp_called_value_130);
        Py_DECREF(tmp_args_element_value_362);
        if (tmp_call_result_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_222);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_131;
        PyObject *tmp_expression_value_459;
        PyObject *tmp_args_element_value_363;
        PyObject *tmp_args_element_value_364;
        PyObject *tmp_args_element_value_365;
        PyObject *tmp_expression_value_460;
        PyObject *tmp_expression_value_461;
        PyObject *tmp_args_element_value_366;
        PyObject *tmp_expression_value_462;
        PyObject *tmp_expression_value_463;
        tmp_expression_value_459 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_459 == NULL)) {
            tmp_expression_value_459 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_459 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_131 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_459, mod_consts[8]);
        if (tmp_called_value_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_363 = mod_consts[10];
        tmp_args_element_value_364 = mod_consts[10];
        tmp_expression_value_461 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_461 == NULL)) {
            tmp_expression_value_461 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_461 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);

            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_460 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_461, mod_consts[11]);
        if (tmp_expression_value_460 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);

            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_365 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_460, mod_consts[157]);
        Py_DECREF(tmp_expression_value_460);
        if (tmp_args_element_value_365 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);

            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_463 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_463 == NULL)) {
            tmp_expression_value_463 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_463 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_args_element_value_365);

            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_462 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_463, mod_consts[11]);
        if (tmp_expression_value_462 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_args_element_value_365);

            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_366 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_462, mod_consts[13]);
        Py_DECREF(tmp_expression_value_462);
        if (tmp_args_element_value_366 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_131);
            Py_DECREF(tmp_args_element_value_365);

            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 330;
        {
            PyObject *call_args[] = {tmp_args_element_value_363, tmp_args_element_value_364, tmp_args_element_value_365, tmp_args_element_value_366};
            tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_131, call_args);
        }

        Py_DECREF(tmp_called_value_131);
        Py_DECREF(tmp_args_element_value_365);
        Py_DECREF(tmp_args_element_value_366);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem18 == NULL);
        var_spacerItem18 = tmp_assign_source_34;
    }
    {
        PyObject *tmp_called_instance_191;
        PyObject *tmp_expression_value_464;
        PyObject *tmp_call_result_223;
        PyObject *tmp_args_element_value_367;
        CHECK_OBJECT(par_self);
        tmp_expression_value_464 = par_self;
        tmp_called_instance_191 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_464, mod_consts[182]);
        if (tmp_called_instance_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem18);
        tmp_args_element_value_367 = var_spacerItem18;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 331;
        tmp_call_result_223 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_191, mod_consts[14], tmp_args_element_value_367);
        Py_DECREF(tmp_called_instance_191);
        if (tmp_call_result_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_223);
    }
    {
        PyObject *tmp_called_value_132;
        PyObject *tmp_expression_value_465;
        PyObject *tmp_expression_value_466;
        PyObject *tmp_call_result_224;
        PyObject *tmp_args_element_value_368;
        PyObject *tmp_expression_value_467;
        CHECK_OBJECT(par_self);
        tmp_expression_value_466 = par_self;
        tmp_expression_value_465 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_466, mod_consts[180]);
        if (tmp_expression_value_465 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_132 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_465, mod_consts[64]);
        Py_DECREF(tmp_expression_value_465);
        if (tmp_called_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_467 = par_self;
        tmp_args_element_value_368 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_467, mod_consts[182]);
        if (tmp_args_element_value_368 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_132);

            exception_lineno = 332;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 332;
        tmp_call_result_224 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_132, tmp_args_element_value_368);
        Py_DECREF(tmp_called_value_132);
        Py_DECREF(tmp_args_element_value_368);
        if (tmp_call_result_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_224);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_133;
        PyObject *tmp_expression_value_468;
        PyObject *tmp_args_element_value_369;
        PyObject *tmp_args_element_value_370;
        PyObject *tmp_args_element_value_371;
        PyObject *tmp_expression_value_469;
        PyObject *tmp_expression_value_470;
        PyObject *tmp_args_element_value_372;
        PyObject *tmp_expression_value_471;
        PyObject *tmp_expression_value_472;
        tmp_expression_value_468 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_468 == NULL)) {
            tmp_expression_value_468 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_468 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_133 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_468, mod_consts[8]);
        if (tmp_called_value_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_369 = mod_consts[10];
        tmp_args_element_value_370 = mod_consts[10];
        tmp_expression_value_470 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_470 == NULL)) {
            tmp_expression_value_470 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_470 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);

            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_469 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_470, mod_consts[11]);
        if (tmp_expression_value_469 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);

            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_371 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_469, mod_consts[13]);
        Py_DECREF(tmp_expression_value_469);
        if (tmp_args_element_value_371 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);

            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_472 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_472 == NULL)) {
            tmp_expression_value_472 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_472 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);
            Py_DECREF(tmp_args_element_value_371);

            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_471 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_472, mod_consts[11]);
        if (tmp_expression_value_471 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);
            Py_DECREF(tmp_args_element_value_371);

            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_372 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_471, mod_consts[157]);
        Py_DECREF(tmp_expression_value_471);
        if (tmp_args_element_value_372 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);
            Py_DECREF(tmp_args_element_value_371);

            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = {tmp_args_element_value_369, tmp_args_element_value_370, tmp_args_element_value_371, tmp_args_element_value_372};
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_133, call_args);
        }

        Py_DECREF(tmp_called_value_133);
        Py_DECREF(tmp_args_element_value_371);
        Py_DECREF(tmp_args_element_value_372);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem19 == NULL);
        var_spacerItem19 = tmp_assign_source_35;
    }
    {
        PyObject *tmp_called_instance_192;
        PyObject *tmp_expression_value_473;
        PyObject *tmp_call_result_225;
        PyObject *tmp_args_element_value_373;
        CHECK_OBJECT(par_self);
        tmp_expression_value_473 = par_self;
        tmp_called_instance_192 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_473, mod_consts[180]);
        if (tmp_called_instance_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem19);
        tmp_args_element_value_373 = var_spacerItem19;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 334;
        tmp_call_result_225 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_192, mod_consts[14], tmp_args_element_value_373);
        Py_DECREF(tmp_called_instance_192);
        if (tmp_call_result_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_225);
    }
    {
        PyObject *tmp_assattr_value_60;
        PyObject *tmp_called_instance_193;
        PyObject *tmp_assattr_target_60;
        tmp_called_instance_193 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_193 == NULL)) {
            tmp_called_instance_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 335;
        tmp_assattr_value_60 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_193, mod_consts[42]);
        if (tmp_assattr_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_60 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_60, mod_consts[192], tmp_assattr_value_60);
        Py_DECREF(tmp_assattr_value_60);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_194;
        PyObject *tmp_expression_value_474;
        PyObject *tmp_call_result_226;
        CHECK_OBJECT(par_self);
        tmp_expression_value_474 = par_self;
        tmp_called_instance_194 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_474, mod_consts[192]);
        if (tmp_called_instance_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 336;
        tmp_call_result_226 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_194,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[193], 0)
        );

        Py_DECREF(tmp_called_instance_194);
        if (tmp_call_result_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_226);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_134;
        PyObject *tmp_expression_value_475;
        PyObject *tmp_args_element_value_374;
        PyObject *tmp_args_element_value_375;
        PyObject *tmp_args_element_value_376;
        PyObject *tmp_expression_value_476;
        PyObject *tmp_expression_value_477;
        PyObject *tmp_args_element_value_377;
        PyObject *tmp_expression_value_478;
        PyObject *tmp_expression_value_479;
        tmp_expression_value_475 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_475 == NULL)) {
            tmp_expression_value_475 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_475 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_134 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_475, mod_consts[8]);
        if (tmp_called_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_374 = mod_consts[10];
        tmp_args_element_value_375 = mod_consts[10];
        tmp_expression_value_477 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_477 == NULL)) {
            tmp_expression_value_477 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_477 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);

            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_476 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_477, mod_consts[11]);
        if (tmp_expression_value_476 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);

            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_376 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_476, mod_consts[157]);
        Py_DECREF(tmp_expression_value_476);
        if (tmp_args_element_value_376 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);

            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_479 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_479 == NULL)) {
            tmp_expression_value_479 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_479 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_args_element_value_376);

            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_478 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_479, mod_consts[11]);
        if (tmp_expression_value_478 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_args_element_value_376);

            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_377 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_478, mod_consts[13]);
        Py_DECREF(tmp_expression_value_478);
        if (tmp_args_element_value_377 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_args_element_value_376);

            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 337;
        {
            PyObject *call_args[] = {tmp_args_element_value_374, tmp_args_element_value_375, tmp_args_element_value_376, tmp_args_element_value_377};
            tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_134, call_args);
        }

        Py_DECREF(tmp_called_value_134);
        Py_DECREF(tmp_args_element_value_376);
        Py_DECREF(tmp_args_element_value_377);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem20 == NULL);
        var_spacerItem20 = tmp_assign_source_36;
    }
    {
        PyObject *tmp_called_instance_195;
        PyObject *tmp_expression_value_480;
        PyObject *tmp_call_result_227;
        PyObject *tmp_args_element_value_378;
        CHECK_OBJECT(par_self);
        tmp_expression_value_480 = par_self;
        tmp_called_instance_195 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_480, mod_consts[192]);
        if (tmp_called_instance_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem20);
        tmp_args_element_value_378 = var_spacerItem20;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 338;
        tmp_call_result_227 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_195, mod_consts[14], tmp_args_element_value_378);
        Py_DECREF(tmp_called_instance_195);
        if (tmp_call_result_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_227);
    }
    {
        PyObject *tmp_assattr_value_61;
        PyObject *tmp_called_value_135;
        PyObject *tmp_args_element_value_379;
        PyObject *tmp_assattr_target_61;
        tmp_called_value_135 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_135 == NULL)) {
            tmp_called_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_HomePage);
        tmp_args_element_value_379 = par_HomePage;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 339;
        tmp_assattr_value_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_135, tmp_args_element_value_379);
        if (tmp_assattr_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_61 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_61, mod_consts[67], tmp_assattr_value_61);
        Py_DECREF(tmp_assattr_value_61);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_136;
        PyObject *tmp_expression_value_481;
        PyObject *tmp_expression_value_482;
        PyObject *tmp_call_result_228;
        PyObject *tmp_args_element_value_380;
        PyObject *tmp_expression_value_483;
        PyObject *tmp_expression_value_484;
        CHECK_OBJECT(par_self);
        tmp_expression_value_482 = par_self;
        tmp_expression_value_481 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_482, mod_consts[67]);
        if (tmp_expression_value_481 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_136 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_481, mod_consts[31]);
        Py_DECREF(tmp_expression_value_481);
        if (tmp_called_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_484 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_484 == NULL)) {
            tmp_expression_value_484 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_484 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);

            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_483 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_484, mod_consts[33]);
        if (tmp_expression_value_483 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);

            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_380 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_483, mod_consts[34]);
        Py_DECREF(tmp_expression_value_483);
        if (tmp_args_element_value_380 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);

            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 340;
        tmp_call_result_228 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_136, tmp_args_element_value_380);
        Py_DECREF(tmp_called_value_136);
        Py_DECREF(tmp_args_element_value_380);
        if (tmp_call_result_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_228);
    }
    {
        PyObject *tmp_called_instance_196;
        PyObject *tmp_expression_value_485;
        PyObject *tmp_call_result_229;
        CHECK_OBJECT(par_self);
        tmp_expression_value_485 = par_self;
        tmp_called_instance_196 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_485, mod_consts[67]);
        if (tmp_called_instance_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 341;
        tmp_call_result_229 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_196,
            mod_consts[0],
            PyTuple_GET_ITEM(mod_consts[194], 0)
        );

        Py_DECREF(tmp_called_instance_196);
        if (tmp_call_result_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_229);
    }
    {
        PyObject *tmp_called_value_137;
        PyObject *tmp_expression_value_486;
        PyObject *tmp_expression_value_487;
        PyObject *tmp_call_result_230;
        PyObject *tmp_args_element_value_381;
        PyObject *tmp_expression_value_488;
        CHECK_OBJECT(par_self);
        tmp_expression_value_487 = par_self;
        tmp_expression_value_486 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_487, mod_consts[192]);
        if (tmp_expression_value_486 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_137 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_486, mod_consts[36]);
        Py_DECREF(tmp_expression_value_486);
        if (tmp_called_value_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_488 = par_self;
        tmp_args_element_value_381 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_488, mod_consts[67]);
        if (tmp_args_element_value_381 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_137);

            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 342;
        tmp_call_result_230 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_137, tmp_args_element_value_381);
        Py_DECREF(tmp_called_value_137);
        Py_DECREF(tmp_args_element_value_381);
        if (tmp_call_result_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_230);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_138;
        PyObject *tmp_expression_value_489;
        PyObject *tmp_args_element_value_382;
        PyObject *tmp_args_element_value_383;
        PyObject *tmp_args_element_value_384;
        PyObject *tmp_expression_value_490;
        PyObject *tmp_expression_value_491;
        PyObject *tmp_args_element_value_385;
        PyObject *tmp_expression_value_492;
        PyObject *tmp_expression_value_493;
        tmp_expression_value_489 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_489 == NULL)) {
            tmp_expression_value_489 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_489 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_138 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_489, mod_consts[8]);
        if (tmp_called_value_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_382 = mod_consts[10];
        tmp_args_element_value_383 = mod_consts[10];
        tmp_expression_value_491 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_491 == NULL)) {
            tmp_expression_value_491 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_491 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_490 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_491, mod_consts[11]);
        if (tmp_expression_value_490 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_384 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_490, mod_consts[157]);
        Py_DECREF(tmp_expression_value_490);
        if (tmp_args_element_value_384 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_493 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_493 == NULL)) {
            tmp_expression_value_493 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_493 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_args_element_value_384);

            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_492 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_493, mod_consts[11]);
        if (tmp_expression_value_492 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_args_element_value_384);

            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_385 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_492, mod_consts[13]);
        Py_DECREF(tmp_expression_value_492);
        if (tmp_args_element_value_385 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_args_element_value_384);

            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = {tmp_args_element_value_382, tmp_args_element_value_383, tmp_args_element_value_384, tmp_args_element_value_385};
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_138, call_args);
        }

        Py_DECREF(tmp_called_value_138);
        Py_DECREF(tmp_args_element_value_384);
        Py_DECREF(tmp_args_element_value_385);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spacerItem21 == NULL);
        var_spacerItem21 = tmp_assign_source_37;
    }
    {
        PyObject *tmp_called_instance_197;
        PyObject *tmp_expression_value_494;
        PyObject *tmp_call_result_231;
        PyObject *tmp_args_element_value_386;
        CHECK_OBJECT(par_self);
        tmp_expression_value_494 = par_self;
        tmp_called_instance_197 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_494, mod_consts[192]);
        if (tmp_called_instance_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spacerItem21);
        tmp_args_element_value_386 = var_spacerItem21;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 344;
        tmp_call_result_231 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_197, mod_consts[14], tmp_args_element_value_386);
        Py_DECREF(tmp_called_instance_197);
        if (tmp_call_result_231 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_231);
    }
    {
        PyObject *tmp_called_value_139;
        PyObject *tmp_expression_value_495;
        PyObject *tmp_expression_value_496;
        PyObject *tmp_call_result_232;
        PyObject *tmp_args_element_value_387;
        PyObject *tmp_expression_value_497;
        CHECK_OBJECT(par_self);
        tmp_expression_value_496 = par_self;
        tmp_expression_value_495 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_496, mod_consts[180]);
        if (tmp_expression_value_495 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_139 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_495, mod_consts[64]);
        Py_DECREF(tmp_expression_value_495);
        if (tmp_called_value_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_497 = par_self;
        tmp_args_element_value_387 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_497, mod_consts[192]);
        if (tmp_args_element_value_387 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_139);

            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 345;
        tmp_call_result_232 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_139, tmp_args_element_value_387);
        Py_DECREF(tmp_called_value_139);
        Py_DECREF(tmp_args_element_value_387);
        if (tmp_call_result_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_232);
    }
    {
        PyObject *tmp_called_value_140;
        PyObject *tmp_expression_value_498;
        PyObject *tmp_expression_value_499;
        PyObject *tmp_call_result_233;
        PyObject *tmp_args_element_value_388;
        PyObject *tmp_expression_value_500;
        CHECK_OBJECT(par_self);
        tmp_expression_value_499 = par_self;
        tmp_expression_value_498 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_499, mod_consts[153]);
        if (tmp_expression_value_498 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_140 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_498, mod_consts[64]);
        Py_DECREF(tmp_expression_value_498);
        if (tmp_called_value_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_500 = par_self;
        tmp_args_element_value_388 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_500, mod_consts[180]);
        if (tmp_args_element_value_388 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_140);

            exception_lineno = 346;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 346;
        tmp_call_result_233 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_140, tmp_args_element_value_388);
        Py_DECREF(tmp_called_value_140);
        Py_DECREF(tmp_args_element_value_388);
        if (tmp_call_result_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_233);
    }
    {
        PyObject *tmp_called_value_141;
        PyObject *tmp_expression_value_501;
        PyObject *tmp_expression_value_502;
        PyObject *tmp_call_result_234;
        PyObject *tmp_args_element_value_389;
        PyObject *tmp_expression_value_503;
        CHECK_OBJECT(par_self);
        tmp_expression_value_502 = par_self;
        tmp_expression_value_501 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_502, mod_consts[43]);
        if (tmp_expression_value_501 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_141 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_501, mod_consts[64]);
        Py_DECREF(tmp_expression_value_501);
        if (tmp_called_value_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_503 = par_self;
        tmp_args_element_value_389 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_503, mod_consts[153]);
        if (tmp_args_element_value_389 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_141);

            exception_lineno = 347;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 347;
        tmp_call_result_234 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_141, tmp_args_element_value_389);
        Py_DECREF(tmp_called_value_141);
        Py_DECREF(tmp_args_element_value_389);
        if (tmp_call_result_234 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_234);
    }
    {
        PyObject *tmp_called_value_142;
        PyObject *tmp_expression_value_504;
        PyObject *tmp_expression_value_505;
        PyObject *tmp_call_result_235;
        PyObject *tmp_args_element_value_390;
        PyObject *tmp_expression_value_506;
        PyObject *tmp_args_element_value_391;
        PyObject *tmp_args_element_value_392;
        PyObject *tmp_args_element_value_393;
        PyObject *tmp_args_element_value_394;
        CHECK_OBJECT(par_self);
        tmp_expression_value_505 = par_self;
        tmp_expression_value_504 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_505, mod_consts[6]);
        if (tmp_expression_value_504 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_142 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_504, mod_consts[64]);
        Py_DECREF(tmp_expression_value_504);
        if (tmp_called_value_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_506 = par_self;
        tmp_args_element_value_390 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_506, mod_consts[43]);
        if (tmp_args_element_value_390 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_142);

            exception_lineno = 348;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_391 = mod_consts[41];
        tmp_args_element_value_392 = mod_consts[15];
        tmp_args_element_value_393 = mod_consts[16];
        tmp_args_element_value_394 = mod_consts[41];
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 348;
        {
            PyObject *call_args[] = {tmp_args_element_value_390, tmp_args_element_value_391, tmp_args_element_value_392, tmp_args_element_value_393, tmp_args_element_value_394};
            tmp_call_result_235 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_142, call_args);
        }

        Py_DECREF(tmp_called_value_142);
        Py_DECREF(tmp_args_element_value_390);
        if (tmp_call_result_235 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_235);
    }
    {
        PyObject *tmp_called_instance_198;
        PyObject *tmp_call_result_236;
        PyObject *tmp_args_element_value_395;
        CHECK_OBJECT(par_self);
        tmp_called_instance_198 = par_self;
        CHECK_OBJECT(par_HomePage);
        tmp_args_element_value_395 = par_HomePage;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 350;
        tmp_call_result_236 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_198, mod_consts[195], tmp_args_element_value_395);
        if (tmp_call_result_236 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_236);
    }
    {
        PyObject *tmp_called_instance_199;
        PyObject *tmp_expression_value_507;
        PyObject *tmp_call_result_237;
        PyObject *tmp_args_element_value_396;
        tmp_expression_value_507 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_507 == NULL)) {
            tmp_expression_value_507 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_507 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_199 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_507, mod_consts[196]);
        if (tmp_called_instance_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_HomePage);
        tmp_args_element_value_396 = par_HomePage;
        frame_242d792fe32cc5d3ad5e508585620491->m_frame.f_lineno = 351;
        tmp_call_result_237 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_199, mod_consts[197], tmp_args_element_value_396);
        Py_DECREF(tmp_called_instance_199);
        if (tmp_call_result_237 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_237);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_242d792fe32cc5d3ad5e508585620491, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_242d792fe32cc5d3ad5e508585620491->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_242d792fe32cc5d3ad5e508585620491, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_242d792fe32cc5d3ad5e508585620491,
        type_description_1,
        par_self,
        par_HomePage,
        var_spacerItem,
        var_spacerItem1,
        var_font,
        var_spacerItem2,
        var_spacerItem3,
        var_spacerItem4,
        var_spacerItem5,
        var_spacerItem6,
        var_spacerItem7,
        var_spacerItem8,
        var_spacerItem9,
        var_spacerItem10,
        var_spacerItem11,
        var_spacerItem12,
        var_spacerItem13,
        var_spacerItem14,
        var_spacerItem15,
        var_sizePolicy,
        var_icon,
        var_spacerItem16,
        var_spacerItem17,
        var_spacerItem18,
        var_spacerItem19,
        var_spacerItem20,
        var_spacerItem21
    );


    // Release cached frame if used for exception.
    if (frame_242d792fe32cc5d3ad5e508585620491 == cache_frame_242d792fe32cc5d3ad5e508585620491) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_242d792fe32cc5d3ad5e508585620491);
        cache_frame_242d792fe32cc5d3ad5e508585620491 = NULL;
    }

    assertFrameObject(frame_242d792fe32cc5d3ad5e508585620491);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_spacerItem);
    Py_DECREF(var_spacerItem);
    var_spacerItem = NULL;
    CHECK_OBJECT(var_spacerItem1);
    Py_DECREF(var_spacerItem1);
    var_spacerItem1 = NULL;
    CHECK_OBJECT(var_font);
    Py_DECREF(var_font);
    var_font = NULL;
    CHECK_OBJECT(var_spacerItem2);
    Py_DECREF(var_spacerItem2);
    var_spacerItem2 = NULL;
    CHECK_OBJECT(var_spacerItem3);
    Py_DECREF(var_spacerItem3);
    var_spacerItem3 = NULL;
    CHECK_OBJECT(var_spacerItem4);
    Py_DECREF(var_spacerItem4);
    var_spacerItem4 = NULL;
    CHECK_OBJECT(var_spacerItem5);
    Py_DECREF(var_spacerItem5);
    var_spacerItem5 = NULL;
    CHECK_OBJECT(var_spacerItem6);
    Py_DECREF(var_spacerItem6);
    var_spacerItem6 = NULL;
    CHECK_OBJECT(var_spacerItem7);
    Py_DECREF(var_spacerItem7);
    var_spacerItem7 = NULL;
    CHECK_OBJECT(var_spacerItem8);
    Py_DECREF(var_spacerItem8);
    var_spacerItem8 = NULL;
    CHECK_OBJECT(var_spacerItem9);
    Py_DECREF(var_spacerItem9);
    var_spacerItem9 = NULL;
    CHECK_OBJECT(var_spacerItem10);
    Py_DECREF(var_spacerItem10);
    var_spacerItem10 = NULL;
    CHECK_OBJECT(var_spacerItem11);
    Py_DECREF(var_spacerItem11);
    var_spacerItem11 = NULL;
    CHECK_OBJECT(var_spacerItem12);
    Py_DECREF(var_spacerItem12);
    var_spacerItem12 = NULL;
    CHECK_OBJECT(var_spacerItem13);
    Py_DECREF(var_spacerItem13);
    var_spacerItem13 = NULL;
    CHECK_OBJECT(var_spacerItem14);
    Py_DECREF(var_spacerItem14);
    var_spacerItem14 = NULL;
    CHECK_OBJECT(var_spacerItem15);
    Py_DECREF(var_spacerItem15);
    var_spacerItem15 = NULL;
    CHECK_OBJECT(var_sizePolicy);
    Py_DECREF(var_sizePolicy);
    var_sizePolicy = NULL;
    CHECK_OBJECT(var_icon);
    Py_DECREF(var_icon);
    var_icon = NULL;
    CHECK_OBJECT(var_spacerItem16);
    Py_DECREF(var_spacerItem16);
    var_spacerItem16 = NULL;
    CHECK_OBJECT(var_spacerItem17);
    Py_DECREF(var_spacerItem17);
    var_spacerItem17 = NULL;
    CHECK_OBJECT(var_spacerItem18);
    Py_DECREF(var_spacerItem18);
    var_spacerItem18 = NULL;
    CHECK_OBJECT(var_spacerItem19);
    Py_DECREF(var_spacerItem19);
    var_spacerItem19 = NULL;
    CHECK_OBJECT(var_spacerItem20);
    Py_DECREF(var_spacerItem20);
    var_spacerItem20 = NULL;
    CHECK_OBJECT(var_spacerItem21);
    Py_DECREF(var_spacerItem21);
    var_spacerItem21 = NULL;
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

    Py_XDECREF(var_spacerItem);
    var_spacerItem = NULL;
    Py_XDECREF(var_spacerItem1);
    var_spacerItem1 = NULL;
    Py_XDECREF(var_font);
    var_font = NULL;
    Py_XDECREF(var_spacerItem2);
    var_spacerItem2 = NULL;
    Py_XDECREF(var_spacerItem3);
    var_spacerItem3 = NULL;
    Py_XDECREF(var_spacerItem4);
    var_spacerItem4 = NULL;
    Py_XDECREF(var_spacerItem5);
    var_spacerItem5 = NULL;
    Py_XDECREF(var_spacerItem6);
    var_spacerItem6 = NULL;
    Py_XDECREF(var_spacerItem7);
    var_spacerItem7 = NULL;
    Py_XDECREF(var_spacerItem8);
    var_spacerItem8 = NULL;
    Py_XDECREF(var_spacerItem9);
    var_spacerItem9 = NULL;
    Py_XDECREF(var_spacerItem10);
    var_spacerItem10 = NULL;
    Py_XDECREF(var_spacerItem11);
    var_spacerItem11 = NULL;
    Py_XDECREF(var_spacerItem12);
    var_spacerItem12 = NULL;
    Py_XDECREF(var_spacerItem13);
    var_spacerItem13 = NULL;
    Py_XDECREF(var_spacerItem14);
    var_spacerItem14 = NULL;
    Py_XDECREF(var_spacerItem15);
    var_spacerItem15 = NULL;
    Py_XDECREF(var_sizePolicy);
    var_sizePolicy = NULL;
    Py_XDECREF(var_icon);
    var_icon = NULL;
    Py_XDECREF(var_spacerItem16);
    var_spacerItem16 = NULL;
    Py_XDECREF(var_spacerItem17);
    var_spacerItem17 = NULL;
    Py_XDECREF(var_spacerItem18);
    var_spacerItem18 = NULL;
    Py_XDECREF(var_spacerItem19);
    var_spacerItem19 = NULL;
    Py_XDECREF(var_spacerItem20);
    var_spacerItem20 = NULL;
    Py_XDECREF(var_spacerItem21);
    var_spacerItem21 = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_HomePage);
    Py_DECREF(par_HomePage);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_HomePage);
    Py_DECREF(par_HomePage);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_Design$Ui_HomePage$$$function__2_retranslateUi(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_HomePage = python_pars[1];
    PyObject *var__translate = NULL;
    struct Nuitka_FrameObject *frame_ced282b4e9aa3c5a96099fae69278649;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ced282b4e9aa3c5a96099fae69278649 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ced282b4e9aa3c5a96099fae69278649)) {
        Py_XDECREF(cache_frame_ced282b4e9aa3c5a96099fae69278649);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ced282b4e9aa3c5a96099fae69278649 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ced282b4e9aa3c5a96099fae69278649 = MAKE_FUNCTION_FRAME(tstate, codeobj_ced282b4e9aa3c5a96099fae69278649, module_Design$Ui_HomePage, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ced282b4e9aa3c5a96099fae69278649->m_type_description == NULL);
    frame_ced282b4e9aa3c5a96099fae69278649 = cache_frame_ced282b4e9aa3c5a96099fae69278649;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ced282b4e9aa3c5a96099fae69278649);
    assert(Py_REFCNT(frame_ced282b4e9aa3c5a96099fae69278649) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[198]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[199]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var__translate == NULL);
        var__translate = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_HomePage);
        tmp_expression_value_3 = par_HomePage;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[200]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_2 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 355;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_2, mod_consts[201]);

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 355;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 355;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[19]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[202]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_4 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 356;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_4, mod_consts[203]);

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 356;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 356;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[56]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[202]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_6 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 357;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_6, mod_consts[204]);

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 357;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 357;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[68]);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[202]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_8 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 358;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_8, mod_consts[205]);

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 358;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 358;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[73]);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[202]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_10 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 359;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_10, mod_consts[206]);

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 359;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 359;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[81]);
        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[202]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_12 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 360;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_12, mod_consts[207]);

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 360;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 360;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_14;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[86]);
        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[202]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_14 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 361;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_14, mod_consts[208]);

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 361;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 361;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_16;
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[18]);
        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[202]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_16 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 362;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_16, mod_consts[209]);

        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 362;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 362;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_18;
        CHECK_OBJECT(par_self);
        tmp_expression_value_19 = par_self;
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[95]);
        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[202]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_18 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 363;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_18, mod_consts[210]);

        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 363;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 363;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_20;
        CHECK_OBJECT(par_self);
        tmp_expression_value_21 = par_self;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[101]);
        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[202]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_20 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 364;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_20, mod_consts[211]);

        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 364;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 364;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_22;
        CHECK_OBJECT(par_self);
        tmp_expression_value_23 = par_self;
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[103]);
        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[202]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_22 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 365;
        tmp_args_element_value_11 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_22, mod_consts[212]);

        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 365;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 365;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_24;
        CHECK_OBJECT(par_self);
        tmp_expression_value_25 = par_self;
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[111]);
        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[202]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_24 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 366;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_24, mod_consts[208]);

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 366;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 366;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_value_26;
        CHECK_OBJECT(par_self);
        tmp_expression_value_27 = par_self;
        tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[113]);
        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[202]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_26 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 367;
        tmp_args_element_value_13 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_26, mod_consts[213]);

        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 367;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 367;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_28;
        CHECK_OBJECT(par_self);
        tmp_expression_value_29 = par_self;
        tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[117]);
        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[202]);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_28 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 368;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_28, mod_consts[214]);

        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 368;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 368;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_30;
        CHECK_OBJECT(par_self);
        tmp_expression_value_31 = par_self;
        tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[127]);
        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[202]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_30 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 369;
        tmp_args_element_value_15 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_30, mod_consts[215]);

        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 369;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 369;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_32;
        CHECK_OBJECT(par_self);
        tmp_expression_value_33 = par_self;
        tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[129]);
        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[202]);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_32 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 370;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_32, mod_consts[216]);

        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 370;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 370;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_value_34;
        CHECK_OBJECT(par_self);
        tmp_expression_value_35 = par_self;
        tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[133]);
        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[202]);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_34 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 371;
        tmp_args_element_value_17 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_34, mod_consts[217]);

        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 371;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 371;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_36;
        CHECK_OBJECT(par_self);
        tmp_expression_value_37 = par_self;
        tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[143]);
        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[202]);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_36 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 372;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_36, mod_consts[218]);

        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 372;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 372;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_value_38;
        CHECK_OBJECT(par_self);
        tmp_expression_value_39 = par_self;
        tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[145]);
        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[202]);
        Py_DECREF(tmp_expression_value_38);
        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_38 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 373;
        tmp_args_element_value_19 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_38, mod_consts[219]);

        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 373;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 373;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_40;
        CHECK_OBJECT(par_self);
        tmp_expression_value_41 = par_self;
        tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[149]);
        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[202]);
        Py_DECREF(tmp_expression_value_40);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_40 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 374;
        tmp_args_element_value_20 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_40, mod_consts[220]);

        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 374;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 374;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_42;
        CHECK_OBJECT(par_self);
        tmp_expression_value_43 = par_self;
        tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[67]);
        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[202]);
        Py_DECREF(tmp_expression_value_42);
        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_value_42 = var__translate;
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 375;
        tmp_args_element_value_21 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_42, mod_consts[221]);

        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 375;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ced282b4e9aa3c5a96099fae69278649->m_frame.f_lineno = 375;
        tmp_call_result_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ced282b4e9aa3c5a96099fae69278649, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ced282b4e9aa3c5a96099fae69278649->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ced282b4e9aa3c5a96099fae69278649, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ced282b4e9aa3c5a96099fae69278649,
        type_description_1,
        par_self,
        par_HomePage,
        var__translate
    );


    // Release cached frame if used for exception.
    if (frame_ced282b4e9aa3c5a96099fae69278649 == cache_frame_ced282b4e9aa3c5a96099fae69278649) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ced282b4e9aa3c5a96099fae69278649);
        cache_frame_ced282b4e9aa3c5a96099fae69278649 = NULL;
    }

    assertFrameObject(frame_ced282b4e9aa3c5a96099fae69278649);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__translate);
    Py_DECREF(var__translate);
    var__translate = NULL;
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

    Py_XDECREF(var__translate);
    var__translate = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_HomePage);
    Py_DECREF(par_HomePage);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_HomePage);
    Py_DECREF(par_HomePage);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_Design$Ui_HomePage$$$function__1_setupUi() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Design$Ui_HomePage$$$function__1_setupUi,
        mod_consts[240],
#if PYTHON_VERSION >= 0x300
        mod_consts[241],
#endif
        codeobj_242d792fe32cc5d3ad5e508585620491,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Design$Ui_HomePage,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Design$Ui_HomePage$$$function__2_retranslateUi() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Design$Ui_HomePage$$$function__2_retranslateUi,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        mod_consts[242],
#endif
        codeobj_ced282b4e9aa3c5a96099fae69278649,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Design$Ui_HomePage,
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

function_impl_code functable_Design$Ui_HomePage[] = {
    impl_Design$Ui_HomePage$$$function__1_setupUi,
    impl_Design$Ui_HomePage$$$function__2_retranslateUi,
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

    function_impl_code *current = functable_Design$Ui_HomePage;
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

    if (offset > sizeof(functable_Design$Ui_HomePage) || offset < 0) {
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
        functable_Design$Ui_HomePage[offset],
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
        module_Design$Ui_HomePage,
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
PyObject *modulecode_Design$Ui_HomePage(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("Design.Ui_HomePage");

    // Store the module for future use.
    module_Design$Ui_HomePage = module;

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
        PRINT_STRING("Design.Ui_HomePage: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("Design.Ui_HomePage: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initDesign$Ui_HomePage\n");

    moduledict_Design$Ui_HomePage = MODULE_DICT(module_Design$Ui_HomePage);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_Design$Ui_HomePage,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_Design$Ui_HomePage,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[251]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_Design$Ui_HomePage,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_Design$Ui_HomePage,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_Design$Ui_HomePage,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_Design$Ui_HomePage);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_Design$Ui_HomePage);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_fe67db36a9b349755a6fa20ec2d7c820;
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
    int tmp_res;
    PyObject *locals_Design$Ui_HomePage$$$class__1_Ui_HomePage_14 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_6f038692133177fa534b36478d8d50bb_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_2);
    }
    frame_fe67db36a9b349755a6fa20ec2d7c820 = MAKE_MODULE_FRAME(codeobj_fe67db36a9b349755a6fa20ec2d7c820, module_Design$Ui_HomePage);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fe67db36a9b349755a6fa20ec2d7c820);
    assert(Py_REFCNT(frame_fe67db36a9b349755a6fa20ec2d7c820) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[224]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[225], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[224]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[226], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[228];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_Design$Ui_HomePage;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[229];
        tmp_level_value_1 = mod_consts[15];
        frame_fe67db36a9b349755a6fa20ec2d7c820->m_frame.f_lineno = 11;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_Design$Ui_HomePage,
                mod_consts[32],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[32]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_Design$Ui_HomePage,
                mod_consts[20],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[20]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_Design$Ui_HomePage,
                mod_consts[4],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[4]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_7);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[230];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_8 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
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


            exception_lineno = 14;

            goto try_except_handler_2;
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
        tmp_subscript_value_1 = mod_consts[15];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_10 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[231]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[231]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[232];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_fe67db36a9b349755a6fa20ec2d7c820->m_frame.f_lineno = 14;
        tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[233]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
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
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[234];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_2 = mod_consts[235];
        tmp_default_value_1 = mod_consts[236];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_2, tmp_default_value_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[235]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 14;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_12;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_Design$Ui_HomePage$$$class__1_Ui_HomePage_14 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[237];
        tmp_res = PyObject_SetItem(locals_Design$Ui_HomePage$$$class__1_Ui_HomePage_14, mod_consts[238], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[232];
        tmp_res = PyObject_SetItem(locals_Design$Ui_HomePage$$$class__1_Ui_HomePage_14, mod_consts[239], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        frame_6f038692133177fa534b36478d8d50bb_2 = MAKE_CLASS_FRAME(tstate, codeobj_6f038692133177fa534b36478d8d50bb, module_Design$Ui_HomePage, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_6f038692133177fa534b36478d8d50bb_2);
        assert(Py_REFCNT(frame_6f038692133177fa534b36478d8d50bb_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_Design$Ui_HomePage$$$function__1_setupUi();

        tmp_res = PyObject_SetItem(locals_Design$Ui_HomePage$$$class__1_Ui_HomePage_14, mod_consts[240], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_Design$Ui_HomePage$$$function__2_retranslateUi();

        tmp_res = PyObject_SetItem(locals_Design$Ui_HomePage$$$class__1_Ui_HomePage_14, mod_consts[195], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6f038692133177fa534b36478d8d50bb_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6f038692133177fa534b36478d8d50bb_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6f038692133177fa534b36478d8d50bb_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6f038692133177fa534b36478d8d50bb_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_6f038692133177fa534b36478d8d50bb_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[230];
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[230];
        tmp_res = PyObject_SetItem(locals_Design$Ui_HomePage$$$class__1_Ui_HomePage_14, mod_consts[243], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[232];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_Design$Ui_HomePage$$$class__1_Ui_HomePage_14;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_fe67db36a9b349755a6fa20ec2d7c820->m_frame.f_lineno = 14;
            tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_13 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_Design$Ui_HomePage$$$class__1_Ui_HomePage_14);
        locals_Design$Ui_HomePage$$$class__1_Ui_HomePage_14 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Design$Ui_HomePage$$$class__1_Ui_HomePage_14);
        locals_Design$Ui_HomePage$$$class__1_Ui_HomePage_14 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 14;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_13);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_3 = mod_consts[244];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_Design$Ui_HomePage;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[245];
        tmp_level_value_2 = mod_consts[15];
        frame_fe67db36a9b349755a6fa20ec2d7c820->m_frame.f_lineno = 376;
        tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_Design$Ui_HomePage,
                mod_consts[47],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[47]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_Design$Ui_HomePage,
                mod_consts[38],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[38]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_Design$Ui_HomePage,
                mod_consts[158],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[158]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_Design$Ui_HomePage,
                mod_consts[18],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[18]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_Design$Ui_HomePage,
                mod_consts[67],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[67]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_Design$Ui_HomePage,
                mod_consts[55],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[55]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_21);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fe67db36a9b349755a6fa20ec2d7c820, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fe67db36a9b349755a6fa20ec2d7c820->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fe67db36a9b349755a6fa20ec2d7c820, exception_lineno);
    }



    assertFrameObject(frame_fe67db36a9b349755a6fa20ec2d7c820);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("Design.Ui_HomePage", false);

    Py_INCREF(module_Design$Ui_HomePage);
    return module_Design$Ui_HomePage;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Design$Ui_HomePage, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("Design$Ui_HomePage", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
