/* Generated code for Python module 'pyparsing.unicode'
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

/* The "module_pyparsing$unicode" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyparsing$unicode;
PyDictObject *moduledict_pyparsing$unicode;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[182];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[182];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyparsing.unicode"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 182; i++) {
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
void checkModuleConstants_pyparsing$unicode(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 182; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b41f489555e666f5d3758cd177f49f36;
static PyCodeObject *codeobj_8b4a836a4632cc61b40b2b4efada07fc;
static PyCodeObject *codeobj_0b07f377e4875d846ae08dd7738af6b0;
static PyCodeObject *codeobj_2aa27ee435d8f6a10c5a945ddb5c63d9;
static PyCodeObject *codeobj_18ce934730325064e33524b0b7f1a7e9;
static PyCodeObject *codeobj_054ffbdb80b0e5407cfefd14e08435e0;
static PyCodeObject *codeobj_38a41826a3fa86f354dd3cd1bfc542b6;
static PyCodeObject *codeobj_183998f295ba82ecd21ba051d5d7b9db;
static PyCodeObject *codeobj_79982aa901d07e740c30126b3e86b4e2;
static PyCodeObject *codeobj_46c21372245fd31a7f1bcfe1ff9eb807;
static PyCodeObject *codeobj_3e462fbef99409351edbc1c471764323;
static PyCodeObject *codeobj_952180b9772e047c3f8efad60e9be5ef;
static PyCodeObject *codeobj_d6c3d19905fbc273ff3cbb9139bc7c81;
static PyCodeObject *codeobj_4b235e179950cb1ae83a97055f675300;
static PyCodeObject *codeobj_0260cbd6b2c9265b44dbeabac3610874;
static PyCodeObject *codeobj_9974f2bb2cdb8191f39be121d2bce026;
static PyCodeObject *codeobj_5a5ecb27d2ad18decf4bafb38de34041;
static PyCodeObject *codeobj_2f15169a72b89f0d967fa408c20ae34f;
static PyCodeObject *codeobj_6df108e1719799f16009432e34fe3ff7;
static PyCodeObject *codeobj_071bb3827f17785902482a4fe4038d25;
static PyCodeObject *codeobj_183ea42c7d92122305e3892fb630f3fa;
static PyCodeObject *codeobj_5c0aa30fb97933b5b127eaf26e294726;
static PyCodeObject *codeobj_4d74cec4b1cf4232b0f5e5eac6264651;
static PyCodeObject *codeobj_98f98467316ad56eb985bb6c6fe0080c;
static PyCodeObject *codeobj_d6b619a2539ba6911c85872e1dc3b008;
static PyCodeObject *codeobj_d159eb89bad76cd9cf8216cf8b21c388;
static PyCodeObject *codeobj_ef3c259c39efdd6b2766738519c3a6b5;
static PyCodeObject *codeobj_7d9d7fe4ea9aa20170daaca89f996d56;
static PyCodeObject *codeobj_c9d44e5c25900a7baef1825b8905c5b0;
static PyCodeObject *codeobj_6b2c45c508582da92af4336e6fdc0b3c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[173]); CHECK_OBJECT(module_filename_obj);
    codeobj_b41f489555e666f5d3758cd177f49f36 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[8], mod_consts[8], mod_consts[174], NULL, 1, 0, 0);
    codeobj_8b4a836a4632cc61b40b2b4efada07fc = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[175], mod_consts[175], NULL, NULL, 0, 0, 0);
    codeobj_0b07f377e4875d846ae08dd7738af6b0 = MAKE_CODE_OBJECT(module_filename_obj, 319, 0, mod_consts[148], mod_consts[148], mod_consts[176], NULL, 0, 0, 0);
    codeobj_2aa27ee435d8f6a10c5a945ddb5c63d9 = MAKE_CODE_OBJECT(module_filename_obj, 140, 0, mod_consts[86], mod_consts[86], mod_consts[176], NULL, 0, 0, 0);
    codeobj_18ce934730325064e33524b0b7f1a7e9 = MAKE_CODE_OBJECT(module_filename_obj, 218, 0, mod_consts[112], mod_consts[112], mod_consts[176], NULL, 0, 0, 0);
    codeobj_054ffbdb80b0e5407cfefd14e08435e0 = MAKE_CODE_OBJECT(module_filename_obj, 205, 0, mod_consts[108], mod_consts[108], mod_consts[176], NULL, 0, 0, 0);
    codeobj_38a41826a3fa86f354dd3cd1bfc542b6 = MAKE_CODE_OBJECT(module_filename_obj, 341, 0, mod_consts[158], mod_consts[158], mod_consts[176], NULL, 0, 0, 0);
    codeobj_183998f295ba82ecd21ba051d5d7b9db = MAKE_CODE_OBJECT(module_filename_obj, 165, 0, mod_consts[104], mod_consts[104], mod_consts[176], NULL, 0, 0, 0);
    codeobj_79982aa901d07e740c30126b3e86b4e2 = MAKE_CODE_OBJECT(module_filename_obj, 287, 0, mod_consts[135], mod_consts[135], mod_consts[176], NULL, 0, 0, 0);
    codeobj_46c21372245fd31a7f1bcfe1ff9eb807 = MAKE_CODE_OBJECT(module_filename_obj, 327, 0, mod_consts[154], mod_consts[154], mod_consts[176], NULL, 0, 0, 0);
    codeobj_3e462fbef99409351edbc1c471764323 = MAKE_CODE_OBJECT(module_filename_obj, 251, 0, mod_consts[124], mod_consts[124], mod_consts[176], NULL, 0, 0, 0);
    codeobj_952180b9772e047c3f8efad60e9be5ef = MAKE_CODE_OBJECT(module_filename_obj, 241, 0, mod_consts[116], mod_consts[116], mod_consts[176], NULL, 0, 0, 0);
    codeobj_d6c3d19905fbc273ff3cbb9139bc7c81 = MAKE_CODE_OBJECT(module_filename_obj, 244, 0, mod_consts[119], mod_consts[119], mod_consts[176], NULL, 0, 0, 0);
    codeobj_4b235e179950cb1ae83a97055f675300 = MAKE_CODE_OBJECT(module_filename_obj, 263, 0, mod_consts[128], mod_consts[128], mod_consts[176], NULL, 0, 0, 0);
    codeobj_0260cbd6b2c9265b44dbeabac3610874 = MAKE_CODE_OBJECT(module_filename_obj, 146, 0, mod_consts[91], mod_consts[91], mod_consts[176], NULL, 0, 0, 0);
    codeobj_9974f2bb2cdb8191f39be121d2bce026 = MAKE_CODE_OBJECT(module_filename_obj, 153, 0, mod_consts[96], mod_consts[96], mod_consts[176], NULL, 0, 0, 0);
    codeobj_5a5ecb27d2ad18decf4bafb38de34041 = MAKE_CODE_OBJECT(module_filename_obj, 159, 0, mod_consts[100], mod_consts[100], mod_consts[176], NULL, 0, 0, 0);
    codeobj_2f15169a72b89f0d967fa408c20ae34f = MAKE_CODE_OBJECT(module_filename_obj, 312, 0, mod_consts[143], mod_consts[143], mod_consts[176], NULL, 0, 0, 0);
    codeobj_6df108e1719799f16009432e34fe3ff7 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[61], mod_consts[61], mod_consts[177], NULL, 3, 0, 0);
    codeobj_071bb3827f17785902482a4fe4038d25 = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[59], mod_consts[59], mod_consts[178], NULL, 2, 0, 0);
    codeobj_183ea42c7d92122305e3892fb630f3fa = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[22], mod_consts[22], mod_consts[179], NULL, 1, 0, 0);
    codeobj_5c0aa30fb97933b5b127eaf26e294726 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[72], mod_consts[72], mod_consts[180], NULL, 1, 0, 0);
    codeobj_4d74cec4b1cf4232b0f5e5eac6264651 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[28], mod_consts[28], mod_consts[180], NULL, 1, 0, 0);
    codeobj_98f98467316ad56eb985bb6c6fe0080c = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[42], mod_consts[42], mod_consts[180], NULL, 1, 0, 0);
    codeobj_d6b619a2539ba6911c85872e1dc3b008 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[36], mod_consts[36], mod_consts[180], NULL, 1, 0, 0);
    codeobj_d159eb89bad76cd9cf8216cf8b21c388 = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[76], mod_consts[76], mod_consts[181], NULL, 1, 0, 0);
    codeobj_ef3c259c39efdd6b2766738519c3a6b5 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[29], mod_consts[29], mod_consts[180], NULL, 1, 0, 0);
    codeobj_7d9d7fe4ea9aa20170daaca89f996d56 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[68], mod_consts[68], mod_consts[180], NULL, 1, 0, 0);
    codeobj_c9d44e5c25900a7baef1825b8905c5b0 = MAKE_CODE_OBJECT(module_filename_obj, 128, 0, mod_consts[79], mod_consts[79], mod_consts[176], NULL, 0, 0, 0);
    codeobj_6b2c45c508582da92af4336e6fdc0b3c = MAKE_CODE_OBJECT(module_filename_obj, 31, 0, mod_consts[10], mod_consts[10], mod_consts[176], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__10_identifier();


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__1___init__();


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__2___get__();


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__3__chars_for_ranges();


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__4_printables();


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__5_alphas();


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__6_nums();


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__7_alphanums();


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__8_identchars();


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__9_identbodychars();


// The module function definitions.
static PyObject *impl_pyparsing$unicode$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_fn = python_pars[1];
    struct Nuitka_FrameObject *frame_071bb3827f17785902482a4fe4038d25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_071bb3827f17785902482a4fe4038d25 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_071bb3827f17785902482a4fe4038d25)) {
        Py_XDECREF(cache_frame_071bb3827f17785902482a4fe4038d25);

#if _DEBUG_REFCOUNTS
        if (cache_frame_071bb3827f17785902482a4fe4038d25 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_071bb3827f17785902482a4fe4038d25 = MAKE_FUNCTION_FRAME(tstate, codeobj_071bb3827f17785902482a4fe4038d25, module_pyparsing$unicode, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_071bb3827f17785902482a4fe4038d25->m_type_description == NULL);
    frame_071bb3827f17785902482a4fe4038d25 = cache_frame_071bb3827f17785902482a4fe4038d25;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_071bb3827f17785902482a4fe4038d25);
    assert(Py_REFCNT(frame_071bb3827f17785902482a4fe4038d25) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_fn);
        tmp_assattr_value_1 = par_fn;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_fn);
        tmp_expression_value_1 = par_fn;
        tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_fn);
        tmp_expression_value_2 = par_fn;
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_071bb3827f17785902482a4fe4038d25, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_071bb3827f17785902482a4fe4038d25->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_071bb3827f17785902482a4fe4038d25, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_071bb3827f17785902482a4fe4038d25,
        type_description_1,
        par_self,
        par_fn
    );


    // Release cached frame if used for exception.
    if (frame_071bb3827f17785902482a4fe4038d25 == cache_frame_071bb3827f17785902482a4fe4038d25) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_071bb3827f17785902482a4fe4038d25);
        cache_frame_071bb3827f17785902482a4fe4038d25 = NULL;
    }

    assertFrameObject(frame_071bb3827f17785902482a4fe4038d25);

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
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyparsing$unicode$$$function__2___get__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[2]);
    PyObject *var_attrname = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_6df108e1719799f16009432e34fe3ff7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6df108e1719799f16009432e34fe3ff7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_cls);
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_obj);
        tmp_type_arg_1 = par_obj;
        tmp_assign_source_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        {
            PyObject *old = Nuitka_Cell_GET(par_cls);
            PyCell_SET(par_cls, tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_6df108e1719799f16009432e34fe3ff7)) {
        Py_XDECREF(cache_frame_6df108e1719799f16009432e34fe3ff7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6df108e1719799f16009432e34fe3ff7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6df108e1719799f16009432e34fe3ff7 = MAKE_FUNCTION_FRAME(tstate, codeobj_6df108e1719799f16009432e34fe3ff7, module_pyparsing$unicode, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6df108e1719799f16009432e34fe3ff7->m_type_description == NULL);
    frame_6df108e1719799f16009432e34fe3ff7 = cache_frame_6df108e1719799f16009432e34fe3ff7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6df108e1719799f16009432e34fe3ff7);
    assert(Py_REFCNT(frame_6df108e1719799f16009432e34fe3ff7) == 2);

    // Framed code:
    {
        bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_cls);
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts[3]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_1;
            CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
            tmp_expression_value_3 = Nuitka_Cell_GET(par_cls);
            tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[4]);
            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;
                type_description_1 = "ooco";
                goto frame_exception_exit_1;
            }
            tmp_subscript_value_1 = mod_consts[5];
            tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;
                type_description_1 = "ooco";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;
                type_description_1 = "ooco";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = par_cls;
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_any_arg_1 = MAKE_GENERATOR_pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_capi_result_1 = BUILTIN_ANY(tstate, tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
        Py_DECREF(tmp_capi_result_1);
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
        tmp_assattr_target_1 = Nuitka_Cell_GET(par_cls);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[0]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[2]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        assert(var_attrname == NULL);
        var_attrname = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_attrname);
        tmp_cmp_expr_left_2 = var_attrname;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
        tmp_expression_value_6 = Nuitka_Cell_GET(par_cls);
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[3]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_cls);
        frame_6df108e1719799f16009432e34fe3ff7->m_frame.f_lineno = 24;
        tmp_ass_subvalue_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[0], tmp_args_element_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
        tmp_expression_value_7 = Nuitka_Cell_GET(par_cls);
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[3]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 24;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_attrname);
        tmp_ass_subscript_1 = var_attrname;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    {
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
        tmp_expression_value_9 = Nuitka_Cell_GET(par_cls);
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[3]);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        if (var_attrname == NULL) {
            Py_DECREF(tmp_expression_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 25;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_2 = var_attrname;
        tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooco";
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
        exception_tb = MAKE_TRACEBACK(frame_6df108e1719799f16009432e34fe3ff7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6df108e1719799f16009432e34fe3ff7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6df108e1719799f16009432e34fe3ff7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6df108e1719799f16009432e34fe3ff7,
        type_description_1,
        par_self,
        par_obj,
        par_cls,
        var_attrname
    );


    // Release cached frame if used for exception.
    if (frame_6df108e1719799f16009432e34fe3ff7 == cache_frame_6df108e1719799f16009432e34fe3ff7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6df108e1719799f16009432e34fe3ff7);
        cache_frame_6df108e1719799f16009432e34fe3ff7 = NULL;
    }

    assertFrameObject(frame_6df108e1719799f16009432e34fe3ff7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    par_cls = NULL;
    Py_XDECREF(var_attrname);
    var_attrname = NULL;
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

    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    par_cls = NULL;
    Py_XDECREF(var_attrname);
    var_attrname = NULL;
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
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr_locals {
    PyObject *var_superclass;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr_locals *generator_heap = (struct pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_superclass = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_b41f489555e666f5d3758cd177f49f36, module_pyparsing$unicode, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 17;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_superclass;
            generator_heap->var_superclass = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_superclass);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_name_value_1;
        PyObject *tmp_default_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[7]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 18;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 18;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_superclass);
        tmp_expression_value_3 = generator_heap->var_superclass;
        tmp_name_value_1 = mod_consts[3];
        tmp_default_value_1 = MAKE_LIST_EMPTY(0);
        tmp_cmp_expr_right_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_3, tmp_name_value_1, tmp_default_value_1);
        Py_DECREF(tmp_default_value_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            generator_heap->exception_lineno = 18;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        Py_INCREF(tmp_expression_value_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_name_value_1, sizeof(PyObject *), &tmp_default_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_name_value_1, sizeof(PyObject *), &tmp_default_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 18;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 17;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_superclass,
            generator->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_superclass);
    generator_heap->var_superclass = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_superclass);
    generator_heap->var_superclass = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr_context,
        module_pyparsing$unicode,
        mod_consts[8],
#if PYTHON_VERSION >= 0x350
        mod_consts[9],
#endif
        codeobj_b41f489555e666f5d3758cd177f49f36,
        closure,
        2,
#if 1
        sizeof(struct pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_pyparsing$unicode$$$function__3__chars_for_ranges(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *var_ret = NULL;
    PyObject *var_cc = NULL;
    PyObject *var_rr = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_183ea42c7d92122305e3892fb630f3fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_183ea42c7d92122305e3892fb630f3fa = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_ret == NULL);
        var_ret = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_183ea42c7d92122305e3892fb630f3fa)) {
        Py_XDECREF(cache_frame_183ea42c7d92122305e3892fb630f3fa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_183ea42c7d92122305e3892fb630f3fa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_183ea42c7d92122305e3892fb630f3fa = MAKE_FUNCTION_FRAME(tstate, codeobj_183ea42c7d92122305e3892fb630f3fa, module_pyparsing$unicode, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_183ea42c7d92122305e3892fb630f3fa->m_type_description == NULL);
    frame_183ea42c7d92122305e3892fb630f3fa = cache_frame_183ea42c7d92122305e3892fb630f3fa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_183ea42c7d92122305e3892fb630f3fa);
    assert(Py_REFCNT(frame_183ea42c7d92122305e3892fb630f3fa) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 58;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_cc;
            var_cc = tmp_assign_source_4;
            Py_INCREF(var_cc);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_cc);
        tmp_cmp_expr_left_1 = var_cc;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_name_value_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(var_cc);
        tmp_expression_value_2 = var_cc;
        tmp_name_value_1 = mod_consts[11];
        tmp_default_value_1 = mod_consts[12];
        tmp_iter_arg_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_1, tmp_default_value_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 61;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_7 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_rr;
            var_rr = tmp_assign_source_7;
            Py_INCREF(var_rr);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        if (var_ret == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_3 = var_ret;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[14]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_rr);
        tmp_expression_value_4 = var_rr;
        tmp_subscript_value_1 = mod_consts[15];
        tmp_xrange_low_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
        if (tmp_xrange_low_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_rr);
        tmp_expression_value_5 = var_rr;
        tmp_subscript_value_2 = mod_consts[16];
        tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, -1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_xrange_low_1);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_right_1 = mod_consts[17];
        tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_xrange_high_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_xrange_low_1);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_1 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
        Py_DECREF(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_high_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        frame_183ea42c7d92122305e3892fb630f3fa->m_frame.f_lineno = 62;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 61;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 58;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_set_arg_1;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_2 != NULL);
        if (var_ret == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 63;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }

        tmp_set_arg_1 = var_ret;
        tmp_args_element_value_2 = PySet_New(tmp_set_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        frame_183ea42c7d92122305e3892fb630f3fa->m_frame.f_lineno = 63;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_3 = tmp_listcomp_1__$0;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 63;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_11 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_c;
            outline_0_var_c = tmp_assign_source_11;
            Py_INCREF(outline_0_var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_chr_arg_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_c);
        tmp_chr_arg_1 = outline_0_var_c;
        tmp_append_value_1 = BUILTIN_CHR(tstate, tmp_chr_arg_1);
        if (tmp_append_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 63;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }
    goto loop_start_3;
    loop_end_3:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_5;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    goto try_return_handler_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF(outline_0_var_c);
    outline_0_var_c = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_0_var_c);
    outline_0_var_c = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    exception_lineno = 63;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_183ea42c7d92122305e3892fb630f3fa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_183ea42c7d92122305e3892fb630f3fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_183ea42c7d92122305e3892fb630f3fa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_183ea42c7d92122305e3892fb630f3fa,
        type_description_1,
        par_cls,
        var_ret,
        var_cc,
        var_rr
    );


    // Release cached frame if used for exception.
    if (frame_183ea42c7d92122305e3892fb630f3fa == cache_frame_183ea42c7d92122305e3892fb630f3fa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_183ea42c7d92122305e3892fb630f3fa);
        cache_frame_183ea42c7d92122305e3892fb630f3fa = NULL;
    }

    assertFrameObject(frame_183ea42c7d92122305e3892fb630f3fa);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ret);
    var_ret = NULL;
    Py_XDECREF(var_cc);
    var_cc = NULL;
    Py_XDECREF(var_rr);
    var_rr = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_ret);
    var_ret = NULL;
    Py_XDECREF(var_cc);
    var_cc = NULL;
    Py_XDECREF(var_rr);
    var_rr = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

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


static PyObject *impl_pyparsing$unicode$$$function__4_printables(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_FrameObject *frame_7d9d7fe4ea9aa20170daaca89f996d56;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d9d7fe4ea9aa20170daaca89f996d56 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d9d7fe4ea9aa20170daaca89f996d56)) {
        Py_XDECREF(cache_frame_7d9d7fe4ea9aa20170daaca89f996d56);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d9d7fe4ea9aa20170daaca89f996d56 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d9d7fe4ea9aa20170daaca89f996d56 = MAKE_FUNCTION_FRAME(tstate, codeobj_7d9d7fe4ea9aa20170daaca89f996d56, module_pyparsing$unicode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d9d7fe4ea9aa20170daaca89f996d56->m_type_description == NULL);
    frame_7d9d7fe4ea9aa20170daaca89f996d56 = cache_frame_7d9d7fe4ea9aa20170daaca89f996d56;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7d9d7fe4ea9aa20170daaca89f996d56);
    assert(Py_REFCNT(frame_7d9d7fe4ea9aa20170daaca89f996d56) == 2);

    // Framed code:
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_str_arg_value_1 = mod_consts[19];
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        assert(!(tmp_args_element_value_1 == NULL));
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[22]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7d9d7fe4ea9aa20170daaca89f996d56->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iterable_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iterable_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
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
        exception_tb = MAKE_TRACEBACK(frame_7d9d7fe4ea9aa20170daaca89f996d56, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d9d7fe4ea9aa20170daaca89f996d56->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d9d7fe4ea9aa20170daaca89f996d56, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d9d7fe4ea9aa20170daaca89f996d56,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_7d9d7fe4ea9aa20170daaca89f996d56 == cache_frame_7d9d7fe4ea9aa20170daaca89f996d56) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d9d7fe4ea9aa20170daaca89f996d56);
        cache_frame_7d9d7fe4ea9aa20170daaca89f996d56 = NULL;
    }

    assertFrameObject(frame_7d9d7fe4ea9aa20170daaca89f996d56);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyparsing$unicode$$$function__5_alphas(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_FrameObject *frame_4d74cec4b1cf4232b0f5e5eac6264651;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4d74cec4b1cf4232b0f5e5eac6264651 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4d74cec4b1cf4232b0f5e5eac6264651)) {
        Py_XDECREF(cache_frame_4d74cec4b1cf4232b0f5e5eac6264651);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d74cec4b1cf4232b0f5e5eac6264651 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d74cec4b1cf4232b0f5e5eac6264651 = MAKE_FUNCTION_FRAME(tstate, codeobj_4d74cec4b1cf4232b0f5e5eac6264651, module_pyparsing$unicode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4d74cec4b1cf4232b0f5e5eac6264651->m_type_description == NULL);
    frame_4d74cec4b1cf4232b0f5e5eac6264651 = cache_frame_4d74cec4b1cf4232b0f5e5eac6264651;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4d74cec4b1cf4232b0f5e5eac6264651);
    assert(Py_REFCNT(frame_4d74cec4b1cf4232b0f5e5eac6264651) == 2);

    // Framed code:
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_str_arg_value_1 = mod_consts[19];
        tmp_called_value_1 = (PyObject *)&PyFilter_Type;
        tmp_expression_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[24]);
        assert(!(tmp_args_element_value_1 == NULL));
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[22]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4d74cec4b1cf4232b0f5e5eac6264651->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iterable_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iterable_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
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
        exception_tb = MAKE_TRACEBACK(frame_4d74cec4b1cf4232b0f5e5eac6264651, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d74cec4b1cf4232b0f5e5eac6264651->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d74cec4b1cf4232b0f5e5eac6264651, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d74cec4b1cf4232b0f5e5eac6264651,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_4d74cec4b1cf4232b0f5e5eac6264651 == cache_frame_4d74cec4b1cf4232b0f5e5eac6264651) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4d74cec4b1cf4232b0f5e5eac6264651);
        cache_frame_4d74cec4b1cf4232b0f5e5eac6264651 = NULL;
    }

    assertFrameObject(frame_4d74cec4b1cf4232b0f5e5eac6264651);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyparsing$unicode$$$function__6_nums(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_FrameObject *frame_ef3c259c39efdd6b2766738519c3a6b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ef3c259c39efdd6b2766738519c3a6b5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ef3c259c39efdd6b2766738519c3a6b5)) {
        Py_XDECREF(cache_frame_ef3c259c39efdd6b2766738519c3a6b5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef3c259c39efdd6b2766738519c3a6b5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef3c259c39efdd6b2766738519c3a6b5 = MAKE_FUNCTION_FRAME(tstate, codeobj_ef3c259c39efdd6b2766738519c3a6b5, module_pyparsing$unicode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ef3c259c39efdd6b2766738519c3a6b5->m_type_description == NULL);
    frame_ef3c259c39efdd6b2766738519c3a6b5 = cache_frame_ef3c259c39efdd6b2766738519c3a6b5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ef3c259c39efdd6b2766738519c3a6b5);
    assert(Py_REFCNT(frame_ef3c259c39efdd6b2766738519c3a6b5) == 2);

    // Framed code:
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_str_arg_value_1 = mod_consts[19];
        tmp_called_value_1 = (PyObject *)&PyFilter_Type;
        tmp_expression_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[26]);
        assert(!(tmp_args_element_value_1 == NULL));
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[22]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ef3c259c39efdd6b2766738519c3a6b5->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iterable_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iterable_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
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
        exception_tb = MAKE_TRACEBACK(frame_ef3c259c39efdd6b2766738519c3a6b5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef3c259c39efdd6b2766738519c3a6b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef3c259c39efdd6b2766738519c3a6b5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef3c259c39efdd6b2766738519c3a6b5,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_ef3c259c39efdd6b2766738519c3a6b5 == cache_frame_ef3c259c39efdd6b2766738519c3a6b5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ef3c259c39efdd6b2766738519c3a6b5);
        cache_frame_ef3c259c39efdd6b2766738519c3a6b5 = NULL;
    }

    assertFrameObject(frame_ef3c259c39efdd6b2766738519c3a6b5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyparsing$unicode$$$function__7_alphanums(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_FrameObject *frame_5c0aa30fb97933b5b127eaf26e294726;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5c0aa30fb97933b5b127eaf26e294726 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5c0aa30fb97933b5b127eaf26e294726)) {
        Py_XDECREF(cache_frame_5c0aa30fb97933b5b127eaf26e294726);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5c0aa30fb97933b5b127eaf26e294726 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5c0aa30fb97933b5b127eaf26e294726 = MAKE_FUNCTION_FRAME(tstate, codeobj_5c0aa30fb97933b5b127eaf26e294726, module_pyparsing$unicode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5c0aa30fb97933b5b127eaf26e294726->m_type_description == NULL);
    frame_5c0aa30fb97933b5b127eaf26e294726 = cache_frame_5c0aa30fb97933b5b127eaf26e294726;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5c0aa30fb97933b5b127eaf26e294726);
    assert(Py_REFCNT(frame_5c0aa30fb97933b5b127eaf26e294726) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[28]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[29]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
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
        exception_tb = MAKE_TRACEBACK(frame_5c0aa30fb97933b5b127eaf26e294726, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5c0aa30fb97933b5b127eaf26e294726->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c0aa30fb97933b5b127eaf26e294726, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5c0aa30fb97933b5b127eaf26e294726,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_5c0aa30fb97933b5b127eaf26e294726 == cache_frame_5c0aa30fb97933b5b127eaf26e294726) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5c0aa30fb97933b5b127eaf26e294726);
        cache_frame_5c0aa30fb97933b5b127eaf26e294726 = NULL;
    }

    assertFrameObject(frame_5c0aa30fb97933b5b127eaf26e294726);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyparsing$unicode$$$function__8_identchars(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_FrameObject *frame_d6b619a2539ba6911c85872e1dc3b008;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d6b619a2539ba6911c85872e1dc3b008 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d6b619a2539ba6911c85872e1dc3b008)) {
        Py_XDECREF(cache_frame_d6b619a2539ba6911c85872e1dc3b008);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d6b619a2539ba6911c85872e1dc3b008 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d6b619a2539ba6911c85872e1dc3b008 = MAKE_FUNCTION_FRAME(tstate, codeobj_d6b619a2539ba6911c85872e1dc3b008, module_pyparsing$unicode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d6b619a2539ba6911c85872e1dc3b008->m_type_description == NULL);
    frame_d6b619a2539ba6911c85872e1dc3b008 = cache_frame_d6b619a2539ba6911c85872e1dc3b008;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d6b619a2539ba6911c85872e1dc3b008);
    assert(Py_REFCNT(frame_d6b619a2539ba6911c85872e1dc3b008) == 2);

    // Framed code:
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_str_arg_value_2;
        PyObject *tmp_iterable_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        tmp_str_arg_value_1 = mod_consts[19];
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_1 != NULL);
        tmp_str_arg_value_2 = mod_consts[19];
        tmp_called_value_2 = (PyObject *)&PyFilter_Type;
        tmp_expression_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[31]);
        assert(!(tmp_args_element_value_2 == NULL));
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[22]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d6b619a2539ba6911c85872e1dc3b008->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_iterable_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_iterable_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_3 = UNICODE_JOIN(tstate, tmp_str_arg_value_2, tmp_iterable_value_2);
        Py_DECREF(tmp_iterable_value_2);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = mod_consts[32];
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        assert(!(tmp_add_expr_left_2 == NULL));
        tmp_add_expr_right_2 = mod_consts[33];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        assert(!(tmp_add_expr_left_1 == NULL));
        tmp_add_expr_right_1 = mod_consts[34];
        tmp_set_arg_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        assert(!(tmp_set_arg_1 == NULL));
        tmp_args_element_value_1 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d6b619a2539ba6911c85872e1dc3b008->m_frame.f_lineno = 89;
        tmp_iterable_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iterable_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
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
        exception_tb = MAKE_TRACEBACK(frame_d6b619a2539ba6911c85872e1dc3b008, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d6b619a2539ba6911c85872e1dc3b008->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d6b619a2539ba6911c85872e1dc3b008, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d6b619a2539ba6911c85872e1dc3b008,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_d6b619a2539ba6911c85872e1dc3b008 == cache_frame_d6b619a2539ba6911c85872e1dc3b008) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d6b619a2539ba6911c85872e1dc3b008);
        cache_frame_d6b619a2539ba6911c85872e1dc3b008 = NULL;
    }

    assertFrameObject(frame_d6b619a2539ba6911c85872e1dc3b008);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyparsing$unicode$$$function__9_identbodychars(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *outline_0_var_c = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_98f98467316ad56eb985bb6c6fe0080c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_98f98467316ad56eb985bb6c6fe0080c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_98f98467316ad56eb985bb6c6fe0080c)) {
        Py_XDECREF(cache_frame_98f98467316ad56eb985bb6c6fe0080c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_98f98467316ad56eb985bb6c6fe0080c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_98f98467316ad56eb985bb6c6fe0080c = MAKE_FUNCTION_FRAME(tstate, codeobj_98f98467316ad56eb985bb6c6fe0080c, module_pyparsing$unicode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_98f98467316ad56eb985bb6c6fe0080c->m_type_description == NULL);
    frame_98f98467316ad56eb985bb6c6fe0080c = cache_frame_98f98467316ad56eb985bb6c6fe0080c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_98f98467316ad56eb985bb6c6fe0080c);
    assert(Py_REFCNT(frame_98f98467316ad56eb985bb6c6fe0080c) == 2);

    // Framed code:
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_str_arg_value_2;
        PyObject *tmp_iterable_value_2;
        tmp_str_arg_value_1 = mod_consts[19];
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[36]);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[37];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_str_arg_value_2 = mod_consts[19];
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(par_cls);
            tmp_expression_value_2 = par_cls;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[22]);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
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
                    exception_lineno = 111;
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
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_4;
                Py_INCREF(outline_0_var_c);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_add_expr_left_3;
            PyObject *tmp_add_expr_right_3;
            PyObject *tmp_call_result_1;
            int tmp_truth_name_1;
            tmp_add_expr_left_3 = mod_consts[34];
            CHECK_OBJECT(outline_0_var_c);
            tmp_add_expr_right_3 = outline_0_var_c;
            tmp_expression_value_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[31]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            frame_98f98467316ad56eb985bb6c6fe0080c->m_frame.f_lineno = 111;
            tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
            Py_DECREF(tmp_called_value_2);
            if (tmp_call_result_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
            if (tmp_truth_name_1 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_1);

                exception_lineno = 111;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_call_result_1);
            if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_c);
            tmp_append_value_1 = outline_0_var_c;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_iterable_value_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_iterable_value_2);
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
        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
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

        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
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
        exception_lineno = 111;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_add_expr_right_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_2, tmp_iterable_value_2);
        Py_DECREF(tmp_iterable_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 110;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_set_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_set_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_98f98467316ad56eb985bb6c6fe0080c->m_frame.f_lineno = 106;
        tmp_iterable_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iterable_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
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
        exception_tb = MAKE_TRACEBACK(frame_98f98467316ad56eb985bb6c6fe0080c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_98f98467316ad56eb985bb6c6fe0080c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_98f98467316ad56eb985bb6c6fe0080c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_98f98467316ad56eb985bb6c6fe0080c,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_98f98467316ad56eb985bb6c6fe0080c == cache_frame_98f98467316ad56eb985bb6c6fe0080c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_98f98467316ad56eb985bb6c6fe0080c);
        cache_frame_98f98467316ad56eb985bb6c6fe0080c = NULL;
    }

    assertFrameObject(frame_98f98467316ad56eb985bb6c6fe0080c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyparsing$unicode$$$function__10_identifier(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *var_Word = NULL;
    struct Nuitka_FrameObject *frame_d159eb89bad76cd9cf8216cf8b21c388;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d159eb89bad76cd9cf8216cf8b21c388 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d159eb89bad76cd9cf8216cf8b21c388)) {
        Py_XDECREF(cache_frame_d159eb89bad76cd9cf8216cf8b21c388);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d159eb89bad76cd9cf8216cf8b21c388 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d159eb89bad76cd9cf8216cf8b21c388 = MAKE_FUNCTION_FRAME(tstate, codeobj_d159eb89bad76cd9cf8216cf8b21c388, module_pyparsing$unicode, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d159eb89bad76cd9cf8216cf8b21c388->m_type_description == NULL);
    frame_d159eb89bad76cd9cf8216cf8b21c388 = cache_frame_d159eb89bad76cd9cf8216cf8b21c388;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d159eb89bad76cd9cf8216cf8b21c388);
    assert(Py_REFCNT(frame_d159eb89bad76cd9cf8216cf8b21c388) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[39];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyparsing$unicode;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[40];
        tmp_level_value_1 = mod_consts[15];
        frame_d159eb89bad76cd9cf8216cf8b21c388->m_frame.f_lineno = 123;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyparsing$unicode,
                mod_consts[41],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[41]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_Word == NULL);
        var_Word = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_Word);
        tmp_called_value_1 = var_Word;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[36]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[42]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 125;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d159eb89bad76cd9cf8216cf8b21c388->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d159eb89bad76cd9cf8216cf8b21c388, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d159eb89bad76cd9cf8216cf8b21c388->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d159eb89bad76cd9cf8216cf8b21c388, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d159eb89bad76cd9cf8216cf8b21c388,
        type_description_1,
        par_cls,
        var_Word
    );


    // Release cached frame if used for exception.
    if (frame_d159eb89bad76cd9cf8216cf8b21c388 == cache_frame_d159eb89bad76cd9cf8216cf8b21c388) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d159eb89bad76cd9cf8216cf8b21c388);
        cache_frame_d159eb89bad76cd9cf8216cf8b21c388 = NULL;
    }

    assertFrameObject(frame_d159eb89bad76cd9cf8216cf8b21c388);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_Word);
    Py_DECREF(var_Word);
    var_Word = NULL;
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

    Py_XDECREF(var_Word);
    var_Word = NULL;
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



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__10_identifier() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__10_identifier,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_d159eb89bad76cd9cf8216cf8b21c388,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        mod_consts[43],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__1___init__,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[60],
#endif
        codeobj_071bb3827f17785902482a4fe4038d25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__2___get__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__2___get__,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[62],
#endif
        codeobj_6df108e1719799f16009432e34fe3ff7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__3__chars_for_ranges() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__3__chars_for_ranges,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[67],
#endif
        codeobj_183ea42c7d92122305e3892fb630f3fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__4_printables() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__4_printables,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        mod_consts[69],
#endif
        codeobj_7d9d7fe4ea9aa20170daaca89f996d56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__5_alphas() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__5_alphas,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_4d74cec4b1cf4232b0f5e5eac6264651,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__6_nums() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__6_nums,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_ef3c259c39efdd6b2766738519c3a6b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__7_alphanums() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__7_alphanums,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_5c0aa30fb97933b5b127eaf26e294726,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__8_identchars() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__8_identchars,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_d6b619a2539ba6911c85872e1dc3b008,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__9_identbodychars() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__9_identbodychars,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[75],
#endif
        codeobj_98f98467316ad56eb985bb6c6fe0080c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        mod_consts[38],
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

function_impl_code functable_pyparsing$unicode[] = {
    impl_pyparsing$unicode$$$function__1___init__,
    impl_pyparsing$unicode$$$function__2___get__,
    impl_pyparsing$unicode$$$function__3__chars_for_ranges,
    impl_pyparsing$unicode$$$function__4_printables,
    impl_pyparsing$unicode$$$function__5_alphas,
    impl_pyparsing$unicode$$$function__6_nums,
    impl_pyparsing$unicode$$$function__7_alphanums,
    impl_pyparsing$unicode$$$function__8_identchars,
    impl_pyparsing$unicode$$$function__9_identbodychars,
    impl_pyparsing$unicode$$$function__10_identifier,
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

    function_impl_code *current = functable_pyparsing$unicode;
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

    if (offset > sizeof(functable_pyparsing$unicode) || offset < 0) {
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
        functable_pyparsing$unicode[offset],
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
        module_pyparsing$unicode,
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
PyObject *modulecode_pyparsing$unicode(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyparsing.unicode");

    // Store the module for future use.
    module_pyparsing$unicode = module;

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
        PRINT_STRING("pyparsing.unicode: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyparsing.unicode: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyparsing$unicode\n");

    moduledict_pyparsing$unicode = MODULE_DICT(module_pyparsing$unicode);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyparsing$unicode,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyparsing$unicode,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[19]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyparsing$unicode,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyparsing$unicode,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyparsing$unicode,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyparsing$unicode);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyparsing$unicode);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *outline_16_var___class__ = NULL;
    PyObject *outline_17_var___class__ = NULL;
    PyObject *outline_18_var___class__ = NULL;
    PyObject *outline_19_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_1__bases = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_1__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_2__bases = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_2__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_3__bases = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_3__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_10__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_10__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_10__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_10__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_11__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_11__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_11__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_11__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_12__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_12__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_12__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_12__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_13__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_13__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_13__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_13__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_14__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_14__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_14__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_14__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_1__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_1__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_1__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_1__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_2__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_2__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_2__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_2__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_3__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_3__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_3__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_3__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_4__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_4__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_4__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_4__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_5__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_5__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_5__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_5__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_6__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_6__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_6__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_6__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_7__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_7__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_7__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_7__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_8__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_8__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_8__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_8__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_9__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_9__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_9__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_9__prepared = NULL;
    struct Nuitka_FrameObject *frame_8b4a836a4632cc61b40b2b4efada07fc;
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
    PyObject *locals_pyparsing$unicode$$$class__1__lazyclassproperty_8 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
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
    PyObject *locals_pyparsing$unicode$$$class__2_unicode_set_31 = NULL;
    struct Nuitka_FrameObject *frame_6b2c45c508582da92af4336e6fdc0b3c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128 = NULL;
    struct Nuitka_FrameObject *frame_c9d44e5c25900a7baef1825b8905c5b0_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *locals_pyparsing$unicode$$$class__4_BasicMultilingualPlane_140 = NULL;
    struct Nuitka_FrameObject *frame_2aa27ee435d8f6a10c5a945ddb5c63d9_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_pyparsing$unicode$$$class__5_Latin1_146 = NULL;
    struct Nuitka_FrameObject *frame_0260cbd6b2c9265b44dbeabac3610874_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_pyparsing$unicode$$$class__6_LatinA_153 = NULL;
    struct Nuitka_FrameObject *frame_9974f2bb2cdb8191f39be121d2bce026_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_pyparsing$unicode$$$class__7_LatinB_159 = NULL;
    struct Nuitka_FrameObject *frame_5a5ecb27d2ad18decf4bafb38de34041_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_pyparsing$unicode$$$class__8_Greek_165 = NULL;
    struct Nuitka_FrameObject *frame_183998f295ba82ecd21ba051d5d7b9db_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *locals_pyparsing$unicode$$$class__9_Cyrillic_205 = NULL;
    struct Nuitka_FrameObject *frame_054ffbdb80b0e5407cfefd14e08435e0_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *locals_pyparsing$unicode$$$class__10_Chinese_218 = NULL;
    struct Nuitka_FrameObject *frame_18ce934730325064e33524b0b7f1a7e9_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *locals_pyparsing$unicode$$$class__11_Japanese_241 = NULL;
    struct Nuitka_FrameObject *frame_952180b9772e047c3f8efad60e9be5ef_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    PyObject *locals_pyparsing$unicode$$$class__12_Kanji_244 = NULL;
    struct Nuitka_FrameObject *frame_d6c3d19905fbc273ff3cbb9139bc7c81_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *locals_pyparsing$unicode$$$class__13_Hiragana_251 = NULL;
    struct Nuitka_FrameObject *frame_3e462fbef99409351edbc1c471764323_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *locals_pyparsing$unicode$$$class__14_Katakana_263 = NULL;
    struct Nuitka_FrameObject *frame_4b235e179950cb1ae83a97055f675300_14;
    NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *locals_pyparsing$unicode$$$class__15_Hangul_287 = NULL;
    struct Nuitka_FrameObject *frame_79982aa901d07e740c30126b3e86b4e2_15;
    NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *locals_pyparsing$unicode$$$class__16_CJK_309 = NULL;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *locals_pyparsing$unicode$$$class__17_Thai_312 = NULL;
    struct Nuitka_FrameObject *frame_2f15169a72b89f0d967fa408c20ae34f_16;
    NUITKA_MAY_BE_UNUSED char const *type_description_16 = NULL;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *locals_pyparsing$unicode$$$class__18_Arabic_319 = NULL;
    struct Nuitka_FrameObject *frame_0b07f377e4875d846ae08dd7738af6b0_17;
    NUITKA_MAY_BE_UNUSED char const *type_description_17 = NULL;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *locals_pyparsing$unicode$$$class__19_Hebrew_327 = NULL;
    struct Nuitka_FrameObject *frame_46c21372245fd31a7f1bcfe1ff9eb807_18;
    NUITKA_MAY_BE_UNUSED char const *type_description_18 = NULL;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *locals_pyparsing$unicode$$$class__20_Devanagari_341 = NULL;
    struct Nuitka_FrameObject *frame_38a41826a3fa86f354dd3cd1bfc542b6_19;
    NUITKA_MAY_BE_UNUSED char const *type_description_19 = NULL;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_2);
    }
    frame_8b4a836a4632cc61b40b2b4efada07fc = MAKE_MODULE_FRAME(codeobj_8b4a836a4632cc61b40b2b4efada07fc, module_pyparsing$unicode);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8b4a836a4632cc61b40b2b4efada07fc);
    assert(Py_REFCNT(frame_8b4a836a4632cc61b40b2b4efada07fc) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[46], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[47], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[50];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyparsing$unicode;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[51];
        tmp_level_value_1 = mod_consts[15];
        frame_8b4a836a4632cc61b40b2b4efada07fc->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyparsing$unicode,
                mod_consts[20],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[20]);
        }

        Py_DECREF(tmp_import_name_from_1);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_6);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyparsing$unicode,
                mod_consts[52],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[52]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyparsing$unicode,
                mod_consts[53],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[53]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pyparsing$unicode,
                mod_consts[54],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[54]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_9);
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
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyparsing$unicode$$$class__1__lazyclassproperty_8 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__1__lazyclassproperty_8, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[57];
        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__1__lazyclassproperty_8, mod_consts[58], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyparsing$unicode$$$function__1___init__();

        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__1__lazyclassproperty_8, mod_consts[59], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyparsing$unicode$$$function__2___get__();

        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__1__lazyclassproperty_8, mod_consts[61], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[57];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_pyparsing$unicode$$$class__1__lazyclassproperty_8;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_8b4a836a4632cc61b40b2b4efada07fc->m_frame.f_lineno = 8;
            tmp_assign_source_13 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_13;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_12 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_12);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_pyparsing$unicode$$$class__1__lazyclassproperty_8);
        locals_pyparsing$unicode$$$class__1__lazyclassproperty_8 = NULL;
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

        Py_DECREF(locals_pyparsing$unicode$$$class__1__lazyclassproperty_8);
        locals_pyparsing$unicode$$$class__1__lazyclassproperty_8 = NULL;
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
        exception_lineno = 8;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_12);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[63];
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_2);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_4 = (PyObject *)&PyLong_Type;
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_subscript_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyparsing$unicode$$$class__2_unicode_set_31 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[1], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[10];
        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[58], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_LIST_EMPTY(0);
        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_6b2c45c508582da92af4336e6fdc0b3c_2 = MAKE_CLASS_FRAME(tstate, codeobj_6b2c45c508582da92af4336e6fdc0b3c, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_6b2c45c508582da92af4336e6fdc0b3c_2);
        assert(Py_REFCNT(frame_6b2c45c508582da92af4336e6fdc0b3c_2) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_ass_subvalue_1 == NULL)) {
                tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
            }

            assert(!(tmp_ass_subvalue_1 == NULL));
            tmp_ass_subscribed_1 = DICT_GET_ITEM0(tstate, locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_1 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_pyparsing$unicode$$$function__3__chars_for_ranges();

            frame_6b2c45c508582da92af4336e6fdc0b3c_2->m_frame.f_lineno = 55;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_2 = MAKE_FUNCTION_pyparsing$unicode$$$function__4_printables();

            frame_6b2c45c508582da92af4336e6fdc0b3c_2->m_frame.f_lineno = 65;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_3;
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_pyparsing$unicode$$$function__5_alphas();

            frame_6b2c45c508582da92af4336e6fdc0b3c_2->m_frame.f_lineno = 70;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_4;
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_pyparsing$unicode$$$function__6_nums();

            frame_6b2c45c508582da92af4336e6fdc0b3c_2->m_frame.f_lineno = 75;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[29], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_5;
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_5 = MAKE_FUNCTION_pyparsing$unicode$$$function__7_alphanums();

            frame_6b2c45c508582da92af4336e6fdc0b3c_2->m_frame.f_lineno = 80;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_6;
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_pyparsing$unicode$$$function__8_identchars();

            frame_6b2c45c508582da92af4336e6fdc0b3c_2->m_frame.f_lineno = 85;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_7;
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_7 = MAKE_FUNCTION_pyparsing$unicode$$$function__9_identbodychars();

            frame_6b2c45c508582da92af4336e6fdc0b3c_2->m_frame.f_lineno = 99;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[42], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_8;
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_8 = MAKE_FUNCTION_pyparsing$unicode$$$function__10_identifier();

            frame_6b2c45c508582da92af4336e6fdc0b3c_2->m_frame.f_lineno = 117;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[76], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6b2c45c508582da92af4336e6fdc0b3c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6b2c45c508582da92af4336e6fdc0b3c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6b2c45c508582da92af4336e6fdc0b3c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6b2c45c508582da92af4336e6fdc0b3c_2,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_6b2c45c508582da92af4336e6fdc0b3c_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_7;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_10 = (PyObject *)&PyType_Type;
            tmp_tuple_element_3 = mod_consts[10];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_pyparsing$unicode$$$class__2_unicode_set_31;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_8b4a836a4632cc61b40b2b4efada07fc->m_frame.f_lineno = 31;
            tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_17 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_pyparsing$unicode$$$class__2_unicode_set_31);
        locals_pyparsing$unicode$$$class__2_unicode_set_31 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__2_unicode_set_31);
        locals_pyparsing$unicode$$$class__2_unicode_set_31 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 31;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_17);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        assert(!(tmp_tuple_element_4 == NULL));
        tmp_assign_source_19 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_19, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_20 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_8;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_5 = tmp_class_creation_3__bases;
        tmp_subscript_value_5 = mod_consts[15];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_5, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_8;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_1 = tmp_class_creation_3__bases;
        tmp_assign_source_22 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_22;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_6 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts[78]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_8;
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
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_7 = tmp_class_creation_3__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[78]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_8;
        }
        tmp_tuple_element_5 = mod_consts[79];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_5 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
        frame_8b4a836a4632cc61b40b2b4efada07fc->m_frame.f_lineno = 128;
        tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_23;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_8 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[80]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_8;
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
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[81];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_9 = tmp_class_creation_3__metaclass;
        tmp_name_value_2 = mod_consts[2];
        tmp_default_value_1 = mod_consts[82];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_9, tmp_name_value_2, tmp_default_value_1);
        if (tmp_tuple_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_2 = tmp_class_creation_3__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[2]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 128;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_24;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[83];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_10;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_10;
        }
        frame_c9d44e5c25900a7baef1825b8905c5b0_3 = MAKE_CLASS_FRAME(tstate, codeobj_c9d44e5c25900a7baef1825b8905c5b0, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_c9d44e5c25900a7baef1825b8905c5b0_3);
        assert(Py_REFCNT(frame_c9d44e5c25900a7baef1825b8905c5b0_3) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_7;
            tmp_tuple_element_7 = mod_consts[84];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_11;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
                tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[49]);

                if (unlikely(tmp_expression_value_11 == NULL)) {
                    tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                }

                assert(!(tmp_expression_value_11 == NULL));
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[85]);
                if (tmp_tuple_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 137;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dictset_value = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
            tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[64]);

            if (tmp_ass_subvalue_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_ass_subvalue_2 == NULL)) {
                        tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                    }

                    if (tmp_ass_subvalue_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 136;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_ass_subvalue_2);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subscribed_2 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_2);

                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_2 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            Py_DECREF(tmp_ass_subvalue_2);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_tuple_element_8;
            tmp_tuple_element_8 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[10]);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_8 == NULL)) {
                        tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                    }

                    if (tmp_tuple_element_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 140;
                        type_description_2 = "o";
                        goto try_except_handler_11;
                    }
                    Py_INCREF(tmp_tuple_element_8);
                } else {
                    goto try_except_handler_11;
                }
            }

            tmp_assign_source_26 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_26, 0, tmp_tuple_element_8);
            assert(tmp_pyparsing_unicode$class_creation_1__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_1__bases_orig = tmp_assign_source_26;
        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_dircall_arg1_2;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases_orig);
            tmp_dircall_arg1_2 = tmp_pyparsing_unicode$class_creation_1__bases_orig;
            Py_INCREF(tmp_dircall_arg1_2);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
                tmp_assign_source_27 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            assert(tmp_pyparsing_unicode$class_creation_1__bases == NULL);
            tmp_pyparsing_unicode$class_creation_1__bases = tmp_assign_source_27;
        }
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_1__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_1__class_decl_dict = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_metaclass_value_2;
            nuitka_bool tmp_condition_result_4;
            int tmp_truth_name_2;
            PyObject *tmp_type_arg_3;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_bases_value_2;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases);
            tmp_truth_name_2 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_1__bases);
            if (tmp_truth_name_2 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases);
            tmp_expression_value_12 = tmp_pyparsing_unicode$class_creation_1__bases;
            tmp_subscript_value_6 = mod_consts[15];
            tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_6, 0);
            if (tmp_type_arg_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
            Py_DECREF(tmp_type_arg_3);
            if (tmp_metaclass_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_2);
            condexpr_end_2:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases);
            tmp_bases_value_2 = tmp_pyparsing_unicode$class_creation_1__bases;
            tmp_assign_source_29 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
            Py_DECREF(tmp_metaclass_value_2);
            if (tmp_assign_source_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            assert(tmp_pyparsing_unicode$class_creation_1__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_1__metaclass = tmp_assign_source_29;
        }
        {
            bool tmp_condition_result_5;
            PyObject *tmp_expression_value_13;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__metaclass);
            tmp_expression_value_13 = tmp_pyparsing_unicode$class_creation_1__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts[78]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_condition_result_5 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_5 != false) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__metaclass);
            tmp_expression_value_14 = tmp_pyparsing_unicode$class_creation_1__metaclass;
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[78]);
            if (tmp_called_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_tuple_element_9 = mod_consts[86];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases);
            tmp_tuple_element_9 = tmp_pyparsing_unicode$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__class_decl_dict);
            tmp_kwargs_value_4 = tmp_pyparsing_unicode$class_creation_1__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 140;
            tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            assert(tmp_pyparsing_unicode$class_creation_1__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_1__prepared = tmp_assign_source_30;
        }
        {
            bool tmp_condition_result_6;
            PyObject *tmp_operand_value_2;
            PyObject *tmp_expression_value_15;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__prepared);
            tmp_expression_value_15 = tmp_pyparsing_unicode$class_creation_1__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts[80]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
            assert(!(tmp_res == -1));
            tmp_condition_result_6 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_6 != false) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_raise_value_2;
            PyObject *tmp_mod_expr_left_2;
            PyObject *tmp_mod_expr_right_2;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_name_value_3;
            PyObject *tmp_default_value_2;
            tmp_raise_type_2 = PyExc_TypeError;
            tmp_mod_expr_left_2 = mod_consts[81];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__metaclass);
            tmp_expression_value_16 = tmp_pyparsing_unicode$class_creation_1__metaclass;
            tmp_name_value_3 = mod_consts[2];
            tmp_default_value_2 = mod_consts[82];
            tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_16, tmp_name_value_3, tmp_default_value_2);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_17;
                PyObject *tmp_type_arg_4;
                PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_10);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__prepared);
                tmp_type_arg_4 = tmp_pyparsing_unicode$class_creation_1__prepared;
                tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_4);
                assert(!(tmp_expression_value_17 == NULL));
                tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[2]);
                Py_DECREF(tmp_expression_value_17);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 140;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_mod_expr_right_2);
            goto try_except_handler_11;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
            Py_DECREF(tmp_mod_expr_right_2);
            if (tmp_raise_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            exception_type = tmp_raise_type_2;
            Py_INCREF(tmp_raise_type_2);
            exception_value = tmp_raise_value_2;
            exception_lineno = 140;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_11;
        }
        branch_no_4:;
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_31;
            tmp_assign_source_31 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_1__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_1__prepared = tmp_assign_source_31;
        }
        branch_end_3:;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__prepared);
            tmp_set_locals_4 = tmp_pyparsing_unicode$class_creation_1__prepared;
            locals_pyparsing$unicode$$$class__4_BasicMultilingualPlane_140 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__4_BasicMultilingualPlane_140, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__4_BasicMultilingualPlane_140, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[88];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__4_BasicMultilingualPlane_140, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__4_BasicMultilingualPlane_140, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        frame_2aa27ee435d8f6a10c5a945ddb5c63d9_4 = MAKE_CLASS_FRAME(tstate, codeobj_2aa27ee435d8f6a10c5a945ddb5c63d9, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_2aa27ee435d8f6a10c5a945ddb5c63d9_4);
        assert(Py_REFCNT(frame_2aa27ee435d8f6a10c5a945ddb5c63d9_4) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST1(mod_consts[89]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__4_BasicMultilingualPlane_140, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_3 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_ass_subvalue_3 = PyObject_GetItem(locals_pyparsing$unicode$$$class__4_BasicMultilingualPlane_140, mod_consts[64]);

            if (tmp_ass_subvalue_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_3 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_ass_subvalue_3 == NULL)) {
                        tmp_ass_subvalue_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                    }

                    if (tmp_ass_subvalue_3 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 142;
                        type_description_3 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_ass_subvalue_3);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_ass_subscribed_3 = PyObject_GetItem(locals_pyparsing$unicode$$$class__4_BasicMultilingualPlane_140, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_3);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 142;
                type_description_3 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_3);

                exception_lineno = 142;
                type_description_3 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_3 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subscribed_3);
            Py_DECREF(tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_3 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2aa27ee435d8f6a10c5a945ddb5c63d9_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2aa27ee435d8f6a10c5a945ddb5c63d9_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2aa27ee435d8f6a10c5a945ddb5c63d9_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2aa27ee435d8f6a10c5a945ddb5c63d9_4,
            type_description_3,
            outline_3_var___class__
        );



        assertFrameObject(frame_2aa27ee435d8f6a10c5a945ddb5c63d9_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_3:;
        type_description_2 = "o";
        goto try_except_handler_13;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_pyparsing_unicode$class_creation_1__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_pyparsing_unicode$class_creation_1__bases_orig;
            tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
        }
        branch_yes_5:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__4_BasicMultilingualPlane_140, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        branch_no_5:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_5;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__metaclass);
            tmp_called_value_13 = tmp_pyparsing_unicode$class_creation_1__metaclass;
            tmp_tuple_element_11 = mod_consts[86];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases);
            tmp_tuple_element_11 = tmp_pyparsing_unicode$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_pyparsing$unicode$$$class__4_BasicMultilingualPlane_140;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__class_decl_dict);
            tmp_kwargs_value_5 = tmp_pyparsing_unicode$class_creation_1__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 140;
            tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_dictset_value = outline_3_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_pyparsing$unicode$$$class__4_BasicMultilingualPlane_140);
        locals_pyparsing$unicode$$$class__4_BasicMultilingualPlane_140 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__4_BasicMultilingualPlane_140);
        locals_pyparsing$unicode$$$class__4_BasicMultilingualPlane_140 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 140;
        goto try_except_handler_11;
        outline_result_4:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[86], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_2 = "o";
            goto try_except_handler_11;
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_1__bases_orig);
        tmp_pyparsing_unicode$class_creation_1__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_1__bases);
        tmp_pyparsing_unicode$class_creation_1__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_1__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_1__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_1__metaclass);
        tmp_pyparsing_unicode$class_creation_1__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_1__prepared);
        tmp_pyparsing_unicode$class_creation_1__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_3;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_1__bases_orig);
        tmp_pyparsing_unicode$class_creation_1__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_1__bases);
        tmp_pyparsing_unicode$class_creation_1__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_1__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_1__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_1__metaclass);
        tmp_pyparsing_unicode$class_creation_1__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_1__prepared);
        tmp_pyparsing_unicode$class_creation_1__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_tuple_element_12;
            tmp_tuple_element_12 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[10]);

            if (tmp_tuple_element_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_12 == NULL)) {
                        tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                    }

                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 146;
                        type_description_2 = "o";
                        goto try_except_handler_14;
                    }
                    Py_INCREF(tmp_tuple_element_12);
                } else {
                    goto try_except_handler_14;
                }
            }

            tmp_assign_source_33 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_33, 0, tmp_tuple_element_12);
            assert(tmp_pyparsing_unicode$class_creation_2__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_2__bases_orig = tmp_assign_source_33;
        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_dircall_arg1_3;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases_orig);
            tmp_dircall_arg1_3 = tmp_pyparsing_unicode$class_creation_2__bases_orig;
            Py_INCREF(tmp_dircall_arg1_3);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
                tmp_assign_source_34 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            assert(tmp_pyparsing_unicode$class_creation_2__bases == NULL);
            tmp_pyparsing_unicode$class_creation_2__bases = tmp_assign_source_34;
        }
        {
            PyObject *tmp_assign_source_35;
            tmp_assign_source_35 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_2__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_2__class_decl_dict = tmp_assign_source_35;
        }
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_metaclass_value_3;
            nuitka_bool tmp_condition_result_8;
            int tmp_truth_name_3;
            PyObject *tmp_type_arg_5;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_bases_value_3;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases);
            tmp_truth_name_3 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_2__bases);
            if (tmp_truth_name_3 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases);
            tmp_expression_value_18 = tmp_pyparsing_unicode$class_creation_2__bases;
            tmp_subscript_value_7 = mod_consts[15];
            tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_7, 0);
            if (tmp_type_arg_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
            Py_DECREF(tmp_type_arg_5);
            if (tmp_metaclass_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_3);
            condexpr_end_3:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases);
            tmp_bases_value_3 = tmp_pyparsing_unicode$class_creation_2__bases;
            tmp_assign_source_36 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
            Py_DECREF(tmp_metaclass_value_3);
            if (tmp_assign_source_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            assert(tmp_pyparsing_unicode$class_creation_2__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_2__metaclass = tmp_assign_source_36;
        }
        {
            bool tmp_condition_result_9;
            PyObject *tmp_expression_value_19;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__metaclass);
            tmp_expression_value_19 = tmp_pyparsing_unicode$class_creation_2__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_19, mod_consts[78]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_condition_result_9 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_9 != false) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_value_14;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__metaclass);
            tmp_expression_value_20 = tmp_pyparsing_unicode$class_creation_2__metaclass;
            tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[78]);
            if (tmp_called_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_tuple_element_13 = mod_consts[91];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases);
            tmp_tuple_element_13 = tmp_pyparsing_unicode$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__class_decl_dict);
            tmp_kwargs_value_6 = tmp_pyparsing_unicode$class_creation_2__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 146;
            tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            assert(tmp_pyparsing_unicode$class_creation_2__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_2__prepared = tmp_assign_source_37;
        }
        {
            bool tmp_condition_result_10;
            PyObject *tmp_operand_value_3;
            PyObject *tmp_expression_value_21;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__prepared);
            tmp_expression_value_21 = tmp_pyparsing_unicode$class_creation_2__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts[80]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
            assert(!(tmp_res == -1));
            tmp_condition_result_10 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_10 != false) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_raise_value_3;
            PyObject *tmp_mod_expr_left_3;
            PyObject *tmp_mod_expr_right_3;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_name_value_4;
            PyObject *tmp_default_value_3;
            tmp_raise_type_3 = PyExc_TypeError;
            tmp_mod_expr_left_3 = mod_consts[81];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__metaclass);
            tmp_expression_value_22 = tmp_pyparsing_unicode$class_creation_2__metaclass;
            tmp_name_value_4 = mod_consts[2];
            tmp_default_value_3 = mod_consts[82];
            tmp_tuple_element_14 = BUILTIN_GETATTR(tstate, tmp_expression_value_22, tmp_name_value_4, tmp_default_value_3);
            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_23;
                PyObject *tmp_type_arg_6;
                PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_14);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__prepared);
                tmp_type_arg_6 = tmp_pyparsing_unicode$class_creation_2__prepared;
                tmp_expression_value_23 = BUILTIN_TYPE1(tmp_type_arg_6);
                assert(!(tmp_expression_value_23 == NULL));
                tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[2]);
                Py_DECREF(tmp_expression_value_23);
                if (tmp_tuple_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 146;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_mod_expr_right_3);
            goto try_except_handler_14;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
            Py_DECREF(tmp_mod_expr_right_3);
            if (tmp_raise_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            exception_type = tmp_raise_type_3;
            Py_INCREF(tmp_raise_type_3);
            exception_value = tmp_raise_value_3;
            exception_lineno = 146;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_14;
        }
        branch_no_7:;
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_38;
            tmp_assign_source_38 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_2__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_2__prepared = tmp_assign_source_38;
        }
        branch_end_6:;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__prepared);
            tmp_set_locals_5 = tmp_pyparsing_unicode$class_creation_2__prepared;
            locals_pyparsing$unicode$$$class__5_Latin1_146 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__5_Latin1_146, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__5_Latin1_146, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__5_Latin1_146, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__5_Latin1_146, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        frame_0260cbd6b2c9265b44dbeabac3610874_5 = MAKE_CLASS_FRAME(tstate, codeobj_0260cbd6b2c9265b44dbeabac3610874, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_0260cbd6b2c9265b44dbeabac3610874_5);
        assert(Py_REFCNT(frame_0260cbd6b2c9265b44dbeabac3610874_5) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST2(mod_consts[94],mod_consts[95]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__5_Latin1_146, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_3 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_ass_subvalue_4 = PyObject_GetItem(locals_pyparsing$unicode$$$class__5_Latin1_146, mod_consts[64]);

            if (tmp_ass_subvalue_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_4 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_ass_subvalue_4 == NULL)) {
                        tmp_ass_subvalue_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                    }

                    if (tmp_ass_subvalue_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 148;
                        type_description_3 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_ass_subvalue_4);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_ass_subscribed_4 = PyObject_GetItem(locals_pyparsing$unicode$$$class__5_Latin1_146, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_4);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 148;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_4);

                exception_lineno = 148;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_4 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            Py_DECREF(tmp_ass_subscribed_4);
            Py_DECREF(tmp_ass_subvalue_4);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0260cbd6b2c9265b44dbeabac3610874_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0260cbd6b2c9265b44dbeabac3610874_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0260cbd6b2c9265b44dbeabac3610874_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0260cbd6b2c9265b44dbeabac3610874_5,
            type_description_3,
            outline_4_var___class__
        );



        assertFrameObject(frame_0260cbd6b2c9265b44dbeabac3610874_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_4:;
        type_description_2 = "o";
        goto try_except_handler_16;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_pyparsing_unicode$class_creation_2__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_pyparsing_unicode$class_creation_2__bases_orig;
            tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__5_Latin1_146, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_7;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__metaclass);
            tmp_called_value_15 = tmp_pyparsing_unicode$class_creation_2__metaclass;
            tmp_tuple_element_15 = mod_consts[91];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases);
            tmp_tuple_element_15 = tmp_pyparsing_unicode$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_pyparsing$unicode$$$class__5_Latin1_146;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__class_decl_dict);
            tmp_kwargs_value_7 = tmp_pyparsing_unicode$class_creation_2__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 146;
            tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_39;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_dictset_value = outline_4_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_pyparsing$unicode$$$class__5_Latin1_146);
        locals_pyparsing$unicode$$$class__5_Latin1_146 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__5_Latin1_146);
        locals_pyparsing$unicode$$$class__5_Latin1_146 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 146;
        goto try_except_handler_14;
        outline_result_5:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[91], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_2 = "o";
            goto try_except_handler_14;
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_2__bases_orig);
        tmp_pyparsing_unicode$class_creation_2__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_2__bases);
        tmp_pyparsing_unicode$class_creation_2__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_2__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_2__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_2__metaclass);
        tmp_pyparsing_unicode$class_creation_2__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_2__prepared);
        tmp_pyparsing_unicode$class_creation_2__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto frame_exception_exit_3;
        // End of try:
        try_end_5:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_2__bases_orig);
        tmp_pyparsing_unicode$class_creation_2__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_2__bases);
        tmp_pyparsing_unicode$class_creation_2__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_2__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_2__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_2__metaclass);
        tmp_pyparsing_unicode$class_creation_2__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_2__prepared);
        tmp_pyparsing_unicode$class_creation_2__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_tuple_element_16;
            tmp_tuple_element_16 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[10]);

            if (tmp_tuple_element_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_16 == NULL)) {
                        tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                    }

                    if (tmp_tuple_element_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 153;
                        type_description_2 = "o";
                        goto try_except_handler_17;
                    }
                    Py_INCREF(tmp_tuple_element_16);
                } else {
                    goto try_except_handler_17;
                }
            }

            tmp_assign_source_40 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_40, 0, tmp_tuple_element_16);
            assert(tmp_pyparsing_unicode$class_creation_3__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_3__bases_orig = tmp_assign_source_40;
        }
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_dircall_arg1_4;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases_orig);
            tmp_dircall_arg1_4 = tmp_pyparsing_unicode$class_creation_3__bases_orig;
            Py_INCREF(tmp_dircall_arg1_4);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
                tmp_assign_source_41 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            assert(tmp_pyparsing_unicode$class_creation_3__bases == NULL);
            tmp_pyparsing_unicode$class_creation_3__bases = tmp_assign_source_41;
        }
        {
            PyObject *tmp_assign_source_42;
            tmp_assign_source_42 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_3__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_3__class_decl_dict = tmp_assign_source_42;
        }
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_metaclass_value_4;
            nuitka_bool tmp_condition_result_12;
            int tmp_truth_name_4;
            PyObject *tmp_type_arg_7;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_bases_value_4;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases);
            tmp_truth_name_4 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_3__bases);
            if (tmp_truth_name_4 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_condition_result_12 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases);
            tmp_expression_value_24 = tmp_pyparsing_unicode$class_creation_3__bases;
            tmp_subscript_value_8 = mod_consts[15];
            tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_24, tmp_subscript_value_8, 0);
            if (tmp_type_arg_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
            Py_DECREF(tmp_type_arg_7);
            if (tmp_metaclass_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_4);
            condexpr_end_4:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases);
            tmp_bases_value_4 = tmp_pyparsing_unicode$class_creation_3__bases;
            tmp_assign_source_43 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
            Py_DECREF(tmp_metaclass_value_4);
            if (tmp_assign_source_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            assert(tmp_pyparsing_unicode$class_creation_3__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_3__metaclass = tmp_assign_source_43;
        }
        {
            bool tmp_condition_result_13;
            PyObject *tmp_expression_value_25;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__metaclass);
            tmp_expression_value_25 = tmp_pyparsing_unicode$class_creation_3__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_25, mod_consts[78]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_condition_result_13 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_13 != false) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__metaclass);
            tmp_expression_value_26 = tmp_pyparsing_unicode$class_creation_3__metaclass;
            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[78]);
            if (tmp_called_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_tuple_element_17 = mod_consts[96];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases);
            tmp_tuple_element_17 = tmp_pyparsing_unicode$class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__class_decl_dict);
            tmp_kwargs_value_8 = tmp_pyparsing_unicode$class_creation_3__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 153;
            tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            assert(tmp_pyparsing_unicode$class_creation_3__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_3__prepared = tmp_assign_source_44;
        }
        {
            bool tmp_condition_result_14;
            PyObject *tmp_operand_value_4;
            PyObject *tmp_expression_value_27;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__prepared);
            tmp_expression_value_27 = tmp_pyparsing_unicode$class_creation_3__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_27, mod_consts[80]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
            assert(!(tmp_res == -1));
            tmp_condition_result_14 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_14 != false) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        {
            PyObject *tmp_raise_type_4;
            PyObject *tmp_raise_value_4;
            PyObject *tmp_mod_expr_left_4;
            PyObject *tmp_mod_expr_right_4;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_name_value_5;
            PyObject *tmp_default_value_4;
            tmp_raise_type_4 = PyExc_TypeError;
            tmp_mod_expr_left_4 = mod_consts[81];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__metaclass);
            tmp_expression_value_28 = tmp_pyparsing_unicode$class_creation_3__metaclass;
            tmp_name_value_5 = mod_consts[2];
            tmp_default_value_4 = mod_consts[82];
            tmp_tuple_element_18 = BUILTIN_GETATTR(tstate, tmp_expression_value_28, tmp_name_value_5, tmp_default_value_4);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_29;
                PyObject *tmp_type_arg_8;
                PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_18);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__prepared);
                tmp_type_arg_8 = tmp_pyparsing_unicode$class_creation_3__prepared;
                tmp_expression_value_29 = BUILTIN_TYPE1(tmp_type_arg_8);
                assert(!(tmp_expression_value_29 == NULL));
                tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[2]);
                Py_DECREF(tmp_expression_value_29);
                if (tmp_tuple_element_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 153;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_18);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_mod_expr_right_4);
            goto try_except_handler_17;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
            Py_DECREF(tmp_mod_expr_right_4);
            if (tmp_raise_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            exception_type = tmp_raise_type_4;
            Py_INCREF(tmp_raise_type_4);
            exception_value = tmp_raise_value_4;
            exception_lineno = 153;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_17;
        }
        branch_no_10:;
        goto branch_end_9;
        branch_no_9:;
        {
            PyObject *tmp_assign_source_45;
            tmp_assign_source_45 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_3__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_3__prepared = tmp_assign_source_45;
        }
        branch_end_9:;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__prepared);
            tmp_set_locals_6 = tmp_pyparsing_unicode$class_creation_3__prepared;
            locals_pyparsing$unicode$$$class__6_LatinA_153 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__6_LatinA_153, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_2 = "o";
            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__6_LatinA_153, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_2 = "o";
            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__6_LatinA_153, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_2 = "o";
            goto try_except_handler_19;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__6_LatinA_153, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_2 = "o";
            goto try_except_handler_19;
        }
        frame_9974f2bb2cdb8191f39be121d2bce026_6 = MAKE_CLASS_FRAME(tstate, codeobj_9974f2bb2cdb8191f39be121d2bce026, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_9974f2bb2cdb8191f39be121d2bce026_6);
        assert(Py_REFCNT(frame_9974f2bb2cdb8191f39be121d2bce026_6) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST1(mod_consts[99]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__6_LatinA_153, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_3 = "o";
            goto frame_exception_exit_6;
        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            tmp_ass_subvalue_5 = PyObject_GetItem(locals_pyparsing$unicode$$$class__6_LatinA_153, mod_consts[64]);

            if (tmp_ass_subvalue_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_5 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_ass_subvalue_5 == NULL)) {
                        tmp_ass_subvalue_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                    }

                    if (tmp_ass_subvalue_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 155;
                        type_description_3 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_ass_subvalue_5);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_ass_subscribed_5 = PyObject_GetItem(locals_pyparsing$unicode$$$class__6_LatinA_153, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_5);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 155;
                type_description_3 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_5);

                exception_lineno = 155;
                type_description_3 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_5 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
            Py_DECREF(tmp_ass_subscribed_5);
            Py_DECREF(tmp_ass_subvalue_5);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_3 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9974f2bb2cdb8191f39be121d2bce026_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9974f2bb2cdb8191f39be121d2bce026_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9974f2bb2cdb8191f39be121d2bce026_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9974f2bb2cdb8191f39be121d2bce026_6,
            type_description_3,
            outline_5_var___class__
        );



        assertFrameObject(frame_9974f2bb2cdb8191f39be121d2bce026_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_5:;
        type_description_2 = "o";
        goto try_except_handler_19;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_pyparsing_unicode$class_creation_3__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_pyparsing_unicode$class_creation_3__bases_orig;
            tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
        }
        branch_yes_11:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__6_LatinA_153, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_2 = "o";
            goto try_except_handler_19;
        }
        branch_no_11:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kwargs_value_9;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__metaclass);
            tmp_called_value_17 = tmp_pyparsing_unicode$class_creation_3__metaclass;
            tmp_tuple_element_19 = mod_consts[96];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases);
            tmp_tuple_element_19 = tmp_pyparsing_unicode$class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = locals_pyparsing$unicode$$$class__6_LatinA_153;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__class_decl_dict);
            tmp_kwargs_value_9 = tmp_pyparsing_unicode$class_creation_3__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 153;
            tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_46;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_dictset_value = outline_5_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_pyparsing$unicode$$$class__6_LatinA_153);
        locals_pyparsing$unicode$$$class__6_LatinA_153 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__6_LatinA_153);
        locals_pyparsing$unicode$$$class__6_LatinA_153 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 153;
        goto try_except_handler_17;
        outline_result_6:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[96], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_2 = "o";
            goto try_except_handler_17;
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_3__bases_orig);
        tmp_pyparsing_unicode$class_creation_3__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_3__bases);
        tmp_pyparsing_unicode$class_creation_3__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_3__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_3__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_3__metaclass);
        tmp_pyparsing_unicode$class_creation_3__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_3__prepared);
        tmp_pyparsing_unicode$class_creation_3__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto frame_exception_exit_3;
        // End of try:
        try_end_6:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_3__bases_orig);
        tmp_pyparsing_unicode$class_creation_3__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_3__bases);
        tmp_pyparsing_unicode$class_creation_3__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_3__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_3__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_3__metaclass);
        tmp_pyparsing_unicode$class_creation_3__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_3__prepared);
        tmp_pyparsing_unicode$class_creation_3__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_tuple_element_20;
            tmp_tuple_element_20 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[10]);

            if (tmp_tuple_element_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_20 == NULL)) {
                        tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                    }

                    if (tmp_tuple_element_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 159;
                        type_description_2 = "o";
                        goto try_except_handler_20;
                    }
                    Py_INCREF(tmp_tuple_element_20);
                } else {
                    goto try_except_handler_20;
                }
            }

            tmp_assign_source_47 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_47, 0, tmp_tuple_element_20);
            assert(tmp_pyparsing_unicode$class_creation_4__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_4__bases_orig = tmp_assign_source_47;
        }
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_dircall_arg1_5;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases_orig);
            tmp_dircall_arg1_5 = tmp_pyparsing_unicode$class_creation_4__bases_orig;
            Py_INCREF(tmp_dircall_arg1_5);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
                tmp_assign_source_48 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            assert(tmp_pyparsing_unicode$class_creation_4__bases == NULL);
            tmp_pyparsing_unicode$class_creation_4__bases = tmp_assign_source_48;
        }
        {
            PyObject *tmp_assign_source_49;
            tmp_assign_source_49 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_4__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_4__class_decl_dict = tmp_assign_source_49;
        }
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_metaclass_value_5;
            nuitka_bool tmp_condition_result_16;
            int tmp_truth_name_5;
            PyObject *tmp_type_arg_9;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_bases_value_5;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases);
            tmp_truth_name_5 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_4__bases);
            if (tmp_truth_name_5 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_condition_result_16 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases);
            tmp_expression_value_30 = tmp_pyparsing_unicode$class_creation_4__bases;
            tmp_subscript_value_9 = mod_consts[15];
            tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_30, tmp_subscript_value_9, 0);
            if (tmp_type_arg_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
            Py_DECREF(tmp_type_arg_9);
            if (tmp_metaclass_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_5);
            condexpr_end_5:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases);
            tmp_bases_value_5 = tmp_pyparsing_unicode$class_creation_4__bases;
            tmp_assign_source_50 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
            Py_DECREF(tmp_metaclass_value_5);
            if (tmp_assign_source_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            assert(tmp_pyparsing_unicode$class_creation_4__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_4__metaclass = tmp_assign_source_50;
        }
        {
            bool tmp_condition_result_17;
            PyObject *tmp_expression_value_31;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__metaclass);
            tmp_expression_value_31 = tmp_pyparsing_unicode$class_creation_4__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_31, mod_consts[78]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_condition_result_17 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_17 != false) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_value_18;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__metaclass);
            tmp_expression_value_32 = tmp_pyparsing_unicode$class_creation_4__metaclass;
            tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[78]);
            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_tuple_element_21 = mod_consts[100];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases);
            tmp_tuple_element_21 = tmp_pyparsing_unicode$class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__class_decl_dict);
            tmp_kwargs_value_10 = tmp_pyparsing_unicode$class_creation_4__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 159;
            tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            assert(tmp_pyparsing_unicode$class_creation_4__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_4__prepared = tmp_assign_source_51;
        }
        {
            bool tmp_condition_result_18;
            PyObject *tmp_operand_value_5;
            PyObject *tmp_expression_value_33;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__prepared);
            tmp_expression_value_33 = tmp_pyparsing_unicode$class_creation_4__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_33, mod_consts[80]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
            assert(!(tmp_res == -1));
            tmp_condition_result_18 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_18 != false) {
                goto branch_yes_13;
            } else {
                goto branch_no_13;
            }
        }
        branch_yes_13:;
        {
            PyObject *tmp_raise_type_5;
            PyObject *tmp_raise_value_5;
            PyObject *tmp_mod_expr_left_5;
            PyObject *tmp_mod_expr_right_5;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_name_value_6;
            PyObject *tmp_default_value_5;
            tmp_raise_type_5 = PyExc_TypeError;
            tmp_mod_expr_left_5 = mod_consts[81];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__metaclass);
            tmp_expression_value_34 = tmp_pyparsing_unicode$class_creation_4__metaclass;
            tmp_name_value_6 = mod_consts[2];
            tmp_default_value_5 = mod_consts[82];
            tmp_tuple_element_22 = BUILTIN_GETATTR(tstate, tmp_expression_value_34, tmp_name_value_6, tmp_default_value_5);
            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_35;
                PyObject *tmp_type_arg_10;
                PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_22);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__prepared);
                tmp_type_arg_10 = tmp_pyparsing_unicode$class_creation_4__prepared;
                tmp_expression_value_35 = BUILTIN_TYPE1(tmp_type_arg_10);
                assert(!(tmp_expression_value_35 == NULL));
                tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[2]);
                Py_DECREF(tmp_expression_value_35);
                if (tmp_tuple_element_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 159;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_22);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_mod_expr_right_5);
            goto try_except_handler_20;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
            Py_DECREF(tmp_mod_expr_right_5);
            if (tmp_raise_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            exception_type = tmp_raise_type_5;
            Py_INCREF(tmp_raise_type_5);
            exception_value = tmp_raise_value_5;
            exception_lineno = 159;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_20;
        }
        branch_no_13:;
        goto branch_end_12;
        branch_no_12:;
        {
            PyObject *tmp_assign_source_52;
            tmp_assign_source_52 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_4__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_4__prepared = tmp_assign_source_52;
        }
        branch_end_12:;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__prepared);
            tmp_set_locals_7 = tmp_pyparsing_unicode$class_creation_4__prepared;
            locals_pyparsing$unicode$$$class__7_LatinB_159 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__7_LatinB_159, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[101];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__7_LatinB_159, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[102];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__7_LatinB_159, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__7_LatinB_159, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        frame_5a5ecb27d2ad18decf4bafb38de34041_7 = MAKE_CLASS_FRAME(tstate, codeobj_5a5ecb27d2ad18decf4bafb38de34041, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_5a5ecb27d2ad18decf4bafb38de34041_7);
        assert(Py_REFCNT(frame_5a5ecb27d2ad18decf4bafb38de34041_7) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST1(mod_consts[103]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__7_LatinB_159, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_3 = "o";
            goto frame_exception_exit_7;
        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            tmp_ass_subvalue_6 = PyObject_GetItem(locals_pyparsing$unicode$$$class__7_LatinB_159, mod_consts[64]);

            if (tmp_ass_subvalue_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_6 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_ass_subvalue_6 == NULL)) {
                        tmp_ass_subvalue_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                    }

                    if (tmp_ass_subvalue_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 161;
                        type_description_3 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_ass_subvalue_6);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_ass_subscribed_6 = PyObject_GetItem(locals_pyparsing$unicode$$$class__7_LatinB_159, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_6);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 161;
                type_description_3 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_6);

                exception_lineno = 161;
                type_description_3 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_6 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
            Py_DECREF(tmp_ass_subscribed_6);
            Py_DECREF(tmp_ass_subvalue_6);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_3 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5a5ecb27d2ad18decf4bafb38de34041_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5a5ecb27d2ad18decf4bafb38de34041_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5a5ecb27d2ad18decf4bafb38de34041_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5a5ecb27d2ad18decf4bafb38de34041_7,
            type_description_3,
            outline_6_var___class__
        );



        assertFrameObject(frame_5a5ecb27d2ad18decf4bafb38de34041_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_6:;
        type_description_2 = "o";
        goto try_except_handler_22;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_pyparsing_unicode$class_creation_4__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_pyparsing_unicode$class_creation_4__bases_orig;
            tmp_condition_result_19 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_22;
            }
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto branch_yes_14;
            } else {
                goto branch_no_14;
            }
        }
        branch_yes_14:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__7_LatinB_159, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        branch_no_14:;
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kwargs_value_11;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__metaclass);
            tmp_called_value_19 = tmp_pyparsing_unicode$class_creation_4__metaclass;
            tmp_tuple_element_23 = mod_consts[100];
            tmp_args_value_11 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases);
            tmp_tuple_element_23 = tmp_pyparsing_unicode$class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = locals_pyparsing$unicode$$$class__7_LatinB_159;
            PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__class_decl_dict);
            tmp_kwargs_value_11 = tmp_pyparsing_unicode$class_creation_4__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 159;
            tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_11);
            if (tmp_assign_source_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_22;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_53;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_dictset_value = outline_6_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_pyparsing$unicode$$$class__7_LatinB_159);
        locals_pyparsing$unicode$$$class__7_LatinB_159 = NULL;
        goto try_return_handler_21;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__7_LatinB_159);
        locals_pyparsing$unicode$$$class__7_LatinB_159 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 159;
        goto try_except_handler_20;
        outline_result_7:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[100], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_2 = "o";
            goto try_except_handler_20;
        }
        goto try_end_7;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_4__bases_orig);
        tmp_pyparsing_unicode$class_creation_4__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_4__bases);
        tmp_pyparsing_unicode$class_creation_4__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_4__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_4__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_4__metaclass);
        tmp_pyparsing_unicode$class_creation_4__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_4__prepared);
        tmp_pyparsing_unicode$class_creation_4__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto frame_exception_exit_3;
        // End of try:
        try_end_7:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_4__bases_orig);
        tmp_pyparsing_unicode$class_creation_4__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_4__bases);
        tmp_pyparsing_unicode$class_creation_4__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_4__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_4__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_4__metaclass);
        tmp_pyparsing_unicode$class_creation_4__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_4__prepared);
        tmp_pyparsing_unicode$class_creation_4__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_tuple_element_24;
            tmp_tuple_element_24 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[10]);

            if (tmp_tuple_element_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_24 == NULL)) {
                        tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                    }

                    if (tmp_tuple_element_24 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 165;
                        type_description_2 = "o";
                        goto try_except_handler_23;
                    }
                    Py_INCREF(tmp_tuple_element_24);
                } else {
                    goto try_except_handler_23;
                }
            }

            tmp_assign_source_54 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_54, 0, tmp_tuple_element_24);
            assert(tmp_pyparsing_unicode$class_creation_5__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_5__bases_orig = tmp_assign_source_54;
        }
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_dircall_arg1_6;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases_orig);
            tmp_dircall_arg1_6 = tmp_pyparsing_unicode$class_creation_5__bases_orig;
            Py_INCREF(tmp_dircall_arg1_6);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
                tmp_assign_source_55 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            assert(tmp_pyparsing_unicode$class_creation_5__bases == NULL);
            tmp_pyparsing_unicode$class_creation_5__bases = tmp_assign_source_55;
        }
        {
            PyObject *tmp_assign_source_56;
            tmp_assign_source_56 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_5__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_5__class_decl_dict = tmp_assign_source_56;
        }
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_metaclass_value_6;
            nuitka_bool tmp_condition_result_20;
            int tmp_truth_name_6;
            PyObject *tmp_type_arg_11;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_bases_value_6;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases);
            tmp_truth_name_6 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_5__bases);
            if (tmp_truth_name_6 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            tmp_condition_result_20 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases);
            tmp_expression_value_36 = tmp_pyparsing_unicode$class_creation_5__bases;
            tmp_subscript_value_10 = mod_consts[15];
            tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_36, tmp_subscript_value_10, 0);
            if (tmp_type_arg_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
            Py_DECREF(tmp_type_arg_11);
            if (tmp_metaclass_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_6);
            condexpr_end_6:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases);
            tmp_bases_value_6 = tmp_pyparsing_unicode$class_creation_5__bases;
            tmp_assign_source_57 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
            Py_DECREF(tmp_metaclass_value_6);
            if (tmp_assign_source_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            assert(tmp_pyparsing_unicode$class_creation_5__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_5__metaclass = tmp_assign_source_57;
        }
        {
            bool tmp_condition_result_21;
            PyObject *tmp_expression_value_37;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__metaclass);
            tmp_expression_value_37 = tmp_pyparsing_unicode$class_creation_5__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_37, mod_consts[78]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            tmp_condition_result_21 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_21 != false) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_value_20;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__metaclass);
            tmp_expression_value_38 = tmp_pyparsing_unicode$class_creation_5__metaclass;
            tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[78]);
            if (tmp_called_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            tmp_tuple_element_25 = mod_consts[104];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases);
            tmp_tuple_element_25 = tmp_pyparsing_unicode$class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__class_decl_dict);
            tmp_kwargs_value_12 = tmp_pyparsing_unicode$class_creation_5__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 165;
            tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            assert(tmp_pyparsing_unicode$class_creation_5__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_5__prepared = tmp_assign_source_58;
        }
        {
            bool tmp_condition_result_22;
            PyObject *tmp_operand_value_6;
            PyObject *tmp_expression_value_39;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__prepared);
            tmp_expression_value_39 = tmp_pyparsing_unicode$class_creation_5__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_39, mod_consts[80]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
            assert(!(tmp_res == -1));
            tmp_condition_result_22 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_22 != false) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        {
            PyObject *tmp_raise_type_6;
            PyObject *tmp_raise_value_6;
            PyObject *tmp_mod_expr_left_6;
            PyObject *tmp_mod_expr_right_6;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_name_value_7;
            PyObject *tmp_default_value_6;
            tmp_raise_type_6 = PyExc_TypeError;
            tmp_mod_expr_left_6 = mod_consts[81];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__metaclass);
            tmp_expression_value_40 = tmp_pyparsing_unicode$class_creation_5__metaclass;
            tmp_name_value_7 = mod_consts[2];
            tmp_default_value_6 = mod_consts[82];
            tmp_tuple_element_26 = BUILTIN_GETATTR(tstate, tmp_expression_value_40, tmp_name_value_7, tmp_default_value_6);
            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_41;
                PyObject *tmp_type_arg_12;
                PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_26);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__prepared);
                tmp_type_arg_12 = tmp_pyparsing_unicode$class_creation_5__prepared;
                tmp_expression_value_41 = BUILTIN_TYPE1(tmp_type_arg_12);
                assert(!(tmp_expression_value_41 == NULL));
                tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[2]);
                Py_DECREF(tmp_expression_value_41);
                if (tmp_tuple_element_26 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 165;
                    type_description_2 = "o";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_26);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_mod_expr_right_6);
            goto try_except_handler_23;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
            Py_DECREF(tmp_mod_expr_right_6);
            if (tmp_raise_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            exception_type = tmp_raise_type_6;
            Py_INCREF(tmp_raise_type_6);
            exception_value = tmp_raise_value_6;
            exception_lineno = 165;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_23;
        }
        branch_no_16:;
        goto branch_end_15;
        branch_no_15:;
        {
            PyObject *tmp_assign_source_59;
            tmp_assign_source_59 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_5__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_5__prepared = tmp_assign_source_59;
        }
        branch_end_15:;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__prepared);
            tmp_set_locals_8 = tmp_pyparsing_unicode$class_creation_5__prepared;
            locals_pyparsing$unicode$$$class__8_Greek_165 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__8_Greek_165, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_2 = "o";
            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[105];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__8_Greek_165, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_2 = "o";
            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__8_Greek_165, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_2 = "o";
            goto try_except_handler_25;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__8_Greek_165, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_2 = "o";
            goto try_except_handler_25;
        }
        frame_183998f295ba82ecd21ba051d5d7b9db_8 = MAKE_CLASS_FRAME(tstate, codeobj_183998f295ba82ecd21ba051d5d7b9db, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_183998f295ba82ecd21ba051d5d7b9db_8);
        assert(Py_REFCNT(frame_183998f295ba82ecd21ba051d5d7b9db_8) == 2);

        // Framed code:
        tmp_dictset_value = LIST_COPY(mod_consts[107]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__8_Greek_165, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_3 = "o";
            goto frame_exception_exit_8;
        }
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_ass_subscript_7;
            tmp_ass_subvalue_7 = PyObject_GetItem(locals_pyparsing$unicode$$$class__8_Greek_165, mod_consts[64]);

            if (tmp_ass_subvalue_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_7 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_ass_subvalue_7 == NULL)) {
                        tmp_ass_subvalue_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                    }

                    if (tmp_ass_subvalue_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 167;
                        type_description_3 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_ass_subvalue_7);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_ass_subscribed_7 = PyObject_GetItem(locals_pyparsing$unicode$$$class__8_Greek_165, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_7);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 167;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_7);

                exception_lineno = 167;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_7 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
            Py_DECREF(tmp_ass_subscribed_7);
            Py_DECREF(tmp_ass_subvalue_7);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_183998f295ba82ecd21ba051d5d7b9db_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_183998f295ba82ecd21ba051d5d7b9db_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_183998f295ba82ecd21ba051d5d7b9db_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_183998f295ba82ecd21ba051d5d7b9db_8,
            type_description_3,
            outline_7_var___class__
        );



        assertFrameObject(frame_183998f295ba82ecd21ba051d5d7b9db_8);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_7:;
        type_description_2 = "o";
        goto try_except_handler_25;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_pyparsing_unicode$class_creation_5__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_pyparsing_unicode$class_creation_5__bases_orig;
            tmp_condition_result_23 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto try_except_handler_25;
            }
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto branch_yes_17;
            } else {
                goto branch_no_17;
            }
        }
        branch_yes_17:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__8_Greek_165, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_2 = "o";
            goto try_except_handler_25;
        }
        branch_no_17:;
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kwargs_value_13;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__metaclass);
            tmp_called_value_21 = tmp_pyparsing_unicode$class_creation_5__metaclass;
            tmp_tuple_element_27 = mod_consts[104];
            tmp_args_value_13 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases);
            tmp_tuple_element_27 = tmp_pyparsing_unicode$class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_27);
            tmp_tuple_element_27 = locals_pyparsing$unicode$$$class__8_Greek_165;
            PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__class_decl_dict);
            tmp_kwargs_value_13 = tmp_pyparsing_unicode$class_creation_5__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 165;
            tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_13, tmp_kwargs_value_13);
            Py_DECREF(tmp_args_value_13);
            if (tmp_assign_source_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto try_except_handler_25;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_60;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_dictset_value = outline_7_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_25;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        Py_DECREF(locals_pyparsing$unicode$$$class__8_Greek_165);
        locals_pyparsing$unicode$$$class__8_Greek_165 = NULL;
        goto try_return_handler_24;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__8_Greek_165);
        locals_pyparsing$unicode$$$class__8_Greek_165 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 165;
        goto try_except_handler_23;
        outline_result_8:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[104], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_2 = "o";
            goto try_except_handler_23;
        }
        goto try_end_8;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_5__bases_orig);
        tmp_pyparsing_unicode$class_creation_5__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_5__bases);
        tmp_pyparsing_unicode$class_creation_5__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_5__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_5__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_5__metaclass);
        tmp_pyparsing_unicode$class_creation_5__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_5__prepared);
        tmp_pyparsing_unicode$class_creation_5__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto frame_exception_exit_3;
        // End of try:
        try_end_8:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_5__bases_orig);
        tmp_pyparsing_unicode$class_creation_5__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_5__bases);
        tmp_pyparsing_unicode$class_creation_5__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_5__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_5__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_5__metaclass);
        tmp_pyparsing_unicode$class_creation_5__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_5__prepared);
        tmp_pyparsing_unicode$class_creation_5__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_tuple_element_28;
            tmp_tuple_element_28 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[10]);

            if (tmp_tuple_element_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_28 == NULL)) {
                        tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                    }

                    if (tmp_tuple_element_28 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 205;
                        type_description_2 = "o";
                        goto try_except_handler_26;
                    }
                    Py_INCREF(tmp_tuple_element_28);
                } else {
                    goto try_except_handler_26;
                }
            }

            tmp_assign_source_61 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_61, 0, tmp_tuple_element_28);
            assert(tmp_pyparsing_unicode$class_creation_6__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_6__bases_orig = tmp_assign_source_61;
        }
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_dircall_arg1_7;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases_orig);
            tmp_dircall_arg1_7 = tmp_pyparsing_unicode$class_creation_6__bases_orig;
            Py_INCREF(tmp_dircall_arg1_7);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
                tmp_assign_source_62 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            assert(tmp_pyparsing_unicode$class_creation_6__bases == NULL);
            tmp_pyparsing_unicode$class_creation_6__bases = tmp_assign_source_62;
        }
        {
            PyObject *tmp_assign_source_63;
            tmp_assign_source_63 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_6__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_6__class_decl_dict = tmp_assign_source_63;
        }
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_metaclass_value_7;
            nuitka_bool tmp_condition_result_24;
            int tmp_truth_name_7;
            PyObject *tmp_type_arg_13;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_bases_value_7;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases);
            tmp_truth_name_7 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_6__bases);
            if (tmp_truth_name_7 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            tmp_condition_result_24 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases);
            tmp_expression_value_42 = tmp_pyparsing_unicode$class_creation_6__bases;
            tmp_subscript_value_11 = mod_consts[15];
            tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_42, tmp_subscript_value_11, 0);
            if (tmp_type_arg_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
            Py_DECREF(tmp_type_arg_13);
            if (tmp_metaclass_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_7);
            condexpr_end_7:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases);
            tmp_bases_value_7 = tmp_pyparsing_unicode$class_creation_6__bases;
            tmp_assign_source_64 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
            Py_DECREF(tmp_metaclass_value_7);
            if (tmp_assign_source_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            assert(tmp_pyparsing_unicode$class_creation_6__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_6__metaclass = tmp_assign_source_64;
        }
        {
            bool tmp_condition_result_25;
            PyObject *tmp_expression_value_43;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__metaclass);
            tmp_expression_value_43 = tmp_pyparsing_unicode$class_creation_6__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_43, mod_consts[78]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            tmp_condition_result_25 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_25 != false) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__metaclass);
            tmp_expression_value_44 = tmp_pyparsing_unicode$class_creation_6__metaclass;
            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[78]);
            if (tmp_called_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            tmp_tuple_element_29 = mod_consts[108];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases);
            tmp_tuple_element_29 = tmp_pyparsing_unicode$class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__class_decl_dict);
            tmp_kwargs_value_14 = tmp_pyparsing_unicode$class_creation_6__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 205;
            tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            assert(tmp_pyparsing_unicode$class_creation_6__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_6__prepared = tmp_assign_source_65;
        }
        {
            bool tmp_condition_result_26;
            PyObject *tmp_operand_value_7;
            PyObject *tmp_expression_value_45;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__prepared);
            tmp_expression_value_45 = tmp_pyparsing_unicode$class_creation_6__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_45, mod_consts[80]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
            assert(!(tmp_res == -1));
            tmp_condition_result_26 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_26 != false) {
                goto branch_yes_19;
            } else {
                goto branch_no_19;
            }
        }
        branch_yes_19:;
        {
            PyObject *tmp_raise_type_7;
            PyObject *tmp_raise_value_7;
            PyObject *tmp_mod_expr_left_7;
            PyObject *tmp_mod_expr_right_7;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_name_value_8;
            PyObject *tmp_default_value_7;
            tmp_raise_type_7 = PyExc_TypeError;
            tmp_mod_expr_left_7 = mod_consts[81];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__metaclass);
            tmp_expression_value_46 = tmp_pyparsing_unicode$class_creation_6__metaclass;
            tmp_name_value_8 = mod_consts[2];
            tmp_default_value_7 = mod_consts[82];
            tmp_tuple_element_30 = BUILTIN_GETATTR(tstate, tmp_expression_value_46, tmp_name_value_8, tmp_default_value_7);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_47;
                PyObject *tmp_type_arg_14;
                PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_30);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__prepared);
                tmp_type_arg_14 = tmp_pyparsing_unicode$class_creation_6__prepared;
                tmp_expression_value_47 = BUILTIN_TYPE1(tmp_type_arg_14);
                assert(!(tmp_expression_value_47 == NULL));
                tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[2]);
                Py_DECREF(tmp_expression_value_47);
                if (tmp_tuple_element_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_2 = "o";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_30);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_mod_expr_right_7);
            goto try_except_handler_26;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
            Py_DECREF(tmp_mod_expr_right_7);
            if (tmp_raise_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            exception_type = tmp_raise_type_7;
            Py_INCREF(tmp_raise_type_7);
            exception_value = tmp_raise_value_7;
            exception_lineno = 205;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_26;
        }
        branch_no_19:;
        goto branch_end_18;
        branch_no_18:;
        {
            PyObject *tmp_assign_source_66;
            tmp_assign_source_66 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_6__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_6__prepared = tmp_assign_source_66;
        }
        branch_end_18:;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__prepared);
            tmp_set_locals_9 = tmp_pyparsing_unicode$class_creation_6__prepared;
            locals_pyparsing$unicode$$$class__9_Cyrillic_205 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__9_Cyrillic_205, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_2 = "o";
            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[109];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__9_Cyrillic_205, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_2 = "o";
            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__9_Cyrillic_205, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_2 = "o";
            goto try_except_handler_28;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__9_Cyrillic_205, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_2 = "o";
            goto try_except_handler_28;
        }
        frame_054ffbdb80b0e5407cfefd14e08435e0_9 = MAKE_CLASS_FRAME(tstate, codeobj_054ffbdb80b0e5407cfefd14e08435e0, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_054ffbdb80b0e5407cfefd14e08435e0_9);
        assert(Py_REFCNT(frame_054ffbdb80b0e5407cfefd14e08435e0_9) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST8(mod_consts[111]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__9_Cyrillic_205, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_3 = "o";
            goto frame_exception_exit_9;
        }
        {
            PyObject *tmp_ass_subvalue_8;
            PyObject *tmp_ass_subscribed_8;
            PyObject *tmp_ass_subscript_8;
            tmp_ass_subvalue_8 = PyObject_GetItem(locals_pyparsing$unicode$$$class__9_Cyrillic_205, mod_consts[64]);

            if (tmp_ass_subvalue_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_8 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_ass_subvalue_8 == NULL)) {
                        tmp_ass_subvalue_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                    }

                    if (tmp_ass_subvalue_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 207;
                        type_description_3 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_ass_subvalue_8);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_ass_subscribed_8 = PyObject_GetItem(locals_pyparsing$unicode$$$class__9_Cyrillic_205, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_8);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 207;
                type_description_3 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_8);

                exception_lineno = 207;
                type_description_3 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_8 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
            Py_DECREF(tmp_ass_subscribed_8);
            Py_DECREF(tmp_ass_subvalue_8);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_3 = "o";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_7;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_054ffbdb80b0e5407cfefd14e08435e0_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_054ffbdb80b0e5407cfefd14e08435e0_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_054ffbdb80b0e5407cfefd14e08435e0_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_054ffbdb80b0e5407cfefd14e08435e0_9,
            type_description_3,
            outline_8_var___class__
        );



        assertFrameObject(frame_054ffbdb80b0e5407cfefd14e08435e0_9);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_8:;
        type_description_2 = "o";
        goto try_except_handler_28;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_pyparsing_unicode$class_creation_6__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_pyparsing_unicode$class_creation_6__bases_orig;
            tmp_condition_result_27 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto try_except_handler_28;
            }
            if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
        }
        branch_yes_20:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__9_Cyrillic_205, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_2 = "o";
            goto try_except_handler_28;
        }
        branch_no_20:;
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_value_15;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_kwargs_value_15;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__metaclass);
            tmp_called_value_23 = tmp_pyparsing_unicode$class_creation_6__metaclass;
            tmp_tuple_element_31 = mod_consts[108];
            tmp_args_value_15 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases);
            tmp_tuple_element_31 = tmp_pyparsing_unicode$class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_31);
            tmp_tuple_element_31 = locals_pyparsing$unicode$$$class__9_Cyrillic_205;
            PyTuple_SET_ITEM0(tmp_args_value_15, 2, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__class_decl_dict);
            tmp_kwargs_value_15 = tmp_pyparsing_unicode$class_creation_6__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 205;
            tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_15, tmp_kwargs_value_15);
            Py_DECREF(tmp_args_value_15);
            if (tmp_assign_source_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto try_except_handler_28;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_67;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_dictset_value = outline_8_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_28;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        Py_DECREF(locals_pyparsing$unicode$$$class__9_Cyrillic_205);
        locals_pyparsing$unicode$$$class__9_Cyrillic_205 = NULL;
        goto try_return_handler_27;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__9_Cyrillic_205);
        locals_pyparsing$unicode$$$class__9_Cyrillic_205 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_27;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 205;
        goto try_except_handler_26;
        outline_result_9:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[108], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_2 = "o";
            goto try_except_handler_26;
        }
        goto try_end_9;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_6__bases_orig);
        tmp_pyparsing_unicode$class_creation_6__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_6__bases);
        tmp_pyparsing_unicode$class_creation_6__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_6__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_6__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_6__metaclass);
        tmp_pyparsing_unicode$class_creation_6__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_6__prepared);
        tmp_pyparsing_unicode$class_creation_6__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto frame_exception_exit_3;
        // End of try:
        try_end_9:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_6__bases_orig);
        tmp_pyparsing_unicode$class_creation_6__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_6__bases);
        tmp_pyparsing_unicode$class_creation_6__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_6__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_6__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_6__metaclass);
        tmp_pyparsing_unicode$class_creation_6__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_6__prepared);
        tmp_pyparsing_unicode$class_creation_6__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_tuple_element_32;
            tmp_tuple_element_32 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[10]);

            if (tmp_tuple_element_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_32 == NULL)) {
                        tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                    }

                    if (tmp_tuple_element_32 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto try_except_handler_29;
                    }
                    Py_INCREF(tmp_tuple_element_32);
                } else {
                    goto try_except_handler_29;
                }
            }

            tmp_assign_source_68 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_68, 0, tmp_tuple_element_32);
            assert(tmp_pyparsing_unicode$class_creation_7__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_7__bases_orig = tmp_assign_source_68;
        }
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_dircall_arg1_8;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases_orig);
            tmp_dircall_arg1_8 = tmp_pyparsing_unicode$class_creation_7__bases_orig;
            Py_INCREF(tmp_dircall_arg1_8);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
                tmp_assign_source_69 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            assert(tmp_pyparsing_unicode$class_creation_7__bases == NULL);
            tmp_pyparsing_unicode$class_creation_7__bases = tmp_assign_source_69;
        }
        {
            PyObject *tmp_assign_source_70;
            tmp_assign_source_70 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_7__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_7__class_decl_dict = tmp_assign_source_70;
        }
        {
            PyObject *tmp_assign_source_71;
            PyObject *tmp_metaclass_value_8;
            nuitka_bool tmp_condition_result_28;
            int tmp_truth_name_8;
            PyObject *tmp_type_arg_15;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_bases_value_8;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases);
            tmp_truth_name_8 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_7__bases);
            if (tmp_truth_name_8 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            tmp_condition_result_28 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases);
            tmp_expression_value_48 = tmp_pyparsing_unicode$class_creation_7__bases;
            tmp_subscript_value_12 = mod_consts[15];
            tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_48, tmp_subscript_value_12, 0);
            if (tmp_type_arg_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
            Py_DECREF(tmp_type_arg_15);
            if (tmp_metaclass_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_8);
            condexpr_end_8:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases);
            tmp_bases_value_8 = tmp_pyparsing_unicode$class_creation_7__bases;
            tmp_assign_source_71 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
            Py_DECREF(tmp_metaclass_value_8);
            if (tmp_assign_source_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            assert(tmp_pyparsing_unicode$class_creation_7__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_7__metaclass = tmp_assign_source_71;
        }
        {
            bool tmp_condition_result_29;
            PyObject *tmp_expression_value_49;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__metaclass);
            tmp_expression_value_49 = tmp_pyparsing_unicode$class_creation_7__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_49, mod_consts[78]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            tmp_condition_result_29 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_29 != false) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        {
            PyObject *tmp_assign_source_72;
            PyObject *tmp_called_value_24;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__metaclass);
            tmp_expression_value_50 = tmp_pyparsing_unicode$class_creation_7__metaclass;
            tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[78]);
            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            tmp_tuple_element_33 = mod_consts[112];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases);
            tmp_tuple_element_33 = tmp_pyparsing_unicode$class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__class_decl_dict);
            tmp_kwargs_value_16 = tmp_pyparsing_unicode$class_creation_7__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 218;
            tmp_assign_source_72 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            assert(tmp_pyparsing_unicode$class_creation_7__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_7__prepared = tmp_assign_source_72;
        }
        {
            bool tmp_condition_result_30;
            PyObject *tmp_operand_value_8;
            PyObject *tmp_expression_value_51;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__prepared);
            tmp_expression_value_51 = tmp_pyparsing_unicode$class_creation_7__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_51, mod_consts[80]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
            assert(!(tmp_res == -1));
            tmp_condition_result_30 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_30 != false) {
                goto branch_yes_22;
            } else {
                goto branch_no_22;
            }
        }
        branch_yes_22:;
        {
            PyObject *tmp_raise_type_8;
            PyObject *tmp_raise_value_8;
            PyObject *tmp_mod_expr_left_8;
            PyObject *tmp_mod_expr_right_8;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_name_value_9;
            PyObject *tmp_default_value_8;
            tmp_raise_type_8 = PyExc_TypeError;
            tmp_mod_expr_left_8 = mod_consts[81];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__metaclass);
            tmp_expression_value_52 = tmp_pyparsing_unicode$class_creation_7__metaclass;
            tmp_name_value_9 = mod_consts[2];
            tmp_default_value_8 = mod_consts[82];
            tmp_tuple_element_34 = BUILTIN_GETATTR(tstate, tmp_expression_value_52, tmp_name_value_9, tmp_default_value_8);
            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_53;
                PyObject *tmp_type_arg_16;
                PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_34);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__prepared);
                tmp_type_arg_16 = tmp_pyparsing_unicode$class_creation_7__prepared;
                tmp_expression_value_53 = BUILTIN_TYPE1(tmp_type_arg_16);
                assert(!(tmp_expression_value_53 == NULL));
                tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[2]);
                Py_DECREF(tmp_expression_value_53);
                if (tmp_tuple_element_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 218;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_34);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_mod_expr_right_8);
            goto try_except_handler_29;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
            Py_DECREF(tmp_mod_expr_right_8);
            if (tmp_raise_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            exception_type = tmp_raise_type_8;
            Py_INCREF(tmp_raise_type_8);
            exception_value = tmp_raise_value_8;
            exception_lineno = 218;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_29;
        }
        branch_no_22:;
        goto branch_end_21;
        branch_no_21:;
        {
            PyObject *tmp_assign_source_73;
            tmp_assign_source_73 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_7__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_7__prepared = tmp_assign_source_73;
        }
        branch_end_21:;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__prepared);
            tmp_set_locals_10 = tmp_pyparsing_unicode$class_creation_7__prepared;
            locals_pyparsing$unicode$$$class__10_Chinese_218 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__10_Chinese_218, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_2 = "o";
            goto try_except_handler_31;
        }
        tmp_dictset_value = mod_consts[113];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__10_Chinese_218, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_2 = "o";
            goto try_except_handler_31;
        }
        tmp_dictset_value = mod_consts[114];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__10_Chinese_218, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_2 = "o";
            goto try_except_handler_31;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__10_Chinese_218, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_2 = "o";
            goto try_except_handler_31;
        }
        frame_18ce934730325064e33524b0b7f1a7e9_10 = MAKE_CLASS_FRAME(tstate, codeobj_18ce934730325064e33524b0b7f1a7e9, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_18ce934730325064e33524b0b7f1a7e9_10);
        assert(Py_REFCNT(frame_18ce934730325064e33524b0b7f1a7e9_10) == 2);

        // Framed code:
        tmp_dictset_value = LIST_COPY(mod_consts[115]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__10_Chinese_218, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_3 = "o";
            goto frame_exception_exit_10;
        }
        {
            PyObject *tmp_ass_subvalue_9;
            PyObject *tmp_ass_subscribed_9;
            PyObject *tmp_ass_subscript_9;
            tmp_ass_subvalue_9 = PyObject_GetItem(locals_pyparsing$unicode$$$class__10_Chinese_218, mod_consts[64]);

            if (tmp_ass_subvalue_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_9 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_ass_subvalue_9 == NULL)) {
                        tmp_ass_subvalue_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                    }

                    if (tmp_ass_subvalue_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 220;
                        type_description_3 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_ass_subvalue_9);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_ass_subscribed_9 = PyObject_GetItem(locals_pyparsing$unicode$$$class__10_Chinese_218, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_9);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 220;
                type_description_3 = "o";
                goto frame_exception_exit_10;
            }

            if (tmp_ass_subscribed_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_9);

                exception_lineno = 220;
                type_description_3 = "o";
                goto frame_exception_exit_10;
            }
            tmp_ass_subscript_9 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
            Py_DECREF(tmp_ass_subscribed_9);
            Py_DECREF(tmp_ass_subvalue_9);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_3 = "o";
                goto frame_exception_exit_10;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_8;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_18ce934730325064e33524b0b7f1a7e9_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_18ce934730325064e33524b0b7f1a7e9_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_18ce934730325064e33524b0b7f1a7e9_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_18ce934730325064e33524b0b7f1a7e9_10,
            type_description_3,
            outline_9_var___class__
        );



        assertFrameObject(frame_18ce934730325064e33524b0b7f1a7e9_10);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_9:;
        type_description_2 = "o";
        goto try_except_handler_31;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_31;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_pyparsing_unicode$class_creation_7__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_pyparsing_unicode$class_creation_7__bases_orig;
            tmp_condition_result_31 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_31 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto try_except_handler_31;
            }
            if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
                goto branch_yes_23;
            } else {
                goto branch_no_23;
            }
        }
        branch_yes_23:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__10_Chinese_218, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_2 = "o";
            goto try_except_handler_31;
        }
        branch_no_23:;
        {
            PyObject *tmp_assign_source_74;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_value_17;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_kwargs_value_17;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__metaclass);
            tmp_called_value_25 = tmp_pyparsing_unicode$class_creation_7__metaclass;
            tmp_tuple_element_35 = mod_consts[112];
            tmp_args_value_17 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases);
            tmp_tuple_element_35 = tmp_pyparsing_unicode$class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_35);
            tmp_tuple_element_35 = locals_pyparsing$unicode$$$class__10_Chinese_218;
            PyTuple_SET_ITEM0(tmp_args_value_17, 2, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__class_decl_dict);
            tmp_kwargs_value_17 = tmp_pyparsing_unicode$class_creation_7__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 218;
            tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_17, tmp_kwargs_value_17);
            Py_DECREF(tmp_args_value_17);
            if (tmp_assign_source_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto try_except_handler_31;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_74;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_dictset_value = outline_9_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_31;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        Py_DECREF(locals_pyparsing$unicode$$$class__10_Chinese_218);
        locals_pyparsing$unicode$$$class__10_Chinese_218 = NULL;
        goto try_return_handler_30;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__10_Chinese_218);
        locals_pyparsing$unicode$$$class__10_Chinese_218 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto try_except_handler_30;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 218;
        goto try_except_handler_29;
        outline_result_10:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[112], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_2 = "o";
            goto try_except_handler_29;
        }
        goto try_end_10;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_7__bases_orig);
        tmp_pyparsing_unicode$class_creation_7__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_7__bases);
        tmp_pyparsing_unicode$class_creation_7__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_7__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_7__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_7__metaclass);
        tmp_pyparsing_unicode$class_creation_7__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_7__prepared);
        tmp_pyparsing_unicode$class_creation_7__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto frame_exception_exit_3;
        // End of try:
        try_end_10:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_7__bases_orig);
        tmp_pyparsing_unicode$class_creation_7__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_7__bases);
        tmp_pyparsing_unicode$class_creation_7__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_7__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_7__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_7__metaclass);
        tmp_pyparsing_unicode$class_creation_7__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_7__prepared);
        tmp_pyparsing_unicode$class_creation_7__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_75;
            PyObject *tmp_tuple_element_36;
            tmp_tuple_element_36 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[10]);

            if (tmp_tuple_element_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_36 == NULL)) {
                        tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                    }

                    if (tmp_tuple_element_36 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 241;
                        type_description_2 = "o";
                        goto try_except_handler_32;
                    }
                    Py_INCREF(tmp_tuple_element_36);
                } else {
                    goto try_except_handler_32;
                }
            }

            tmp_assign_source_75 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_75, 0, tmp_tuple_element_36);
            assert(tmp_pyparsing_unicode$class_creation_8__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_8__bases_orig = tmp_assign_source_75;
        }
        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_dircall_arg1_9;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases_orig);
            tmp_dircall_arg1_9 = tmp_pyparsing_unicode$class_creation_8__bases_orig;
            Py_INCREF(tmp_dircall_arg1_9);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
                tmp_assign_source_76 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto try_except_handler_32;
            }
            assert(tmp_pyparsing_unicode$class_creation_8__bases == NULL);
            tmp_pyparsing_unicode$class_creation_8__bases = tmp_assign_source_76;
        }
        {
            PyObject *tmp_assign_source_77;
            tmp_assign_source_77 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_8__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_8__class_decl_dict = tmp_assign_source_77;
        }
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_metaclass_value_9;
            nuitka_bool tmp_condition_result_32;
            int tmp_truth_name_9;
            PyObject *tmp_type_arg_17;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_bases_value_9;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases);
            tmp_truth_name_9 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_8__bases);
            if (tmp_truth_name_9 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto try_except_handler_32;
            }
            tmp_condition_result_32 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases);
            tmp_expression_value_54 = tmp_pyparsing_unicode$class_creation_8__bases;
            tmp_subscript_value_13 = mod_consts[15];
            tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_54, tmp_subscript_value_13, 0);
            if (tmp_type_arg_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto try_except_handler_32;
            }
            tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
            Py_DECREF(tmp_type_arg_17);
            if (tmp_metaclass_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto try_except_handler_32;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_9);
            condexpr_end_9:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases);
            tmp_bases_value_9 = tmp_pyparsing_unicode$class_creation_8__bases;
            tmp_assign_source_78 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
            Py_DECREF(tmp_metaclass_value_9);
            if (tmp_assign_source_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto try_except_handler_32;
            }
            assert(tmp_pyparsing_unicode$class_creation_8__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_8__metaclass = tmp_assign_source_78;
        }
        {
            bool tmp_condition_result_33;
            PyObject *tmp_expression_value_55;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__metaclass);
            tmp_expression_value_55 = tmp_pyparsing_unicode$class_creation_8__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_55, mod_consts[78]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto try_except_handler_32;
            }
            tmp_condition_result_33 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_33 != false) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        {
            PyObject *tmp_assign_source_79;
            PyObject *tmp_called_value_26;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__metaclass);
            tmp_expression_value_56 = tmp_pyparsing_unicode$class_creation_8__metaclass;
            tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[78]);
            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto try_except_handler_32;
            }
            tmp_tuple_element_37 = mod_consts[116];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases);
            tmp_tuple_element_37 = tmp_pyparsing_unicode$class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__class_decl_dict);
            tmp_kwargs_value_18 = tmp_pyparsing_unicode$class_creation_8__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 241;
            tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto try_except_handler_32;
            }
            assert(tmp_pyparsing_unicode$class_creation_8__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_8__prepared = tmp_assign_source_79;
        }
        {
            bool tmp_condition_result_34;
            PyObject *tmp_operand_value_9;
            PyObject *tmp_expression_value_57;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__prepared);
            tmp_expression_value_57 = tmp_pyparsing_unicode$class_creation_8__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_57, mod_consts[80]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto try_except_handler_32;
            }
            tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
            assert(!(tmp_res == -1));
            tmp_condition_result_34 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_34 != false) {
                goto branch_yes_25;
            } else {
                goto branch_no_25;
            }
        }
        branch_yes_25:;
        {
            PyObject *tmp_raise_type_9;
            PyObject *tmp_raise_value_9;
            PyObject *tmp_mod_expr_left_9;
            PyObject *tmp_mod_expr_right_9;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_name_value_10;
            PyObject *tmp_default_value_9;
            tmp_raise_type_9 = PyExc_TypeError;
            tmp_mod_expr_left_9 = mod_consts[81];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__metaclass);
            tmp_expression_value_58 = tmp_pyparsing_unicode$class_creation_8__metaclass;
            tmp_name_value_10 = mod_consts[2];
            tmp_default_value_9 = mod_consts[82];
            tmp_tuple_element_38 = BUILTIN_GETATTR(tstate, tmp_expression_value_58, tmp_name_value_10, tmp_default_value_9);
            if (tmp_tuple_element_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto try_except_handler_32;
            }
            tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_59;
                PyObject *tmp_type_arg_18;
                PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_38);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__prepared);
                tmp_type_arg_18 = tmp_pyparsing_unicode$class_creation_8__prepared;
                tmp_expression_value_59 = BUILTIN_TYPE1(tmp_type_arg_18);
                assert(!(tmp_expression_value_59 == NULL));
                tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[2]);
                Py_DECREF(tmp_expression_value_59);
                if (tmp_tuple_element_38 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 241;
                    type_description_2 = "o";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_38);
            }
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_mod_expr_right_9);
            goto try_except_handler_32;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
            Py_DECREF(tmp_mod_expr_right_9);
            if (tmp_raise_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto try_except_handler_32;
            }
            exception_type = tmp_raise_type_9;
            Py_INCREF(tmp_raise_type_9);
            exception_value = tmp_raise_value_9;
            exception_lineno = 241;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_32;
        }
        branch_no_25:;
        goto branch_end_24;
        branch_no_24:;
        {
            PyObject *tmp_assign_source_80;
            tmp_assign_source_80 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_8__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_8__prepared = tmp_assign_source_80;
        }
        branch_end_24:;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__prepared);
            tmp_set_locals_11 = tmp_pyparsing_unicode$class_creation_8__prepared;
            locals_pyparsing$unicode$$$class__11_Japanese_241 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_2 = "o";
            goto try_except_handler_34;
        }
        tmp_dictset_value = mod_consts[117];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_2 = "o";
            goto try_except_handler_34;
        }
        tmp_dictset_value = mod_consts[118];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_2 = "o";
            goto try_except_handler_34;
        }
        frame_952180b9772e047c3f8efad60e9be5ef_11 = MAKE_CLASS_FRAME(tstate, codeobj_952180b9772e047c3f8efad60e9be5ef, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_952180b9772e047c3f8efad60e9be5ef_11);
        assert(Py_REFCNT(frame_952180b9772e047c3f8efad60e9be5ef_11) == 2);

        // Framed code:
        // Tried code:
        {
            PyObject *tmp_assign_source_81;
            PyObject *tmp_tuple_element_39;
            tmp_tuple_element_39 = PyObject_GetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[10]);

            if (tmp_tuple_element_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_39 == NULL)) {
                        tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                    }

                    if (tmp_tuple_element_39 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 244;
                        type_description_3 = "o";
                        goto try_except_handler_35;
                    }
                    Py_INCREF(tmp_tuple_element_39);
                } else {
                    goto try_except_handler_35;
                }
            }

            tmp_assign_source_81 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_81, 0, tmp_tuple_element_39);
            assert(tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig = tmp_assign_source_81;
        }
        {
            PyObject *tmp_assign_source_82;
            PyObject *tmp_dircall_arg1_10;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig);
            tmp_dircall_arg1_10 = tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig;
            Py_INCREF(tmp_dircall_arg1_10);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
                tmp_assign_source_82 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_1__bases == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_1__bases = tmp_assign_source_82;
        }
        {
            PyObject *tmp_assign_source_83;
            tmp_assign_source_83 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict = tmp_assign_source_83;
        }
        {
            PyObject *tmp_assign_source_84;
            PyObject *tmp_metaclass_value_10;
            nuitka_bool tmp_condition_result_35;
            int tmp_truth_name_10;
            PyObject *tmp_type_arg_19;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_bases_value_10;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
            tmp_truth_name_10 = CHECK_IF_TRUE(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
            if (tmp_truth_name_10 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            tmp_condition_result_35 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
            tmp_expression_value_60 = tmp_pyparsing_unicode$Japanese$class_creation_1__bases;
            tmp_subscript_value_14 = mod_consts[15];
            tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_60, tmp_subscript_value_14, 0);
            if (tmp_type_arg_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
            Py_DECREF(tmp_type_arg_19);
            if (tmp_metaclass_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_10);
            condexpr_end_10:;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
            tmp_bases_value_10 = tmp_pyparsing_unicode$Japanese$class_creation_1__bases;
            tmp_assign_source_84 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
            Py_DECREF(tmp_metaclass_value_10);
            if (tmp_assign_source_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass = tmp_assign_source_84;
        }
        {
            bool tmp_condition_result_36;
            PyObject *tmp_expression_value_61;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass);
            tmp_expression_value_61 = tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_61, mod_consts[78]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            tmp_condition_result_36 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_36 != false) {
                goto branch_yes_26;
            } else {
                goto branch_no_26;
            }
        }
        branch_yes_26:;
        {
            PyObject *tmp_assign_source_85;
            PyObject *tmp_called_value_27;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_args_value_19;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_kwargs_value_19;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass);
            tmp_expression_value_62 = tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass;
            tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[78]);
            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            tmp_tuple_element_40 = mod_consts[119];
            tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_40);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
            tmp_tuple_element_40 = tmp_pyparsing_unicode$Japanese$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_40);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict);
            tmp_kwargs_value_19 = tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict;
            frame_952180b9772e047c3f8efad60e9be5ef_11->m_frame.f_lineno = 244;
            tmp_assign_source_85 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_19, tmp_kwargs_value_19);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_value_19);
            if (tmp_assign_source_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_1__prepared == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_1__prepared = tmp_assign_source_85;
        }
        {
            bool tmp_condition_result_37;
            PyObject *tmp_operand_value_10;
            PyObject *tmp_expression_value_63;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__prepared);
            tmp_expression_value_63 = tmp_pyparsing_unicode$Japanese$class_creation_1__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_63, mod_consts[80]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
            assert(!(tmp_res == -1));
            tmp_condition_result_37 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_37 != false) {
                goto branch_yes_27;
            } else {
                goto branch_no_27;
            }
        }
        branch_yes_27:;
        {
            PyObject *tmp_raise_type_10;
            PyObject *tmp_raise_value_10;
            PyObject *tmp_mod_expr_left_10;
            PyObject *tmp_mod_expr_right_10;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_name_value_11;
            PyObject *tmp_default_value_10;
            tmp_raise_type_10 = PyExc_TypeError;
            tmp_mod_expr_left_10 = mod_consts[81];
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass);
            tmp_expression_value_64 = tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass;
            tmp_name_value_11 = mod_consts[2];
            tmp_default_value_10 = mod_consts[82];
            tmp_tuple_element_41 = BUILTIN_GETATTR(tstate, tmp_expression_value_64, tmp_name_value_11, tmp_default_value_10);
            if (tmp_tuple_element_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_65;
                PyObject *tmp_type_arg_20;
                PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_41);
                CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__prepared);
                tmp_type_arg_20 = tmp_pyparsing_unicode$Japanese$class_creation_1__prepared;
                tmp_expression_value_65 = BUILTIN_TYPE1(tmp_type_arg_20);
                assert(!(tmp_expression_value_65 == NULL));
                tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[2]);
                Py_DECREF(tmp_expression_value_65);
                if (tmp_tuple_element_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 244;
                    type_description_3 = "o";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_41);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_mod_expr_right_10);
            goto try_except_handler_35;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
            Py_DECREF(tmp_mod_expr_right_10);
            if (tmp_raise_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            exception_type = tmp_raise_type_10;
            Py_INCREF(tmp_raise_type_10);
            exception_value = tmp_raise_value_10;
            exception_lineno = 244;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_3 = "o";
            goto try_except_handler_35;
        }
        branch_no_27:;
        goto branch_end_26;
        branch_no_26:;
        {
            PyObject *tmp_assign_source_86;
            tmp_assign_source_86 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$Japanese$class_creation_1__prepared == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_1__prepared = tmp_assign_source_86;
        }
        branch_end_26:;
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__prepared);
            tmp_set_locals_12 = tmp_pyparsing_unicode$Japanese$class_creation_1__prepared;
            locals_pyparsing$unicode$$$class__12_Kanji_244 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__12_Kanji_244, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_3 = "o";
            goto try_except_handler_37;
        }
        tmp_dictset_value = mod_consts[120];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__12_Kanji_244, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_3 = "o";
            goto try_except_handler_37;
        }
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__12_Kanji_244, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_3 = "o";
            goto try_except_handler_37;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__12_Kanji_244, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_3 = "o";
            goto try_except_handler_37;
        }
        frame_d6c3d19905fbc273ff3cbb9139bc7c81_12 = MAKE_CLASS_FRAME(tstate, codeobj_d6c3d19905fbc273ff3cbb9139bc7c81, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_d6c3d19905fbc273ff3cbb9139bc7c81_12);
        assert(Py_REFCNT(frame_d6c3d19905fbc273ff3cbb9139bc7c81_12) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST2(mod_consts[122],mod_consts[123]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__12_Kanji_244, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_4 = "o";
            goto frame_exception_exit_12;
        }
        {
            PyObject *tmp_ass_subvalue_10;
            PyObject *tmp_ass_subscribed_10;
            PyObject *tmp_ass_subscript_10;
            tmp_ass_subvalue_10 = PyObject_GetItem(locals_pyparsing$unicode$$$class__12_Kanji_244, mod_consts[64]);

            if (tmp_ass_subvalue_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_10 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_ass_subvalue_10 == NULL)) {
                        tmp_ass_subvalue_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                    }

                    if (tmp_ass_subvalue_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 246;
                        type_description_4 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_ass_subvalue_10);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            tmp_ass_subscribed_10 = PyObject_GetItem(locals_pyparsing$unicode$$$class__12_Kanji_244, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_10);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 246;
                type_description_4 = "o";
                goto frame_exception_exit_12;
            }

            if (tmp_ass_subscribed_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_10);

                exception_lineno = 246;
                type_description_4 = "o";
                goto frame_exception_exit_12;
            }
            tmp_ass_subscript_10 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
            Py_DECREF(tmp_ass_subscribed_10);
            Py_DECREF(tmp_ass_subvalue_10);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_4 = "o";
                goto frame_exception_exit_12;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_9;
        frame_exception_exit_12:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d6c3d19905fbc273ff3cbb9139bc7c81_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d6c3d19905fbc273ff3cbb9139bc7c81_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d6c3d19905fbc273ff3cbb9139bc7c81_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d6c3d19905fbc273ff3cbb9139bc7c81_12,
            type_description_4,
            outline_11_var___class__
        );



        assertFrameObject(frame_d6c3d19905fbc273ff3cbb9139bc7c81_12);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_11;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_11:;
        type_description_3 = "o";
        goto try_except_handler_37;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_38;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
            tmp_cmp_expr_left_8 = tmp_pyparsing_unicode$Japanese$class_creation_1__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig);
            tmp_cmp_expr_right_8 = tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig;
            tmp_condition_result_38 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_38 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_3 = "o";
                goto try_except_handler_37;
            }
            if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
                goto branch_yes_28;
            } else {
                goto branch_no_28;
            }
        }
        branch_yes_28:;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__12_Kanji_244, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_3 = "o";
            goto try_except_handler_37;
        }
        branch_no_28:;
        {
            PyObject *tmp_assign_source_87;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass);
            tmp_called_value_28 = tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass;
            tmp_tuple_element_42 = mod_consts[119];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
            tmp_tuple_element_42 = tmp_pyparsing_unicode$Japanese$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_42);
            tmp_tuple_element_42 = locals_pyparsing$unicode$$$class__12_Kanji_244;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict);
            tmp_kwargs_value_20 = tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict;
            frame_952180b9772e047c3f8efad60e9be5ef_11->m_frame.f_lineno = 244;
            tmp_assign_source_87 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_3 = "o";
                goto try_except_handler_37;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_87;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_dictset_value = outline_11_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_37;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        Py_DECREF(locals_pyparsing$unicode$$$class__12_Kanji_244);
        locals_pyparsing$unicode$$$class__12_Kanji_244 = NULL;
        goto try_return_handler_36;
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__12_Kanji_244);
        locals_pyparsing$unicode$$$class__12_Kanji_244 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto try_except_handler_36;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_36:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 244;
        goto try_except_handler_35;
        outline_result_12:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[119], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_3 = "o";
            goto try_except_handler_35;
        }
        goto try_end_11;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig);
        tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
        tmp_pyparsing_unicode$Japanese$class_creation_1__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict);
        tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass);
        tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__prepared);
        tmp_pyparsing_unicode$Japanese$class_creation_1__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto frame_exception_exit_11;
        // End of try:
        try_end_11:;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig);
        tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
        tmp_pyparsing_unicode$Japanese$class_creation_1__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict);
        tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass);
        tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__prepared);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__prepared);
        tmp_pyparsing_unicode$Japanese$class_creation_1__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_88;
            PyObject *tmp_tuple_element_43;
            tmp_tuple_element_43 = PyObject_GetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[10]);

            if (tmp_tuple_element_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_43 == NULL)) {
                        tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                    }

                    if (tmp_tuple_element_43 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 251;
                        type_description_3 = "o";
                        goto try_except_handler_38;
                    }
                    Py_INCREF(tmp_tuple_element_43);
                } else {
                    goto try_except_handler_38;
                }
            }

            tmp_assign_source_88 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_88, 0, tmp_tuple_element_43);
            assert(tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig = tmp_assign_source_88;
        }
        {
            PyObject *tmp_assign_source_89;
            PyObject *tmp_dircall_arg1_11;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig);
            tmp_dircall_arg1_11 = tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig;
            Py_INCREF(tmp_dircall_arg1_11);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
                tmp_assign_source_89 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_2__bases == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_2__bases = tmp_assign_source_89;
        }
        {
            PyObject *tmp_assign_source_90;
            tmp_assign_source_90 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict = tmp_assign_source_90;
        }
        {
            PyObject *tmp_assign_source_91;
            PyObject *tmp_metaclass_value_11;
            nuitka_bool tmp_condition_result_39;
            int tmp_truth_name_11;
            PyObject *tmp_type_arg_21;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_bases_value_11;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
            tmp_truth_name_11 = CHECK_IF_TRUE(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
            if (tmp_truth_name_11 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            tmp_condition_result_39 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
            tmp_expression_value_66 = tmp_pyparsing_unicode$Japanese$class_creation_2__bases;
            tmp_subscript_value_15 = mod_consts[15];
            tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_66, tmp_subscript_value_15, 0);
            if (tmp_type_arg_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
            Py_DECREF(tmp_type_arg_21);
            if (tmp_metaclass_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_11);
            condexpr_end_11:;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
            tmp_bases_value_11 = tmp_pyparsing_unicode$Japanese$class_creation_2__bases;
            tmp_assign_source_91 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
            Py_DECREF(tmp_metaclass_value_11);
            if (tmp_assign_source_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass = tmp_assign_source_91;
        }
        {
            bool tmp_condition_result_40;
            PyObject *tmp_expression_value_67;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass);
            tmp_expression_value_67 = tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_67, mod_consts[78]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            tmp_condition_result_40 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_40 != false) {
                goto branch_yes_29;
            } else {
                goto branch_no_29;
            }
        }
        branch_yes_29:;
        {
            PyObject *tmp_assign_source_92;
            PyObject *tmp_called_value_29;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_args_value_21;
            PyObject *tmp_tuple_element_44;
            PyObject *tmp_kwargs_value_21;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass);
            tmp_expression_value_68 = tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass;
            tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[78]);
            if (tmp_called_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            tmp_tuple_element_44 = mod_consts[124];
            tmp_args_value_21 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_44);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
            tmp_tuple_element_44 = tmp_pyparsing_unicode$Japanese$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_44);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict);
            tmp_kwargs_value_21 = tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict;
            frame_952180b9772e047c3f8efad60e9be5ef_11->m_frame.f_lineno = 251;
            tmp_assign_source_92 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_21, tmp_kwargs_value_21);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_value_21);
            if (tmp_assign_source_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_2__prepared == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_2__prepared = tmp_assign_source_92;
        }
        {
            bool tmp_condition_result_41;
            PyObject *tmp_operand_value_11;
            PyObject *tmp_expression_value_69;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__prepared);
            tmp_expression_value_69 = tmp_pyparsing_unicode$Japanese$class_creation_2__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_69, mod_consts[80]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
            assert(!(tmp_res == -1));
            tmp_condition_result_41 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_41 != false) {
                goto branch_yes_30;
            } else {
                goto branch_no_30;
            }
        }
        branch_yes_30:;
        {
            PyObject *tmp_raise_type_11;
            PyObject *tmp_raise_value_11;
            PyObject *tmp_mod_expr_left_11;
            PyObject *tmp_mod_expr_right_11;
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_name_value_12;
            PyObject *tmp_default_value_11;
            tmp_raise_type_11 = PyExc_TypeError;
            tmp_mod_expr_left_11 = mod_consts[81];
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass);
            tmp_expression_value_70 = tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass;
            tmp_name_value_12 = mod_consts[2];
            tmp_default_value_11 = mod_consts[82];
            tmp_tuple_element_45 = BUILTIN_GETATTR(tstate, tmp_expression_value_70, tmp_name_value_12, tmp_default_value_11);
            if (tmp_tuple_element_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_71;
                PyObject *tmp_type_arg_22;
                PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_45);
                CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__prepared);
                tmp_type_arg_22 = tmp_pyparsing_unicode$Japanese$class_creation_2__prepared;
                tmp_expression_value_71 = BUILTIN_TYPE1(tmp_type_arg_22);
                assert(!(tmp_expression_value_71 == NULL));
                tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[2]);
                Py_DECREF(tmp_expression_value_71);
                if (tmp_tuple_element_45 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 251;
                    type_description_3 = "o";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_45);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_mod_expr_right_11);
            goto try_except_handler_38;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
            Py_DECREF(tmp_mod_expr_right_11);
            if (tmp_raise_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            exception_type = tmp_raise_type_11;
            Py_INCREF(tmp_raise_type_11);
            exception_value = tmp_raise_value_11;
            exception_lineno = 251;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_3 = "o";
            goto try_except_handler_38;
        }
        branch_no_30:;
        goto branch_end_29;
        branch_no_29:;
        {
            PyObject *tmp_assign_source_93;
            tmp_assign_source_93 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$Japanese$class_creation_2__prepared == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_2__prepared = tmp_assign_source_93;
        }
        branch_end_29:;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__prepared);
            tmp_set_locals_13 = tmp_pyparsing_unicode$Japanese$class_creation_2__prepared;
            locals_pyparsing$unicode$$$class__13_Hiragana_251 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__13_Hiragana_251, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_3 = "o";
            goto try_except_handler_40;
        }
        tmp_dictset_value = mod_consts[125];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__13_Hiragana_251, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_3 = "o";
            goto try_except_handler_40;
        }
        tmp_dictset_value = mod_consts[126];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__13_Hiragana_251, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_3 = "o";
            goto try_except_handler_40;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__13_Hiragana_251, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_3 = "o";
            goto try_except_handler_40;
        }
        frame_3e462fbef99409351edbc1c471764323_13 = MAKE_CLASS_FRAME(tstate, codeobj_3e462fbef99409351edbc1c471764323, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_3e462fbef99409351edbc1c471764323_13);
        assert(Py_REFCNT(frame_3e462fbef99409351edbc1c471764323_13) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST7(mod_consts[127]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__13_Hiragana_251, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_4 = "o";
            goto frame_exception_exit_13;
        }
        {
            PyObject *tmp_ass_subvalue_11;
            PyObject *tmp_ass_subscribed_11;
            PyObject *tmp_ass_subscript_11;
            tmp_ass_subvalue_11 = PyObject_GetItem(locals_pyparsing$unicode$$$class__13_Hiragana_251, mod_consts[64]);

            if (tmp_ass_subvalue_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_11 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_ass_subvalue_11 == NULL)) {
                        tmp_ass_subvalue_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                    }

                    if (tmp_ass_subvalue_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 253;
                        type_description_4 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_ass_subvalue_11);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            tmp_ass_subscribed_11 = PyObject_GetItem(locals_pyparsing$unicode$$$class__13_Hiragana_251, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_11);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 253;
                type_description_4 = "o";
                goto frame_exception_exit_13;
            }

            if (tmp_ass_subscribed_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_11);

                exception_lineno = 253;
                type_description_4 = "o";
                goto frame_exception_exit_13;
            }
            tmp_ass_subscript_11 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
            Py_DECREF(tmp_ass_subscribed_11);
            Py_DECREF(tmp_ass_subvalue_11);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_4 = "o";
                goto frame_exception_exit_13;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_10;
        frame_exception_exit_13:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3e462fbef99409351edbc1c471764323_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3e462fbef99409351edbc1c471764323_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3e462fbef99409351edbc1c471764323_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3e462fbef99409351edbc1c471764323_13,
            type_description_4,
            outline_12_var___class__
        );



        assertFrameObject(frame_3e462fbef99409351edbc1c471764323_13);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_12;
        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_12:;
        type_description_3 = "o";
        goto try_except_handler_40;
        skip_nested_handling_10:;
        {
            nuitka_bool tmp_condition_result_42;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
            tmp_cmp_expr_left_9 = tmp_pyparsing_unicode$Japanese$class_creation_2__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig);
            tmp_cmp_expr_right_9 = tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig;
            tmp_condition_result_42 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_3 = "o";
                goto try_except_handler_40;
            }
            if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
                goto branch_yes_31;
            } else {
                goto branch_no_31;
            }
        }
        branch_yes_31:;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__13_Hiragana_251, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_3 = "o";
            goto try_except_handler_40;
        }
        branch_no_31:;
        {
            PyObject *tmp_assign_source_94;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_kwargs_value_22;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass);
            tmp_called_value_30 = tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass;
            tmp_tuple_element_46 = mod_consts[124];
            tmp_args_value_22 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
            tmp_tuple_element_46 = tmp_pyparsing_unicode$Japanese$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_46);
            tmp_tuple_element_46 = locals_pyparsing$unicode$$$class__13_Hiragana_251;
            PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict);
            tmp_kwargs_value_22 = tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict;
            frame_952180b9772e047c3f8efad60e9be5ef_11->m_frame.f_lineno = 251;
            tmp_assign_source_94 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_22, tmp_kwargs_value_22);
            Py_DECREF(tmp_args_value_22);
            if (tmp_assign_source_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_3 = "o";
                goto try_except_handler_40;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_94;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_dictset_value = outline_12_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_40;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_40:;
        Py_DECREF(locals_pyparsing$unicode$$$class__13_Hiragana_251);
        locals_pyparsing$unicode$$$class__13_Hiragana_251 = NULL;
        goto try_return_handler_39;
        // Exception handler code:
        try_except_handler_40:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__13_Hiragana_251);
        locals_pyparsing$unicode$$$class__13_Hiragana_251 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto try_except_handler_39;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_39:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_39:;
        exception_keeper_type_33 = exception_type;
        exception_keeper_value_33 = exception_value;
        exception_keeper_tb_33 = exception_tb;
        exception_keeper_lineno_33 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;
        exception_lineno = exception_keeper_lineno_33;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 251;
        goto try_except_handler_38;
        outline_result_13:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[124], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_3 = "o";
            goto try_except_handler_38;
        }
        goto try_end_12;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig);
        tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
        tmp_pyparsing_unicode$Japanese$class_creation_2__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict);
        tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass);
        tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__prepared);
        tmp_pyparsing_unicode$Japanese$class_creation_2__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto frame_exception_exit_11;
        // End of try:
        try_end_12:;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig);
        tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
        tmp_pyparsing_unicode$Japanese$class_creation_2__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict);
        tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass);
        tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__prepared);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__prepared);
        tmp_pyparsing_unicode$Japanese$class_creation_2__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_95;
            PyObject *tmp_tuple_element_47;
            tmp_tuple_element_47 = PyObject_GetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[10]);

            if (tmp_tuple_element_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_47 == NULL)) {
                        tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                    }

                    if (tmp_tuple_element_47 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 263;
                        type_description_3 = "o";
                        goto try_except_handler_41;
                    }
                    Py_INCREF(tmp_tuple_element_47);
                } else {
                    goto try_except_handler_41;
                }
            }

            tmp_assign_source_95 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_95, 0, tmp_tuple_element_47);
            assert(tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig = tmp_assign_source_95;
        }
        {
            PyObject *tmp_assign_source_96;
            PyObject *tmp_dircall_arg1_12;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig);
            tmp_dircall_arg1_12 = tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig;
            Py_INCREF(tmp_dircall_arg1_12);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_12};
                tmp_assign_source_96 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_3 = "o";
                goto try_except_handler_41;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_3__bases == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_3__bases = tmp_assign_source_96;
        }
        {
            PyObject *tmp_assign_source_97;
            tmp_assign_source_97 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict = tmp_assign_source_97;
        }
        {
            PyObject *tmp_assign_source_98;
            PyObject *tmp_metaclass_value_12;
            nuitka_bool tmp_condition_result_43;
            int tmp_truth_name_12;
            PyObject *tmp_type_arg_23;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_bases_value_12;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
            tmp_truth_name_12 = CHECK_IF_TRUE(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
            if (tmp_truth_name_12 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_3 = "o";
                goto try_except_handler_41;
            }
            tmp_condition_result_43 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_43 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
            tmp_expression_value_72 = tmp_pyparsing_unicode$Japanese$class_creation_3__bases;
            tmp_subscript_value_16 = mod_consts[15];
            tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_72, tmp_subscript_value_16, 0);
            if (tmp_type_arg_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_3 = "o";
                goto try_except_handler_41;
            }
            tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
            Py_DECREF(tmp_type_arg_23);
            if (tmp_metaclass_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_3 = "o";
                goto try_except_handler_41;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_12);
            condexpr_end_12:;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
            tmp_bases_value_12 = tmp_pyparsing_unicode$Japanese$class_creation_3__bases;
            tmp_assign_source_98 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
            Py_DECREF(tmp_metaclass_value_12);
            if (tmp_assign_source_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_3 = "o";
                goto try_except_handler_41;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass = tmp_assign_source_98;
        }
        {
            bool tmp_condition_result_44;
            PyObject *tmp_expression_value_73;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass);
            tmp_expression_value_73 = tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_73, mod_consts[78]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_3 = "o";
                goto try_except_handler_41;
            }
            tmp_condition_result_44 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_44 != false) {
                goto branch_yes_32;
            } else {
                goto branch_no_32;
            }
        }
        branch_yes_32:;
        {
            PyObject *tmp_assign_source_99;
            PyObject *tmp_called_value_31;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_args_value_23;
            PyObject *tmp_tuple_element_48;
            PyObject *tmp_kwargs_value_23;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass);
            tmp_expression_value_74 = tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass;
            tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[78]);
            if (tmp_called_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_3 = "o";
                goto try_except_handler_41;
            }
            tmp_tuple_element_48 = mod_consts[128];
            tmp_args_value_23 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_48);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
            tmp_tuple_element_48 = tmp_pyparsing_unicode$Japanese$class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_48);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict);
            tmp_kwargs_value_23 = tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict;
            frame_952180b9772e047c3f8efad60e9be5ef_11->m_frame.f_lineno = 263;
            tmp_assign_source_99 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_23, tmp_kwargs_value_23);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_value_23);
            if (tmp_assign_source_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_3 = "o";
                goto try_except_handler_41;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_3__prepared == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_3__prepared = tmp_assign_source_99;
        }
        {
            bool tmp_condition_result_45;
            PyObject *tmp_operand_value_12;
            PyObject *tmp_expression_value_75;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__prepared);
            tmp_expression_value_75 = tmp_pyparsing_unicode$Japanese$class_creation_3__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_75, mod_consts[80]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_3 = "o";
                goto try_except_handler_41;
            }
            tmp_operand_value_12 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
            assert(!(tmp_res == -1));
            tmp_condition_result_45 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_45 != false) {
                goto branch_yes_33;
            } else {
                goto branch_no_33;
            }
        }
        branch_yes_33:;
        {
            PyObject *tmp_raise_type_12;
            PyObject *tmp_raise_value_12;
            PyObject *tmp_mod_expr_left_12;
            PyObject *tmp_mod_expr_right_12;
            PyObject *tmp_tuple_element_49;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_name_value_13;
            PyObject *tmp_default_value_12;
            tmp_raise_type_12 = PyExc_TypeError;
            tmp_mod_expr_left_12 = mod_consts[81];
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass);
            tmp_expression_value_76 = tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass;
            tmp_name_value_13 = mod_consts[2];
            tmp_default_value_12 = mod_consts[82];
            tmp_tuple_element_49 = BUILTIN_GETATTR(tstate, tmp_expression_value_76, tmp_name_value_13, tmp_default_value_12);
            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_3 = "o";
                goto try_except_handler_41;
            }
            tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_77;
                PyObject *tmp_type_arg_24;
                PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_49);
                CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__prepared);
                tmp_type_arg_24 = tmp_pyparsing_unicode$Japanese$class_creation_3__prepared;
                tmp_expression_value_77 = BUILTIN_TYPE1(tmp_type_arg_24);
                assert(!(tmp_expression_value_77 == NULL));
                tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[2]);
                Py_DECREF(tmp_expression_value_77);
                if (tmp_tuple_element_49 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 263;
                    type_description_3 = "o";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_49);
            }
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_mod_expr_right_12);
            goto try_except_handler_41;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
            Py_DECREF(tmp_mod_expr_right_12);
            if (tmp_raise_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_3 = "o";
                goto try_except_handler_41;
            }
            exception_type = tmp_raise_type_12;
            Py_INCREF(tmp_raise_type_12);
            exception_value = tmp_raise_value_12;
            exception_lineno = 263;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_3 = "o";
            goto try_except_handler_41;
        }
        branch_no_33:;
        goto branch_end_32;
        branch_no_32:;
        {
            PyObject *tmp_assign_source_100;
            tmp_assign_source_100 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$Japanese$class_creation_3__prepared == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_3__prepared = tmp_assign_source_100;
        }
        branch_end_32:;
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__prepared);
            tmp_set_locals_14 = tmp_pyparsing_unicode$Japanese$class_creation_3__prepared;
            locals_pyparsing$unicode$$$class__14_Katakana_263 = tmp_set_locals_14;
            Py_INCREF(tmp_set_locals_14);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__14_Katakana_263, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_3 = "o";
            goto try_except_handler_43;
        }
        tmp_dictset_value = mod_consts[129];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__14_Katakana_263, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_3 = "o";
            goto try_except_handler_43;
        }
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__14_Katakana_263, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_3 = "o";
            goto try_except_handler_43;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__14_Katakana_263, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_3 = "o";
            goto try_except_handler_43;
        }
        frame_4b235e179950cb1ae83a97055f675300_14 = MAKE_CLASS_FRAME(tstate, codeobj_4b235e179950cb1ae83a97055f675300, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_4b235e179950cb1ae83a97055f675300_14);
        assert(Py_REFCNT(frame_4b235e179950cb1ae83a97055f675300_14) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST9(mod_consts[131]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__14_Katakana_263, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_4 = "o";
            goto frame_exception_exit_14;
        }
        {
            PyObject *tmp_ass_subvalue_12;
            PyObject *tmp_ass_subscribed_12;
            PyObject *tmp_ass_subscript_12;
            tmp_ass_subvalue_12 = PyObject_GetItem(locals_pyparsing$unicode$$$class__14_Katakana_263, mod_consts[64]);

            if (tmp_ass_subvalue_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_12 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_ass_subvalue_12 == NULL)) {
                        tmp_ass_subvalue_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                    }

                    if (tmp_ass_subvalue_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 265;
                        type_description_4 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_ass_subvalue_12);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            tmp_ass_subscribed_12 = PyObject_GetItem(locals_pyparsing$unicode$$$class__14_Katakana_263, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_12);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 265;
                type_description_4 = "o";
                goto frame_exception_exit_14;
            }

            if (tmp_ass_subscribed_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_12);

                exception_lineno = 265;
                type_description_4 = "o";
                goto frame_exception_exit_14;
            }
            tmp_ass_subscript_12 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
            Py_DECREF(tmp_ass_subscribed_12);
            Py_DECREF(tmp_ass_subvalue_12);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_4 = "o";
                goto frame_exception_exit_14;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_11;
        frame_exception_exit_14:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4b235e179950cb1ae83a97055f675300_14, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4b235e179950cb1ae83a97055f675300_14->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4b235e179950cb1ae83a97055f675300_14, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4b235e179950cb1ae83a97055f675300_14,
            type_description_4,
            outline_13_var___class__
        );



        assertFrameObject(frame_4b235e179950cb1ae83a97055f675300_14);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_13;
        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_13:;
        type_description_3 = "o";
        goto try_except_handler_43;
        skip_nested_handling_11:;
        {
            nuitka_bool tmp_condition_result_46;
            PyObject *tmp_cmp_expr_left_10;
            PyObject *tmp_cmp_expr_right_10;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
            tmp_cmp_expr_left_10 = tmp_pyparsing_unicode$Japanese$class_creation_3__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig);
            tmp_cmp_expr_right_10 = tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig;
            tmp_condition_result_46 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
            if (tmp_condition_result_46 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_3 = "o";
                goto try_except_handler_43;
            }
            if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
                goto branch_yes_34;
            } else {
                goto branch_no_34;
            }
        }
        branch_yes_34:;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__14_Katakana_263, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_3 = "o";
            goto try_except_handler_43;
        }
        branch_no_34:;
        {
            PyObject *tmp_assign_source_101;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_value_24;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_kwargs_value_24;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass);
            tmp_called_value_32 = tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass;
            tmp_tuple_element_50 = mod_consts[128];
            tmp_args_value_24 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
            tmp_tuple_element_50 = tmp_pyparsing_unicode$Japanese$class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_50);
            tmp_tuple_element_50 = locals_pyparsing$unicode$$$class__14_Katakana_263;
            PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict);
            tmp_kwargs_value_24 = tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict;
            frame_952180b9772e047c3f8efad60e9be5ef_11->m_frame.f_lineno = 263;
            tmp_assign_source_101 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_24, tmp_kwargs_value_24);
            Py_DECREF(tmp_args_value_24);
            if (tmp_assign_source_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_3 = "o";
                goto try_except_handler_43;
            }
            assert(outline_13_var___class__ == NULL);
            outline_13_var___class__ = tmp_assign_source_101;
        }
        CHECK_OBJECT(outline_13_var___class__);
        tmp_dictset_value = outline_13_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_43;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_43:;
        Py_DECREF(locals_pyparsing$unicode$$$class__14_Katakana_263);
        locals_pyparsing$unicode$$$class__14_Katakana_263 = NULL;
        goto try_return_handler_42;
        // Exception handler code:
        try_except_handler_43:;
        exception_keeper_type_35 = exception_type;
        exception_keeper_value_35 = exception_value;
        exception_keeper_tb_35 = exception_tb;
        exception_keeper_lineno_35 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__14_Katakana_263);
        locals_pyparsing$unicode$$$class__14_Katakana_263 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

        goto try_except_handler_42;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_42:;
        CHECK_OBJECT(outline_13_var___class__);
        Py_DECREF(outline_13_var___class__);
        outline_13_var___class__ = NULL;
        goto outline_result_14;
        // Exception handler code:
        try_except_handler_42:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto outline_exception_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_14:;
        exception_lineno = 263;
        goto try_except_handler_41;
        outline_result_14:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[128], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_3 = "o";
            goto try_except_handler_41;
        }
        goto try_end_13;
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig);
        tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
        tmp_pyparsing_unicode$Japanese$class_creation_3__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict);
        tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass);
        tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__prepared);
        tmp_pyparsing_unicode$Japanese$class_creation_3__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;
        exception_lineno = exception_keeper_lineno_37;

        goto frame_exception_exit_11;
        // End of try:
        try_end_13:;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig);
        tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
        tmp_pyparsing_unicode$Japanese$class_creation_3__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict);
        tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass);
        tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__prepared);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__prepared);
        tmp_pyparsing_unicode$Japanese$class_creation_3__prepared = NULL;
        tmp_dictset_value = PyObject_GetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[119]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[119]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 277;
            type_description_3 = "o";
            goto frame_exception_exit_11;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_3 = "o";
            goto frame_exception_exit_11;
        }
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[132], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_3 = "o";
            goto frame_exception_exit_11;
        }
        tmp_dictset_value = PyObject_GetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[128]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[128]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 278;
            type_description_3 = "o";
            goto frame_exception_exit_11;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_3 = "o";
            goto frame_exception_exit_11;
        }
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[133], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_3 = "o";
            goto frame_exception_exit_11;
        }
        tmp_dictset_value = PyObject_GetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[124]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[124]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 279;
            type_description_3 = "o";
            goto frame_exception_exit_11;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_3 = "o";
            goto frame_exception_exit_11;
        }
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[134], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_3 = "o";
            goto frame_exception_exit_11;
        }
        {
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_expression_value_80;
            tmp_expression_value_78 = PyObject_GetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[119]);

            if (unlikely(tmp_expression_value_78 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[119]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 282;
                type_description_3 = "o";
                goto frame_exception_exit_11;
            }

            if (tmp_expression_value_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_3 = "o";
                goto frame_exception_exit_11;
            }
            tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[11]);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_add_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_3 = "o";
                goto frame_exception_exit_11;
            }
            tmp_expression_value_79 = PyObject_GetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[124]);

            if (unlikely(tmp_expression_value_79 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_add_expr_left_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[124]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 283;
                type_description_3 = "o";
                goto frame_exception_exit_11;
            }

            if (tmp_expression_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 283;
                type_description_3 = "o";
                goto frame_exception_exit_11;
            }
            tmp_add_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[11]);
            Py_DECREF(tmp_expression_value_79);
            if (tmp_add_expr_right_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 283;
                type_description_3 = "o";
                goto frame_exception_exit_11;
            }
            tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
            Py_DECREF(tmp_add_expr_left_2);
            Py_DECREF(tmp_add_expr_right_2);
            if (tmp_add_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_3 = "o";
                goto frame_exception_exit_11;
            }
            tmp_expression_value_80 = PyObject_GetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[128]);

            if (unlikely(tmp_expression_value_80 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_add_expr_left_1);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[128]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 284;
                type_description_3 = "o";
                goto frame_exception_exit_11;
            }

            if (tmp_expression_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 284;
                type_description_3 = "o";
                goto frame_exception_exit_11;
            }
            tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[11]);
            Py_DECREF(tmp_expression_value_80);
            if (tmp_add_expr_right_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 284;
                type_description_3 = "o";
                goto frame_exception_exit_11;
            }
            tmp_dictset_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_add_expr_right_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_3 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_3 = "o";
                goto frame_exception_exit_11;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_12;
        frame_exception_exit_11:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_952180b9772e047c3f8efad60e9be5ef_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_952180b9772e047c3f8efad60e9be5ef_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_952180b9772e047c3f8efad60e9be5ef_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_952180b9772e047c3f8efad60e9be5ef_11,
            type_description_3,
            outline_10_var___class__
        );



        assertFrameObject(frame_952180b9772e047c3f8efad60e9be5ef_11);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_10;
        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_10:;
        type_description_2 = "o";
        goto try_except_handler_34;
        skip_nested_handling_12:;
        {
            nuitka_bool tmp_condition_result_47;
            PyObject *tmp_cmp_expr_left_11;
            PyObject *tmp_cmp_expr_right_11;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases);
            tmp_cmp_expr_left_11 = tmp_pyparsing_unicode$class_creation_8__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases_orig);
            tmp_cmp_expr_right_11 = tmp_pyparsing_unicode$class_creation_8__bases_orig;
            tmp_condition_result_47 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
            if (tmp_condition_result_47 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto try_except_handler_34;
            }
            if (tmp_condition_result_47 == NUITKA_BOOL_TRUE) {
                goto branch_yes_35;
            } else {
                goto branch_no_35;
            }
        }
        branch_yes_35:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__11_Japanese_241, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_2 = "o";
            goto try_except_handler_34;
        }
        branch_no_35:;
        {
            PyObject *tmp_assign_source_102;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_value_25;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_kwargs_value_25;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__metaclass);
            tmp_called_value_33 = tmp_pyparsing_unicode$class_creation_8__metaclass;
            tmp_tuple_element_51 = mod_consts[116];
            tmp_args_value_25 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases);
            tmp_tuple_element_51 = tmp_pyparsing_unicode$class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_51);
            tmp_tuple_element_51 = locals_pyparsing$unicode$$$class__11_Japanese_241;
            PyTuple_SET_ITEM0(tmp_args_value_25, 2, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__class_decl_dict);
            tmp_kwargs_value_25 = tmp_pyparsing_unicode$class_creation_8__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 241;
            tmp_assign_source_102 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_25, tmp_kwargs_value_25);
            Py_DECREF(tmp_args_value_25);
            if (tmp_assign_source_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto try_except_handler_34;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_102;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_dictset_value = outline_10_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_34;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        Py_DECREF(locals_pyparsing$unicode$$$class__11_Japanese_241);
        locals_pyparsing$unicode$$$class__11_Japanese_241 = NULL;
        goto try_return_handler_33;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_38 = exception_type;
        exception_keeper_value_38 = exception_value;
        exception_keeper_tb_38 = exception_tb;
        exception_keeper_lineno_38 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__11_Japanese_241);
        locals_pyparsing$unicode$$$class__11_Japanese_241 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;
        exception_lineno = exception_keeper_lineno_38;

        goto try_except_handler_33;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_39 = exception_type;
        exception_keeper_value_39 = exception_value;
        exception_keeper_tb_39 = exception_tb;
        exception_keeper_lineno_39 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;
        exception_lineno = exception_keeper_lineno_39;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 241;
        goto try_except_handler_32;
        outline_result_11:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[116], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_2 = "o";
            goto try_except_handler_32;
        }
        goto try_end_14;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_40 = exception_type;
        exception_keeper_value_40 = exception_value;
        exception_keeper_tb_40 = exception_tb;
        exception_keeper_lineno_40 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_8__bases_orig);
        tmp_pyparsing_unicode$class_creation_8__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_8__bases);
        tmp_pyparsing_unicode$class_creation_8__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_8__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_8__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_8__metaclass);
        tmp_pyparsing_unicode$class_creation_8__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_8__prepared);
        tmp_pyparsing_unicode$class_creation_8__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_40;
        exception_value = exception_keeper_value_40;
        exception_tb = exception_keeper_tb_40;
        exception_lineno = exception_keeper_lineno_40;

        goto frame_exception_exit_3;
        // End of try:
        try_end_14:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_8__bases_orig);
        tmp_pyparsing_unicode$class_creation_8__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_8__bases);
        tmp_pyparsing_unicode$class_creation_8__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_8__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_8__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_8__metaclass);
        tmp_pyparsing_unicode$class_creation_8__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_8__prepared);
        tmp_pyparsing_unicode$class_creation_8__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_103;
            PyObject *tmp_tuple_element_52;
            tmp_tuple_element_52 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[10]);

            if (tmp_tuple_element_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_52 == NULL)) {
                        tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                    }

                    if (tmp_tuple_element_52 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 287;
                        type_description_2 = "o";
                        goto try_except_handler_44;
                    }
                    Py_INCREF(tmp_tuple_element_52);
                } else {
                    goto try_except_handler_44;
                }
            }

            tmp_assign_source_103 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_103, 0, tmp_tuple_element_52);
            assert(tmp_pyparsing_unicode$class_creation_9__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_9__bases_orig = tmp_assign_source_103;
        }
        {
            PyObject *tmp_assign_source_104;
            PyObject *tmp_dircall_arg1_13;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases_orig);
            tmp_dircall_arg1_13 = tmp_pyparsing_unicode$class_creation_9__bases_orig;
            Py_INCREF(tmp_dircall_arg1_13);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_13};
                tmp_assign_source_104 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            assert(tmp_pyparsing_unicode$class_creation_9__bases == NULL);
            tmp_pyparsing_unicode$class_creation_9__bases = tmp_assign_source_104;
        }
        {
            PyObject *tmp_assign_source_105;
            tmp_assign_source_105 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_9__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_9__class_decl_dict = tmp_assign_source_105;
        }
        {
            PyObject *tmp_assign_source_106;
            PyObject *tmp_metaclass_value_13;
            nuitka_bool tmp_condition_result_48;
            int tmp_truth_name_13;
            PyObject *tmp_type_arg_25;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_bases_value_13;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases);
            tmp_truth_name_13 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_9__bases);
            if (tmp_truth_name_13 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            tmp_condition_result_48 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases);
            tmp_expression_value_81 = tmp_pyparsing_unicode$class_creation_9__bases;
            tmp_subscript_value_17 = mod_consts[15];
            tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_81, tmp_subscript_value_17, 0);
            if (tmp_type_arg_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
            Py_DECREF(tmp_type_arg_25);
            if (tmp_metaclass_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_13);
            condexpr_end_13:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases);
            tmp_bases_value_13 = tmp_pyparsing_unicode$class_creation_9__bases;
            tmp_assign_source_106 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
            Py_DECREF(tmp_metaclass_value_13);
            if (tmp_assign_source_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            assert(tmp_pyparsing_unicode$class_creation_9__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_9__metaclass = tmp_assign_source_106;
        }
        {
            bool tmp_condition_result_49;
            PyObject *tmp_expression_value_82;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__metaclass);
            tmp_expression_value_82 = tmp_pyparsing_unicode$class_creation_9__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_82, mod_consts[78]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            tmp_condition_result_49 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_49 != false) {
                goto branch_yes_36;
            } else {
                goto branch_no_36;
            }
        }
        branch_yes_36:;
        {
            PyObject *tmp_assign_source_107;
            PyObject *tmp_called_value_34;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_args_value_26;
            PyObject *tmp_tuple_element_53;
            PyObject *tmp_kwargs_value_26;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__metaclass);
            tmp_expression_value_83 = tmp_pyparsing_unicode$class_creation_9__metaclass;
            tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[78]);
            if (tmp_called_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            tmp_tuple_element_53 = mod_consts[135];
            tmp_args_value_26 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_53);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases);
            tmp_tuple_element_53 = tmp_pyparsing_unicode$class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_53);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__class_decl_dict);
            tmp_kwargs_value_26 = tmp_pyparsing_unicode$class_creation_9__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 287;
            tmp_assign_source_107 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_26, tmp_kwargs_value_26);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_value_26);
            if (tmp_assign_source_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            assert(tmp_pyparsing_unicode$class_creation_9__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_9__prepared = tmp_assign_source_107;
        }
        {
            bool tmp_condition_result_50;
            PyObject *tmp_operand_value_13;
            PyObject *tmp_expression_value_84;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__prepared);
            tmp_expression_value_84 = tmp_pyparsing_unicode$class_creation_9__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_84, mod_consts[80]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            tmp_operand_value_13 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
            assert(!(tmp_res == -1));
            tmp_condition_result_50 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_50 != false) {
                goto branch_yes_37;
            } else {
                goto branch_no_37;
            }
        }
        branch_yes_37:;
        {
            PyObject *tmp_raise_type_13;
            PyObject *tmp_raise_value_13;
            PyObject *tmp_mod_expr_left_13;
            PyObject *tmp_mod_expr_right_13;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_name_value_14;
            PyObject *tmp_default_value_13;
            tmp_raise_type_13 = PyExc_TypeError;
            tmp_mod_expr_left_13 = mod_consts[81];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__metaclass);
            tmp_expression_value_85 = tmp_pyparsing_unicode$class_creation_9__metaclass;
            tmp_name_value_14 = mod_consts[2];
            tmp_default_value_13 = mod_consts[82];
            tmp_tuple_element_54 = BUILTIN_GETATTR(tstate, tmp_expression_value_85, tmp_name_value_14, tmp_default_value_13);
            if (tmp_tuple_element_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_86;
                PyObject *tmp_type_arg_26;
                PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_54);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__prepared);
                tmp_type_arg_26 = tmp_pyparsing_unicode$class_creation_9__prepared;
                tmp_expression_value_86 = BUILTIN_TYPE1(tmp_type_arg_26);
                assert(!(tmp_expression_value_86 == NULL));
                tmp_tuple_element_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[2]);
                Py_DECREF(tmp_expression_value_86);
                if (tmp_tuple_element_54 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;
                    type_description_2 = "o";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_54);
            }
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_mod_expr_right_13);
            goto try_except_handler_44;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
            Py_DECREF(tmp_mod_expr_right_13);
            if (tmp_raise_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            exception_type = tmp_raise_type_13;
            Py_INCREF(tmp_raise_type_13);
            exception_value = tmp_raise_value_13;
            exception_lineno = 287;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_44;
        }
        branch_no_37:;
        goto branch_end_36;
        branch_no_36:;
        {
            PyObject *tmp_assign_source_108;
            tmp_assign_source_108 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_9__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_9__prepared = tmp_assign_source_108;
        }
        branch_end_36:;
        {
            PyObject *tmp_set_locals_15;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__prepared);
            tmp_set_locals_15 = tmp_pyparsing_unicode$class_creation_9__prepared;
            locals_pyparsing$unicode$$$class__15_Hangul_287 = tmp_set_locals_15;
            Py_INCREF(tmp_set_locals_15);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__15_Hangul_287, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_2 = "o";
            goto try_except_handler_46;
        }
        tmp_dictset_value = mod_consts[136];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__15_Hangul_287, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_2 = "o";
            goto try_except_handler_46;
        }
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__15_Hangul_287, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_2 = "o";
            goto try_except_handler_46;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__15_Hangul_287, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_2 = "o";
            goto try_except_handler_46;
        }
        frame_79982aa901d07e740c30126b3e86b4e2_15 = MAKE_CLASS_FRAME(tstate, codeobj_79982aa901d07e740c30126b3e86b4e2, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_79982aa901d07e740c30126b3e86b4e2_15);
        assert(Py_REFCNT(frame_79982aa901d07e740c30126b3e86b4e2_15) == 2);

        // Framed code:
        tmp_dictset_value = LIST_COPY(mod_consts[138]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__15_Hangul_287, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_3 = "o";
            goto frame_exception_exit_15;
        }
        {
            PyObject *tmp_ass_subvalue_13;
            PyObject *tmp_ass_subscribed_13;
            PyObject *tmp_ass_subscript_13;
            tmp_ass_subvalue_13 = PyObject_GetItem(locals_pyparsing$unicode$$$class__15_Hangul_287, mod_consts[64]);

            if (tmp_ass_subvalue_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_13 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_ass_subvalue_13 == NULL)) {
                        tmp_ass_subvalue_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                    }

                    if (tmp_ass_subvalue_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 289;
                        type_description_3 = "o";
                        goto frame_exception_exit_15;
                    }
                    Py_INCREF(tmp_ass_subvalue_13);
                } else {
                    goto frame_exception_exit_15;
                }
            }

            tmp_ass_subscribed_13 = PyObject_GetItem(locals_pyparsing$unicode$$$class__15_Hangul_287, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_13);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 289;
                type_description_3 = "o";
                goto frame_exception_exit_15;
            }

            if (tmp_ass_subscribed_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_13);

                exception_lineno = 289;
                type_description_3 = "o";
                goto frame_exception_exit_15;
            }
            tmp_ass_subscript_13 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
            Py_DECREF(tmp_ass_subscribed_13);
            Py_DECREF(tmp_ass_subvalue_13);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_3 = "o";
                goto frame_exception_exit_15;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_13;
        frame_exception_exit_15:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_79982aa901d07e740c30126b3e86b4e2_15, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_79982aa901d07e740c30126b3e86b4e2_15->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_79982aa901d07e740c30126b3e86b4e2_15, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_79982aa901d07e740c30126b3e86b4e2_15,
            type_description_3,
            outline_14_var___class__
        );



        assertFrameObject(frame_79982aa901d07e740c30126b3e86b4e2_15);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_14;
        frame_no_exception_13:;
        goto skip_nested_handling_13;
        nested_frame_exit_14:;
        type_description_2 = "o";
        goto try_except_handler_46;
        skip_nested_handling_13:;
        {
            nuitka_bool tmp_condition_result_51;
            PyObject *tmp_cmp_expr_left_12;
            PyObject *tmp_cmp_expr_right_12;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases);
            tmp_cmp_expr_left_12 = tmp_pyparsing_unicode$class_creation_9__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases_orig);
            tmp_cmp_expr_right_12 = tmp_pyparsing_unicode$class_creation_9__bases_orig;
            tmp_condition_result_51 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
            if (tmp_condition_result_51 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_46;
            }
            if (tmp_condition_result_51 == NUITKA_BOOL_TRUE) {
                goto branch_yes_38;
            } else {
                goto branch_no_38;
            }
        }
        branch_yes_38:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__15_Hangul_287, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_2 = "o";
            goto try_except_handler_46;
        }
        branch_no_38:;
        {
            PyObject *tmp_assign_source_109;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_value_27;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_kwargs_value_27;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__metaclass);
            tmp_called_value_35 = tmp_pyparsing_unicode$class_creation_9__metaclass;
            tmp_tuple_element_55 = mod_consts[135];
            tmp_args_value_27 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases);
            tmp_tuple_element_55 = tmp_pyparsing_unicode$class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_55);
            tmp_tuple_element_55 = locals_pyparsing$unicode$$$class__15_Hangul_287;
            PyTuple_SET_ITEM0(tmp_args_value_27, 2, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__class_decl_dict);
            tmp_kwargs_value_27 = tmp_pyparsing_unicode$class_creation_9__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 287;
            tmp_assign_source_109 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_27, tmp_kwargs_value_27);
            Py_DECREF(tmp_args_value_27);
            if (tmp_assign_source_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_46;
            }
            assert(outline_14_var___class__ == NULL);
            outline_14_var___class__ = tmp_assign_source_109;
        }
        CHECK_OBJECT(outline_14_var___class__);
        tmp_dictset_value = outline_14_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_46;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_46:;
        Py_DECREF(locals_pyparsing$unicode$$$class__15_Hangul_287);
        locals_pyparsing$unicode$$$class__15_Hangul_287 = NULL;
        goto try_return_handler_45;
        // Exception handler code:
        try_except_handler_46:;
        exception_keeper_type_41 = exception_type;
        exception_keeper_value_41 = exception_value;
        exception_keeper_tb_41 = exception_tb;
        exception_keeper_lineno_41 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__15_Hangul_287);
        locals_pyparsing$unicode$$$class__15_Hangul_287 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_41;
        exception_value = exception_keeper_value_41;
        exception_tb = exception_keeper_tb_41;
        exception_lineno = exception_keeper_lineno_41;

        goto try_except_handler_45;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_45:;
        CHECK_OBJECT(outline_14_var___class__);
        Py_DECREF(outline_14_var___class__);
        outline_14_var___class__ = NULL;
        goto outline_result_15;
        // Exception handler code:
        try_except_handler_45:;
        exception_keeper_type_42 = exception_type;
        exception_keeper_value_42 = exception_value;
        exception_keeper_tb_42 = exception_tb;
        exception_keeper_lineno_42 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_42;
        exception_value = exception_keeper_value_42;
        exception_tb = exception_keeper_tb_42;
        exception_lineno = exception_keeper_lineno_42;

        goto outline_exception_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_15:;
        exception_lineno = 287;
        goto try_except_handler_44;
        outline_result_15:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[135], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_2 = "o";
            goto try_except_handler_44;
        }
        goto try_end_15;
        // Exception handler code:
        try_except_handler_44:;
        exception_keeper_type_43 = exception_type;
        exception_keeper_value_43 = exception_value;
        exception_keeper_tb_43 = exception_tb;
        exception_keeper_lineno_43 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_9__bases_orig);
        tmp_pyparsing_unicode$class_creation_9__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_9__bases);
        tmp_pyparsing_unicode$class_creation_9__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_9__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_9__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_9__metaclass);
        tmp_pyparsing_unicode$class_creation_9__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_9__prepared);
        tmp_pyparsing_unicode$class_creation_9__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_43;
        exception_value = exception_keeper_value_43;
        exception_tb = exception_keeper_tb_43;
        exception_lineno = exception_keeper_lineno_43;

        goto frame_exception_exit_3;
        // End of try:
        try_end_15:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_9__bases_orig);
        tmp_pyparsing_unicode$class_creation_9__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_9__bases);
        tmp_pyparsing_unicode$class_creation_9__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_9__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_9__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_9__metaclass);
        tmp_pyparsing_unicode$class_creation_9__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_9__prepared);
        tmp_pyparsing_unicode$class_creation_9__prepared = NULL;
        tmp_dictset_value = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[135]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[135]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 307;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[139], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_assign_source_110;
            PyObject *tmp_tuple_element_56;
            tmp_tuple_element_56 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[112]);

            if (unlikely(tmp_tuple_element_56 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[112]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 309;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_tuple_element_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_assign_source_110 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_assign_source_110, 0, tmp_tuple_element_56);
            tmp_tuple_element_56 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[116]);

            if (unlikely(tmp_tuple_element_56 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[116]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 309;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_tuple_element_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_110, 1, tmp_tuple_element_56);
            tmp_tuple_element_56 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[135]);

            if (unlikely(tmp_tuple_element_56 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[135]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 309;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_tuple_element_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_110, 2, tmp_tuple_element_56);
            assert(tmp_pyparsing_unicode$class_creation_10__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_10__bases_orig = tmp_assign_source_110;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_111;
            PyObject *tmp_dircall_arg1_14;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases_orig);
            tmp_dircall_arg1_14 = tmp_pyparsing_unicode$class_creation_10__bases_orig;
            Py_INCREF(tmp_dircall_arg1_14);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_14};
                tmp_assign_source_111 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            assert(tmp_pyparsing_unicode$class_creation_10__bases == NULL);
            tmp_pyparsing_unicode$class_creation_10__bases = tmp_assign_source_111;
        }
        {
            PyObject *tmp_assign_source_112;
            tmp_assign_source_112 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_10__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_10__class_decl_dict = tmp_assign_source_112;
        }
        {
            PyObject *tmp_assign_source_113;
            PyObject *tmp_metaclass_value_14;
            nuitka_bool tmp_condition_result_52;
            int tmp_truth_name_14;
            PyObject *tmp_type_arg_27;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_bases_value_14;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases);
            tmp_truth_name_14 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_10__bases);
            if (tmp_truth_name_14 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            tmp_condition_result_52 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_14;
            } else {
                goto condexpr_false_14;
            }
            condexpr_true_14:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases);
            tmp_expression_value_87 = tmp_pyparsing_unicode$class_creation_10__bases;
            tmp_subscript_value_18 = mod_consts[15];
            tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_87, tmp_subscript_value_18, 0);
            if (tmp_type_arg_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
            Py_DECREF(tmp_type_arg_27);
            if (tmp_metaclass_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_14);
            condexpr_end_14:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases);
            tmp_bases_value_14 = tmp_pyparsing_unicode$class_creation_10__bases;
            tmp_assign_source_113 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
            Py_DECREF(tmp_metaclass_value_14);
            if (tmp_assign_source_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            assert(tmp_pyparsing_unicode$class_creation_10__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_10__metaclass = tmp_assign_source_113;
        }
        {
            bool tmp_condition_result_53;
            PyObject *tmp_expression_value_88;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__metaclass);
            tmp_expression_value_88 = tmp_pyparsing_unicode$class_creation_10__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_88, mod_consts[78]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            tmp_condition_result_53 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_53 != false) {
                goto branch_yes_39;
            } else {
                goto branch_no_39;
            }
        }
        branch_yes_39:;
        {
            PyObject *tmp_assign_source_114;
            PyObject *tmp_called_value_36;
            PyObject *tmp_expression_value_89;
            PyObject *tmp_args_value_28;
            PyObject *tmp_tuple_element_57;
            PyObject *tmp_kwargs_value_28;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__metaclass);
            tmp_expression_value_89 = tmp_pyparsing_unicode$class_creation_10__metaclass;
            tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[78]);
            if (tmp_called_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            tmp_tuple_element_57 = mod_consts[140];
            tmp_args_value_28 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_57);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases);
            tmp_tuple_element_57 = tmp_pyparsing_unicode$class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_57);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__class_decl_dict);
            tmp_kwargs_value_28 = tmp_pyparsing_unicode$class_creation_10__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 309;
            tmp_assign_source_114 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_28, tmp_kwargs_value_28);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_value_28);
            if (tmp_assign_source_114 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            assert(tmp_pyparsing_unicode$class_creation_10__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_10__prepared = tmp_assign_source_114;
        }
        {
            bool tmp_condition_result_54;
            PyObject *tmp_operand_value_14;
            PyObject *tmp_expression_value_90;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__prepared);
            tmp_expression_value_90 = tmp_pyparsing_unicode$class_creation_10__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_90, mod_consts[80]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            tmp_operand_value_14 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
            assert(!(tmp_res == -1));
            tmp_condition_result_54 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_54 != false) {
                goto branch_yes_40;
            } else {
                goto branch_no_40;
            }
        }
        branch_yes_40:;
        {
            PyObject *tmp_raise_type_14;
            PyObject *tmp_raise_value_14;
            PyObject *tmp_mod_expr_left_14;
            PyObject *tmp_mod_expr_right_14;
            PyObject *tmp_tuple_element_58;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_name_value_15;
            PyObject *tmp_default_value_14;
            tmp_raise_type_14 = PyExc_TypeError;
            tmp_mod_expr_left_14 = mod_consts[81];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__metaclass);
            tmp_expression_value_91 = tmp_pyparsing_unicode$class_creation_10__metaclass;
            tmp_name_value_15 = mod_consts[2];
            tmp_default_value_14 = mod_consts[82];
            tmp_tuple_element_58 = BUILTIN_GETATTR(tstate, tmp_expression_value_91, tmp_name_value_15, tmp_default_value_14);
            if (tmp_tuple_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_92;
                PyObject *tmp_type_arg_28;
                PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_58);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__prepared);
                tmp_type_arg_28 = tmp_pyparsing_unicode$class_creation_10__prepared;
                tmp_expression_value_92 = BUILTIN_TYPE1(tmp_type_arg_28);
                assert(!(tmp_expression_value_92 == NULL));
                tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[2]);
                Py_DECREF(tmp_expression_value_92);
                if (tmp_tuple_element_58 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 309;
                    type_description_2 = "o";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_58);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_mod_expr_right_14);
            goto try_except_handler_47;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_raise_value_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
            Py_DECREF(tmp_mod_expr_right_14);
            if (tmp_raise_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            exception_type = tmp_raise_type_14;
            Py_INCREF(tmp_raise_type_14);
            exception_value = tmp_raise_value_14;
            exception_lineno = 309;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_47;
        }
        branch_no_40:;
        goto branch_end_39;
        branch_no_39:;
        {
            PyObject *tmp_assign_source_115;
            tmp_assign_source_115 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_10__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_10__prepared = tmp_assign_source_115;
        }
        branch_end_39:;
        {
            PyObject *tmp_set_locals_16;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__prepared);
            tmp_set_locals_16 = tmp_pyparsing_unicode$class_creation_10__prepared;
            locals_pyparsing$unicode$$$class__16_CJK_309 = tmp_set_locals_16;
            Py_INCREF(tmp_set_locals_16);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__16_CJK_309, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_2 = "o";
            goto try_except_handler_49;
        }
        tmp_dictset_value = mod_consts[141];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__16_CJK_309, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_2 = "o";
            goto try_except_handler_49;
        }
        tmp_dictset_value = mod_consts[142];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__16_CJK_309, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_2 = "o";
            goto try_except_handler_49;
        }
        {
            nuitka_bool tmp_condition_result_55;
            PyObject *tmp_cmp_expr_left_13;
            PyObject *tmp_cmp_expr_right_13;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases);
            tmp_cmp_expr_left_13 = tmp_pyparsing_unicode$class_creation_10__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases_orig);
            tmp_cmp_expr_right_13 = tmp_pyparsing_unicode$class_creation_10__bases_orig;
            tmp_condition_result_55 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
            if (tmp_condition_result_55 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_49;
            }
            if (tmp_condition_result_55 == NUITKA_BOOL_TRUE) {
                goto branch_yes_41;
            } else {
                goto branch_no_41;
            }
        }
        branch_yes_41:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_10__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__16_CJK_309, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_2 = "o";
            goto try_except_handler_49;
        }
        branch_no_41:;
        {
            PyObject *tmp_assign_source_116;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_value_29;
            PyObject *tmp_tuple_element_59;
            PyObject *tmp_kwargs_value_29;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__metaclass);
            tmp_called_value_37 = tmp_pyparsing_unicode$class_creation_10__metaclass;
            tmp_tuple_element_59 = mod_consts[140];
            tmp_args_value_29 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_59);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases);
            tmp_tuple_element_59 = tmp_pyparsing_unicode$class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_59);
            tmp_tuple_element_59 = locals_pyparsing$unicode$$$class__16_CJK_309;
            PyTuple_SET_ITEM0(tmp_args_value_29, 2, tmp_tuple_element_59);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__class_decl_dict);
            tmp_kwargs_value_29 = tmp_pyparsing_unicode$class_creation_10__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 309;
            tmp_assign_source_116 = CALL_FUNCTION(tstate, tmp_called_value_37, tmp_args_value_29, tmp_kwargs_value_29);
            Py_DECREF(tmp_args_value_29);
            if (tmp_assign_source_116 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_49;
            }
            assert(outline_15_var___class__ == NULL);
            outline_15_var___class__ = tmp_assign_source_116;
        }
        CHECK_OBJECT(outline_15_var___class__);
        tmp_dictset_value = outline_15_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_49;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_49:;
        Py_DECREF(locals_pyparsing$unicode$$$class__16_CJK_309);
        locals_pyparsing$unicode$$$class__16_CJK_309 = NULL;
        goto try_return_handler_48;
        // Exception handler code:
        try_except_handler_49:;
        exception_keeper_type_44 = exception_type;
        exception_keeper_value_44 = exception_value;
        exception_keeper_tb_44 = exception_tb;
        exception_keeper_lineno_44 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__16_CJK_309);
        locals_pyparsing$unicode$$$class__16_CJK_309 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_44;
        exception_value = exception_keeper_value_44;
        exception_tb = exception_keeper_tb_44;
        exception_lineno = exception_keeper_lineno_44;

        goto try_except_handler_48;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_48:;
        CHECK_OBJECT(outline_15_var___class__);
        Py_DECREF(outline_15_var___class__);
        outline_15_var___class__ = NULL;
        goto outline_result_16;
        // Exception handler code:
        try_except_handler_48:;
        exception_keeper_type_45 = exception_type;
        exception_keeper_value_45 = exception_value;
        exception_keeper_tb_45 = exception_tb;
        exception_keeper_lineno_45 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_45;
        exception_value = exception_keeper_value_45;
        exception_tb = exception_keeper_tb_45;
        exception_lineno = exception_keeper_lineno_45;

        goto outline_exception_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_16:;
        exception_lineno = 309;
        goto try_except_handler_47;
        outline_result_16:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[140], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_2 = "o";
            goto try_except_handler_47;
        }
        goto try_end_16;
        // Exception handler code:
        try_except_handler_47:;
        exception_keeper_type_46 = exception_type;
        exception_keeper_value_46 = exception_value;
        exception_keeper_tb_46 = exception_tb;
        exception_keeper_lineno_46 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_10__bases_orig);
        tmp_pyparsing_unicode$class_creation_10__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_10__bases);
        tmp_pyparsing_unicode$class_creation_10__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_10__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_10__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_10__metaclass);
        tmp_pyparsing_unicode$class_creation_10__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_10__prepared);
        tmp_pyparsing_unicode$class_creation_10__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_46;
        exception_value = exception_keeper_value_46;
        exception_tb = exception_keeper_tb_46;
        exception_lineno = exception_keeper_lineno_46;

        goto frame_exception_exit_3;
        // End of try:
        try_end_16:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_10__bases_orig);
        tmp_pyparsing_unicode$class_creation_10__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_10__bases);
        tmp_pyparsing_unicode$class_creation_10__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_10__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_10__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_10__metaclass);
        tmp_pyparsing_unicode$class_creation_10__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_10__prepared);
        tmp_pyparsing_unicode$class_creation_10__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_117;
            PyObject *tmp_tuple_element_60;
            tmp_tuple_element_60 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[10]);

            if (tmp_tuple_element_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_60 == NULL)) {
                        tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                    }

                    if (tmp_tuple_element_60 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 312;
                        type_description_2 = "o";
                        goto try_except_handler_50;
                    }
                    Py_INCREF(tmp_tuple_element_60);
                } else {
                    goto try_except_handler_50;
                }
            }

            tmp_assign_source_117 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_117, 0, tmp_tuple_element_60);
            assert(tmp_pyparsing_unicode$class_creation_11__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_11__bases_orig = tmp_assign_source_117;
        }
        {
            PyObject *tmp_assign_source_118;
            PyObject *tmp_dircall_arg1_15;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases_orig);
            tmp_dircall_arg1_15 = tmp_pyparsing_unicode$class_creation_11__bases_orig;
            Py_INCREF(tmp_dircall_arg1_15);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_15};
                tmp_assign_source_118 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_118 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            assert(tmp_pyparsing_unicode$class_creation_11__bases == NULL);
            tmp_pyparsing_unicode$class_creation_11__bases = tmp_assign_source_118;
        }
        {
            PyObject *tmp_assign_source_119;
            tmp_assign_source_119 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_11__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_11__class_decl_dict = tmp_assign_source_119;
        }
        {
            PyObject *tmp_assign_source_120;
            PyObject *tmp_metaclass_value_15;
            nuitka_bool tmp_condition_result_56;
            int tmp_truth_name_15;
            PyObject *tmp_type_arg_29;
            PyObject *tmp_expression_value_93;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_bases_value_15;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases);
            tmp_truth_name_15 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_11__bases);
            if (tmp_truth_name_15 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            tmp_condition_result_56 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_15;
            } else {
                goto condexpr_false_15;
            }
            condexpr_true_15:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases);
            tmp_expression_value_93 = tmp_pyparsing_unicode$class_creation_11__bases;
            tmp_subscript_value_19 = mod_consts[15];
            tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_93, tmp_subscript_value_19, 0);
            if (tmp_type_arg_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
            Py_DECREF(tmp_type_arg_29);
            if (tmp_metaclass_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            goto condexpr_end_15;
            condexpr_false_15:;
            tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_15);
            condexpr_end_15:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases);
            tmp_bases_value_15 = tmp_pyparsing_unicode$class_creation_11__bases;
            tmp_assign_source_120 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
            Py_DECREF(tmp_metaclass_value_15);
            if (tmp_assign_source_120 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            assert(tmp_pyparsing_unicode$class_creation_11__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_11__metaclass = tmp_assign_source_120;
        }
        {
            bool tmp_condition_result_57;
            PyObject *tmp_expression_value_94;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__metaclass);
            tmp_expression_value_94 = tmp_pyparsing_unicode$class_creation_11__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_94, mod_consts[78]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            tmp_condition_result_57 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_57 != false) {
                goto branch_yes_42;
            } else {
                goto branch_no_42;
            }
        }
        branch_yes_42:;
        {
            PyObject *tmp_assign_source_121;
            PyObject *tmp_called_value_38;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_args_value_30;
            PyObject *tmp_tuple_element_61;
            PyObject *tmp_kwargs_value_30;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__metaclass);
            tmp_expression_value_95 = tmp_pyparsing_unicode$class_creation_11__metaclass;
            tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[78]);
            if (tmp_called_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            tmp_tuple_element_61 = mod_consts[143];
            tmp_args_value_30 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_61);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases);
            tmp_tuple_element_61 = tmp_pyparsing_unicode$class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_61);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__class_decl_dict);
            tmp_kwargs_value_30 = tmp_pyparsing_unicode$class_creation_11__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 312;
            tmp_assign_source_121 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_30, tmp_kwargs_value_30);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_value_30);
            if (tmp_assign_source_121 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            assert(tmp_pyparsing_unicode$class_creation_11__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_11__prepared = tmp_assign_source_121;
        }
        {
            bool tmp_condition_result_58;
            PyObject *tmp_operand_value_15;
            PyObject *tmp_expression_value_96;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__prepared);
            tmp_expression_value_96 = tmp_pyparsing_unicode$class_creation_11__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_96, mod_consts[80]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            tmp_operand_value_15 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
            assert(!(tmp_res == -1));
            tmp_condition_result_58 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_58 != false) {
                goto branch_yes_43;
            } else {
                goto branch_no_43;
            }
        }
        branch_yes_43:;
        {
            PyObject *tmp_raise_type_15;
            PyObject *tmp_raise_value_15;
            PyObject *tmp_mod_expr_left_15;
            PyObject *tmp_mod_expr_right_15;
            PyObject *tmp_tuple_element_62;
            PyObject *tmp_expression_value_97;
            PyObject *tmp_name_value_16;
            PyObject *tmp_default_value_15;
            tmp_raise_type_15 = PyExc_TypeError;
            tmp_mod_expr_left_15 = mod_consts[81];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__metaclass);
            tmp_expression_value_97 = tmp_pyparsing_unicode$class_creation_11__metaclass;
            tmp_name_value_16 = mod_consts[2];
            tmp_default_value_15 = mod_consts[82];
            tmp_tuple_element_62 = BUILTIN_GETATTR(tstate, tmp_expression_value_97, tmp_name_value_16, tmp_default_value_15);
            if (tmp_tuple_element_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_98;
                PyObject *tmp_type_arg_30;
                PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_62);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__prepared);
                tmp_type_arg_30 = tmp_pyparsing_unicode$class_creation_11__prepared;
                tmp_expression_value_98 = BUILTIN_TYPE1(tmp_type_arg_30);
                assert(!(tmp_expression_value_98 == NULL));
                tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[2]);
                Py_DECREF(tmp_expression_value_98);
                if (tmp_tuple_element_62 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 312;
                    type_description_2 = "o";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_62);
            }
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_mod_expr_right_15);
            goto try_except_handler_50;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            tmp_raise_value_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
            Py_DECREF(tmp_mod_expr_right_15);
            if (tmp_raise_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            exception_type = tmp_raise_type_15;
            Py_INCREF(tmp_raise_type_15);
            exception_value = tmp_raise_value_15;
            exception_lineno = 312;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_50;
        }
        branch_no_43:;
        goto branch_end_42;
        branch_no_42:;
        {
            PyObject *tmp_assign_source_122;
            tmp_assign_source_122 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_11__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_11__prepared = tmp_assign_source_122;
        }
        branch_end_42:;
        {
            PyObject *tmp_set_locals_17;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__prepared);
            tmp_set_locals_17 = tmp_pyparsing_unicode$class_creation_11__prepared;
            locals_pyparsing$unicode$$$class__17_Thai_312 = tmp_set_locals_17;
            Py_INCREF(tmp_set_locals_17);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__17_Thai_312, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_2 = "o";
            goto try_except_handler_52;
        }
        tmp_dictset_value = mod_consts[144];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__17_Thai_312, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_2 = "o";
            goto try_except_handler_52;
        }
        tmp_dictset_value = mod_consts[145];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__17_Thai_312, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_2 = "o";
            goto try_except_handler_52;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__17_Thai_312, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_2 = "o";
            goto try_except_handler_52;
        }
        frame_2f15169a72b89f0d967fa408c20ae34f_16 = MAKE_CLASS_FRAME(tstate, codeobj_2f15169a72b89f0d967fa408c20ae34f, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_2f15169a72b89f0d967fa408c20ae34f_16);
        assert(Py_REFCNT(frame_2f15169a72b89f0d967fa408c20ae34f_16) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST2(mod_consts[146],mod_consts[147]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__17_Thai_312, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_3 = "o";
            goto frame_exception_exit_16;
        }
        {
            PyObject *tmp_ass_subvalue_14;
            PyObject *tmp_ass_subscribed_14;
            PyObject *tmp_ass_subscript_14;
            tmp_ass_subvalue_14 = PyObject_GetItem(locals_pyparsing$unicode$$$class__17_Thai_312, mod_consts[64]);

            if (tmp_ass_subvalue_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_14 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_ass_subvalue_14 == NULL)) {
                        tmp_ass_subvalue_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                    }

                    if (tmp_ass_subvalue_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 314;
                        type_description_3 = "o";
                        goto frame_exception_exit_16;
                    }
                    Py_INCREF(tmp_ass_subvalue_14);
                } else {
                    goto frame_exception_exit_16;
                }
            }

            tmp_ass_subscribed_14 = PyObject_GetItem(locals_pyparsing$unicode$$$class__17_Thai_312, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_14);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 314;
                type_description_3 = "o";
                goto frame_exception_exit_16;
            }

            if (tmp_ass_subscribed_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_14);

                exception_lineno = 314;
                type_description_3 = "o";
                goto frame_exception_exit_16;
            }
            tmp_ass_subscript_14 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
            Py_DECREF(tmp_ass_subscribed_14);
            Py_DECREF(tmp_ass_subvalue_14);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_3 = "o";
                goto frame_exception_exit_16;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_14;
        frame_exception_exit_16:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2f15169a72b89f0d967fa408c20ae34f_16, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2f15169a72b89f0d967fa408c20ae34f_16->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2f15169a72b89f0d967fa408c20ae34f_16, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2f15169a72b89f0d967fa408c20ae34f_16,
            type_description_3,
            outline_16_var___class__
        );



        assertFrameObject(frame_2f15169a72b89f0d967fa408c20ae34f_16);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_15;
        frame_no_exception_14:;
        goto skip_nested_handling_14;
        nested_frame_exit_15:;
        type_description_2 = "o";
        goto try_except_handler_52;
        skip_nested_handling_14:;
        {
            nuitka_bool tmp_condition_result_59;
            PyObject *tmp_cmp_expr_left_14;
            PyObject *tmp_cmp_expr_right_14;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases);
            tmp_cmp_expr_left_14 = tmp_pyparsing_unicode$class_creation_11__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases_orig);
            tmp_cmp_expr_right_14 = tmp_pyparsing_unicode$class_creation_11__bases_orig;
            tmp_condition_result_59 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
            if (tmp_condition_result_59 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto try_except_handler_52;
            }
            if (tmp_condition_result_59 == NUITKA_BOOL_TRUE) {
                goto branch_yes_44;
            } else {
                goto branch_no_44;
            }
        }
        branch_yes_44:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_11__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__17_Thai_312, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_2 = "o";
            goto try_except_handler_52;
        }
        branch_no_44:;
        {
            PyObject *tmp_assign_source_123;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_value_31;
            PyObject *tmp_tuple_element_63;
            PyObject *tmp_kwargs_value_31;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__metaclass);
            tmp_called_value_39 = tmp_pyparsing_unicode$class_creation_11__metaclass;
            tmp_tuple_element_63 = mod_consts[143];
            tmp_args_value_31 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_63);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases);
            tmp_tuple_element_63 = tmp_pyparsing_unicode$class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_63);
            tmp_tuple_element_63 = locals_pyparsing$unicode$$$class__17_Thai_312;
            PyTuple_SET_ITEM0(tmp_args_value_31, 2, tmp_tuple_element_63);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__class_decl_dict);
            tmp_kwargs_value_31 = tmp_pyparsing_unicode$class_creation_11__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 312;
            tmp_assign_source_123 = CALL_FUNCTION(tstate, tmp_called_value_39, tmp_args_value_31, tmp_kwargs_value_31);
            Py_DECREF(tmp_args_value_31);
            if (tmp_assign_source_123 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto try_except_handler_52;
            }
            assert(outline_16_var___class__ == NULL);
            outline_16_var___class__ = tmp_assign_source_123;
        }
        CHECK_OBJECT(outline_16_var___class__);
        tmp_dictset_value = outline_16_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_52;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_52:;
        Py_DECREF(locals_pyparsing$unicode$$$class__17_Thai_312);
        locals_pyparsing$unicode$$$class__17_Thai_312 = NULL;
        goto try_return_handler_51;
        // Exception handler code:
        try_except_handler_52:;
        exception_keeper_type_47 = exception_type;
        exception_keeper_value_47 = exception_value;
        exception_keeper_tb_47 = exception_tb;
        exception_keeper_lineno_47 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__17_Thai_312);
        locals_pyparsing$unicode$$$class__17_Thai_312 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_47;
        exception_value = exception_keeper_value_47;
        exception_tb = exception_keeper_tb_47;
        exception_lineno = exception_keeper_lineno_47;

        goto try_except_handler_51;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_51:;
        CHECK_OBJECT(outline_16_var___class__);
        Py_DECREF(outline_16_var___class__);
        outline_16_var___class__ = NULL;
        goto outline_result_17;
        // Exception handler code:
        try_except_handler_51:;
        exception_keeper_type_48 = exception_type;
        exception_keeper_value_48 = exception_value;
        exception_keeper_tb_48 = exception_tb;
        exception_keeper_lineno_48 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_48;
        exception_value = exception_keeper_value_48;
        exception_tb = exception_keeper_tb_48;
        exception_lineno = exception_keeper_lineno_48;

        goto outline_exception_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_17:;
        exception_lineno = 312;
        goto try_except_handler_50;
        outline_result_17:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[143], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_2 = "o";
            goto try_except_handler_50;
        }
        goto try_end_17;
        // Exception handler code:
        try_except_handler_50:;
        exception_keeper_type_49 = exception_type;
        exception_keeper_value_49 = exception_value;
        exception_keeper_tb_49 = exception_tb;
        exception_keeper_lineno_49 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_11__bases_orig);
        tmp_pyparsing_unicode$class_creation_11__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_11__bases);
        tmp_pyparsing_unicode$class_creation_11__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_11__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_11__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_11__metaclass);
        tmp_pyparsing_unicode$class_creation_11__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_11__prepared);
        tmp_pyparsing_unicode$class_creation_11__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_49;
        exception_value = exception_keeper_value_49;
        exception_tb = exception_keeper_tb_49;
        exception_lineno = exception_keeper_lineno_49;

        goto frame_exception_exit_3;
        // End of try:
        try_end_17:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_11__bases_orig);
        tmp_pyparsing_unicode$class_creation_11__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_11__bases);
        tmp_pyparsing_unicode$class_creation_11__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_11__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_11__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_11__metaclass);
        tmp_pyparsing_unicode$class_creation_11__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_11__prepared);
        tmp_pyparsing_unicode$class_creation_11__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_124;
            PyObject *tmp_tuple_element_64;
            tmp_tuple_element_64 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[10]);

            if (tmp_tuple_element_64 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_64 == NULL)) {
                        tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                    }

                    if (tmp_tuple_element_64 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 319;
                        type_description_2 = "o";
                        goto try_except_handler_53;
                    }
                    Py_INCREF(tmp_tuple_element_64);
                } else {
                    goto try_except_handler_53;
                }
            }

            tmp_assign_source_124 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_124, 0, tmp_tuple_element_64);
            assert(tmp_pyparsing_unicode$class_creation_12__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_12__bases_orig = tmp_assign_source_124;
        }
        {
            PyObject *tmp_assign_source_125;
            PyObject *tmp_dircall_arg1_16;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases_orig);
            tmp_dircall_arg1_16 = tmp_pyparsing_unicode$class_creation_12__bases_orig;
            Py_INCREF(tmp_dircall_arg1_16);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_16};
                tmp_assign_source_125 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_125 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            assert(tmp_pyparsing_unicode$class_creation_12__bases == NULL);
            tmp_pyparsing_unicode$class_creation_12__bases = tmp_assign_source_125;
        }
        {
            PyObject *tmp_assign_source_126;
            tmp_assign_source_126 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_12__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_12__class_decl_dict = tmp_assign_source_126;
        }
        {
            PyObject *tmp_assign_source_127;
            PyObject *tmp_metaclass_value_16;
            nuitka_bool tmp_condition_result_60;
            int tmp_truth_name_16;
            PyObject *tmp_type_arg_31;
            PyObject *tmp_expression_value_99;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_bases_value_16;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases);
            tmp_truth_name_16 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_12__bases);
            if (tmp_truth_name_16 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            tmp_condition_result_60 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_16;
            } else {
                goto condexpr_false_16;
            }
            condexpr_true_16:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases);
            tmp_expression_value_99 = tmp_pyparsing_unicode$class_creation_12__bases;
            tmp_subscript_value_20 = mod_consts[15];
            tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_99, tmp_subscript_value_20, 0);
            if (tmp_type_arg_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
            Py_DECREF(tmp_type_arg_31);
            if (tmp_metaclass_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            goto condexpr_end_16;
            condexpr_false_16:;
            tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_16);
            condexpr_end_16:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases);
            tmp_bases_value_16 = tmp_pyparsing_unicode$class_creation_12__bases;
            tmp_assign_source_127 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
            Py_DECREF(tmp_metaclass_value_16);
            if (tmp_assign_source_127 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            assert(tmp_pyparsing_unicode$class_creation_12__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_12__metaclass = tmp_assign_source_127;
        }
        {
            bool tmp_condition_result_61;
            PyObject *tmp_expression_value_100;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__metaclass);
            tmp_expression_value_100 = tmp_pyparsing_unicode$class_creation_12__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_100, mod_consts[78]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            tmp_condition_result_61 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_61 != false) {
                goto branch_yes_45;
            } else {
                goto branch_no_45;
            }
        }
        branch_yes_45:;
        {
            PyObject *tmp_assign_source_128;
            PyObject *tmp_called_value_40;
            PyObject *tmp_expression_value_101;
            PyObject *tmp_args_value_32;
            PyObject *tmp_tuple_element_65;
            PyObject *tmp_kwargs_value_32;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__metaclass);
            tmp_expression_value_101 = tmp_pyparsing_unicode$class_creation_12__metaclass;
            tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[78]);
            if (tmp_called_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            tmp_tuple_element_65 = mod_consts[148];
            tmp_args_value_32 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_65);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases);
            tmp_tuple_element_65 = tmp_pyparsing_unicode$class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_65);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__class_decl_dict);
            tmp_kwargs_value_32 = tmp_pyparsing_unicode$class_creation_12__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 319;
            tmp_assign_source_128 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_32, tmp_kwargs_value_32);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_value_32);
            if (tmp_assign_source_128 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            assert(tmp_pyparsing_unicode$class_creation_12__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_12__prepared = tmp_assign_source_128;
        }
        {
            bool tmp_condition_result_62;
            PyObject *tmp_operand_value_16;
            PyObject *tmp_expression_value_102;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__prepared);
            tmp_expression_value_102 = tmp_pyparsing_unicode$class_creation_12__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_102, mod_consts[80]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            tmp_operand_value_16 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
            assert(!(tmp_res == -1));
            tmp_condition_result_62 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_62 != false) {
                goto branch_yes_46;
            } else {
                goto branch_no_46;
            }
        }
        branch_yes_46:;
        {
            PyObject *tmp_raise_type_16;
            PyObject *tmp_raise_value_16;
            PyObject *tmp_mod_expr_left_16;
            PyObject *tmp_mod_expr_right_16;
            PyObject *tmp_tuple_element_66;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_name_value_17;
            PyObject *tmp_default_value_16;
            tmp_raise_type_16 = PyExc_TypeError;
            tmp_mod_expr_left_16 = mod_consts[81];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__metaclass);
            tmp_expression_value_103 = tmp_pyparsing_unicode$class_creation_12__metaclass;
            tmp_name_value_17 = mod_consts[2];
            tmp_default_value_16 = mod_consts[82];
            tmp_tuple_element_66 = BUILTIN_GETATTR(tstate, tmp_expression_value_103, tmp_name_value_17, tmp_default_value_16);
            if (tmp_tuple_element_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_104;
                PyObject *tmp_type_arg_32;
                PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_66);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__prepared);
                tmp_type_arg_32 = tmp_pyparsing_unicode$class_creation_12__prepared;
                tmp_expression_value_104 = BUILTIN_TYPE1(tmp_type_arg_32);
                assert(!(tmp_expression_value_104 == NULL));
                tmp_tuple_element_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[2]);
                Py_DECREF(tmp_expression_value_104);
                if (tmp_tuple_element_66 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 319;
                    type_description_2 = "o";
                    goto tuple_build_exception_18;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_66);
            }
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_mod_expr_right_16);
            goto try_except_handler_53;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            tmp_raise_value_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
            Py_DECREF(tmp_mod_expr_right_16);
            if (tmp_raise_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            exception_type = tmp_raise_type_16;
            Py_INCREF(tmp_raise_type_16);
            exception_value = tmp_raise_value_16;
            exception_lineno = 319;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_53;
        }
        branch_no_46:;
        goto branch_end_45;
        branch_no_45:;
        {
            PyObject *tmp_assign_source_129;
            tmp_assign_source_129 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_12__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_12__prepared = tmp_assign_source_129;
        }
        branch_end_45:;
        {
            PyObject *tmp_set_locals_18;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__prepared);
            tmp_set_locals_18 = tmp_pyparsing_unicode$class_creation_12__prepared;
            locals_pyparsing$unicode$$$class__18_Arabic_319 = tmp_set_locals_18;
            Py_INCREF(tmp_set_locals_18);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__18_Arabic_319, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_2 = "o";
            goto try_except_handler_55;
        }
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__18_Arabic_319, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_2 = "o";
            goto try_except_handler_55;
        }
        tmp_dictset_value = mod_consts[150];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__18_Arabic_319, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_2 = "o";
            goto try_except_handler_55;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__18_Arabic_319, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_2 = "o";
            goto try_except_handler_55;
        }
        frame_0b07f377e4875d846ae08dd7738af6b0_17 = MAKE_CLASS_FRAME(tstate, codeobj_0b07f377e4875d846ae08dd7738af6b0, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_0b07f377e4875d846ae08dd7738af6b0_17);
        assert(Py_REFCNT(frame_0b07f377e4875d846ae08dd7738af6b0_17) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST3(mod_consts[151],mod_consts[152],mod_consts[153]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__18_Arabic_319, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_3 = "o";
            goto frame_exception_exit_17;
        }
        {
            PyObject *tmp_ass_subvalue_15;
            PyObject *tmp_ass_subscribed_15;
            PyObject *tmp_ass_subscript_15;
            tmp_ass_subvalue_15 = PyObject_GetItem(locals_pyparsing$unicode$$$class__18_Arabic_319, mod_consts[64]);

            if (tmp_ass_subvalue_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_15 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_ass_subvalue_15 == NULL)) {
                        tmp_ass_subvalue_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                    }

                    if (tmp_ass_subvalue_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 321;
                        type_description_3 = "o";
                        goto frame_exception_exit_17;
                    }
                    Py_INCREF(tmp_ass_subvalue_15);
                } else {
                    goto frame_exception_exit_17;
                }
            }

            tmp_ass_subscribed_15 = PyObject_GetItem(locals_pyparsing$unicode$$$class__18_Arabic_319, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_15);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 321;
                type_description_3 = "o";
                goto frame_exception_exit_17;
            }

            if (tmp_ass_subscribed_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_15);

                exception_lineno = 321;
                type_description_3 = "o";
                goto frame_exception_exit_17;
            }
            tmp_ass_subscript_15 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
            Py_DECREF(tmp_ass_subscribed_15);
            Py_DECREF(tmp_ass_subvalue_15);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_3 = "o";
                goto frame_exception_exit_17;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_15;
        frame_exception_exit_17:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0b07f377e4875d846ae08dd7738af6b0_17, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0b07f377e4875d846ae08dd7738af6b0_17->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0b07f377e4875d846ae08dd7738af6b0_17, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0b07f377e4875d846ae08dd7738af6b0_17,
            type_description_3,
            outline_17_var___class__
        );



        assertFrameObject(frame_0b07f377e4875d846ae08dd7738af6b0_17);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_16;
        frame_no_exception_15:;
        goto skip_nested_handling_15;
        nested_frame_exit_16:;
        type_description_2 = "o";
        goto try_except_handler_55;
        skip_nested_handling_15:;
        {
            nuitka_bool tmp_condition_result_63;
            PyObject *tmp_cmp_expr_left_15;
            PyObject *tmp_cmp_expr_right_15;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases);
            tmp_cmp_expr_left_15 = tmp_pyparsing_unicode$class_creation_12__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases_orig);
            tmp_cmp_expr_right_15 = tmp_pyparsing_unicode$class_creation_12__bases_orig;
            tmp_condition_result_63 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
            if (tmp_condition_result_63 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto try_except_handler_55;
            }
            if (tmp_condition_result_63 == NUITKA_BOOL_TRUE) {
                goto branch_yes_47;
            } else {
                goto branch_no_47;
            }
        }
        branch_yes_47:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_12__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__18_Arabic_319, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_2 = "o";
            goto try_except_handler_55;
        }
        branch_no_47:;
        {
            PyObject *tmp_assign_source_130;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_value_33;
            PyObject *tmp_tuple_element_67;
            PyObject *tmp_kwargs_value_33;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__metaclass);
            tmp_called_value_41 = tmp_pyparsing_unicode$class_creation_12__metaclass;
            tmp_tuple_element_67 = mod_consts[148];
            tmp_args_value_33 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_67);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases);
            tmp_tuple_element_67 = tmp_pyparsing_unicode$class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_67);
            tmp_tuple_element_67 = locals_pyparsing$unicode$$$class__18_Arabic_319;
            PyTuple_SET_ITEM0(tmp_args_value_33, 2, tmp_tuple_element_67);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__class_decl_dict);
            tmp_kwargs_value_33 = tmp_pyparsing_unicode$class_creation_12__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 319;
            tmp_assign_source_130 = CALL_FUNCTION(tstate, tmp_called_value_41, tmp_args_value_33, tmp_kwargs_value_33);
            Py_DECREF(tmp_args_value_33);
            if (tmp_assign_source_130 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto try_except_handler_55;
            }
            assert(outline_17_var___class__ == NULL);
            outline_17_var___class__ = tmp_assign_source_130;
        }
        CHECK_OBJECT(outline_17_var___class__);
        tmp_dictset_value = outline_17_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_55;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_55:;
        Py_DECREF(locals_pyparsing$unicode$$$class__18_Arabic_319);
        locals_pyparsing$unicode$$$class__18_Arabic_319 = NULL;
        goto try_return_handler_54;
        // Exception handler code:
        try_except_handler_55:;
        exception_keeper_type_50 = exception_type;
        exception_keeper_value_50 = exception_value;
        exception_keeper_tb_50 = exception_tb;
        exception_keeper_lineno_50 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__18_Arabic_319);
        locals_pyparsing$unicode$$$class__18_Arabic_319 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_50;
        exception_value = exception_keeper_value_50;
        exception_tb = exception_keeper_tb_50;
        exception_lineno = exception_keeper_lineno_50;

        goto try_except_handler_54;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_54:;
        CHECK_OBJECT(outline_17_var___class__);
        Py_DECREF(outline_17_var___class__);
        outline_17_var___class__ = NULL;
        goto outline_result_18;
        // Exception handler code:
        try_except_handler_54:;
        exception_keeper_type_51 = exception_type;
        exception_keeper_value_51 = exception_value;
        exception_keeper_tb_51 = exception_tb;
        exception_keeper_lineno_51 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_51;
        exception_value = exception_keeper_value_51;
        exception_tb = exception_keeper_tb_51;
        exception_lineno = exception_keeper_lineno_51;

        goto outline_exception_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_18:;
        exception_lineno = 319;
        goto try_except_handler_53;
        outline_result_18:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[148], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_2 = "o";
            goto try_except_handler_53;
        }
        goto try_end_18;
        // Exception handler code:
        try_except_handler_53:;
        exception_keeper_type_52 = exception_type;
        exception_keeper_value_52 = exception_value;
        exception_keeper_tb_52 = exception_tb;
        exception_keeper_lineno_52 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_12__bases_orig);
        tmp_pyparsing_unicode$class_creation_12__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_12__bases);
        tmp_pyparsing_unicode$class_creation_12__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_12__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_12__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_12__metaclass);
        tmp_pyparsing_unicode$class_creation_12__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_12__prepared);
        tmp_pyparsing_unicode$class_creation_12__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_52;
        exception_value = exception_keeper_value_52;
        exception_tb = exception_keeper_tb_52;
        exception_lineno = exception_keeper_lineno_52;

        goto frame_exception_exit_3;
        // End of try:
        try_end_18:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_12__bases_orig);
        tmp_pyparsing_unicode$class_creation_12__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_12__bases);
        tmp_pyparsing_unicode$class_creation_12__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_12__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_12__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_12__metaclass);
        tmp_pyparsing_unicode$class_creation_12__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_12__prepared);
        tmp_pyparsing_unicode$class_creation_12__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_131;
            PyObject *tmp_tuple_element_68;
            tmp_tuple_element_68 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[10]);

            if (tmp_tuple_element_68 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_68 == NULL)) {
                        tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                    }

                    if (tmp_tuple_element_68 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 327;
                        type_description_2 = "o";
                        goto try_except_handler_56;
                    }
                    Py_INCREF(tmp_tuple_element_68);
                } else {
                    goto try_except_handler_56;
                }
            }

            tmp_assign_source_131 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_131, 0, tmp_tuple_element_68);
            assert(tmp_pyparsing_unicode$class_creation_13__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_13__bases_orig = tmp_assign_source_131;
        }
        {
            PyObject *tmp_assign_source_132;
            PyObject *tmp_dircall_arg1_17;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases_orig);
            tmp_dircall_arg1_17 = tmp_pyparsing_unicode$class_creation_13__bases_orig;
            Py_INCREF(tmp_dircall_arg1_17);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_17};
                tmp_assign_source_132 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_132 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            assert(tmp_pyparsing_unicode$class_creation_13__bases == NULL);
            tmp_pyparsing_unicode$class_creation_13__bases = tmp_assign_source_132;
        }
        {
            PyObject *tmp_assign_source_133;
            tmp_assign_source_133 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_13__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_13__class_decl_dict = tmp_assign_source_133;
        }
        {
            PyObject *tmp_assign_source_134;
            PyObject *tmp_metaclass_value_17;
            nuitka_bool tmp_condition_result_64;
            int tmp_truth_name_17;
            PyObject *tmp_type_arg_33;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_bases_value_17;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases);
            tmp_truth_name_17 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_13__bases);
            if (tmp_truth_name_17 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            tmp_condition_result_64 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_17;
            } else {
                goto condexpr_false_17;
            }
            condexpr_true_17:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases);
            tmp_expression_value_105 = tmp_pyparsing_unicode$class_creation_13__bases;
            tmp_subscript_value_21 = mod_consts[15];
            tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_105, tmp_subscript_value_21, 0);
            if (tmp_type_arg_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
            Py_DECREF(tmp_type_arg_33);
            if (tmp_metaclass_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            goto condexpr_end_17;
            condexpr_false_17:;
            tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_17);
            condexpr_end_17:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases);
            tmp_bases_value_17 = tmp_pyparsing_unicode$class_creation_13__bases;
            tmp_assign_source_134 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
            Py_DECREF(tmp_metaclass_value_17);
            if (tmp_assign_source_134 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            assert(tmp_pyparsing_unicode$class_creation_13__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_13__metaclass = tmp_assign_source_134;
        }
        {
            bool tmp_condition_result_65;
            PyObject *tmp_expression_value_106;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__metaclass);
            tmp_expression_value_106 = tmp_pyparsing_unicode$class_creation_13__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_106, mod_consts[78]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            tmp_condition_result_65 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_65 != false) {
                goto branch_yes_48;
            } else {
                goto branch_no_48;
            }
        }
        branch_yes_48:;
        {
            PyObject *tmp_assign_source_135;
            PyObject *tmp_called_value_42;
            PyObject *tmp_expression_value_107;
            PyObject *tmp_args_value_34;
            PyObject *tmp_tuple_element_69;
            PyObject *tmp_kwargs_value_34;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__metaclass);
            tmp_expression_value_107 = tmp_pyparsing_unicode$class_creation_13__metaclass;
            tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[78]);
            if (tmp_called_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            tmp_tuple_element_69 = mod_consts[154];
            tmp_args_value_34 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_69);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases);
            tmp_tuple_element_69 = tmp_pyparsing_unicode$class_creation_13__bases;
            PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_69);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__class_decl_dict);
            tmp_kwargs_value_34 = tmp_pyparsing_unicode$class_creation_13__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 327;
            tmp_assign_source_135 = CALL_FUNCTION(tstate, tmp_called_value_42, tmp_args_value_34, tmp_kwargs_value_34);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_args_value_34);
            if (tmp_assign_source_135 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            assert(tmp_pyparsing_unicode$class_creation_13__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_13__prepared = tmp_assign_source_135;
        }
        {
            bool tmp_condition_result_66;
            PyObject *tmp_operand_value_17;
            PyObject *tmp_expression_value_108;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__prepared);
            tmp_expression_value_108 = tmp_pyparsing_unicode$class_creation_13__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_108, mod_consts[80]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            tmp_operand_value_17 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
            assert(!(tmp_res == -1));
            tmp_condition_result_66 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_66 != false) {
                goto branch_yes_49;
            } else {
                goto branch_no_49;
            }
        }
        branch_yes_49:;
        {
            PyObject *tmp_raise_type_17;
            PyObject *tmp_raise_value_17;
            PyObject *tmp_mod_expr_left_17;
            PyObject *tmp_mod_expr_right_17;
            PyObject *tmp_tuple_element_70;
            PyObject *tmp_expression_value_109;
            PyObject *tmp_name_value_18;
            PyObject *tmp_default_value_17;
            tmp_raise_type_17 = PyExc_TypeError;
            tmp_mod_expr_left_17 = mod_consts[81];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__metaclass);
            tmp_expression_value_109 = tmp_pyparsing_unicode$class_creation_13__metaclass;
            tmp_name_value_18 = mod_consts[2];
            tmp_default_value_17 = mod_consts[82];
            tmp_tuple_element_70 = BUILTIN_GETATTR(tstate, tmp_expression_value_109, tmp_name_value_18, tmp_default_value_17);
            if (tmp_tuple_element_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_110;
                PyObject *tmp_type_arg_34;
                PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_70);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__prepared);
                tmp_type_arg_34 = tmp_pyparsing_unicode$class_creation_13__prepared;
                tmp_expression_value_110 = BUILTIN_TYPE1(tmp_type_arg_34);
                assert(!(tmp_expression_value_110 == NULL));
                tmp_tuple_element_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[2]);
                Py_DECREF(tmp_expression_value_110);
                if (tmp_tuple_element_70 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 327;
                    type_description_2 = "o";
                    goto tuple_build_exception_19;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_70);
            }
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_mod_expr_right_17);
            goto try_except_handler_56;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            tmp_raise_value_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
            Py_DECREF(tmp_mod_expr_right_17);
            if (tmp_raise_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            exception_type = tmp_raise_type_17;
            Py_INCREF(tmp_raise_type_17);
            exception_value = tmp_raise_value_17;
            exception_lineno = 327;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_56;
        }
        branch_no_49:;
        goto branch_end_48;
        branch_no_48:;
        {
            PyObject *tmp_assign_source_136;
            tmp_assign_source_136 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_13__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_13__prepared = tmp_assign_source_136;
        }
        branch_end_48:;
        {
            PyObject *tmp_set_locals_19;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__prepared);
            tmp_set_locals_19 = tmp_pyparsing_unicode$class_creation_13__prepared;
            locals_pyparsing$unicode$$$class__19_Hebrew_327 = tmp_set_locals_19;
            Py_INCREF(tmp_set_locals_19);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__19_Hebrew_327, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_2 = "o";
            goto try_except_handler_58;
        }
        tmp_dictset_value = mod_consts[155];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__19_Hebrew_327, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_2 = "o";
            goto try_except_handler_58;
        }
        tmp_dictset_value = mod_consts[156];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__19_Hebrew_327, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_2 = "o";
            goto try_except_handler_58;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__19_Hebrew_327, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_2 = "o";
            goto try_except_handler_58;
        }
        frame_46c21372245fd31a7f1bcfe1ff9eb807_18 = MAKE_CLASS_FRAME(tstate, codeobj_46c21372245fd31a7f1bcfe1ff9eb807, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_46c21372245fd31a7f1bcfe1ff9eb807_18);
        assert(Py_REFCNT(frame_46c21372245fd31a7f1bcfe1ff9eb807_18) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST9(mod_consts[157]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__19_Hebrew_327, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_3 = "o";
            goto frame_exception_exit_18;
        }
        {
            PyObject *tmp_ass_subvalue_16;
            PyObject *tmp_ass_subscribed_16;
            PyObject *tmp_ass_subscript_16;
            tmp_ass_subvalue_16 = PyObject_GetItem(locals_pyparsing$unicode$$$class__19_Hebrew_327, mod_consts[64]);

            if (tmp_ass_subvalue_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_16 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_ass_subvalue_16 == NULL)) {
                        tmp_ass_subvalue_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                    }

                    if (tmp_ass_subvalue_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 329;
                        type_description_3 = "o";
                        goto frame_exception_exit_18;
                    }
                    Py_INCREF(tmp_ass_subvalue_16);
                } else {
                    goto frame_exception_exit_18;
                }
            }

            tmp_ass_subscribed_16 = PyObject_GetItem(locals_pyparsing$unicode$$$class__19_Hebrew_327, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_16);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 329;
                type_description_3 = "o";
                goto frame_exception_exit_18;
            }

            if (tmp_ass_subscribed_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_16);

                exception_lineno = 329;
                type_description_3 = "o";
                goto frame_exception_exit_18;
            }
            tmp_ass_subscript_16 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
            Py_DECREF(tmp_ass_subscribed_16);
            Py_DECREF(tmp_ass_subvalue_16);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_3 = "o";
                goto frame_exception_exit_18;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_16;
        frame_exception_exit_18:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_46c21372245fd31a7f1bcfe1ff9eb807_18, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_46c21372245fd31a7f1bcfe1ff9eb807_18->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_46c21372245fd31a7f1bcfe1ff9eb807_18, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_46c21372245fd31a7f1bcfe1ff9eb807_18,
            type_description_3,
            outline_18_var___class__
        );



        assertFrameObject(frame_46c21372245fd31a7f1bcfe1ff9eb807_18);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_17;
        frame_no_exception_16:;
        goto skip_nested_handling_16;
        nested_frame_exit_17:;
        type_description_2 = "o";
        goto try_except_handler_58;
        skip_nested_handling_16:;
        {
            nuitka_bool tmp_condition_result_67;
            PyObject *tmp_cmp_expr_left_16;
            PyObject *tmp_cmp_expr_right_16;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases);
            tmp_cmp_expr_left_16 = tmp_pyparsing_unicode$class_creation_13__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases_orig);
            tmp_cmp_expr_right_16 = tmp_pyparsing_unicode$class_creation_13__bases_orig;
            tmp_condition_result_67 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
            if (tmp_condition_result_67 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto try_except_handler_58;
            }
            if (tmp_condition_result_67 == NUITKA_BOOL_TRUE) {
                goto branch_yes_50;
            } else {
                goto branch_no_50;
            }
        }
        branch_yes_50:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_13__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__19_Hebrew_327, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_2 = "o";
            goto try_except_handler_58;
        }
        branch_no_50:;
        {
            PyObject *tmp_assign_source_137;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_value_35;
            PyObject *tmp_tuple_element_71;
            PyObject *tmp_kwargs_value_35;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__metaclass);
            tmp_called_value_43 = tmp_pyparsing_unicode$class_creation_13__metaclass;
            tmp_tuple_element_71 = mod_consts[154];
            tmp_args_value_35 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases);
            tmp_tuple_element_71 = tmp_pyparsing_unicode$class_creation_13__bases;
            PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_71);
            tmp_tuple_element_71 = locals_pyparsing$unicode$$$class__19_Hebrew_327;
            PyTuple_SET_ITEM0(tmp_args_value_35, 2, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__class_decl_dict);
            tmp_kwargs_value_35 = tmp_pyparsing_unicode$class_creation_13__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 327;
            tmp_assign_source_137 = CALL_FUNCTION(tstate, tmp_called_value_43, tmp_args_value_35, tmp_kwargs_value_35);
            Py_DECREF(tmp_args_value_35);
            if (tmp_assign_source_137 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto try_except_handler_58;
            }
            assert(outline_18_var___class__ == NULL);
            outline_18_var___class__ = tmp_assign_source_137;
        }
        CHECK_OBJECT(outline_18_var___class__);
        tmp_dictset_value = outline_18_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_58;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_58:;
        Py_DECREF(locals_pyparsing$unicode$$$class__19_Hebrew_327);
        locals_pyparsing$unicode$$$class__19_Hebrew_327 = NULL;
        goto try_return_handler_57;
        // Exception handler code:
        try_except_handler_58:;
        exception_keeper_type_53 = exception_type;
        exception_keeper_value_53 = exception_value;
        exception_keeper_tb_53 = exception_tb;
        exception_keeper_lineno_53 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__19_Hebrew_327);
        locals_pyparsing$unicode$$$class__19_Hebrew_327 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_53;
        exception_value = exception_keeper_value_53;
        exception_tb = exception_keeper_tb_53;
        exception_lineno = exception_keeper_lineno_53;

        goto try_except_handler_57;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_57:;
        CHECK_OBJECT(outline_18_var___class__);
        Py_DECREF(outline_18_var___class__);
        outline_18_var___class__ = NULL;
        goto outline_result_19;
        // Exception handler code:
        try_except_handler_57:;
        exception_keeper_type_54 = exception_type;
        exception_keeper_value_54 = exception_value;
        exception_keeper_tb_54 = exception_tb;
        exception_keeper_lineno_54 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_54;
        exception_value = exception_keeper_value_54;
        exception_tb = exception_keeper_tb_54;
        exception_lineno = exception_keeper_lineno_54;

        goto outline_exception_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_19:;
        exception_lineno = 327;
        goto try_except_handler_56;
        outline_result_19:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[154], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_2 = "o";
            goto try_except_handler_56;
        }
        goto try_end_19;
        // Exception handler code:
        try_except_handler_56:;
        exception_keeper_type_55 = exception_type;
        exception_keeper_value_55 = exception_value;
        exception_keeper_tb_55 = exception_tb;
        exception_keeper_lineno_55 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_13__bases_orig);
        tmp_pyparsing_unicode$class_creation_13__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_13__bases);
        tmp_pyparsing_unicode$class_creation_13__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_13__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_13__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_13__metaclass);
        tmp_pyparsing_unicode$class_creation_13__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_13__prepared);
        tmp_pyparsing_unicode$class_creation_13__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_55;
        exception_value = exception_keeper_value_55;
        exception_tb = exception_keeper_tb_55;
        exception_lineno = exception_keeper_lineno_55;

        goto frame_exception_exit_3;
        // End of try:
        try_end_19:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_13__bases_orig);
        tmp_pyparsing_unicode$class_creation_13__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_13__bases);
        tmp_pyparsing_unicode$class_creation_13__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_13__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_13__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_13__metaclass);
        tmp_pyparsing_unicode$class_creation_13__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_13__prepared);
        tmp_pyparsing_unicode$class_creation_13__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_138;
            PyObject *tmp_tuple_element_72;
            tmp_tuple_element_72 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[10]);

            if (tmp_tuple_element_72 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_72 == NULL)) {
                        tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
                    }

                    if (tmp_tuple_element_72 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 341;
                        type_description_2 = "o";
                        goto try_except_handler_59;
                    }
                    Py_INCREF(tmp_tuple_element_72);
                } else {
                    goto try_except_handler_59;
                }
            }

            tmp_assign_source_138 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_138, 0, tmp_tuple_element_72);
            assert(tmp_pyparsing_unicode$class_creation_14__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_14__bases_orig = tmp_assign_source_138;
        }
        {
            PyObject *tmp_assign_source_139;
            PyObject *tmp_dircall_arg1_18;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__bases_orig);
            tmp_dircall_arg1_18 = tmp_pyparsing_unicode$class_creation_14__bases_orig;
            Py_INCREF(tmp_dircall_arg1_18);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_18};
                tmp_assign_source_139 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_139 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto try_except_handler_59;
            }
            assert(tmp_pyparsing_unicode$class_creation_14__bases == NULL);
            tmp_pyparsing_unicode$class_creation_14__bases = tmp_assign_source_139;
        }
        {
            PyObject *tmp_assign_source_140;
            tmp_assign_source_140 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_14__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_14__class_decl_dict = tmp_assign_source_140;
        }
        {
            PyObject *tmp_assign_source_141;
            PyObject *tmp_metaclass_value_18;
            nuitka_bool tmp_condition_result_68;
            int tmp_truth_name_18;
            PyObject *tmp_type_arg_35;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_bases_value_18;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__bases);
            tmp_truth_name_18 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_14__bases);
            if (tmp_truth_name_18 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto try_except_handler_59;
            }
            tmp_condition_result_68 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_18;
            } else {
                goto condexpr_false_18;
            }
            condexpr_true_18:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__bases);
            tmp_expression_value_111 = tmp_pyparsing_unicode$class_creation_14__bases;
            tmp_subscript_value_22 = mod_consts[15];
            tmp_type_arg_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_111, tmp_subscript_value_22, 0);
            if (tmp_type_arg_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto try_except_handler_59;
            }
            tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_35);
            Py_DECREF(tmp_type_arg_35);
            if (tmp_metaclass_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto try_except_handler_59;
            }
            goto condexpr_end_18;
            condexpr_false_18:;
            tmp_metaclass_value_18 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_18);
            condexpr_end_18:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__bases);
            tmp_bases_value_18 = tmp_pyparsing_unicode$class_creation_14__bases;
            tmp_assign_source_141 = SELECT_METACLASS(tstate, tmp_metaclass_value_18, tmp_bases_value_18);
            Py_DECREF(tmp_metaclass_value_18);
            if (tmp_assign_source_141 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto try_except_handler_59;
            }
            assert(tmp_pyparsing_unicode$class_creation_14__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_14__metaclass = tmp_assign_source_141;
        }
        {
            bool tmp_condition_result_69;
            PyObject *tmp_expression_value_112;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__metaclass);
            tmp_expression_value_112 = tmp_pyparsing_unicode$class_creation_14__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_112, mod_consts[78]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto try_except_handler_59;
            }
            tmp_condition_result_69 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_69 != false) {
                goto branch_yes_51;
            } else {
                goto branch_no_51;
            }
        }
        branch_yes_51:;
        {
            PyObject *tmp_assign_source_142;
            PyObject *tmp_called_value_44;
            PyObject *tmp_expression_value_113;
            PyObject *tmp_args_value_36;
            PyObject *tmp_tuple_element_73;
            PyObject *tmp_kwargs_value_36;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__metaclass);
            tmp_expression_value_113 = tmp_pyparsing_unicode$class_creation_14__metaclass;
            tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[78]);
            if (tmp_called_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto try_except_handler_59;
            }
            tmp_tuple_element_73 = mod_consts[158];
            tmp_args_value_36 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_73);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__bases);
            tmp_tuple_element_73 = tmp_pyparsing_unicode$class_creation_14__bases;
            PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_73);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__class_decl_dict);
            tmp_kwargs_value_36 = tmp_pyparsing_unicode$class_creation_14__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 341;
            tmp_assign_source_142 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_36, tmp_kwargs_value_36);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_value_36);
            if (tmp_assign_source_142 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto try_except_handler_59;
            }
            assert(tmp_pyparsing_unicode$class_creation_14__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_14__prepared = tmp_assign_source_142;
        }
        {
            bool tmp_condition_result_70;
            PyObject *tmp_operand_value_18;
            PyObject *tmp_expression_value_114;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__prepared);
            tmp_expression_value_114 = tmp_pyparsing_unicode$class_creation_14__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_114, mod_consts[80]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto try_except_handler_59;
            }
            tmp_operand_value_18 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
            assert(!(tmp_res == -1));
            tmp_condition_result_70 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_70 != false) {
                goto branch_yes_52;
            } else {
                goto branch_no_52;
            }
        }
        branch_yes_52:;
        {
            PyObject *tmp_raise_type_18;
            PyObject *tmp_raise_value_18;
            PyObject *tmp_mod_expr_left_18;
            PyObject *tmp_mod_expr_right_18;
            PyObject *tmp_tuple_element_74;
            PyObject *tmp_expression_value_115;
            PyObject *tmp_name_value_19;
            PyObject *tmp_default_value_18;
            tmp_raise_type_18 = PyExc_TypeError;
            tmp_mod_expr_left_18 = mod_consts[81];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__metaclass);
            tmp_expression_value_115 = tmp_pyparsing_unicode$class_creation_14__metaclass;
            tmp_name_value_19 = mod_consts[2];
            tmp_default_value_18 = mod_consts[82];
            tmp_tuple_element_74 = BUILTIN_GETATTR(tstate, tmp_expression_value_115, tmp_name_value_19, tmp_default_value_18);
            if (tmp_tuple_element_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto try_except_handler_59;
            }
            tmp_mod_expr_right_18 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_116;
                PyObject *tmp_type_arg_36;
                PyTuple_SET_ITEM(tmp_mod_expr_right_18, 0, tmp_tuple_element_74);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__prepared);
                tmp_type_arg_36 = tmp_pyparsing_unicode$class_creation_14__prepared;
                tmp_expression_value_116 = BUILTIN_TYPE1(tmp_type_arg_36);
                assert(!(tmp_expression_value_116 == NULL));
                tmp_tuple_element_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[2]);
                Py_DECREF(tmp_expression_value_116);
                if (tmp_tuple_element_74 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 341;
                    type_description_2 = "o";
                    goto tuple_build_exception_20;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_18, 1, tmp_tuple_element_74);
            }
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_mod_expr_right_18);
            goto try_except_handler_59;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            tmp_raise_value_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
            Py_DECREF(tmp_mod_expr_right_18);
            if (tmp_raise_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto try_except_handler_59;
            }
            exception_type = tmp_raise_type_18;
            Py_INCREF(tmp_raise_type_18);
            exception_value = tmp_raise_value_18;
            exception_lineno = 341;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_59;
        }
        branch_no_52:;
        goto branch_end_51;
        branch_no_51:;
        {
            PyObject *tmp_assign_source_143;
            tmp_assign_source_143 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_14__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_14__prepared = tmp_assign_source_143;
        }
        branch_end_51:;
        {
            PyObject *tmp_set_locals_20;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__prepared);
            tmp_set_locals_20 = tmp_pyparsing_unicode$class_creation_14__prepared;
            locals_pyparsing$unicode$$$class__20_Devanagari_341 = tmp_set_locals_20;
            Py_INCREF(tmp_set_locals_20);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__20_Devanagari_341, mod_consts[56], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_2 = "o";
            goto try_except_handler_61;
        }
        tmp_dictset_value = mod_consts[159];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__20_Devanagari_341, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_2 = "o";
            goto try_except_handler_61;
        }
        tmp_dictset_value = mod_consts[160];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__20_Devanagari_341, mod_consts[58], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_2 = "o";
            goto try_except_handler_61;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__20_Devanagari_341, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_2 = "o";
            goto try_except_handler_61;
        }
        frame_38a41826a3fa86f354dd3cd1bfc542b6_19 = MAKE_CLASS_FRAME(tstate, codeobj_38a41826a3fa86f354dd3cd1bfc542b6, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_38a41826a3fa86f354dd3cd1bfc542b6_19);
        assert(Py_REFCNT(frame_38a41826a3fa86f354dd3cd1bfc542b6_19) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST2(mod_consts[161],mod_consts[162]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__20_Devanagari_341, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_3 = "o";
            goto frame_exception_exit_19;
        }
        {
            PyObject *tmp_ass_subvalue_17;
            PyObject *tmp_ass_subscribed_17;
            PyObject *tmp_ass_subscript_17;
            tmp_ass_subvalue_17 = PyObject_GetItem(locals_pyparsing$unicode$$$class__20_Devanagari_341, mod_consts[64]);

            if (tmp_ass_subvalue_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_17 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_ass_subvalue_17 == NULL)) {
                        tmp_ass_subvalue_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
                    }

                    if (tmp_ass_subvalue_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 343;
                        type_description_3 = "o";
                        goto frame_exception_exit_19;
                    }
                    Py_INCREF(tmp_ass_subvalue_17);
                } else {
                    goto frame_exception_exit_19;
                }
            }

            tmp_ass_subscribed_17 = PyObject_GetItem(locals_pyparsing$unicode$$$class__20_Devanagari_341, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_17);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 343;
                type_description_3 = "o";
                goto frame_exception_exit_19;
            }

            if (tmp_ass_subscribed_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_17);

                exception_lineno = 343;
                type_description_3 = "o";
                goto frame_exception_exit_19;
            }
            tmp_ass_subscript_17 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
            Py_DECREF(tmp_ass_subscribed_17);
            Py_DECREF(tmp_ass_subvalue_17);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_3 = "o";
                goto frame_exception_exit_19;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_17;
        frame_exception_exit_19:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_38a41826a3fa86f354dd3cd1bfc542b6_19, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_38a41826a3fa86f354dd3cd1bfc542b6_19->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_38a41826a3fa86f354dd3cd1bfc542b6_19, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_38a41826a3fa86f354dd3cd1bfc542b6_19,
            type_description_3,
            outline_19_var___class__
        );



        assertFrameObject(frame_38a41826a3fa86f354dd3cd1bfc542b6_19);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_18;
        frame_no_exception_17:;
        goto skip_nested_handling_17;
        nested_frame_exit_18:;
        type_description_2 = "o";
        goto try_except_handler_61;
        skip_nested_handling_17:;
        {
            nuitka_bool tmp_condition_result_71;
            PyObject *tmp_cmp_expr_left_17;
            PyObject *tmp_cmp_expr_right_17;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__bases);
            tmp_cmp_expr_left_17 = tmp_pyparsing_unicode$class_creation_14__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__bases_orig);
            tmp_cmp_expr_right_17 = tmp_pyparsing_unicode$class_creation_14__bases_orig;
            tmp_condition_result_71 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
            if (tmp_condition_result_71 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto try_except_handler_61;
            }
            if (tmp_condition_result_71 == NUITKA_BOOL_TRUE) {
                goto branch_yes_53;
            } else {
                goto branch_no_53;
            }
        }
        branch_yes_53:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_14__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__20_Devanagari_341, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_2 = "o";
            goto try_except_handler_61;
        }
        branch_no_53:;
        {
            PyObject *tmp_assign_source_144;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_value_37;
            PyObject *tmp_tuple_element_75;
            PyObject *tmp_kwargs_value_37;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__metaclass);
            tmp_called_value_45 = tmp_pyparsing_unicode$class_creation_14__metaclass;
            tmp_tuple_element_75 = mod_consts[158];
            tmp_args_value_37 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_75);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__bases);
            tmp_tuple_element_75 = tmp_pyparsing_unicode$class_creation_14__bases;
            PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_75);
            tmp_tuple_element_75 = locals_pyparsing$unicode$$$class__20_Devanagari_341;
            PyTuple_SET_ITEM0(tmp_args_value_37, 2, tmp_tuple_element_75);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__class_decl_dict);
            tmp_kwargs_value_37 = tmp_pyparsing_unicode$class_creation_14__class_decl_dict;
            frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame.f_lineno = 341;
            tmp_assign_source_144 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_37, tmp_kwargs_value_37);
            Py_DECREF(tmp_args_value_37);
            if (tmp_assign_source_144 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto try_except_handler_61;
            }
            assert(outline_19_var___class__ == NULL);
            outline_19_var___class__ = tmp_assign_source_144;
        }
        CHECK_OBJECT(outline_19_var___class__);
        tmp_dictset_value = outline_19_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_61;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_61:;
        Py_DECREF(locals_pyparsing$unicode$$$class__20_Devanagari_341);
        locals_pyparsing$unicode$$$class__20_Devanagari_341 = NULL;
        goto try_return_handler_60;
        // Exception handler code:
        try_except_handler_61:;
        exception_keeper_type_56 = exception_type;
        exception_keeper_value_56 = exception_value;
        exception_keeper_tb_56 = exception_tb;
        exception_keeper_lineno_56 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__20_Devanagari_341);
        locals_pyparsing$unicode$$$class__20_Devanagari_341 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_56;
        exception_value = exception_keeper_value_56;
        exception_tb = exception_keeper_tb_56;
        exception_lineno = exception_keeper_lineno_56;

        goto try_except_handler_60;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_60:;
        CHECK_OBJECT(outline_19_var___class__);
        Py_DECREF(outline_19_var___class__);
        outline_19_var___class__ = NULL;
        goto outline_result_20;
        // Exception handler code:
        try_except_handler_60:;
        exception_keeper_type_57 = exception_type;
        exception_keeper_value_57 = exception_value;
        exception_keeper_tb_57 = exception_tb;
        exception_keeper_lineno_57 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_57;
        exception_value = exception_keeper_value_57;
        exception_tb = exception_keeper_tb_57;
        exception_lineno = exception_keeper_lineno_57;

        goto outline_exception_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_20:;
        exception_lineno = 341;
        goto try_except_handler_59;
        outline_result_20:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[158], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_2 = "o";
            goto try_except_handler_59;
        }
        goto try_end_20;
        // Exception handler code:
        try_except_handler_59:;
        exception_keeper_type_58 = exception_type;
        exception_keeper_value_58 = exception_value;
        exception_keeper_tb_58 = exception_tb;
        exception_keeper_lineno_58 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_14__bases_orig);
        tmp_pyparsing_unicode$class_creation_14__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_14__bases);
        tmp_pyparsing_unicode$class_creation_14__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_14__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_14__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_14__metaclass);
        tmp_pyparsing_unicode$class_creation_14__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_14__prepared);
        tmp_pyparsing_unicode$class_creation_14__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_58;
        exception_value = exception_keeper_value_58;
        exception_tb = exception_keeper_tb_58;
        exception_lineno = exception_keeper_lineno_58;

        goto frame_exception_exit_3;
        // End of try:
        try_end_20:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_14__bases_orig);
        tmp_pyparsing_unicode$class_creation_14__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_14__bases);
        tmp_pyparsing_unicode$class_creation_14__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_14__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_14__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_14__metaclass);
        tmp_pyparsing_unicode$class_creation_14__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_14__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_14__prepared);
        tmp_pyparsing_unicode$class_creation_14__prepared = NULL;
        tmp_dictset_value = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[86]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[86]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 348;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[163], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[148]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[148]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 351;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[164], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[112]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[112]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 352;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[165], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[108]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[108]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 353;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[166], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[104]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 354;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[167], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[154]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[154]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 355;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[168], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[116]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[116]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 356;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[169], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[139]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[139]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 357;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[170], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[143]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[143]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 358;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[171], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[158]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[158]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 359;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_18;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c9d44e5c25900a7baef1825b8905c5b0_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c9d44e5c25900a7baef1825b8905c5b0_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c9d44e5c25900a7baef1825b8905c5b0_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c9d44e5c25900a7baef1825b8905c5b0_3,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_c9d44e5c25900a7baef1825b8905c5b0_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_18:;
        goto skip_nested_handling_18;
        nested_frame_exit_2:;

        goto try_except_handler_10;
        skip_nested_handling_18:;
        {
            nuitka_bool tmp_condition_result_72;
            PyObject *tmp_cmp_expr_left_18;
            PyObject *tmp_cmp_expr_right_18;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_18 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_18 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_72 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
            if (tmp_condition_result_72 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
                goto branch_yes_54;
            } else {
                goto branch_no_54;
            }
        }
        branch_yes_54:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_10;
        }
        branch_no_54:;
        {
            PyObject *tmp_assign_source_145;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_value_38;
            PyObject *tmp_tuple_element_76;
            PyObject *tmp_kwargs_value_38;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_46 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_76 = mod_consts[79];
            tmp_args_value_38 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_76);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_76 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_76);
            tmp_tuple_element_76 = locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128;
            PyTuple_SET_ITEM0(tmp_args_value_38, 2, tmp_tuple_element_76);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_38 = tmp_class_creation_3__class_decl_dict;
            frame_8b4a836a4632cc61b40b2b4efada07fc->m_frame.f_lineno = 128;
            tmp_assign_source_145 = CALL_FUNCTION(tstate, tmp_called_value_46, tmp_args_value_38, tmp_kwargs_value_38);
            Py_DECREF(tmp_args_value_38);
            if (tmp_assign_source_145 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_145;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_25 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_25);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128);
        locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_59 = exception_type;
        exception_keeper_value_59 = exception_value;
        exception_keeper_tb_59 = exception_tb;
        exception_keeper_lineno_59 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128);
        locals_pyparsing$unicode$$$class__3_pyparsing_unicode_128 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_59;
        exception_value = exception_keeper_value_59;
        exception_tb = exception_keeper_tb_59;
        exception_lineno = exception_keeper_lineno_59;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_60 = exception_type;
        exception_keeper_value_60 = exception_value;
        exception_keeper_tb_60 = exception_tb;
        exception_keeper_lineno_60 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_60;
        exception_value = exception_keeper_value_60;
        exception_tb = exception_keeper_tb_60;
        exception_lineno = exception_keeper_lineno_60;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 128;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_25);
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_61 = exception_type;
    exception_keeper_value_61 = exception_value;
    exception_keeper_tb_61 = exception_tb;
    exception_keeper_lineno_61 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
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
    exception_type = exception_keeper_type_61;
    exception_value = exception_keeper_value_61;
    exception_tb = exception_keeper_tb_61;
    exception_lineno = exception_keeper_lineno_61;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_19;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8b4a836a4632cc61b40b2b4efada07fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b4a836a4632cc61b40b2b4efada07fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b4a836a4632cc61b40b2b4efada07fc, exception_lineno);
    }



    assertFrameObject(frame_8b4a836a4632cc61b40b2b4efada07fc);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_19:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyparsing.unicode", false);

    Py_INCREF(module_pyparsing$unicode);
    return module_pyparsing$unicode;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyparsing$unicode", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
