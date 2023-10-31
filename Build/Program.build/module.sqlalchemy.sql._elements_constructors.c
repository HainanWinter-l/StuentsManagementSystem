/* Generated code for Python module 'sqlalchemy.sql._elements_constructors'
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

/* The "module_sqlalchemy$sql$_elements_constructors" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlalchemy$sql$_elements_constructors;
PyDictObject *moduledict_sqlalchemy$sql$_elements_constructors;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[219];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[219];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("sqlalchemy.sql._elements_constructors"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 219; i++) {
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
void checkModuleConstants_sqlalchemy$sql$_elements_constructors(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 219; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_38bfe2a39f872ae508926c863d28ccc4;
static PyCodeObject *codeobj_1be93d48b20236d989e0571ae1047297;
static PyCodeObject *codeobj_43bf1db8e8f5767ca3e334385c28469e;
static PyCodeObject *codeobj_8bca71f850e9f85d3fafb439f09bca46;
static PyCodeObject *codeobj_3a34bd8f00cee5d35363912cf3ddb598;
static PyCodeObject *codeobj_c8d3409441b5a44ce4b27ace8bb003c9;
static PyCodeObject *codeobj_a03b53dce32a8d7ca312fead03ab9a63;
static PyCodeObject *codeobj_2fdb76075a5bc20e6367e5cf27e8a070;
static PyCodeObject *codeobj_efe59188dfb3fd3e0f8d0d0ae8e36bfb;
static PyCodeObject *codeobj_1e8fc897a68bcec95b01fff5e3ee6fe9;
static PyCodeObject *codeobj_8787461d0c237059dad1ede7bdfbbc72;
static PyCodeObject *codeobj_5f83c9d6de6fc25847c0cf1d7d4af242;
static PyCodeObject *codeobj_46c1d0fa960cd2bb178177e0948a9ff9;
static PyCodeObject *codeobj_496e052f55221e1457cc9d260f505047;
static PyCodeObject *codeobj_2f184e7b87f6da531dc7e52defd009d6;
static PyCodeObject *codeobj_4bb9d9f1592886c5bd910684c62ee33d;
static PyCodeObject *codeobj_d0e2a3a196c346e9658fd482ae0540ee;
static PyCodeObject *codeobj_3c9fc9a19018d1d9f2d153cb4fae3a57;
static PyCodeObject *codeobj_411d71c9ad45edf8156c7f735ca3fddd;
static PyCodeObject *codeobj_099840af5d248d68aad4267c54c35170;
static PyCodeObject *codeobj_ee417a301dd43dcbd9dd9c1b9e8b7a1c;
static PyCodeObject *codeobj_3a203b085ba79eb81c7bb66d1589e909;
static PyCodeObject *codeobj_348cd188f1cf1931cba47425203de881;
static PyCodeObject *codeobj_e115693da0808392332cdee528255bb8;
static PyCodeObject *codeobj_0660e8a7157cd60b03232a55122b6d56;
static PyCodeObject *codeobj_67bc987c96818c75bad0abf8fed7448f;
static PyCodeObject *codeobj_8fdcbb279e9aa1ac33b9f31b12fce4b6;
static PyCodeObject *codeobj_a56452e73dbb259e32941f17c6be508a;
static PyCodeObject *codeobj_d43f91731cbb22131cbf8a1883f8dcb0;
static PyCodeObject *codeobj_b36adc1630cc0ab5eb0fb9fe45c53081;
static PyCodeObject *codeobj_a24bd62c372bac9ddddb24ce3bea2025;
static PyCodeObject *codeobj_8afd47881921d160a0463c10d52ab161;
static PyCodeObject *codeobj_4546763795b359e233d350fa2f6e2fd1;
static PyCodeObject *codeobj_f7484305b4b6b5c31de2af065d8f44d9;
static PyCodeObject *codeobj_25a537781bdb078b5ed3a9d324deede0;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[198]); CHECK_OBJECT(module_filename_obj);
    codeobj_38bfe2a39f872ae508926c863d28ccc4 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[199], mod_consts[199], NULL, NULL, 0, 0, 0);
    codeobj_1be93d48b20236d989e0571ae1047297 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[135], mod_consts[135], mod_consts[200], NULL, 1, 0, 0);
    codeobj_43bf1db8e8f5767ca3e334385c28469e = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts[4], mod_consts[4], mod_consts[201], NULL, 0, 0, 0);
    codeobj_8bca71f850e9f85d3fafb439f09bca46 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts[4], mod_consts[4], mod_consts[202], NULL, 1, 0, 0);
    codeobj_3a34bd8f00cee5d35363912cf3ddb598 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[138], mod_consts[138], mod_consts[200], NULL, 1, 0, 0);
    codeobj_c8d3409441b5a44ce4b27ace8bb003c9 = MAKE_CODE_OBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[140], mod_consts[140], mod_consts[203], NULL, 1, 0, 0);
    codeobj_a03b53dce32a8d7ca312fead03ab9a63 = MAKE_CODE_OBJECT(module_filename_obj, 365, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[18], mod_consts[18], mod_consts[204], NULL, 4, 0, 0);
    codeobj_2fdb76075a5bc20e6367e5cf27e8a070 = MAKE_CODE_OBJECT(module_filename_obj, 463, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[153], mod_consts[153], mod_consts[205], NULL, 10, 0, 0);
    codeobj_efe59188dfb3fd3e0f8d0d0ae8e36bfb = MAKE_CODE_OBJECT(module_filename_obj, 1129, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[167], mod_consts[167], mod_consts[200], NULL, 1, 0, 0);
    codeobj_1e8fc897a68bcec95b01fff5e3ee6fe9 = MAKE_CODE_OBJECT(module_filename_obj, 723, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts[156], mod_consts[156], mod_consts[206], NULL, 0, 2, 0);
    codeobj_8787461d0c237059dad1ede7bdfbbc72 = MAKE_CODE_OBJECT(module_filename_obj, 853, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[158], mod_consts[158], mod_consts[207], NULL, 2, 0, 0);
    codeobj_5f83c9d6de6fc25847c0cf1d7d4af242 = MAKE_CODE_OBJECT(module_filename_obj, 342, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[142], mod_consts[142], mod_consts[208], NULL, 2, 0, 0);
    codeobj_46c1d0fa960cd2bb178177e0948a9ff9 = MAKE_CODE_OBJECT(module_filename_obj, 953, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[163], mod_consts[163], mod_consts[209], NULL, 4, 0, 0);
    codeobj_496e052f55221e1457cc9d260f505047 = MAKE_CODE_OBJECT(module_filename_obj, 1049, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[164], mod_consts[164], mod_consts[203], NULL, 1, 0, 0);
    codeobj_2f184e7b87f6da531dc7e52defd009d6 = MAKE_CODE_OBJECT(module_filename_obj, 1090, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[166], mod_consts[166], mod_consts[200], NULL, 1, 0, 0);
    codeobj_4bb9d9f1592886c5bd910684c62ee33d = MAKE_CODE_OBJECT(module_filename_obj, 1146, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[169], mod_consts[169], mod_consts[210], NULL, 2, 0, 0);
    codeobj_d0e2a3a196c346e9658fd482ae0540ee = MAKE_CODE_OBJECT(module_filename_obj, 1187, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[171], mod_consts[171], NULL, NULL, 0, 0, 0);
    codeobj_3c9fc9a19018d1d9f2d153cb4fae3a57 = MAKE_CODE_OBJECT(module_filename_obj, 1227, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts[173], mod_consts[173], mod_consts[211], NULL, 1, 0, 0);
    codeobj_411d71c9ad45edf8156c7f735ca3fddd = MAKE_CODE_OBJECT(module_filename_obj, 1256, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[175], mod_consts[175], mod_consts[212], NULL, 3, 0, 0);
    codeobj_099840af5d248d68aad4267c54c35170 = MAKE_CODE_OBJECT(module_filename_obj, 442, CO_FUTURE_ANNOTATIONS, mod_consts[149], mod_consts[149], mod_consts[213], NULL, 1, 0, 0);
    codeobj_ee417a301dd43dcbd9dd9c1b9e8b7a1c = MAKE_CODE_OBJECT(module_filename_obj, 447, CO_FUTURE_ANNOTATIONS, mod_consts[149], mod_consts[149], mod_consts[213], NULL, 1, 0, 0);
    codeobj_3a203b085ba79eb81c7bb66d1589e909 = MAKE_CODE_OBJECT(module_filename_obj, 451, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[149], mod_consts[149], mod_consts[213], NULL, 1, 0, 0);
    codeobj_348cd188f1cf1931cba47425203de881 = MAKE_CODE_OBJECT(module_filename_obj, 1279, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[177], mod_consts[177], NULL, NULL, 0, 0, 0);
    codeobj_e115693da0808392332cdee528255bb8 = MAKE_CODE_OBJECT(module_filename_obj, 1285, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[179], mod_consts[179], mod_consts[203], NULL, 1, 0, 0);
    codeobj_0660e8a7157cd60b03232a55122b6d56 = MAKE_CODE_OBJECT(module_filename_obj, 1329, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[180], mod_consts[180], mod_consts[203], NULL, 1, 0, 0);
    codeobj_67bc987c96818c75bad0abf8fed7448f = MAKE_CODE_OBJECT(module_filename_obj, 1431, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts[58], mod_consts[58], mod_consts[201], NULL, 0, 0, 0);
    codeobj_8fdcbb279e9aa1ac33b9f31b12fce4b6 = MAKE_CODE_OBJECT(module_filename_obj, 1373, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts[58], mod_consts[58], mod_consts[202], NULL, 1, 0, 0);
    codeobj_a56452e73dbb259e32941f17c6be508a = MAKE_CODE_OBJECT(module_filename_obj, 424, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[147], mod_consts[147], mod_consts[214], NULL, 2, 0, 0);
    codeobj_d43f91731cbb22131cbf8a1883f8dcb0 = MAKE_CODE_OBJECT(module_filename_obj, 1484, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[185], mod_consts[185], mod_consts[215], NULL, 5, 0, 0);
    codeobj_b36adc1630cc0ab5eb0fb9fe45c53081 = MAKE_CODE_OBJECT(module_filename_obj, 1580, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[188], mod_consts[188], mod_consts[216], NULL, 1, 0, 0);
    codeobj_a24bd62c372bac9ddddb24ce3bea2025 = MAKE_CODE_OBJECT(module_filename_obj, 1657, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[190], mod_consts[190], NULL, NULL, 0, 0, 0);
    codeobj_8afd47881921d160a0463c10d52ab161 = MAKE_CODE_OBJECT(module_filename_obj, 910, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[160], mod_consts[160], mod_consts[207], NULL, 2, 0, 0);
    codeobj_4546763795b359e233d350fa2f6e2fd1 = MAKE_CODE_OBJECT(module_filename_obj, 1697, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts[193], mod_consts[193], mod_consts[217], NULL, 0, 1, 0);
    codeobj_f7484305b4b6b5c31de2af065d8f44d9 = MAKE_CODE_OBJECT(module_filename_obj, 1726, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[195], mod_consts[195], mod_consts[207], NULL, 2, 0, 0);
    codeobj_25a537781bdb078b5ed3a9d324deede0 = MAKE_CODE_OBJECT(module_filename_obj, 1811, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts[197], mod_consts[197], mod_consts[218], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__2_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__16_complex_call_helper_keywords_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_pos_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__10_not_(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__11_not_(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__12_bindparam(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__13_case(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__14_cast(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__15_try_cast(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__16_column(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__17_desc(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__18_distinct(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__19_bitwise_not(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__1_all_(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__20_extract(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__21_false(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__22_funcfilter(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__23_label(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__24_null(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__25_nulls_first(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__26_nulls_last(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__27_or_(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__28_or_();


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__29_over(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__2_and_(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__30_text(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__31_true(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__32_tuple_(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__33_type_coerce(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__34_within_group(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__3_and_();


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__4_any_(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__5_asc(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__6_collate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__7_between(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__8_outparam(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__9_not_(PyObject *annotations);


// The module function definitions.
static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__1_all_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_expr = python_pars[0];
    struct Nuitka_FrameObject *frame_1be93d48b20236d989e0571ae1047297;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1be93d48b20236d989e0571ae1047297 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1be93d48b20236d989e0571ae1047297)) {
        Py_XDECREF(cache_frame_1be93d48b20236d989e0571ae1047297);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1be93d48b20236d989e0571ae1047297 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1be93d48b20236d989e0571ae1047297 = MAKE_FUNCTION_FRAME(tstate, codeobj_1be93d48b20236d989e0571ae1047297, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1be93d48b20236d989e0571ae1047297->m_type_description == NULL);
    frame_1be93d48b20236d989e0571ae1047297 = cache_frame_1be93d48b20236d989e0571ae1047297;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1be93d48b20236d989e0571ae1047297);
    assert(Py_REFCNT(frame_1be93d48b20236d989e0571ae1047297) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expr);
        tmp_args_element_value_1 = par_expr;
        frame_1be93d48b20236d989e0571ae1047297->m_frame.f_lineno = 114;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
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
        exception_tb = MAKE_TRACEBACK(frame_1be93d48b20236d989e0571ae1047297, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1be93d48b20236d989e0571ae1047297->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1be93d48b20236d989e0571ae1047297, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1be93d48b20236d989e0571ae1047297,
        type_description_1,
        par_expr
    );


    // Release cached frame if used for exception.
    if (frame_1be93d48b20236d989e0571ae1047297 == cache_frame_1be93d48b20236d989e0571ae1047297) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1be93d48b20236d989e0571ae1047297);
        cache_frame_1be93d48b20236d989e0571ae1047297 = NULL;
    }

    assertFrameObject(frame_1be93d48b20236d989e0571ae1047297);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__3_and_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_clauses = python_pars[0];
    struct Nuitka_FrameObject *frame_43bf1db8e8f5767ca3e334385c28469e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_43bf1db8e8f5767ca3e334385c28469e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_43bf1db8e8f5767ca3e334385c28469e)) {
        Py_XDECREF(cache_frame_43bf1db8e8f5767ca3e334385c28469e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_43bf1db8e8f5767ca3e334385c28469e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_43bf1db8e8f5767ca3e334385c28469e = MAKE_FUNCTION_FRAME(tstate, codeobj_43bf1db8e8f5767ca3e334385c28469e, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_43bf1db8e8f5767ca3e334385c28469e->m_type_description == NULL);
    frame_43bf1db8e8f5767ca3e334385c28469e = cache_frame_43bf1db8e8f5767ca3e334385c28469e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_43bf1db8e8f5767ca3e334385c28469e);
    assert(Py_REFCNT(frame_43bf1db8e8f5767ca3e334385c28469e) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_clauses);
        tmp_dircall_arg2_1 = par_clauses;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__2_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
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
        exception_tb = MAKE_TRACEBACK(frame_43bf1db8e8f5767ca3e334385c28469e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_43bf1db8e8f5767ca3e334385c28469e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_43bf1db8e8f5767ca3e334385c28469e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_43bf1db8e8f5767ca3e334385c28469e,
        type_description_1,
        par_clauses
    );


    // Release cached frame if used for exception.
    if (frame_43bf1db8e8f5767ca3e334385c28469e == cache_frame_43bf1db8e8f5767ca3e334385c28469e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_43bf1db8e8f5767ca3e334385c28469e);
        cache_frame_43bf1db8e8f5767ca3e334385c28469e = NULL;
    }

    assertFrameObject(frame_43bf1db8e8f5767ca3e334385c28469e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_clauses);
    Py_DECREF(par_clauses);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_clauses);
    Py_DECREF(par_clauses);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__4_any_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_expr = python_pars[0];
    struct Nuitka_FrameObject *frame_3a34bd8f00cee5d35363912cf3ddb598;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3a34bd8f00cee5d35363912cf3ddb598 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3a34bd8f00cee5d35363912cf3ddb598)) {
        Py_XDECREF(cache_frame_3a34bd8f00cee5d35363912cf3ddb598);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3a34bd8f00cee5d35363912cf3ddb598 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3a34bd8f00cee5d35363912cf3ddb598 = MAKE_FUNCTION_FRAME(tstate, codeobj_3a34bd8f00cee5d35363912cf3ddb598, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3a34bd8f00cee5d35363912cf3ddb598->m_type_description == NULL);
    frame_3a34bd8f00cee5d35363912cf3ddb598 = cache_frame_3a34bd8f00cee5d35363912cf3ddb598;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3a34bd8f00cee5d35363912cf3ddb598);
    assert(Py_REFCNT(frame_3a34bd8f00cee5d35363912cf3ddb598) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expr);
        tmp_args_element_value_1 = par_expr;
        frame_3a34bd8f00cee5d35363912cf3ddb598->m_frame.f_lineno = 299;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[6], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
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
        exception_tb = MAKE_TRACEBACK(frame_3a34bd8f00cee5d35363912cf3ddb598, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3a34bd8f00cee5d35363912cf3ddb598->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3a34bd8f00cee5d35363912cf3ddb598, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3a34bd8f00cee5d35363912cf3ddb598,
        type_description_1,
        par_expr
    );


    // Release cached frame if used for exception.
    if (frame_3a34bd8f00cee5d35363912cf3ddb598 == cache_frame_3a34bd8f00cee5d35363912cf3ddb598) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3a34bd8f00cee5d35363912cf3ddb598);
        cache_frame_3a34bd8f00cee5d35363912cf3ddb598 = NULL;
    }

    assertFrameObject(frame_3a34bd8f00cee5d35363912cf3ddb598);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__5_asc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_column = python_pars[0];
    struct Nuitka_FrameObject *frame_c8d3409441b5a44ce4b27ace8bb003c9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c8d3409441b5a44ce4b27ace8bb003c9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c8d3409441b5a44ce4b27ace8bb003c9)) {
        Py_XDECREF(cache_frame_c8d3409441b5a44ce4b27ace8bb003c9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8d3409441b5a44ce4b27ace8bb003c9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8d3409441b5a44ce4b27ace8bb003c9 = MAKE_FUNCTION_FRAME(tstate, codeobj_c8d3409441b5a44ce4b27ace8bb003c9, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c8d3409441b5a44ce4b27ace8bb003c9->m_type_description == NULL);
    frame_c8d3409441b5a44ce4b27ace8bb003c9 = cache_frame_c8d3409441b5a44ce4b27ace8bb003c9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c8d3409441b5a44ce4b27ace8bb003c9);
    assert(Py_REFCNT(frame_c8d3409441b5a44ce4b27ace8bb003c9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_column);
        tmp_args_element_value_1 = par_column;
        frame_c8d3409441b5a44ce4b27ace8bb003c9->m_frame.f_lineno = 339;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[9], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
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
        exception_tb = MAKE_TRACEBACK(frame_c8d3409441b5a44ce4b27ace8bb003c9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8d3409441b5a44ce4b27ace8bb003c9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8d3409441b5a44ce4b27ace8bb003c9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8d3409441b5a44ce4b27ace8bb003c9,
        type_description_1,
        par_column
    );


    // Release cached frame if used for exception.
    if (frame_c8d3409441b5a44ce4b27ace8bb003c9 == cache_frame_c8d3409441b5a44ce4b27ace8bb003c9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c8d3409441b5a44ce4b27ace8bb003c9);
        cache_frame_c8d3409441b5a44ce4b27ace8bb003c9 = NULL;
    }

    assertFrameObject(frame_c8d3409441b5a44ce4b27ace8bb003c9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__6_collate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_expression = python_pars[0];
    PyObject *par_collation = python_pars[1];
    struct Nuitka_FrameObject *frame_5f83c9d6de6fc25847c0cf1d7d4af242;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5f83c9d6de6fc25847c0cf1d7d4af242 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5f83c9d6de6fc25847c0cf1d7d4af242)) {
        Py_XDECREF(cache_frame_5f83c9d6de6fc25847c0cf1d7d4af242);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f83c9d6de6fc25847c0cf1d7d4af242 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f83c9d6de6fc25847c0cf1d7d4af242 = MAKE_FUNCTION_FRAME(tstate, codeobj_5f83c9d6de6fc25847c0cf1d7d4af242, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5f83c9d6de6fc25847c0cf1d7d4af242->m_type_description == NULL);
    frame_5f83c9d6de6fc25847c0cf1d7d4af242 = cache_frame_5f83c9d6de6fc25847c0cf1d7d4af242;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5f83c9d6de6fc25847c0cf1d7d4af242);
    assert(Py_REFCNT(frame_5f83c9d6de6fc25847c0cf1d7d4af242) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expression);
        tmp_args_element_value_1 = par_expression;
        CHECK_OBJECT(par_collation);
        tmp_args_element_value_2 = par_collation;
        frame_5f83c9d6de6fc25847c0cf1d7d4af242->m_frame.f_lineno = 362;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[12],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
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
        exception_tb = MAKE_TRACEBACK(frame_5f83c9d6de6fc25847c0cf1d7d4af242, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f83c9d6de6fc25847c0cf1d7d4af242->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f83c9d6de6fc25847c0cf1d7d4af242, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f83c9d6de6fc25847c0cf1d7d4af242,
        type_description_1,
        par_expression,
        par_collation
    );


    // Release cached frame if used for exception.
    if (frame_5f83c9d6de6fc25847c0cf1d7d4af242 == cache_frame_5f83c9d6de6fc25847c0cf1d7d4af242) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5f83c9d6de6fc25847c0cf1d7d4af242);
        cache_frame_5f83c9d6de6fc25847c0cf1d7d4af242 = NULL;
    }

    assertFrameObject(frame_5f83c9d6de6fc25847c0cf1d7d4af242);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_expression);
    Py_DECREF(par_expression);
    CHECK_OBJECT(par_collation);
    Py_DECREF(par_collation);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_expression);
    Py_DECREF(par_expression);
    CHECK_OBJECT(par_collation);
    Py_DECREF(par_collation);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__7_between(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_expr = python_pars[0];
    PyObject *par_lower_bound = python_pars[1];
    PyObject *par_upper_bound = python_pars[2];
    PyObject *par_symmetric = python_pars[3];
    PyObject *var_col_expr = NULL;
    struct Nuitka_FrameObject *frame_a03b53dce32a8d7ca312fead03ab9a63;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a03b53dce32a8d7ca312fead03ab9a63 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a03b53dce32a8d7ca312fead03ab9a63)) {
        Py_XDECREF(cache_frame_a03b53dce32a8d7ca312fead03ab9a63);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a03b53dce32a8d7ca312fead03ab9a63 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a03b53dce32a8d7ca312fead03ab9a63 = MAKE_FUNCTION_FRAME(tstate, codeobj_a03b53dce32a8d7ca312fead03ab9a63, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a03b53dce32a8d7ca312fead03ab9a63->m_type_description == NULL);
    frame_a03b53dce32a8d7ca312fead03ab9a63 = cache_frame_a03b53dce32a8d7ca312fead03ab9a63;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a03b53dce32a8d7ca312fead03ab9a63);
    assert(Py_REFCNT(frame_a03b53dce32a8d7ca312fead03ab9a63) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 420;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[17]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 420;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expr);
        tmp_args_element_value_2 = par_expr;
        frame_a03b53dce32a8d7ca312fead03ab9a63->m_frame.f_lineno = 420;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_col_expr == NULL);
        var_col_expr = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(var_col_expr);
        tmp_expression_value_3 = var_col_expr;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_lower_bound);
        tmp_kw_call_arg_value_0_1 = par_lower_bound;
        CHECK_OBJECT(par_upper_bound);
        tmp_kw_call_arg_value_1_1 = par_upper_bound;
        CHECK_OBJECT(par_symmetric);
        tmp_kw_call_dict_value_0_1 = par_symmetric;
        frame_a03b53dce32a8d7ca312fead03ab9a63->m_frame.f_lineno = 421;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[19]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
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
        exception_tb = MAKE_TRACEBACK(frame_a03b53dce32a8d7ca312fead03ab9a63, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a03b53dce32a8d7ca312fead03ab9a63->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a03b53dce32a8d7ca312fead03ab9a63, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a03b53dce32a8d7ca312fead03ab9a63,
        type_description_1,
        par_expr,
        par_lower_bound,
        par_upper_bound,
        par_symmetric,
        var_col_expr
    );


    // Release cached frame if used for exception.
    if (frame_a03b53dce32a8d7ca312fead03ab9a63 == cache_frame_a03b53dce32a8d7ca312fead03ab9a63) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a03b53dce32a8d7ca312fead03ab9a63);
        cache_frame_a03b53dce32a8d7ca312fead03ab9a63 = NULL;
    }

    assertFrameObject(frame_a03b53dce32a8d7ca312fead03ab9a63);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_col_expr);
    Py_DECREF(var_col_expr);
    var_col_expr = NULL;
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

    Py_XDECREF(var_col_expr);
    var_col_expr = NULL;
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
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);
    CHECK_OBJECT(par_lower_bound);
    Py_DECREF(par_lower_bound);
    CHECK_OBJECT(par_upper_bound);
    Py_DECREF(par_upper_bound);
    CHECK_OBJECT(par_symmetric);
    Py_DECREF(par_symmetric);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);
    CHECK_OBJECT(par_lower_bound);
    Py_DECREF(par_lower_bound);
    CHECK_OBJECT(par_upper_bound);
    Py_DECREF(par_upper_bound);
    CHECK_OBJECT(par_symmetric);
    Py_DECREF(par_symmetric);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__8_outparam(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *par_type_ = python_pars[1];
    struct Nuitka_FrameObject *frame_a56452e73dbb259e32941f17c6be508a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a56452e73dbb259e32941f17c6be508a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a56452e73dbb259e32941f17c6be508a)) {
        Py_XDECREF(cache_frame_a56452e73dbb259e32941f17c6be508a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a56452e73dbb259e32941f17c6be508a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a56452e73dbb259e32941f17c6be508a = MAKE_FUNCTION_FRAME(tstate, codeobj_a56452e73dbb259e32941f17c6be508a, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a56452e73dbb259e32941f17c6be508a->m_type_description == NULL);
    frame_a56452e73dbb259e32941f17c6be508a = cache_frame_a56452e73dbb259e32941f17c6be508a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a56452e73dbb259e32941f17c6be508a);
    assert(Py_REFCNT(frame_a56452e73dbb259e32941f17c6be508a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_kw_call_arg_value_0_1 = par_key;
        tmp_kw_call_arg_value_1_1 = Py_None;
        CHECK_OBJECT(par_type_);
        tmp_kw_call_dict_value_0_1 = par_type_;
        tmp_kw_call_dict_value_1_1 = Py_False;
        tmp_kw_call_dict_value_2_1 = Py_True;
        frame_a56452e73dbb259e32941f17c6be508a->m_frame.f_lineno = 436;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[22]);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
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
        exception_tb = MAKE_TRACEBACK(frame_a56452e73dbb259e32941f17c6be508a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a56452e73dbb259e32941f17c6be508a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a56452e73dbb259e32941f17c6be508a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a56452e73dbb259e32941f17c6be508a,
        type_description_1,
        par_key,
        par_type_
    );


    // Release cached frame if used for exception.
    if (frame_a56452e73dbb259e32941f17c6be508a == cache_frame_a56452e73dbb259e32941f17c6be508a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a56452e73dbb259e32941f17c6be508a);
        cache_frame_a56452e73dbb259e32941f17c6be508a = NULL;
    }

    assertFrameObject(frame_a56452e73dbb259e32941f17c6be508a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__11_not_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_clause = python_pars[0];
    struct Nuitka_FrameObject *frame_3a203b085ba79eb81c7bb66d1589e909;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3a203b085ba79eb81c7bb66d1589e909 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3a203b085ba79eb81c7bb66d1589e909)) {
        Py_XDECREF(cache_frame_3a203b085ba79eb81c7bb66d1589e909);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3a203b085ba79eb81c7bb66d1589e909 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3a203b085ba79eb81c7bb66d1589e909 = MAKE_FUNCTION_FRAME(tstate, codeobj_3a203b085ba79eb81c7bb66d1589e909, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3a203b085ba79eb81c7bb66d1589e909->m_type_description == NULL);
    frame_3a203b085ba79eb81c7bb66d1589e909 = cache_frame_3a203b085ba79eb81c7bb66d1589e909;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3a203b085ba79eb81c7bb66d1589e909);
    assert(Py_REFCNT(frame_3a203b085ba79eb81c7bb66d1589e909) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 460;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[17]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 460;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_clause);
        tmp_args_element_value_2 = par_clause;
        frame_3a203b085ba79eb81c7bb66d1589e909->m_frame.f_lineno = 460;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3a203b085ba79eb81c7bb66d1589e909->m_frame.f_lineno = 460;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[24]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
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
        exception_tb = MAKE_TRACEBACK(frame_3a203b085ba79eb81c7bb66d1589e909, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3a203b085ba79eb81c7bb66d1589e909->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3a203b085ba79eb81c7bb66d1589e909, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3a203b085ba79eb81c7bb66d1589e909,
        type_description_1,
        par_clause
    );


    // Release cached frame if used for exception.
    if (frame_3a203b085ba79eb81c7bb66d1589e909 == cache_frame_3a203b085ba79eb81c7bb66d1589e909) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3a203b085ba79eb81c7bb66d1589e909);
        cache_frame_3a203b085ba79eb81c7bb66d1589e909 = NULL;
    }

    assertFrameObject(frame_3a203b085ba79eb81c7bb66d1589e909);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_clause);
    Py_DECREF(par_clause);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_clause);
    Py_DECREF(par_clause);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__12_bindparam(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_type_ = python_pars[2];
    PyObject *par_unique = python_pars[3];
    PyObject *par_required = python_pars[4];
    PyObject *par_quote = python_pars[5];
    PyObject *par_callable_ = python_pars[6];
    PyObject *par_expanding = python_pars[7];
    PyObject *par_isoutparam = python_pars[8];
    PyObject *par_literal_execute = python_pars[9];
    struct Nuitka_FrameObject *frame_2fdb76075a5bc20e6367e5cf27e8a070;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2fdb76075a5bc20e6367e5cf27e8a070 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2fdb76075a5bc20e6367e5cf27e8a070)) {
        Py_XDECREF(cache_frame_2fdb76075a5bc20e6367e5cf27e8a070);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2fdb76075a5bc20e6367e5cf27e8a070 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2fdb76075a5bc20e6367e5cf27e8a070 = MAKE_FUNCTION_FRAME(tstate, codeobj_2fdb76075a5bc20e6367e5cf27e8a070, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2fdb76075a5bc20e6367e5cf27e8a070->m_type_description == NULL);
    frame_2fdb76075a5bc20e6367e5cf27e8a070 = cache_frame_2fdb76075a5bc20e6367e5cf27e8a070;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2fdb76075a5bc20e6367e5cf27e8a070);
    assert(Py_REFCNT(frame_2fdb76075a5bc20e6367e5cf27e8a070) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_3 = par_type_;
        CHECK_OBJECT(par_unique);
        tmp_args_element_value_4 = par_unique;
        CHECK_OBJECT(par_required);
        tmp_args_element_value_5 = par_required;
        CHECK_OBJECT(par_quote);
        tmp_args_element_value_6 = par_quote;
        CHECK_OBJECT(par_callable_);
        tmp_args_element_value_7 = par_callable_;
        CHECK_OBJECT(par_expanding);
        tmp_args_element_value_8 = par_expanding;
        CHECK_OBJECT(par_isoutparam);
        tmp_args_element_value_9 = par_isoutparam;
        CHECK_OBJECT(par_literal_execute);
        tmp_args_element_value_10 = par_literal_execute;
        frame_2fdb76075a5bc20e6367e5cf27e8a070->m_frame.f_lineno = 709;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS10(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;
            type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_2fdb76075a5bc20e6367e5cf27e8a070, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2fdb76075a5bc20e6367e5cf27e8a070->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2fdb76075a5bc20e6367e5cf27e8a070, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2fdb76075a5bc20e6367e5cf27e8a070,
        type_description_1,
        par_key,
        par_value,
        par_type_,
        par_unique,
        par_required,
        par_quote,
        par_callable_,
        par_expanding,
        par_isoutparam,
        par_literal_execute
    );


    // Release cached frame if used for exception.
    if (frame_2fdb76075a5bc20e6367e5cf27e8a070 == cache_frame_2fdb76075a5bc20e6367e5cf27e8a070) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2fdb76075a5bc20e6367e5cf27e8a070);
        cache_frame_2fdb76075a5bc20e6367e5cf27e8a070 = NULL;
    }

    assertFrameObject(frame_2fdb76075a5bc20e6367e5cf27e8a070);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    CHECK_OBJECT(par_unique);
    Py_DECREF(par_unique);
    CHECK_OBJECT(par_required);
    Py_DECREF(par_required);
    CHECK_OBJECT(par_quote);
    Py_DECREF(par_quote);
    CHECK_OBJECT(par_callable_);
    Py_DECREF(par_callable_);
    CHECK_OBJECT(par_expanding);
    Py_DECREF(par_expanding);
    CHECK_OBJECT(par_isoutparam);
    Py_DECREF(par_isoutparam);
    CHECK_OBJECT(par_literal_execute);
    Py_DECREF(par_literal_execute);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    CHECK_OBJECT(par_unique);
    Py_DECREF(par_unique);
    CHECK_OBJECT(par_required);
    Py_DECREF(par_required);
    CHECK_OBJECT(par_quote);
    Py_DECREF(par_quote);
    CHECK_OBJECT(par_callable_);
    Py_DECREF(par_callable_);
    CHECK_OBJECT(par_expanding);
    Py_DECREF(par_expanding);
    CHECK_OBJECT(par_isoutparam);
    Py_DECREF(par_isoutparam);
    CHECK_OBJECT(par_literal_execute);
    Py_DECREF(par_literal_execute);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__13_case(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_else_ = python_pars[1];
    PyObject *par_whens = python_pars[2];
    struct Nuitka_FrameObject *frame_1e8fc897a68bcec95b01fff5e3ee6fe9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1e8fc897a68bcec95b01fff5e3ee6fe9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1e8fc897a68bcec95b01fff5e3ee6fe9)) {
        Py_XDECREF(cache_frame_1e8fc897a68bcec95b01fff5e3ee6fe9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e8fc897a68bcec95b01fff5e3ee6fe9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e8fc897a68bcec95b01fff5e3ee6fe9 = MAKE_FUNCTION_FRAME(tstate, codeobj_1e8fc897a68bcec95b01fff5e3ee6fe9, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e8fc897a68bcec95b01fff5e3ee6fe9->m_type_description == NULL);
    frame_1e8fc897a68bcec95b01fff5e3ee6fe9 = cache_frame_1e8fc897a68bcec95b01fff5e3ee6fe9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1e8fc897a68bcec95b01fff5e3ee6fe9);
    assert(Py_REFCNT(frame_1e8fc897a68bcec95b01fff5e3ee6fe9) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 850;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_whens);
        tmp_dircall_arg2_1 = par_whens;
        tmp_dict_key_1 = mod_consts[28];
        CHECK_OBJECT(par_value);
        tmp_dict_value_1 = par_value;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[29];
        CHECK_OBJECT(par_else_);
        tmp_dict_value_1 = par_else_;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__16_complex_call_helper_keywords_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 850;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_1e8fc897a68bcec95b01fff5e3ee6fe9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e8fc897a68bcec95b01fff5e3ee6fe9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e8fc897a68bcec95b01fff5e3ee6fe9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e8fc897a68bcec95b01fff5e3ee6fe9,
        type_description_1,
        par_value,
        par_else_,
        par_whens
    );


    // Release cached frame if used for exception.
    if (frame_1e8fc897a68bcec95b01fff5e3ee6fe9 == cache_frame_1e8fc897a68bcec95b01fff5e3ee6fe9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e8fc897a68bcec95b01fff5e3ee6fe9);
        cache_frame_1e8fc897a68bcec95b01fff5e3ee6fe9 = NULL;
    }

    assertFrameObject(frame_1e8fc897a68bcec95b01fff5e3ee6fe9);

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
    CHECK_OBJECT(par_else_);
    Py_DECREF(par_else_);
    CHECK_OBJECT(par_whens);
    Py_DECREF(par_whens);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_else_);
    Py_DECREF(par_else_);
    CHECK_OBJECT(par_whens);
    Py_DECREF(par_whens);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__14_cast(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_expression = python_pars[0];
    PyObject *par_type_ = python_pars[1];
    struct Nuitka_FrameObject *frame_8787461d0c237059dad1ede7bdfbbc72;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8787461d0c237059dad1ede7bdfbbc72 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8787461d0c237059dad1ede7bdfbbc72)) {
        Py_XDECREF(cache_frame_8787461d0c237059dad1ede7bdfbbc72);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8787461d0c237059dad1ede7bdfbbc72 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8787461d0c237059dad1ede7bdfbbc72 = MAKE_FUNCTION_FRAME(tstate, codeobj_8787461d0c237059dad1ede7bdfbbc72, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8787461d0c237059dad1ede7bdfbbc72->m_type_description == NULL);
    frame_8787461d0c237059dad1ede7bdfbbc72 = cache_frame_8787461d0c237059dad1ede7bdfbbc72;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8787461d0c237059dad1ede7bdfbbc72);
    assert(Py_REFCNT(frame_8787461d0c237059dad1ede7bdfbbc72) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 907;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expression);
        tmp_args_element_value_1 = par_expression;
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_2 = par_type_;
        frame_8787461d0c237059dad1ede7bdfbbc72->m_frame.f_lineno = 907;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 907;
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
        exception_tb = MAKE_TRACEBACK(frame_8787461d0c237059dad1ede7bdfbbc72, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8787461d0c237059dad1ede7bdfbbc72->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8787461d0c237059dad1ede7bdfbbc72, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8787461d0c237059dad1ede7bdfbbc72,
        type_description_1,
        par_expression,
        par_type_
    );


    // Release cached frame if used for exception.
    if (frame_8787461d0c237059dad1ede7bdfbbc72 == cache_frame_8787461d0c237059dad1ede7bdfbbc72) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8787461d0c237059dad1ede7bdfbbc72);
        cache_frame_8787461d0c237059dad1ede7bdfbbc72 = NULL;
    }

    assertFrameObject(frame_8787461d0c237059dad1ede7bdfbbc72);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_expression);
    Py_DECREF(par_expression);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_expression);
    Py_DECREF(par_expression);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__15_try_cast(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_expression = python_pars[0];
    PyObject *par_type_ = python_pars[1];
    struct Nuitka_FrameObject *frame_8afd47881921d160a0463c10d52ab161;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8afd47881921d160a0463c10d52ab161 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8afd47881921d160a0463c10d52ab161)) {
        Py_XDECREF(cache_frame_8afd47881921d160a0463c10d52ab161);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8afd47881921d160a0463c10d52ab161 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8afd47881921d160a0463c10d52ab161 = MAKE_FUNCTION_FRAME(tstate, codeobj_8afd47881921d160a0463c10d52ab161, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8afd47881921d160a0463c10d52ab161->m_type_description == NULL);
    frame_8afd47881921d160a0463c10d52ab161 = cache_frame_8afd47881921d160a0463c10d52ab161;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8afd47881921d160a0463c10d52ab161);
    assert(Py_REFCNT(frame_8afd47881921d160a0463c10d52ab161) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 950;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expression);
        tmp_args_element_value_1 = par_expression;
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_2 = par_type_;
        frame_8afd47881921d160a0463c10d52ab161->m_frame.f_lineno = 950;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 950;
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
        exception_tb = MAKE_TRACEBACK(frame_8afd47881921d160a0463c10d52ab161, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8afd47881921d160a0463c10d52ab161->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8afd47881921d160a0463c10d52ab161, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8afd47881921d160a0463c10d52ab161,
        type_description_1,
        par_expression,
        par_type_
    );


    // Release cached frame if used for exception.
    if (frame_8afd47881921d160a0463c10d52ab161 == cache_frame_8afd47881921d160a0463c10d52ab161) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8afd47881921d160a0463c10d52ab161);
        cache_frame_8afd47881921d160a0463c10d52ab161 = NULL;
    }

    assertFrameObject(frame_8afd47881921d160a0463c10d52ab161);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_expression);
    Py_DECREF(par_expression);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_expression);
    Py_DECREF(par_expression);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__16_column(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    PyObject *par_type_ = python_pars[1];
    PyObject *par_is_literal = python_pars[2];
    PyObject *par__selectable = python_pars[3];
    struct Nuitka_FrameObject *frame_46c1d0fa960cd2bb178177e0948a9ff9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_46c1d0fa960cd2bb178177e0948a9ff9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_46c1d0fa960cd2bb178177e0948a9ff9)) {
        Py_XDECREF(cache_frame_46c1d0fa960cd2bb178177e0948a9ff9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_46c1d0fa960cd2bb178177e0948a9ff9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_46c1d0fa960cd2bb178177e0948a9ff9 = MAKE_FUNCTION_FRAME(tstate, codeobj_46c1d0fa960cd2bb178177e0948a9ff9, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_46c1d0fa960cd2bb178177e0948a9ff9->m_type_description == NULL);
    frame_46c1d0fa960cd2bb178177e0948a9ff9 = cache_frame_46c1d0fa960cd2bb178177e0948a9ff9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_46c1d0fa960cd2bb178177e0948a9ff9);
    assert(Py_REFCNT(frame_46c1d0fa960cd2bb178177e0948a9ff9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1046;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_args_element_value_1 = par_text;
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_2 = par_type_;
        CHECK_OBJECT(par_is_literal);
        tmp_args_element_value_3 = par_is_literal;
        CHECK_OBJECT(par__selectable);
        tmp_args_element_value_4 = par__selectable;
        frame_46c1d0fa960cd2bb178177e0948a9ff9->m_frame.f_lineno = 1046;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1046;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_46c1d0fa960cd2bb178177e0948a9ff9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_46c1d0fa960cd2bb178177e0948a9ff9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_46c1d0fa960cd2bb178177e0948a9ff9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_46c1d0fa960cd2bb178177e0948a9ff9,
        type_description_1,
        par_text,
        par_type_,
        par_is_literal,
        par__selectable
    );


    // Release cached frame if used for exception.
    if (frame_46c1d0fa960cd2bb178177e0948a9ff9 == cache_frame_46c1d0fa960cd2bb178177e0948a9ff9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_46c1d0fa960cd2bb178177e0948a9ff9);
        cache_frame_46c1d0fa960cd2bb178177e0948a9ff9 = NULL;
    }

    assertFrameObject(frame_46c1d0fa960cd2bb178177e0948a9ff9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    CHECK_OBJECT(par_is_literal);
    Py_DECREF(par_is_literal);
    CHECK_OBJECT(par__selectable);
    Py_DECREF(par__selectable);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    CHECK_OBJECT(par_is_literal);
    Py_DECREF(par_is_literal);
    CHECK_OBJECT(par__selectable);
    Py_DECREF(par__selectable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__17_desc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_column = python_pars[0];
    struct Nuitka_FrameObject *frame_496e052f55221e1457cc9d260f505047;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_496e052f55221e1457cc9d260f505047 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_496e052f55221e1457cc9d260f505047)) {
        Py_XDECREF(cache_frame_496e052f55221e1457cc9d260f505047);

#if _DEBUG_REFCOUNTS
        if (cache_frame_496e052f55221e1457cc9d260f505047 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_496e052f55221e1457cc9d260f505047 = MAKE_FUNCTION_FRAME(tstate, codeobj_496e052f55221e1457cc9d260f505047, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_496e052f55221e1457cc9d260f505047->m_type_description == NULL);
    frame_496e052f55221e1457cc9d260f505047 = cache_frame_496e052f55221e1457cc9d260f505047;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_496e052f55221e1457cc9d260f505047);
    assert(Py_REFCNT(frame_496e052f55221e1457cc9d260f505047) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1087;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_column);
        tmp_args_element_value_1 = par_column;
        frame_496e052f55221e1457cc9d260f505047->m_frame.f_lineno = 1087;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[37], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1087;
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
        exception_tb = MAKE_TRACEBACK(frame_496e052f55221e1457cc9d260f505047, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_496e052f55221e1457cc9d260f505047->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_496e052f55221e1457cc9d260f505047, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_496e052f55221e1457cc9d260f505047,
        type_description_1,
        par_column
    );


    // Release cached frame if used for exception.
    if (frame_496e052f55221e1457cc9d260f505047 == cache_frame_496e052f55221e1457cc9d260f505047) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_496e052f55221e1457cc9d260f505047);
        cache_frame_496e052f55221e1457cc9d260f505047 = NULL;
    }

    assertFrameObject(frame_496e052f55221e1457cc9d260f505047);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__18_distinct(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_expr = python_pars[0];
    struct Nuitka_FrameObject *frame_2f184e7b87f6da531dc7e52defd009d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2f184e7b87f6da531dc7e52defd009d6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2f184e7b87f6da531dc7e52defd009d6)) {
        Py_XDECREF(cache_frame_2f184e7b87f6da531dc7e52defd009d6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f184e7b87f6da531dc7e52defd009d6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f184e7b87f6da531dc7e52defd009d6 = MAKE_FUNCTION_FRAME(tstate, codeobj_2f184e7b87f6da531dc7e52defd009d6, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2f184e7b87f6da531dc7e52defd009d6->m_type_description == NULL);
    frame_2f184e7b87f6da531dc7e52defd009d6 = cache_frame_2f184e7b87f6da531dc7e52defd009d6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2f184e7b87f6da531dc7e52defd009d6);
    assert(Py_REFCNT(frame_2f184e7b87f6da531dc7e52defd009d6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expr);
        tmp_args_element_value_1 = par_expr;
        frame_2f184e7b87f6da531dc7e52defd009d6->m_frame.f_lineno = 1126;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[39], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1126;
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
        exception_tb = MAKE_TRACEBACK(frame_2f184e7b87f6da531dc7e52defd009d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f184e7b87f6da531dc7e52defd009d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f184e7b87f6da531dc7e52defd009d6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f184e7b87f6da531dc7e52defd009d6,
        type_description_1,
        par_expr
    );


    // Release cached frame if used for exception.
    if (frame_2f184e7b87f6da531dc7e52defd009d6 == cache_frame_2f184e7b87f6da531dc7e52defd009d6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2f184e7b87f6da531dc7e52defd009d6);
        cache_frame_2f184e7b87f6da531dc7e52defd009d6 = NULL;
    }

    assertFrameObject(frame_2f184e7b87f6da531dc7e52defd009d6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__19_bitwise_not(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_expr = python_pars[0];
    struct Nuitka_FrameObject *frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb)) {
        Py_XDECREF(cache_frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb = MAKE_FUNCTION_FRAME(tstate, codeobj_efe59188dfb3fd3e0f8d0d0ae8e36bfb, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb->m_type_description == NULL);
    frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb = cache_frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb);
    assert(Py_REFCNT(frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1143;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expr);
        tmp_args_element_value_1 = par_expr;
        frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb->m_frame.f_lineno = 1143;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[41], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1143;
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
        exception_tb = MAKE_TRACEBACK(frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb,
        type_description_1,
        par_expr
    );


    // Release cached frame if used for exception.
    if (frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb == cache_frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb);
        cache_frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb = NULL;
    }

    assertFrameObject(frame_efe59188dfb3fd3e0f8d0d0ae8e36bfb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__20_extract(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_field = python_pars[0];
    PyObject *par_expr = python_pars[1];
    struct Nuitka_FrameObject *frame_4bb9d9f1592886c5bd910684c62ee33d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4bb9d9f1592886c5bd910684c62ee33d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4bb9d9f1592886c5bd910684c62ee33d)) {
        Py_XDECREF(cache_frame_4bb9d9f1592886c5bd910684c62ee33d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4bb9d9f1592886c5bd910684c62ee33d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4bb9d9f1592886c5bd910684c62ee33d = MAKE_FUNCTION_FRAME(tstate, codeobj_4bb9d9f1592886c5bd910684c62ee33d, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4bb9d9f1592886c5bd910684c62ee33d->m_type_description == NULL);
    frame_4bb9d9f1592886c5bd910684c62ee33d = cache_frame_4bb9d9f1592886c5bd910684c62ee33d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4bb9d9f1592886c5bd910684c62ee33d);
    assert(Py_REFCNT(frame_4bb9d9f1592886c5bd910684c62ee33d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field);
        tmp_args_element_value_1 = par_field;
        CHECK_OBJECT(par_expr);
        tmp_args_element_value_2 = par_expr;
        frame_4bb9d9f1592886c5bd910684c62ee33d->m_frame.f_lineno = 1184;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1184;
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
        exception_tb = MAKE_TRACEBACK(frame_4bb9d9f1592886c5bd910684c62ee33d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4bb9d9f1592886c5bd910684c62ee33d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4bb9d9f1592886c5bd910684c62ee33d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4bb9d9f1592886c5bd910684c62ee33d,
        type_description_1,
        par_field,
        par_expr
    );


    // Release cached frame if used for exception.
    if (frame_4bb9d9f1592886c5bd910684c62ee33d == cache_frame_4bb9d9f1592886c5bd910684c62ee33d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4bb9d9f1592886c5bd910684c62ee33d);
        cache_frame_4bb9d9f1592886c5bd910684c62ee33d = NULL;
    }

    assertFrameObject(frame_4bb9d9f1592886c5bd910684c62ee33d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);
    CHECK_OBJECT(par_expr);
    Py_DECREF(par_expr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__21_false(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_d0e2a3a196c346e9658fd482ae0540ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d0e2a3a196c346e9658fd482ae0540ee = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d0e2a3a196c346e9658fd482ae0540ee)) {
        Py_XDECREF(cache_frame_d0e2a3a196c346e9658fd482ae0540ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0e2a3a196c346e9658fd482ae0540ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0e2a3a196c346e9658fd482ae0540ee = MAKE_FUNCTION_FRAME(tstate, codeobj_d0e2a3a196c346e9658fd482ae0540ee, module_sqlalchemy$sql$_elements_constructors, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0e2a3a196c346e9658fd482ae0540ee->m_type_description == NULL);
    frame_d0e2a3a196c346e9658fd482ae0540ee = cache_frame_d0e2a3a196c346e9658fd482ae0540ee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d0e2a3a196c346e9658fd482ae0540ee);
    assert(Py_REFCNT(frame_d0e2a3a196c346e9658fd482ae0540ee) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1224;

            goto frame_exception_exit_1;
        }
        frame_d0e2a3a196c346e9658fd482ae0540ee->m_frame.f_lineno = 1224;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[46]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1224;

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
        exception_tb = MAKE_TRACEBACK(frame_d0e2a3a196c346e9658fd482ae0540ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0e2a3a196c346e9658fd482ae0540ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0e2a3a196c346e9658fd482ae0540ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0e2a3a196c346e9658fd482ae0540ee,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_d0e2a3a196c346e9658fd482ae0540ee == cache_frame_d0e2a3a196c346e9658fd482ae0540ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0e2a3a196c346e9658fd482ae0540ee);
        cache_frame_d0e2a3a196c346e9658fd482ae0540ee = NULL;
    }

    assertFrameObject(frame_d0e2a3a196c346e9658fd482ae0540ee);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__22_funcfilter(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *par_criterion = python_pars[1];
    struct Nuitka_FrameObject *frame_3c9fc9a19018d1d9f2d153cb4fae3a57;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3c9fc9a19018d1d9f2d153cb4fae3a57 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3c9fc9a19018d1d9f2d153cb4fae3a57)) {
        Py_XDECREF(cache_frame_3c9fc9a19018d1d9f2d153cb4fae3a57);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3c9fc9a19018d1d9f2d153cb4fae3a57 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3c9fc9a19018d1d9f2d153cb4fae3a57 = MAKE_FUNCTION_FRAME(tstate, codeobj_3c9fc9a19018d1d9f2d153cb4fae3a57, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3c9fc9a19018d1d9f2d153cb4fae3a57->m_type_description == NULL);
    frame_3c9fc9a19018d1d9f2d153cb4fae3a57 = cache_frame_3c9fc9a19018d1d9f2d153cb4fae3a57;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3c9fc9a19018d1d9f2d153cb4fae3a57);
    assert(Py_REFCNT(frame_3c9fc9a19018d1d9f2d153cb4fae3a57) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1253;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_tuple_element_1 = par_func;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_criterion);
        tmp_dircall_arg3_1 = par_criterion;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1253;
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
        exception_tb = MAKE_TRACEBACK(frame_3c9fc9a19018d1d9f2d153cb4fae3a57, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3c9fc9a19018d1d9f2d153cb4fae3a57->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3c9fc9a19018d1d9f2d153cb4fae3a57, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3c9fc9a19018d1d9f2d153cb4fae3a57,
        type_description_1,
        par_func,
        par_criterion
    );


    // Release cached frame if used for exception.
    if (frame_3c9fc9a19018d1d9f2d153cb4fae3a57 == cache_frame_3c9fc9a19018d1d9f2d153cb4fae3a57) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3c9fc9a19018d1d9f2d153cb4fae3a57);
        cache_frame_3c9fc9a19018d1d9f2d153cb4fae3a57 = NULL;
    }

    assertFrameObject(frame_3c9fc9a19018d1d9f2d153cb4fae3a57);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_criterion);
    Py_DECREF(par_criterion);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_criterion);
    Py_DECREF(par_criterion);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__23_label(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *par_element = python_pars[1];
    PyObject *par_type_ = python_pars[2];
    struct Nuitka_FrameObject *frame_411d71c9ad45edf8156c7f735ca3fddd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_411d71c9ad45edf8156c7f735ca3fddd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_411d71c9ad45edf8156c7f735ca3fddd)) {
        Py_XDECREF(cache_frame_411d71c9ad45edf8156c7f735ca3fddd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_411d71c9ad45edf8156c7f735ca3fddd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_411d71c9ad45edf8156c7f735ca3fddd = MAKE_FUNCTION_FRAME(tstate, codeobj_411d71c9ad45edf8156c7f735ca3fddd, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_411d71c9ad45edf8156c7f735ca3fddd->m_type_description == NULL);
    frame_411d71c9ad45edf8156c7f735ca3fddd = cache_frame_411d71c9ad45edf8156c7f735ca3fddd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_411d71c9ad45edf8156c7f735ca3fddd);
    assert(Py_REFCNT(frame_411d71c9ad45edf8156c7f735ca3fddd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1276;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        CHECK_OBJECT(par_element);
        tmp_args_element_value_2 = par_element;
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_3 = par_type_;
        frame_411d71c9ad45edf8156c7f735ca3fddd->m_frame.f_lineno = 1276;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1276;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_411d71c9ad45edf8156c7f735ca3fddd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_411d71c9ad45edf8156c7f735ca3fddd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_411d71c9ad45edf8156c7f735ca3fddd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_411d71c9ad45edf8156c7f735ca3fddd,
        type_description_1,
        par_name,
        par_element,
        par_type_
    );


    // Release cached frame if used for exception.
    if (frame_411d71c9ad45edf8156c7f735ca3fddd == cache_frame_411d71c9ad45edf8156c7f735ca3fddd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_411d71c9ad45edf8156c7f735ca3fddd);
        cache_frame_411d71c9ad45edf8156c7f735ca3fddd = NULL;
    }

    assertFrameObject(frame_411d71c9ad45edf8156c7f735ca3fddd);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__24_null(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_348cd188f1cf1931cba47425203de881;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_348cd188f1cf1931cba47425203de881 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_348cd188f1cf1931cba47425203de881)) {
        Py_XDECREF(cache_frame_348cd188f1cf1931cba47425203de881);

#if _DEBUG_REFCOUNTS
        if (cache_frame_348cd188f1cf1931cba47425203de881 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_348cd188f1cf1931cba47425203de881 = MAKE_FUNCTION_FRAME(tstate, codeobj_348cd188f1cf1931cba47425203de881, module_sqlalchemy$sql$_elements_constructors, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_348cd188f1cf1931cba47425203de881->m_type_description == NULL);
    frame_348cd188f1cf1931cba47425203de881 = cache_frame_348cd188f1cf1931cba47425203de881;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_348cd188f1cf1931cba47425203de881);
    assert(Py_REFCNT(frame_348cd188f1cf1931cba47425203de881) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1282;

            goto frame_exception_exit_1;
        }
        frame_348cd188f1cf1931cba47425203de881->m_frame.f_lineno = 1282;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[46]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1282;

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
        exception_tb = MAKE_TRACEBACK(frame_348cd188f1cf1931cba47425203de881, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_348cd188f1cf1931cba47425203de881->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_348cd188f1cf1931cba47425203de881, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_348cd188f1cf1931cba47425203de881,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_348cd188f1cf1931cba47425203de881 == cache_frame_348cd188f1cf1931cba47425203de881) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_348cd188f1cf1931cba47425203de881);
        cache_frame_348cd188f1cf1931cba47425203de881 = NULL;
    }

    assertFrameObject(frame_348cd188f1cf1931cba47425203de881);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__25_nulls_first(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_column = python_pars[0];
    struct Nuitka_FrameObject *frame_e115693da0808392332cdee528255bb8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e115693da0808392332cdee528255bb8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e115693da0808392332cdee528255bb8)) {
        Py_XDECREF(cache_frame_e115693da0808392332cdee528255bb8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e115693da0808392332cdee528255bb8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e115693da0808392332cdee528255bb8 = MAKE_FUNCTION_FRAME(tstate, codeobj_e115693da0808392332cdee528255bb8, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e115693da0808392332cdee528255bb8->m_type_description == NULL);
    frame_e115693da0808392332cdee528255bb8 = cache_frame_e115693da0808392332cdee528255bb8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e115693da0808392332cdee528255bb8);
    assert(Py_REFCNT(frame_e115693da0808392332cdee528255bb8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1326;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_column);
        tmp_args_element_value_1 = par_column;
        frame_e115693da0808392332cdee528255bb8->m_frame.f_lineno = 1326;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[54], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1326;
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
        exception_tb = MAKE_TRACEBACK(frame_e115693da0808392332cdee528255bb8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e115693da0808392332cdee528255bb8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e115693da0808392332cdee528255bb8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e115693da0808392332cdee528255bb8,
        type_description_1,
        par_column
    );


    // Release cached frame if used for exception.
    if (frame_e115693da0808392332cdee528255bb8 == cache_frame_e115693da0808392332cdee528255bb8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e115693da0808392332cdee528255bb8);
        cache_frame_e115693da0808392332cdee528255bb8 = NULL;
    }

    assertFrameObject(frame_e115693da0808392332cdee528255bb8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__26_nulls_last(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_column = python_pars[0];
    struct Nuitka_FrameObject *frame_0660e8a7157cd60b03232a55122b6d56;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0660e8a7157cd60b03232a55122b6d56 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0660e8a7157cd60b03232a55122b6d56)) {
        Py_XDECREF(cache_frame_0660e8a7157cd60b03232a55122b6d56);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0660e8a7157cd60b03232a55122b6d56 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0660e8a7157cd60b03232a55122b6d56 = MAKE_FUNCTION_FRAME(tstate, codeobj_0660e8a7157cd60b03232a55122b6d56, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0660e8a7157cd60b03232a55122b6d56->m_type_description == NULL);
    frame_0660e8a7157cd60b03232a55122b6d56 = cache_frame_0660e8a7157cd60b03232a55122b6d56;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0660e8a7157cd60b03232a55122b6d56);
    assert(Py_REFCNT(frame_0660e8a7157cd60b03232a55122b6d56) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1370;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_column);
        tmp_args_element_value_1 = par_column;
        frame_0660e8a7157cd60b03232a55122b6d56->m_frame.f_lineno = 1370;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[56], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1370;
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
        exception_tb = MAKE_TRACEBACK(frame_0660e8a7157cd60b03232a55122b6d56, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0660e8a7157cd60b03232a55122b6d56->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0660e8a7157cd60b03232a55122b6d56, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0660e8a7157cd60b03232a55122b6d56,
        type_description_1,
        par_column
    );


    // Release cached frame if used for exception.
    if (frame_0660e8a7157cd60b03232a55122b6d56 == cache_frame_0660e8a7157cd60b03232a55122b6d56) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0660e8a7157cd60b03232a55122b6d56);
        cache_frame_0660e8a7157cd60b03232a55122b6d56 = NULL;
    }

    assertFrameObject(frame_0660e8a7157cd60b03232a55122b6d56);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__28_or_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_clauses = python_pars[0];
    struct Nuitka_FrameObject *frame_67bc987c96818c75bad0abf8fed7448f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_67bc987c96818c75bad0abf8fed7448f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_67bc987c96818c75bad0abf8fed7448f)) {
        Py_XDECREF(cache_frame_67bc987c96818c75bad0abf8fed7448f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_67bc987c96818c75bad0abf8fed7448f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_67bc987c96818c75bad0abf8fed7448f = MAKE_FUNCTION_FRAME(tstate, codeobj_67bc987c96818c75bad0abf8fed7448f, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_67bc987c96818c75bad0abf8fed7448f->m_type_description == NULL);
    frame_67bc987c96818c75bad0abf8fed7448f = cache_frame_67bc987c96818c75bad0abf8fed7448f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_67bc987c96818c75bad0abf8fed7448f);
    assert(Py_REFCNT(frame_67bc987c96818c75bad0abf8fed7448f) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1481;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[58]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1481;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_clauses);
        tmp_dircall_arg2_1 = par_clauses;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__2_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1481;
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
        exception_tb = MAKE_TRACEBACK(frame_67bc987c96818c75bad0abf8fed7448f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_67bc987c96818c75bad0abf8fed7448f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_67bc987c96818c75bad0abf8fed7448f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_67bc987c96818c75bad0abf8fed7448f,
        type_description_1,
        par_clauses
    );


    // Release cached frame if used for exception.
    if (frame_67bc987c96818c75bad0abf8fed7448f == cache_frame_67bc987c96818c75bad0abf8fed7448f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_67bc987c96818c75bad0abf8fed7448f);
        cache_frame_67bc987c96818c75bad0abf8fed7448f = NULL;
    }

    assertFrameObject(frame_67bc987c96818c75bad0abf8fed7448f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_clauses);
    Py_DECREF(par_clauses);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_clauses);
    Py_DECREF(par_clauses);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__29_over(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_element = python_pars[0];
    PyObject *par_partition_by = python_pars[1];
    PyObject *par_order_by = python_pars[2];
    PyObject *par_range_ = python_pars[3];
    PyObject *par_rows = python_pars[4];
    struct Nuitka_FrameObject *frame_d43f91731cbb22131cbf8a1883f8dcb0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d43f91731cbb22131cbf8a1883f8dcb0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d43f91731cbb22131cbf8a1883f8dcb0)) {
        Py_XDECREF(cache_frame_d43f91731cbb22131cbf8a1883f8dcb0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d43f91731cbb22131cbf8a1883f8dcb0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d43f91731cbb22131cbf8a1883f8dcb0 = MAKE_FUNCTION_FRAME(tstate, codeobj_d43f91731cbb22131cbf8a1883f8dcb0, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d43f91731cbb22131cbf8a1883f8dcb0->m_type_description == NULL);
    frame_d43f91731cbb22131cbf8a1883f8dcb0 = cache_frame_d43f91731cbb22131cbf8a1883f8dcb0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d43f91731cbb22131cbf8a1883f8dcb0);
    assert(Py_REFCNT(frame_d43f91731cbb22131cbf8a1883f8dcb0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1576;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_element);
        tmp_args_element_value_1 = par_element;
        CHECK_OBJECT(par_partition_by);
        tmp_args_element_value_2 = par_partition_by;
        CHECK_OBJECT(par_order_by);
        tmp_args_element_value_3 = par_order_by;
        CHECK_OBJECT(par_range_);
        tmp_args_element_value_4 = par_range_;
        CHECK_OBJECT(par_rows);
        tmp_args_element_value_5 = par_rows;
        frame_d43f91731cbb22131cbf8a1883f8dcb0->m_frame.f_lineno = 1576;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1576;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d43f91731cbb22131cbf8a1883f8dcb0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d43f91731cbb22131cbf8a1883f8dcb0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d43f91731cbb22131cbf8a1883f8dcb0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d43f91731cbb22131cbf8a1883f8dcb0,
        type_description_1,
        par_element,
        par_partition_by,
        par_order_by,
        par_range_,
        par_rows
    );


    // Release cached frame if used for exception.
    if (frame_d43f91731cbb22131cbf8a1883f8dcb0 == cache_frame_d43f91731cbb22131cbf8a1883f8dcb0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d43f91731cbb22131cbf8a1883f8dcb0);
        cache_frame_d43f91731cbb22131cbf8a1883f8dcb0 = NULL;
    }

    assertFrameObject(frame_d43f91731cbb22131cbf8a1883f8dcb0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_partition_by);
    Py_DECREF(par_partition_by);
    CHECK_OBJECT(par_order_by);
    Py_DECREF(par_order_by);
    CHECK_OBJECT(par_range_);
    Py_DECREF(par_range_);
    CHECK_OBJECT(par_rows);
    Py_DECREF(par_rows);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_partition_by);
    Py_DECREF(par_partition_by);
    CHECK_OBJECT(par_order_by);
    Py_DECREF(par_order_by);
    CHECK_OBJECT(par_range_);
    Py_DECREF(par_range_);
    CHECK_OBJECT(par_rows);
    Py_DECREF(par_rows);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__30_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_b36adc1630cc0ab5eb0fb9fe45c53081;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b36adc1630cc0ab5eb0fb9fe45c53081 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b36adc1630cc0ab5eb0fb9fe45c53081)) {
        Py_XDECREF(cache_frame_b36adc1630cc0ab5eb0fb9fe45c53081);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b36adc1630cc0ab5eb0fb9fe45c53081 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b36adc1630cc0ab5eb0fb9fe45c53081 = MAKE_FUNCTION_FRAME(tstate, codeobj_b36adc1630cc0ab5eb0fb9fe45c53081, module_sqlalchemy$sql$_elements_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b36adc1630cc0ab5eb0fb9fe45c53081->m_type_description == NULL);
    frame_b36adc1630cc0ab5eb0fb9fe45c53081 = cache_frame_b36adc1630cc0ab5eb0fb9fe45c53081;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b36adc1630cc0ab5eb0fb9fe45c53081);
    assert(Py_REFCNT(frame_b36adc1630cc0ab5eb0fb9fe45c53081) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1654;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_args_element_value_1 = par_text;
        frame_b36adc1630cc0ab5eb0fb9fe45c53081->m_frame.f_lineno = 1654;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1654;
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
        exception_tb = MAKE_TRACEBACK(frame_b36adc1630cc0ab5eb0fb9fe45c53081, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b36adc1630cc0ab5eb0fb9fe45c53081->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b36adc1630cc0ab5eb0fb9fe45c53081, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b36adc1630cc0ab5eb0fb9fe45c53081,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_b36adc1630cc0ab5eb0fb9fe45c53081 == cache_frame_b36adc1630cc0ab5eb0fb9fe45c53081) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b36adc1630cc0ab5eb0fb9fe45c53081);
        cache_frame_b36adc1630cc0ab5eb0fb9fe45c53081 = NULL;
    }

    assertFrameObject(frame_b36adc1630cc0ab5eb0fb9fe45c53081);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__31_true(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_a24bd62c372bac9ddddb24ce3bea2025;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a24bd62c372bac9ddddb24ce3bea2025 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a24bd62c372bac9ddddb24ce3bea2025)) {
        Py_XDECREF(cache_frame_a24bd62c372bac9ddddb24ce3bea2025);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a24bd62c372bac9ddddb24ce3bea2025 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a24bd62c372bac9ddddb24ce3bea2025 = MAKE_FUNCTION_FRAME(tstate, codeobj_a24bd62c372bac9ddddb24ce3bea2025, module_sqlalchemy$sql$_elements_constructors, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a24bd62c372bac9ddddb24ce3bea2025->m_type_description == NULL);
    frame_a24bd62c372bac9ddddb24ce3bea2025 = cache_frame_a24bd62c372bac9ddddb24ce3bea2025;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a24bd62c372bac9ddddb24ce3bea2025);
    assert(Py_REFCNT(frame_a24bd62c372bac9ddddb24ce3bea2025) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1694;

            goto frame_exception_exit_1;
        }
        frame_a24bd62c372bac9ddddb24ce3bea2025->m_frame.f_lineno = 1694;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[46]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1694;

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
        exception_tb = MAKE_TRACEBACK(frame_a24bd62c372bac9ddddb24ce3bea2025, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a24bd62c372bac9ddddb24ce3bea2025->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a24bd62c372bac9ddddb24ce3bea2025, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a24bd62c372bac9ddddb24ce3bea2025,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_a24bd62c372bac9ddddb24ce3bea2025 == cache_frame_a24bd62c372bac9ddddb24ce3bea2025) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a24bd62c372bac9ddddb24ce3bea2025);
        cache_frame_a24bd62c372bac9ddddb24ce3bea2025 = NULL;
    }

    assertFrameObject(frame_a24bd62c372bac9ddddb24ce3bea2025);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__32_tuple_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_types = python_pars[0];
    PyObject *par_clauses = python_pars[1];
    struct Nuitka_FrameObject *frame_4546763795b359e233d350fa2f6e2fd1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4546763795b359e233d350fa2f6e2fd1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4546763795b359e233d350fa2f6e2fd1)) {
        Py_XDECREF(cache_frame_4546763795b359e233d350fa2f6e2fd1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4546763795b359e233d350fa2f6e2fd1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4546763795b359e233d350fa2f6e2fd1 = MAKE_FUNCTION_FRAME(tstate, codeobj_4546763795b359e233d350fa2f6e2fd1, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4546763795b359e233d350fa2f6e2fd1->m_type_description == NULL);
    frame_4546763795b359e233d350fa2f6e2fd1 = cache_frame_4546763795b359e233d350fa2f6e2fd1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4546763795b359e233d350fa2f6e2fd1);
    assert(Py_REFCNT(frame_4546763795b359e233d350fa2f6e2fd1) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1723;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_clauses);
        tmp_dircall_arg2_1 = par_clauses;
        tmp_dict_key_1 = mod_consts[67];
        CHECK_OBJECT(par_types);
        tmp_dict_value_1 = par_types;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__16_complex_call_helper_keywords_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1723;
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
        exception_tb = MAKE_TRACEBACK(frame_4546763795b359e233d350fa2f6e2fd1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4546763795b359e233d350fa2f6e2fd1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4546763795b359e233d350fa2f6e2fd1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4546763795b359e233d350fa2f6e2fd1,
        type_description_1,
        par_types,
        par_clauses
    );


    // Release cached frame if used for exception.
    if (frame_4546763795b359e233d350fa2f6e2fd1 == cache_frame_4546763795b359e233d350fa2f6e2fd1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4546763795b359e233d350fa2f6e2fd1);
        cache_frame_4546763795b359e233d350fa2f6e2fd1 = NULL;
    }

    assertFrameObject(frame_4546763795b359e233d350fa2f6e2fd1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_types);
    Py_DECREF(par_types);
    CHECK_OBJECT(par_clauses);
    Py_DECREF(par_clauses);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_types);
    Py_DECREF(par_types);
    CHECK_OBJECT(par_clauses);
    Py_DECREF(par_clauses);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__33_type_coerce(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_expression = python_pars[0];
    PyObject *par_type_ = python_pars[1];
    struct Nuitka_FrameObject *frame_f7484305b4b6b5c31de2af065d8f44d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f7484305b4b6b5c31de2af065d8f44d9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f7484305b4b6b5c31de2af065d8f44d9)) {
        Py_XDECREF(cache_frame_f7484305b4b6b5c31de2af065d8f44d9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f7484305b4b6b5c31de2af065d8f44d9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f7484305b4b6b5c31de2af065d8f44d9 = MAKE_FUNCTION_FRAME(tstate, codeobj_f7484305b4b6b5c31de2af065d8f44d9, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f7484305b4b6b5c31de2af065d8f44d9->m_type_description == NULL);
    frame_f7484305b4b6b5c31de2af065d8f44d9 = cache_frame_f7484305b4b6b5c31de2af065d8f44d9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f7484305b4b6b5c31de2af065d8f44d9);
    assert(Py_REFCNT(frame_f7484305b4b6b5c31de2af065d8f44d9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1808;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expression);
        tmp_args_element_value_1 = par_expression;
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_2 = par_type_;
        frame_f7484305b4b6b5c31de2af065d8f44d9->m_frame.f_lineno = 1808;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1808;
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
        exception_tb = MAKE_TRACEBACK(frame_f7484305b4b6b5c31de2af065d8f44d9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f7484305b4b6b5c31de2af065d8f44d9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f7484305b4b6b5c31de2af065d8f44d9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f7484305b4b6b5c31de2af065d8f44d9,
        type_description_1,
        par_expression,
        par_type_
    );


    // Release cached frame if used for exception.
    if (frame_f7484305b4b6b5c31de2af065d8f44d9 == cache_frame_f7484305b4b6b5c31de2af065d8f44d9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f7484305b4b6b5c31de2af065d8f44d9);
        cache_frame_f7484305b4b6b5c31de2af065d8f44d9 = NULL;
    }

    assertFrameObject(frame_f7484305b4b6b5c31de2af065d8f44d9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_expression);
    Py_DECREF(par_expression);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_expression);
    Py_DECREF(par_expression);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$sql$_elements_constructors$$$function__34_within_group(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_element = python_pars[0];
    PyObject *par_order_by = python_pars[1];
    struct Nuitka_FrameObject *frame_25a537781bdb078b5ed3a9d324deede0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_25a537781bdb078b5ed3a9d324deede0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_25a537781bdb078b5ed3a9d324deede0)) {
        Py_XDECREF(cache_frame_25a537781bdb078b5ed3a9d324deede0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_25a537781bdb078b5ed3a9d324deede0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_25a537781bdb078b5ed3a9d324deede0 = MAKE_FUNCTION_FRAME(tstate, codeobj_25a537781bdb078b5ed3a9d324deede0, module_sqlalchemy$sql$_elements_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_25a537781bdb078b5ed3a9d324deede0->m_type_description == NULL);
    frame_25a537781bdb078b5ed3a9d324deede0 = cache_frame_25a537781bdb078b5ed3a9d324deede0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_25a537781bdb078b5ed3a9d324deede0);
    assert(Py_REFCNT(frame_25a537781bdb078b5ed3a9d324deede0) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1850;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_element);
        tmp_tuple_element_1 = par_element;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_order_by);
        tmp_dircall_arg3_1 = par_order_by;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1850;
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
        exception_tb = MAKE_TRACEBACK(frame_25a537781bdb078b5ed3a9d324deede0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_25a537781bdb078b5ed3a9d324deede0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_25a537781bdb078b5ed3a9d324deede0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_25a537781bdb078b5ed3a9d324deede0,
        type_description_1,
        par_element,
        par_order_by
    );


    // Release cached frame if used for exception.
    if (frame_25a537781bdb078b5ed3a9d324deede0 == cache_frame_25a537781bdb078b5ed3a9d324deede0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_25a537781bdb078b5ed3a9d324deede0);
        cache_frame_25a537781bdb078b5ed3a9d324deede0 = NULL;
    }

    assertFrameObject(frame_25a537781bdb078b5ed3a9d324deede0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_order_by);
    Py_DECREF(par_order_by);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_order_by);
    Py_DECREF(par_order_by);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__10_not_(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ee417a301dd43dcbd9dd9c1b9e8b7a1c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__11_not_(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__11_not_,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3a203b085ba79eb81c7bb66d1589e909,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__12_bindparam(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__12_bindparam,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2fdb76075a5bc20e6367e5cf27e8a070,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__13_case(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__13_case,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1e8fc897a68bcec95b01fff5e3ee6fe9,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__14_cast(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__14_cast,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8787461d0c237059dad1ede7bdfbbc72,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__15_try_cast(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__15_try_cast,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8afd47881921d160a0463c10d52ab161,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__16_column(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__16_column,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_46c1d0fa960cd2bb178177e0948a9ff9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__17_desc(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__17_desc,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_496e052f55221e1457cc9d260f505047,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__18_distinct(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__18_distinct,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2f184e7b87f6da531dc7e52defd009d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__19_bitwise_not(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__19_bitwise_not,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_efe59188dfb3fd3e0f8d0d0ae8e36bfb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__1_all_(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__1_all_,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1be93d48b20236d989e0571ae1047297,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__20_extract(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__20_extract,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4bb9d9f1592886c5bd910684c62ee33d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__21_false(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__21_false,
        mod_consts[171],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d0e2a3a196c346e9658fd482ae0540ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__22_funcfilter(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__22_funcfilter,
        mod_consts[173],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3c9fc9a19018d1d9f2d153cb4fae3a57,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__23_label(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__23_label,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_411d71c9ad45edf8156c7f735ca3fddd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__24_null(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__24_null,
        mod_consts[177],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_348cd188f1cf1931cba47425203de881,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__25_nulls_first(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__25_nulls_first,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e115693da0808392332cdee528255bb8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__26_nulls_last(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__26_nulls_last,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0660e8a7157cd60b03232a55122b6d56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[57],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__27_or_(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8fdcbb279e9aa1ac33b9f31b12fce4b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[182],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__28_or_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__28_or_,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_67bc987c96818c75bad0abf8fed7448f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[59],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__29_over(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__29_over,
        mod_consts[185],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d43f91731cbb22131cbf8a1883f8dcb0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__2_and_(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8bca71f850e9f85d3fafb439f09bca46,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[137],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__30_text(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__30_text,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b36adc1630cc0ab5eb0fb9fe45c53081,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[63],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__31_true(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__31_true,
        mod_consts[190],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a24bd62c372bac9ddddb24ce3bea2025,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[65],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__32_tuple_(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__32_tuple_,
        mod_consts[193],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4546763795b359e233d350fa2f6e2fd1,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[68],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__33_type_coerce(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__33_type_coerce,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f7484305b4b6b5c31de2af065d8f44d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[70],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__34_within_group(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__34_within_group,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_25a537781bdb078b5ed3a9d324deede0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[72],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__3_and_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__3_and_,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_43bf1db8e8f5767ca3e334385c28469e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__4_any_(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__4_any_,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3a34bd8f00cee5d35363912cf3ddb598,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__5_asc(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__5_asc,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c8d3409441b5a44ce4b27ace8bb003c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__6_collate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__6_collate,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5f83c9d6de6fc25847c0cf1d7d4af242,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__7_between(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__7_between,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a03b53dce32a8d7ca312fead03ab9a63,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__8_outparam(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$sql$_elements_constructors$$$function__8_outparam,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a56452e73dbb259e32941f17c6be508a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__9_not_(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_099840af5d248d68aad4267c54c35170,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$sql$_elements_constructors,
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

function_impl_code functable_sqlalchemy$sql$_elements_constructors[] = {
    impl_sqlalchemy$sql$_elements_constructors$$$function__1_all_,
    NULL,
    impl_sqlalchemy$sql$_elements_constructors$$$function__3_and_,
    impl_sqlalchemy$sql$_elements_constructors$$$function__4_any_,
    impl_sqlalchemy$sql$_elements_constructors$$$function__5_asc,
    impl_sqlalchemy$sql$_elements_constructors$$$function__6_collate,
    impl_sqlalchemy$sql$_elements_constructors$$$function__7_between,
    impl_sqlalchemy$sql$_elements_constructors$$$function__8_outparam,
    NULL,
    NULL,
    impl_sqlalchemy$sql$_elements_constructors$$$function__11_not_,
    impl_sqlalchemy$sql$_elements_constructors$$$function__12_bindparam,
    impl_sqlalchemy$sql$_elements_constructors$$$function__13_case,
    impl_sqlalchemy$sql$_elements_constructors$$$function__14_cast,
    impl_sqlalchemy$sql$_elements_constructors$$$function__15_try_cast,
    impl_sqlalchemy$sql$_elements_constructors$$$function__16_column,
    impl_sqlalchemy$sql$_elements_constructors$$$function__17_desc,
    impl_sqlalchemy$sql$_elements_constructors$$$function__18_distinct,
    impl_sqlalchemy$sql$_elements_constructors$$$function__19_bitwise_not,
    impl_sqlalchemy$sql$_elements_constructors$$$function__20_extract,
    impl_sqlalchemy$sql$_elements_constructors$$$function__21_false,
    impl_sqlalchemy$sql$_elements_constructors$$$function__22_funcfilter,
    impl_sqlalchemy$sql$_elements_constructors$$$function__23_label,
    impl_sqlalchemy$sql$_elements_constructors$$$function__24_null,
    impl_sqlalchemy$sql$_elements_constructors$$$function__25_nulls_first,
    impl_sqlalchemy$sql$_elements_constructors$$$function__26_nulls_last,
    NULL,
    impl_sqlalchemy$sql$_elements_constructors$$$function__28_or_,
    impl_sqlalchemy$sql$_elements_constructors$$$function__29_over,
    impl_sqlalchemy$sql$_elements_constructors$$$function__30_text,
    impl_sqlalchemy$sql$_elements_constructors$$$function__31_true,
    impl_sqlalchemy$sql$_elements_constructors$$$function__32_tuple_,
    impl_sqlalchemy$sql$_elements_constructors$$$function__33_type_coerce,
    impl_sqlalchemy$sql$_elements_constructors$$$function__34_within_group,
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

    function_impl_code *current = functable_sqlalchemy$sql$_elements_constructors;
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

    if (offset > sizeof(functable_sqlalchemy$sql$_elements_constructors) || offset < 0) {
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
        functable_sqlalchemy$sql$_elements_constructors[offset],
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
        module_sqlalchemy$sql$_elements_constructors,
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
PyObject *modulecode_sqlalchemy$sql$_elements_constructors(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlalchemy.sql._elements_constructors");

    // Store the module for future use.
    module_sqlalchemy$sql$_elements_constructors = module;

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
        PRINT_STRING("sqlalchemy.sql._elements_constructors: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("sqlalchemy.sql._elements_constructors: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlalchemy$sql$_elements_constructors\n");

    moduledict_sqlalchemy$sql$_elements_constructors = MODULE_DICT(module_sqlalchemy$sql$_elements_constructors);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlalchemy$sql$_elements_constructors,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$sql$_elements_constructors,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[93]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$sql$_elements_constructors,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$sql$_elements_constructors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$sql$_elements_constructors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlalchemy$sql$_elements_constructors);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_sqlalchemy$sql$_elements_constructors);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_38bfe2a39f872ae508926c863d28ccc4;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_2);
    }
    frame_38bfe2a39f872ae508926c863d28ccc4 = MAKE_MODULE_FRAME(codeobj_38bfe2a39f872ae508926c863d28ccc4, module_sqlalchemy$sql$_elements_constructors);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_38bfe2a39f872ae508926c863d28ccc4);
    assert(Py_REFCNT(frame_38bfe2a39f872ae508926c863d28ccc4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[76], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[77], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[79]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[81],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[81]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        tmp_import_name_from_2 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_2 == NULL));
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[83],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[83]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        tmp_import_name_from_3 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_3 == NULL));
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[84],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[84]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        tmp_import_name_from_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_4 == NULL));
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[85],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[85]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        tmp_import_name_from_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_5 == NULL));
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[86],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[86]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        tmp_import_name_from_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_6 == NULL));
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[87],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[87]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        tmp_import_name_from_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_7 == NULL));
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[88],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[88]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        tmp_import_name_from_8 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_8 == NULL));
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[66],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[66]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_False;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        tmp_import_name_from_9 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_9 == NULL));
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[91],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[91]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        tmp_import_name_from_10 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_10 == NULL));
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[92],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[92]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[93];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[94];
        tmp_level_value_1 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 23;
        tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[14],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[93];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[96];
        tmp_level_value_2 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 24;
        tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[16],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[16]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[97];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[98];
        tmp_level_value_3 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 25;
        tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[99],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[99]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[14];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[100];
        tmp_level_value_4 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 26;
        tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[101],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[101]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[102];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[103];
        tmp_level_value_5 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 27;
        tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[21],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[21]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[102];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[104];
        tmp_level_value_6 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 28;
        tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[3],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[102];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[105];
        tmp_level_value_7 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 29;
        tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[27],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[27]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[102];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[106];
        tmp_level_value_8 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 30;
        tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[31],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[102];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[107];
        tmp_level_value_9 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 31;
        tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_19,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[11],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[11]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[102];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[108];
        tmp_level_value_10 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 32;
        tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_20,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[0],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[102];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[109];
        tmp_level_value_11 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 33;
        tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_21,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[35],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts[35]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[102];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[110];
        tmp_level_value_12 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 34;
        tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_22,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[111],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts[111]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[102];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[112];
        tmp_level_value_13 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 35;
        tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_23,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[43],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[102];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[113];
        tmp_level_value_14 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 36;
        tmp_import_name_from_24 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_24,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[45],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[102];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[114];
        tmp_level_value_15 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 37;
        tmp_import_name_from_25 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_25,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[48],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts[48]);
        }

        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_26;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[102];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[115];
        tmp_level_value_16 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 38;
        tmp_import_name_from_26 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_26,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[50],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts[50]);
        }

        Py_DECREF(tmp_import_name_from_26);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[102];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[116];
        tmp_level_value_17 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 39;
        tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_import_name_from_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_27,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[52],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts[52]);
        }

        Py_DECREF(tmp_import_name_from_27);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_28;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[102];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[117];
        tmp_level_value_18 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 40;
        tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_import_name_from_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_28,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[60],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts[60]);
        }

        Py_DECREF(tmp_import_name_from_28);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_29;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[102];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[118];
        tmp_level_value_19 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 41;
        tmp_import_name_from_29 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_29,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[62],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts[62]);
        }

        Py_DECREF(tmp_import_name_from_29);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_30;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[102];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[119];
        tmp_level_value_20 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 42;
        tmp_import_name_from_30 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_30,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[64],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts[64]);
        }

        Py_DECREF(tmp_import_name_from_30);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_31;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[102];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[120];
        tmp_level_value_21 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 43;
        tmp_import_name_from_31 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_import_name_from_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_31,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[33],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts[33]);
        }

        Py_DECREF(tmp_import_name_from_31);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_32;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[102];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = mod_consts[121];
        tmp_level_value_22 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 44;
        tmp_import_name_from_32 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_import_name_from_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_32,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[66],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts[66]);
        }

        Py_DECREF(tmp_import_name_from_32);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_33;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[102];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[122];
        tmp_level_value_23 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 45;
        tmp_import_name_from_33 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_import_name_from_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_33,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[69],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts[69]);
        }

        Py_DECREF(tmp_import_name_from_33);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_34;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[102];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = mod_consts[123];
        tmp_level_value_24 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 46;
        tmp_import_name_from_34 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_import_name_from_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_34,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[8],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts[8]);
        }

        Py_DECREF(tmp_import_name_from_34);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_35;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[102];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = mod_consts[124];
        tmp_level_value_25 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 47;
        tmp_import_name_from_35 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_import_name_from_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_35,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[71],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts[71]);
        }

        Py_DECREF(tmp_import_name_from_35);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_36;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[125];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[126];
        tmp_level_value_26 = mod_consts[95];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 48;
        tmp_import_name_from_36 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_import_name_from_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_36,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[127],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts[127]);
        }

        Py_DECREF(tmp_import_name_from_36);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_37;
        PyObject *tmp_name_value_27;
        PyObject *tmp_globals_arg_value_27;
        PyObject *tmp_locals_arg_value_27;
        PyObject *tmp_fromlist_value_27;
        PyObject *tmp_level_value_27;
        tmp_name_value_27 = mod_consts[128];
        tmp_globals_arg_value_27 = (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors;
        tmp_locals_arg_value_27 = Py_None;
        tmp_fromlist_value_27 = mod_consts[129];
        tmp_level_value_27 = mod_consts[130];
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 49;
        tmp_import_name_from_37 = IMPORT_MODULE5(tstate, tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
        if (tmp_import_name_from_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_37,
                (PyObject *)moduledict_sqlalchemy$sql$_elements_constructors,
                mod_consts[131],
                mod_consts[82]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts[131]);
        }

        Py_DECREF(tmp_import_name_from_37);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 60;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[132]);

        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[134]);


        tmp_assign_source_45 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__1_all_(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_annotations_2;
        tmp_annotations_2 = DICT_COPY(mod_consts[136]);


        tmp_assign_source_46 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__2_and_(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_46);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

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
        PyObject *tmp_assign_source_47;


        tmp_assign_source_47 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__3_and_();

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_47);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_annotations_3;
        tmp_annotations_3 = DICT_COPY(mod_consts[134]);


        tmp_assign_source_48 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__4_any_(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_annotations_4;
        tmp_annotations_4 = DICT_COPY(mod_consts[139]);


        tmp_assign_source_49 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__5_asc(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_annotations_5;
        tmp_annotations_5 = DICT_COPY(mod_consts[141]);


        tmp_assign_source_50 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__6_collate(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_6;
        tmp_defaults_1 = mod_consts[143];
        tmp_annotations_6 = DICT_COPY(mod_consts[144]);
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_51 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__7_between(tmp_defaults_1, tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_7;
        tmp_defaults_2 = mod_consts[145];
        tmp_annotations_7 = DICT_COPY(mod_consts[146]);
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_52 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__8_outparam(tmp_defaults_2, tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_annotations_8;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = DICT_COPY(mod_consts[148]);


        tmp_args_element_value_1 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__9_not_(tmp_annotations_8);

        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 441;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_annotations_9;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = DICT_COPY(mod_consts[150]);


        tmp_args_element_value_2 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__10_not_(tmp_annotations_9);

        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 446;
        tmp_assign_source_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_annotations_10;
        tmp_annotations_10 = DICT_COPY(mod_consts[150]);


        tmp_assign_source_55 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__11_not_(tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_annotations_11;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[151]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = MAKE_TUPLE_EMPTY(9);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM(tmp_defaults_3, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_False;
            PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 468;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[151]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 468;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_defaults_3, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_3, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_3, 5, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_False;
            PyTuple_SET_ITEM0(tmp_defaults_3, 6, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_False;
            PyTuple_SET_ITEM0(tmp_defaults_3, 7, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_False;
            PyTuple_SET_ITEM0(tmp_defaults_3, 8, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_defaults_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_annotations_11 = DICT_COPY(mod_consts[152]);


        tmp_assign_source_56 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__12_bindparam(tmp_defaults_3, tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_kw_defaults_1;
        PyObject *tmp_annotations_12;
        tmp_kw_defaults_1 = DICT_COPY(mod_consts[154]);
        tmp_annotations_12 = DICT_COPY(mod_consts[155]);


        tmp_assign_source_57 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__13_case(tmp_kw_defaults_1, tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_annotations_13;
        tmp_annotations_13 = DICT_COPY(mod_consts[157]);


        tmp_assign_source_58 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__14_cast(tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_annotations_14;
        tmp_annotations_14 = DICT_COPY(mod_consts[159]);


        tmp_assign_source_59 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__15_try_cast(tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_defaults_4;
        PyObject *tmp_annotations_15;
        tmp_defaults_4 = mod_consts[161];
        tmp_annotations_15 = DICT_COPY(mod_consts[162]);
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_60 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__16_column(tmp_defaults_4, tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_annotations_16;
        tmp_annotations_16 = DICT_COPY(mod_consts[139]);


        tmp_assign_source_61 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__17_desc(tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_annotations_17;
        tmp_annotations_17 = DICT_COPY(mod_consts[165]);


        tmp_assign_source_62 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__18_distinct(tmp_annotations_17);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_annotations_18;
        tmp_annotations_18 = DICT_COPY(mod_consts[165]);


        tmp_assign_source_63 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__19_bitwise_not(tmp_annotations_18);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_annotations_19;
        tmp_annotations_19 = DICT_COPY(mod_consts[168]);


        tmp_assign_source_64 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__20_extract(tmp_annotations_19);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_annotations_20;
        tmp_annotations_20 = DICT_COPY(mod_consts[170]);


        tmp_assign_source_65 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__21_false(tmp_annotations_20);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_annotations_21;
        tmp_annotations_21 = DICT_COPY(mod_consts[172]);


        tmp_assign_source_66 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__22_funcfilter(tmp_annotations_21);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_defaults_5;
        PyObject *tmp_annotations_22;
        tmp_defaults_5 = mod_consts[145];
        tmp_annotations_22 = DICT_COPY(mod_consts[174]);
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_67 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__23_label(tmp_defaults_5, tmp_annotations_22);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_annotations_23;
        tmp_annotations_23 = DICT_COPY(mod_consts[176]);


        tmp_assign_source_68 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__24_null(tmp_annotations_23);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_annotations_24;
        tmp_annotations_24 = DICT_COPY(mod_consts[178]);


        tmp_assign_source_69 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__25_nulls_first(tmp_annotations_24);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_annotations_25;
        tmp_annotations_25 = DICT_COPY(mod_consts[178]);


        tmp_assign_source_70 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__26_nulls_last(tmp_annotations_25);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_annotations_26;
        tmp_annotations_26 = DICT_COPY(mod_consts[181]);


        tmp_assign_source_71 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__27_or_(tmp_annotations_26);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_71);
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        tmp_operand_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_operand_value_2 == NULL)) {
            tmp_operand_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1429;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1429;

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
        PyObject *tmp_assign_source_72;


        tmp_assign_source_72 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__28_or_();

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_72);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_defaults_6;
        PyObject *tmp_annotations_27;
        tmp_defaults_6 = mod_consts[183];
        tmp_annotations_27 = DICT_COPY(mod_consts[184]);
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_73 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__29_over(tmp_defaults_6, tmp_annotations_27);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_annotations_28;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1579;

            goto frame_exception_exit_1;
        }
        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 1579;
        tmp_called_value_4 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_5, mod_consts[186]);

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1579;

            goto frame_exception_exit_1;
        }
        tmp_annotations_28 = DICT_COPY(mod_consts[187]);


        tmp_args_element_value_3 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__30_text(tmp_annotations_28);

        frame_38bfe2a39f872ae508926c863d28ccc4->m_frame.f_lineno = 1579;
        tmp_assign_source_74 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1579;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_74);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_38bfe2a39f872ae508926c863d28ccc4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_38bfe2a39f872ae508926c863d28ccc4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_38bfe2a39f872ae508926c863d28ccc4, exception_lineno);
    }



    assertFrameObject(frame_38bfe2a39f872ae508926c863d28ccc4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_annotations_29;
        tmp_annotations_29 = DICT_COPY(mod_consts[189]);


        tmp_assign_source_75 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__31_true(tmp_annotations_29);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_kw_defaults_2;
        PyObject *tmp_annotations_30;
        tmp_kw_defaults_2 = DICT_COPY(mod_consts[191]);
        tmp_annotations_30 = DICT_COPY(mod_consts[192]);


        tmp_assign_source_76 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__32_tuple_(tmp_kw_defaults_2, tmp_annotations_30);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_annotations_31;
        tmp_annotations_31 = DICT_COPY(mod_consts[194]);


        tmp_assign_source_77 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__33_type_coerce(tmp_annotations_31);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_annotations_32;
        tmp_annotations_32 = DICT_COPY(mod_consts[196]);


        tmp_assign_source_78 = MAKE_FUNCTION_sqlalchemy$sql$_elements_constructors$$$function__34_within_group(tmp_annotations_32);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_78);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlalchemy.sql._elements_constructors", false);

    Py_INCREF(module_sqlalchemy$sql$_elements_constructors);
    return module_sqlalchemy$sql$_elements_constructors;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$_elements_constructors, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlalchemy$sql$_elements_constructors", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
