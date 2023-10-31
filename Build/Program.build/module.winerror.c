/* Generated code for Python module 'winerror'
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

/* The "module_winerror" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_winerror;
PyDictObject *moduledict_winerror;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[5094];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[5094];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("winerror"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 5094; i++) {
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
void checkModuleConstants_winerror(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 5094; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_56282412f4ec94596eaca22f37834a48;
static PyCodeObject *codeobj_68aec540aa0f01831abf6a9d9409ad5e;
static PyCodeObject *codeobj_fc272e805ebdda798e9bb04ae76bafb1;
static PyCodeObject *codeobj_5f8372677918fb961a919a1a54db5fde;
static PyCodeObject *codeobj_08dd913ab3883d301707d4e0a4c76991;
static PyCodeObject *codeobj_b9e99c4dc83ca224890aff4654342c1c;
static PyCodeObject *codeobj_f6a05f28d70072ea198f4afdb38d66fd;
static PyCodeObject *codeobj_58a5d237e664bf4b3d818e2650a74d41;
static PyCodeObject *codeobj_c7aac94249ad9e548a79adacb4b538c1;
static PyCodeObject *codeobj_191be612690870082852db0b068abaf9;
static PyCodeObject *codeobj_f0e7be58b6a6229c402c79e219875ca6;
static PyCodeObject *codeobj_0319c14be7df20c0ec4dfb06914bb349;
static PyCodeObject *codeobj_15259c41ef433b8521b8503c2277a7c5;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[5086]); CHECK_OBJECT(module_filename_obj);
    codeobj_56282412f4ec94596eaca22f37834a48 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[5087], mod_consts[5087], NULL, NULL, 0, 0, 0);
    codeobj_68aec540aa0f01831abf6a9d9409ad5e = MAKE_CODE_OBJECT(module_filename_obj, 1980, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3860], mod_consts[3860], mod_consts[5088], NULL, 1, 0, 0);
    codeobj_fc272e805ebdda798e9bb04ae76bafb1 = MAKE_CODE_OBJECT(module_filename_obj, 2015, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3869], mod_consts[3869], mod_consts[5089], NULL, 1, 0, 0);
    codeobj_5f8372677918fb961a919a1a54db5fde = MAKE_CODE_OBJECT(module_filename_obj, 1984, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3861], mod_consts[3861], mod_consts[5089], NULL, 1, 0, 0);
    codeobj_08dd913ab3883d301707d4e0a4c76991 = MAKE_CODE_OBJECT(module_filename_obj, 1992, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3863], mod_consts[3863], mod_consts[5089], NULL, 1, 0, 0);
    codeobj_b9e99c4dc83ca224890aff4654342c1c = MAKE_CODE_OBJECT(module_filename_obj, 2011, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3868], mod_consts[3868], mod_consts[5090], NULL, 1, 0, 0);
    codeobj_f6a05f28d70072ea198f4afdb38d66fd = MAKE_CODE_OBJECT(module_filename_obj, 1972, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3858], mod_consts[3858], mod_consts[5091], NULL, 1, 0, 0);
    codeobj_58a5d237e664bf4b3d818e2650a74d41 = MAKE_CODE_OBJECT(module_filename_obj, 2000, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3865], mod_consts[3865], mod_consts[5089], NULL, 1, 0, 0);
    codeobj_c7aac94249ad9e548a79adacb4b538c1 = MAKE_CODE_OBJECT(module_filename_obj, 2019, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3870], mod_consts[3870], mod_consts[5092], NULL, 1, 0, 0);
    codeobj_191be612690870082852db0b068abaf9 = MAKE_CODE_OBJECT(module_filename_obj, 1988, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3862], mod_consts[3862], mod_consts[5092], NULL, 1, 0, 0);
    codeobj_f0e7be58b6a6229c402c79e219875ca6 = MAKE_CODE_OBJECT(module_filename_obj, 1996, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3864], mod_consts[3864], mod_consts[5092], NULL, 1, 0, 0);
    codeobj_0319c14be7df20c0ec4dfb06914bb349 = MAKE_CODE_OBJECT(module_filename_obj, 2004, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3866], mod_consts[3866], mod_consts[5092], NULL, 1, 0, 0);
    codeobj_15259c41ef433b8521b8503c2277a7c5 = MAKE_CODE_OBJECT(module_filename_obj, 1976, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3859], mod_consts[3859], mod_consts[5088], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_winerror$$$function__10_HRESULT_FROM_NT();


static PyObject *MAKE_FUNCTION_winerror$$$function__11_GetScode();


static PyObject *MAKE_FUNCTION_winerror$$$function__12_ResultFromScode();


static PyObject *MAKE_FUNCTION_winerror$$$function__1_HRESULT_FROM_WIN32();


static PyObject *MAKE_FUNCTION_winerror$$$function__2_SUCCEEDED();


static PyObject *MAKE_FUNCTION_winerror$$$function__3_FAILED();


static PyObject *MAKE_FUNCTION_winerror$$$function__4_HRESULT_CODE();


static PyObject *MAKE_FUNCTION_winerror$$$function__5_SCODE_CODE();


static PyObject *MAKE_FUNCTION_winerror$$$function__6_HRESULT_FACILITY();


static PyObject *MAKE_FUNCTION_winerror$$$function__7_SCODE_FACILITY();


static PyObject *MAKE_FUNCTION_winerror$$$function__8_HRESULT_SEVERITY();


static PyObject *MAKE_FUNCTION_winerror$$$function__9_SCODE_SEVERITY();


// The module function definitions.
static PyObject *impl_winerror$$$function__1_HRESULT_FROM_WIN32(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_scode = python_pars[0];
    struct Nuitka_FrameObject *frame_f6a05f28d70072ea198f4afdb38d66fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f6a05f28d70072ea198f4afdb38d66fd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f6a05f28d70072ea198f4afdb38d66fd)) {
        Py_XDECREF(cache_frame_f6a05f28d70072ea198f4afdb38d66fd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f6a05f28d70072ea198f4afdb38d66fd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f6a05f28d70072ea198f4afdb38d66fd = MAKE_FUNCTION_FRAME(tstate, codeobj_f6a05f28d70072ea198f4afdb38d66fd, module_winerror, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f6a05f28d70072ea198f4afdb38d66fd->m_type_description == NULL);
    frame_f6a05f28d70072ea198f4afdb38d66fd = cache_frame_f6a05f28d70072ea198f4afdb38d66fd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f6a05f28d70072ea198f4afdb38d66fd);
    assert(Py_REFCNT(frame_f6a05f28d70072ea198f4afdb38d66fd) == 2);

    // Framed code:
    {
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        tmp_bitor_expr_left_1 = mod_consts[0];
        CHECK_OBJECT(par_scode);
        tmp_bitand_expr_left_1 = par_scode;
        tmp_bitand_expr_right_1 = mod_consts[1];
        tmp_bitor_expr_right_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_bitor_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1973;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_BITOR_OBJECT_LONG_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1973;
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
        exception_tb = MAKE_TRACEBACK(frame_f6a05f28d70072ea198f4afdb38d66fd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f6a05f28d70072ea198f4afdb38d66fd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f6a05f28d70072ea198f4afdb38d66fd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f6a05f28d70072ea198f4afdb38d66fd,
        type_description_1,
        par_scode
    );


    // Release cached frame if used for exception.
    if (frame_f6a05f28d70072ea198f4afdb38d66fd == cache_frame_f6a05f28d70072ea198f4afdb38d66fd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f6a05f28d70072ea198f4afdb38d66fd);
        cache_frame_f6a05f28d70072ea198f4afdb38d66fd = NULL;
    }

    assertFrameObject(frame_f6a05f28d70072ea198f4afdb38d66fd);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_scode);
    Py_DECREF(par_scode);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_scode);
    Py_DECREF(par_scode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winerror$$$function__2_SUCCEEDED(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_Status = python_pars[0];
    struct Nuitka_FrameObject *frame_15259c41ef433b8521b8503c2277a7c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_15259c41ef433b8521b8503c2277a7c5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_15259c41ef433b8521b8503c2277a7c5)) {
        Py_XDECREF(cache_frame_15259c41ef433b8521b8503c2277a7c5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_15259c41ef433b8521b8503c2277a7c5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_15259c41ef433b8521b8503c2277a7c5 = MAKE_FUNCTION_FRAME(tstate, codeobj_15259c41ef433b8521b8503c2277a7c5, module_winerror, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_15259c41ef433b8521b8503c2277a7c5->m_type_description == NULL);
    frame_15259c41ef433b8521b8503c2277a7c5 = cache_frame_15259c41ef433b8521b8503c2277a7c5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_15259c41ef433b8521b8503c2277a7c5);
    assert(Py_REFCNT(frame_15259c41ef433b8521b8503c2277a7c5) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_Status);
        tmp_cmp_expr_left_1 = par_Status;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_return_value = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1977;
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
        exception_tb = MAKE_TRACEBACK(frame_15259c41ef433b8521b8503c2277a7c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_15259c41ef433b8521b8503c2277a7c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_15259c41ef433b8521b8503c2277a7c5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_15259c41ef433b8521b8503c2277a7c5,
        type_description_1,
        par_Status
    );


    // Release cached frame if used for exception.
    if (frame_15259c41ef433b8521b8503c2277a7c5 == cache_frame_15259c41ef433b8521b8503c2277a7c5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_15259c41ef433b8521b8503c2277a7c5);
        cache_frame_15259c41ef433b8521b8503c2277a7c5 = NULL;
    }

    assertFrameObject(frame_15259c41ef433b8521b8503c2277a7c5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_Status);
    Py_DECREF(par_Status);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_Status);
    Py_DECREF(par_Status);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winerror$$$function__3_FAILED(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_Status = python_pars[0];
    struct Nuitka_FrameObject *frame_68aec540aa0f01831abf6a9d9409ad5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_68aec540aa0f01831abf6a9d9409ad5e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_68aec540aa0f01831abf6a9d9409ad5e)) {
        Py_XDECREF(cache_frame_68aec540aa0f01831abf6a9d9409ad5e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_68aec540aa0f01831abf6a9d9409ad5e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_68aec540aa0f01831abf6a9d9409ad5e = MAKE_FUNCTION_FRAME(tstate, codeobj_68aec540aa0f01831abf6a9d9409ad5e, module_winerror, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_68aec540aa0f01831abf6a9d9409ad5e->m_type_description == NULL);
    frame_68aec540aa0f01831abf6a9d9409ad5e = cache_frame_68aec540aa0f01831abf6a9d9409ad5e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_68aec540aa0f01831abf6a9d9409ad5e);
    assert(Py_REFCNT(frame_68aec540aa0f01831abf6a9d9409ad5e) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_Status);
        tmp_cmp_expr_left_1 = par_Status;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_return_value = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1981;
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
        exception_tb = MAKE_TRACEBACK(frame_68aec540aa0f01831abf6a9d9409ad5e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_68aec540aa0f01831abf6a9d9409ad5e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_68aec540aa0f01831abf6a9d9409ad5e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_68aec540aa0f01831abf6a9d9409ad5e,
        type_description_1,
        par_Status
    );


    // Release cached frame if used for exception.
    if (frame_68aec540aa0f01831abf6a9d9409ad5e == cache_frame_68aec540aa0f01831abf6a9d9409ad5e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_68aec540aa0f01831abf6a9d9409ad5e);
        cache_frame_68aec540aa0f01831abf6a9d9409ad5e = NULL;
    }

    assertFrameObject(frame_68aec540aa0f01831abf6a9d9409ad5e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_Status);
    Py_DECREF(par_Status);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_Status);
    Py_DECREF(par_Status);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winerror$$$function__4_HRESULT_CODE(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_hr = python_pars[0];
    struct Nuitka_FrameObject *frame_5f8372677918fb961a919a1a54db5fde;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5f8372677918fb961a919a1a54db5fde = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5f8372677918fb961a919a1a54db5fde)) {
        Py_XDECREF(cache_frame_5f8372677918fb961a919a1a54db5fde);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f8372677918fb961a919a1a54db5fde == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f8372677918fb961a919a1a54db5fde = MAKE_FUNCTION_FRAME(tstate, codeobj_5f8372677918fb961a919a1a54db5fde, module_winerror, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5f8372677918fb961a919a1a54db5fde->m_type_description == NULL);
    frame_5f8372677918fb961a919a1a54db5fde = cache_frame_5f8372677918fb961a919a1a54db5fde;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5f8372677918fb961a919a1a54db5fde);
    assert(Py_REFCNT(frame_5f8372677918fb961a919a1a54db5fde) == 2);

    // Framed code:
    {
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(par_hr);
        tmp_bitand_expr_left_1 = par_hr;
        tmp_bitand_expr_right_1 = mod_consts[1];
        tmp_return_value = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1985;
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
        exception_tb = MAKE_TRACEBACK(frame_5f8372677918fb961a919a1a54db5fde, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f8372677918fb961a919a1a54db5fde->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f8372677918fb961a919a1a54db5fde, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f8372677918fb961a919a1a54db5fde,
        type_description_1,
        par_hr
    );


    // Release cached frame if used for exception.
    if (frame_5f8372677918fb961a919a1a54db5fde == cache_frame_5f8372677918fb961a919a1a54db5fde) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5f8372677918fb961a919a1a54db5fde);
        cache_frame_5f8372677918fb961a919a1a54db5fde = NULL;
    }

    assertFrameObject(frame_5f8372677918fb961a919a1a54db5fde);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_hr);
    Py_DECREF(par_hr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hr);
    Py_DECREF(par_hr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winerror$$$function__5_SCODE_CODE(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_sc = python_pars[0];
    struct Nuitka_FrameObject *frame_191be612690870082852db0b068abaf9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_191be612690870082852db0b068abaf9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_191be612690870082852db0b068abaf9)) {
        Py_XDECREF(cache_frame_191be612690870082852db0b068abaf9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_191be612690870082852db0b068abaf9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_191be612690870082852db0b068abaf9 = MAKE_FUNCTION_FRAME(tstate, codeobj_191be612690870082852db0b068abaf9, module_winerror, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_191be612690870082852db0b068abaf9->m_type_description == NULL);
    frame_191be612690870082852db0b068abaf9 = cache_frame_191be612690870082852db0b068abaf9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_191be612690870082852db0b068abaf9);
    assert(Py_REFCNT(frame_191be612690870082852db0b068abaf9) == 2);

    // Framed code:
    {
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(par_sc);
        tmp_bitand_expr_left_1 = par_sc;
        tmp_bitand_expr_right_1 = mod_consts[1];
        tmp_return_value = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1989;
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
        exception_tb = MAKE_TRACEBACK(frame_191be612690870082852db0b068abaf9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_191be612690870082852db0b068abaf9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_191be612690870082852db0b068abaf9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_191be612690870082852db0b068abaf9,
        type_description_1,
        par_sc
    );


    // Release cached frame if used for exception.
    if (frame_191be612690870082852db0b068abaf9 == cache_frame_191be612690870082852db0b068abaf9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_191be612690870082852db0b068abaf9);
        cache_frame_191be612690870082852db0b068abaf9 = NULL;
    }

    assertFrameObject(frame_191be612690870082852db0b068abaf9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sc);
    Py_DECREF(par_sc);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sc);
    Py_DECREF(par_sc);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winerror$$$function__6_HRESULT_FACILITY(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_hr = python_pars[0];
    struct Nuitka_FrameObject *frame_08dd913ab3883d301707d4e0a4c76991;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_08dd913ab3883d301707d4e0a4c76991 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_08dd913ab3883d301707d4e0a4c76991)) {
        Py_XDECREF(cache_frame_08dd913ab3883d301707d4e0a4c76991);

#if _DEBUG_REFCOUNTS
        if (cache_frame_08dd913ab3883d301707d4e0a4c76991 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_08dd913ab3883d301707d4e0a4c76991 = MAKE_FUNCTION_FRAME(tstate, codeobj_08dd913ab3883d301707d4e0a4c76991, module_winerror, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_08dd913ab3883d301707d4e0a4c76991->m_type_description == NULL);
    frame_08dd913ab3883d301707d4e0a4c76991 = cache_frame_08dd913ab3883d301707d4e0a4c76991;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_08dd913ab3883d301707d4e0a4c76991);
    assert(Py_REFCNT(frame_08dd913ab3883d301707d4e0a4c76991) == 2);

    // Framed code:
    {
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        CHECK_OBJECT(par_hr);
        tmp_rshift_expr_left_1 = par_hr;
        tmp_rshift_expr_right_1 = mod_consts[3];
        tmp_bitand_expr_left_1 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        if (tmp_bitand_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1993;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_1 = mod_consts[4];
        tmp_return_value = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1993;
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
        exception_tb = MAKE_TRACEBACK(frame_08dd913ab3883d301707d4e0a4c76991, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_08dd913ab3883d301707d4e0a4c76991->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08dd913ab3883d301707d4e0a4c76991, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_08dd913ab3883d301707d4e0a4c76991,
        type_description_1,
        par_hr
    );


    // Release cached frame if used for exception.
    if (frame_08dd913ab3883d301707d4e0a4c76991 == cache_frame_08dd913ab3883d301707d4e0a4c76991) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_08dd913ab3883d301707d4e0a4c76991);
        cache_frame_08dd913ab3883d301707d4e0a4c76991 = NULL;
    }

    assertFrameObject(frame_08dd913ab3883d301707d4e0a4c76991);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_hr);
    Py_DECREF(par_hr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hr);
    Py_DECREF(par_hr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winerror$$$function__7_SCODE_FACILITY(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_sc = python_pars[0];
    struct Nuitka_FrameObject *frame_f0e7be58b6a6229c402c79e219875ca6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f0e7be58b6a6229c402c79e219875ca6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f0e7be58b6a6229c402c79e219875ca6)) {
        Py_XDECREF(cache_frame_f0e7be58b6a6229c402c79e219875ca6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f0e7be58b6a6229c402c79e219875ca6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f0e7be58b6a6229c402c79e219875ca6 = MAKE_FUNCTION_FRAME(tstate, codeobj_f0e7be58b6a6229c402c79e219875ca6, module_winerror, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f0e7be58b6a6229c402c79e219875ca6->m_type_description == NULL);
    frame_f0e7be58b6a6229c402c79e219875ca6 = cache_frame_f0e7be58b6a6229c402c79e219875ca6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f0e7be58b6a6229c402c79e219875ca6);
    assert(Py_REFCNT(frame_f0e7be58b6a6229c402c79e219875ca6) == 2);

    // Framed code:
    {
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        CHECK_OBJECT(par_sc);
        tmp_rshift_expr_left_1 = par_sc;
        tmp_rshift_expr_right_1 = mod_consts[3];
        tmp_bitand_expr_left_1 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        if (tmp_bitand_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1997;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_1 = mod_consts[4];
        tmp_return_value = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1997;
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
        exception_tb = MAKE_TRACEBACK(frame_f0e7be58b6a6229c402c79e219875ca6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0e7be58b6a6229c402c79e219875ca6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0e7be58b6a6229c402c79e219875ca6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f0e7be58b6a6229c402c79e219875ca6,
        type_description_1,
        par_sc
    );


    // Release cached frame if used for exception.
    if (frame_f0e7be58b6a6229c402c79e219875ca6 == cache_frame_f0e7be58b6a6229c402c79e219875ca6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f0e7be58b6a6229c402c79e219875ca6);
        cache_frame_f0e7be58b6a6229c402c79e219875ca6 = NULL;
    }

    assertFrameObject(frame_f0e7be58b6a6229c402c79e219875ca6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sc);
    Py_DECREF(par_sc);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sc);
    Py_DECREF(par_sc);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winerror$$$function__8_HRESULT_SEVERITY(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_hr = python_pars[0];
    struct Nuitka_FrameObject *frame_58a5d237e664bf4b3d818e2650a74d41;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_58a5d237e664bf4b3d818e2650a74d41 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_58a5d237e664bf4b3d818e2650a74d41)) {
        Py_XDECREF(cache_frame_58a5d237e664bf4b3d818e2650a74d41);

#if _DEBUG_REFCOUNTS
        if (cache_frame_58a5d237e664bf4b3d818e2650a74d41 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_58a5d237e664bf4b3d818e2650a74d41 = MAKE_FUNCTION_FRAME(tstate, codeobj_58a5d237e664bf4b3d818e2650a74d41, module_winerror, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_58a5d237e664bf4b3d818e2650a74d41->m_type_description == NULL);
    frame_58a5d237e664bf4b3d818e2650a74d41 = cache_frame_58a5d237e664bf4b3d818e2650a74d41;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_58a5d237e664bf4b3d818e2650a74d41);
    assert(Py_REFCNT(frame_58a5d237e664bf4b3d818e2650a74d41) == 2);

    // Framed code:
    {
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        CHECK_OBJECT(par_hr);
        tmp_rshift_expr_left_1 = par_hr;
        tmp_rshift_expr_right_1 = mod_consts[5];
        tmp_bitand_expr_left_1 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        if (tmp_bitand_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2001;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_1 = mod_consts[6];
        tmp_return_value = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2001;
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
        exception_tb = MAKE_TRACEBACK(frame_58a5d237e664bf4b3d818e2650a74d41, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_58a5d237e664bf4b3d818e2650a74d41->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_58a5d237e664bf4b3d818e2650a74d41, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_58a5d237e664bf4b3d818e2650a74d41,
        type_description_1,
        par_hr
    );


    // Release cached frame if used for exception.
    if (frame_58a5d237e664bf4b3d818e2650a74d41 == cache_frame_58a5d237e664bf4b3d818e2650a74d41) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_58a5d237e664bf4b3d818e2650a74d41);
        cache_frame_58a5d237e664bf4b3d818e2650a74d41 = NULL;
    }

    assertFrameObject(frame_58a5d237e664bf4b3d818e2650a74d41);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_hr);
    Py_DECREF(par_hr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hr);
    Py_DECREF(par_hr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winerror$$$function__9_SCODE_SEVERITY(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_sc = python_pars[0];
    struct Nuitka_FrameObject *frame_0319c14be7df20c0ec4dfb06914bb349;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0319c14be7df20c0ec4dfb06914bb349 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0319c14be7df20c0ec4dfb06914bb349)) {
        Py_XDECREF(cache_frame_0319c14be7df20c0ec4dfb06914bb349);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0319c14be7df20c0ec4dfb06914bb349 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0319c14be7df20c0ec4dfb06914bb349 = MAKE_FUNCTION_FRAME(tstate, codeobj_0319c14be7df20c0ec4dfb06914bb349, module_winerror, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0319c14be7df20c0ec4dfb06914bb349->m_type_description == NULL);
    frame_0319c14be7df20c0ec4dfb06914bb349 = cache_frame_0319c14be7df20c0ec4dfb06914bb349;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0319c14be7df20c0ec4dfb06914bb349);
    assert(Py_REFCNT(frame_0319c14be7df20c0ec4dfb06914bb349) == 2);

    // Framed code:
    {
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        CHECK_OBJECT(par_sc);
        tmp_rshift_expr_left_1 = par_sc;
        tmp_rshift_expr_right_1 = mod_consts[5];
        tmp_bitand_expr_left_1 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        if (tmp_bitand_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2005;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_1 = mod_consts[6];
        tmp_return_value = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2005;
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
        exception_tb = MAKE_TRACEBACK(frame_0319c14be7df20c0ec4dfb06914bb349, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0319c14be7df20c0ec4dfb06914bb349->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0319c14be7df20c0ec4dfb06914bb349, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0319c14be7df20c0ec4dfb06914bb349,
        type_description_1,
        par_sc
    );


    // Release cached frame if used for exception.
    if (frame_0319c14be7df20c0ec4dfb06914bb349 == cache_frame_0319c14be7df20c0ec4dfb06914bb349) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0319c14be7df20c0ec4dfb06914bb349);
        cache_frame_0319c14be7df20c0ec4dfb06914bb349 = NULL;
    }

    assertFrameObject(frame_0319c14be7df20c0ec4dfb06914bb349);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sc);
    Py_DECREF(par_sc);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sc);
    Py_DECREF(par_sc);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winerror$$$function__10_HRESULT_FROM_NT(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_b9e99c4dc83ca224890aff4654342c1c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b9e99c4dc83ca224890aff4654342c1c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b9e99c4dc83ca224890aff4654342c1c)) {
        Py_XDECREF(cache_frame_b9e99c4dc83ca224890aff4654342c1c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b9e99c4dc83ca224890aff4654342c1c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b9e99c4dc83ca224890aff4654342c1c = MAKE_FUNCTION_FRAME(tstate, codeobj_b9e99c4dc83ca224890aff4654342c1c, module_winerror, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b9e99c4dc83ca224890aff4654342c1c->m_type_description == NULL);
    frame_b9e99c4dc83ca224890aff4654342c1c = cache_frame_b9e99c4dc83ca224890aff4654342c1c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b9e99c4dc83ca224890aff4654342c1c);
    assert(Py_REFCNT(frame_b9e99c4dc83ca224890aff4654342c1c) == 2);

    // Framed code:
    {
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_bitor_expr_left_1 = par_x;
        tmp_bitor_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_winerror, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_bitor_expr_right_1 == NULL)) {
            tmp_bitor_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_bitor_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2012;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2012;
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
        exception_tb = MAKE_TRACEBACK(frame_b9e99c4dc83ca224890aff4654342c1c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b9e99c4dc83ca224890aff4654342c1c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9e99c4dc83ca224890aff4654342c1c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b9e99c4dc83ca224890aff4654342c1c,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_b9e99c4dc83ca224890aff4654342c1c == cache_frame_b9e99c4dc83ca224890aff4654342c1c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b9e99c4dc83ca224890aff4654342c1c);
        cache_frame_b9e99c4dc83ca224890aff4654342c1c = NULL;
    }

    assertFrameObject(frame_b9e99c4dc83ca224890aff4654342c1c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winerror$$$function__11_GetScode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_hr = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_hr);
    tmp_return_value = par_hr;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hr);
    Py_DECREF(par_hr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winerror$$$function__12_ResultFromScode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_sc = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_sc);
    tmp_return_value = par_sc;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sc);
    Py_DECREF(par_sc);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_winerror$$$function__10_HRESULT_FROM_NT() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winerror$$$function__10_HRESULT_FROM_NT,
        mod_consts[3868],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b9e99c4dc83ca224890aff4654342c1c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winerror,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winerror$$$function__11_GetScode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winerror$$$function__11_GetScode,
        mod_consts[3869],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fc272e805ebdda798e9bb04ae76bafb1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winerror,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winerror$$$function__12_ResultFromScode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winerror$$$function__12_ResultFromScode,
        mod_consts[3870],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c7aac94249ad9e548a79adacb4b538c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winerror,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winerror$$$function__1_HRESULT_FROM_WIN32() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winerror$$$function__1_HRESULT_FROM_WIN32,
        mod_consts[3858],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f6a05f28d70072ea198f4afdb38d66fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winerror,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winerror$$$function__2_SUCCEEDED() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winerror$$$function__2_SUCCEEDED,
        mod_consts[3859],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_15259c41ef433b8521b8503c2277a7c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winerror,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winerror$$$function__3_FAILED() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winerror$$$function__3_FAILED,
        mod_consts[3860],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_68aec540aa0f01831abf6a9d9409ad5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winerror,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winerror$$$function__4_HRESULT_CODE() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winerror$$$function__4_HRESULT_CODE,
        mod_consts[3861],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5f8372677918fb961a919a1a54db5fde,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winerror,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winerror$$$function__5_SCODE_CODE() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winerror$$$function__5_SCODE_CODE,
        mod_consts[3862],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_191be612690870082852db0b068abaf9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winerror,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winerror$$$function__6_HRESULT_FACILITY() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winerror$$$function__6_HRESULT_FACILITY,
        mod_consts[3863],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_08dd913ab3883d301707d4e0a4c76991,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winerror,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winerror$$$function__7_SCODE_FACILITY() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winerror$$$function__7_SCODE_FACILITY,
        mod_consts[3864],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f0e7be58b6a6229c402c79e219875ca6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winerror,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winerror$$$function__8_HRESULT_SEVERITY() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winerror$$$function__8_HRESULT_SEVERITY,
        mod_consts[3865],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_58a5d237e664bf4b3d818e2650a74d41,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winerror,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winerror$$$function__9_SCODE_SEVERITY() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winerror$$$function__9_SCODE_SEVERITY,
        mod_consts[3866],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0319c14be7df20c0ec4dfb06914bb349,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winerror,
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

function_impl_code functable_winerror[] = {
    impl_winerror$$$function__1_HRESULT_FROM_WIN32,
    impl_winerror$$$function__2_SUCCEEDED,
    impl_winerror$$$function__3_FAILED,
    impl_winerror$$$function__4_HRESULT_CODE,
    impl_winerror$$$function__5_SCODE_CODE,
    impl_winerror$$$function__6_HRESULT_FACILITY,
    impl_winerror$$$function__7_SCODE_FACILITY,
    impl_winerror$$$function__8_HRESULT_SEVERITY,
    impl_winerror$$$function__9_SCODE_SEVERITY,
    impl_winerror$$$function__10_HRESULT_FROM_NT,
    impl_winerror$$$function__11_GetScode,
    impl_winerror$$$function__12_ResultFromScode,
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

    function_impl_code *current = functable_winerror;
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

    if (offset > sizeof(functable_winerror) || offset < 0) {
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
        functable_winerror[offset],
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
        module_winerror,
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
PyObject *modulecode_winerror(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("winerror");

    // Store the module for future use.
    module_winerror = module;

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
        PRINT_STRING("winerror: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("winerror: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initwinerror\n");

    moduledict_winerror = MODULE_DICT(module_winerror);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_winerror,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_winerror,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[5093]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winerror, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_winerror,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winerror, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_winerror,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winerror, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_winerror,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_winerror);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_winerror, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_winerror);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_winerror, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_56282412f4ec94596eaca22f37834a48;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_2);
    }
    frame_56282412f4ec94596eaca22f37834a48 = MAKE_MODULE_FRAME(codeobj_56282412f4ec94596eaca22f37834a48, module_winerror);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_56282412f4ec94596eaca22f37834a48);
    assert(Py_REFCNT(frame_56282412f4ec94596eaca22f37834a48) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_winerror, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_winerror, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[13], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_56282412f4ec94596eaca22f37834a48, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_56282412f4ec94596eaca22f37834a48->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_56282412f4ec94596eaca22f37834a48, exception_lineno);
    }



    assertFrameObject(frame_56282412f4ec94596eaca22f37834a48);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[3];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[2];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[5];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[100];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[2];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[2];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[2];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[118];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[100];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[3];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[140];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[142];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[144];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[146];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[5];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[160];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[162];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[164];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[166];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[168];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[170];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[172];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[174];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[176];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[178];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[180];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[182];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[190];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[197];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[199];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[201];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[203];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[205];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[207];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[209];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[211];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[213];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[215];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[217];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[219];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[221];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[223];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[225];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[227];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[229];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[231];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[233];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[235];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[237];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[239];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[241];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[243];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[245];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[247];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[249];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[251];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[253];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[255];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[257];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[259];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[261];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[263];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[265];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = mod_consts[267];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[269];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[271];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[273];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[275];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = mod_consts[277];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = mod_consts[279];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = mod_consts[281];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = mod_consts[283];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[285];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[287];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = mod_consts[289];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[291];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = mod_consts[293];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[295];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = mod_consts[297];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[299];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[301];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        tmp_assign_source_171 = mod_consts[303];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[305];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = mod_consts[307];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = mod_consts[309];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        tmp_assign_source_175 = mod_consts[311];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = mod_consts[313];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = mod_consts[315];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = mod_consts[317];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[318], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[319];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[321];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = mod_consts[323];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = mod_consts[325];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = mod_consts[327];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = mod_consts[329];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = mod_consts[331];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        tmp_assign_source_186 = mod_consts[333];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        tmp_assign_source_187 = mod_consts[335];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        tmp_assign_source_188 = mod_consts[337];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = mod_consts[339];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        tmp_assign_source_190 = mod_consts[341];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = mod_consts[343];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        tmp_assign_source_192 = mod_consts[345];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        tmp_assign_source_193 = mod_consts[347];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        tmp_assign_source_194 = mod_consts[349];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        tmp_assign_source_195 = mod_consts[351];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        tmp_assign_source_196 = mod_consts[353];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        tmp_assign_source_197 = mod_consts[355];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        tmp_assign_source_198 = mod_consts[357];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[358], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        tmp_assign_source_199 = mod_consts[359];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        tmp_assign_source_200 = mod_consts[361];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        tmp_assign_source_201 = mod_consts[363];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[364], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        tmp_assign_source_202 = mod_consts[365];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[366], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        tmp_assign_source_203 = mod_consts[367];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        tmp_assign_source_204 = mod_consts[369];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        tmp_assign_source_205 = mod_consts[371];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[372], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        tmp_assign_source_206 = mod_consts[373];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[374], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        tmp_assign_source_207 = mod_consts[375];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[376], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        tmp_assign_source_208 = mod_consts[377];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[378], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        tmp_assign_source_209 = mod_consts[379];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[380], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        tmp_assign_source_210 = mod_consts[381];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[382], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        tmp_assign_source_211 = mod_consts[383];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[384], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        tmp_assign_source_212 = mod_consts[385];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        tmp_assign_source_213 = mod_consts[387];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[388], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        tmp_assign_source_214 = mod_consts[389];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_214);
    }
    {
        PyObject *tmp_assign_source_215;
        tmp_assign_source_215 = mod_consts[391];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[392], tmp_assign_source_215);
    }
    {
        PyObject *tmp_assign_source_216;
        tmp_assign_source_216 = mod_consts[393];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[394], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        tmp_assign_source_217 = mod_consts[395];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[396], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        tmp_assign_source_218 = mod_consts[397];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[398], tmp_assign_source_218);
    }
    {
        PyObject *tmp_assign_source_219;
        tmp_assign_source_219 = mod_consts[399];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[400], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        tmp_assign_source_220 = mod_consts[401];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[402], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        tmp_assign_source_221 = mod_consts[403];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[404], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        tmp_assign_source_222 = mod_consts[405];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[406], tmp_assign_source_222);
    }
    {
        PyObject *tmp_assign_source_223;
        tmp_assign_source_223 = mod_consts[407];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[408], tmp_assign_source_223);
    }
    {
        PyObject *tmp_assign_source_224;
        tmp_assign_source_224 = mod_consts[409];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[410], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        tmp_assign_source_225 = mod_consts[411];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[412], tmp_assign_source_225);
    }
    {
        PyObject *tmp_assign_source_226;
        tmp_assign_source_226 = mod_consts[413];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[414], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        tmp_assign_source_227 = mod_consts[415];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[416], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        tmp_assign_source_228 = mod_consts[417];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[418], tmp_assign_source_228);
    }
    {
        PyObject *tmp_assign_source_229;
        tmp_assign_source_229 = mod_consts[419];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[420], tmp_assign_source_229);
    }
    {
        PyObject *tmp_assign_source_230;
        tmp_assign_source_230 = mod_consts[421];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[422], tmp_assign_source_230);
    }
    {
        PyObject *tmp_assign_source_231;
        tmp_assign_source_231 = mod_consts[423];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[424], tmp_assign_source_231);
    }
    {
        PyObject *tmp_assign_source_232;
        tmp_assign_source_232 = mod_consts[425];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[426], tmp_assign_source_232);
    }
    {
        PyObject *tmp_assign_source_233;
        tmp_assign_source_233 = mod_consts[427];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[428], tmp_assign_source_233);
    }
    {
        PyObject *tmp_assign_source_234;
        tmp_assign_source_234 = mod_consts[429];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[430], tmp_assign_source_234);
    }
    {
        PyObject *tmp_assign_source_235;
        tmp_assign_source_235 = mod_consts[431];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[432], tmp_assign_source_235);
    }
    {
        PyObject *tmp_assign_source_236;
        tmp_assign_source_236 = mod_consts[433];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[434], tmp_assign_source_236);
    }
    {
        PyObject *tmp_assign_source_237;
        tmp_assign_source_237 = mod_consts[435];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[436], tmp_assign_source_237);
    }
    {
        PyObject *tmp_assign_source_238;
        tmp_assign_source_238 = mod_consts[437];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[438], tmp_assign_source_238);
    }
    {
        PyObject *tmp_assign_source_239;
        tmp_assign_source_239 = mod_consts[439];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[440], tmp_assign_source_239);
    }
    {
        PyObject *tmp_assign_source_240;
        tmp_assign_source_240 = mod_consts[441];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[442], tmp_assign_source_240);
    }
    {
        PyObject *tmp_assign_source_241;
        tmp_assign_source_241 = mod_consts[443];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[444], tmp_assign_source_241);
    }
    {
        PyObject *tmp_assign_source_242;
        tmp_assign_source_242 = mod_consts[445];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[446], tmp_assign_source_242);
    }
    {
        PyObject *tmp_assign_source_243;
        tmp_assign_source_243 = mod_consts[447];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[448], tmp_assign_source_243);
    }
    {
        PyObject *tmp_assign_source_244;
        tmp_assign_source_244 = mod_consts[449];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[450], tmp_assign_source_244);
    }
    {
        PyObject *tmp_assign_source_245;
        tmp_assign_source_245 = mod_consts[451];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[452], tmp_assign_source_245);
    }
    {
        PyObject *tmp_assign_source_246;
        tmp_assign_source_246 = mod_consts[453];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[454], tmp_assign_source_246);
    }
    {
        PyObject *tmp_assign_source_247;
        tmp_assign_source_247 = mod_consts[455];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[456], tmp_assign_source_247);
    }
    {
        PyObject *tmp_assign_source_248;
        tmp_assign_source_248 = mod_consts[457];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[458], tmp_assign_source_248);
    }
    {
        PyObject *tmp_assign_source_249;
        tmp_assign_source_249 = mod_consts[459];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[460], tmp_assign_source_249);
    }
    {
        PyObject *tmp_assign_source_250;
        tmp_assign_source_250 = mod_consts[461];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[462], tmp_assign_source_250);
    }
    {
        PyObject *tmp_assign_source_251;
        tmp_assign_source_251 = mod_consts[463];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[464], tmp_assign_source_251);
    }
    {
        PyObject *tmp_assign_source_252;
        tmp_assign_source_252 = mod_consts[465];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[466], tmp_assign_source_252);
    }
    {
        PyObject *tmp_assign_source_253;
        tmp_assign_source_253 = mod_consts[467];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[468], tmp_assign_source_253);
    }
    {
        PyObject *tmp_assign_source_254;
        tmp_assign_source_254 = mod_consts[469];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[470], tmp_assign_source_254);
    }
    {
        PyObject *tmp_assign_source_255;
        tmp_assign_source_255 = mod_consts[471];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[472], tmp_assign_source_255);
    }
    {
        PyObject *tmp_assign_source_256;
        tmp_assign_source_256 = mod_consts[473];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[474], tmp_assign_source_256);
    }
    {
        PyObject *tmp_assign_source_257;
        tmp_assign_source_257 = mod_consts[475];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[476], tmp_assign_source_257);
    }
    {
        PyObject *tmp_assign_source_258;
        tmp_assign_source_258 = mod_consts[477];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[478], tmp_assign_source_258);
    }
    {
        PyObject *tmp_assign_source_259;
        tmp_assign_source_259 = mod_consts[479];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[480], tmp_assign_source_259);
    }
    {
        PyObject *tmp_assign_source_260;
        tmp_assign_source_260 = mod_consts[481];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[482], tmp_assign_source_260);
    }
    {
        PyObject *tmp_assign_source_261;
        tmp_assign_source_261 = mod_consts[483];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[484], tmp_assign_source_261);
    }
    {
        PyObject *tmp_assign_source_262;
        tmp_assign_source_262 = mod_consts[485];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[486], tmp_assign_source_262);
    }
    {
        PyObject *tmp_assign_source_263;
        tmp_assign_source_263 = mod_consts[487];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[488], tmp_assign_source_263);
    }
    {
        PyObject *tmp_assign_source_264;
        tmp_assign_source_264 = mod_consts[489];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[490], tmp_assign_source_264);
    }
    {
        PyObject *tmp_assign_source_265;
        tmp_assign_source_265 = mod_consts[491];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[492], tmp_assign_source_265);
    }
    {
        PyObject *tmp_assign_source_266;
        tmp_assign_source_266 = mod_consts[493];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[494], tmp_assign_source_266);
    }
    {
        PyObject *tmp_assign_source_267;
        tmp_assign_source_267 = mod_consts[495];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[496], tmp_assign_source_267);
    }
    {
        PyObject *tmp_assign_source_268;
        tmp_assign_source_268 = mod_consts[497];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[498], tmp_assign_source_268);
    }
    {
        PyObject *tmp_assign_source_269;
        tmp_assign_source_269 = mod_consts[499];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[500], tmp_assign_source_269);
    }
    {
        PyObject *tmp_assign_source_270;
        tmp_assign_source_270 = mod_consts[501];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[502], tmp_assign_source_270);
    }
    {
        PyObject *tmp_assign_source_271;
        tmp_assign_source_271 = mod_consts[503];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[504], tmp_assign_source_271);
    }
    {
        PyObject *tmp_assign_source_272;
        tmp_assign_source_272 = mod_consts[505];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[506], tmp_assign_source_272);
    }
    {
        PyObject *tmp_assign_source_273;
        tmp_assign_source_273 = mod_consts[507];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[508], tmp_assign_source_273);
    }
    {
        PyObject *tmp_assign_source_274;
        tmp_assign_source_274 = mod_consts[509];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[510], tmp_assign_source_274);
    }
    {
        PyObject *tmp_assign_source_275;
        tmp_assign_source_275 = mod_consts[511];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[512], tmp_assign_source_275);
    }
    {
        PyObject *tmp_assign_source_276;
        tmp_assign_source_276 = mod_consts[513];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[514], tmp_assign_source_276);
    }
    {
        PyObject *tmp_assign_source_277;
        tmp_assign_source_277 = mod_consts[515];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[516], tmp_assign_source_277);
    }
    {
        PyObject *tmp_assign_source_278;
        tmp_assign_source_278 = mod_consts[517];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[518], tmp_assign_source_278);
    }
    {
        PyObject *tmp_assign_source_279;
        tmp_assign_source_279 = mod_consts[519];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[520], tmp_assign_source_279);
    }
    {
        PyObject *tmp_assign_source_280;
        tmp_assign_source_280 = mod_consts[521];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[522], tmp_assign_source_280);
    }
    {
        PyObject *tmp_assign_source_281;
        tmp_assign_source_281 = mod_consts[523];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[524], tmp_assign_source_281);
    }
    {
        PyObject *tmp_assign_source_282;
        tmp_assign_source_282 = mod_consts[525];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[526], tmp_assign_source_282);
    }
    {
        PyObject *tmp_assign_source_283;
        tmp_assign_source_283 = mod_consts[527];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[528], tmp_assign_source_283);
    }
    {
        PyObject *tmp_assign_source_284;
        tmp_assign_source_284 = mod_consts[529];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[530], tmp_assign_source_284);
    }
    {
        PyObject *tmp_assign_source_285;
        tmp_assign_source_285 = mod_consts[531];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[532], tmp_assign_source_285);
    }
    {
        PyObject *tmp_assign_source_286;
        tmp_assign_source_286 = mod_consts[533];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[534], tmp_assign_source_286);
    }
    {
        PyObject *tmp_assign_source_287;
        tmp_assign_source_287 = mod_consts[535];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[536], tmp_assign_source_287);
    }
    {
        PyObject *tmp_assign_source_288;
        tmp_assign_source_288 = mod_consts[537];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[538], tmp_assign_source_288);
    }
    {
        PyObject *tmp_assign_source_289;
        tmp_assign_source_289 = mod_consts[539];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[540], tmp_assign_source_289);
    }
    {
        PyObject *tmp_assign_source_290;
        tmp_assign_source_290 = mod_consts[541];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[542], tmp_assign_source_290);
    }
    {
        PyObject *tmp_assign_source_291;
        tmp_assign_source_291 = mod_consts[543];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[544], tmp_assign_source_291);
    }
    {
        PyObject *tmp_assign_source_292;
        tmp_assign_source_292 = mod_consts[545];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[546], tmp_assign_source_292);
    }
    {
        PyObject *tmp_assign_source_293;
        tmp_assign_source_293 = mod_consts[547];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[548], tmp_assign_source_293);
    }
    {
        PyObject *tmp_assign_source_294;
        tmp_assign_source_294 = mod_consts[549];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[550], tmp_assign_source_294);
    }
    {
        PyObject *tmp_assign_source_295;
        tmp_assign_source_295 = mod_consts[551];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[552], tmp_assign_source_295);
    }
    {
        PyObject *tmp_assign_source_296;
        tmp_assign_source_296 = mod_consts[553];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[554], tmp_assign_source_296);
    }
    {
        PyObject *tmp_assign_source_297;
        tmp_assign_source_297 = mod_consts[555];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[556], tmp_assign_source_297);
    }
    {
        PyObject *tmp_assign_source_298;
        tmp_assign_source_298 = mod_consts[557];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[558], tmp_assign_source_298);
    }
    {
        PyObject *tmp_assign_source_299;
        tmp_assign_source_299 = mod_consts[559];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[560], tmp_assign_source_299);
    }
    {
        PyObject *tmp_assign_source_300;
        tmp_assign_source_300 = mod_consts[561];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[562], tmp_assign_source_300);
    }
    {
        PyObject *tmp_assign_source_301;
        tmp_assign_source_301 = mod_consts[563];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[564], tmp_assign_source_301);
    }
    {
        PyObject *tmp_assign_source_302;
        tmp_assign_source_302 = mod_consts[565];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[566], tmp_assign_source_302);
    }
    {
        PyObject *tmp_assign_source_303;
        tmp_assign_source_303 = mod_consts[567];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[568], tmp_assign_source_303);
    }
    {
        PyObject *tmp_assign_source_304;
        tmp_assign_source_304 = mod_consts[569];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[570], tmp_assign_source_304);
    }
    {
        PyObject *tmp_assign_source_305;
        tmp_assign_source_305 = mod_consts[571];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[572], tmp_assign_source_305);
    }
    {
        PyObject *tmp_assign_source_306;
        tmp_assign_source_306 = mod_consts[573];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[574], tmp_assign_source_306);
    }
    {
        PyObject *tmp_assign_source_307;
        tmp_assign_source_307 = mod_consts[575];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[576], tmp_assign_source_307);
    }
    {
        PyObject *tmp_assign_source_308;
        tmp_assign_source_308 = mod_consts[577];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[578], tmp_assign_source_308);
    }
    {
        PyObject *tmp_assign_source_309;
        tmp_assign_source_309 = mod_consts[579];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[580], tmp_assign_source_309);
    }
    {
        PyObject *tmp_assign_source_310;
        tmp_assign_source_310 = mod_consts[581];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[582], tmp_assign_source_310);
    }
    {
        PyObject *tmp_assign_source_311;
        tmp_assign_source_311 = mod_consts[583];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[584], tmp_assign_source_311);
    }
    {
        PyObject *tmp_assign_source_312;
        tmp_assign_source_312 = mod_consts[585];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[586], tmp_assign_source_312);
    }
    {
        PyObject *tmp_assign_source_313;
        tmp_assign_source_313 = mod_consts[587];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[588], tmp_assign_source_313);
    }
    {
        PyObject *tmp_assign_source_314;
        tmp_assign_source_314 = mod_consts[589];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[590], tmp_assign_source_314);
    }
    {
        PyObject *tmp_assign_source_315;
        tmp_assign_source_315 = mod_consts[591];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[592], tmp_assign_source_315);
    }
    {
        PyObject *tmp_assign_source_316;
        tmp_assign_source_316 = mod_consts[593];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[594], tmp_assign_source_316);
    }
    {
        PyObject *tmp_assign_source_317;
        tmp_assign_source_317 = mod_consts[595];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[596], tmp_assign_source_317);
    }
    {
        PyObject *tmp_assign_source_318;
        tmp_assign_source_318 = mod_consts[597];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[598], tmp_assign_source_318);
    }
    {
        PyObject *tmp_assign_source_319;
        tmp_assign_source_319 = mod_consts[599];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[600], tmp_assign_source_319);
    }
    {
        PyObject *tmp_assign_source_320;
        tmp_assign_source_320 = mod_consts[601];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[602], tmp_assign_source_320);
    }
    {
        PyObject *tmp_assign_source_321;
        tmp_assign_source_321 = mod_consts[603];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[604], tmp_assign_source_321);
    }
    {
        PyObject *tmp_assign_source_322;
        tmp_assign_source_322 = mod_consts[605];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[606], tmp_assign_source_322);
    }
    {
        PyObject *tmp_assign_source_323;
        tmp_assign_source_323 = mod_consts[607];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[608], tmp_assign_source_323);
    }
    {
        PyObject *tmp_assign_source_324;
        tmp_assign_source_324 = mod_consts[609];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[610], tmp_assign_source_324);
    }
    {
        PyObject *tmp_assign_source_325;
        tmp_assign_source_325 = mod_consts[611];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[612], tmp_assign_source_325);
    }
    {
        PyObject *tmp_assign_source_326;
        tmp_assign_source_326 = mod_consts[613];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[614], tmp_assign_source_326);
    }
    {
        PyObject *tmp_assign_source_327;
        tmp_assign_source_327 = mod_consts[615];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[616], tmp_assign_source_327);
    }
    {
        PyObject *tmp_assign_source_328;
        tmp_assign_source_328 = mod_consts[617];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[618], tmp_assign_source_328);
    }
    {
        PyObject *tmp_assign_source_329;
        tmp_assign_source_329 = mod_consts[619];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[620], tmp_assign_source_329);
    }
    {
        PyObject *tmp_assign_source_330;
        tmp_assign_source_330 = mod_consts[621];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[622], tmp_assign_source_330);
    }
    {
        PyObject *tmp_assign_source_331;
        tmp_assign_source_331 = mod_consts[623];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[624], tmp_assign_source_331);
    }
    {
        PyObject *tmp_assign_source_332;
        tmp_assign_source_332 = mod_consts[625];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[626], tmp_assign_source_332);
    }
    {
        PyObject *tmp_assign_source_333;
        tmp_assign_source_333 = mod_consts[627];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[628], tmp_assign_source_333);
    }
    {
        PyObject *tmp_assign_source_334;
        tmp_assign_source_334 = mod_consts[629];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[630], tmp_assign_source_334);
    }
    {
        PyObject *tmp_assign_source_335;
        tmp_assign_source_335 = mod_consts[631];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[632], tmp_assign_source_335);
    }
    {
        PyObject *tmp_assign_source_336;
        tmp_assign_source_336 = mod_consts[633];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[634], tmp_assign_source_336);
    }
    {
        PyObject *tmp_assign_source_337;
        tmp_assign_source_337 = mod_consts[635];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[636], tmp_assign_source_337);
    }
    {
        PyObject *tmp_assign_source_338;
        tmp_assign_source_338 = mod_consts[637];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[638], tmp_assign_source_338);
    }
    {
        PyObject *tmp_assign_source_339;
        tmp_assign_source_339 = mod_consts[639];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[640], tmp_assign_source_339);
    }
    {
        PyObject *tmp_assign_source_340;
        tmp_assign_source_340 = mod_consts[641];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[642], tmp_assign_source_340);
    }
    {
        PyObject *tmp_assign_source_341;
        tmp_assign_source_341 = mod_consts[643];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[644], tmp_assign_source_341);
    }
    {
        PyObject *tmp_assign_source_342;
        tmp_assign_source_342 = mod_consts[645];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[646], tmp_assign_source_342);
    }
    {
        PyObject *tmp_assign_source_343;
        tmp_assign_source_343 = mod_consts[647];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[648], tmp_assign_source_343);
    }
    {
        PyObject *tmp_assign_source_344;
        tmp_assign_source_344 = mod_consts[649];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[650], tmp_assign_source_344);
    }
    {
        PyObject *tmp_assign_source_345;
        tmp_assign_source_345 = mod_consts[651];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[652], tmp_assign_source_345);
    }
    {
        PyObject *tmp_assign_source_346;
        tmp_assign_source_346 = mod_consts[653];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[654], tmp_assign_source_346);
    }
    {
        PyObject *tmp_assign_source_347;
        tmp_assign_source_347 = mod_consts[655];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[656], tmp_assign_source_347);
    }
    {
        PyObject *tmp_assign_source_348;
        tmp_assign_source_348 = mod_consts[657];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[658], tmp_assign_source_348);
    }
    {
        PyObject *tmp_assign_source_349;
        tmp_assign_source_349 = mod_consts[659];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[660], tmp_assign_source_349);
    }
    {
        PyObject *tmp_assign_source_350;
        tmp_assign_source_350 = mod_consts[661];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[662], tmp_assign_source_350);
    }
    {
        PyObject *tmp_assign_source_351;
        tmp_assign_source_351 = mod_consts[663];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[664], tmp_assign_source_351);
    }
    {
        PyObject *tmp_assign_source_352;
        tmp_assign_source_352 = mod_consts[665];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[666], tmp_assign_source_352);
    }
    {
        PyObject *tmp_assign_source_353;
        tmp_assign_source_353 = mod_consts[667];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[668], tmp_assign_source_353);
    }
    {
        PyObject *tmp_assign_source_354;
        tmp_assign_source_354 = mod_consts[669];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[670], tmp_assign_source_354);
    }
    {
        PyObject *tmp_assign_source_355;
        tmp_assign_source_355 = mod_consts[671];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[672], tmp_assign_source_355);
    }
    {
        PyObject *tmp_assign_source_356;
        tmp_assign_source_356 = mod_consts[673];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[674], tmp_assign_source_356);
    }
    {
        PyObject *tmp_assign_source_357;
        tmp_assign_source_357 = mod_consts[675];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[676], tmp_assign_source_357);
    }
    {
        PyObject *tmp_assign_source_358;
        tmp_assign_source_358 = mod_consts[677];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[678], tmp_assign_source_358);
    }
    {
        PyObject *tmp_assign_source_359;
        tmp_assign_source_359 = mod_consts[679];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[680], tmp_assign_source_359);
    }
    {
        PyObject *tmp_assign_source_360;
        tmp_assign_source_360 = mod_consts[681];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[682], tmp_assign_source_360);
    }
    {
        PyObject *tmp_assign_source_361;
        tmp_assign_source_361 = mod_consts[683];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[684], tmp_assign_source_361);
    }
    {
        PyObject *tmp_assign_source_362;
        tmp_assign_source_362 = mod_consts[685];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[686], tmp_assign_source_362);
    }
    {
        PyObject *tmp_assign_source_363;
        tmp_assign_source_363 = mod_consts[687];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[688], tmp_assign_source_363);
    }
    {
        PyObject *tmp_assign_source_364;
        tmp_assign_source_364 = mod_consts[689];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[690], tmp_assign_source_364);
    }
    {
        PyObject *tmp_assign_source_365;
        tmp_assign_source_365 = mod_consts[691];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[692], tmp_assign_source_365);
    }
    {
        PyObject *tmp_assign_source_366;
        tmp_assign_source_366 = mod_consts[693];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[694], tmp_assign_source_366);
    }
    {
        PyObject *tmp_assign_source_367;
        tmp_assign_source_367 = mod_consts[695];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[696], tmp_assign_source_367);
    }
    {
        PyObject *tmp_assign_source_368;
        tmp_assign_source_368 = mod_consts[697];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[698], tmp_assign_source_368);
    }
    {
        PyObject *tmp_assign_source_369;
        tmp_assign_source_369 = mod_consts[699];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[700], tmp_assign_source_369);
    }
    {
        PyObject *tmp_assign_source_370;
        tmp_assign_source_370 = mod_consts[701];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[702], tmp_assign_source_370);
    }
    {
        PyObject *tmp_assign_source_371;
        tmp_assign_source_371 = mod_consts[703];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[704], tmp_assign_source_371);
    }
    {
        PyObject *tmp_assign_source_372;
        tmp_assign_source_372 = mod_consts[705];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[706], tmp_assign_source_372);
    }
    {
        PyObject *tmp_assign_source_373;
        tmp_assign_source_373 = mod_consts[707];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[708], tmp_assign_source_373);
    }
    {
        PyObject *tmp_assign_source_374;
        tmp_assign_source_374 = mod_consts[709];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[710], tmp_assign_source_374);
    }
    {
        PyObject *tmp_assign_source_375;
        tmp_assign_source_375 = mod_consts[711];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[712], tmp_assign_source_375);
    }
    {
        PyObject *tmp_assign_source_376;
        tmp_assign_source_376 = mod_consts[713];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[714], tmp_assign_source_376);
    }
    {
        PyObject *tmp_assign_source_377;
        tmp_assign_source_377 = mod_consts[715];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[716], tmp_assign_source_377);
    }
    {
        PyObject *tmp_assign_source_378;
        tmp_assign_source_378 = mod_consts[717];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[718], tmp_assign_source_378);
    }
    {
        PyObject *tmp_assign_source_379;
        tmp_assign_source_379 = mod_consts[719];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[720], tmp_assign_source_379);
    }
    {
        PyObject *tmp_assign_source_380;
        tmp_assign_source_380 = mod_consts[721];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[722], tmp_assign_source_380);
    }
    {
        PyObject *tmp_assign_source_381;
        tmp_assign_source_381 = mod_consts[723];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[724], tmp_assign_source_381);
    }
    {
        PyObject *tmp_assign_source_382;
        tmp_assign_source_382 = mod_consts[725];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[726], tmp_assign_source_382);
    }
    {
        PyObject *tmp_assign_source_383;
        tmp_assign_source_383 = mod_consts[727];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[728], tmp_assign_source_383);
    }
    {
        PyObject *tmp_assign_source_384;
        tmp_assign_source_384 = mod_consts[729];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[730], tmp_assign_source_384);
    }
    {
        PyObject *tmp_assign_source_385;
        tmp_assign_source_385 = mod_consts[731];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[732], tmp_assign_source_385);
    }
    {
        PyObject *tmp_assign_source_386;
        tmp_assign_source_386 = mod_consts[733];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[734], tmp_assign_source_386);
    }
    {
        PyObject *tmp_assign_source_387;
        tmp_assign_source_387 = mod_consts[735];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[736], tmp_assign_source_387);
    }
    {
        PyObject *tmp_assign_source_388;
        tmp_assign_source_388 = mod_consts[737];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[738], tmp_assign_source_388);
    }
    {
        PyObject *tmp_assign_source_389;
        tmp_assign_source_389 = mod_consts[739];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[740], tmp_assign_source_389);
    }
    {
        PyObject *tmp_assign_source_390;
        tmp_assign_source_390 = mod_consts[741];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[742], tmp_assign_source_390);
    }
    {
        PyObject *tmp_assign_source_391;
        tmp_assign_source_391 = mod_consts[743];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[744], tmp_assign_source_391);
    }
    {
        PyObject *tmp_assign_source_392;
        tmp_assign_source_392 = mod_consts[745];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[746], tmp_assign_source_392);
    }
    {
        PyObject *tmp_assign_source_393;
        tmp_assign_source_393 = mod_consts[747];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[748], tmp_assign_source_393);
    }
    {
        PyObject *tmp_assign_source_394;
        tmp_assign_source_394 = mod_consts[749];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[750], tmp_assign_source_394);
    }
    {
        PyObject *tmp_assign_source_395;
        tmp_assign_source_395 = mod_consts[751];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[752], tmp_assign_source_395);
    }
    {
        PyObject *tmp_assign_source_396;
        tmp_assign_source_396 = mod_consts[753];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[754], tmp_assign_source_396);
    }
    {
        PyObject *tmp_assign_source_397;
        tmp_assign_source_397 = mod_consts[755];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[756], tmp_assign_source_397);
    }
    {
        PyObject *tmp_assign_source_398;
        tmp_assign_source_398 = mod_consts[757];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[758], tmp_assign_source_398);
    }
    {
        PyObject *tmp_assign_source_399;
        tmp_assign_source_399 = mod_consts[759];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[760], tmp_assign_source_399);
    }
    {
        PyObject *tmp_assign_source_400;
        tmp_assign_source_400 = mod_consts[761];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[762], tmp_assign_source_400);
    }
    {
        PyObject *tmp_assign_source_401;
        tmp_assign_source_401 = mod_consts[763];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[764], tmp_assign_source_401);
    }
    {
        PyObject *tmp_assign_source_402;
        tmp_assign_source_402 = mod_consts[765];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[766], tmp_assign_source_402);
    }
    {
        PyObject *tmp_assign_source_403;
        tmp_assign_source_403 = mod_consts[767];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[768], tmp_assign_source_403);
    }
    {
        PyObject *tmp_assign_source_404;
        tmp_assign_source_404 = mod_consts[769];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[770], tmp_assign_source_404);
    }
    {
        PyObject *tmp_assign_source_405;
        tmp_assign_source_405 = mod_consts[771];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[772], tmp_assign_source_405);
    }
    {
        PyObject *tmp_assign_source_406;
        tmp_assign_source_406 = mod_consts[773];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[774], tmp_assign_source_406);
    }
    {
        PyObject *tmp_assign_source_407;
        tmp_assign_source_407 = mod_consts[775];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[776], tmp_assign_source_407);
    }
    {
        PyObject *tmp_assign_source_408;
        tmp_assign_source_408 = mod_consts[777];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[778], tmp_assign_source_408);
    }
    {
        PyObject *tmp_assign_source_409;
        tmp_assign_source_409 = mod_consts[779];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[780], tmp_assign_source_409);
    }
    {
        PyObject *tmp_assign_source_410;
        tmp_assign_source_410 = mod_consts[781];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[782], tmp_assign_source_410);
    }
    {
        PyObject *tmp_assign_source_411;
        tmp_assign_source_411 = mod_consts[783];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[784], tmp_assign_source_411);
    }
    {
        PyObject *tmp_assign_source_412;
        tmp_assign_source_412 = mod_consts[785];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[786], tmp_assign_source_412);
    }
    {
        PyObject *tmp_assign_source_413;
        tmp_assign_source_413 = mod_consts[787];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[788], tmp_assign_source_413);
    }
    {
        PyObject *tmp_assign_source_414;
        tmp_assign_source_414 = mod_consts[789];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[790], tmp_assign_source_414);
    }
    {
        PyObject *tmp_assign_source_415;
        tmp_assign_source_415 = mod_consts[791];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[792], tmp_assign_source_415);
    }
    {
        PyObject *tmp_assign_source_416;
        tmp_assign_source_416 = mod_consts[793];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[794], tmp_assign_source_416);
    }
    {
        PyObject *tmp_assign_source_417;
        tmp_assign_source_417 = mod_consts[795];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[796], tmp_assign_source_417);
    }
    {
        PyObject *tmp_assign_source_418;
        tmp_assign_source_418 = mod_consts[797];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[798], tmp_assign_source_418);
    }
    {
        PyObject *tmp_assign_source_419;
        tmp_assign_source_419 = mod_consts[799];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[800], tmp_assign_source_419);
    }
    {
        PyObject *tmp_assign_source_420;
        tmp_assign_source_420 = mod_consts[801];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[802], tmp_assign_source_420);
    }
    {
        PyObject *tmp_assign_source_421;
        tmp_assign_source_421 = mod_consts[803];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[804], tmp_assign_source_421);
    }
    {
        PyObject *tmp_assign_source_422;
        tmp_assign_source_422 = mod_consts[805];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[806], tmp_assign_source_422);
    }
    {
        PyObject *tmp_assign_source_423;
        tmp_assign_source_423 = mod_consts[807];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[808], tmp_assign_source_423);
    }
    {
        PyObject *tmp_assign_source_424;
        tmp_assign_source_424 = mod_consts[809];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[810], tmp_assign_source_424);
    }
    {
        PyObject *tmp_assign_source_425;
        tmp_assign_source_425 = mod_consts[811];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[812], tmp_assign_source_425);
    }
    {
        PyObject *tmp_assign_source_426;
        tmp_assign_source_426 = mod_consts[813];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[814], tmp_assign_source_426);
    }
    {
        PyObject *tmp_assign_source_427;
        tmp_assign_source_427 = mod_consts[815];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[816], tmp_assign_source_427);
    }
    {
        PyObject *tmp_assign_source_428;
        tmp_assign_source_428 = mod_consts[817];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[818], tmp_assign_source_428);
    }
    {
        PyObject *tmp_assign_source_429;
        tmp_assign_source_429 = mod_consts[819];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[820], tmp_assign_source_429);
    }
    {
        PyObject *tmp_assign_source_430;
        tmp_assign_source_430 = mod_consts[821];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[822], tmp_assign_source_430);
    }
    {
        PyObject *tmp_assign_source_431;
        tmp_assign_source_431 = mod_consts[823];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[824], tmp_assign_source_431);
    }
    {
        PyObject *tmp_assign_source_432;
        tmp_assign_source_432 = mod_consts[825];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[826], tmp_assign_source_432);
    }
    {
        PyObject *tmp_assign_source_433;
        tmp_assign_source_433 = mod_consts[827];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[828], tmp_assign_source_433);
    }
    {
        PyObject *tmp_assign_source_434;
        tmp_assign_source_434 = mod_consts[829];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[830], tmp_assign_source_434);
    }
    {
        PyObject *tmp_assign_source_435;
        tmp_assign_source_435 = mod_consts[831];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[832], tmp_assign_source_435);
    }
    {
        PyObject *tmp_assign_source_436;
        tmp_assign_source_436 = mod_consts[833];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[834], tmp_assign_source_436);
    }
    {
        PyObject *tmp_assign_source_437;
        tmp_assign_source_437 = mod_consts[835];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[836], tmp_assign_source_437);
    }
    {
        PyObject *tmp_assign_source_438;
        tmp_assign_source_438 = mod_consts[837];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[838], tmp_assign_source_438);
    }
    {
        PyObject *tmp_assign_source_439;
        tmp_assign_source_439 = mod_consts[839];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[840], tmp_assign_source_439);
    }
    {
        PyObject *tmp_assign_source_440;
        tmp_assign_source_440 = mod_consts[841];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[842], tmp_assign_source_440);
    }
    {
        PyObject *tmp_assign_source_441;
        tmp_assign_source_441 = mod_consts[843];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[844], tmp_assign_source_441);
    }
    {
        PyObject *tmp_assign_source_442;
        tmp_assign_source_442 = mod_consts[845];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[846], tmp_assign_source_442);
    }
    {
        PyObject *tmp_assign_source_443;
        tmp_assign_source_443 = mod_consts[847];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[848], tmp_assign_source_443);
    }
    {
        PyObject *tmp_assign_source_444;
        tmp_assign_source_444 = mod_consts[849];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[850], tmp_assign_source_444);
    }
    {
        PyObject *tmp_assign_source_445;
        tmp_assign_source_445 = mod_consts[851];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[852], tmp_assign_source_445);
    }
    {
        PyObject *tmp_assign_source_446;
        tmp_assign_source_446 = mod_consts[853];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[854], tmp_assign_source_446);
    }
    {
        PyObject *tmp_assign_source_447;
        tmp_assign_source_447 = mod_consts[855];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[856], tmp_assign_source_447);
    }
    {
        PyObject *tmp_assign_source_448;
        tmp_assign_source_448 = mod_consts[857];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[858], tmp_assign_source_448);
    }
    {
        PyObject *tmp_assign_source_449;
        tmp_assign_source_449 = mod_consts[859];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[860], tmp_assign_source_449);
    }
    {
        PyObject *tmp_assign_source_450;
        tmp_assign_source_450 = mod_consts[861];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[862], tmp_assign_source_450);
    }
    {
        PyObject *tmp_assign_source_451;
        tmp_assign_source_451 = mod_consts[863];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[864], tmp_assign_source_451);
    }
    {
        PyObject *tmp_assign_source_452;
        tmp_assign_source_452 = mod_consts[865];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[866], tmp_assign_source_452);
    }
    {
        PyObject *tmp_assign_source_453;
        tmp_assign_source_453 = mod_consts[867];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[868], tmp_assign_source_453);
    }
    {
        PyObject *tmp_assign_source_454;
        tmp_assign_source_454 = mod_consts[869];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[870], tmp_assign_source_454);
    }
    {
        PyObject *tmp_assign_source_455;
        tmp_assign_source_455 = mod_consts[871];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[872], tmp_assign_source_455);
    }
    {
        PyObject *tmp_assign_source_456;
        tmp_assign_source_456 = mod_consts[873];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[874], tmp_assign_source_456);
    }
    {
        PyObject *tmp_assign_source_457;
        tmp_assign_source_457 = mod_consts[875];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[876], tmp_assign_source_457);
    }
    {
        PyObject *tmp_assign_source_458;
        tmp_assign_source_458 = mod_consts[877];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[878], tmp_assign_source_458);
    }
    {
        PyObject *tmp_assign_source_459;
        tmp_assign_source_459 = mod_consts[879];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[880], tmp_assign_source_459);
    }
    {
        PyObject *tmp_assign_source_460;
        tmp_assign_source_460 = mod_consts[881];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[882], tmp_assign_source_460);
    }
    {
        PyObject *tmp_assign_source_461;
        tmp_assign_source_461 = mod_consts[883];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[884], tmp_assign_source_461);
    }
    {
        PyObject *tmp_assign_source_462;
        tmp_assign_source_462 = mod_consts[885];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[886], tmp_assign_source_462);
    }
    {
        PyObject *tmp_assign_source_463;
        tmp_assign_source_463 = mod_consts[887];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[888], tmp_assign_source_463);
    }
    {
        PyObject *tmp_assign_source_464;
        tmp_assign_source_464 = mod_consts[889];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[890], tmp_assign_source_464);
    }
    {
        PyObject *tmp_assign_source_465;
        tmp_assign_source_465 = mod_consts[891];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[892], tmp_assign_source_465);
    }
    {
        PyObject *tmp_assign_source_466;
        tmp_assign_source_466 = mod_consts[893];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[894], tmp_assign_source_466);
    }
    {
        PyObject *tmp_assign_source_467;
        tmp_assign_source_467 = mod_consts[895];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[896], tmp_assign_source_467);
    }
    {
        PyObject *tmp_assign_source_468;
        tmp_assign_source_468 = mod_consts[897];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[898], tmp_assign_source_468);
    }
    {
        PyObject *tmp_assign_source_469;
        tmp_assign_source_469 = mod_consts[899];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[900], tmp_assign_source_469);
    }
    {
        PyObject *tmp_assign_source_470;
        tmp_assign_source_470 = mod_consts[901];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[902], tmp_assign_source_470);
    }
    {
        PyObject *tmp_assign_source_471;
        tmp_assign_source_471 = mod_consts[903];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[904], tmp_assign_source_471);
    }
    {
        PyObject *tmp_assign_source_472;
        tmp_assign_source_472 = mod_consts[905];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[906], tmp_assign_source_472);
    }
    {
        PyObject *tmp_assign_source_473;
        tmp_assign_source_473 = mod_consts[907];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[908], tmp_assign_source_473);
    }
    {
        PyObject *tmp_assign_source_474;
        tmp_assign_source_474 = mod_consts[909];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[910], tmp_assign_source_474);
    }
    {
        PyObject *tmp_assign_source_475;
        tmp_assign_source_475 = mod_consts[911];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[912], tmp_assign_source_475);
    }
    {
        PyObject *tmp_assign_source_476;
        tmp_assign_source_476 = mod_consts[913];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[914], tmp_assign_source_476);
    }
    {
        PyObject *tmp_assign_source_477;
        tmp_assign_source_477 = mod_consts[915];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[916], tmp_assign_source_477);
    }
    {
        PyObject *tmp_assign_source_478;
        tmp_assign_source_478 = mod_consts[917];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[918], tmp_assign_source_478);
    }
    {
        PyObject *tmp_assign_source_479;
        tmp_assign_source_479 = mod_consts[919];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[920], tmp_assign_source_479);
    }
    {
        PyObject *tmp_assign_source_480;
        tmp_assign_source_480 = mod_consts[921];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[922], tmp_assign_source_480);
    }
    {
        PyObject *tmp_assign_source_481;
        tmp_assign_source_481 = mod_consts[923];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[924], tmp_assign_source_481);
    }
    {
        PyObject *tmp_assign_source_482;
        tmp_assign_source_482 = mod_consts[925];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[926], tmp_assign_source_482);
    }
    {
        PyObject *tmp_assign_source_483;
        tmp_assign_source_483 = mod_consts[927];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[928], tmp_assign_source_483);
    }
    {
        PyObject *tmp_assign_source_484;
        tmp_assign_source_484 = mod_consts[929];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[930], tmp_assign_source_484);
    }
    {
        PyObject *tmp_assign_source_485;
        tmp_assign_source_485 = mod_consts[931];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[932], tmp_assign_source_485);
    }
    {
        PyObject *tmp_assign_source_486;
        tmp_assign_source_486 = mod_consts[933];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[934], tmp_assign_source_486);
    }
    {
        PyObject *tmp_assign_source_487;
        tmp_assign_source_487 = mod_consts[935];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[936], tmp_assign_source_487);
    }
    {
        PyObject *tmp_assign_source_488;
        tmp_assign_source_488 = mod_consts[937];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[938], tmp_assign_source_488);
    }
    {
        PyObject *tmp_assign_source_489;
        tmp_assign_source_489 = mod_consts[939];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[940], tmp_assign_source_489);
    }
    {
        PyObject *tmp_assign_source_490;
        tmp_assign_source_490 = mod_consts[941];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[942], tmp_assign_source_490);
    }
    {
        PyObject *tmp_assign_source_491;
        tmp_assign_source_491 = mod_consts[943];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[944], tmp_assign_source_491);
    }
    {
        PyObject *tmp_assign_source_492;
        tmp_assign_source_492 = mod_consts[945];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[946], tmp_assign_source_492);
    }
    {
        PyObject *tmp_assign_source_493;
        tmp_assign_source_493 = mod_consts[947];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[948], tmp_assign_source_493);
    }
    {
        PyObject *tmp_assign_source_494;
        tmp_assign_source_494 = mod_consts[949];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[950], tmp_assign_source_494);
    }
    {
        PyObject *tmp_assign_source_495;
        tmp_assign_source_495 = mod_consts[951];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[952], tmp_assign_source_495);
    }
    {
        PyObject *tmp_assign_source_496;
        tmp_assign_source_496 = mod_consts[953];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[954], tmp_assign_source_496);
    }
    {
        PyObject *tmp_assign_source_497;
        tmp_assign_source_497 = mod_consts[955];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[956], tmp_assign_source_497);
    }
    {
        PyObject *tmp_assign_source_498;
        tmp_assign_source_498 = mod_consts[957];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[958], tmp_assign_source_498);
    }
    {
        PyObject *tmp_assign_source_499;
        tmp_assign_source_499 = mod_consts[959];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[960], tmp_assign_source_499);
    }
    {
        PyObject *tmp_assign_source_500;
        tmp_assign_source_500 = mod_consts[961];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[962], tmp_assign_source_500);
    }
    {
        PyObject *tmp_assign_source_501;
        tmp_assign_source_501 = mod_consts[963];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[964], tmp_assign_source_501);
    }
    {
        PyObject *tmp_assign_source_502;
        tmp_assign_source_502 = mod_consts[965];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[966], tmp_assign_source_502);
    }
    {
        PyObject *tmp_assign_source_503;
        tmp_assign_source_503 = mod_consts[967];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[968], tmp_assign_source_503);
    }
    {
        PyObject *tmp_assign_source_504;
        tmp_assign_source_504 = mod_consts[969];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[970], tmp_assign_source_504);
    }
    {
        PyObject *tmp_assign_source_505;
        tmp_assign_source_505 = mod_consts[971];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[972], tmp_assign_source_505);
    }
    {
        PyObject *tmp_assign_source_506;
        tmp_assign_source_506 = mod_consts[973];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[974], tmp_assign_source_506);
    }
    {
        PyObject *tmp_assign_source_507;
        tmp_assign_source_507 = mod_consts[975];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[976], tmp_assign_source_507);
    }
    {
        PyObject *tmp_assign_source_508;
        tmp_assign_source_508 = mod_consts[977];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[978], tmp_assign_source_508);
    }
    {
        PyObject *tmp_assign_source_509;
        tmp_assign_source_509 = mod_consts[979];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[980], tmp_assign_source_509);
    }
    {
        PyObject *tmp_assign_source_510;
        tmp_assign_source_510 = mod_consts[981];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[982], tmp_assign_source_510);
    }
    {
        PyObject *tmp_assign_source_511;
        tmp_assign_source_511 = mod_consts[983];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[984], tmp_assign_source_511);
    }
    {
        PyObject *tmp_assign_source_512;
        tmp_assign_source_512 = mod_consts[985];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[986], tmp_assign_source_512);
    }
    {
        PyObject *tmp_assign_source_513;
        tmp_assign_source_513 = mod_consts[987];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[988], tmp_assign_source_513);
    }
    {
        PyObject *tmp_assign_source_514;
        tmp_assign_source_514 = mod_consts[989];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[990], tmp_assign_source_514);
    }
    {
        PyObject *tmp_assign_source_515;
        tmp_assign_source_515 = mod_consts[991];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[992], tmp_assign_source_515);
    }
    {
        PyObject *tmp_assign_source_516;
        tmp_assign_source_516 = mod_consts[993];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[994], tmp_assign_source_516);
    }
    {
        PyObject *tmp_assign_source_517;
        tmp_assign_source_517 = mod_consts[995];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[996], tmp_assign_source_517);
    }
    {
        PyObject *tmp_assign_source_518;
        tmp_assign_source_518 = mod_consts[997];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[998], tmp_assign_source_518);
    }
    {
        PyObject *tmp_assign_source_519;
        tmp_assign_source_519 = mod_consts[999];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1000], tmp_assign_source_519);
    }
    {
        PyObject *tmp_assign_source_520;
        tmp_assign_source_520 = mod_consts[1001];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1002], tmp_assign_source_520);
    }
    {
        PyObject *tmp_assign_source_521;
        tmp_assign_source_521 = mod_consts[1003];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1004], tmp_assign_source_521);
    }
    {
        PyObject *tmp_assign_source_522;
        tmp_assign_source_522 = mod_consts[1005];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1006], tmp_assign_source_522);
    }
    {
        PyObject *tmp_assign_source_523;
        tmp_assign_source_523 = mod_consts[1007];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1008], tmp_assign_source_523);
    }
    {
        PyObject *tmp_assign_source_524;
        tmp_assign_source_524 = mod_consts[1009];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1010], tmp_assign_source_524);
    }
    {
        PyObject *tmp_assign_source_525;
        tmp_assign_source_525 = mod_consts[1011];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1012], tmp_assign_source_525);
    }
    {
        PyObject *tmp_assign_source_526;
        tmp_assign_source_526 = mod_consts[1013];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1014], tmp_assign_source_526);
    }
    {
        PyObject *tmp_assign_source_527;
        tmp_assign_source_527 = mod_consts[1015];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1016], tmp_assign_source_527);
    }
    {
        PyObject *tmp_assign_source_528;
        tmp_assign_source_528 = mod_consts[1017];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1018], tmp_assign_source_528);
    }
    {
        PyObject *tmp_assign_source_529;
        tmp_assign_source_529 = mod_consts[1019];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1020], tmp_assign_source_529);
    }
    {
        PyObject *tmp_assign_source_530;
        tmp_assign_source_530 = mod_consts[1021];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1022], tmp_assign_source_530);
    }
    {
        PyObject *tmp_assign_source_531;
        tmp_assign_source_531 = mod_consts[1023];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1024], tmp_assign_source_531);
    }
    {
        PyObject *tmp_assign_source_532;
        tmp_assign_source_532 = mod_consts[1025];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1026], tmp_assign_source_532);
    }
    {
        PyObject *tmp_assign_source_533;
        tmp_assign_source_533 = mod_consts[1027];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1028], tmp_assign_source_533);
    }
    {
        PyObject *tmp_assign_source_534;
        tmp_assign_source_534 = mod_consts[1029];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1030], tmp_assign_source_534);
    }
    {
        PyObject *tmp_assign_source_535;
        tmp_assign_source_535 = mod_consts[1031];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1032], tmp_assign_source_535);
    }
    {
        PyObject *tmp_assign_source_536;
        tmp_assign_source_536 = mod_consts[1033];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1034], tmp_assign_source_536);
    }
    {
        PyObject *tmp_assign_source_537;
        tmp_assign_source_537 = mod_consts[1035];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1036], tmp_assign_source_537);
    }
    {
        PyObject *tmp_assign_source_538;
        tmp_assign_source_538 = mod_consts[1037];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1038], tmp_assign_source_538);
    }
    {
        PyObject *tmp_assign_source_539;
        tmp_assign_source_539 = mod_consts[1039];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1040], tmp_assign_source_539);
    }
    {
        PyObject *tmp_assign_source_540;
        tmp_assign_source_540 = mod_consts[1041];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1042], tmp_assign_source_540);
    }
    {
        PyObject *tmp_assign_source_541;
        tmp_assign_source_541 = mod_consts[1043];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1044], tmp_assign_source_541);
    }
    {
        PyObject *tmp_assign_source_542;
        tmp_assign_source_542 = mod_consts[1045];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1046], tmp_assign_source_542);
    }
    {
        PyObject *tmp_assign_source_543;
        tmp_assign_source_543 = mod_consts[1047];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1048], tmp_assign_source_543);
    }
    {
        PyObject *tmp_assign_source_544;
        tmp_assign_source_544 = mod_consts[1049];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1050], tmp_assign_source_544);
    }
    {
        PyObject *tmp_assign_source_545;
        tmp_assign_source_545 = mod_consts[1051];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1052], tmp_assign_source_545);
    }
    {
        PyObject *tmp_assign_source_546;
        tmp_assign_source_546 = mod_consts[1053];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1054], tmp_assign_source_546);
    }
    {
        PyObject *tmp_assign_source_547;
        tmp_assign_source_547 = mod_consts[1055];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1056], tmp_assign_source_547);
    }
    {
        PyObject *tmp_assign_source_548;
        tmp_assign_source_548 = mod_consts[1057];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1058], tmp_assign_source_548);
    }
    {
        PyObject *tmp_assign_source_549;
        tmp_assign_source_549 = mod_consts[1059];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1060], tmp_assign_source_549);
    }
    {
        PyObject *tmp_assign_source_550;
        tmp_assign_source_550 = mod_consts[1061];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1062], tmp_assign_source_550);
    }
    {
        PyObject *tmp_assign_source_551;
        tmp_assign_source_551 = mod_consts[1063];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1064], tmp_assign_source_551);
    }
    {
        PyObject *tmp_assign_source_552;
        tmp_assign_source_552 = mod_consts[1065];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1066], tmp_assign_source_552);
    }
    {
        PyObject *tmp_assign_source_553;
        tmp_assign_source_553 = mod_consts[1067];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1068], tmp_assign_source_553);
    }
    {
        PyObject *tmp_assign_source_554;
        tmp_assign_source_554 = mod_consts[1069];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1070], tmp_assign_source_554);
    }
    {
        PyObject *tmp_assign_source_555;
        tmp_assign_source_555 = mod_consts[1071];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1072], tmp_assign_source_555);
    }
    {
        PyObject *tmp_assign_source_556;
        tmp_assign_source_556 = mod_consts[1073];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1074], tmp_assign_source_556);
    }
    {
        PyObject *tmp_assign_source_557;
        tmp_assign_source_557 = mod_consts[1075];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1076], tmp_assign_source_557);
    }
    {
        PyObject *tmp_assign_source_558;
        tmp_assign_source_558 = mod_consts[1077];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1078], tmp_assign_source_558);
    }
    {
        PyObject *tmp_assign_source_559;
        tmp_assign_source_559 = mod_consts[1079];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1080], tmp_assign_source_559);
    }
    {
        PyObject *tmp_assign_source_560;
        tmp_assign_source_560 = mod_consts[1081];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1082], tmp_assign_source_560);
    }
    {
        PyObject *tmp_assign_source_561;
        tmp_assign_source_561 = mod_consts[1083];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1084], tmp_assign_source_561);
    }
    {
        PyObject *tmp_assign_source_562;
        tmp_assign_source_562 = mod_consts[1085];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1086], tmp_assign_source_562);
    }
    {
        PyObject *tmp_assign_source_563;
        tmp_assign_source_563 = mod_consts[1087];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1088], tmp_assign_source_563);
    }
    {
        PyObject *tmp_assign_source_564;
        tmp_assign_source_564 = mod_consts[1089];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1090], tmp_assign_source_564);
    }
    {
        PyObject *tmp_assign_source_565;
        tmp_assign_source_565 = mod_consts[1091];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1092], tmp_assign_source_565);
    }
    {
        PyObject *tmp_assign_source_566;
        tmp_assign_source_566 = mod_consts[1093];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1094], tmp_assign_source_566);
    }
    {
        PyObject *tmp_assign_source_567;
        tmp_assign_source_567 = mod_consts[1095];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1096], tmp_assign_source_567);
    }
    {
        PyObject *tmp_assign_source_568;
        tmp_assign_source_568 = mod_consts[1097];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1098], tmp_assign_source_568);
    }
    {
        PyObject *tmp_assign_source_569;
        tmp_assign_source_569 = mod_consts[1099];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1100], tmp_assign_source_569);
    }
    {
        PyObject *tmp_assign_source_570;
        tmp_assign_source_570 = mod_consts[1101];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1102], tmp_assign_source_570);
    }
    {
        PyObject *tmp_assign_source_571;
        tmp_assign_source_571 = mod_consts[1103];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1104], tmp_assign_source_571);
    }
    {
        PyObject *tmp_assign_source_572;
        tmp_assign_source_572 = mod_consts[1105];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1106], tmp_assign_source_572);
    }
    {
        PyObject *tmp_assign_source_573;
        tmp_assign_source_573 = mod_consts[1107];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1108], tmp_assign_source_573);
    }
    {
        PyObject *tmp_assign_source_574;
        tmp_assign_source_574 = mod_consts[1109];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1110], tmp_assign_source_574);
    }
    {
        PyObject *tmp_assign_source_575;
        tmp_assign_source_575 = mod_consts[1111];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1112], tmp_assign_source_575);
    }
    {
        PyObject *tmp_assign_source_576;
        tmp_assign_source_576 = mod_consts[1113];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1114], tmp_assign_source_576);
    }
    {
        PyObject *tmp_assign_source_577;
        tmp_assign_source_577 = mod_consts[1115];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1116], tmp_assign_source_577);
    }
    {
        PyObject *tmp_assign_source_578;
        tmp_assign_source_578 = mod_consts[1117];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1118], tmp_assign_source_578);
    }
    {
        PyObject *tmp_assign_source_579;
        tmp_assign_source_579 = mod_consts[1119];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1120], tmp_assign_source_579);
    }
    {
        PyObject *tmp_assign_source_580;
        tmp_assign_source_580 = mod_consts[1121];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1122], tmp_assign_source_580);
    }
    {
        PyObject *tmp_assign_source_581;
        tmp_assign_source_581 = mod_consts[1123];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1124], tmp_assign_source_581);
    }
    {
        PyObject *tmp_assign_source_582;
        tmp_assign_source_582 = mod_consts[1125];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1126], tmp_assign_source_582);
    }
    {
        PyObject *tmp_assign_source_583;
        tmp_assign_source_583 = mod_consts[1127];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1128], tmp_assign_source_583);
    }
    {
        PyObject *tmp_assign_source_584;
        tmp_assign_source_584 = mod_consts[1129];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1130], tmp_assign_source_584);
    }
    {
        PyObject *tmp_assign_source_585;
        tmp_assign_source_585 = mod_consts[1131];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1132], tmp_assign_source_585);
    }
    {
        PyObject *tmp_assign_source_586;
        tmp_assign_source_586 = mod_consts[1133];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1134], tmp_assign_source_586);
    }
    {
        PyObject *tmp_assign_source_587;
        tmp_assign_source_587 = mod_consts[1135];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1136], tmp_assign_source_587);
    }
    {
        PyObject *tmp_assign_source_588;
        tmp_assign_source_588 = mod_consts[1137];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1138], tmp_assign_source_588);
    }
    {
        PyObject *tmp_assign_source_589;
        tmp_assign_source_589 = mod_consts[1139];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1140], tmp_assign_source_589);
    }
    {
        PyObject *tmp_assign_source_590;
        tmp_assign_source_590 = mod_consts[1141];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1142], tmp_assign_source_590);
    }
    {
        PyObject *tmp_assign_source_591;
        tmp_assign_source_591 = mod_consts[1143];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1144], tmp_assign_source_591);
    }
    {
        PyObject *tmp_assign_source_592;
        tmp_assign_source_592 = mod_consts[1145];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1146], tmp_assign_source_592);
    }
    {
        PyObject *tmp_assign_source_593;
        tmp_assign_source_593 = mod_consts[1147];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1148], tmp_assign_source_593);
    }
    {
        PyObject *tmp_assign_source_594;
        tmp_assign_source_594 = mod_consts[1149];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1150], tmp_assign_source_594);
    }
    {
        PyObject *tmp_assign_source_595;
        tmp_assign_source_595 = mod_consts[1151];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1152], tmp_assign_source_595);
    }
    {
        PyObject *tmp_assign_source_596;
        tmp_assign_source_596 = mod_consts[1153];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1154], tmp_assign_source_596);
    }
    {
        PyObject *tmp_assign_source_597;
        tmp_assign_source_597 = mod_consts[1155];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1156], tmp_assign_source_597);
    }
    {
        PyObject *tmp_assign_source_598;
        tmp_assign_source_598 = mod_consts[1157];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1158], tmp_assign_source_598);
    }
    {
        PyObject *tmp_assign_source_599;
        tmp_assign_source_599 = mod_consts[1159];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1160], tmp_assign_source_599);
    }
    {
        PyObject *tmp_assign_source_600;
        tmp_assign_source_600 = mod_consts[1161];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1162], tmp_assign_source_600);
    }
    {
        PyObject *tmp_assign_source_601;
        tmp_assign_source_601 = mod_consts[1163];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1164], tmp_assign_source_601);
    }
    {
        PyObject *tmp_assign_source_602;
        tmp_assign_source_602 = mod_consts[1165];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1166], tmp_assign_source_602);
    }
    {
        PyObject *tmp_assign_source_603;
        tmp_assign_source_603 = mod_consts[1167];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1168], tmp_assign_source_603);
    }
    {
        PyObject *tmp_assign_source_604;
        tmp_assign_source_604 = mod_consts[1169];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1170], tmp_assign_source_604);
    }
    {
        PyObject *tmp_assign_source_605;
        tmp_assign_source_605 = mod_consts[1171];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1172], tmp_assign_source_605);
    }
    {
        PyObject *tmp_assign_source_606;
        tmp_assign_source_606 = mod_consts[1173];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1174], tmp_assign_source_606);
    }
    {
        PyObject *tmp_assign_source_607;
        tmp_assign_source_607 = mod_consts[1175];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1176], tmp_assign_source_607);
    }
    {
        PyObject *tmp_assign_source_608;
        tmp_assign_source_608 = mod_consts[1177];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1178], tmp_assign_source_608);
    }
    {
        PyObject *tmp_assign_source_609;
        tmp_assign_source_609 = mod_consts[1179];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1180], tmp_assign_source_609);
    }
    {
        PyObject *tmp_assign_source_610;
        tmp_assign_source_610 = mod_consts[1181];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1182], tmp_assign_source_610);
    }
    {
        PyObject *tmp_assign_source_611;
        tmp_assign_source_611 = mod_consts[1183];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1184], tmp_assign_source_611);
    }
    {
        PyObject *tmp_assign_source_612;
        tmp_assign_source_612 = mod_consts[1185];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1186], tmp_assign_source_612);
    }
    {
        PyObject *tmp_assign_source_613;
        tmp_assign_source_613 = mod_consts[1187];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1188], tmp_assign_source_613);
    }
    {
        PyObject *tmp_assign_source_614;
        tmp_assign_source_614 = mod_consts[1189];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1190], tmp_assign_source_614);
    }
    {
        PyObject *tmp_assign_source_615;
        tmp_assign_source_615 = mod_consts[1191];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1192], tmp_assign_source_615);
    }
    {
        PyObject *tmp_assign_source_616;
        tmp_assign_source_616 = mod_consts[1193];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1194], tmp_assign_source_616);
    }
    {
        PyObject *tmp_assign_source_617;
        tmp_assign_source_617 = mod_consts[1195];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1196], tmp_assign_source_617);
    }
    {
        PyObject *tmp_assign_source_618;
        tmp_assign_source_618 = mod_consts[1197];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1198], tmp_assign_source_618);
    }
    {
        PyObject *tmp_assign_source_619;
        tmp_assign_source_619 = mod_consts[1199];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1200], tmp_assign_source_619);
    }
    {
        PyObject *tmp_assign_source_620;
        tmp_assign_source_620 = mod_consts[1201];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1202], tmp_assign_source_620);
    }
    {
        PyObject *tmp_assign_source_621;
        tmp_assign_source_621 = mod_consts[1203];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1204], tmp_assign_source_621);
    }
    {
        PyObject *tmp_assign_source_622;
        tmp_assign_source_622 = mod_consts[1205];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1206], tmp_assign_source_622);
    }
    {
        PyObject *tmp_assign_source_623;
        tmp_assign_source_623 = mod_consts[1207];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1208], tmp_assign_source_623);
    }
    {
        PyObject *tmp_assign_source_624;
        tmp_assign_source_624 = mod_consts[1209];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1210], tmp_assign_source_624);
    }
    {
        PyObject *tmp_assign_source_625;
        tmp_assign_source_625 = mod_consts[1211];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1212], tmp_assign_source_625);
    }
    {
        PyObject *tmp_assign_source_626;
        tmp_assign_source_626 = mod_consts[1213];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1214], tmp_assign_source_626);
    }
    {
        PyObject *tmp_assign_source_627;
        tmp_assign_source_627 = mod_consts[1215];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1216], tmp_assign_source_627);
    }
    {
        PyObject *tmp_assign_source_628;
        tmp_assign_source_628 = mod_consts[1217];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1218], tmp_assign_source_628);
    }
    {
        PyObject *tmp_assign_source_629;
        tmp_assign_source_629 = mod_consts[1219];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1220], tmp_assign_source_629);
    }
    {
        PyObject *tmp_assign_source_630;
        tmp_assign_source_630 = mod_consts[1221];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1222], tmp_assign_source_630);
    }
    {
        PyObject *tmp_assign_source_631;
        tmp_assign_source_631 = mod_consts[1223];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1224], tmp_assign_source_631);
    }
    {
        PyObject *tmp_assign_source_632;
        tmp_assign_source_632 = mod_consts[1225];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1226], tmp_assign_source_632);
    }
    {
        PyObject *tmp_assign_source_633;
        tmp_assign_source_633 = mod_consts[1227];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1228], tmp_assign_source_633);
    }
    {
        PyObject *tmp_assign_source_634;
        tmp_assign_source_634 = mod_consts[1229];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1230], tmp_assign_source_634);
    }
    {
        PyObject *tmp_assign_source_635;
        tmp_assign_source_635 = mod_consts[1231];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1232], tmp_assign_source_635);
    }
    {
        PyObject *tmp_assign_source_636;
        tmp_assign_source_636 = mod_consts[1233];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1234], tmp_assign_source_636);
    }
    {
        PyObject *tmp_assign_source_637;
        tmp_assign_source_637 = mod_consts[1235];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1236], tmp_assign_source_637);
    }
    {
        PyObject *tmp_assign_source_638;
        tmp_assign_source_638 = mod_consts[1237];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1238], tmp_assign_source_638);
    }
    {
        PyObject *tmp_assign_source_639;
        tmp_assign_source_639 = mod_consts[1239];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1240], tmp_assign_source_639);
    }
    {
        PyObject *tmp_assign_source_640;
        tmp_assign_source_640 = mod_consts[1241];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1242], tmp_assign_source_640);
    }
    {
        PyObject *tmp_assign_source_641;
        tmp_assign_source_641 = mod_consts[1243];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1244], tmp_assign_source_641);
    }
    {
        PyObject *tmp_assign_source_642;
        tmp_assign_source_642 = mod_consts[1245];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1246], tmp_assign_source_642);
    }
    {
        PyObject *tmp_assign_source_643;
        tmp_assign_source_643 = mod_consts[1247];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1248], tmp_assign_source_643);
    }
    {
        PyObject *tmp_assign_source_644;
        tmp_assign_source_644 = mod_consts[1249];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1250], tmp_assign_source_644);
    }
    {
        PyObject *tmp_assign_source_645;
        tmp_assign_source_645 = mod_consts[1251];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1252], tmp_assign_source_645);
    }
    {
        PyObject *tmp_assign_source_646;
        tmp_assign_source_646 = mod_consts[1253];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1254], tmp_assign_source_646);
    }
    {
        PyObject *tmp_assign_source_647;
        tmp_assign_source_647 = mod_consts[1255];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1256], tmp_assign_source_647);
    }
    {
        PyObject *tmp_assign_source_648;
        tmp_assign_source_648 = mod_consts[1257];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1258], tmp_assign_source_648);
    }
    {
        PyObject *tmp_assign_source_649;
        tmp_assign_source_649 = mod_consts[1259];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1260], tmp_assign_source_649);
    }
    {
        PyObject *tmp_assign_source_650;
        tmp_assign_source_650 = mod_consts[1261];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1262], tmp_assign_source_650);
    }
    {
        PyObject *tmp_assign_source_651;
        tmp_assign_source_651 = mod_consts[1263];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1264], tmp_assign_source_651);
    }
    {
        PyObject *tmp_assign_source_652;
        tmp_assign_source_652 = mod_consts[1265];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1266], tmp_assign_source_652);
    }
    {
        PyObject *tmp_assign_source_653;
        tmp_assign_source_653 = mod_consts[1267];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1268], tmp_assign_source_653);
    }
    {
        PyObject *tmp_assign_source_654;
        tmp_assign_source_654 = mod_consts[1269];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1270], tmp_assign_source_654);
    }
    {
        PyObject *tmp_assign_source_655;
        tmp_assign_source_655 = mod_consts[1271];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1272], tmp_assign_source_655);
    }
    {
        PyObject *tmp_assign_source_656;
        tmp_assign_source_656 = mod_consts[1273];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1274], tmp_assign_source_656);
    }
    {
        PyObject *tmp_assign_source_657;
        tmp_assign_source_657 = mod_consts[1275];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1276], tmp_assign_source_657);
    }
    {
        PyObject *tmp_assign_source_658;
        tmp_assign_source_658 = mod_consts[1277];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1278], tmp_assign_source_658);
    }
    {
        PyObject *tmp_assign_source_659;
        tmp_assign_source_659 = mod_consts[1279];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1280], tmp_assign_source_659);
    }
    {
        PyObject *tmp_assign_source_660;
        tmp_assign_source_660 = mod_consts[1281];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1282], tmp_assign_source_660);
    }
    {
        PyObject *tmp_assign_source_661;
        tmp_assign_source_661 = mod_consts[1283];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1284], tmp_assign_source_661);
    }
    {
        PyObject *tmp_assign_source_662;
        tmp_assign_source_662 = mod_consts[1285];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1286], tmp_assign_source_662);
    }
    {
        PyObject *tmp_assign_source_663;
        tmp_assign_source_663 = mod_consts[1287];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1288], tmp_assign_source_663);
    }
    {
        PyObject *tmp_assign_source_664;
        tmp_assign_source_664 = mod_consts[1289];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1290], tmp_assign_source_664);
    }
    {
        PyObject *tmp_assign_source_665;
        tmp_assign_source_665 = mod_consts[1291];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1292], tmp_assign_source_665);
    }
    {
        PyObject *tmp_assign_source_666;
        tmp_assign_source_666 = mod_consts[1293];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1294], tmp_assign_source_666);
    }
    {
        PyObject *tmp_assign_source_667;
        tmp_assign_source_667 = mod_consts[1295];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1296], tmp_assign_source_667);
    }
    {
        PyObject *tmp_assign_source_668;
        tmp_assign_source_668 = mod_consts[1297];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1298], tmp_assign_source_668);
    }
    {
        PyObject *tmp_assign_source_669;
        tmp_assign_source_669 = mod_consts[1299];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1300], tmp_assign_source_669);
    }
    {
        PyObject *tmp_assign_source_670;
        tmp_assign_source_670 = mod_consts[1301];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1302], tmp_assign_source_670);
    }
    {
        PyObject *tmp_assign_source_671;
        tmp_assign_source_671 = mod_consts[1303];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1304], tmp_assign_source_671);
    }
    {
        PyObject *tmp_assign_source_672;
        tmp_assign_source_672 = mod_consts[1305];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1306], tmp_assign_source_672);
    }
    {
        PyObject *tmp_assign_source_673;
        tmp_assign_source_673 = mod_consts[1307];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1308], tmp_assign_source_673);
    }
    {
        PyObject *tmp_assign_source_674;
        tmp_assign_source_674 = mod_consts[1309];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1310], tmp_assign_source_674);
    }
    {
        PyObject *tmp_assign_source_675;
        tmp_assign_source_675 = mod_consts[1311];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1312], tmp_assign_source_675);
    }
    {
        PyObject *tmp_assign_source_676;
        tmp_assign_source_676 = mod_consts[1313];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1314], tmp_assign_source_676);
    }
    {
        PyObject *tmp_assign_source_677;
        tmp_assign_source_677 = mod_consts[1315];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1316], tmp_assign_source_677);
    }
    {
        PyObject *tmp_assign_source_678;
        tmp_assign_source_678 = mod_consts[1317];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1318], tmp_assign_source_678);
    }
    {
        PyObject *tmp_assign_source_679;
        tmp_assign_source_679 = mod_consts[1319];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1320], tmp_assign_source_679);
    }
    {
        PyObject *tmp_assign_source_680;
        tmp_assign_source_680 = mod_consts[1321];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1322], tmp_assign_source_680);
    }
    {
        PyObject *tmp_assign_source_681;
        tmp_assign_source_681 = mod_consts[1323];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1324], tmp_assign_source_681);
    }
    {
        PyObject *tmp_assign_source_682;
        tmp_assign_source_682 = mod_consts[1325];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1326], tmp_assign_source_682);
    }
    {
        PyObject *tmp_assign_source_683;
        tmp_assign_source_683 = mod_consts[1327];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1328], tmp_assign_source_683);
    }
    {
        PyObject *tmp_assign_source_684;
        tmp_assign_source_684 = mod_consts[1329];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1330], tmp_assign_source_684);
    }
    {
        PyObject *tmp_assign_source_685;
        tmp_assign_source_685 = mod_consts[1331];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1332], tmp_assign_source_685);
    }
    {
        PyObject *tmp_assign_source_686;
        tmp_assign_source_686 = mod_consts[1333];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1334], tmp_assign_source_686);
    }
    {
        PyObject *tmp_assign_source_687;
        tmp_assign_source_687 = mod_consts[1335];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1336], tmp_assign_source_687);
    }
    {
        PyObject *tmp_assign_source_688;
        tmp_assign_source_688 = mod_consts[1337];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1338], tmp_assign_source_688);
    }
    {
        PyObject *tmp_assign_source_689;
        tmp_assign_source_689 = mod_consts[1339];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1340], tmp_assign_source_689);
    }
    {
        PyObject *tmp_assign_source_690;
        tmp_assign_source_690 = mod_consts[1341];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1342], tmp_assign_source_690);
    }
    {
        PyObject *tmp_assign_source_691;
        tmp_assign_source_691 = mod_consts[1343];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1344], tmp_assign_source_691);
    }
    {
        PyObject *tmp_assign_source_692;
        tmp_assign_source_692 = mod_consts[1345];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1346], tmp_assign_source_692);
    }
    {
        PyObject *tmp_assign_source_693;
        tmp_assign_source_693 = mod_consts[1347];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1348], tmp_assign_source_693);
    }
    {
        PyObject *tmp_assign_source_694;
        tmp_assign_source_694 = mod_consts[1349];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1350], tmp_assign_source_694);
    }
    {
        PyObject *tmp_assign_source_695;
        tmp_assign_source_695 = mod_consts[1351];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1352], tmp_assign_source_695);
    }
    {
        PyObject *tmp_assign_source_696;
        tmp_assign_source_696 = mod_consts[1353];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1354], tmp_assign_source_696);
    }
    {
        PyObject *tmp_assign_source_697;
        tmp_assign_source_697 = mod_consts[1355];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1356], tmp_assign_source_697);
    }
    {
        PyObject *tmp_assign_source_698;
        tmp_assign_source_698 = mod_consts[1357];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1358], tmp_assign_source_698);
    }
    {
        PyObject *tmp_assign_source_699;
        tmp_assign_source_699 = mod_consts[1359];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1360], tmp_assign_source_699);
    }
    {
        PyObject *tmp_assign_source_700;
        tmp_assign_source_700 = mod_consts[1361];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1362], tmp_assign_source_700);
    }
    {
        PyObject *tmp_assign_source_701;
        tmp_assign_source_701 = mod_consts[1363];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1364], tmp_assign_source_701);
    }
    {
        PyObject *tmp_assign_source_702;
        tmp_assign_source_702 = mod_consts[1365];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1366], tmp_assign_source_702);
    }
    {
        PyObject *tmp_assign_source_703;
        tmp_assign_source_703 = mod_consts[1367];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1368], tmp_assign_source_703);
    }
    {
        PyObject *tmp_assign_source_704;
        tmp_assign_source_704 = mod_consts[1369];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1370], tmp_assign_source_704);
    }
    {
        PyObject *tmp_assign_source_705;
        tmp_assign_source_705 = mod_consts[1371];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1372], tmp_assign_source_705);
    }
    {
        PyObject *tmp_assign_source_706;
        tmp_assign_source_706 = mod_consts[1373];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1374], tmp_assign_source_706);
    }
    {
        PyObject *tmp_assign_source_707;
        tmp_assign_source_707 = mod_consts[1375];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1376], tmp_assign_source_707);
    }
    {
        PyObject *tmp_assign_source_708;
        tmp_assign_source_708 = mod_consts[1377];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1378], tmp_assign_source_708);
    }
    {
        PyObject *tmp_assign_source_709;
        tmp_assign_source_709 = mod_consts[1379];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1380], tmp_assign_source_709);
    }
    {
        PyObject *tmp_assign_source_710;
        tmp_assign_source_710 = mod_consts[1381];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1382], tmp_assign_source_710);
    }
    {
        PyObject *tmp_assign_source_711;
        tmp_assign_source_711 = mod_consts[1383];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1384], tmp_assign_source_711);
    }
    {
        PyObject *tmp_assign_source_712;
        tmp_assign_source_712 = mod_consts[1385];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1386], tmp_assign_source_712);
    }
    {
        PyObject *tmp_assign_source_713;
        tmp_assign_source_713 = mod_consts[1387];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1388], tmp_assign_source_713);
    }
    {
        PyObject *tmp_assign_source_714;
        tmp_assign_source_714 = mod_consts[1389];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1390], tmp_assign_source_714);
    }
    {
        PyObject *tmp_assign_source_715;
        tmp_assign_source_715 = mod_consts[1391];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1392], tmp_assign_source_715);
    }
    {
        PyObject *tmp_assign_source_716;
        tmp_assign_source_716 = mod_consts[1393];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1394], tmp_assign_source_716);
    }
    {
        PyObject *tmp_assign_source_717;
        tmp_assign_source_717 = mod_consts[1395];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1396], tmp_assign_source_717);
    }
    {
        PyObject *tmp_assign_source_718;
        tmp_assign_source_718 = mod_consts[1397];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1398], tmp_assign_source_718);
    }
    {
        PyObject *tmp_assign_source_719;
        tmp_assign_source_719 = mod_consts[1399];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1400], tmp_assign_source_719);
    }
    {
        PyObject *tmp_assign_source_720;
        tmp_assign_source_720 = mod_consts[1401];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1402], tmp_assign_source_720);
    }
    {
        PyObject *tmp_assign_source_721;
        tmp_assign_source_721 = mod_consts[1403];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1404], tmp_assign_source_721);
    }
    {
        PyObject *tmp_assign_source_722;
        tmp_assign_source_722 = mod_consts[1405];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1406], tmp_assign_source_722);
    }
    {
        PyObject *tmp_assign_source_723;
        tmp_assign_source_723 = mod_consts[1407];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1408], tmp_assign_source_723);
    }
    {
        PyObject *tmp_assign_source_724;
        tmp_assign_source_724 = mod_consts[1409];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1410], tmp_assign_source_724);
    }
    {
        PyObject *tmp_assign_source_725;
        tmp_assign_source_725 = mod_consts[1411];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1412], tmp_assign_source_725);
    }
    {
        PyObject *tmp_assign_source_726;
        tmp_assign_source_726 = mod_consts[1413];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1414], tmp_assign_source_726);
    }
    {
        PyObject *tmp_assign_source_727;
        tmp_assign_source_727 = mod_consts[1415];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1416], tmp_assign_source_727);
    }
    {
        PyObject *tmp_assign_source_728;
        tmp_assign_source_728 = mod_consts[1417];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1418], tmp_assign_source_728);
    }
    {
        PyObject *tmp_assign_source_729;
        tmp_assign_source_729 = mod_consts[1419];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1420], tmp_assign_source_729);
    }
    {
        PyObject *tmp_assign_source_730;
        tmp_assign_source_730 = mod_consts[1421];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1422], tmp_assign_source_730);
    }
    {
        PyObject *tmp_assign_source_731;
        tmp_assign_source_731 = mod_consts[1423];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1424], tmp_assign_source_731);
    }
    {
        PyObject *tmp_assign_source_732;
        tmp_assign_source_732 = mod_consts[1425];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1426], tmp_assign_source_732);
    }
    {
        PyObject *tmp_assign_source_733;
        tmp_assign_source_733 = mod_consts[1427];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1428], tmp_assign_source_733);
    }
    {
        PyObject *tmp_assign_source_734;
        tmp_assign_source_734 = mod_consts[1429];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1430], tmp_assign_source_734);
    }
    {
        PyObject *tmp_assign_source_735;
        tmp_assign_source_735 = mod_consts[1431];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1432], tmp_assign_source_735);
    }
    {
        PyObject *tmp_assign_source_736;
        tmp_assign_source_736 = mod_consts[1433];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1434], tmp_assign_source_736);
    }
    {
        PyObject *tmp_assign_source_737;
        tmp_assign_source_737 = mod_consts[1435];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1436], tmp_assign_source_737);
    }
    {
        PyObject *tmp_assign_source_738;
        tmp_assign_source_738 = mod_consts[1437];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1438], tmp_assign_source_738);
    }
    {
        PyObject *tmp_assign_source_739;
        tmp_assign_source_739 = mod_consts[1439];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1440], tmp_assign_source_739);
    }
    {
        PyObject *tmp_assign_source_740;
        tmp_assign_source_740 = mod_consts[1441];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1442], tmp_assign_source_740);
    }
    {
        PyObject *tmp_assign_source_741;
        tmp_assign_source_741 = mod_consts[1443];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1444], tmp_assign_source_741);
    }
    {
        PyObject *tmp_assign_source_742;
        tmp_assign_source_742 = mod_consts[1445];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1446], tmp_assign_source_742);
    }
    {
        PyObject *tmp_assign_source_743;
        tmp_assign_source_743 = mod_consts[1447];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1448], tmp_assign_source_743);
    }
    {
        PyObject *tmp_assign_source_744;
        tmp_assign_source_744 = mod_consts[1449];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1450], tmp_assign_source_744);
    }
    {
        PyObject *tmp_assign_source_745;
        tmp_assign_source_745 = mod_consts[1451];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1452], tmp_assign_source_745);
    }
    {
        PyObject *tmp_assign_source_746;
        tmp_assign_source_746 = mod_consts[1453];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1454], tmp_assign_source_746);
    }
    {
        PyObject *tmp_assign_source_747;
        tmp_assign_source_747 = mod_consts[1455];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1456], tmp_assign_source_747);
    }
    {
        PyObject *tmp_assign_source_748;
        tmp_assign_source_748 = mod_consts[1457];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1458], tmp_assign_source_748);
    }
    {
        PyObject *tmp_assign_source_749;
        tmp_assign_source_749 = mod_consts[1459];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1460], tmp_assign_source_749);
    }
    {
        PyObject *tmp_assign_source_750;
        tmp_assign_source_750 = mod_consts[1461];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1462], tmp_assign_source_750);
    }
    {
        PyObject *tmp_assign_source_751;
        tmp_assign_source_751 = mod_consts[1463];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1464], tmp_assign_source_751);
    }
    {
        PyObject *tmp_assign_source_752;
        tmp_assign_source_752 = mod_consts[1465];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1466], tmp_assign_source_752);
    }
    {
        PyObject *tmp_assign_source_753;
        tmp_assign_source_753 = mod_consts[1467];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1468], tmp_assign_source_753);
    }
    {
        PyObject *tmp_assign_source_754;
        tmp_assign_source_754 = mod_consts[1469];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1470], tmp_assign_source_754);
    }
    {
        PyObject *tmp_assign_source_755;
        tmp_assign_source_755 = mod_consts[1471];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1472], tmp_assign_source_755);
    }
    {
        PyObject *tmp_assign_source_756;
        tmp_assign_source_756 = mod_consts[1473];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1474], tmp_assign_source_756);
    }
    {
        PyObject *tmp_assign_source_757;
        tmp_assign_source_757 = mod_consts[1475];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1476], tmp_assign_source_757);
    }
    {
        PyObject *tmp_assign_source_758;
        tmp_assign_source_758 = mod_consts[1477];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1478], tmp_assign_source_758);
    }
    {
        PyObject *tmp_assign_source_759;
        tmp_assign_source_759 = mod_consts[1479];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1480], tmp_assign_source_759);
    }
    {
        PyObject *tmp_assign_source_760;
        tmp_assign_source_760 = mod_consts[1481];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1482], tmp_assign_source_760);
    }
    {
        PyObject *tmp_assign_source_761;
        tmp_assign_source_761 = mod_consts[1483];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1484], tmp_assign_source_761);
    }
    {
        PyObject *tmp_assign_source_762;
        tmp_assign_source_762 = mod_consts[1485];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1486], tmp_assign_source_762);
    }
    {
        PyObject *tmp_assign_source_763;
        tmp_assign_source_763 = mod_consts[1487];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1488], tmp_assign_source_763);
    }
    {
        PyObject *tmp_assign_source_764;
        tmp_assign_source_764 = mod_consts[1489];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1490], tmp_assign_source_764);
    }
    {
        PyObject *tmp_assign_source_765;
        tmp_assign_source_765 = mod_consts[1491];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1492], tmp_assign_source_765);
    }
    {
        PyObject *tmp_assign_source_766;
        tmp_assign_source_766 = mod_consts[1493];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1494], tmp_assign_source_766);
    }
    {
        PyObject *tmp_assign_source_767;
        tmp_assign_source_767 = mod_consts[1495];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1496], tmp_assign_source_767);
    }
    {
        PyObject *tmp_assign_source_768;
        tmp_assign_source_768 = mod_consts[1497];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1498], tmp_assign_source_768);
    }
    {
        PyObject *tmp_assign_source_769;
        tmp_assign_source_769 = mod_consts[1499];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1500], tmp_assign_source_769);
    }
    {
        PyObject *tmp_assign_source_770;
        tmp_assign_source_770 = mod_consts[1501];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1502], tmp_assign_source_770);
    }
    {
        PyObject *tmp_assign_source_771;
        tmp_assign_source_771 = mod_consts[1503];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1504], tmp_assign_source_771);
    }
    {
        PyObject *tmp_assign_source_772;
        tmp_assign_source_772 = mod_consts[1505];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1506], tmp_assign_source_772);
    }
    {
        PyObject *tmp_assign_source_773;
        tmp_assign_source_773 = mod_consts[1507];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1508], tmp_assign_source_773);
    }
    {
        PyObject *tmp_assign_source_774;
        tmp_assign_source_774 = mod_consts[1509];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1510], tmp_assign_source_774);
    }
    {
        PyObject *tmp_assign_source_775;
        tmp_assign_source_775 = mod_consts[1511];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1512], tmp_assign_source_775);
    }
    {
        PyObject *tmp_assign_source_776;
        tmp_assign_source_776 = mod_consts[1513];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1514], tmp_assign_source_776);
    }
    {
        PyObject *tmp_assign_source_777;
        tmp_assign_source_777 = mod_consts[1515];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1516], tmp_assign_source_777);
    }
    {
        PyObject *tmp_assign_source_778;
        tmp_assign_source_778 = mod_consts[1517];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1518], tmp_assign_source_778);
    }
    {
        PyObject *tmp_assign_source_779;
        tmp_assign_source_779 = mod_consts[1519];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1520], tmp_assign_source_779);
    }
    {
        PyObject *tmp_assign_source_780;
        tmp_assign_source_780 = mod_consts[1521];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1522], tmp_assign_source_780);
    }
    {
        PyObject *tmp_assign_source_781;
        tmp_assign_source_781 = mod_consts[1523];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1524], tmp_assign_source_781);
    }
    {
        PyObject *tmp_assign_source_782;
        tmp_assign_source_782 = mod_consts[1525];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1526], tmp_assign_source_782);
    }
    {
        PyObject *tmp_assign_source_783;
        tmp_assign_source_783 = mod_consts[1527];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1528], tmp_assign_source_783);
    }
    {
        PyObject *tmp_assign_source_784;
        tmp_assign_source_784 = mod_consts[1529];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1530], tmp_assign_source_784);
    }
    {
        PyObject *tmp_assign_source_785;
        tmp_assign_source_785 = mod_consts[1531];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1532], tmp_assign_source_785);
    }
    {
        PyObject *tmp_assign_source_786;
        tmp_assign_source_786 = mod_consts[1533];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1534], tmp_assign_source_786);
    }
    {
        PyObject *tmp_assign_source_787;
        tmp_assign_source_787 = mod_consts[1535];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1536], tmp_assign_source_787);
    }
    {
        PyObject *tmp_assign_source_788;
        tmp_assign_source_788 = mod_consts[1537];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1538], tmp_assign_source_788);
    }
    {
        PyObject *tmp_assign_source_789;
        tmp_assign_source_789 = mod_consts[1539];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1540], tmp_assign_source_789);
    }
    {
        PyObject *tmp_assign_source_790;
        tmp_assign_source_790 = mod_consts[1541];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1542], tmp_assign_source_790);
    }
    {
        PyObject *tmp_assign_source_791;
        tmp_assign_source_791 = mod_consts[1543];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1544], tmp_assign_source_791);
    }
    {
        PyObject *tmp_assign_source_792;
        tmp_assign_source_792 = mod_consts[1545];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1546], tmp_assign_source_792);
    }
    {
        PyObject *tmp_assign_source_793;
        tmp_assign_source_793 = mod_consts[1547];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1548], tmp_assign_source_793);
    }
    {
        PyObject *tmp_assign_source_794;
        tmp_assign_source_794 = mod_consts[1549];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1550], tmp_assign_source_794);
    }
    {
        PyObject *tmp_assign_source_795;
        tmp_assign_source_795 = mod_consts[1551];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1552], tmp_assign_source_795);
    }
    {
        PyObject *tmp_assign_source_796;
        tmp_assign_source_796 = mod_consts[1553];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1554], tmp_assign_source_796);
    }
    {
        PyObject *tmp_assign_source_797;
        tmp_assign_source_797 = mod_consts[1555];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1556], tmp_assign_source_797);
    }
    {
        PyObject *tmp_assign_source_798;
        tmp_assign_source_798 = mod_consts[1557];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1558], tmp_assign_source_798);
    }
    {
        PyObject *tmp_assign_source_799;
        tmp_assign_source_799 = mod_consts[1559];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1560], tmp_assign_source_799);
    }
    {
        PyObject *tmp_assign_source_800;
        tmp_assign_source_800 = mod_consts[1561];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1562], tmp_assign_source_800);
    }
    {
        PyObject *tmp_assign_source_801;
        tmp_assign_source_801 = mod_consts[1563];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1564], tmp_assign_source_801);
    }
    {
        PyObject *tmp_assign_source_802;
        tmp_assign_source_802 = mod_consts[1565];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1566], tmp_assign_source_802);
    }
    {
        PyObject *tmp_assign_source_803;
        tmp_assign_source_803 = mod_consts[1567];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1568], tmp_assign_source_803);
    }
    {
        PyObject *tmp_assign_source_804;
        tmp_assign_source_804 = mod_consts[1569];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1570], tmp_assign_source_804);
    }
    {
        PyObject *tmp_assign_source_805;
        tmp_assign_source_805 = mod_consts[1571];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1572], tmp_assign_source_805);
    }
    {
        PyObject *tmp_assign_source_806;
        tmp_assign_source_806 = mod_consts[1573];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1574], tmp_assign_source_806);
    }
    {
        PyObject *tmp_assign_source_807;
        tmp_assign_source_807 = mod_consts[1575];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1576], tmp_assign_source_807);
    }
    {
        PyObject *tmp_assign_source_808;
        tmp_assign_source_808 = mod_consts[1577];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1578], tmp_assign_source_808);
    }
    {
        PyObject *tmp_assign_source_809;
        tmp_assign_source_809 = mod_consts[1579];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1580], tmp_assign_source_809);
    }
    {
        PyObject *tmp_assign_source_810;
        tmp_assign_source_810 = mod_consts[1581];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1582], tmp_assign_source_810);
    }
    {
        PyObject *tmp_assign_source_811;
        tmp_assign_source_811 = mod_consts[1583];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1584], tmp_assign_source_811);
    }
    {
        PyObject *tmp_assign_source_812;
        tmp_assign_source_812 = mod_consts[1585];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1586], tmp_assign_source_812);
    }
    {
        PyObject *tmp_assign_source_813;
        tmp_assign_source_813 = mod_consts[1587];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1588], tmp_assign_source_813);
    }
    {
        PyObject *tmp_assign_source_814;
        tmp_assign_source_814 = mod_consts[1589];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1590], tmp_assign_source_814);
    }
    {
        PyObject *tmp_assign_source_815;
        tmp_assign_source_815 = mod_consts[1591];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1592], tmp_assign_source_815);
    }
    {
        PyObject *tmp_assign_source_816;
        tmp_assign_source_816 = mod_consts[1593];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1594], tmp_assign_source_816);
    }
    {
        PyObject *tmp_assign_source_817;
        tmp_assign_source_817 = mod_consts[1595];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1596], tmp_assign_source_817);
    }
    {
        PyObject *tmp_assign_source_818;
        tmp_assign_source_818 = mod_consts[1597];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1598], tmp_assign_source_818);
    }
    {
        PyObject *tmp_assign_source_819;
        tmp_assign_source_819 = mod_consts[1599];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1600], tmp_assign_source_819);
    }
    {
        PyObject *tmp_assign_source_820;
        tmp_assign_source_820 = mod_consts[1601];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1602], tmp_assign_source_820);
    }
    {
        PyObject *tmp_assign_source_821;
        tmp_assign_source_821 = mod_consts[1603];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1604], tmp_assign_source_821);
    }
    {
        PyObject *tmp_assign_source_822;
        tmp_assign_source_822 = mod_consts[1605];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1606], tmp_assign_source_822);
    }
    {
        PyObject *tmp_assign_source_823;
        tmp_assign_source_823 = mod_consts[1607];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1608], tmp_assign_source_823);
    }
    {
        PyObject *tmp_assign_source_824;
        tmp_assign_source_824 = mod_consts[1609];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1610], tmp_assign_source_824);
    }
    {
        PyObject *tmp_assign_source_825;
        tmp_assign_source_825 = mod_consts[1611];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1612], tmp_assign_source_825);
    }
    {
        PyObject *tmp_assign_source_826;
        tmp_assign_source_826 = mod_consts[1613];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1614], tmp_assign_source_826);
    }
    {
        PyObject *tmp_assign_source_827;
        tmp_assign_source_827 = mod_consts[1615];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1616], tmp_assign_source_827);
    }
    {
        PyObject *tmp_assign_source_828;
        tmp_assign_source_828 = mod_consts[1617];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1618], tmp_assign_source_828);
    }
    {
        PyObject *tmp_assign_source_829;
        tmp_assign_source_829 = mod_consts[1619];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1620], tmp_assign_source_829);
    }
    {
        PyObject *tmp_assign_source_830;
        tmp_assign_source_830 = mod_consts[1621];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1622], tmp_assign_source_830);
    }
    {
        PyObject *tmp_assign_source_831;
        tmp_assign_source_831 = mod_consts[1623];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1624], tmp_assign_source_831);
    }
    {
        PyObject *tmp_assign_source_832;
        tmp_assign_source_832 = mod_consts[1625];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1626], tmp_assign_source_832);
    }
    {
        PyObject *tmp_assign_source_833;
        tmp_assign_source_833 = mod_consts[1627];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1628], tmp_assign_source_833);
    }
    {
        PyObject *tmp_assign_source_834;
        tmp_assign_source_834 = mod_consts[1629];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1630], tmp_assign_source_834);
    }
    {
        PyObject *tmp_assign_source_835;
        tmp_assign_source_835 = mod_consts[1631];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1632], tmp_assign_source_835);
    }
    {
        PyObject *tmp_assign_source_836;
        tmp_assign_source_836 = mod_consts[1633];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1634], tmp_assign_source_836);
    }
    {
        PyObject *tmp_assign_source_837;
        tmp_assign_source_837 = mod_consts[1635];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1636], tmp_assign_source_837);
    }
    {
        PyObject *tmp_assign_source_838;
        tmp_assign_source_838 = mod_consts[1637];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1638], tmp_assign_source_838);
    }
    {
        PyObject *tmp_assign_source_839;
        tmp_assign_source_839 = mod_consts[1639];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1640], tmp_assign_source_839);
    }
    {
        PyObject *tmp_assign_source_840;
        tmp_assign_source_840 = mod_consts[1641];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1642], tmp_assign_source_840);
    }
    {
        PyObject *tmp_assign_source_841;
        tmp_assign_source_841 = mod_consts[1643];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1644], tmp_assign_source_841);
    }
    {
        PyObject *tmp_assign_source_842;
        tmp_assign_source_842 = mod_consts[1645];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1646], tmp_assign_source_842);
    }
    {
        PyObject *tmp_assign_source_843;
        tmp_assign_source_843 = mod_consts[1647];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1648], tmp_assign_source_843);
    }
    {
        PyObject *tmp_assign_source_844;
        tmp_assign_source_844 = mod_consts[1649];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1650], tmp_assign_source_844);
    }
    {
        PyObject *tmp_assign_source_845;
        tmp_assign_source_845 = mod_consts[1651];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1652], tmp_assign_source_845);
    }
    {
        PyObject *tmp_assign_source_846;
        tmp_assign_source_846 = mod_consts[1653];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1654], tmp_assign_source_846);
    }
    {
        PyObject *tmp_assign_source_847;
        tmp_assign_source_847 = mod_consts[1655];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1656], tmp_assign_source_847);
    }
    {
        PyObject *tmp_assign_source_848;
        tmp_assign_source_848 = mod_consts[1657];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1658], tmp_assign_source_848);
    }
    {
        PyObject *tmp_assign_source_849;
        tmp_assign_source_849 = mod_consts[1659];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1660], tmp_assign_source_849);
    }
    {
        PyObject *tmp_assign_source_850;
        tmp_assign_source_850 = mod_consts[1661];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1662], tmp_assign_source_850);
    }
    {
        PyObject *tmp_assign_source_851;
        tmp_assign_source_851 = mod_consts[1663];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1664], tmp_assign_source_851);
    }
    {
        PyObject *tmp_assign_source_852;
        tmp_assign_source_852 = mod_consts[1665];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1666], tmp_assign_source_852);
    }
    {
        PyObject *tmp_assign_source_853;
        tmp_assign_source_853 = mod_consts[1667];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1668], tmp_assign_source_853);
    }
    {
        PyObject *tmp_assign_source_854;
        tmp_assign_source_854 = mod_consts[1669];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1670], tmp_assign_source_854);
    }
    {
        PyObject *tmp_assign_source_855;
        tmp_assign_source_855 = mod_consts[1671];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1672], tmp_assign_source_855);
    }
    {
        PyObject *tmp_assign_source_856;
        tmp_assign_source_856 = mod_consts[1673];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1674], tmp_assign_source_856);
    }
    {
        PyObject *tmp_assign_source_857;
        tmp_assign_source_857 = mod_consts[1675];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1676], tmp_assign_source_857);
    }
    {
        PyObject *tmp_assign_source_858;
        tmp_assign_source_858 = mod_consts[1677];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1678], tmp_assign_source_858);
    }
    {
        PyObject *tmp_assign_source_859;
        tmp_assign_source_859 = mod_consts[1679];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1680], tmp_assign_source_859);
    }
    {
        PyObject *tmp_assign_source_860;
        tmp_assign_source_860 = mod_consts[1681];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1682], tmp_assign_source_860);
    }
    {
        PyObject *tmp_assign_source_861;
        tmp_assign_source_861 = mod_consts[1683];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1684], tmp_assign_source_861);
    }
    {
        PyObject *tmp_assign_source_862;
        tmp_assign_source_862 = mod_consts[1685];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1686], tmp_assign_source_862);
    }
    {
        PyObject *tmp_assign_source_863;
        tmp_assign_source_863 = mod_consts[1687];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1688], tmp_assign_source_863);
    }
    {
        PyObject *tmp_assign_source_864;
        tmp_assign_source_864 = mod_consts[1681];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1682], tmp_assign_source_864);
    }
    {
        PyObject *tmp_assign_source_865;
        tmp_assign_source_865 = mod_consts[1683];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1684], tmp_assign_source_865);
    }
    {
        PyObject *tmp_assign_source_866;
        tmp_assign_source_866 = mod_consts[1685];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1686], tmp_assign_source_866);
    }
    {
        PyObject *tmp_assign_source_867;
        tmp_assign_source_867 = mod_consts[1689];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1690], tmp_assign_source_867);
    }
    {
        PyObject *tmp_assign_source_868;
        tmp_assign_source_868 = mod_consts[1691];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1692], tmp_assign_source_868);
    }
    {
        PyObject *tmp_assign_source_869;
        tmp_assign_source_869 = mod_consts[1693];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1694], tmp_assign_source_869);
    }
    {
        PyObject *tmp_assign_source_870;
        tmp_assign_source_870 = mod_consts[1695];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1696], tmp_assign_source_870);
    }
    {
        PyObject *tmp_assign_source_871;
        tmp_assign_source_871 = mod_consts[1697];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1698], tmp_assign_source_871);
    }
    {
        PyObject *tmp_assign_source_872;
        tmp_assign_source_872 = mod_consts[1699];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1700], tmp_assign_source_872);
    }
    {
        PyObject *tmp_assign_source_873;
        tmp_assign_source_873 = mod_consts[1701];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1702], tmp_assign_source_873);
    }
    {
        PyObject *tmp_assign_source_874;
        tmp_assign_source_874 = mod_consts[1703];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1704], tmp_assign_source_874);
    }
    {
        PyObject *tmp_assign_source_875;
        tmp_assign_source_875 = mod_consts[1705];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1706], tmp_assign_source_875);
    }
    {
        PyObject *tmp_assign_source_876;
        tmp_assign_source_876 = mod_consts[1707];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1708], tmp_assign_source_876);
    }
    {
        PyObject *tmp_assign_source_877;
        tmp_assign_source_877 = mod_consts[1709];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1710], tmp_assign_source_877);
    }
    {
        PyObject *tmp_assign_source_878;
        tmp_assign_source_878 = mod_consts[1711];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1712], tmp_assign_source_878);
    }
    {
        PyObject *tmp_assign_source_879;
        tmp_assign_source_879 = mod_consts[1713];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1714], tmp_assign_source_879);
    }
    {
        PyObject *tmp_assign_source_880;
        tmp_assign_source_880 = mod_consts[1715];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1716], tmp_assign_source_880);
    }
    {
        PyObject *tmp_assign_source_881;
        tmp_assign_source_881 = mod_consts[1717];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1718], tmp_assign_source_881);
    }
    {
        PyObject *tmp_assign_source_882;
        tmp_assign_source_882 = mod_consts[1719];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1720], tmp_assign_source_882);
    }
    {
        PyObject *tmp_assign_source_883;
        tmp_assign_source_883 = mod_consts[1721];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1722], tmp_assign_source_883);
    }
    {
        PyObject *tmp_assign_source_884;
        tmp_assign_source_884 = mod_consts[1723];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1724], tmp_assign_source_884);
    }
    {
        PyObject *tmp_assign_source_885;
        tmp_assign_source_885 = mod_consts[1725];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1726], tmp_assign_source_885);
    }
    {
        PyObject *tmp_assign_source_886;
        tmp_assign_source_886 = mod_consts[1727];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1728], tmp_assign_source_886);
    }
    {
        PyObject *tmp_assign_source_887;
        tmp_assign_source_887 = mod_consts[1729];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1730], tmp_assign_source_887);
    }
    {
        PyObject *tmp_assign_source_888;
        tmp_assign_source_888 = mod_consts[1731];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1732], tmp_assign_source_888);
    }
    {
        PyObject *tmp_assign_source_889;
        tmp_assign_source_889 = mod_consts[1733];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1734], tmp_assign_source_889);
    }
    {
        PyObject *tmp_assign_source_890;
        tmp_assign_source_890 = mod_consts[1735];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1736], tmp_assign_source_890);
    }
    {
        PyObject *tmp_assign_source_891;
        tmp_assign_source_891 = mod_consts[1737];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1738], tmp_assign_source_891);
    }
    {
        PyObject *tmp_assign_source_892;
        tmp_assign_source_892 = mod_consts[1739];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1740], tmp_assign_source_892);
    }
    {
        PyObject *tmp_assign_source_893;
        tmp_assign_source_893 = mod_consts[1741];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1742], tmp_assign_source_893);
    }
    {
        PyObject *tmp_assign_source_894;
        tmp_assign_source_894 = mod_consts[1743];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1744], tmp_assign_source_894);
    }
    {
        PyObject *tmp_assign_source_895;
        tmp_assign_source_895 = mod_consts[1745];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1746], tmp_assign_source_895);
    }
    {
        PyObject *tmp_assign_source_896;
        tmp_assign_source_896 = mod_consts[1747];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1748], tmp_assign_source_896);
    }
    {
        PyObject *tmp_assign_source_897;
        tmp_assign_source_897 = mod_consts[1749];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1750], tmp_assign_source_897);
    }
    {
        PyObject *tmp_assign_source_898;
        tmp_assign_source_898 = mod_consts[1751];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1752], tmp_assign_source_898);
    }
    {
        PyObject *tmp_assign_source_899;
        tmp_assign_source_899 = mod_consts[1753];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1754], tmp_assign_source_899);
    }
    {
        PyObject *tmp_assign_source_900;
        tmp_assign_source_900 = mod_consts[1755];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1756], tmp_assign_source_900);
    }
    {
        PyObject *tmp_assign_source_901;
        tmp_assign_source_901 = mod_consts[1757];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1758], tmp_assign_source_901);
    }
    {
        PyObject *tmp_assign_source_902;
        tmp_assign_source_902 = mod_consts[1759];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1760], tmp_assign_source_902);
    }
    {
        PyObject *tmp_assign_source_903;
        tmp_assign_source_903 = mod_consts[1761];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1762], tmp_assign_source_903);
    }
    {
        PyObject *tmp_assign_source_904;
        tmp_assign_source_904 = mod_consts[1763];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1764], tmp_assign_source_904);
    }
    {
        PyObject *tmp_assign_source_905;
        tmp_assign_source_905 = mod_consts[1765];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1766], tmp_assign_source_905);
    }
    {
        PyObject *tmp_assign_source_906;
        tmp_assign_source_906 = mod_consts[1767];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1768], tmp_assign_source_906);
    }
    {
        PyObject *tmp_assign_source_907;
        tmp_assign_source_907 = mod_consts[1769];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1770], tmp_assign_source_907);
    }
    {
        PyObject *tmp_assign_source_908;
        tmp_assign_source_908 = mod_consts[1771];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1772], tmp_assign_source_908);
    }
    {
        PyObject *tmp_assign_source_909;
        tmp_assign_source_909 = mod_consts[1773];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1774], tmp_assign_source_909);
    }
    {
        PyObject *tmp_assign_source_910;
        tmp_assign_source_910 = mod_consts[1775];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1776], tmp_assign_source_910);
    }
    {
        PyObject *tmp_assign_source_911;
        tmp_assign_source_911 = mod_consts[1777];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1778], tmp_assign_source_911);
    }
    {
        PyObject *tmp_assign_source_912;
        tmp_assign_source_912 = mod_consts[1779];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1780], tmp_assign_source_912);
    }
    {
        PyObject *tmp_assign_source_913;
        tmp_assign_source_913 = mod_consts[1781];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1782], tmp_assign_source_913);
    }
    {
        PyObject *tmp_assign_source_914;
        tmp_assign_source_914 = mod_consts[1783];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1784], tmp_assign_source_914);
    }
    {
        PyObject *tmp_assign_source_915;
        tmp_assign_source_915 = mod_consts[1785];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1786], tmp_assign_source_915);
    }
    {
        PyObject *tmp_assign_source_916;
        tmp_assign_source_916 = mod_consts[1787];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1788], tmp_assign_source_916);
    }
    {
        PyObject *tmp_assign_source_917;
        tmp_assign_source_917 = mod_consts[1789];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1790], tmp_assign_source_917);
    }
    {
        PyObject *tmp_assign_source_918;
        tmp_assign_source_918 = mod_consts[1791];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1792], tmp_assign_source_918);
    }
    {
        PyObject *tmp_assign_source_919;
        tmp_assign_source_919 = mod_consts[1793];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1794], tmp_assign_source_919);
    }
    {
        PyObject *tmp_assign_source_920;
        tmp_assign_source_920 = mod_consts[1795];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1796], tmp_assign_source_920);
    }
    {
        PyObject *tmp_assign_source_921;
        tmp_assign_source_921 = mod_consts[1797];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1798], tmp_assign_source_921);
    }
    {
        PyObject *tmp_assign_source_922;
        tmp_assign_source_922 = mod_consts[1799];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1800], tmp_assign_source_922);
    }
    {
        PyObject *tmp_assign_source_923;
        tmp_assign_source_923 = mod_consts[1801];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1802], tmp_assign_source_923);
    }
    {
        PyObject *tmp_assign_source_924;
        tmp_assign_source_924 = mod_consts[1803];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1804], tmp_assign_source_924);
    }
    {
        PyObject *tmp_assign_source_925;
        tmp_assign_source_925 = mod_consts[1805];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1806], tmp_assign_source_925);
    }
    {
        PyObject *tmp_assign_source_926;
        tmp_assign_source_926 = mod_consts[1807];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1808], tmp_assign_source_926);
    }
    {
        PyObject *tmp_assign_source_927;
        tmp_assign_source_927 = mod_consts[1809];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1810], tmp_assign_source_927);
    }
    {
        PyObject *tmp_assign_source_928;
        tmp_assign_source_928 = mod_consts[1811];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1812], tmp_assign_source_928);
    }
    {
        PyObject *tmp_assign_source_929;
        tmp_assign_source_929 = mod_consts[1813];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1814], tmp_assign_source_929);
    }
    {
        PyObject *tmp_assign_source_930;
        tmp_assign_source_930 = mod_consts[1815];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1816], tmp_assign_source_930);
    }
    {
        PyObject *tmp_assign_source_931;
        tmp_assign_source_931 = mod_consts[1817];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1818], tmp_assign_source_931);
    }
    {
        PyObject *tmp_assign_source_932;
        tmp_assign_source_932 = mod_consts[1819];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1820], tmp_assign_source_932);
    }
    {
        PyObject *tmp_assign_source_933;
        tmp_assign_source_933 = mod_consts[1821];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1822], tmp_assign_source_933);
    }
    {
        PyObject *tmp_assign_source_934;
        tmp_assign_source_934 = mod_consts[1823];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1824], tmp_assign_source_934);
    }
    {
        PyObject *tmp_assign_source_935;
        tmp_assign_source_935 = mod_consts[1825];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1826], tmp_assign_source_935);
    }
    {
        PyObject *tmp_assign_source_936;
        tmp_assign_source_936 = mod_consts[1827];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1828], tmp_assign_source_936);
    }
    {
        PyObject *tmp_assign_source_937;
        tmp_assign_source_937 = mod_consts[1829];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1830], tmp_assign_source_937);
    }
    {
        PyObject *tmp_assign_source_938;
        tmp_assign_source_938 = mod_consts[1831];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1832], tmp_assign_source_938);
    }
    {
        PyObject *tmp_assign_source_939;
        tmp_assign_source_939 = mod_consts[1833];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1834], tmp_assign_source_939);
    }
    {
        PyObject *tmp_assign_source_940;
        tmp_assign_source_940 = mod_consts[1835];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1836], tmp_assign_source_940);
    }
    {
        PyObject *tmp_assign_source_941;
        tmp_assign_source_941 = mod_consts[1837];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1838], tmp_assign_source_941);
    }
    {
        PyObject *tmp_assign_source_942;
        tmp_assign_source_942 = mod_consts[1839];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1840], tmp_assign_source_942);
    }
    {
        PyObject *tmp_assign_source_943;
        tmp_assign_source_943 = mod_consts[1841];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1842], tmp_assign_source_943);
    }
    {
        PyObject *tmp_assign_source_944;
        tmp_assign_source_944 = mod_consts[1843];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1844], tmp_assign_source_944);
    }
    {
        PyObject *tmp_assign_source_945;
        tmp_assign_source_945 = mod_consts[1845];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1846], tmp_assign_source_945);
    }
    {
        PyObject *tmp_assign_source_946;
        tmp_assign_source_946 = mod_consts[1847];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1848], tmp_assign_source_946);
    }
    {
        PyObject *tmp_assign_source_947;
        tmp_assign_source_947 = mod_consts[1849];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1850], tmp_assign_source_947);
    }
    {
        PyObject *tmp_assign_source_948;
        tmp_assign_source_948 = mod_consts[1851];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1852], tmp_assign_source_948);
    }
    {
        PyObject *tmp_assign_source_949;
        tmp_assign_source_949 = mod_consts[1853];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1854], tmp_assign_source_949);
    }
    {
        PyObject *tmp_assign_source_950;
        tmp_assign_source_950 = mod_consts[1855];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1856], tmp_assign_source_950);
    }
    {
        PyObject *tmp_assign_source_951;
        tmp_assign_source_951 = mod_consts[1857];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1858], tmp_assign_source_951);
    }
    {
        PyObject *tmp_assign_source_952;
        tmp_assign_source_952 = mod_consts[1859];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1860], tmp_assign_source_952);
    }
    {
        PyObject *tmp_assign_source_953;
        tmp_assign_source_953 = mod_consts[1861];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1862], tmp_assign_source_953);
    }
    {
        PyObject *tmp_assign_source_954;
        tmp_assign_source_954 = mod_consts[1863];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1864], tmp_assign_source_954);
    }
    {
        PyObject *tmp_assign_source_955;
        tmp_assign_source_955 = mod_consts[1865];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1866], tmp_assign_source_955);
    }
    {
        PyObject *tmp_assign_source_956;
        tmp_assign_source_956 = mod_consts[1867];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1868], tmp_assign_source_956);
    }
    {
        PyObject *tmp_assign_source_957;
        tmp_assign_source_957 = mod_consts[1869];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1870], tmp_assign_source_957);
    }
    {
        PyObject *tmp_assign_source_958;
        tmp_assign_source_958 = mod_consts[1871];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1872], tmp_assign_source_958);
    }
    {
        PyObject *tmp_assign_source_959;
        tmp_assign_source_959 = mod_consts[1873];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1874], tmp_assign_source_959);
    }
    {
        PyObject *tmp_assign_source_960;
        tmp_assign_source_960 = mod_consts[1875];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1876], tmp_assign_source_960);
    }
    {
        PyObject *tmp_assign_source_961;
        tmp_assign_source_961 = mod_consts[1877];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1878], tmp_assign_source_961);
    }
    {
        PyObject *tmp_assign_source_962;
        tmp_assign_source_962 = mod_consts[1879];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1880], tmp_assign_source_962);
    }
    {
        PyObject *tmp_assign_source_963;
        tmp_assign_source_963 = mod_consts[1881];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1882], tmp_assign_source_963);
    }
    {
        PyObject *tmp_assign_source_964;
        tmp_assign_source_964 = mod_consts[1883];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1884], tmp_assign_source_964);
    }
    {
        PyObject *tmp_assign_source_965;
        tmp_assign_source_965 = mod_consts[1885];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1886], tmp_assign_source_965);
    }
    {
        PyObject *tmp_assign_source_966;
        tmp_assign_source_966 = mod_consts[1887];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1888], tmp_assign_source_966);
    }
    {
        PyObject *tmp_assign_source_967;
        tmp_assign_source_967 = mod_consts[1889];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1890], tmp_assign_source_967);
    }
    {
        PyObject *tmp_assign_source_968;
        tmp_assign_source_968 = mod_consts[1891];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1892], tmp_assign_source_968);
    }
    {
        PyObject *tmp_assign_source_969;
        tmp_assign_source_969 = mod_consts[1893];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1894], tmp_assign_source_969);
    }
    {
        PyObject *tmp_assign_source_970;
        tmp_assign_source_970 = mod_consts[1895];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1896], tmp_assign_source_970);
    }
    {
        PyObject *tmp_assign_source_971;
        tmp_assign_source_971 = mod_consts[1897];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1898], tmp_assign_source_971);
    }
    {
        PyObject *tmp_assign_source_972;
        tmp_assign_source_972 = mod_consts[1899];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1900], tmp_assign_source_972);
    }
    {
        PyObject *tmp_assign_source_973;
        tmp_assign_source_973 = mod_consts[1901];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1902], tmp_assign_source_973);
    }
    {
        PyObject *tmp_assign_source_974;
        tmp_assign_source_974 = mod_consts[1903];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1904], tmp_assign_source_974);
    }
    {
        PyObject *tmp_assign_source_975;
        tmp_assign_source_975 = mod_consts[1905];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1906], tmp_assign_source_975);
    }
    {
        PyObject *tmp_assign_source_976;
        tmp_assign_source_976 = mod_consts[1907];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1908], tmp_assign_source_976);
    }
    {
        PyObject *tmp_assign_source_977;
        tmp_assign_source_977 = mod_consts[1909];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1910], tmp_assign_source_977);
    }
    {
        PyObject *tmp_assign_source_978;
        tmp_assign_source_978 = mod_consts[1911];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1912], tmp_assign_source_978);
    }
    {
        PyObject *tmp_assign_source_979;
        tmp_assign_source_979 = mod_consts[1913];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1914], tmp_assign_source_979);
    }
    {
        PyObject *tmp_assign_source_980;
        tmp_assign_source_980 = mod_consts[1915];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1916], tmp_assign_source_980);
    }
    {
        PyObject *tmp_assign_source_981;
        tmp_assign_source_981 = mod_consts[1917];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1918], tmp_assign_source_981);
    }
    {
        PyObject *tmp_assign_source_982;
        tmp_assign_source_982 = mod_consts[1919];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1920], tmp_assign_source_982);
    }
    {
        PyObject *tmp_assign_source_983;
        tmp_assign_source_983 = mod_consts[1921];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1922], tmp_assign_source_983);
    }
    {
        PyObject *tmp_assign_source_984;
        tmp_assign_source_984 = mod_consts[1923];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1924], tmp_assign_source_984);
    }
    {
        PyObject *tmp_assign_source_985;
        tmp_assign_source_985 = mod_consts[1925];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1926], tmp_assign_source_985);
    }
    {
        PyObject *tmp_assign_source_986;
        tmp_assign_source_986 = mod_consts[1927];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1928], tmp_assign_source_986);
    }
    {
        PyObject *tmp_assign_source_987;
        tmp_assign_source_987 = mod_consts[1929];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1930], tmp_assign_source_987);
    }
    {
        PyObject *tmp_assign_source_988;
        tmp_assign_source_988 = mod_consts[1931];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1932], tmp_assign_source_988);
    }
    {
        PyObject *tmp_assign_source_989;
        tmp_assign_source_989 = mod_consts[1933];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1934], tmp_assign_source_989);
    }
    {
        PyObject *tmp_assign_source_990;
        tmp_assign_source_990 = mod_consts[1935];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1936], tmp_assign_source_990);
    }
    {
        PyObject *tmp_assign_source_991;
        tmp_assign_source_991 = mod_consts[1937];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1938], tmp_assign_source_991);
    }
    {
        PyObject *tmp_assign_source_992;
        tmp_assign_source_992 = mod_consts[1939];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1940], tmp_assign_source_992);
    }
    {
        PyObject *tmp_assign_source_993;
        tmp_assign_source_993 = mod_consts[1941];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1942], tmp_assign_source_993);
    }
    {
        PyObject *tmp_assign_source_994;
        tmp_assign_source_994 = mod_consts[1943];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1944], tmp_assign_source_994);
    }
    {
        PyObject *tmp_assign_source_995;
        tmp_assign_source_995 = mod_consts[1945];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1946], tmp_assign_source_995);
    }
    {
        PyObject *tmp_assign_source_996;
        tmp_assign_source_996 = mod_consts[1947];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1948], tmp_assign_source_996);
    }
    {
        PyObject *tmp_assign_source_997;
        tmp_assign_source_997 = mod_consts[1949];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1950], tmp_assign_source_997);
    }
    {
        PyObject *tmp_assign_source_998;
        tmp_assign_source_998 = mod_consts[1951];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1952], tmp_assign_source_998);
    }
    {
        PyObject *tmp_assign_source_999;
        tmp_assign_source_999 = mod_consts[1953];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1954], tmp_assign_source_999);
    }
    {
        PyObject *tmp_assign_source_1000;
        tmp_assign_source_1000 = mod_consts[1955];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1956], tmp_assign_source_1000);
    }
    {
        PyObject *tmp_assign_source_1001;
        tmp_assign_source_1001 = mod_consts[1957];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1958], tmp_assign_source_1001);
    }
    {
        PyObject *tmp_assign_source_1002;
        tmp_assign_source_1002 = mod_consts[1959];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1960], tmp_assign_source_1002);
    }
    {
        PyObject *tmp_assign_source_1003;
        tmp_assign_source_1003 = mod_consts[1961];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1962], tmp_assign_source_1003);
    }
    {
        PyObject *tmp_assign_source_1004;
        tmp_assign_source_1004 = mod_consts[1963];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1964], tmp_assign_source_1004);
    }
    {
        PyObject *tmp_assign_source_1005;
        tmp_assign_source_1005 = mod_consts[1965];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1966], tmp_assign_source_1005);
    }
    {
        PyObject *tmp_assign_source_1006;
        tmp_assign_source_1006 = mod_consts[1967];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1968], tmp_assign_source_1006);
    }
    {
        PyObject *tmp_assign_source_1007;
        tmp_assign_source_1007 = mod_consts[1969];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1970], tmp_assign_source_1007);
    }
    {
        PyObject *tmp_assign_source_1008;
        tmp_assign_source_1008 = mod_consts[1971];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1972], tmp_assign_source_1008);
    }
    {
        PyObject *tmp_assign_source_1009;
        tmp_assign_source_1009 = mod_consts[1973];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1974], tmp_assign_source_1009);
    }
    {
        PyObject *tmp_assign_source_1010;
        tmp_assign_source_1010 = mod_consts[1975];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1976], tmp_assign_source_1010);
    }
    {
        PyObject *tmp_assign_source_1011;
        tmp_assign_source_1011 = mod_consts[1977];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1978], tmp_assign_source_1011);
    }
    {
        PyObject *tmp_assign_source_1012;
        tmp_assign_source_1012 = mod_consts[1979];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1980], tmp_assign_source_1012);
    }
    {
        PyObject *tmp_assign_source_1013;
        tmp_assign_source_1013 = mod_consts[1981];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1982], tmp_assign_source_1013);
    }
    {
        PyObject *tmp_assign_source_1014;
        tmp_assign_source_1014 = mod_consts[1983];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1984], tmp_assign_source_1014);
    }
    {
        PyObject *tmp_assign_source_1015;
        tmp_assign_source_1015 = mod_consts[1985];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1986], tmp_assign_source_1015);
    }
    {
        PyObject *tmp_assign_source_1016;
        tmp_assign_source_1016 = mod_consts[1987];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1988], tmp_assign_source_1016);
    }
    {
        PyObject *tmp_assign_source_1017;
        tmp_assign_source_1017 = mod_consts[1989];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1990], tmp_assign_source_1017);
    }
    {
        PyObject *tmp_assign_source_1018;
        tmp_assign_source_1018 = mod_consts[1991];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1992], tmp_assign_source_1018);
    }
    {
        PyObject *tmp_assign_source_1019;
        tmp_assign_source_1019 = mod_consts[1993];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1994], tmp_assign_source_1019);
    }
    {
        PyObject *tmp_assign_source_1020;
        tmp_assign_source_1020 = mod_consts[1995];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1996], tmp_assign_source_1020);
    }
    {
        PyObject *tmp_assign_source_1021;
        tmp_assign_source_1021 = mod_consts[1997];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1998], tmp_assign_source_1021);
    }
    {
        PyObject *tmp_assign_source_1022;
        tmp_assign_source_1022 = mod_consts[1999];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2000], tmp_assign_source_1022);
    }
    {
        PyObject *tmp_assign_source_1023;
        tmp_assign_source_1023 = mod_consts[2001];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2002], tmp_assign_source_1023);
    }
    {
        PyObject *tmp_assign_source_1024;
        tmp_assign_source_1024 = mod_consts[2003];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2004], tmp_assign_source_1024);
    }
    {
        PyObject *tmp_assign_source_1025;
        tmp_assign_source_1025 = mod_consts[2005];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2006], tmp_assign_source_1025);
    }
    {
        PyObject *tmp_assign_source_1026;
        tmp_assign_source_1026 = mod_consts[2007];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2008], tmp_assign_source_1026);
    }
    {
        PyObject *tmp_assign_source_1027;
        tmp_assign_source_1027 = mod_consts[2009];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2010], tmp_assign_source_1027);
    }
    {
        PyObject *tmp_assign_source_1028;
        tmp_assign_source_1028 = mod_consts[2011];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2012], tmp_assign_source_1028);
    }
    {
        PyObject *tmp_assign_source_1029;
        tmp_assign_source_1029 = mod_consts[2013];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2014], tmp_assign_source_1029);
    }
    {
        PyObject *tmp_assign_source_1030;
        tmp_assign_source_1030 = mod_consts[2015];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2016], tmp_assign_source_1030);
    }
    {
        PyObject *tmp_assign_source_1031;
        tmp_assign_source_1031 = mod_consts[2017];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2018], tmp_assign_source_1031);
    }
    {
        PyObject *tmp_assign_source_1032;
        tmp_assign_source_1032 = mod_consts[2019];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2020], tmp_assign_source_1032);
    }
    {
        PyObject *tmp_assign_source_1033;
        tmp_assign_source_1033 = mod_consts[2021];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2022], tmp_assign_source_1033);
    }
    {
        PyObject *tmp_assign_source_1034;
        tmp_assign_source_1034 = mod_consts[2023];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2024], tmp_assign_source_1034);
    }
    {
        PyObject *tmp_assign_source_1035;
        tmp_assign_source_1035 = mod_consts[2025];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2026], tmp_assign_source_1035);
    }
    {
        PyObject *tmp_assign_source_1036;
        tmp_assign_source_1036 = mod_consts[2027];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2028], tmp_assign_source_1036);
    }
    {
        PyObject *tmp_assign_source_1037;
        tmp_assign_source_1037 = mod_consts[2029];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2030], tmp_assign_source_1037);
    }
    {
        PyObject *tmp_assign_source_1038;
        tmp_assign_source_1038 = mod_consts[2031];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2032], tmp_assign_source_1038);
    }
    {
        PyObject *tmp_assign_source_1039;
        tmp_assign_source_1039 = mod_consts[2033];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2034], tmp_assign_source_1039);
    }
    {
        PyObject *tmp_assign_source_1040;
        tmp_assign_source_1040 = mod_consts[2035];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2036], tmp_assign_source_1040);
    }
    {
        PyObject *tmp_assign_source_1041;
        tmp_assign_source_1041 = mod_consts[2037];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2038], tmp_assign_source_1041);
    }
    {
        PyObject *tmp_assign_source_1042;
        tmp_assign_source_1042 = mod_consts[2039];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2040], tmp_assign_source_1042);
    }
    {
        PyObject *tmp_assign_source_1043;
        tmp_assign_source_1043 = mod_consts[2041];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2042], tmp_assign_source_1043);
    }
    {
        PyObject *tmp_assign_source_1044;
        tmp_assign_source_1044 = mod_consts[2043];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2044], tmp_assign_source_1044);
    }
    {
        PyObject *tmp_assign_source_1045;
        tmp_assign_source_1045 = mod_consts[2045];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2046], tmp_assign_source_1045);
    }
    {
        PyObject *tmp_assign_source_1046;
        tmp_assign_source_1046 = mod_consts[2047];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2048], tmp_assign_source_1046);
    }
    {
        PyObject *tmp_assign_source_1047;
        tmp_assign_source_1047 = mod_consts[2049];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2050], tmp_assign_source_1047);
    }
    {
        PyObject *tmp_assign_source_1048;
        tmp_assign_source_1048 = mod_consts[2051];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2052], tmp_assign_source_1048);
    }
    {
        PyObject *tmp_assign_source_1049;
        tmp_assign_source_1049 = mod_consts[2053];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2054], tmp_assign_source_1049);
    }
    {
        PyObject *tmp_assign_source_1050;
        tmp_assign_source_1050 = mod_consts[2055];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2056], tmp_assign_source_1050);
    }
    {
        PyObject *tmp_assign_source_1051;
        tmp_assign_source_1051 = mod_consts[2057];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2058], tmp_assign_source_1051);
    }
    {
        PyObject *tmp_assign_source_1052;
        tmp_assign_source_1052 = mod_consts[2059];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2060], tmp_assign_source_1052);
    }
    {
        PyObject *tmp_assign_source_1053;
        tmp_assign_source_1053 = mod_consts[2061];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2062], tmp_assign_source_1053);
    }
    {
        PyObject *tmp_assign_source_1054;
        tmp_assign_source_1054 = mod_consts[2063];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2064], tmp_assign_source_1054);
    }
    {
        PyObject *tmp_assign_source_1055;
        tmp_assign_source_1055 = mod_consts[2065];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2066], tmp_assign_source_1055);
    }
    {
        PyObject *tmp_assign_source_1056;
        tmp_assign_source_1056 = mod_consts[2067];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2068], tmp_assign_source_1056);
    }
    {
        PyObject *tmp_assign_source_1057;
        tmp_assign_source_1057 = mod_consts[2069];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2070], tmp_assign_source_1057);
    }
    {
        PyObject *tmp_assign_source_1058;
        tmp_assign_source_1058 = mod_consts[2071];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2072], tmp_assign_source_1058);
    }
    {
        PyObject *tmp_assign_source_1059;
        tmp_assign_source_1059 = mod_consts[2073];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2074], tmp_assign_source_1059);
    }
    {
        PyObject *tmp_assign_source_1060;
        tmp_assign_source_1060 = mod_consts[2075];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2076], tmp_assign_source_1060);
    }
    {
        PyObject *tmp_assign_source_1061;
        tmp_assign_source_1061 = mod_consts[2077];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2078], tmp_assign_source_1061);
    }
    {
        PyObject *tmp_assign_source_1062;
        tmp_assign_source_1062 = mod_consts[2079];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2080], tmp_assign_source_1062);
    }
    {
        PyObject *tmp_assign_source_1063;
        tmp_assign_source_1063 = mod_consts[2081];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2082], tmp_assign_source_1063);
    }
    {
        PyObject *tmp_assign_source_1064;
        tmp_assign_source_1064 = mod_consts[2083];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2084], tmp_assign_source_1064);
    }
    {
        PyObject *tmp_assign_source_1065;
        tmp_assign_source_1065 = mod_consts[2085];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2086], tmp_assign_source_1065);
    }
    {
        PyObject *tmp_assign_source_1066;
        tmp_assign_source_1066 = mod_consts[2087];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2088], tmp_assign_source_1066);
    }
    {
        PyObject *tmp_assign_source_1067;
        tmp_assign_source_1067 = mod_consts[2089];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2090], tmp_assign_source_1067);
    }
    {
        PyObject *tmp_assign_source_1068;
        tmp_assign_source_1068 = mod_consts[2091];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2092], tmp_assign_source_1068);
    }
    {
        PyObject *tmp_assign_source_1069;
        tmp_assign_source_1069 = mod_consts[2093];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2094], tmp_assign_source_1069);
    }
    {
        PyObject *tmp_assign_source_1070;
        tmp_assign_source_1070 = mod_consts[2095];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2096], tmp_assign_source_1070);
    }
    {
        PyObject *tmp_assign_source_1071;
        tmp_assign_source_1071 = mod_consts[2097];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2098], tmp_assign_source_1071);
    }
    {
        PyObject *tmp_assign_source_1072;
        tmp_assign_source_1072 = mod_consts[2099];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2100], tmp_assign_source_1072);
    }
    {
        PyObject *tmp_assign_source_1073;
        tmp_assign_source_1073 = mod_consts[2101];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2102], tmp_assign_source_1073);
    }
    {
        PyObject *tmp_assign_source_1074;
        tmp_assign_source_1074 = mod_consts[2103];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2104], tmp_assign_source_1074);
    }
    {
        PyObject *tmp_assign_source_1075;
        tmp_assign_source_1075 = mod_consts[2105];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2106], tmp_assign_source_1075);
    }
    {
        PyObject *tmp_assign_source_1076;
        tmp_assign_source_1076 = mod_consts[2107];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2108], tmp_assign_source_1076);
    }
    {
        PyObject *tmp_assign_source_1077;
        tmp_assign_source_1077 = mod_consts[2109];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2110], tmp_assign_source_1077);
    }
    {
        PyObject *tmp_assign_source_1078;
        tmp_assign_source_1078 = mod_consts[2111];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2112], tmp_assign_source_1078);
    }
    {
        PyObject *tmp_assign_source_1079;
        tmp_assign_source_1079 = mod_consts[2113];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2114], tmp_assign_source_1079);
    }
    {
        PyObject *tmp_assign_source_1080;
        tmp_assign_source_1080 = mod_consts[2115];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2116], tmp_assign_source_1080);
    }
    {
        PyObject *tmp_assign_source_1081;
        tmp_assign_source_1081 = mod_consts[2117];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2118], tmp_assign_source_1081);
    }
    {
        PyObject *tmp_assign_source_1082;
        tmp_assign_source_1082 = mod_consts[2119];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2120], tmp_assign_source_1082);
    }
    {
        PyObject *tmp_assign_source_1083;
        tmp_assign_source_1083 = mod_consts[2121];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2122], tmp_assign_source_1083);
    }
    {
        PyObject *tmp_assign_source_1084;
        tmp_assign_source_1084 = mod_consts[2123];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2124], tmp_assign_source_1084);
    }
    {
        PyObject *tmp_assign_source_1085;
        tmp_assign_source_1085 = mod_consts[2125];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2126], tmp_assign_source_1085);
    }
    {
        PyObject *tmp_assign_source_1086;
        tmp_assign_source_1086 = mod_consts[2127];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2128], tmp_assign_source_1086);
    }
    {
        PyObject *tmp_assign_source_1087;
        tmp_assign_source_1087 = mod_consts[2129];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2130], tmp_assign_source_1087);
    }
    {
        PyObject *tmp_assign_source_1088;
        tmp_assign_source_1088 = mod_consts[2131];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2132], tmp_assign_source_1088);
    }
    {
        PyObject *tmp_assign_source_1089;
        tmp_assign_source_1089 = mod_consts[2133];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2134], tmp_assign_source_1089);
    }
    {
        PyObject *tmp_assign_source_1090;
        tmp_assign_source_1090 = mod_consts[2135];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2136], tmp_assign_source_1090);
    }
    {
        PyObject *tmp_assign_source_1091;
        tmp_assign_source_1091 = mod_consts[2137];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2138], tmp_assign_source_1091);
    }
    {
        PyObject *tmp_assign_source_1092;
        tmp_assign_source_1092 = mod_consts[2139];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2140], tmp_assign_source_1092);
    }
    {
        PyObject *tmp_assign_source_1093;
        tmp_assign_source_1093 = mod_consts[2141];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2142], tmp_assign_source_1093);
    }
    {
        PyObject *tmp_assign_source_1094;
        tmp_assign_source_1094 = mod_consts[2143];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2144], tmp_assign_source_1094);
    }
    {
        PyObject *tmp_assign_source_1095;
        tmp_assign_source_1095 = mod_consts[2145];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2146], tmp_assign_source_1095);
    }
    {
        PyObject *tmp_assign_source_1096;
        tmp_assign_source_1096 = mod_consts[2147];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2148], tmp_assign_source_1096);
    }
    {
        PyObject *tmp_assign_source_1097;
        tmp_assign_source_1097 = mod_consts[2149];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2150], tmp_assign_source_1097);
    }
    {
        PyObject *tmp_assign_source_1098;
        tmp_assign_source_1098 = mod_consts[2151];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2152], tmp_assign_source_1098);
    }
    {
        PyObject *tmp_assign_source_1099;
        tmp_assign_source_1099 = mod_consts[2153];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2154], tmp_assign_source_1099);
    }
    {
        PyObject *tmp_assign_source_1100;
        tmp_assign_source_1100 = mod_consts[2155];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2156], tmp_assign_source_1100);
    }
    {
        PyObject *tmp_assign_source_1101;
        tmp_assign_source_1101 = mod_consts[2157];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2158], tmp_assign_source_1101);
    }
    {
        PyObject *tmp_assign_source_1102;
        tmp_assign_source_1102 = mod_consts[2159];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2160], tmp_assign_source_1102);
    }
    {
        PyObject *tmp_assign_source_1103;
        tmp_assign_source_1103 = mod_consts[2161];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2162], tmp_assign_source_1103);
    }
    {
        PyObject *tmp_assign_source_1104;
        tmp_assign_source_1104 = mod_consts[2163];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2164], tmp_assign_source_1104);
    }
    {
        PyObject *tmp_assign_source_1105;
        tmp_assign_source_1105 = mod_consts[2165];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2166], tmp_assign_source_1105);
    }
    {
        PyObject *tmp_assign_source_1106;
        tmp_assign_source_1106 = mod_consts[2167];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2168], tmp_assign_source_1106);
    }
    {
        PyObject *tmp_assign_source_1107;
        tmp_assign_source_1107 = mod_consts[2169];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2170], tmp_assign_source_1107);
    }
    {
        PyObject *tmp_assign_source_1108;
        tmp_assign_source_1108 = mod_consts[2171];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2172], tmp_assign_source_1108);
    }
    {
        PyObject *tmp_assign_source_1109;
        tmp_assign_source_1109 = mod_consts[1235];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1236], tmp_assign_source_1109);
    }
    {
        PyObject *tmp_assign_source_1110;
        tmp_assign_source_1110 = mod_consts[2173];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2174], tmp_assign_source_1110);
    }
    {
        PyObject *tmp_assign_source_1111;
        tmp_assign_source_1111 = mod_consts[1237];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1238], tmp_assign_source_1111);
    }
    {
        PyObject *tmp_assign_source_1112;
        tmp_assign_source_1112 = mod_consts[1239];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1240], tmp_assign_source_1112);
    }
    {
        PyObject *tmp_assign_source_1113;
        tmp_assign_source_1113 = mod_consts[2175];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2146], tmp_assign_source_1113);
    }
    {
        PyObject *tmp_assign_source_1114;
        tmp_assign_source_1114 = mod_consts[2176];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2148], tmp_assign_source_1114);
    }
    {
        PyObject *tmp_assign_source_1115;
        tmp_assign_source_1115 = mod_consts[2177];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2150], tmp_assign_source_1115);
    }
    {
        PyObject *tmp_assign_source_1116;
        tmp_assign_source_1116 = mod_consts[2178];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2152], tmp_assign_source_1116);
    }
    {
        PyObject *tmp_assign_source_1117;
        tmp_assign_source_1117 = mod_consts[2179];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2154], tmp_assign_source_1117);
    }
    {
        PyObject *tmp_assign_source_1118;
        tmp_assign_source_1118 = mod_consts[2180];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2156], tmp_assign_source_1118);
    }
    {
        PyObject *tmp_assign_source_1119;
        tmp_assign_source_1119 = mod_consts[2181];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2158], tmp_assign_source_1119);
    }
    {
        PyObject *tmp_assign_source_1120;
        tmp_assign_source_1120 = mod_consts[2182];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2160], tmp_assign_source_1120);
    }
    {
        PyObject *tmp_assign_source_1121;
        tmp_assign_source_1121 = mod_consts[2183];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2162], tmp_assign_source_1121);
    }
    {
        PyObject *tmp_assign_source_1122;
        tmp_assign_source_1122 = mod_consts[2184];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2164], tmp_assign_source_1122);
    }
    {
        PyObject *tmp_assign_source_1123;
        tmp_assign_source_1123 = mod_consts[2185];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2166], tmp_assign_source_1123);
    }
    {
        PyObject *tmp_assign_source_1124;
        tmp_assign_source_1124 = mod_consts[1241];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1242], tmp_assign_source_1124);
    }
    {
        PyObject *tmp_assign_source_1125;
        tmp_assign_source_1125 = mod_consts[1243];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1244], tmp_assign_source_1125);
    }
    {
        PyObject *tmp_assign_source_1126;
        tmp_assign_source_1126 = mod_consts[1245];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1246], tmp_assign_source_1126);
    }
    {
        PyObject *tmp_assign_source_1127;
        tmp_assign_source_1127 = mod_consts[2186];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2187], tmp_assign_source_1127);
    }
    {
        PyObject *tmp_assign_source_1128;
        tmp_assign_source_1128 = mod_consts[2188];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2189], tmp_assign_source_1128);
    }
    {
        PyObject *tmp_assign_source_1129;
        tmp_assign_source_1129 = mod_consts[2190];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2191], tmp_assign_source_1129);
    }
    {
        PyObject *tmp_assign_source_1130;
        tmp_assign_source_1130 = mod_consts[2192];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2193], tmp_assign_source_1130);
    }
    {
        PyObject *tmp_assign_source_1131;
        tmp_assign_source_1131 = mod_consts[2194];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2195], tmp_assign_source_1131);
    }
    {
        PyObject *tmp_assign_source_1132;
        tmp_assign_source_1132 = mod_consts[2196];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2197], tmp_assign_source_1132);
    }
    {
        PyObject *tmp_assign_source_1133;
        tmp_assign_source_1133 = mod_consts[2198];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2199], tmp_assign_source_1133);
    }
    {
        PyObject *tmp_assign_source_1134;
        tmp_assign_source_1134 = mod_consts[2200];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2201], tmp_assign_source_1134);
    }
    {
        PyObject *tmp_assign_source_1135;
        tmp_assign_source_1135 = mod_consts[2202];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2203], tmp_assign_source_1135);
    }
    {
        PyObject *tmp_assign_source_1136;
        tmp_assign_source_1136 = mod_consts[2204];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2205], tmp_assign_source_1136);
    }
    {
        PyObject *tmp_assign_source_1137;
        tmp_assign_source_1137 = mod_consts[2206];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2207], tmp_assign_source_1137);
    }
    {
        PyObject *tmp_assign_source_1138;
        tmp_assign_source_1138 = mod_consts[2208];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2209], tmp_assign_source_1138);
    }
    {
        PyObject *tmp_assign_source_1139;
        tmp_assign_source_1139 = mod_consts[2210];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2211], tmp_assign_source_1139);
    }
    {
        PyObject *tmp_assign_source_1140;
        tmp_assign_source_1140 = mod_consts[2212];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2213], tmp_assign_source_1140);
    }
    {
        PyObject *tmp_assign_source_1141;
        tmp_assign_source_1141 = mod_consts[2214];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2215], tmp_assign_source_1141);
    }
    {
        PyObject *tmp_assign_source_1142;
        tmp_assign_source_1142 = mod_consts[2216];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2217], tmp_assign_source_1142);
    }
    {
        PyObject *tmp_assign_source_1143;
        tmp_assign_source_1143 = mod_consts[2218];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2219], tmp_assign_source_1143);
    }
    {
        PyObject *tmp_assign_source_1144;
        tmp_assign_source_1144 = mod_consts[2220];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2221], tmp_assign_source_1144);
    }
    {
        PyObject *tmp_assign_source_1145;
        tmp_assign_source_1145 = mod_consts[2222];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2223], tmp_assign_source_1145);
    }
    {
        PyObject *tmp_assign_source_1146;
        tmp_assign_source_1146 = mod_consts[2224];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2225], tmp_assign_source_1146);
    }
    {
        PyObject *tmp_assign_source_1147;
        tmp_assign_source_1147 = mod_consts[2226];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2227], tmp_assign_source_1147);
    }
    {
        PyObject *tmp_assign_source_1148;
        tmp_assign_source_1148 = mod_consts[2228];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2229], tmp_assign_source_1148);
    }
    {
        PyObject *tmp_assign_source_1149;
        tmp_assign_source_1149 = mod_consts[2230];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2231], tmp_assign_source_1149);
    }
    {
        PyObject *tmp_assign_source_1150;
        tmp_assign_source_1150 = mod_consts[2232];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2233], tmp_assign_source_1150);
    }
    {
        PyObject *tmp_assign_source_1151;
        tmp_assign_source_1151 = mod_consts[2234];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2235], tmp_assign_source_1151);
    }
    {
        PyObject *tmp_assign_source_1152;
        tmp_assign_source_1152 = mod_consts[2236];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2237], tmp_assign_source_1152);
    }
    {
        PyObject *tmp_assign_source_1153;
        tmp_assign_source_1153 = mod_consts[2238];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2239], tmp_assign_source_1153);
    }
    {
        PyObject *tmp_assign_source_1154;
        tmp_assign_source_1154 = mod_consts[2240];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2241], tmp_assign_source_1154);
    }
    {
        PyObject *tmp_assign_source_1155;
        tmp_assign_source_1155 = mod_consts[2242];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2243], tmp_assign_source_1155);
    }
    {
        PyObject *tmp_assign_source_1156;
        tmp_assign_source_1156 = mod_consts[2244];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2245], tmp_assign_source_1156);
    }
    {
        PyObject *tmp_assign_source_1157;
        tmp_assign_source_1157 = mod_consts[2246];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2247], tmp_assign_source_1157);
    }
    {
        PyObject *tmp_assign_source_1158;
        tmp_assign_source_1158 = mod_consts[2248];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2249], tmp_assign_source_1158);
    }
    {
        PyObject *tmp_assign_source_1159;
        tmp_assign_source_1159 = mod_consts[2250];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2251], tmp_assign_source_1159);
    }
    {
        PyObject *tmp_assign_source_1160;
        tmp_assign_source_1160 = mod_consts[2252];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2253], tmp_assign_source_1160);
    }
    {
        PyObject *tmp_assign_source_1161;
        tmp_assign_source_1161 = mod_consts[2254];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2255], tmp_assign_source_1161);
    }
    {
        PyObject *tmp_assign_source_1162;
        tmp_assign_source_1162 = mod_consts[2256];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2257], tmp_assign_source_1162);
    }
    {
        PyObject *tmp_assign_source_1163;
        tmp_assign_source_1163 = mod_consts[2258];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2259], tmp_assign_source_1163);
    }
    {
        PyObject *tmp_assign_source_1164;
        tmp_assign_source_1164 = mod_consts[2260];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2261], tmp_assign_source_1164);
    }
    {
        PyObject *tmp_assign_source_1165;
        tmp_assign_source_1165 = mod_consts[2262];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2263], tmp_assign_source_1165);
    }
    {
        PyObject *tmp_assign_source_1166;
        tmp_assign_source_1166 = mod_consts[2264];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2265], tmp_assign_source_1166);
    }
    {
        PyObject *tmp_assign_source_1167;
        tmp_assign_source_1167 = mod_consts[2266];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2267], tmp_assign_source_1167);
    }
    {
        PyObject *tmp_assign_source_1168;
        tmp_assign_source_1168 = mod_consts[2268];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2269], tmp_assign_source_1168);
    }
    {
        PyObject *tmp_assign_source_1169;
        tmp_assign_source_1169 = mod_consts[2270];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2271], tmp_assign_source_1169);
    }
    {
        PyObject *tmp_assign_source_1170;
        tmp_assign_source_1170 = mod_consts[2272];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2273], tmp_assign_source_1170);
    }
    {
        PyObject *tmp_assign_source_1171;
        tmp_assign_source_1171 = mod_consts[2274];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2275], tmp_assign_source_1171);
    }
    {
        PyObject *tmp_assign_source_1172;
        tmp_assign_source_1172 = mod_consts[2276];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2277], tmp_assign_source_1172);
    }
    {
        PyObject *tmp_assign_source_1173;
        tmp_assign_source_1173 = mod_consts[2278];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2279], tmp_assign_source_1173);
    }
    {
        PyObject *tmp_assign_source_1174;
        tmp_assign_source_1174 = mod_consts[2280];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2281], tmp_assign_source_1174);
    }
    {
        PyObject *tmp_assign_source_1175;
        tmp_assign_source_1175 = mod_consts[2282];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2283], tmp_assign_source_1175);
    }
    {
        PyObject *tmp_assign_source_1176;
        tmp_assign_source_1176 = mod_consts[2284];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2285], tmp_assign_source_1176);
    }
    {
        PyObject *tmp_assign_source_1177;
        tmp_assign_source_1177 = mod_consts[2286];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2287], tmp_assign_source_1177);
    }
    {
        PyObject *tmp_assign_source_1178;
        tmp_assign_source_1178 = mod_consts[2288];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2289], tmp_assign_source_1178);
    }
    {
        PyObject *tmp_assign_source_1179;
        tmp_assign_source_1179 = mod_consts[2290];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2291], tmp_assign_source_1179);
    }
    {
        PyObject *tmp_assign_source_1180;
        tmp_assign_source_1180 = mod_consts[2292];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2293], tmp_assign_source_1180);
    }
    {
        PyObject *tmp_assign_source_1181;
        tmp_assign_source_1181 = mod_consts[2294];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2295], tmp_assign_source_1181);
    }
    {
        PyObject *tmp_assign_source_1182;
        tmp_assign_source_1182 = mod_consts[2296];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2297], tmp_assign_source_1182);
    }
    {
        PyObject *tmp_assign_source_1183;
        tmp_assign_source_1183 = mod_consts[2298];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2299], tmp_assign_source_1183);
    }
    {
        PyObject *tmp_assign_source_1184;
        tmp_assign_source_1184 = mod_consts[2300];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2301], tmp_assign_source_1184);
    }
    {
        PyObject *tmp_assign_source_1185;
        tmp_assign_source_1185 = mod_consts[2302];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2303], tmp_assign_source_1185);
    }
    {
        PyObject *tmp_assign_source_1186;
        tmp_assign_source_1186 = mod_consts[2304];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2305], tmp_assign_source_1186);
    }
    {
        PyObject *tmp_assign_source_1187;
        tmp_assign_source_1187 = mod_consts[2306];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2307], tmp_assign_source_1187);
    }
    {
        PyObject *tmp_assign_source_1188;
        tmp_assign_source_1188 = mod_consts[2308];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2309], tmp_assign_source_1188);
    }
    {
        PyObject *tmp_assign_source_1189;
        tmp_assign_source_1189 = mod_consts[2310];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2311], tmp_assign_source_1189);
    }
    {
        PyObject *tmp_assign_source_1190;
        tmp_assign_source_1190 = mod_consts[2312];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2313], tmp_assign_source_1190);
    }
    {
        PyObject *tmp_assign_source_1191;
        tmp_assign_source_1191 = mod_consts[2314];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2315], tmp_assign_source_1191);
    }
    {
        PyObject *tmp_assign_source_1192;
        tmp_assign_source_1192 = mod_consts[2316];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2317], tmp_assign_source_1192);
    }
    {
        PyObject *tmp_assign_source_1193;
        tmp_assign_source_1193 = mod_consts[2318];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2319], tmp_assign_source_1193);
    }
    {
        PyObject *tmp_assign_source_1194;
        tmp_assign_source_1194 = mod_consts[2320];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2321], tmp_assign_source_1194);
    }
    {
        PyObject *tmp_assign_source_1195;
        tmp_assign_source_1195 = mod_consts[2322];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2323], tmp_assign_source_1195);
    }
    {
        PyObject *tmp_assign_source_1196;
        tmp_assign_source_1196 = mod_consts[2324];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2325], tmp_assign_source_1196);
    }
    {
        PyObject *tmp_assign_source_1197;
        tmp_assign_source_1197 = mod_consts[2326];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2327], tmp_assign_source_1197);
    }
    {
        PyObject *tmp_assign_source_1198;
        tmp_assign_source_1198 = mod_consts[2328];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2329], tmp_assign_source_1198);
    }
    {
        PyObject *tmp_assign_source_1199;
        tmp_assign_source_1199 = mod_consts[2330];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2331], tmp_assign_source_1199);
    }
    {
        PyObject *tmp_assign_source_1200;
        tmp_assign_source_1200 = mod_consts[2332];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2333], tmp_assign_source_1200);
    }
    {
        PyObject *tmp_assign_source_1201;
        tmp_assign_source_1201 = mod_consts[2334];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2335], tmp_assign_source_1201);
    }
    {
        PyObject *tmp_assign_source_1202;
        tmp_assign_source_1202 = mod_consts[2336];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2337], tmp_assign_source_1202);
    }
    {
        PyObject *tmp_assign_source_1203;
        tmp_assign_source_1203 = mod_consts[2338];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2339], tmp_assign_source_1203);
    }
    {
        PyObject *tmp_assign_source_1204;
        tmp_assign_source_1204 = mod_consts[2340];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2341], tmp_assign_source_1204);
    }
    {
        PyObject *tmp_assign_source_1205;
        tmp_assign_source_1205 = mod_consts[2342];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2343], tmp_assign_source_1205);
    }
    {
        PyObject *tmp_assign_source_1206;
        tmp_assign_source_1206 = mod_consts[2344];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2345], tmp_assign_source_1206);
    }
    {
        PyObject *tmp_assign_source_1207;
        tmp_assign_source_1207 = mod_consts[2346];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2347], tmp_assign_source_1207);
    }
    {
        PyObject *tmp_assign_source_1208;
        tmp_assign_source_1208 = mod_consts[2348];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2349], tmp_assign_source_1208);
    }
    {
        PyObject *tmp_assign_source_1209;
        tmp_assign_source_1209 = mod_consts[2350];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2351], tmp_assign_source_1209);
    }
    {
        PyObject *tmp_assign_source_1210;
        tmp_assign_source_1210 = mod_consts[2352];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2353], tmp_assign_source_1210);
    }
    {
        PyObject *tmp_assign_source_1211;
        tmp_assign_source_1211 = mod_consts[2354];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2355], tmp_assign_source_1211);
    }
    {
        PyObject *tmp_assign_source_1212;
        tmp_assign_source_1212 = mod_consts[2356];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2357], tmp_assign_source_1212);
    }
    {
        PyObject *tmp_assign_source_1213;
        tmp_assign_source_1213 = mod_consts[2358];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2359], tmp_assign_source_1213);
    }
    {
        PyObject *tmp_assign_source_1214;
        tmp_assign_source_1214 = mod_consts[2360];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2361], tmp_assign_source_1214);
    }
    {
        PyObject *tmp_assign_source_1215;
        tmp_assign_source_1215 = mod_consts[2362];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2363], tmp_assign_source_1215);
    }
    {
        PyObject *tmp_assign_source_1216;
        tmp_assign_source_1216 = mod_consts[2364];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2365], tmp_assign_source_1216);
    }
    {
        PyObject *tmp_assign_source_1217;
        tmp_assign_source_1217 = mod_consts[2366];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2367], tmp_assign_source_1217);
    }
    {
        PyObject *tmp_assign_source_1218;
        tmp_assign_source_1218 = mod_consts[2368];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2369], tmp_assign_source_1218);
    }
    {
        PyObject *tmp_assign_source_1219;
        tmp_assign_source_1219 = mod_consts[2370];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2371], tmp_assign_source_1219);
    }
    {
        PyObject *tmp_assign_source_1220;
        tmp_assign_source_1220 = mod_consts[2372];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2373], tmp_assign_source_1220);
    }
    {
        PyObject *tmp_assign_source_1221;
        tmp_assign_source_1221 = mod_consts[2374];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2375], tmp_assign_source_1221);
    }
    {
        PyObject *tmp_assign_source_1222;
        tmp_assign_source_1222 = mod_consts[2376];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2377], tmp_assign_source_1222);
    }
    {
        PyObject *tmp_assign_source_1223;
        tmp_assign_source_1223 = mod_consts[2378];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2379], tmp_assign_source_1223);
    }
    {
        PyObject *tmp_assign_source_1224;
        tmp_assign_source_1224 = mod_consts[2380];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2381], tmp_assign_source_1224);
    }
    {
        PyObject *tmp_assign_source_1225;
        tmp_assign_source_1225 = mod_consts[2382];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2383], tmp_assign_source_1225);
    }
    {
        PyObject *tmp_assign_source_1226;
        tmp_assign_source_1226 = mod_consts[2384];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2385], tmp_assign_source_1226);
    }
    {
        PyObject *tmp_assign_source_1227;
        tmp_assign_source_1227 = mod_consts[2386];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2387], tmp_assign_source_1227);
    }
    {
        PyObject *tmp_assign_source_1228;
        tmp_assign_source_1228 = mod_consts[2388];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2389], tmp_assign_source_1228);
    }
    {
        PyObject *tmp_assign_source_1229;
        tmp_assign_source_1229 = mod_consts[2390];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2391], tmp_assign_source_1229);
    }
    {
        PyObject *tmp_assign_source_1230;
        tmp_assign_source_1230 = mod_consts[2392];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2393], tmp_assign_source_1230);
    }
    {
        PyObject *tmp_assign_source_1231;
        tmp_assign_source_1231 = mod_consts[2394];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2395], tmp_assign_source_1231);
    }
    {
        PyObject *tmp_assign_source_1232;
        tmp_assign_source_1232 = mod_consts[2396];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2397], tmp_assign_source_1232);
    }
    {
        PyObject *tmp_assign_source_1233;
        tmp_assign_source_1233 = mod_consts[2398];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2399], tmp_assign_source_1233);
    }
    {
        PyObject *tmp_assign_source_1234;
        tmp_assign_source_1234 = mod_consts[2400];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2401], tmp_assign_source_1234);
    }
    {
        PyObject *tmp_assign_source_1235;
        tmp_assign_source_1235 = mod_consts[2402];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2403], tmp_assign_source_1235);
    }
    {
        PyObject *tmp_assign_source_1236;
        tmp_assign_source_1236 = mod_consts[2404];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2405], tmp_assign_source_1236);
    }
    {
        PyObject *tmp_assign_source_1237;
        tmp_assign_source_1237 = mod_consts[2406];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2407], tmp_assign_source_1237);
    }
    {
        PyObject *tmp_assign_source_1238;
        tmp_assign_source_1238 = mod_consts[2408];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2409], tmp_assign_source_1238);
    }
    {
        PyObject *tmp_assign_source_1239;
        tmp_assign_source_1239 = mod_consts[2410];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2411], tmp_assign_source_1239);
    }
    {
        PyObject *tmp_assign_source_1240;
        tmp_assign_source_1240 = mod_consts[2412];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2413], tmp_assign_source_1240);
    }
    {
        PyObject *tmp_assign_source_1241;
        tmp_assign_source_1241 = mod_consts[2414];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2415], tmp_assign_source_1241);
    }
    {
        PyObject *tmp_assign_source_1242;
        tmp_assign_source_1242 = mod_consts[2416];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2417], tmp_assign_source_1242);
    }
    {
        PyObject *tmp_assign_source_1243;
        tmp_assign_source_1243 = mod_consts[2418];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2419], tmp_assign_source_1243);
    }
    {
        PyObject *tmp_assign_source_1244;
        tmp_assign_source_1244 = mod_consts[2420];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2421], tmp_assign_source_1244);
    }
    {
        PyObject *tmp_assign_source_1245;
        tmp_assign_source_1245 = mod_consts[2422];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2423], tmp_assign_source_1245);
    }
    {
        PyObject *tmp_assign_source_1246;
        tmp_assign_source_1246 = mod_consts[2424];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2425], tmp_assign_source_1246);
    }
    {
        PyObject *tmp_assign_source_1247;
        tmp_assign_source_1247 = mod_consts[2426];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2427], tmp_assign_source_1247);
    }
    {
        PyObject *tmp_assign_source_1248;
        tmp_assign_source_1248 = mod_consts[2428];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2429], tmp_assign_source_1248);
    }
    {
        PyObject *tmp_assign_source_1249;
        tmp_assign_source_1249 = mod_consts[2430];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2431], tmp_assign_source_1249);
    }
    {
        PyObject *tmp_assign_source_1250;
        tmp_assign_source_1250 = mod_consts[2432];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2433], tmp_assign_source_1250);
    }
    {
        PyObject *tmp_assign_source_1251;
        tmp_assign_source_1251 = mod_consts[2434];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2435], tmp_assign_source_1251);
    }
    {
        PyObject *tmp_assign_source_1252;
        tmp_assign_source_1252 = mod_consts[2436];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2437], tmp_assign_source_1252);
    }
    {
        PyObject *tmp_assign_source_1253;
        tmp_assign_source_1253 = mod_consts[2438];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2439], tmp_assign_source_1253);
    }
    {
        PyObject *tmp_assign_source_1254;
        tmp_assign_source_1254 = mod_consts[2440];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2441], tmp_assign_source_1254);
    }
    {
        PyObject *tmp_assign_source_1255;
        tmp_assign_source_1255 = mod_consts[2442];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2443], tmp_assign_source_1255);
    }
    {
        PyObject *tmp_assign_source_1256;
        tmp_assign_source_1256 = mod_consts[2444];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2445], tmp_assign_source_1256);
    }
    {
        PyObject *tmp_assign_source_1257;
        tmp_assign_source_1257 = mod_consts[2446];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2447], tmp_assign_source_1257);
    }
    {
        PyObject *tmp_assign_source_1258;
        tmp_assign_source_1258 = mod_consts[2448];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2449], tmp_assign_source_1258);
    }
    {
        PyObject *tmp_assign_source_1259;
        tmp_assign_source_1259 = mod_consts[2450];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2451], tmp_assign_source_1259);
    }
    {
        PyObject *tmp_assign_source_1260;
        tmp_assign_source_1260 = mod_consts[2452];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2453], tmp_assign_source_1260);
    }
    {
        PyObject *tmp_assign_source_1261;
        tmp_assign_source_1261 = mod_consts[2454];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2455], tmp_assign_source_1261);
    }
    {
        PyObject *tmp_assign_source_1262;
        tmp_assign_source_1262 = mod_consts[2456];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2457], tmp_assign_source_1262);
    }
    {
        PyObject *tmp_assign_source_1263;
        tmp_assign_source_1263 = mod_consts[2458];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2459], tmp_assign_source_1263);
    }
    {
        PyObject *tmp_assign_source_1264;
        tmp_assign_source_1264 = mod_consts[2460];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2461], tmp_assign_source_1264);
    }
    {
        PyObject *tmp_assign_source_1265;
        tmp_assign_source_1265 = mod_consts[2462];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2463], tmp_assign_source_1265);
    }
    {
        PyObject *tmp_assign_source_1266;
        tmp_assign_source_1266 = mod_consts[2464];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2465], tmp_assign_source_1266);
    }
    {
        PyObject *tmp_assign_source_1267;
        tmp_assign_source_1267 = mod_consts[2466];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2467], tmp_assign_source_1267);
    }
    {
        PyObject *tmp_assign_source_1268;
        tmp_assign_source_1268 = mod_consts[2468];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2469], tmp_assign_source_1268);
    }
    {
        PyObject *tmp_assign_source_1269;
        tmp_assign_source_1269 = mod_consts[2470];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2471], tmp_assign_source_1269);
    }
    {
        PyObject *tmp_assign_source_1270;
        tmp_assign_source_1270 = mod_consts[2472];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2473], tmp_assign_source_1270);
    }
    {
        PyObject *tmp_assign_source_1271;
        tmp_assign_source_1271 = mod_consts[2474];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2475], tmp_assign_source_1271);
    }
    {
        PyObject *tmp_assign_source_1272;
        tmp_assign_source_1272 = mod_consts[2476];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2477], tmp_assign_source_1272);
    }
    {
        PyObject *tmp_assign_source_1273;
        tmp_assign_source_1273 = mod_consts[2478];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2479], tmp_assign_source_1273);
    }
    {
        PyObject *tmp_assign_source_1274;
        tmp_assign_source_1274 = mod_consts[2480];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2481], tmp_assign_source_1274);
    }
    {
        PyObject *tmp_assign_source_1275;
        tmp_assign_source_1275 = mod_consts[2482];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2483], tmp_assign_source_1275);
    }
    {
        PyObject *tmp_assign_source_1276;
        tmp_assign_source_1276 = mod_consts[2484];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2485], tmp_assign_source_1276);
    }
    {
        PyObject *tmp_assign_source_1277;
        tmp_assign_source_1277 = mod_consts[2486];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2487], tmp_assign_source_1277);
    }
    {
        PyObject *tmp_assign_source_1278;
        tmp_assign_source_1278 = mod_consts[2488];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2489], tmp_assign_source_1278);
    }
    {
        PyObject *tmp_assign_source_1279;
        tmp_assign_source_1279 = mod_consts[2490];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2491], tmp_assign_source_1279);
    }
    {
        PyObject *tmp_assign_source_1280;
        tmp_assign_source_1280 = mod_consts[2492];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2493], tmp_assign_source_1280);
    }
    {
        PyObject *tmp_assign_source_1281;
        tmp_assign_source_1281 = mod_consts[2494];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2495], tmp_assign_source_1281);
    }
    {
        PyObject *tmp_assign_source_1282;
        tmp_assign_source_1282 = mod_consts[2496];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2497], tmp_assign_source_1282);
    }
    {
        PyObject *tmp_assign_source_1283;
        tmp_assign_source_1283 = mod_consts[2498];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2499], tmp_assign_source_1283);
    }
    {
        PyObject *tmp_assign_source_1284;
        tmp_assign_source_1284 = mod_consts[2500];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2501], tmp_assign_source_1284);
    }
    {
        PyObject *tmp_assign_source_1285;
        tmp_assign_source_1285 = mod_consts[2502];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2503], tmp_assign_source_1285);
    }
    {
        PyObject *tmp_assign_source_1286;
        tmp_assign_source_1286 = mod_consts[2504];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2505], tmp_assign_source_1286);
    }
    {
        PyObject *tmp_assign_source_1287;
        tmp_assign_source_1287 = mod_consts[2506];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2507], tmp_assign_source_1287);
    }
    {
        PyObject *tmp_assign_source_1288;
        tmp_assign_source_1288 = mod_consts[2508];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2509], tmp_assign_source_1288);
    }
    {
        PyObject *tmp_assign_source_1289;
        tmp_assign_source_1289 = mod_consts[2510];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2511], tmp_assign_source_1289);
    }
    {
        PyObject *tmp_assign_source_1290;
        tmp_assign_source_1290 = mod_consts[2512];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2513], tmp_assign_source_1290);
    }
    {
        PyObject *tmp_assign_source_1291;
        tmp_assign_source_1291 = mod_consts[2514];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2515], tmp_assign_source_1291);
    }
    {
        PyObject *tmp_assign_source_1292;
        tmp_assign_source_1292 = mod_consts[2516];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2517], tmp_assign_source_1292);
    }
    {
        PyObject *tmp_assign_source_1293;
        tmp_assign_source_1293 = mod_consts[2518];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2519], tmp_assign_source_1293);
    }
    {
        PyObject *tmp_assign_source_1294;
        tmp_assign_source_1294 = mod_consts[2520];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2521], tmp_assign_source_1294);
    }
    {
        PyObject *tmp_assign_source_1295;
        tmp_assign_source_1295 = mod_consts[2522];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2523], tmp_assign_source_1295);
    }
    {
        PyObject *tmp_assign_source_1296;
        tmp_assign_source_1296 = mod_consts[2524];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2525], tmp_assign_source_1296);
    }
    {
        PyObject *tmp_assign_source_1297;
        tmp_assign_source_1297 = mod_consts[2526];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2527], tmp_assign_source_1297);
    }
    {
        PyObject *tmp_assign_source_1298;
        tmp_assign_source_1298 = mod_consts[2528];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2529], tmp_assign_source_1298);
    }
    {
        PyObject *tmp_assign_source_1299;
        tmp_assign_source_1299 = mod_consts[2530];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2531], tmp_assign_source_1299);
    }
    {
        PyObject *tmp_assign_source_1300;
        tmp_assign_source_1300 = mod_consts[2532];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2533], tmp_assign_source_1300);
    }
    {
        PyObject *tmp_assign_source_1301;
        tmp_assign_source_1301 = mod_consts[2534];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2535], tmp_assign_source_1301);
    }
    {
        PyObject *tmp_assign_source_1302;
        tmp_assign_source_1302 = mod_consts[2536];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2537], tmp_assign_source_1302);
    }
    {
        PyObject *tmp_assign_source_1303;
        tmp_assign_source_1303 = mod_consts[2538];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2539], tmp_assign_source_1303);
    }
    {
        PyObject *tmp_assign_source_1304;
        tmp_assign_source_1304 = mod_consts[2540];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2541], tmp_assign_source_1304);
    }
    {
        PyObject *tmp_assign_source_1305;
        tmp_assign_source_1305 = mod_consts[2542];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2543], tmp_assign_source_1305);
    }
    {
        PyObject *tmp_assign_source_1306;
        tmp_assign_source_1306 = mod_consts[2544];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2545], tmp_assign_source_1306);
    }
    {
        PyObject *tmp_assign_source_1307;
        tmp_assign_source_1307 = mod_consts[2546];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2547], tmp_assign_source_1307);
    }
    {
        PyObject *tmp_assign_source_1308;
        tmp_assign_source_1308 = mod_consts[2548];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2549], tmp_assign_source_1308);
    }
    {
        PyObject *tmp_assign_source_1309;
        tmp_assign_source_1309 = mod_consts[2550];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2551], tmp_assign_source_1309);
    }
    {
        PyObject *tmp_assign_source_1310;
        tmp_assign_source_1310 = mod_consts[2552];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2553], tmp_assign_source_1310);
    }
    {
        PyObject *tmp_assign_source_1311;
        tmp_assign_source_1311 = mod_consts[2554];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2555], tmp_assign_source_1311);
    }
    {
        PyObject *tmp_assign_source_1312;
        tmp_assign_source_1312 = mod_consts[2556];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2557], tmp_assign_source_1312);
    }
    {
        PyObject *tmp_assign_source_1313;
        tmp_assign_source_1313 = mod_consts[2558];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2559], tmp_assign_source_1313);
    }
    {
        PyObject *tmp_assign_source_1314;
        tmp_assign_source_1314 = mod_consts[2560];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2561], tmp_assign_source_1314);
    }
    {
        PyObject *tmp_assign_source_1315;
        tmp_assign_source_1315 = mod_consts[2562];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2563], tmp_assign_source_1315);
    }
    {
        PyObject *tmp_assign_source_1316;
        tmp_assign_source_1316 = mod_consts[2564];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2565], tmp_assign_source_1316);
    }
    {
        PyObject *tmp_assign_source_1317;
        tmp_assign_source_1317 = mod_consts[2566];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2567], tmp_assign_source_1317);
    }
    {
        PyObject *tmp_assign_source_1318;
        tmp_assign_source_1318 = mod_consts[2568];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2569], tmp_assign_source_1318);
    }
    {
        PyObject *tmp_assign_source_1319;
        tmp_assign_source_1319 = mod_consts[2570];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2571], tmp_assign_source_1319);
    }
    {
        PyObject *tmp_assign_source_1320;
        tmp_assign_source_1320 = mod_consts[2572];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2573], tmp_assign_source_1320);
    }
    {
        PyObject *tmp_assign_source_1321;
        tmp_assign_source_1321 = mod_consts[2574];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2575], tmp_assign_source_1321);
    }
    {
        PyObject *tmp_assign_source_1322;
        tmp_assign_source_1322 = mod_consts[2576];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2577], tmp_assign_source_1322);
    }
    {
        PyObject *tmp_assign_source_1323;
        tmp_assign_source_1323 = mod_consts[2578];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2579], tmp_assign_source_1323);
    }
    {
        PyObject *tmp_assign_source_1324;
        tmp_assign_source_1324 = mod_consts[2580];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2581], tmp_assign_source_1324);
    }
    {
        PyObject *tmp_assign_source_1325;
        tmp_assign_source_1325 = mod_consts[2582];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2583], tmp_assign_source_1325);
    }
    {
        PyObject *tmp_assign_source_1326;
        tmp_assign_source_1326 = mod_consts[2584];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2585], tmp_assign_source_1326);
    }
    {
        PyObject *tmp_assign_source_1327;
        tmp_assign_source_1327 = mod_consts[2586];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2587], tmp_assign_source_1327);
    }
    {
        PyObject *tmp_assign_source_1328;
        tmp_assign_source_1328 = mod_consts[2588];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2589], tmp_assign_source_1328);
    }
    {
        PyObject *tmp_assign_source_1329;
        tmp_assign_source_1329 = mod_consts[2590];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2591], tmp_assign_source_1329);
    }
    {
        PyObject *tmp_assign_source_1330;
        tmp_assign_source_1330 = mod_consts[2592];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2593], tmp_assign_source_1330);
    }
    {
        PyObject *tmp_assign_source_1331;
        tmp_assign_source_1331 = mod_consts[2594];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2595], tmp_assign_source_1331);
    }
    {
        PyObject *tmp_assign_source_1332;
        tmp_assign_source_1332 = mod_consts[2596];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2597], tmp_assign_source_1332);
    }
    {
        PyObject *tmp_assign_source_1333;
        tmp_assign_source_1333 = mod_consts[2598];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2599], tmp_assign_source_1333);
    }
    {
        PyObject *tmp_assign_source_1334;
        tmp_assign_source_1334 = mod_consts[2600];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2601], tmp_assign_source_1334);
    }
    {
        PyObject *tmp_assign_source_1335;
        tmp_assign_source_1335 = mod_consts[2602];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2603], tmp_assign_source_1335);
    }
    {
        PyObject *tmp_assign_source_1336;
        tmp_assign_source_1336 = mod_consts[2604];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2605], tmp_assign_source_1336);
    }
    {
        PyObject *tmp_assign_source_1337;
        tmp_assign_source_1337 = mod_consts[2606];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2607], tmp_assign_source_1337);
    }
    {
        PyObject *tmp_assign_source_1338;
        tmp_assign_source_1338 = mod_consts[2608];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2609], tmp_assign_source_1338);
    }
    {
        PyObject *tmp_assign_source_1339;
        tmp_assign_source_1339 = mod_consts[2610];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2611], tmp_assign_source_1339);
    }
    {
        PyObject *tmp_assign_source_1340;
        tmp_assign_source_1340 = mod_consts[2612];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2613], tmp_assign_source_1340);
    }
    {
        PyObject *tmp_assign_source_1341;
        tmp_assign_source_1341 = mod_consts[2614];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2615], tmp_assign_source_1341);
    }
    {
        PyObject *tmp_assign_source_1342;
        tmp_assign_source_1342 = mod_consts[2616];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2617], tmp_assign_source_1342);
    }
    {
        PyObject *tmp_assign_source_1343;
        tmp_assign_source_1343 = mod_consts[2618];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2619], tmp_assign_source_1343);
    }
    {
        PyObject *tmp_assign_source_1344;
        tmp_assign_source_1344 = mod_consts[2620];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2621], tmp_assign_source_1344);
    }
    {
        PyObject *tmp_assign_source_1345;
        tmp_assign_source_1345 = mod_consts[2622];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2623], tmp_assign_source_1345);
    }
    {
        PyObject *tmp_assign_source_1346;
        tmp_assign_source_1346 = mod_consts[2624];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2625], tmp_assign_source_1346);
    }
    {
        PyObject *tmp_assign_source_1347;
        tmp_assign_source_1347 = mod_consts[2626];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2627], tmp_assign_source_1347);
    }
    {
        PyObject *tmp_assign_source_1348;
        tmp_assign_source_1348 = mod_consts[2628];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2629], tmp_assign_source_1348);
    }
    {
        PyObject *tmp_assign_source_1349;
        tmp_assign_source_1349 = mod_consts[2630];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2631], tmp_assign_source_1349);
    }
    {
        PyObject *tmp_assign_source_1350;
        tmp_assign_source_1350 = mod_consts[2632];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2633], tmp_assign_source_1350);
    }
    {
        PyObject *tmp_assign_source_1351;
        tmp_assign_source_1351 = mod_consts[2634];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2635], tmp_assign_source_1351);
    }
    {
        PyObject *tmp_assign_source_1352;
        tmp_assign_source_1352 = mod_consts[2636];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2637], tmp_assign_source_1352);
    }
    {
        PyObject *tmp_assign_source_1353;
        tmp_assign_source_1353 = mod_consts[2638];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2639], tmp_assign_source_1353);
    }
    {
        PyObject *tmp_assign_source_1354;
        tmp_assign_source_1354 = mod_consts[2640];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2641], tmp_assign_source_1354);
    }
    {
        PyObject *tmp_assign_source_1355;
        tmp_assign_source_1355 = mod_consts[2642];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2643], tmp_assign_source_1355);
    }
    {
        PyObject *tmp_assign_source_1356;
        tmp_assign_source_1356 = mod_consts[2644];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2645], tmp_assign_source_1356);
    }
    {
        PyObject *tmp_assign_source_1357;
        tmp_assign_source_1357 = mod_consts[2646];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2647], tmp_assign_source_1357);
    }
    {
        PyObject *tmp_assign_source_1358;
        tmp_assign_source_1358 = mod_consts[2648];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2649], tmp_assign_source_1358);
    }
    {
        PyObject *tmp_assign_source_1359;
        tmp_assign_source_1359 = mod_consts[2650];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2651], tmp_assign_source_1359);
    }
    {
        PyObject *tmp_assign_source_1360;
        tmp_assign_source_1360 = mod_consts[2652];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2653], tmp_assign_source_1360);
    }
    {
        PyObject *tmp_assign_source_1361;
        tmp_assign_source_1361 = mod_consts[2654];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2655], tmp_assign_source_1361);
    }
    {
        PyObject *tmp_assign_source_1362;
        tmp_assign_source_1362 = mod_consts[2656];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2657], tmp_assign_source_1362);
    }
    {
        PyObject *tmp_assign_source_1363;
        tmp_assign_source_1363 = mod_consts[2658];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2659], tmp_assign_source_1363);
    }
    {
        PyObject *tmp_assign_source_1364;
        tmp_assign_source_1364 = mod_consts[2660];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2661], tmp_assign_source_1364);
    }
    {
        PyObject *tmp_assign_source_1365;
        tmp_assign_source_1365 = mod_consts[2662];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2663], tmp_assign_source_1365);
    }
    {
        PyObject *tmp_assign_source_1366;
        tmp_assign_source_1366 = mod_consts[2664];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2665], tmp_assign_source_1366);
    }
    {
        PyObject *tmp_assign_source_1367;
        tmp_assign_source_1367 = mod_consts[2666];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2667], tmp_assign_source_1367);
    }
    {
        PyObject *tmp_assign_source_1368;
        tmp_assign_source_1368 = mod_consts[2668];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2669], tmp_assign_source_1368);
    }
    {
        PyObject *tmp_assign_source_1369;
        tmp_assign_source_1369 = mod_consts[2670];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2671], tmp_assign_source_1369);
    }
    {
        PyObject *tmp_assign_source_1370;
        tmp_assign_source_1370 = mod_consts[2672];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2673], tmp_assign_source_1370);
    }
    {
        PyObject *tmp_assign_source_1371;
        tmp_assign_source_1371 = mod_consts[2674];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2675], tmp_assign_source_1371);
    }
    {
        PyObject *tmp_assign_source_1372;
        tmp_assign_source_1372 = mod_consts[2676];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2677], tmp_assign_source_1372);
    }
    {
        PyObject *tmp_assign_source_1373;
        tmp_assign_source_1373 = mod_consts[2678];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2679], tmp_assign_source_1373);
    }
    {
        PyObject *tmp_assign_source_1374;
        tmp_assign_source_1374 = mod_consts[2680];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2681], tmp_assign_source_1374);
    }
    {
        PyObject *tmp_assign_source_1375;
        tmp_assign_source_1375 = mod_consts[2682];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2683], tmp_assign_source_1375);
    }
    {
        PyObject *tmp_assign_source_1376;
        tmp_assign_source_1376 = mod_consts[2684];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2685], tmp_assign_source_1376);
    }
    {
        PyObject *tmp_assign_source_1377;
        tmp_assign_source_1377 = mod_consts[2686];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2687], tmp_assign_source_1377);
    }
    {
        PyObject *tmp_assign_source_1378;
        tmp_assign_source_1378 = mod_consts[2688];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2689], tmp_assign_source_1378);
    }
    {
        PyObject *tmp_assign_source_1379;
        tmp_assign_source_1379 = mod_consts[2690];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2691], tmp_assign_source_1379);
    }
    {
        PyObject *tmp_assign_source_1380;
        tmp_assign_source_1380 = mod_consts[2692];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2693], tmp_assign_source_1380);
    }
    {
        PyObject *tmp_assign_source_1381;
        tmp_assign_source_1381 = mod_consts[2694];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2695], tmp_assign_source_1381);
    }
    {
        PyObject *tmp_assign_source_1382;
        tmp_assign_source_1382 = mod_consts[2696];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2697], tmp_assign_source_1382);
    }
    {
        PyObject *tmp_assign_source_1383;
        tmp_assign_source_1383 = mod_consts[2698];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2699], tmp_assign_source_1383);
    }
    {
        PyObject *tmp_assign_source_1384;
        tmp_assign_source_1384 = mod_consts[2700];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2701], tmp_assign_source_1384);
    }
    {
        PyObject *tmp_assign_source_1385;
        tmp_assign_source_1385 = mod_consts[2702];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2703], tmp_assign_source_1385);
    }
    {
        PyObject *tmp_assign_source_1386;
        tmp_assign_source_1386 = mod_consts[2704];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2705], tmp_assign_source_1386);
    }
    {
        PyObject *tmp_assign_source_1387;
        tmp_assign_source_1387 = mod_consts[2706];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2707], tmp_assign_source_1387);
    }
    {
        PyObject *tmp_assign_source_1388;
        tmp_assign_source_1388 = mod_consts[2708];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2709], tmp_assign_source_1388);
    }
    {
        PyObject *tmp_assign_source_1389;
        tmp_assign_source_1389 = mod_consts[2710];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2711], tmp_assign_source_1389);
    }
    {
        PyObject *tmp_assign_source_1390;
        tmp_assign_source_1390 = mod_consts[2712];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2713], tmp_assign_source_1390);
    }
    {
        PyObject *tmp_assign_source_1391;
        tmp_assign_source_1391 = mod_consts[2714];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2715], tmp_assign_source_1391);
    }
    {
        PyObject *tmp_assign_source_1392;
        tmp_assign_source_1392 = mod_consts[2716];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2717], tmp_assign_source_1392);
    }
    {
        PyObject *tmp_assign_source_1393;
        tmp_assign_source_1393 = mod_consts[2718];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2719], tmp_assign_source_1393);
    }
    {
        PyObject *tmp_assign_source_1394;
        tmp_assign_source_1394 = mod_consts[2720];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2721], tmp_assign_source_1394);
    }
    {
        PyObject *tmp_assign_source_1395;
        tmp_assign_source_1395 = mod_consts[2722];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2723], tmp_assign_source_1395);
    }
    {
        PyObject *tmp_assign_source_1396;
        tmp_assign_source_1396 = mod_consts[2724];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2725], tmp_assign_source_1396);
    }
    {
        PyObject *tmp_assign_source_1397;
        tmp_assign_source_1397 = mod_consts[2726];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2727], tmp_assign_source_1397);
    }
    {
        PyObject *tmp_assign_source_1398;
        tmp_assign_source_1398 = mod_consts[2728];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2729], tmp_assign_source_1398);
    }
    {
        PyObject *tmp_assign_source_1399;
        tmp_assign_source_1399 = mod_consts[2730];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2731], tmp_assign_source_1399);
    }
    {
        PyObject *tmp_assign_source_1400;
        tmp_assign_source_1400 = mod_consts[2732];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2733], tmp_assign_source_1400);
    }
    {
        PyObject *tmp_assign_source_1401;
        tmp_assign_source_1401 = mod_consts[2734];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2735], tmp_assign_source_1401);
    }
    {
        PyObject *tmp_assign_source_1402;
        tmp_assign_source_1402 = mod_consts[2736];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2737], tmp_assign_source_1402);
    }
    {
        PyObject *tmp_assign_source_1403;
        tmp_assign_source_1403 = mod_consts[2738];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2739], tmp_assign_source_1403);
    }
    {
        PyObject *tmp_assign_source_1404;
        tmp_assign_source_1404 = mod_consts[2740];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2741], tmp_assign_source_1404);
    }
    {
        PyObject *tmp_assign_source_1405;
        tmp_assign_source_1405 = mod_consts[2742];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2743], tmp_assign_source_1405);
    }
    {
        PyObject *tmp_assign_source_1406;
        tmp_assign_source_1406 = mod_consts[2744];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2745], tmp_assign_source_1406);
    }
    {
        PyObject *tmp_assign_source_1407;
        tmp_assign_source_1407 = mod_consts[2746];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2747], tmp_assign_source_1407);
    }
    {
        PyObject *tmp_assign_source_1408;
        tmp_assign_source_1408 = mod_consts[2748];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2749], tmp_assign_source_1408);
    }
    {
        PyObject *tmp_assign_source_1409;
        tmp_assign_source_1409 = mod_consts[2750];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2751], tmp_assign_source_1409);
    }
    {
        PyObject *tmp_assign_source_1410;
        tmp_assign_source_1410 = mod_consts[2752];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2753], tmp_assign_source_1410);
    }
    {
        PyObject *tmp_assign_source_1411;
        tmp_assign_source_1411 = mod_consts[2754];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2755], tmp_assign_source_1411);
    }
    {
        PyObject *tmp_assign_source_1412;
        tmp_assign_source_1412 = mod_consts[2756];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2757], tmp_assign_source_1412);
    }
    {
        PyObject *tmp_assign_source_1413;
        tmp_assign_source_1413 = mod_consts[2758];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2759], tmp_assign_source_1413);
    }
    {
        PyObject *tmp_assign_source_1414;
        tmp_assign_source_1414 = mod_consts[2760];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2761], tmp_assign_source_1414);
    }
    {
        PyObject *tmp_assign_source_1415;
        tmp_assign_source_1415 = mod_consts[2762];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2763], tmp_assign_source_1415);
    }
    {
        PyObject *tmp_assign_source_1416;
        tmp_assign_source_1416 = mod_consts[2764];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2765], tmp_assign_source_1416);
    }
    {
        PyObject *tmp_assign_source_1417;
        tmp_assign_source_1417 = mod_consts[2766];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2767], tmp_assign_source_1417);
    }
    {
        PyObject *tmp_assign_source_1418;
        tmp_assign_source_1418 = mod_consts[2768];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2769], tmp_assign_source_1418);
    }
    {
        PyObject *tmp_assign_source_1419;
        tmp_assign_source_1419 = mod_consts[2770];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2771], tmp_assign_source_1419);
    }
    {
        PyObject *tmp_assign_source_1420;
        tmp_assign_source_1420 = mod_consts[2772];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2773], tmp_assign_source_1420);
    }
    {
        PyObject *tmp_assign_source_1421;
        tmp_assign_source_1421 = mod_consts[2774];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2775], tmp_assign_source_1421);
    }
    {
        PyObject *tmp_assign_source_1422;
        tmp_assign_source_1422 = mod_consts[2776];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2777], tmp_assign_source_1422);
    }
    {
        PyObject *tmp_assign_source_1423;
        tmp_assign_source_1423 = mod_consts[2778];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2779], tmp_assign_source_1423);
    }
    {
        PyObject *tmp_assign_source_1424;
        tmp_assign_source_1424 = mod_consts[2780];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2781], tmp_assign_source_1424);
    }
    {
        PyObject *tmp_assign_source_1425;
        tmp_assign_source_1425 = mod_consts[2782];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2783], tmp_assign_source_1425);
    }
    {
        PyObject *tmp_assign_source_1426;
        tmp_assign_source_1426 = mod_consts[2784];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2785], tmp_assign_source_1426);
    }
    {
        PyObject *tmp_assign_source_1427;
        tmp_assign_source_1427 = mod_consts[2786];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2787], tmp_assign_source_1427);
    }
    {
        PyObject *tmp_assign_source_1428;
        tmp_assign_source_1428 = mod_consts[2788];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2789], tmp_assign_source_1428);
    }
    {
        PyObject *tmp_assign_source_1429;
        tmp_assign_source_1429 = mod_consts[2790];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2791], tmp_assign_source_1429);
    }
    {
        PyObject *tmp_assign_source_1430;
        tmp_assign_source_1430 = mod_consts[2792];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2793], tmp_assign_source_1430);
    }
    {
        PyObject *tmp_assign_source_1431;
        tmp_assign_source_1431 = mod_consts[2794];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2795], tmp_assign_source_1431);
    }
    {
        PyObject *tmp_assign_source_1432;
        tmp_assign_source_1432 = mod_consts[2796];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2797], tmp_assign_source_1432);
    }
    {
        PyObject *tmp_assign_source_1433;
        tmp_assign_source_1433 = mod_consts[2798];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2799], tmp_assign_source_1433);
    }
    {
        PyObject *tmp_assign_source_1434;
        tmp_assign_source_1434 = mod_consts[2800];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2801], tmp_assign_source_1434);
    }
    {
        PyObject *tmp_assign_source_1435;
        tmp_assign_source_1435 = mod_consts[2802];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2803], tmp_assign_source_1435);
    }
    {
        PyObject *tmp_assign_source_1436;
        tmp_assign_source_1436 = mod_consts[2804];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2805], tmp_assign_source_1436);
    }
    {
        PyObject *tmp_assign_source_1437;
        tmp_assign_source_1437 = mod_consts[2806];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2807], tmp_assign_source_1437);
    }
    {
        PyObject *tmp_assign_source_1438;
        tmp_assign_source_1438 = mod_consts[2808];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2809], tmp_assign_source_1438);
    }
    {
        PyObject *tmp_assign_source_1439;
        tmp_assign_source_1439 = mod_consts[2810];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2811], tmp_assign_source_1439);
    }
    {
        PyObject *tmp_assign_source_1440;
        tmp_assign_source_1440 = mod_consts[2812];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2813], tmp_assign_source_1440);
    }
    {
        PyObject *tmp_assign_source_1441;
        tmp_assign_source_1441 = mod_consts[2814];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2815], tmp_assign_source_1441);
    }
    {
        PyObject *tmp_assign_source_1442;
        tmp_assign_source_1442 = mod_consts[2816];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2817], tmp_assign_source_1442);
    }
    {
        PyObject *tmp_assign_source_1443;
        tmp_assign_source_1443 = mod_consts[2818];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2819], tmp_assign_source_1443);
    }
    {
        PyObject *tmp_assign_source_1444;
        tmp_assign_source_1444 = mod_consts[2820];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2821], tmp_assign_source_1444);
    }
    {
        PyObject *tmp_assign_source_1445;
        tmp_assign_source_1445 = mod_consts[2822];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2823], tmp_assign_source_1445);
    }
    {
        PyObject *tmp_assign_source_1446;
        tmp_assign_source_1446 = mod_consts[2824];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2825], tmp_assign_source_1446);
    }
    {
        PyObject *tmp_assign_source_1447;
        tmp_assign_source_1447 = mod_consts[2826];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2827], tmp_assign_source_1447);
    }
    {
        PyObject *tmp_assign_source_1448;
        tmp_assign_source_1448 = mod_consts[2828];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2829], tmp_assign_source_1448);
    }
    {
        PyObject *tmp_assign_source_1449;
        tmp_assign_source_1449 = mod_consts[2830];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2831], tmp_assign_source_1449);
    }
    {
        PyObject *tmp_assign_source_1450;
        tmp_assign_source_1450 = mod_consts[2832];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2833], tmp_assign_source_1450);
    }
    {
        PyObject *tmp_assign_source_1451;
        tmp_assign_source_1451 = mod_consts[2834];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2835], tmp_assign_source_1451);
    }
    {
        PyObject *tmp_assign_source_1452;
        tmp_assign_source_1452 = mod_consts[2836];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2837], tmp_assign_source_1452);
    }
    {
        PyObject *tmp_assign_source_1453;
        tmp_assign_source_1453 = mod_consts[2838];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2839], tmp_assign_source_1453);
    }
    {
        PyObject *tmp_assign_source_1454;
        tmp_assign_source_1454 = mod_consts[2840];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2841], tmp_assign_source_1454);
    }
    {
        PyObject *tmp_assign_source_1455;
        tmp_assign_source_1455 = mod_consts[2842];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2843], tmp_assign_source_1455);
    }
    {
        PyObject *tmp_assign_source_1456;
        tmp_assign_source_1456 = mod_consts[2844];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2845], tmp_assign_source_1456);
    }
    {
        PyObject *tmp_assign_source_1457;
        tmp_assign_source_1457 = mod_consts[2846];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2847], tmp_assign_source_1457);
    }
    {
        PyObject *tmp_assign_source_1458;
        tmp_assign_source_1458 = mod_consts[2848];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2849], tmp_assign_source_1458);
    }
    {
        PyObject *tmp_assign_source_1459;
        tmp_assign_source_1459 = mod_consts[2850];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2851], tmp_assign_source_1459);
    }
    {
        PyObject *tmp_assign_source_1460;
        tmp_assign_source_1460 = mod_consts[2852];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2853], tmp_assign_source_1460);
    }
    {
        PyObject *tmp_assign_source_1461;
        tmp_assign_source_1461 = mod_consts[2854];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2855], tmp_assign_source_1461);
    }
    {
        PyObject *tmp_assign_source_1462;
        tmp_assign_source_1462 = mod_consts[2856];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2857], tmp_assign_source_1462);
    }
    {
        PyObject *tmp_assign_source_1463;
        tmp_assign_source_1463 = mod_consts[2858];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2859], tmp_assign_source_1463);
    }
    {
        PyObject *tmp_assign_source_1464;
        tmp_assign_source_1464 = mod_consts[2860];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2861], tmp_assign_source_1464);
    }
    {
        PyObject *tmp_assign_source_1465;
        tmp_assign_source_1465 = mod_consts[2862];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2863], tmp_assign_source_1465);
    }
    {
        PyObject *tmp_assign_source_1466;
        tmp_assign_source_1466 = mod_consts[2864];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2865], tmp_assign_source_1466);
    }
    {
        PyObject *tmp_assign_source_1467;
        tmp_assign_source_1467 = mod_consts[2866];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2867], tmp_assign_source_1467);
    }
    {
        PyObject *tmp_assign_source_1468;
        tmp_assign_source_1468 = mod_consts[2868];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2869], tmp_assign_source_1468);
    }
    {
        PyObject *tmp_assign_source_1469;
        tmp_assign_source_1469 = mod_consts[2870];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2871], tmp_assign_source_1469);
    }
    {
        PyObject *tmp_assign_source_1470;
        tmp_assign_source_1470 = mod_consts[2872];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2873], tmp_assign_source_1470);
    }
    {
        PyObject *tmp_assign_source_1471;
        tmp_assign_source_1471 = mod_consts[2874];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2875], tmp_assign_source_1471);
    }
    {
        PyObject *tmp_assign_source_1472;
        tmp_assign_source_1472 = mod_consts[2876];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2877], tmp_assign_source_1472);
    }
    {
        PyObject *tmp_assign_source_1473;
        tmp_assign_source_1473 = mod_consts[2878];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2879], tmp_assign_source_1473);
    }
    {
        PyObject *tmp_assign_source_1474;
        tmp_assign_source_1474 = mod_consts[2880];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2881], tmp_assign_source_1474);
    }
    {
        PyObject *tmp_assign_source_1475;
        tmp_assign_source_1475 = mod_consts[2882];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2883], tmp_assign_source_1475);
    }
    {
        PyObject *tmp_assign_source_1476;
        tmp_assign_source_1476 = mod_consts[2884];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2885], tmp_assign_source_1476);
    }
    {
        PyObject *tmp_assign_source_1477;
        tmp_assign_source_1477 = mod_consts[2886];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2887], tmp_assign_source_1477);
    }
    {
        PyObject *tmp_assign_source_1478;
        tmp_assign_source_1478 = mod_consts[2888];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2889], tmp_assign_source_1478);
    }
    {
        PyObject *tmp_assign_source_1479;
        tmp_assign_source_1479 = mod_consts[2890];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2891], tmp_assign_source_1479);
    }
    {
        PyObject *tmp_assign_source_1480;
        tmp_assign_source_1480 = mod_consts[2892];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2893], tmp_assign_source_1480);
    }
    {
        PyObject *tmp_assign_source_1481;
        tmp_assign_source_1481 = mod_consts[2894];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2895], tmp_assign_source_1481);
    }
    {
        PyObject *tmp_assign_source_1482;
        tmp_assign_source_1482 = mod_consts[2896];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2897], tmp_assign_source_1482);
    }
    {
        PyObject *tmp_assign_source_1483;
        tmp_assign_source_1483 = mod_consts[2898];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2899], tmp_assign_source_1483);
    }
    {
        PyObject *tmp_assign_source_1484;
        tmp_assign_source_1484 = mod_consts[2900];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2901], tmp_assign_source_1484);
    }
    {
        PyObject *tmp_assign_source_1485;
        tmp_assign_source_1485 = mod_consts[2902];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2903], tmp_assign_source_1485);
    }
    {
        PyObject *tmp_assign_source_1486;
        tmp_assign_source_1486 = mod_consts[2904];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2905], tmp_assign_source_1486);
    }
    {
        PyObject *tmp_assign_source_1487;
        tmp_assign_source_1487 = mod_consts[2906];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2907], tmp_assign_source_1487);
    }
    {
        PyObject *tmp_assign_source_1488;
        tmp_assign_source_1488 = mod_consts[2908];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2909], tmp_assign_source_1488);
    }
    {
        PyObject *tmp_assign_source_1489;
        tmp_assign_source_1489 = mod_consts[2910];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2911], tmp_assign_source_1489);
    }
    {
        PyObject *tmp_assign_source_1490;
        tmp_assign_source_1490 = mod_consts[2912];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2913], tmp_assign_source_1490);
    }
    {
        PyObject *tmp_assign_source_1491;
        tmp_assign_source_1491 = mod_consts[2914];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2915], tmp_assign_source_1491);
    }
    {
        PyObject *tmp_assign_source_1492;
        tmp_assign_source_1492 = mod_consts[2916];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2917], tmp_assign_source_1492);
    }
    {
        PyObject *tmp_assign_source_1493;
        tmp_assign_source_1493 = mod_consts[2918];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2919], tmp_assign_source_1493);
    }
    {
        PyObject *tmp_assign_source_1494;
        tmp_assign_source_1494 = mod_consts[2920];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2921], tmp_assign_source_1494);
    }
    {
        PyObject *tmp_assign_source_1495;
        tmp_assign_source_1495 = mod_consts[2922];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2923], tmp_assign_source_1495);
    }
    {
        PyObject *tmp_assign_source_1496;
        tmp_assign_source_1496 = mod_consts[2924];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2925], tmp_assign_source_1496);
    }
    {
        PyObject *tmp_assign_source_1497;
        tmp_assign_source_1497 = mod_consts[2926];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2927], tmp_assign_source_1497);
    }
    {
        PyObject *tmp_assign_source_1498;
        tmp_assign_source_1498 = mod_consts[2928];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2929], tmp_assign_source_1498);
    }
    {
        PyObject *tmp_assign_source_1499;
        tmp_assign_source_1499 = mod_consts[2930];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2931], tmp_assign_source_1499);
    }
    {
        PyObject *tmp_assign_source_1500;
        tmp_assign_source_1500 = mod_consts[2932];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2933], tmp_assign_source_1500);
    }
    {
        PyObject *tmp_assign_source_1501;
        tmp_assign_source_1501 = mod_consts[2934];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2935], tmp_assign_source_1501);
    }
    {
        PyObject *tmp_assign_source_1502;
        tmp_assign_source_1502 = mod_consts[2936];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2937], tmp_assign_source_1502);
    }
    {
        PyObject *tmp_assign_source_1503;
        tmp_assign_source_1503 = mod_consts[2938];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2939], tmp_assign_source_1503);
    }
    {
        PyObject *tmp_assign_source_1504;
        tmp_assign_source_1504 = mod_consts[2940];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2941], tmp_assign_source_1504);
    }
    {
        PyObject *tmp_assign_source_1505;
        tmp_assign_source_1505 = mod_consts[2942];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2943], tmp_assign_source_1505);
    }
    {
        PyObject *tmp_assign_source_1506;
        tmp_assign_source_1506 = mod_consts[2944];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2945], tmp_assign_source_1506);
    }
    {
        PyObject *tmp_assign_source_1507;
        tmp_assign_source_1507 = mod_consts[2946];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2947], tmp_assign_source_1507);
    }
    {
        PyObject *tmp_assign_source_1508;
        tmp_assign_source_1508 = mod_consts[2948];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2949], tmp_assign_source_1508);
    }
    {
        PyObject *tmp_assign_source_1509;
        tmp_assign_source_1509 = mod_consts[2950];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2951], tmp_assign_source_1509);
    }
    {
        PyObject *tmp_assign_source_1510;
        tmp_assign_source_1510 = mod_consts[2952];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2953], tmp_assign_source_1510);
    }
    {
        PyObject *tmp_assign_source_1511;
        tmp_assign_source_1511 = mod_consts[2954];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2955], tmp_assign_source_1511);
    }
    {
        PyObject *tmp_assign_source_1512;
        tmp_assign_source_1512 = mod_consts[2956];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2957], tmp_assign_source_1512);
    }
    {
        PyObject *tmp_assign_source_1513;
        tmp_assign_source_1513 = mod_consts[2958];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2959], tmp_assign_source_1513);
    }
    {
        PyObject *tmp_assign_source_1514;
        tmp_assign_source_1514 = mod_consts[2960];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2961], tmp_assign_source_1514);
    }
    {
        PyObject *tmp_assign_source_1515;
        tmp_assign_source_1515 = mod_consts[2962];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2963], tmp_assign_source_1515);
    }
    {
        PyObject *tmp_assign_source_1516;
        tmp_assign_source_1516 = mod_consts[2964];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2965], tmp_assign_source_1516);
    }
    {
        PyObject *tmp_assign_source_1517;
        tmp_assign_source_1517 = mod_consts[2966];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2967], tmp_assign_source_1517);
    }
    {
        PyObject *tmp_assign_source_1518;
        tmp_assign_source_1518 = mod_consts[2968];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2969], tmp_assign_source_1518);
    }
    {
        PyObject *tmp_assign_source_1519;
        tmp_assign_source_1519 = mod_consts[2970];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2971], tmp_assign_source_1519);
    }
    {
        PyObject *tmp_assign_source_1520;
        tmp_assign_source_1520 = mod_consts[2972];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2973], tmp_assign_source_1520);
    }
    {
        PyObject *tmp_assign_source_1521;
        tmp_assign_source_1521 = mod_consts[2974];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2975], tmp_assign_source_1521);
    }
    {
        PyObject *tmp_assign_source_1522;
        tmp_assign_source_1522 = mod_consts[2976];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2977], tmp_assign_source_1522);
    }
    {
        PyObject *tmp_assign_source_1523;
        tmp_assign_source_1523 = mod_consts[2978];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2979], tmp_assign_source_1523);
    }
    {
        PyObject *tmp_assign_source_1524;
        tmp_assign_source_1524 = mod_consts[2980];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2981], tmp_assign_source_1524);
    }
    {
        PyObject *tmp_assign_source_1525;
        tmp_assign_source_1525 = mod_consts[2982];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2983], tmp_assign_source_1525);
    }
    {
        PyObject *tmp_assign_source_1526;
        tmp_assign_source_1526 = mod_consts[2984];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2985], tmp_assign_source_1526);
    }
    {
        PyObject *tmp_assign_source_1527;
        tmp_assign_source_1527 = mod_consts[2986];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2987], tmp_assign_source_1527);
    }
    {
        PyObject *tmp_assign_source_1528;
        tmp_assign_source_1528 = mod_consts[2988];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2989], tmp_assign_source_1528);
    }
    {
        PyObject *tmp_assign_source_1529;
        tmp_assign_source_1529 = mod_consts[2990];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2991], tmp_assign_source_1529);
    }
    {
        PyObject *tmp_assign_source_1530;
        tmp_assign_source_1530 = mod_consts[2992];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2993], tmp_assign_source_1530);
    }
    {
        PyObject *tmp_assign_source_1531;
        tmp_assign_source_1531 = mod_consts[2994];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2995], tmp_assign_source_1531);
    }
    {
        PyObject *tmp_assign_source_1532;
        tmp_assign_source_1532 = mod_consts[2996];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2997], tmp_assign_source_1532);
    }
    {
        PyObject *tmp_assign_source_1533;
        tmp_assign_source_1533 = mod_consts[2998];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[2999], tmp_assign_source_1533);
    }
    {
        PyObject *tmp_assign_source_1534;
        tmp_assign_source_1534 = mod_consts[3000];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3001], tmp_assign_source_1534);
    }
    {
        PyObject *tmp_assign_source_1535;
        tmp_assign_source_1535 = mod_consts[3002];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3003], tmp_assign_source_1535);
    }
    {
        PyObject *tmp_assign_source_1536;
        tmp_assign_source_1536 = mod_consts[3004];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3005], tmp_assign_source_1536);
    }
    {
        PyObject *tmp_assign_source_1537;
        tmp_assign_source_1537 = mod_consts[3006];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3007], tmp_assign_source_1537);
    }
    {
        PyObject *tmp_assign_source_1538;
        tmp_assign_source_1538 = mod_consts[3008];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3009], tmp_assign_source_1538);
    }
    {
        PyObject *tmp_assign_source_1539;
        tmp_assign_source_1539 = mod_consts[3010];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3011], tmp_assign_source_1539);
    }
    {
        PyObject *tmp_assign_source_1540;
        tmp_assign_source_1540 = mod_consts[3012];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3013], tmp_assign_source_1540);
    }
    {
        PyObject *tmp_assign_source_1541;
        tmp_assign_source_1541 = mod_consts[3014];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3015], tmp_assign_source_1541);
    }
    {
        PyObject *tmp_assign_source_1542;
        tmp_assign_source_1542 = mod_consts[3016];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3017], tmp_assign_source_1542);
    }
    {
        PyObject *tmp_assign_source_1543;
        tmp_assign_source_1543 = mod_consts[3018];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3019], tmp_assign_source_1543);
    }
    {
        PyObject *tmp_assign_source_1544;
        tmp_assign_source_1544 = mod_consts[3020];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3021], tmp_assign_source_1544);
    }
    {
        PyObject *tmp_assign_source_1545;
        tmp_assign_source_1545 = mod_consts[3022];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3023], tmp_assign_source_1545);
    }
    {
        PyObject *tmp_assign_source_1546;
        tmp_assign_source_1546 = mod_consts[3024];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3025], tmp_assign_source_1546);
    }
    {
        PyObject *tmp_assign_source_1547;
        tmp_assign_source_1547 = mod_consts[3026];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3027], tmp_assign_source_1547);
    }
    {
        PyObject *tmp_assign_source_1548;
        tmp_assign_source_1548 = mod_consts[3028];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3029], tmp_assign_source_1548);
    }
    {
        PyObject *tmp_assign_source_1549;
        tmp_assign_source_1549 = mod_consts[3030];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3031], tmp_assign_source_1549);
    }
    {
        PyObject *tmp_assign_source_1550;
        tmp_assign_source_1550 = mod_consts[3032];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3033], tmp_assign_source_1550);
    }
    {
        PyObject *tmp_assign_source_1551;
        tmp_assign_source_1551 = mod_consts[3034];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3035], tmp_assign_source_1551);
    }
    {
        PyObject *tmp_assign_source_1552;
        tmp_assign_source_1552 = mod_consts[3036];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3037], tmp_assign_source_1552);
    }
    {
        PyObject *tmp_assign_source_1553;
        tmp_assign_source_1553 = mod_consts[3038];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3039], tmp_assign_source_1553);
    }
    {
        PyObject *tmp_assign_source_1554;
        tmp_assign_source_1554 = mod_consts[3040];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3041], tmp_assign_source_1554);
    }
    {
        PyObject *tmp_assign_source_1555;
        tmp_assign_source_1555 = mod_consts[3042];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3043], tmp_assign_source_1555);
    }
    {
        PyObject *tmp_assign_source_1556;
        tmp_assign_source_1556 = mod_consts[3044];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3045], tmp_assign_source_1556);
    }
    {
        PyObject *tmp_assign_source_1557;
        tmp_assign_source_1557 = mod_consts[3046];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3047], tmp_assign_source_1557);
    }
    {
        PyObject *tmp_assign_source_1558;
        tmp_assign_source_1558 = mod_consts[3048];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3049], tmp_assign_source_1558);
    }
    {
        PyObject *tmp_assign_source_1559;
        tmp_assign_source_1559 = mod_consts[3050];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3051], tmp_assign_source_1559);
    }
    {
        PyObject *tmp_assign_source_1560;
        tmp_assign_source_1560 = mod_consts[3052];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3053], tmp_assign_source_1560);
    }
    {
        PyObject *tmp_assign_source_1561;
        tmp_assign_source_1561 = mod_consts[3054];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3055], tmp_assign_source_1561);
    }
    {
        PyObject *tmp_assign_source_1562;
        tmp_assign_source_1562 = mod_consts[3056];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3057], tmp_assign_source_1562);
    }
    {
        PyObject *tmp_assign_source_1563;
        tmp_assign_source_1563 = mod_consts[3058];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3059], tmp_assign_source_1563);
    }
    {
        PyObject *tmp_assign_source_1564;
        tmp_assign_source_1564 = mod_consts[3060];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3061], tmp_assign_source_1564);
    }
    {
        PyObject *tmp_assign_source_1565;
        tmp_assign_source_1565 = mod_consts[3062];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3063], tmp_assign_source_1565);
    }
    {
        PyObject *tmp_assign_source_1566;
        tmp_assign_source_1566 = mod_consts[3064];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3065], tmp_assign_source_1566);
    }
    {
        PyObject *tmp_assign_source_1567;
        tmp_assign_source_1567 = mod_consts[3066];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3067], tmp_assign_source_1567);
    }
    {
        PyObject *tmp_assign_source_1568;
        tmp_assign_source_1568 = mod_consts[3068];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3069], tmp_assign_source_1568);
    }
    {
        PyObject *tmp_assign_source_1569;
        tmp_assign_source_1569 = mod_consts[3070];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3071], tmp_assign_source_1569);
    }
    {
        PyObject *tmp_assign_source_1570;
        tmp_assign_source_1570 = mod_consts[3072];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3073], tmp_assign_source_1570);
    }
    {
        PyObject *tmp_assign_source_1571;
        tmp_assign_source_1571 = mod_consts[3074];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3075], tmp_assign_source_1571);
    }
    {
        PyObject *tmp_assign_source_1572;
        tmp_assign_source_1572 = mod_consts[3076];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3077], tmp_assign_source_1572);
    }
    {
        PyObject *tmp_assign_source_1573;
        tmp_assign_source_1573 = GET_STRING_DICT_VALUE(moduledict_winerror, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_assign_source_1573 == NULL)) {
            tmp_assign_source_1573 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
        }

        assert(!(tmp_assign_source_1573 == NULL));
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3078], tmp_assign_source_1573);
    }
    {
        PyObject *tmp_assign_source_1574;
        tmp_assign_source_1574 = mod_consts[3079];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1350], tmp_assign_source_1574);
    }
    {
        PyObject *tmp_assign_source_1575;
        tmp_assign_source_1575 = mod_consts[3080];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3081], tmp_assign_source_1575);
    }
    {
        PyObject *tmp_assign_source_1576;
        tmp_assign_source_1576 = mod_consts[3082];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3083], tmp_assign_source_1576);
    }
    {
        PyObject *tmp_assign_source_1577;
        tmp_assign_source_1577 = mod_consts[3084];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3085], tmp_assign_source_1577);
    }
    {
        PyObject *tmp_assign_source_1578;
        tmp_assign_source_1578 = mod_consts[3086];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3087], tmp_assign_source_1578);
    }
    {
        PyObject *tmp_assign_source_1579;
        tmp_assign_source_1579 = mod_consts[3088];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3089], tmp_assign_source_1579);
    }
    {
        PyObject *tmp_assign_source_1580;
        tmp_assign_source_1580 = mod_consts[3090];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3091], tmp_assign_source_1580);
    }
    {
        PyObject *tmp_assign_source_1581;
        tmp_assign_source_1581 = mod_consts[3092];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3093], tmp_assign_source_1581);
    }
    {
        PyObject *tmp_assign_source_1582;
        tmp_assign_source_1582 = mod_consts[3094];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3095], tmp_assign_source_1582);
    }
    {
        PyObject *tmp_assign_source_1583;
        tmp_assign_source_1583 = mod_consts[3096];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3097], tmp_assign_source_1583);
    }
    {
        PyObject *tmp_assign_source_1584;
        tmp_assign_source_1584 = mod_consts[3098];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3099], tmp_assign_source_1584);
    }
    {
        PyObject *tmp_assign_source_1585;
        tmp_assign_source_1585 = mod_consts[3100];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3101], tmp_assign_source_1585);
    }
    {
        PyObject *tmp_assign_source_1586;
        tmp_assign_source_1586 = mod_consts[3102];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3103], tmp_assign_source_1586);
    }
    {
        PyObject *tmp_assign_source_1587;
        tmp_assign_source_1587 = mod_consts[3104];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3105], tmp_assign_source_1587);
    }
    {
        PyObject *tmp_assign_source_1588;
        tmp_assign_source_1588 = mod_consts[3106];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3107], tmp_assign_source_1588);
    }
    {
        PyObject *tmp_assign_source_1589;
        tmp_assign_source_1589 = mod_consts[3108];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3109], tmp_assign_source_1589);
    }
    {
        PyObject *tmp_assign_source_1590;
        tmp_assign_source_1590 = mod_consts[3110];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3111], tmp_assign_source_1590);
    }
    {
        PyObject *tmp_assign_source_1591;
        tmp_assign_source_1591 = mod_consts[3112];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3113], tmp_assign_source_1591);
    }
    {
        PyObject *tmp_assign_source_1592;
        tmp_assign_source_1592 = mod_consts[3114];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3115], tmp_assign_source_1592);
    }
    {
        PyObject *tmp_assign_source_1593;
        tmp_assign_source_1593 = mod_consts[3116];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3117], tmp_assign_source_1593);
    }
    {
        PyObject *tmp_assign_source_1594;
        tmp_assign_source_1594 = mod_consts[3118];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3119], tmp_assign_source_1594);
    }
    {
        PyObject *tmp_assign_source_1595;
        tmp_assign_source_1595 = mod_consts[3120];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3121], tmp_assign_source_1595);
    }
    {
        PyObject *tmp_assign_source_1596;
        tmp_assign_source_1596 = mod_consts[3122];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3123], tmp_assign_source_1596);
    }
    {
        PyObject *tmp_assign_source_1597;
        tmp_assign_source_1597 = mod_consts[3124];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3125], tmp_assign_source_1597);
    }
    {
        PyObject *tmp_assign_source_1598;
        tmp_assign_source_1598 = mod_consts[3126];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3127], tmp_assign_source_1598);
    }
    {
        PyObject *tmp_assign_source_1599;
        tmp_assign_source_1599 = mod_consts[3128];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3129], tmp_assign_source_1599);
    }
    {
        PyObject *tmp_assign_source_1600;
        tmp_assign_source_1600 = mod_consts[3130];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3131], tmp_assign_source_1600);
    }
    {
        PyObject *tmp_assign_source_1601;
        tmp_assign_source_1601 = mod_consts[3132];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3133], tmp_assign_source_1601);
    }
    {
        PyObject *tmp_assign_source_1602;
        tmp_assign_source_1602 = mod_consts[3134];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3135], tmp_assign_source_1602);
    }
    {
        PyObject *tmp_assign_source_1603;
        tmp_assign_source_1603 = mod_consts[3136];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3137], tmp_assign_source_1603);
    }
    {
        PyObject *tmp_assign_source_1604;
        tmp_assign_source_1604 = mod_consts[3138];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3139], tmp_assign_source_1604);
    }
    {
        PyObject *tmp_assign_source_1605;
        tmp_assign_source_1605 = mod_consts[3140];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3141], tmp_assign_source_1605);
    }
    {
        PyObject *tmp_assign_source_1606;
        tmp_assign_source_1606 = mod_consts[3142];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3143], tmp_assign_source_1606);
    }
    {
        PyObject *tmp_assign_source_1607;
        tmp_assign_source_1607 = mod_consts[3144];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3145], tmp_assign_source_1607);
    }
    {
        PyObject *tmp_assign_source_1608;
        tmp_assign_source_1608 = mod_consts[3146];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3147], tmp_assign_source_1608);
    }
    {
        PyObject *tmp_assign_source_1609;
        tmp_assign_source_1609 = mod_consts[3148];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3149], tmp_assign_source_1609);
    }
    {
        PyObject *tmp_assign_source_1610;
        tmp_assign_source_1610 = mod_consts[3150];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3151], tmp_assign_source_1610);
    }
    {
        PyObject *tmp_assign_source_1611;
        tmp_assign_source_1611 = mod_consts[3152];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3153], tmp_assign_source_1611);
    }
    {
        PyObject *tmp_assign_source_1612;
        tmp_assign_source_1612 = mod_consts[3154];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3155], tmp_assign_source_1612);
    }
    {
        PyObject *tmp_assign_source_1613;
        tmp_assign_source_1613 = mod_consts[3156];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3157], tmp_assign_source_1613);
    }
    {
        PyObject *tmp_assign_source_1614;
        tmp_assign_source_1614 = mod_consts[3158];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3159], tmp_assign_source_1614);
    }
    {
        PyObject *tmp_assign_source_1615;
        tmp_assign_source_1615 = mod_consts[3160];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3161], tmp_assign_source_1615);
    }
    {
        PyObject *tmp_assign_source_1616;
        tmp_assign_source_1616 = mod_consts[3162];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3163], tmp_assign_source_1616);
    }
    {
        PyObject *tmp_assign_source_1617;
        tmp_assign_source_1617 = mod_consts[3164];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3165], tmp_assign_source_1617);
    }
    {
        PyObject *tmp_assign_source_1618;
        tmp_assign_source_1618 = mod_consts[3166];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3167], tmp_assign_source_1618);
    }
    {
        PyObject *tmp_assign_source_1619;
        tmp_assign_source_1619 = mod_consts[3168];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3169], tmp_assign_source_1619);
    }
    {
        PyObject *tmp_assign_source_1620;
        tmp_assign_source_1620 = mod_consts[3170];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3171], tmp_assign_source_1620);
    }
    {
        PyObject *tmp_assign_source_1621;
        tmp_assign_source_1621 = mod_consts[3172];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3173], tmp_assign_source_1621);
    }
    {
        PyObject *tmp_assign_source_1622;
        tmp_assign_source_1622 = mod_consts[3174];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3175], tmp_assign_source_1622);
    }
    {
        PyObject *tmp_assign_source_1623;
        tmp_assign_source_1623 = mod_consts[3176];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3177], tmp_assign_source_1623);
    }
    {
        PyObject *tmp_assign_source_1624;
        tmp_assign_source_1624 = mod_consts[3178];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3179], tmp_assign_source_1624);
    }
    {
        PyObject *tmp_assign_source_1625;
        tmp_assign_source_1625 = mod_consts[3180];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3181], tmp_assign_source_1625);
    }
    {
        PyObject *tmp_assign_source_1626;
        tmp_assign_source_1626 = mod_consts[3182];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3183], tmp_assign_source_1626);
    }
    {
        PyObject *tmp_assign_source_1627;
        tmp_assign_source_1627 = mod_consts[3184];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3185], tmp_assign_source_1627);
    }
    {
        PyObject *tmp_assign_source_1628;
        tmp_assign_source_1628 = mod_consts[3186];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3187], tmp_assign_source_1628);
    }
    {
        PyObject *tmp_assign_source_1629;
        tmp_assign_source_1629 = mod_consts[3188];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3189], tmp_assign_source_1629);
    }
    {
        PyObject *tmp_assign_source_1630;
        tmp_assign_source_1630 = mod_consts[3190];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3191], tmp_assign_source_1630);
    }
    {
        PyObject *tmp_assign_source_1631;
        tmp_assign_source_1631 = mod_consts[3192];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3193], tmp_assign_source_1631);
    }
    {
        PyObject *tmp_assign_source_1632;
        tmp_assign_source_1632 = mod_consts[3194];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3195], tmp_assign_source_1632);
    }
    {
        PyObject *tmp_assign_source_1633;
        tmp_assign_source_1633 = mod_consts[3196];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3197], tmp_assign_source_1633);
    }
    {
        PyObject *tmp_assign_source_1634;
        tmp_assign_source_1634 = mod_consts[3198];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3199], tmp_assign_source_1634);
    }
    {
        PyObject *tmp_assign_source_1635;
        tmp_assign_source_1635 = mod_consts[3200];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3201], tmp_assign_source_1635);
    }
    {
        PyObject *tmp_assign_source_1636;
        tmp_assign_source_1636 = mod_consts[3202];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3203], tmp_assign_source_1636);
    }
    {
        PyObject *tmp_assign_source_1637;
        tmp_assign_source_1637 = mod_consts[3204];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3205], tmp_assign_source_1637);
    }
    {
        PyObject *tmp_assign_source_1638;
        tmp_assign_source_1638 = mod_consts[3206];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3207], tmp_assign_source_1638);
    }
    {
        PyObject *tmp_assign_source_1639;
        tmp_assign_source_1639 = mod_consts[3208];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3209], tmp_assign_source_1639);
    }
    {
        PyObject *tmp_assign_source_1640;
        tmp_assign_source_1640 = mod_consts[3210];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3211], tmp_assign_source_1640);
    }
    {
        PyObject *tmp_assign_source_1641;
        tmp_assign_source_1641 = mod_consts[3212];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3213], tmp_assign_source_1641);
    }
    {
        PyObject *tmp_assign_source_1642;
        tmp_assign_source_1642 = mod_consts[3214];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3215], tmp_assign_source_1642);
    }
    {
        PyObject *tmp_assign_source_1643;
        tmp_assign_source_1643 = mod_consts[3216];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3217], tmp_assign_source_1643);
    }
    {
        PyObject *tmp_assign_source_1644;
        tmp_assign_source_1644 = mod_consts[3218];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3219], tmp_assign_source_1644);
    }
    {
        PyObject *tmp_assign_source_1645;
        tmp_assign_source_1645 = mod_consts[3220];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3221], tmp_assign_source_1645);
    }
    {
        PyObject *tmp_assign_source_1646;
        tmp_assign_source_1646 = mod_consts[3222];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3223], tmp_assign_source_1646);
    }
    {
        PyObject *tmp_assign_source_1647;
        tmp_assign_source_1647 = mod_consts[3224];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3225], tmp_assign_source_1647);
    }
    {
        PyObject *tmp_assign_source_1648;
        tmp_assign_source_1648 = mod_consts[3226];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3227], tmp_assign_source_1648);
    }
    {
        PyObject *tmp_assign_source_1649;
        tmp_assign_source_1649 = mod_consts[3228];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3229], tmp_assign_source_1649);
    }
    {
        PyObject *tmp_assign_source_1650;
        tmp_assign_source_1650 = mod_consts[3230];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3231], tmp_assign_source_1650);
    }
    {
        PyObject *tmp_assign_source_1651;
        tmp_assign_source_1651 = mod_consts[3232];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3233], tmp_assign_source_1651);
    }
    {
        PyObject *tmp_assign_source_1652;
        tmp_assign_source_1652 = mod_consts[3234];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3235], tmp_assign_source_1652);
    }
    {
        PyObject *tmp_assign_source_1653;
        tmp_assign_source_1653 = mod_consts[3236];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3237], tmp_assign_source_1653);
    }
    {
        PyObject *tmp_assign_source_1654;
        tmp_assign_source_1654 = mod_consts[3238];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3239], tmp_assign_source_1654);
    }
    {
        PyObject *tmp_assign_source_1655;
        tmp_assign_source_1655 = mod_consts[3240];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3241], tmp_assign_source_1655);
    }
    {
        PyObject *tmp_assign_source_1656;
        tmp_assign_source_1656 = mod_consts[3242];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3243], tmp_assign_source_1656);
    }
    {
        PyObject *tmp_assign_source_1657;
        tmp_assign_source_1657 = mod_consts[3244];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3245], tmp_assign_source_1657);
    }
    {
        PyObject *tmp_assign_source_1658;
        tmp_assign_source_1658 = mod_consts[3246];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3247], tmp_assign_source_1658);
    }
    {
        PyObject *tmp_assign_source_1659;
        tmp_assign_source_1659 = mod_consts[3248];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3249], tmp_assign_source_1659);
    }
    {
        PyObject *tmp_assign_source_1660;
        tmp_assign_source_1660 = mod_consts[3250];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3251], tmp_assign_source_1660);
    }
    {
        PyObject *tmp_assign_source_1661;
        tmp_assign_source_1661 = mod_consts[3252];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3253], tmp_assign_source_1661);
    }
    {
        PyObject *tmp_assign_source_1662;
        tmp_assign_source_1662 = mod_consts[3254];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3255], tmp_assign_source_1662);
    }
    {
        PyObject *tmp_assign_source_1663;
        tmp_assign_source_1663 = mod_consts[3256];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3257], tmp_assign_source_1663);
    }
    {
        PyObject *tmp_assign_source_1664;
        tmp_assign_source_1664 = mod_consts[3258];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3259], tmp_assign_source_1664);
    }
    {
        PyObject *tmp_assign_source_1665;
        tmp_assign_source_1665 = mod_consts[3260];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3261], tmp_assign_source_1665);
    }
    {
        PyObject *tmp_assign_source_1666;
        tmp_assign_source_1666 = mod_consts[3262];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3263], tmp_assign_source_1666);
    }
    {
        PyObject *tmp_assign_source_1667;
        tmp_assign_source_1667 = mod_consts[3264];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3265], tmp_assign_source_1667);
    }
    {
        PyObject *tmp_assign_source_1668;
        tmp_assign_source_1668 = mod_consts[3266];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3267], tmp_assign_source_1668);
    }
    {
        PyObject *tmp_assign_source_1669;
        tmp_assign_source_1669 = mod_consts[3268];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3269], tmp_assign_source_1669);
    }
    {
        PyObject *tmp_assign_source_1670;
        tmp_assign_source_1670 = mod_consts[3270];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3271], tmp_assign_source_1670);
    }
    {
        PyObject *tmp_assign_source_1671;
        tmp_assign_source_1671 = mod_consts[3272];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3273], tmp_assign_source_1671);
    }
    {
        PyObject *tmp_assign_source_1672;
        tmp_assign_source_1672 = mod_consts[3274];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3275], tmp_assign_source_1672);
    }
    {
        PyObject *tmp_assign_source_1673;
        tmp_assign_source_1673 = mod_consts[3276];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3277], tmp_assign_source_1673);
    }
    {
        PyObject *tmp_assign_source_1674;
        tmp_assign_source_1674 = mod_consts[3278];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3279], tmp_assign_source_1674);
    }
    {
        PyObject *tmp_assign_source_1675;
        tmp_assign_source_1675 = mod_consts[3280];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3281], tmp_assign_source_1675);
    }
    {
        PyObject *tmp_assign_source_1676;
        tmp_assign_source_1676 = mod_consts[3282];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3283], tmp_assign_source_1676);
    }
    {
        PyObject *tmp_assign_source_1677;
        tmp_assign_source_1677 = mod_consts[3284];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3285], tmp_assign_source_1677);
    }
    {
        PyObject *tmp_assign_source_1678;
        tmp_assign_source_1678 = mod_consts[3286];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3287], tmp_assign_source_1678);
    }
    {
        PyObject *tmp_assign_source_1679;
        tmp_assign_source_1679 = mod_consts[3288];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3289], tmp_assign_source_1679);
    }
    {
        PyObject *tmp_assign_source_1680;
        tmp_assign_source_1680 = mod_consts[3290];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3291], tmp_assign_source_1680);
    }
    {
        PyObject *tmp_assign_source_1681;
        tmp_assign_source_1681 = mod_consts[3292];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3293], tmp_assign_source_1681);
    }
    {
        PyObject *tmp_assign_source_1682;
        tmp_assign_source_1682 = mod_consts[3294];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3295], tmp_assign_source_1682);
    }
    {
        PyObject *tmp_assign_source_1683;
        tmp_assign_source_1683 = mod_consts[3296];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3297], tmp_assign_source_1683);
    }
    {
        PyObject *tmp_assign_source_1684;
        tmp_assign_source_1684 = mod_consts[3298];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3299], tmp_assign_source_1684);
    }
    {
        PyObject *tmp_assign_source_1685;
        tmp_assign_source_1685 = mod_consts[3300];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3301], tmp_assign_source_1685);
    }
    {
        PyObject *tmp_assign_source_1686;
        tmp_assign_source_1686 = mod_consts[3302];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3303], tmp_assign_source_1686);
    }
    {
        PyObject *tmp_assign_source_1687;
        tmp_assign_source_1687 = mod_consts[3304];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3305], tmp_assign_source_1687);
    }
    {
        PyObject *tmp_assign_source_1688;
        tmp_assign_source_1688 = mod_consts[3306];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3307], tmp_assign_source_1688);
    }
    {
        PyObject *tmp_assign_source_1689;
        tmp_assign_source_1689 = mod_consts[3308];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3309], tmp_assign_source_1689);
    }
    {
        PyObject *tmp_assign_source_1690;
        tmp_assign_source_1690 = mod_consts[3310];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3311], tmp_assign_source_1690);
    }
    {
        PyObject *tmp_assign_source_1691;
        tmp_assign_source_1691 = mod_consts[3312];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3313], tmp_assign_source_1691);
    }
    {
        PyObject *tmp_assign_source_1692;
        tmp_assign_source_1692 = mod_consts[3314];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3315], tmp_assign_source_1692);
    }
    {
        PyObject *tmp_assign_source_1693;
        tmp_assign_source_1693 = mod_consts[3316];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3317], tmp_assign_source_1693);
    }
    {
        PyObject *tmp_assign_source_1694;
        tmp_assign_source_1694 = mod_consts[3318];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3319], tmp_assign_source_1694);
    }
    {
        PyObject *tmp_assign_source_1695;
        tmp_assign_source_1695 = mod_consts[3320];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3321], tmp_assign_source_1695);
    }
    {
        PyObject *tmp_assign_source_1696;
        tmp_assign_source_1696 = mod_consts[3322];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3323], tmp_assign_source_1696);
    }
    {
        PyObject *tmp_assign_source_1697;
        tmp_assign_source_1697 = mod_consts[3324];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3325], tmp_assign_source_1697);
    }
    {
        PyObject *tmp_assign_source_1698;
        tmp_assign_source_1698 = mod_consts[3326];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3327], tmp_assign_source_1698);
    }
    {
        PyObject *tmp_assign_source_1699;
        tmp_assign_source_1699 = mod_consts[3328];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3329], tmp_assign_source_1699);
    }
    {
        PyObject *tmp_assign_source_1700;
        tmp_assign_source_1700 = mod_consts[3330];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3331], tmp_assign_source_1700);
    }
    {
        PyObject *tmp_assign_source_1701;
        tmp_assign_source_1701 = mod_consts[3332];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3333], tmp_assign_source_1701);
    }
    {
        PyObject *tmp_assign_source_1702;
        tmp_assign_source_1702 = mod_consts[3334];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3335], tmp_assign_source_1702);
    }
    {
        PyObject *tmp_assign_source_1703;
        tmp_assign_source_1703 = mod_consts[3336];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3337], tmp_assign_source_1703);
    }
    {
        PyObject *tmp_assign_source_1704;
        tmp_assign_source_1704 = mod_consts[3338];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3339], tmp_assign_source_1704);
    }
    {
        PyObject *tmp_assign_source_1705;
        tmp_assign_source_1705 = mod_consts[3340];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3341], tmp_assign_source_1705);
    }
    {
        PyObject *tmp_assign_source_1706;
        tmp_assign_source_1706 = mod_consts[3342];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3343], tmp_assign_source_1706);
    }
    {
        PyObject *tmp_assign_source_1707;
        tmp_assign_source_1707 = mod_consts[3344];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3345], tmp_assign_source_1707);
    }
    {
        PyObject *tmp_assign_source_1708;
        tmp_assign_source_1708 = mod_consts[3346];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3347], tmp_assign_source_1708);
    }
    {
        PyObject *tmp_assign_source_1709;
        tmp_assign_source_1709 = mod_consts[3348];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3349], tmp_assign_source_1709);
    }
    {
        PyObject *tmp_assign_source_1710;
        tmp_assign_source_1710 = mod_consts[3350];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3351], tmp_assign_source_1710);
    }
    {
        PyObject *tmp_assign_source_1711;
        tmp_assign_source_1711 = mod_consts[3352];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3353], tmp_assign_source_1711);
    }
    {
        PyObject *tmp_assign_source_1712;
        tmp_assign_source_1712 = mod_consts[3354];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3355], tmp_assign_source_1712);
    }
    {
        PyObject *tmp_assign_source_1713;
        tmp_assign_source_1713 = mod_consts[3356];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3357], tmp_assign_source_1713);
    }
    {
        PyObject *tmp_assign_source_1714;
        tmp_assign_source_1714 = mod_consts[3358];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3359], tmp_assign_source_1714);
    }
    {
        PyObject *tmp_assign_source_1715;
        tmp_assign_source_1715 = mod_consts[3360];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3361], tmp_assign_source_1715);
    }
    {
        PyObject *tmp_assign_source_1716;
        tmp_assign_source_1716 = mod_consts[3362];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3363], tmp_assign_source_1716);
    }
    {
        PyObject *tmp_assign_source_1717;
        tmp_assign_source_1717 = mod_consts[3364];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3365], tmp_assign_source_1717);
    }
    {
        PyObject *tmp_assign_source_1718;
        tmp_assign_source_1718 = mod_consts[3366];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3367], tmp_assign_source_1718);
    }
    {
        PyObject *tmp_assign_source_1719;
        tmp_assign_source_1719 = mod_consts[3368];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3369], tmp_assign_source_1719);
    }
    {
        PyObject *tmp_assign_source_1720;
        tmp_assign_source_1720 = mod_consts[3370];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3371], tmp_assign_source_1720);
    }
    {
        PyObject *tmp_assign_source_1721;
        tmp_assign_source_1721 = mod_consts[3372];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3373], tmp_assign_source_1721);
    }
    {
        PyObject *tmp_assign_source_1722;
        tmp_assign_source_1722 = mod_consts[3374];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3375], tmp_assign_source_1722);
    }
    {
        PyObject *tmp_assign_source_1723;
        tmp_assign_source_1723 = mod_consts[3376];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3377], tmp_assign_source_1723);
    }
    {
        PyObject *tmp_assign_source_1724;
        tmp_assign_source_1724 = mod_consts[3378];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3379], tmp_assign_source_1724);
    }
    {
        PyObject *tmp_assign_source_1725;
        tmp_assign_source_1725 = mod_consts[3380];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3381], tmp_assign_source_1725);
    }
    {
        PyObject *tmp_assign_source_1726;
        tmp_assign_source_1726 = mod_consts[3382];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3383], tmp_assign_source_1726);
    }
    {
        PyObject *tmp_assign_source_1727;
        tmp_assign_source_1727 = mod_consts[3384];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3385], tmp_assign_source_1727);
    }
    {
        PyObject *tmp_assign_source_1728;
        tmp_assign_source_1728 = mod_consts[3386];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3387], tmp_assign_source_1728);
    }
    {
        PyObject *tmp_assign_source_1729;
        tmp_assign_source_1729 = mod_consts[3388];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3389], tmp_assign_source_1729);
    }
    {
        PyObject *tmp_assign_source_1730;
        tmp_assign_source_1730 = mod_consts[3390];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3391], tmp_assign_source_1730);
    }
    {
        PyObject *tmp_assign_source_1731;
        tmp_assign_source_1731 = mod_consts[3392];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3393], tmp_assign_source_1731);
    }
    {
        PyObject *tmp_assign_source_1732;
        tmp_assign_source_1732 = mod_consts[3394];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3395], tmp_assign_source_1732);
    }
    {
        PyObject *tmp_assign_source_1733;
        tmp_assign_source_1733 = mod_consts[3396];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3397], tmp_assign_source_1733);
    }
    {
        PyObject *tmp_assign_source_1734;
        tmp_assign_source_1734 = mod_consts[3398];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3399], tmp_assign_source_1734);
    }
    {
        PyObject *tmp_assign_source_1735;
        tmp_assign_source_1735 = mod_consts[3400];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3401], tmp_assign_source_1735);
    }
    {
        PyObject *tmp_assign_source_1736;
        tmp_assign_source_1736 = mod_consts[3402];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3403], tmp_assign_source_1736);
    }
    {
        PyObject *tmp_assign_source_1737;
        tmp_assign_source_1737 = mod_consts[3404];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3405], tmp_assign_source_1737);
    }
    {
        PyObject *tmp_assign_source_1738;
        tmp_assign_source_1738 = mod_consts[3406];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3407], tmp_assign_source_1738);
    }
    {
        PyObject *tmp_assign_source_1739;
        tmp_assign_source_1739 = mod_consts[3408];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3409], tmp_assign_source_1739);
    }
    {
        PyObject *tmp_assign_source_1740;
        tmp_assign_source_1740 = mod_consts[3410];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3411], tmp_assign_source_1740);
    }
    {
        PyObject *tmp_assign_source_1741;
        tmp_assign_source_1741 = mod_consts[3412];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3413], tmp_assign_source_1741);
    }
    {
        PyObject *tmp_assign_source_1742;
        tmp_assign_source_1742 = mod_consts[3414];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3415], tmp_assign_source_1742);
    }
    {
        PyObject *tmp_assign_source_1743;
        tmp_assign_source_1743 = mod_consts[3416];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3417], tmp_assign_source_1743);
    }
    {
        PyObject *tmp_assign_source_1744;
        tmp_assign_source_1744 = mod_consts[3418];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3419], tmp_assign_source_1744);
    }
    {
        PyObject *tmp_assign_source_1745;
        tmp_assign_source_1745 = mod_consts[3420];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3421], tmp_assign_source_1745);
    }
    {
        PyObject *tmp_assign_source_1746;
        tmp_assign_source_1746 = mod_consts[3422];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3423], tmp_assign_source_1746);
    }
    {
        PyObject *tmp_assign_source_1747;
        tmp_assign_source_1747 = mod_consts[3424];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3425], tmp_assign_source_1747);
    }
    {
        PyObject *tmp_assign_source_1748;
        tmp_assign_source_1748 = mod_consts[3426];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3427], tmp_assign_source_1748);
    }
    {
        PyObject *tmp_assign_source_1749;
        tmp_assign_source_1749 = mod_consts[3428];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3429], tmp_assign_source_1749);
    }
    {
        PyObject *tmp_assign_source_1750;
        tmp_assign_source_1750 = mod_consts[3430];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3431], tmp_assign_source_1750);
    }
    {
        PyObject *tmp_assign_source_1751;
        tmp_assign_source_1751 = mod_consts[3432];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3433], tmp_assign_source_1751);
    }
    {
        PyObject *tmp_assign_source_1752;
        tmp_assign_source_1752 = mod_consts[3434];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3435], tmp_assign_source_1752);
    }
    {
        PyObject *tmp_assign_source_1753;
        tmp_assign_source_1753 = mod_consts[3436];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3437], tmp_assign_source_1753);
    }
    {
        PyObject *tmp_assign_source_1754;
        tmp_assign_source_1754 = mod_consts[3438];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3439], tmp_assign_source_1754);
    }
    {
        PyObject *tmp_assign_source_1755;
        tmp_assign_source_1755 = mod_consts[3440];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3441], tmp_assign_source_1755);
    }
    {
        PyObject *tmp_assign_source_1756;
        tmp_assign_source_1756 = mod_consts[3442];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3443], tmp_assign_source_1756);
    }
    {
        PyObject *tmp_assign_source_1757;
        tmp_assign_source_1757 = mod_consts[3444];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3445], tmp_assign_source_1757);
    }
    {
        PyObject *tmp_assign_source_1758;
        tmp_assign_source_1758 = mod_consts[3446];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3447], tmp_assign_source_1758);
    }
    {
        PyObject *tmp_assign_source_1759;
        tmp_assign_source_1759 = mod_consts[3448];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3449], tmp_assign_source_1759);
    }
    {
        PyObject *tmp_assign_source_1760;
        tmp_assign_source_1760 = mod_consts[3450];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3451], tmp_assign_source_1760);
    }
    {
        PyObject *tmp_assign_source_1761;
        tmp_assign_source_1761 = mod_consts[3452];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3453], tmp_assign_source_1761);
    }
    {
        PyObject *tmp_assign_source_1762;
        tmp_assign_source_1762 = mod_consts[3454];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3455], tmp_assign_source_1762);
    }
    {
        PyObject *tmp_assign_source_1763;
        tmp_assign_source_1763 = mod_consts[3456];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3457], tmp_assign_source_1763);
    }
    {
        PyObject *tmp_assign_source_1764;
        tmp_assign_source_1764 = mod_consts[3458];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3459], tmp_assign_source_1764);
    }
    {
        PyObject *tmp_assign_source_1765;
        tmp_assign_source_1765 = mod_consts[3460];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3461], tmp_assign_source_1765);
    }
    {
        PyObject *tmp_assign_source_1766;
        tmp_assign_source_1766 = mod_consts[3462];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3463], tmp_assign_source_1766);
    }
    {
        PyObject *tmp_assign_source_1767;
        tmp_assign_source_1767 = mod_consts[3464];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3465], tmp_assign_source_1767);
    }
    {
        PyObject *tmp_assign_source_1768;
        tmp_assign_source_1768 = mod_consts[3466];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3467], tmp_assign_source_1768);
    }
    {
        PyObject *tmp_assign_source_1769;
        tmp_assign_source_1769 = mod_consts[3468];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3469], tmp_assign_source_1769);
    }
    {
        PyObject *tmp_assign_source_1770;
        tmp_assign_source_1770 = mod_consts[3470];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3471], tmp_assign_source_1770);
    }
    {
        PyObject *tmp_assign_source_1771;
        tmp_assign_source_1771 = mod_consts[3472];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3473], tmp_assign_source_1771);
    }
    {
        PyObject *tmp_assign_source_1772;
        tmp_assign_source_1772 = mod_consts[3474];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3475], tmp_assign_source_1772);
    }
    {
        PyObject *tmp_assign_source_1773;
        tmp_assign_source_1773 = mod_consts[3476];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3477], tmp_assign_source_1773);
    }
    {
        PyObject *tmp_assign_source_1774;
        tmp_assign_source_1774 = mod_consts[3478];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3479], tmp_assign_source_1774);
    }
    {
        PyObject *tmp_assign_source_1775;
        tmp_assign_source_1775 = mod_consts[3480];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3481], tmp_assign_source_1775);
    }
    {
        PyObject *tmp_assign_source_1776;
        tmp_assign_source_1776 = mod_consts[3482];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3483], tmp_assign_source_1776);
    }
    {
        PyObject *tmp_assign_source_1777;
        tmp_assign_source_1777 = mod_consts[3484];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3485], tmp_assign_source_1777);
    }
    {
        PyObject *tmp_assign_source_1778;
        tmp_assign_source_1778 = mod_consts[3486];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3487], tmp_assign_source_1778);
    }
    {
        PyObject *tmp_assign_source_1779;
        tmp_assign_source_1779 = mod_consts[3488];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3489], tmp_assign_source_1779);
    }
    {
        PyObject *tmp_assign_source_1780;
        tmp_assign_source_1780 = mod_consts[3490];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3491], tmp_assign_source_1780);
    }
    {
        PyObject *tmp_assign_source_1781;
        tmp_assign_source_1781 = mod_consts[3492];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3493], tmp_assign_source_1781);
    }
    {
        PyObject *tmp_assign_source_1782;
        tmp_assign_source_1782 = mod_consts[3494];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3495], tmp_assign_source_1782);
    }
    {
        PyObject *tmp_assign_source_1783;
        tmp_assign_source_1783 = mod_consts[3496];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3497], tmp_assign_source_1783);
    }
    {
        PyObject *tmp_assign_source_1784;
        tmp_assign_source_1784 = mod_consts[3498];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3499], tmp_assign_source_1784);
    }
    {
        PyObject *tmp_assign_source_1785;
        tmp_assign_source_1785 = mod_consts[3500];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3501], tmp_assign_source_1785);
    }
    {
        PyObject *tmp_assign_source_1786;
        tmp_assign_source_1786 = mod_consts[3502];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3503], tmp_assign_source_1786);
    }
    {
        PyObject *tmp_assign_source_1787;
        tmp_assign_source_1787 = mod_consts[3504];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3505], tmp_assign_source_1787);
    }
    {
        PyObject *tmp_assign_source_1788;
        tmp_assign_source_1788 = mod_consts[3506];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3507], tmp_assign_source_1788);
    }
    {
        PyObject *tmp_assign_source_1789;
        tmp_assign_source_1789 = mod_consts[3508];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3509], tmp_assign_source_1789);
    }
    {
        PyObject *tmp_assign_source_1790;
        tmp_assign_source_1790 = mod_consts[3510];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3511], tmp_assign_source_1790);
    }
    {
        PyObject *tmp_assign_source_1791;
        tmp_assign_source_1791 = mod_consts[3512];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3513], tmp_assign_source_1791);
    }
    {
        PyObject *tmp_assign_source_1792;
        tmp_assign_source_1792 = mod_consts[3514];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3515], tmp_assign_source_1792);
    }
    {
        PyObject *tmp_assign_source_1793;
        tmp_assign_source_1793 = mod_consts[3516];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3517], tmp_assign_source_1793);
    }
    {
        PyObject *tmp_assign_source_1794;
        tmp_assign_source_1794 = mod_consts[3518];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3519], tmp_assign_source_1794);
    }
    {
        PyObject *tmp_assign_source_1795;
        tmp_assign_source_1795 = mod_consts[3520];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3521], tmp_assign_source_1795);
    }
    {
        PyObject *tmp_assign_source_1796;
        tmp_assign_source_1796 = mod_consts[3522];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3523], tmp_assign_source_1796);
    }
    {
        PyObject *tmp_assign_source_1797;
        tmp_assign_source_1797 = mod_consts[3524];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3525], tmp_assign_source_1797);
    }
    {
        PyObject *tmp_assign_source_1798;
        tmp_assign_source_1798 = mod_consts[3526];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3527], tmp_assign_source_1798);
    }
    {
        PyObject *tmp_assign_source_1799;
        tmp_assign_source_1799 = mod_consts[3528];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3529], tmp_assign_source_1799);
    }
    {
        PyObject *tmp_assign_source_1800;
        tmp_assign_source_1800 = mod_consts[3530];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3531], tmp_assign_source_1800);
    }
    {
        PyObject *tmp_assign_source_1801;
        tmp_assign_source_1801 = mod_consts[3532];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3533], tmp_assign_source_1801);
    }
    {
        PyObject *tmp_assign_source_1802;
        tmp_assign_source_1802 = mod_consts[3534];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3535], tmp_assign_source_1802);
    }
    {
        PyObject *tmp_assign_source_1803;
        tmp_assign_source_1803 = mod_consts[3536];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3537], tmp_assign_source_1803);
    }
    {
        PyObject *tmp_assign_source_1804;
        tmp_assign_source_1804 = mod_consts[3538];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3539], tmp_assign_source_1804);
    }
    {
        PyObject *tmp_assign_source_1805;
        tmp_assign_source_1805 = mod_consts[3540];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3541], tmp_assign_source_1805);
    }
    {
        PyObject *tmp_assign_source_1806;
        tmp_assign_source_1806 = mod_consts[3542];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3543], tmp_assign_source_1806);
    }
    {
        PyObject *tmp_assign_source_1807;
        tmp_assign_source_1807 = mod_consts[3544];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3545], tmp_assign_source_1807);
    }
    {
        PyObject *tmp_assign_source_1808;
        tmp_assign_source_1808 = mod_consts[3546];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3547], tmp_assign_source_1808);
    }
    {
        PyObject *tmp_assign_source_1809;
        tmp_assign_source_1809 = mod_consts[3548];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3549], tmp_assign_source_1809);
    }
    {
        PyObject *tmp_assign_source_1810;
        tmp_assign_source_1810 = mod_consts[3550];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3551], tmp_assign_source_1810);
    }
    {
        PyObject *tmp_assign_source_1811;
        tmp_assign_source_1811 = mod_consts[3552];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3553], tmp_assign_source_1811);
    }
    {
        PyObject *tmp_assign_source_1812;
        tmp_assign_source_1812 = mod_consts[3554];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3555], tmp_assign_source_1812);
    }
    {
        PyObject *tmp_assign_source_1813;
        tmp_assign_source_1813 = mod_consts[3556];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3557], tmp_assign_source_1813);
    }
    {
        PyObject *tmp_assign_source_1814;
        tmp_assign_source_1814 = mod_consts[3558];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3559], tmp_assign_source_1814);
    }
    {
        PyObject *tmp_assign_source_1815;
        tmp_assign_source_1815 = mod_consts[3560];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3561], tmp_assign_source_1815);
    }
    {
        PyObject *tmp_assign_source_1816;
        tmp_assign_source_1816 = mod_consts[3562];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3563], tmp_assign_source_1816);
    }
    {
        PyObject *tmp_assign_source_1817;
        tmp_assign_source_1817 = mod_consts[3564];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3565], tmp_assign_source_1817);
    }
    {
        PyObject *tmp_assign_source_1818;
        tmp_assign_source_1818 = mod_consts[3566];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3567], tmp_assign_source_1818);
    }
    {
        PyObject *tmp_assign_source_1819;
        tmp_assign_source_1819 = mod_consts[3568];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3569], tmp_assign_source_1819);
    }
    {
        PyObject *tmp_assign_source_1820;
        tmp_assign_source_1820 = mod_consts[3570];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3571], tmp_assign_source_1820);
    }
    {
        PyObject *tmp_assign_source_1821;
        tmp_assign_source_1821 = mod_consts[3572];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3573], tmp_assign_source_1821);
    }
    {
        PyObject *tmp_assign_source_1822;
        tmp_assign_source_1822 = mod_consts[3574];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3575], tmp_assign_source_1822);
    }
    {
        PyObject *tmp_assign_source_1823;
        tmp_assign_source_1823 = mod_consts[3576];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3577], tmp_assign_source_1823);
    }
    {
        PyObject *tmp_assign_source_1824;
        tmp_assign_source_1824 = mod_consts[3578];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3579], tmp_assign_source_1824);
    }
    {
        PyObject *tmp_assign_source_1825;
        tmp_assign_source_1825 = mod_consts[3580];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3581], tmp_assign_source_1825);
    }
    {
        PyObject *tmp_assign_source_1826;
        tmp_assign_source_1826 = mod_consts[3582];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3583], tmp_assign_source_1826);
    }
    {
        PyObject *tmp_assign_source_1827;
        tmp_assign_source_1827 = mod_consts[3584];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3585], tmp_assign_source_1827);
    }
    {
        PyObject *tmp_assign_source_1828;
        tmp_assign_source_1828 = mod_consts[3586];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3587], tmp_assign_source_1828);
    }
    {
        PyObject *tmp_assign_source_1829;
        tmp_assign_source_1829 = mod_consts[3588];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3589], tmp_assign_source_1829);
    }
    {
        PyObject *tmp_assign_source_1830;
        tmp_assign_source_1830 = mod_consts[3590];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3591], tmp_assign_source_1830);
    }
    {
        PyObject *tmp_assign_source_1831;
        tmp_assign_source_1831 = mod_consts[3592];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3593], tmp_assign_source_1831);
    }
    {
        PyObject *tmp_assign_source_1832;
        tmp_assign_source_1832 = mod_consts[3594];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3595], tmp_assign_source_1832);
    }
    {
        PyObject *tmp_assign_source_1833;
        tmp_assign_source_1833 = mod_consts[3596];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3597], tmp_assign_source_1833);
    }
    {
        PyObject *tmp_assign_source_1834;
        tmp_assign_source_1834 = mod_consts[3598];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3599], tmp_assign_source_1834);
    }
    {
        PyObject *tmp_assign_source_1835;
        tmp_assign_source_1835 = mod_consts[3600];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3601], tmp_assign_source_1835);
    }
    {
        PyObject *tmp_assign_source_1836;
        tmp_assign_source_1836 = mod_consts[3602];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3603], tmp_assign_source_1836);
    }
    {
        PyObject *tmp_assign_source_1837;
        tmp_assign_source_1837 = mod_consts[3604];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3605], tmp_assign_source_1837);
    }
    {
        PyObject *tmp_assign_source_1838;
        tmp_assign_source_1838 = mod_consts[3606];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3607], tmp_assign_source_1838);
    }
    {
        PyObject *tmp_assign_source_1839;
        tmp_assign_source_1839 = mod_consts[3608];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3609], tmp_assign_source_1839);
    }
    {
        PyObject *tmp_assign_source_1840;
        tmp_assign_source_1840 = mod_consts[3610];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3611], tmp_assign_source_1840);
    }
    {
        PyObject *tmp_assign_source_1841;
        tmp_assign_source_1841 = mod_consts[3612];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3613], tmp_assign_source_1841);
    }
    {
        PyObject *tmp_assign_source_1842;
        tmp_assign_source_1842 = mod_consts[3614];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3615], tmp_assign_source_1842);
    }
    {
        PyObject *tmp_assign_source_1843;
        tmp_assign_source_1843 = mod_consts[3616];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3617], tmp_assign_source_1843);
    }
    {
        PyObject *tmp_assign_source_1844;
        tmp_assign_source_1844 = mod_consts[3618];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3619], tmp_assign_source_1844);
    }
    {
        PyObject *tmp_assign_source_1845;
        tmp_assign_source_1845 = mod_consts[3620];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3621], tmp_assign_source_1845);
    }
    {
        PyObject *tmp_assign_source_1846;
        tmp_assign_source_1846 = mod_consts[3622];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3623], tmp_assign_source_1846);
    }
    {
        PyObject *tmp_assign_source_1847;
        tmp_assign_source_1847 = mod_consts[3624];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3625], tmp_assign_source_1847);
    }
    {
        PyObject *tmp_assign_source_1848;
        tmp_assign_source_1848 = mod_consts[3626];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3627], tmp_assign_source_1848);
    }
    {
        PyObject *tmp_assign_source_1849;
        tmp_assign_source_1849 = mod_consts[3628];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3629], tmp_assign_source_1849);
    }
    {
        PyObject *tmp_assign_source_1850;
        tmp_assign_source_1850 = mod_consts[3630];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3631], tmp_assign_source_1850);
    }
    {
        PyObject *tmp_assign_source_1851;
        tmp_assign_source_1851 = mod_consts[3632];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3633], tmp_assign_source_1851);
    }
    {
        PyObject *tmp_assign_source_1852;
        tmp_assign_source_1852 = mod_consts[3634];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3635], tmp_assign_source_1852);
    }
    {
        PyObject *tmp_assign_source_1853;
        tmp_assign_source_1853 = mod_consts[3636];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3637], tmp_assign_source_1853);
    }
    {
        PyObject *tmp_assign_source_1854;
        tmp_assign_source_1854 = mod_consts[3638];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3639], tmp_assign_source_1854);
    }
    {
        PyObject *tmp_assign_source_1855;
        tmp_assign_source_1855 = mod_consts[3640];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3641], tmp_assign_source_1855);
    }
    {
        PyObject *tmp_assign_source_1856;
        tmp_assign_source_1856 = mod_consts[3642];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3643], tmp_assign_source_1856);
    }
    {
        PyObject *tmp_assign_source_1857;
        tmp_assign_source_1857 = mod_consts[3644];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3645], tmp_assign_source_1857);
    }
    {
        PyObject *tmp_assign_source_1858;
        tmp_assign_source_1858 = mod_consts[3646];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3647], tmp_assign_source_1858);
    }
    {
        PyObject *tmp_assign_source_1859;
        tmp_assign_source_1859 = mod_consts[3648];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3649], tmp_assign_source_1859);
    }
    {
        PyObject *tmp_assign_source_1860;
        tmp_assign_source_1860 = mod_consts[3650];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3651], tmp_assign_source_1860);
    }
    {
        PyObject *tmp_assign_source_1861;
        tmp_assign_source_1861 = mod_consts[3652];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3653], tmp_assign_source_1861);
    }
    {
        PyObject *tmp_assign_source_1862;
        tmp_assign_source_1862 = mod_consts[3654];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3655], tmp_assign_source_1862);
    }
    {
        PyObject *tmp_assign_source_1863;
        tmp_assign_source_1863 = mod_consts[3656];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3657], tmp_assign_source_1863);
    }
    {
        PyObject *tmp_assign_source_1864;
        tmp_assign_source_1864 = mod_consts[3658];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3659], tmp_assign_source_1864);
    }
    {
        PyObject *tmp_assign_source_1865;
        tmp_assign_source_1865 = mod_consts[3660];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3661], tmp_assign_source_1865);
    }
    {
        PyObject *tmp_assign_source_1866;
        tmp_assign_source_1866 = mod_consts[3662];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3663], tmp_assign_source_1866);
    }
    {
        PyObject *tmp_assign_source_1867;
        tmp_assign_source_1867 = mod_consts[3664];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3665], tmp_assign_source_1867);
    }
    {
        PyObject *tmp_assign_source_1868;
        tmp_assign_source_1868 = mod_consts[3666];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3667], tmp_assign_source_1868);
    }
    {
        PyObject *tmp_assign_source_1869;
        tmp_assign_source_1869 = mod_consts[3668];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3669], tmp_assign_source_1869);
    }
    {
        PyObject *tmp_assign_source_1870;
        tmp_assign_source_1870 = mod_consts[3670];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3671], tmp_assign_source_1870);
    }
    {
        PyObject *tmp_assign_source_1871;
        tmp_assign_source_1871 = mod_consts[3672];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3673], tmp_assign_source_1871);
    }
    {
        PyObject *tmp_assign_source_1872;
        tmp_assign_source_1872 = mod_consts[3674];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3675], tmp_assign_source_1872);
    }
    {
        PyObject *tmp_assign_source_1873;
        tmp_assign_source_1873 = mod_consts[3676];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3677], tmp_assign_source_1873);
    }
    {
        PyObject *tmp_assign_source_1874;
        tmp_assign_source_1874 = mod_consts[3678];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3679], tmp_assign_source_1874);
    }
    {
        PyObject *tmp_assign_source_1875;
        tmp_assign_source_1875 = mod_consts[3680];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3681], tmp_assign_source_1875);
    }
    {
        PyObject *tmp_assign_source_1876;
        tmp_assign_source_1876 = mod_consts[3682];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3683], tmp_assign_source_1876);
    }
    {
        PyObject *tmp_assign_source_1877;
        tmp_assign_source_1877 = mod_consts[3684];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3685], tmp_assign_source_1877);
    }
    {
        PyObject *tmp_assign_source_1878;
        tmp_assign_source_1878 = mod_consts[3686];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3687], tmp_assign_source_1878);
    }
    {
        PyObject *tmp_assign_source_1879;
        tmp_assign_source_1879 = mod_consts[3688];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3689], tmp_assign_source_1879);
    }
    {
        PyObject *tmp_assign_source_1880;
        tmp_assign_source_1880 = mod_consts[3690];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3691], tmp_assign_source_1880);
    }
    {
        PyObject *tmp_assign_source_1881;
        tmp_assign_source_1881 = mod_consts[3692];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3693], tmp_assign_source_1881);
    }
    {
        PyObject *tmp_assign_source_1882;
        tmp_assign_source_1882 = mod_consts[3694];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3695], tmp_assign_source_1882);
    }
    {
        PyObject *tmp_assign_source_1883;
        tmp_assign_source_1883 = mod_consts[3696];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3697], tmp_assign_source_1883);
    }
    {
        PyObject *tmp_assign_source_1884;
        tmp_assign_source_1884 = mod_consts[3698];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3699], tmp_assign_source_1884);
    }
    {
        PyObject *tmp_assign_source_1885;
        tmp_assign_source_1885 = mod_consts[3700];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3701], tmp_assign_source_1885);
    }
    {
        PyObject *tmp_assign_source_1886;
        tmp_assign_source_1886 = mod_consts[3702];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3703], tmp_assign_source_1886);
    }
    {
        PyObject *tmp_assign_source_1887;
        tmp_assign_source_1887 = mod_consts[3704];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3705], tmp_assign_source_1887);
    }
    {
        PyObject *tmp_assign_source_1888;
        tmp_assign_source_1888 = mod_consts[3706];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3707], tmp_assign_source_1888);
    }
    {
        PyObject *tmp_assign_source_1889;
        tmp_assign_source_1889 = mod_consts[3708];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3709], tmp_assign_source_1889);
    }
    {
        PyObject *tmp_assign_source_1890;
        tmp_assign_source_1890 = mod_consts[3710];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3711], tmp_assign_source_1890);
    }
    {
        PyObject *tmp_assign_source_1891;
        tmp_assign_source_1891 = mod_consts[3712];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3713], tmp_assign_source_1891);
    }
    {
        PyObject *tmp_assign_source_1892;
        tmp_assign_source_1892 = mod_consts[3714];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3715], tmp_assign_source_1892);
    }
    {
        PyObject *tmp_assign_source_1893;
        tmp_assign_source_1893 = mod_consts[3716];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3717], tmp_assign_source_1893);
    }
    {
        PyObject *tmp_assign_source_1894;
        tmp_assign_source_1894 = mod_consts[3718];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3719], tmp_assign_source_1894);
    }
    {
        PyObject *tmp_assign_source_1895;
        tmp_assign_source_1895 = mod_consts[3720];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3721], tmp_assign_source_1895);
    }
    {
        PyObject *tmp_assign_source_1896;
        tmp_assign_source_1896 = mod_consts[3722];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3723], tmp_assign_source_1896);
    }
    {
        PyObject *tmp_assign_source_1897;
        tmp_assign_source_1897 = mod_consts[3724];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3725], tmp_assign_source_1897);
    }
    {
        PyObject *tmp_assign_source_1898;
        tmp_assign_source_1898 = mod_consts[3726];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3727], tmp_assign_source_1898);
    }
    {
        PyObject *tmp_assign_source_1899;
        tmp_assign_source_1899 = mod_consts[3728];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3729], tmp_assign_source_1899);
    }
    {
        PyObject *tmp_assign_source_1900;
        tmp_assign_source_1900 = mod_consts[3730];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3731], tmp_assign_source_1900);
    }
    {
        PyObject *tmp_assign_source_1901;
        tmp_assign_source_1901 = mod_consts[3732];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3733], tmp_assign_source_1901);
    }
    {
        PyObject *tmp_assign_source_1902;
        tmp_assign_source_1902 = mod_consts[3734];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3735], tmp_assign_source_1902);
    }
    {
        PyObject *tmp_assign_source_1903;
        tmp_assign_source_1903 = mod_consts[3736];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3737], tmp_assign_source_1903);
    }
    {
        PyObject *tmp_assign_source_1904;
        tmp_assign_source_1904 = mod_consts[3738];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3739], tmp_assign_source_1904);
    }
    {
        PyObject *tmp_assign_source_1905;
        tmp_assign_source_1905 = mod_consts[3740];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3741], tmp_assign_source_1905);
    }
    {
        PyObject *tmp_assign_source_1906;
        tmp_assign_source_1906 = mod_consts[3742];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3743], tmp_assign_source_1906);
    }
    {
        PyObject *tmp_assign_source_1907;
        tmp_assign_source_1907 = mod_consts[3744];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3745], tmp_assign_source_1907);
    }
    {
        PyObject *tmp_assign_source_1908;
        tmp_assign_source_1908 = mod_consts[3746];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3747], tmp_assign_source_1908);
    }
    {
        PyObject *tmp_assign_source_1909;
        tmp_assign_source_1909 = mod_consts[3748];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3749], tmp_assign_source_1909);
    }
    {
        PyObject *tmp_assign_source_1910;
        tmp_assign_source_1910 = mod_consts[3750];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3751], tmp_assign_source_1910);
    }
    {
        PyObject *tmp_assign_source_1911;
        tmp_assign_source_1911 = mod_consts[3752];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3753], tmp_assign_source_1911);
    }
    {
        PyObject *tmp_assign_source_1912;
        tmp_assign_source_1912 = mod_consts[3754];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3755], tmp_assign_source_1912);
    }
    {
        PyObject *tmp_assign_source_1913;
        tmp_assign_source_1913 = mod_consts[3756];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3757], tmp_assign_source_1913);
    }
    {
        PyObject *tmp_assign_source_1914;
        tmp_assign_source_1914 = mod_consts[3758];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3759], tmp_assign_source_1914);
    }
    {
        PyObject *tmp_assign_source_1915;
        tmp_assign_source_1915 = mod_consts[3760];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3761], tmp_assign_source_1915);
    }
    {
        PyObject *tmp_assign_source_1916;
        tmp_assign_source_1916 = mod_consts[3762];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3763], tmp_assign_source_1916);
    }
    {
        PyObject *tmp_assign_source_1917;
        tmp_assign_source_1917 = mod_consts[3764];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3765], tmp_assign_source_1917);
    }
    {
        PyObject *tmp_assign_source_1918;
        tmp_assign_source_1918 = mod_consts[3766];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3767], tmp_assign_source_1918);
    }
    {
        PyObject *tmp_assign_source_1919;
        tmp_assign_source_1919 = mod_consts[3768];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3769], tmp_assign_source_1919);
    }
    {
        PyObject *tmp_assign_source_1920;
        tmp_assign_source_1920 = mod_consts[3770];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3771], tmp_assign_source_1920);
    }
    {
        PyObject *tmp_assign_source_1921;
        tmp_assign_source_1921 = mod_consts[3772];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3773], tmp_assign_source_1921);
    }
    {
        PyObject *tmp_assign_source_1922;
        tmp_assign_source_1922 = mod_consts[3774];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3775], tmp_assign_source_1922);
    }
    {
        PyObject *tmp_assign_source_1923;
        tmp_assign_source_1923 = mod_consts[3776];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3777], tmp_assign_source_1923);
    }
    {
        PyObject *tmp_assign_source_1924;
        tmp_assign_source_1924 = mod_consts[3778];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3779], tmp_assign_source_1924);
    }
    {
        PyObject *tmp_assign_source_1925;
        tmp_assign_source_1925 = mod_consts[3780];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3781], tmp_assign_source_1925);
    }
    {
        PyObject *tmp_assign_source_1926;
        tmp_assign_source_1926 = mod_consts[3782];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3783], tmp_assign_source_1926);
    }
    {
        PyObject *tmp_assign_source_1927;
        tmp_assign_source_1927 = mod_consts[3784];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3785], tmp_assign_source_1927);
    }
    {
        PyObject *tmp_assign_source_1928;
        tmp_assign_source_1928 = mod_consts[3786];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3787], tmp_assign_source_1928);
    }
    {
        PyObject *tmp_assign_source_1929;
        tmp_assign_source_1929 = mod_consts[3788];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3789], tmp_assign_source_1929);
    }
    {
        PyObject *tmp_assign_source_1930;
        tmp_assign_source_1930 = mod_consts[3790];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3791], tmp_assign_source_1930);
    }
    {
        PyObject *tmp_assign_source_1931;
        tmp_assign_source_1931 = mod_consts[3792];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3793], tmp_assign_source_1931);
    }
    {
        PyObject *tmp_assign_source_1932;
        tmp_assign_source_1932 = mod_consts[3794];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3795], tmp_assign_source_1932);
    }
    {
        PyObject *tmp_assign_source_1933;
        tmp_assign_source_1933 = mod_consts[3796];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3797], tmp_assign_source_1933);
    }
    {
        PyObject *tmp_assign_source_1934;
        tmp_assign_source_1934 = mod_consts[3798];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3799], tmp_assign_source_1934);
    }
    {
        PyObject *tmp_assign_source_1935;
        tmp_assign_source_1935 = mod_consts[3800];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3801], tmp_assign_source_1935);
    }
    {
        PyObject *tmp_assign_source_1936;
        tmp_assign_source_1936 = mod_consts[3802];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3803], tmp_assign_source_1936);
    }
    {
        PyObject *tmp_assign_source_1937;
        tmp_assign_source_1937 = mod_consts[3804];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3805], tmp_assign_source_1937);
    }
    {
        PyObject *tmp_assign_source_1938;
        tmp_assign_source_1938 = mod_consts[3806];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3807], tmp_assign_source_1938);
    }
    {
        PyObject *tmp_assign_source_1939;
        tmp_assign_source_1939 = mod_consts[3808];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3809], tmp_assign_source_1939);
    }
    {
        PyObject *tmp_assign_source_1940;
        tmp_assign_source_1940 = mod_consts[3810];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3811], tmp_assign_source_1940);
    }
    {
        PyObject *tmp_assign_source_1941;
        tmp_assign_source_1941 = mod_consts[3812];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3813], tmp_assign_source_1941);
    }
    {
        PyObject *tmp_assign_source_1942;
        tmp_assign_source_1942 = mod_consts[3814];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3815], tmp_assign_source_1942);
    }
    {
        PyObject *tmp_assign_source_1943;
        tmp_assign_source_1943 = mod_consts[3816];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3817], tmp_assign_source_1943);
    }
    {
        PyObject *tmp_assign_source_1944;
        tmp_assign_source_1944 = mod_consts[3818];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3819], tmp_assign_source_1944);
    }
    {
        PyObject *tmp_assign_source_1945;
        tmp_assign_source_1945 = mod_consts[3820];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3821], tmp_assign_source_1945);
    }
    {
        PyObject *tmp_assign_source_1946;
        tmp_assign_source_1946 = mod_consts[3822];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3823], tmp_assign_source_1946);
    }
    {
        PyObject *tmp_assign_source_1947;
        tmp_assign_source_1947 = mod_consts[3824];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3825], tmp_assign_source_1947);
    }
    {
        PyObject *tmp_assign_source_1948;
        tmp_assign_source_1948 = mod_consts[3826];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3827], tmp_assign_source_1948);
    }
    {
        PyObject *tmp_assign_source_1949;
        tmp_assign_source_1949 = mod_consts[3828];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3829], tmp_assign_source_1949);
    }
    {
        PyObject *tmp_assign_source_1950;
        tmp_assign_source_1950 = mod_consts[3830];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3831], tmp_assign_source_1950);
    }
    {
        PyObject *tmp_assign_source_1951;
        tmp_assign_source_1951 = mod_consts[3832];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3833], tmp_assign_source_1951);
    }
    {
        PyObject *tmp_assign_source_1952;
        tmp_assign_source_1952 = mod_consts[3834];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3835], tmp_assign_source_1952);
    }
    {
        PyObject *tmp_assign_source_1953;
        tmp_assign_source_1953 = mod_consts[3836];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3837], tmp_assign_source_1953);
    }
    {
        PyObject *tmp_assign_source_1954;
        tmp_assign_source_1954 = mod_consts[3838];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3839], tmp_assign_source_1954);
    }
    {
        PyObject *tmp_assign_source_1955;
        tmp_assign_source_1955 = mod_consts[3840];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3841], tmp_assign_source_1955);
    }
    {
        PyObject *tmp_assign_source_1956;
        tmp_assign_source_1956 = mod_consts[3842];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3843], tmp_assign_source_1956);
    }
    {
        PyObject *tmp_assign_source_1957;
        tmp_assign_source_1957 = mod_consts[3844];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3845], tmp_assign_source_1957);
    }
    {
        PyObject *tmp_assign_source_1958;
        tmp_assign_source_1958 = mod_consts[3846];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3847], tmp_assign_source_1958);
    }
    {
        PyObject *tmp_assign_source_1959;
        tmp_assign_source_1959 = mod_consts[3848];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3849], tmp_assign_source_1959);
    }
    {
        PyObject *tmp_assign_source_1960;
        tmp_assign_source_1960 = mod_consts[3850];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3851], tmp_assign_source_1960);
    }
    {
        PyObject *tmp_assign_source_1961;
        tmp_assign_source_1961 = mod_consts[3852];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3853], tmp_assign_source_1961);
    }
    {
        PyObject *tmp_assign_source_1962;
        tmp_assign_source_1962 = mod_consts[3854];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3855], tmp_assign_source_1962);
    }
    {
        PyObject *tmp_assign_source_1963;
        tmp_assign_source_1963 = mod_consts[2];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3856], tmp_assign_source_1963);
    }
    {
        PyObject *tmp_assign_source_1964;
        tmp_assign_source_1964 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3857], tmp_assign_source_1964);
    }
    {
        PyObject *tmp_assign_source_1965;


        tmp_assign_source_1965 = MAKE_FUNCTION_winerror$$$function__1_HRESULT_FROM_WIN32();

        UPDATE_STRING_DICT1(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3858], tmp_assign_source_1965);
    }
    {
        PyObject *tmp_assign_source_1966;


        tmp_assign_source_1966 = MAKE_FUNCTION_winerror$$$function__2_SUCCEEDED();

        UPDATE_STRING_DICT1(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3859], tmp_assign_source_1966);
    }
    {
        PyObject *tmp_assign_source_1967;


        tmp_assign_source_1967 = MAKE_FUNCTION_winerror$$$function__3_FAILED();

        UPDATE_STRING_DICT1(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3860], tmp_assign_source_1967);
    }
    {
        PyObject *tmp_assign_source_1968;


        tmp_assign_source_1968 = MAKE_FUNCTION_winerror$$$function__4_HRESULT_CODE();

        UPDATE_STRING_DICT1(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3861], tmp_assign_source_1968);
    }
    {
        PyObject *tmp_assign_source_1969;


        tmp_assign_source_1969 = MAKE_FUNCTION_winerror$$$function__5_SCODE_CODE();

        UPDATE_STRING_DICT1(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3862], tmp_assign_source_1969);
    }
    {
        PyObject *tmp_assign_source_1970;


        tmp_assign_source_1970 = MAKE_FUNCTION_winerror$$$function__6_HRESULT_FACILITY();

        UPDATE_STRING_DICT1(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3863], tmp_assign_source_1970);
    }
    {
        PyObject *tmp_assign_source_1971;


        tmp_assign_source_1971 = MAKE_FUNCTION_winerror$$$function__7_SCODE_FACILITY();

        UPDATE_STRING_DICT1(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3864], tmp_assign_source_1971);
    }
    {
        PyObject *tmp_assign_source_1972;


        tmp_assign_source_1972 = MAKE_FUNCTION_winerror$$$function__8_HRESULT_SEVERITY();

        UPDATE_STRING_DICT1(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3865], tmp_assign_source_1972);
    }
    {
        PyObject *tmp_assign_source_1973;


        tmp_assign_source_1973 = MAKE_FUNCTION_winerror$$$function__9_SCODE_SEVERITY();

        UPDATE_STRING_DICT1(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3866], tmp_assign_source_1973);
    }
    {
        PyObject *tmp_assign_source_1974;
        tmp_assign_source_1974 = mod_consts[3867];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_1974);
    }
    {
        PyObject *tmp_assign_source_1975;


        tmp_assign_source_1975 = MAKE_FUNCTION_winerror$$$function__10_HRESULT_FROM_NT();

        UPDATE_STRING_DICT1(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3868], tmp_assign_source_1975);
    }
    {
        PyObject *tmp_assign_source_1976;


        tmp_assign_source_1976 = MAKE_FUNCTION_winerror$$$function__11_GetScode();

        UPDATE_STRING_DICT1(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3869], tmp_assign_source_1976);
    }
    {
        PyObject *tmp_assign_source_1977;


        tmp_assign_source_1977 = MAKE_FUNCTION_winerror$$$function__12_ResultFromScode();

        UPDATE_STRING_DICT1(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3870], tmp_assign_source_1977);
    }
    {
        PyObject *tmp_assign_source_1978;
        tmp_assign_source_1978 = mod_consts[2];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3871], tmp_assign_source_1978);
    }
    {
        PyObject *tmp_assign_source_1979;
        tmp_assign_source_1979 = mod_consts[3872];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3873], tmp_assign_source_1979);
    }
    {
        PyObject *tmp_assign_source_1980;
        tmp_assign_source_1980 = mod_consts[3874];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3875], tmp_assign_source_1980);
    }
    {
        PyObject *tmp_assign_source_1981;
        tmp_assign_source_1981 = mod_consts[3876];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3877], tmp_assign_source_1981);
    }
    {
        PyObject *tmp_assign_source_1982;
        tmp_assign_source_1982 = mod_consts[3878];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3879], tmp_assign_source_1982);
    }
    {
        PyObject *tmp_assign_source_1983;
        tmp_assign_source_1983 = mod_consts[3880];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3881], tmp_assign_source_1983);
    }
    {
        PyObject *tmp_assign_source_1984;
        tmp_assign_source_1984 = mod_consts[3882];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3883], tmp_assign_source_1984);
    }
    {
        PyObject *tmp_assign_source_1985;
        tmp_assign_source_1985 = mod_consts[3884];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3885], tmp_assign_source_1985);
    }
    {
        PyObject *tmp_assign_source_1986;
        tmp_assign_source_1986 = mod_consts[3886];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3887], tmp_assign_source_1986);
    }
    {
        PyObject *tmp_assign_source_1987;
        tmp_assign_source_1987 = mod_consts[3888];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3889], tmp_assign_source_1987);
    }
    {
        PyObject *tmp_assign_source_1988;
        tmp_assign_source_1988 = mod_consts[3890];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3891], tmp_assign_source_1988);
    }
    {
        PyObject *tmp_assign_source_1989;
        tmp_assign_source_1989 = mod_consts[3892];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3893], tmp_assign_source_1989);
    }
    {
        PyObject *tmp_assign_source_1990;
        tmp_assign_source_1990 = mod_consts[3894];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3895], tmp_assign_source_1990);
    }
    {
        PyObject *tmp_assign_source_1991;
        tmp_assign_source_1991 = mod_consts[3896];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3897], tmp_assign_source_1991);
    }
    {
        PyObject *tmp_assign_source_1992;
        tmp_assign_source_1992 = mod_consts[3898];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3899], tmp_assign_source_1992);
    }
    {
        PyObject *tmp_assign_source_1993;
        tmp_assign_source_1993 = mod_consts[3900];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3901], tmp_assign_source_1993);
    }
    {
        PyObject *tmp_assign_source_1994;
        tmp_assign_source_1994 = mod_consts[3902];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3903], tmp_assign_source_1994);
    }
    {
        PyObject *tmp_assign_source_1995;
        tmp_assign_source_1995 = mod_consts[3904];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3905], tmp_assign_source_1995);
    }
    {
        PyObject *tmp_assign_source_1996;
        tmp_assign_source_1996 = mod_consts[3906];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3907], tmp_assign_source_1996);
    }
    {
        PyObject *tmp_assign_source_1997;
        tmp_assign_source_1997 = mod_consts[3908];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3909], tmp_assign_source_1997);
    }
    {
        PyObject *tmp_assign_source_1998;
        tmp_assign_source_1998 = mod_consts[3910];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3911], tmp_assign_source_1998);
    }
    {
        PyObject *tmp_assign_source_1999;
        tmp_assign_source_1999 = mod_consts[3912];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3913], tmp_assign_source_1999);
    }
    {
        PyObject *tmp_assign_source_2000;
        tmp_assign_source_2000 = mod_consts[3914];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3915], tmp_assign_source_2000);
    }
    {
        PyObject *tmp_assign_source_2001;
        tmp_assign_source_2001 = mod_consts[3916];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3917], tmp_assign_source_2001);
    }
    {
        PyObject *tmp_assign_source_2002;
        tmp_assign_source_2002 = mod_consts[3918];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3919], tmp_assign_source_2002);
    }
    {
        PyObject *tmp_assign_source_2003;
        tmp_assign_source_2003 = mod_consts[3920];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3921], tmp_assign_source_2003);
    }
    {
        PyObject *tmp_assign_source_2004;
        tmp_assign_source_2004 = mod_consts[3922];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3923], tmp_assign_source_2004);
    }
    {
        PyObject *tmp_assign_source_2005;
        tmp_assign_source_2005 = mod_consts[3924];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3925], tmp_assign_source_2005);
    }
    {
        PyObject *tmp_assign_source_2006;
        tmp_assign_source_2006 = mod_consts[3926];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3927], tmp_assign_source_2006);
    }
    {
        PyObject *tmp_assign_source_2007;
        tmp_assign_source_2007 = mod_consts[3928];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3929], tmp_assign_source_2007);
    }
    {
        PyObject *tmp_assign_source_2008;
        tmp_assign_source_2008 = mod_consts[3930];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3931], tmp_assign_source_2008);
    }
    {
        PyObject *tmp_assign_source_2009;
        tmp_assign_source_2009 = mod_consts[3932];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3933], tmp_assign_source_2009);
    }
    {
        PyObject *tmp_assign_source_2010;
        tmp_assign_source_2010 = mod_consts[3934];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3935], tmp_assign_source_2010);
    }
    {
        PyObject *tmp_assign_source_2011;
        tmp_assign_source_2011 = mod_consts[3936];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3937], tmp_assign_source_2011);
    }
    {
        PyObject *tmp_assign_source_2012;
        tmp_assign_source_2012 = mod_consts[3938];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3939], tmp_assign_source_2012);
    }
    {
        PyObject *tmp_assign_source_2013;
        tmp_assign_source_2013 = mod_consts[3940];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3941], tmp_assign_source_2013);
    }
    {
        PyObject *tmp_assign_source_2014;
        tmp_assign_source_2014 = mod_consts[3942];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3943], tmp_assign_source_2014);
    }
    {
        PyObject *tmp_assign_source_2015;
        tmp_assign_source_2015 = mod_consts[3944];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3945], tmp_assign_source_2015);
    }
    {
        PyObject *tmp_assign_source_2016;
        tmp_assign_source_2016 = mod_consts[3946];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3947], tmp_assign_source_2016);
    }
    {
        PyObject *tmp_assign_source_2017;
        tmp_assign_source_2017 = mod_consts[3948];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3949], tmp_assign_source_2017);
    }
    {
        PyObject *tmp_assign_source_2018;
        tmp_assign_source_2018 = mod_consts[3950];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3951], tmp_assign_source_2018);
    }
    {
        PyObject *tmp_assign_source_2019;
        tmp_assign_source_2019 = mod_consts[3952];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3953], tmp_assign_source_2019);
    }
    {
        PyObject *tmp_assign_source_2020;
        tmp_assign_source_2020 = mod_consts[3954];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3955], tmp_assign_source_2020);
    }
    {
        PyObject *tmp_assign_source_2021;
        tmp_assign_source_2021 = mod_consts[3956];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3957], tmp_assign_source_2021);
    }
    {
        PyObject *tmp_assign_source_2022;
        tmp_assign_source_2022 = mod_consts[3958];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3959], tmp_assign_source_2022);
    }
    {
        PyObject *tmp_assign_source_2023;
        tmp_assign_source_2023 = mod_consts[3960];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3961], tmp_assign_source_2023);
    }
    {
        PyObject *tmp_assign_source_2024;
        tmp_assign_source_2024 = mod_consts[3962];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3963], tmp_assign_source_2024);
    }
    {
        PyObject *tmp_assign_source_2025;
        tmp_assign_source_2025 = mod_consts[3964];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3965], tmp_assign_source_2025);
    }
    {
        PyObject *tmp_assign_source_2026;
        tmp_assign_source_2026 = mod_consts[3966];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3967], tmp_assign_source_2026);
    }
    {
        PyObject *tmp_assign_source_2027;
        tmp_assign_source_2027 = mod_consts[3968];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3969], tmp_assign_source_2027);
    }
    {
        PyObject *tmp_assign_source_2028;
        tmp_assign_source_2028 = mod_consts[3970];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3971], tmp_assign_source_2028);
    }
    {
        PyObject *tmp_assign_source_2029;
        tmp_assign_source_2029 = mod_consts[3972];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3973], tmp_assign_source_2029);
    }
    {
        PyObject *tmp_assign_source_2030;
        tmp_assign_source_2030 = mod_consts[3974];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3975], tmp_assign_source_2030);
    }
    {
        PyObject *tmp_assign_source_2031;
        tmp_assign_source_2031 = mod_consts[3976];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3977], tmp_assign_source_2031);
    }
    {
        PyObject *tmp_assign_source_2032;
        tmp_assign_source_2032 = mod_consts[3978];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3979], tmp_assign_source_2032);
    }
    {
        PyObject *tmp_assign_source_2033;
        tmp_assign_source_2033 = mod_consts[3972];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3980], tmp_assign_source_2033);
    }
    {
        PyObject *tmp_assign_source_2034;
        tmp_assign_source_2034 = mod_consts[3981];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3982], tmp_assign_source_2034);
    }
    {
        PyObject *tmp_assign_source_2035;
        tmp_assign_source_2035 = mod_consts[3983];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3984], tmp_assign_source_2035);
    }
    {
        PyObject *tmp_assign_source_2036;
        tmp_assign_source_2036 = mod_consts[3985];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3986], tmp_assign_source_2036);
    }
    {
        PyObject *tmp_assign_source_2037;
        tmp_assign_source_2037 = mod_consts[3987];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3988], tmp_assign_source_2037);
    }
    {
        PyObject *tmp_assign_source_2038;
        tmp_assign_source_2038 = mod_consts[3989];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3990], tmp_assign_source_2038);
    }
    {
        PyObject *tmp_assign_source_2039;
        tmp_assign_source_2039 = mod_consts[3991];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3992], tmp_assign_source_2039);
    }
    {
        PyObject *tmp_assign_source_2040;
        tmp_assign_source_2040 = mod_consts[3993];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3994], tmp_assign_source_2040);
    }
    {
        PyObject *tmp_assign_source_2041;
        tmp_assign_source_2041 = mod_consts[3995];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3996], tmp_assign_source_2041);
    }
    {
        PyObject *tmp_assign_source_2042;
        tmp_assign_source_2042 = mod_consts[3997];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3998], tmp_assign_source_2042);
    }
    {
        PyObject *tmp_assign_source_2043;
        tmp_assign_source_2043 = mod_consts[3999];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4000], tmp_assign_source_2043);
    }
    {
        PyObject *tmp_assign_source_2044;
        tmp_assign_source_2044 = mod_consts[4001];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4002], tmp_assign_source_2044);
    }
    {
        PyObject *tmp_assign_source_2045;
        tmp_assign_source_2045 = mod_consts[4003];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4004], tmp_assign_source_2045);
    }
    {
        PyObject *tmp_assign_source_2046;
        tmp_assign_source_2046 = mod_consts[4005];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4006], tmp_assign_source_2046);
    }
    {
        PyObject *tmp_assign_source_2047;
        tmp_assign_source_2047 = mod_consts[4007];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4008], tmp_assign_source_2047);
    }
    {
        PyObject *tmp_assign_source_2048;
        tmp_assign_source_2048 = mod_consts[4009];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4010], tmp_assign_source_2048);
    }
    {
        PyObject *tmp_assign_source_2049;
        tmp_assign_source_2049 = mod_consts[4011];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4012], tmp_assign_source_2049);
    }
    {
        PyObject *tmp_assign_source_2050;
        tmp_assign_source_2050 = mod_consts[4013];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4014], tmp_assign_source_2050);
    }
    {
        PyObject *tmp_assign_source_2051;
        tmp_assign_source_2051 = mod_consts[4015];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4016], tmp_assign_source_2051);
    }
    {
        PyObject *tmp_assign_source_2052;
        tmp_assign_source_2052 = mod_consts[4017];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4018], tmp_assign_source_2052);
    }
    {
        PyObject *tmp_assign_source_2053;
        tmp_assign_source_2053 = mod_consts[4019];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4020], tmp_assign_source_2053);
    }
    {
        PyObject *tmp_assign_source_2054;
        tmp_assign_source_2054 = mod_consts[4021];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4022], tmp_assign_source_2054);
    }
    {
        PyObject *tmp_assign_source_2055;
        tmp_assign_source_2055 = mod_consts[4023];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4024], tmp_assign_source_2055);
    }
    {
        PyObject *tmp_assign_source_2056;
        tmp_assign_source_2056 = mod_consts[4025];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4026], tmp_assign_source_2056);
    }
    {
        PyObject *tmp_assign_source_2057;
        tmp_assign_source_2057 = mod_consts[4027];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4028], tmp_assign_source_2057);
    }
    {
        PyObject *tmp_assign_source_2058;
        tmp_assign_source_2058 = mod_consts[4029];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4030], tmp_assign_source_2058);
    }
    {
        PyObject *tmp_assign_source_2059;
        tmp_assign_source_2059 = mod_consts[4031];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4032], tmp_assign_source_2059);
    }
    {
        PyObject *tmp_assign_source_2060;
        tmp_assign_source_2060 = mod_consts[4033];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4034], tmp_assign_source_2060);
    }
    {
        PyObject *tmp_assign_source_2061;
        tmp_assign_source_2061 = mod_consts[4035];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4036], tmp_assign_source_2061);
    }
    {
        PyObject *tmp_assign_source_2062;
        tmp_assign_source_2062 = mod_consts[4037];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4038], tmp_assign_source_2062);
    }
    {
        PyObject *tmp_assign_source_2063;
        tmp_assign_source_2063 = mod_consts[4039];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4040], tmp_assign_source_2063);
    }
    {
        PyObject *tmp_assign_source_2064;
        tmp_assign_source_2064 = mod_consts[4041];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4042], tmp_assign_source_2064);
    }
    {
        PyObject *tmp_assign_source_2065;
        tmp_assign_source_2065 = mod_consts[4043];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4044], tmp_assign_source_2065);
    }
    {
        PyObject *tmp_assign_source_2066;
        tmp_assign_source_2066 = mod_consts[4037];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4045], tmp_assign_source_2066);
    }
    {
        PyObject *tmp_assign_source_2067;
        tmp_assign_source_2067 = mod_consts[4046];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4047], tmp_assign_source_2067);
    }
    {
        PyObject *tmp_assign_source_2068;
        tmp_assign_source_2068 = mod_consts[4048];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4049], tmp_assign_source_2068);
    }
    {
        PyObject *tmp_assign_source_2069;
        tmp_assign_source_2069 = mod_consts[4050];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4051], tmp_assign_source_2069);
    }
    {
        PyObject *tmp_assign_source_2070;
        tmp_assign_source_2070 = mod_consts[4052];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4053], tmp_assign_source_2070);
    }
    {
        PyObject *tmp_assign_source_2071;
        tmp_assign_source_2071 = mod_consts[4054];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4055], tmp_assign_source_2071);
    }
    {
        PyObject *tmp_assign_source_2072;
        tmp_assign_source_2072 = mod_consts[4056];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4057], tmp_assign_source_2072);
    }
    {
        PyObject *tmp_assign_source_2073;
        tmp_assign_source_2073 = mod_consts[4050];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4058], tmp_assign_source_2073);
    }
    {
        PyObject *tmp_assign_source_2074;
        tmp_assign_source_2074 = mod_consts[4059];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4060], tmp_assign_source_2074);
    }
    {
        PyObject *tmp_assign_source_2075;
        tmp_assign_source_2075 = mod_consts[4061];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4062], tmp_assign_source_2075);
    }
    {
        PyObject *tmp_assign_source_2076;
        tmp_assign_source_2076 = mod_consts[4063];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4064], tmp_assign_source_2076);
    }
    {
        PyObject *tmp_assign_source_2077;
        tmp_assign_source_2077 = mod_consts[4065];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4066], tmp_assign_source_2077);
    }
    {
        PyObject *tmp_assign_source_2078;
        tmp_assign_source_2078 = mod_consts[4067];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4068], tmp_assign_source_2078);
    }
    {
        PyObject *tmp_assign_source_2079;
        tmp_assign_source_2079 = mod_consts[4069];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4070], tmp_assign_source_2079);
    }
    {
        PyObject *tmp_assign_source_2080;
        tmp_assign_source_2080 = mod_consts[4071];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4072], tmp_assign_source_2080);
    }
    {
        PyObject *tmp_assign_source_2081;
        tmp_assign_source_2081 = mod_consts[4073];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4074], tmp_assign_source_2081);
    }
    {
        PyObject *tmp_assign_source_2082;
        tmp_assign_source_2082 = mod_consts[4075];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4076], tmp_assign_source_2082);
    }
    {
        PyObject *tmp_assign_source_2083;
        tmp_assign_source_2083 = mod_consts[4077];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4078], tmp_assign_source_2083);
    }
    {
        PyObject *tmp_assign_source_2084;
        tmp_assign_source_2084 = mod_consts[4079];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4080], tmp_assign_source_2084);
    }
    {
        PyObject *tmp_assign_source_2085;
        tmp_assign_source_2085 = mod_consts[4081];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4082], tmp_assign_source_2085);
    }
    {
        PyObject *tmp_assign_source_2086;
        tmp_assign_source_2086 = mod_consts[4083];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4084], tmp_assign_source_2086);
    }
    {
        PyObject *tmp_assign_source_2087;
        tmp_assign_source_2087 = mod_consts[4085];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4086], tmp_assign_source_2087);
    }
    {
        PyObject *tmp_assign_source_2088;
        tmp_assign_source_2088 = mod_consts[4079];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4087], tmp_assign_source_2088);
    }
    {
        PyObject *tmp_assign_source_2089;
        tmp_assign_source_2089 = mod_consts[4088];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4089], tmp_assign_source_2089);
    }
    {
        PyObject *tmp_assign_source_2090;
        tmp_assign_source_2090 = mod_consts[4090];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4091], tmp_assign_source_2090);
    }
    {
        PyObject *tmp_assign_source_2091;
        tmp_assign_source_2091 = mod_consts[4092];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4093], tmp_assign_source_2091);
    }
    {
        PyObject *tmp_assign_source_2092;
        tmp_assign_source_2092 = mod_consts[4094];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4095], tmp_assign_source_2092);
    }
    {
        PyObject *tmp_assign_source_2093;
        tmp_assign_source_2093 = mod_consts[4088];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4096], tmp_assign_source_2093);
    }
    {
        PyObject *tmp_assign_source_2094;
        tmp_assign_source_2094 = mod_consts[4097];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4098], tmp_assign_source_2094);
    }
    {
        PyObject *tmp_assign_source_2095;
        tmp_assign_source_2095 = mod_consts[4099];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4100], tmp_assign_source_2095);
    }
    {
        PyObject *tmp_assign_source_2096;
        tmp_assign_source_2096 = mod_consts[4101];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4102], tmp_assign_source_2096);
    }
    {
        PyObject *tmp_assign_source_2097;
        tmp_assign_source_2097 = mod_consts[4103];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4104], tmp_assign_source_2097);
    }
    {
        PyObject *tmp_assign_source_2098;
        tmp_assign_source_2098 = mod_consts[4105];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4106], tmp_assign_source_2098);
    }
    {
        PyObject *tmp_assign_source_2099;
        tmp_assign_source_2099 = mod_consts[4107];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4108], tmp_assign_source_2099);
    }
    {
        PyObject *tmp_assign_source_2100;
        tmp_assign_source_2100 = mod_consts[4109];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4110], tmp_assign_source_2100);
    }
    {
        PyObject *tmp_assign_source_2101;
        tmp_assign_source_2101 = mod_consts[4107];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4111], tmp_assign_source_2101);
    }
    {
        PyObject *tmp_assign_source_2102;
        tmp_assign_source_2102 = mod_consts[4109];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4112], tmp_assign_source_2102);
    }
    {
        PyObject *tmp_assign_source_2103;
        tmp_assign_source_2103 = mod_consts[4113];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4114], tmp_assign_source_2103);
    }
    {
        PyObject *tmp_assign_source_2104;
        tmp_assign_source_2104 = mod_consts[4115];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4116], tmp_assign_source_2104);
    }
    {
        PyObject *tmp_assign_source_2105;
        tmp_assign_source_2105 = mod_consts[4113];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4117], tmp_assign_source_2105);
    }
    {
        PyObject *tmp_assign_source_2106;
        tmp_assign_source_2106 = mod_consts[4118];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4119], tmp_assign_source_2106);
    }
    {
        PyObject *tmp_assign_source_2107;
        tmp_assign_source_2107 = mod_consts[4120];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4121], tmp_assign_source_2107);
    }
    {
        PyObject *tmp_assign_source_2108;
        tmp_assign_source_2108 = mod_consts[4122];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4123], tmp_assign_source_2108);
    }
    {
        PyObject *tmp_assign_source_2109;
        tmp_assign_source_2109 = mod_consts[4115];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4124], tmp_assign_source_2109);
    }
    {
        PyObject *tmp_assign_source_2110;
        tmp_assign_source_2110 = mod_consts[4125];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4126], tmp_assign_source_2110);
    }
    {
        PyObject *tmp_assign_source_2111;
        tmp_assign_source_2111 = mod_consts[4127];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4128], tmp_assign_source_2111);
    }
    {
        PyObject *tmp_assign_source_2112;
        tmp_assign_source_2112 = mod_consts[4129];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4130], tmp_assign_source_2112);
    }
    {
        PyObject *tmp_assign_source_2113;
        tmp_assign_source_2113 = mod_consts[4131];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4132], tmp_assign_source_2113);
    }
    {
        PyObject *tmp_assign_source_2114;
        tmp_assign_source_2114 = mod_consts[4125];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4133], tmp_assign_source_2114);
    }
    {
        PyObject *tmp_assign_source_2115;
        tmp_assign_source_2115 = mod_consts[4134];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4135], tmp_assign_source_2115);
    }
    {
        PyObject *tmp_assign_source_2116;
        tmp_assign_source_2116 = mod_consts[4136];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4137], tmp_assign_source_2116);
    }
    {
        PyObject *tmp_assign_source_2117;
        tmp_assign_source_2117 = mod_consts[4138];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4139], tmp_assign_source_2117);
    }
    {
        PyObject *tmp_assign_source_2118;
        tmp_assign_source_2118 = mod_consts[4140];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4141], tmp_assign_source_2118);
    }
    {
        PyObject *tmp_assign_source_2119;
        tmp_assign_source_2119 = mod_consts[4134];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4142], tmp_assign_source_2119);
    }
    {
        PyObject *tmp_assign_source_2120;
        tmp_assign_source_2120 = mod_consts[4143];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4144], tmp_assign_source_2120);
    }
    {
        PyObject *tmp_assign_source_2121;
        tmp_assign_source_2121 = mod_consts[4145];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4146], tmp_assign_source_2121);
    }
    {
        PyObject *tmp_assign_source_2122;
        tmp_assign_source_2122 = mod_consts[4147];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4148], tmp_assign_source_2122);
    }
    {
        PyObject *tmp_assign_source_2123;
        tmp_assign_source_2123 = mod_consts[4149];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4150], tmp_assign_source_2123);
    }
    {
        PyObject *tmp_assign_source_2124;
        tmp_assign_source_2124 = mod_consts[4151];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4152], tmp_assign_source_2124);
    }
    {
        PyObject *tmp_assign_source_2125;
        tmp_assign_source_2125 = mod_consts[4153];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4154], tmp_assign_source_2125);
    }
    {
        PyObject *tmp_assign_source_2126;
        tmp_assign_source_2126 = mod_consts[4155];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4156], tmp_assign_source_2126);
    }
    {
        PyObject *tmp_assign_source_2127;
        tmp_assign_source_2127 = mod_consts[4153];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4157], tmp_assign_source_2127);
    }
    {
        PyObject *tmp_assign_source_2128;
        tmp_assign_source_2128 = mod_consts[4158];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4159], tmp_assign_source_2128);
    }
    {
        PyObject *tmp_assign_source_2129;
        tmp_assign_source_2129 = mod_consts[4160];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4161], tmp_assign_source_2129);
    }
    {
        PyObject *tmp_assign_source_2130;
        tmp_assign_source_2130 = mod_consts[4162];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4163], tmp_assign_source_2130);
    }
    {
        PyObject *tmp_assign_source_2131;
        tmp_assign_source_2131 = mod_consts[4164];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4165], tmp_assign_source_2131);
    }
    {
        PyObject *tmp_assign_source_2132;
        tmp_assign_source_2132 = mod_consts[4166];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4167], tmp_assign_source_2132);
    }
    {
        PyObject *tmp_assign_source_2133;
        tmp_assign_source_2133 = mod_consts[4168];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4169], tmp_assign_source_2133);
    }
    {
        PyObject *tmp_assign_source_2134;
        tmp_assign_source_2134 = mod_consts[4170];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4171], tmp_assign_source_2134);
    }
    {
        PyObject *tmp_assign_source_2135;
        tmp_assign_source_2135 = mod_consts[4172];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4173], tmp_assign_source_2135);
    }
    {
        PyObject *tmp_assign_source_2136;
        tmp_assign_source_2136 = mod_consts[4174];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4175], tmp_assign_source_2136);
    }
    {
        PyObject *tmp_assign_source_2137;
        tmp_assign_source_2137 = mod_consts[4176];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4177], tmp_assign_source_2137);
    }
    {
        PyObject *tmp_assign_source_2138;
        tmp_assign_source_2138 = mod_consts[4178];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4179], tmp_assign_source_2138);
    }
    {
        PyObject *tmp_assign_source_2139;
        tmp_assign_source_2139 = mod_consts[4172];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4180], tmp_assign_source_2139);
    }
    {
        PyObject *tmp_assign_source_2140;
        tmp_assign_source_2140 = mod_consts[4181];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4182], tmp_assign_source_2140);
    }
    {
        PyObject *tmp_assign_source_2141;
        tmp_assign_source_2141 = mod_consts[4183];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4184], tmp_assign_source_2141);
    }
    {
        PyObject *tmp_assign_source_2142;
        tmp_assign_source_2142 = mod_consts[4185];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4186], tmp_assign_source_2142);
    }
    {
        PyObject *tmp_assign_source_2143;
        tmp_assign_source_2143 = mod_consts[4187];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4188], tmp_assign_source_2143);
    }
    {
        PyObject *tmp_assign_source_2144;
        tmp_assign_source_2144 = mod_consts[4189];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4190], tmp_assign_source_2144);
    }
    {
        PyObject *tmp_assign_source_2145;
        tmp_assign_source_2145 = mod_consts[4191];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4192], tmp_assign_source_2145);
    }
    {
        PyObject *tmp_assign_source_2146;
        tmp_assign_source_2146 = mod_consts[4193];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4194], tmp_assign_source_2146);
    }
    {
        PyObject *tmp_assign_source_2147;
        tmp_assign_source_2147 = mod_consts[4195];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4196], tmp_assign_source_2147);
    }
    {
        PyObject *tmp_assign_source_2148;
        tmp_assign_source_2148 = mod_consts[4197];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4198], tmp_assign_source_2148);
    }
    {
        PyObject *tmp_assign_source_2149;
        tmp_assign_source_2149 = mod_consts[4199];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4200], tmp_assign_source_2149);
    }
    {
        PyObject *tmp_assign_source_2150;
        tmp_assign_source_2150 = mod_consts[4193];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4201], tmp_assign_source_2150);
    }
    {
        PyObject *tmp_assign_source_2151;
        tmp_assign_source_2151 = mod_consts[4202];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4203], tmp_assign_source_2151);
    }
    {
        PyObject *tmp_assign_source_2152;
        tmp_assign_source_2152 = mod_consts[4204];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4205], tmp_assign_source_2152);
    }
    {
        PyObject *tmp_assign_source_2153;
        tmp_assign_source_2153 = mod_consts[4206];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4207], tmp_assign_source_2153);
    }
    {
        PyObject *tmp_assign_source_2154;
        tmp_assign_source_2154 = mod_consts[4208];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4209], tmp_assign_source_2154);
    }
    {
        PyObject *tmp_assign_source_2155;
        tmp_assign_source_2155 = mod_consts[4210];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4211], tmp_assign_source_2155);
    }
    {
        PyObject *tmp_assign_source_2156;
        tmp_assign_source_2156 = mod_consts[4212];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4213], tmp_assign_source_2156);
    }
    {
        PyObject *tmp_assign_source_2157;
        tmp_assign_source_2157 = mod_consts[4214];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4215], tmp_assign_source_2157);
    }
    {
        PyObject *tmp_assign_source_2158;
        tmp_assign_source_2158 = mod_consts[4216];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4217], tmp_assign_source_2158);
    }
    {
        PyObject *tmp_assign_source_2159;
        tmp_assign_source_2159 = mod_consts[4210];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4218], tmp_assign_source_2159);
    }
    {
        PyObject *tmp_assign_source_2160;
        tmp_assign_source_2160 = mod_consts[4219];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4220], tmp_assign_source_2160);
    }
    {
        PyObject *tmp_assign_source_2161;
        tmp_assign_source_2161 = mod_consts[4221];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4222], tmp_assign_source_2161);
    }
    {
        PyObject *tmp_assign_source_2162;
        tmp_assign_source_2162 = mod_consts[4223];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4224], tmp_assign_source_2162);
    }
    {
        PyObject *tmp_assign_source_2163;
        tmp_assign_source_2163 = mod_consts[4225];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4226], tmp_assign_source_2163);
    }
    {
        PyObject *tmp_assign_source_2164;
        tmp_assign_source_2164 = mod_consts[4227];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4228], tmp_assign_source_2164);
    }
    {
        PyObject *tmp_assign_source_2165;
        tmp_assign_source_2165 = mod_consts[4229];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4230], tmp_assign_source_2165);
    }
    {
        PyObject *tmp_assign_source_2166;
        tmp_assign_source_2166 = mod_consts[4231];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4232], tmp_assign_source_2166);
    }
    {
        PyObject *tmp_assign_source_2167;
        tmp_assign_source_2167 = mod_consts[4233];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4234], tmp_assign_source_2167);
    }
    {
        PyObject *tmp_assign_source_2168;
        tmp_assign_source_2168 = mod_consts[4235];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4236], tmp_assign_source_2168);
    }
    {
        PyObject *tmp_assign_source_2169;
        tmp_assign_source_2169 = mod_consts[4237];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4238], tmp_assign_source_2169);
    }
    {
        PyObject *tmp_assign_source_2170;
        tmp_assign_source_2170 = mod_consts[4239];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4240], tmp_assign_source_2170);
    }
    {
        PyObject *tmp_assign_source_2171;
        tmp_assign_source_2171 = mod_consts[4241];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4242], tmp_assign_source_2171);
    }
    {
        PyObject *tmp_assign_source_2172;
        tmp_assign_source_2172 = mod_consts[4243];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4244], tmp_assign_source_2172);
    }
    {
        PyObject *tmp_assign_source_2173;
        tmp_assign_source_2173 = mod_consts[4245];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4246], tmp_assign_source_2173);
    }
    {
        PyObject *tmp_assign_source_2174;
        tmp_assign_source_2174 = mod_consts[4212];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4247], tmp_assign_source_2174);
    }
    {
        PyObject *tmp_assign_source_2175;
        tmp_assign_source_2175 = mod_consts[4248];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4249], tmp_assign_source_2175);
    }
    {
        PyObject *tmp_assign_source_2176;
        tmp_assign_source_2176 = mod_consts[4250];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4251], tmp_assign_source_2176);
    }
    {
        PyObject *tmp_assign_source_2177;
        tmp_assign_source_2177 = mod_consts[4252];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4253], tmp_assign_source_2177);
    }
    {
        PyObject *tmp_assign_source_2178;
        tmp_assign_source_2178 = mod_consts[4254];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4255], tmp_assign_source_2178);
    }
    {
        PyObject *tmp_assign_source_2179;
        tmp_assign_source_2179 = mod_consts[4248];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4256], tmp_assign_source_2179);
    }
    {
        PyObject *tmp_assign_source_2180;
        tmp_assign_source_2180 = mod_consts[4257];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4258], tmp_assign_source_2180);
    }
    {
        PyObject *tmp_assign_source_2181;
        tmp_assign_source_2181 = mod_consts[4259];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4260], tmp_assign_source_2181);
    }
    {
        PyObject *tmp_assign_source_2182;
        tmp_assign_source_2182 = mod_consts[4261];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4262], tmp_assign_source_2182);
    }
    {
        PyObject *tmp_assign_source_2183;
        tmp_assign_source_2183 = mod_consts[4263];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4264], tmp_assign_source_2183);
    }
    {
        PyObject *tmp_assign_source_2184;
        tmp_assign_source_2184 = mod_consts[4265];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4266], tmp_assign_source_2184);
    }
    {
        PyObject *tmp_assign_source_2185;
        tmp_assign_source_2185 = mod_consts[4267];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4268], tmp_assign_source_2185);
    }
    {
        PyObject *tmp_assign_source_2186;
        tmp_assign_source_2186 = mod_consts[4269];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4270], tmp_assign_source_2186);
    }
    {
        PyObject *tmp_assign_source_2187;
        tmp_assign_source_2187 = mod_consts[4271];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4272], tmp_assign_source_2187);
    }
    {
        PyObject *tmp_assign_source_2188;
        tmp_assign_source_2188 = mod_consts[4273];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4274], tmp_assign_source_2188);
    }
    {
        PyObject *tmp_assign_source_2189;
        tmp_assign_source_2189 = mod_consts[4275];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4276], tmp_assign_source_2189);
    }
    {
        PyObject *tmp_assign_source_2190;
        tmp_assign_source_2190 = mod_consts[4277];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4278], tmp_assign_source_2190);
    }
    {
        PyObject *tmp_assign_source_2191;
        tmp_assign_source_2191 = mod_consts[4279];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4280], tmp_assign_source_2191);
    }
    {
        PyObject *tmp_assign_source_2192;
        tmp_assign_source_2192 = mod_consts[4281];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4282], tmp_assign_source_2192);
    }
    {
        PyObject *tmp_assign_source_2193;
        tmp_assign_source_2193 = mod_consts[4283];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4284], tmp_assign_source_2193);
    }
    {
        PyObject *tmp_assign_source_2194;
        tmp_assign_source_2194 = mod_consts[4250];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4285], tmp_assign_source_2194);
    }
    {
        PyObject *tmp_assign_source_2195;
        tmp_assign_source_2195 = mod_consts[4286];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4287], tmp_assign_source_2195);
    }
    {
        PyObject *tmp_assign_source_2196;
        tmp_assign_source_2196 = mod_consts[4288];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4289], tmp_assign_source_2196);
    }
    {
        PyObject *tmp_assign_source_2197;
        tmp_assign_source_2197 = mod_consts[4290];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4291], tmp_assign_source_2197);
    }
    {
        PyObject *tmp_assign_source_2198;
        tmp_assign_source_2198 = mod_consts[4292];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4293], tmp_assign_source_2198);
    }
    {
        PyObject *tmp_assign_source_2199;
        tmp_assign_source_2199 = mod_consts[4294];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4295], tmp_assign_source_2199);
    }
    {
        PyObject *tmp_assign_source_2200;
        tmp_assign_source_2200 = mod_consts[4296];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4297], tmp_assign_source_2200);
    }
    {
        PyObject *tmp_assign_source_2201;
        tmp_assign_source_2201 = mod_consts[4298];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4299], tmp_assign_source_2201);
    }
    {
        PyObject *tmp_assign_source_2202;
        tmp_assign_source_2202 = mod_consts[4300];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4301], tmp_assign_source_2202);
    }
    {
        PyObject *tmp_assign_source_2203;
        tmp_assign_source_2203 = mod_consts[4302];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4303], tmp_assign_source_2203);
    }
    {
        PyObject *tmp_assign_source_2204;
        tmp_assign_source_2204 = mod_consts[4304];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4305], tmp_assign_source_2204);
    }
    {
        PyObject *tmp_assign_source_2205;
        tmp_assign_source_2205 = mod_consts[4306];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4307], tmp_assign_source_2205);
    }
    {
        PyObject *tmp_assign_source_2206;
        tmp_assign_source_2206 = mod_consts[4308];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4309], tmp_assign_source_2206);
    }
    {
        PyObject *tmp_assign_source_2207;
        tmp_assign_source_2207 = mod_consts[4310];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4311], tmp_assign_source_2207);
    }
    {
        PyObject *tmp_assign_source_2208;
        tmp_assign_source_2208 = mod_consts[4312];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4313], tmp_assign_source_2208);
    }
    {
        PyObject *tmp_assign_source_2209;
        tmp_assign_source_2209 = mod_consts[4314];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4315], tmp_assign_source_2209);
    }
    {
        PyObject *tmp_assign_source_2210;
        tmp_assign_source_2210 = mod_consts[4316];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4317], tmp_assign_source_2210);
    }
    {
        PyObject *tmp_assign_source_2211;
        tmp_assign_source_2211 = mod_consts[4318];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4319], tmp_assign_source_2211);
    }
    {
        PyObject *tmp_assign_source_2212;
        tmp_assign_source_2212 = mod_consts[4320];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4321], tmp_assign_source_2212);
    }
    {
        PyObject *tmp_assign_source_2213;
        tmp_assign_source_2213 = mod_consts[4322];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4323], tmp_assign_source_2213);
    }
    {
        PyObject *tmp_assign_source_2214;
        tmp_assign_source_2214 = mod_consts[4324];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4325], tmp_assign_source_2214);
    }
    {
        PyObject *tmp_assign_source_2215;
        tmp_assign_source_2215 = mod_consts[4326];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4327], tmp_assign_source_2215);
    }
    {
        PyObject *tmp_assign_source_2216;
        tmp_assign_source_2216 = mod_consts[4328];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4329], tmp_assign_source_2216);
    }
    {
        PyObject *tmp_assign_source_2217;
        tmp_assign_source_2217 = mod_consts[4330];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4331], tmp_assign_source_2217);
    }
    {
        PyObject *tmp_assign_source_2218;
        tmp_assign_source_2218 = mod_consts[4332];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4333], tmp_assign_source_2218);
    }
    {
        PyObject *tmp_assign_source_2219;
        tmp_assign_source_2219 = mod_consts[4334];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4335], tmp_assign_source_2219);
    }
    {
        PyObject *tmp_assign_source_2220;
        tmp_assign_source_2220 = mod_consts[4336];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4337], tmp_assign_source_2220);
    }
    {
        PyObject *tmp_assign_source_2221;
        tmp_assign_source_2221 = mod_consts[4338];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4339], tmp_assign_source_2221);
    }
    {
        PyObject *tmp_assign_source_2222;
        tmp_assign_source_2222 = mod_consts[4340];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4341], tmp_assign_source_2222);
    }
    {
        PyObject *tmp_assign_source_2223;
        tmp_assign_source_2223 = mod_consts[3976];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4342], tmp_assign_source_2223);
    }
    {
        PyObject *tmp_assign_source_2224;
        tmp_assign_source_2224 = mod_consts[4343];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4344], tmp_assign_source_2224);
    }
    {
        PyObject *tmp_assign_source_2225;
        tmp_assign_source_2225 = mod_consts[4345];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4346], tmp_assign_source_2225);
    }
    {
        PyObject *tmp_assign_source_2226;
        tmp_assign_source_2226 = mod_consts[4041];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4347], tmp_assign_source_2226);
    }
    {
        PyObject *tmp_assign_source_2227;
        tmp_assign_source_2227 = mod_consts[4348];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4349], tmp_assign_source_2227);
    }
    {
        PyObject *tmp_assign_source_2228;
        tmp_assign_source_2228 = mod_consts[4350];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4351], tmp_assign_source_2228);
    }
    {
        PyObject *tmp_assign_source_2229;
        tmp_assign_source_2229 = mod_consts[4075];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4352], tmp_assign_source_2229);
    }
    {
        PyObject *tmp_assign_source_2230;
        tmp_assign_source_2230 = mod_consts[4083];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4353], tmp_assign_source_2230);
    }
    {
        PyObject *tmp_assign_source_2231;
        tmp_assign_source_2231 = mod_consts[4129];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4354], tmp_assign_source_2231);
    }
    {
        PyObject *tmp_assign_source_2232;
        tmp_assign_source_2232 = mod_consts[4355];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4356], tmp_assign_source_2232);
    }
    {
        PyObject *tmp_assign_source_2233;
        tmp_assign_source_2233 = mod_consts[4357];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4358], tmp_assign_source_2233);
    }
    {
        PyObject *tmp_assign_source_2234;
        tmp_assign_source_2234 = mod_consts[4138];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4359], tmp_assign_source_2234);
    }
    {
        PyObject *tmp_assign_source_2235;
        tmp_assign_source_2235 = mod_consts[4360];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4361], tmp_assign_source_2235);
    }
    {
        PyObject *tmp_assign_source_2236;
        tmp_assign_source_2236 = mod_consts[4362];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4363], tmp_assign_source_2236);
    }
    {
        PyObject *tmp_assign_source_2237;
        tmp_assign_source_2237 = mod_consts[4160];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4364], tmp_assign_source_2237);
    }
    {
        PyObject *tmp_assign_source_2238;
        tmp_assign_source_2238 = mod_consts[4176];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4365], tmp_assign_source_2238);
    }
    {
        PyObject *tmp_assign_source_2239;
        tmp_assign_source_2239 = mod_consts[4366];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4367], tmp_assign_source_2239);
    }
    {
        PyObject *tmp_assign_source_2240;
        tmp_assign_source_2240 = mod_consts[4368];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4369], tmp_assign_source_2240);
    }
    {
        PyObject *tmp_assign_source_2241;
        tmp_assign_source_2241 = mod_consts[4370];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4371], tmp_assign_source_2241);
    }
    {
        PyObject *tmp_assign_source_2242;
        tmp_assign_source_2242 = mod_consts[4372];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4373], tmp_assign_source_2242);
    }
    {
        PyObject *tmp_assign_source_2243;
        tmp_assign_source_2243 = mod_consts[4374];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4375], tmp_assign_source_2243);
    }
    {
        PyObject *tmp_assign_source_2244;
        tmp_assign_source_2244 = mod_consts[4376];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4377], tmp_assign_source_2244);
    }
    {
        PyObject *tmp_assign_source_2245;
        tmp_assign_source_2245 = mod_consts[4378];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4379], tmp_assign_source_2245);
    }
    {
        PyObject *tmp_assign_source_2246;
        tmp_assign_source_2246 = mod_consts[4380];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4381], tmp_assign_source_2246);
    }
    {
        PyObject *tmp_assign_source_2247;
        tmp_assign_source_2247 = mod_consts[4382];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4383], tmp_assign_source_2247);
    }
    {
        PyObject *tmp_assign_source_2248;
        tmp_assign_source_2248 = mod_consts[4384];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4385], tmp_assign_source_2248);
    }
    {
        PyObject *tmp_assign_source_2249;
        tmp_assign_source_2249 = mod_consts[4386];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4387], tmp_assign_source_2249);
    }
    {
        PyObject *tmp_assign_source_2250;
        tmp_assign_source_2250 = mod_consts[4388];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4389], tmp_assign_source_2250);
    }
    {
        PyObject *tmp_assign_source_2251;
        tmp_assign_source_2251 = mod_consts[4390];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4391], tmp_assign_source_2251);
    }
    {
        PyObject *tmp_assign_source_2252;
        tmp_assign_source_2252 = mod_consts[4392];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4393], tmp_assign_source_2252);
    }
    {
        PyObject *tmp_assign_source_2253;
        tmp_assign_source_2253 = mod_consts[4394];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4395], tmp_assign_source_2253);
    }
    {
        PyObject *tmp_assign_source_2254;
        tmp_assign_source_2254 = mod_consts[4396];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4397], tmp_assign_source_2254);
    }
    {
        PyObject *tmp_assign_source_2255;
        tmp_assign_source_2255 = mod_consts[4398];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4399], tmp_assign_source_2255);
    }
    {
        PyObject *tmp_assign_source_2256;
        tmp_assign_source_2256 = mod_consts[4400];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4401], tmp_assign_source_2256);
    }
    {
        PyObject *tmp_assign_source_2257;
        tmp_assign_source_2257 = mod_consts[4402];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4403], tmp_assign_source_2257);
    }
    {
        PyObject *tmp_assign_source_2258;
        tmp_assign_source_2258 = mod_consts[4404];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4405], tmp_assign_source_2258);
    }
    {
        PyObject *tmp_assign_source_2259;
        tmp_assign_source_2259 = mod_consts[4406];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4407], tmp_assign_source_2259);
    }
    {
        PyObject *tmp_assign_source_2260;
        tmp_assign_source_2260 = mod_consts[4408];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4409], tmp_assign_source_2260);
    }
    {
        PyObject *tmp_assign_source_2261;
        tmp_assign_source_2261 = mod_consts[4410];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4411], tmp_assign_source_2261);
    }
    {
        PyObject *tmp_assign_source_2262;
        tmp_assign_source_2262 = mod_consts[4412];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4413], tmp_assign_source_2262);
    }
    {
        PyObject *tmp_assign_source_2263;
        tmp_assign_source_2263 = mod_consts[4414];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4415], tmp_assign_source_2263);
    }
    {
        PyObject *tmp_assign_source_2264;
        tmp_assign_source_2264 = mod_consts[4416];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4417], tmp_assign_source_2264);
    }
    {
        PyObject *tmp_assign_source_2265;
        tmp_assign_source_2265 = mod_consts[4418];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4419], tmp_assign_source_2265);
    }
    {
        PyObject *tmp_assign_source_2266;
        tmp_assign_source_2266 = mod_consts[4420];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4421], tmp_assign_source_2266);
    }
    {
        PyObject *tmp_assign_source_2267;
        tmp_assign_source_2267 = mod_consts[4422];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4423], tmp_assign_source_2267);
    }
    {
        PyObject *tmp_assign_source_2268;
        tmp_assign_source_2268 = mod_consts[4424];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4425], tmp_assign_source_2268);
    }
    {
        PyObject *tmp_assign_source_2269;
        tmp_assign_source_2269 = mod_consts[4426];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4427], tmp_assign_source_2269);
    }
    {
        PyObject *tmp_assign_source_2270;
        tmp_assign_source_2270 = mod_consts[4428];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4429], tmp_assign_source_2270);
    }
    {
        PyObject *tmp_assign_source_2271;
        tmp_assign_source_2271 = mod_consts[4430];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4431], tmp_assign_source_2271);
    }
    {
        PyObject *tmp_assign_source_2272;
        tmp_assign_source_2272 = mod_consts[4432];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4433], tmp_assign_source_2272);
    }
    {
        PyObject *tmp_assign_source_2273;
        tmp_assign_source_2273 = mod_consts[4434];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4435], tmp_assign_source_2273);
    }
    {
        PyObject *tmp_assign_source_2274;
        tmp_assign_source_2274 = mod_consts[4436];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4437], tmp_assign_source_2274);
    }
    {
        PyObject *tmp_assign_source_2275;
        tmp_assign_source_2275 = mod_consts[4438];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4439], tmp_assign_source_2275);
    }
    {
        PyObject *tmp_assign_source_2276;
        tmp_assign_source_2276 = mod_consts[4440];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4441], tmp_assign_source_2276);
    }
    {
        PyObject *tmp_assign_source_2277;
        tmp_assign_source_2277 = mod_consts[4442];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4443], tmp_assign_source_2277);
    }
    {
        PyObject *tmp_assign_source_2278;
        tmp_assign_source_2278 = mod_consts[4444];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4445], tmp_assign_source_2278);
    }
    {
        PyObject *tmp_assign_source_2279;
        tmp_assign_source_2279 = mod_consts[4446];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4447], tmp_assign_source_2279);
    }
    {
        PyObject *tmp_assign_source_2280;
        tmp_assign_source_2280 = mod_consts[4448];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4449], tmp_assign_source_2280);
    }
    {
        PyObject *tmp_assign_source_2281;
        tmp_assign_source_2281 = mod_consts[4450];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4451], tmp_assign_source_2281);
    }
    {
        PyObject *tmp_assign_source_2282;
        tmp_assign_source_2282 = mod_consts[4452];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4453], tmp_assign_source_2282);
    }
    {
        PyObject *tmp_assign_source_2283;
        tmp_assign_source_2283 = mod_consts[4454];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4455], tmp_assign_source_2283);
    }
    {
        PyObject *tmp_assign_source_2284;
        tmp_assign_source_2284 = mod_consts[4456];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4457], tmp_assign_source_2284);
    }
    {
        PyObject *tmp_assign_source_2285;
        tmp_assign_source_2285 = mod_consts[4458];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4459], tmp_assign_source_2285);
    }
    {
        PyObject *tmp_assign_source_2286;
        tmp_assign_source_2286 = mod_consts[4460];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4461], tmp_assign_source_2286);
    }
    {
        PyObject *tmp_assign_source_2287;
        tmp_assign_source_2287 = mod_consts[4462];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4463], tmp_assign_source_2287);
    }
    {
        PyObject *tmp_assign_source_2288;
        tmp_assign_source_2288 = mod_consts[4464];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4465], tmp_assign_source_2288);
    }
    {
        PyObject *tmp_assign_source_2289;
        tmp_assign_source_2289 = mod_consts[4466];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4467], tmp_assign_source_2289);
    }
    {
        PyObject *tmp_assign_source_2290;
        tmp_assign_source_2290 = mod_consts[4468];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4469], tmp_assign_source_2290);
    }
    {
        PyObject *tmp_assign_source_2291;
        tmp_assign_source_2291 = mod_consts[4470];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4471], tmp_assign_source_2291);
    }
    {
        PyObject *tmp_assign_source_2292;
        tmp_assign_source_2292 = mod_consts[4472];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4473], tmp_assign_source_2292);
    }
    {
        PyObject *tmp_assign_source_2293;
        tmp_assign_source_2293 = mod_consts[4474];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4475], tmp_assign_source_2293);
    }
    {
        PyObject *tmp_assign_source_2294;
        tmp_assign_source_2294 = mod_consts[4476];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4477], tmp_assign_source_2294);
    }
    {
        PyObject *tmp_assign_source_2295;
        tmp_assign_source_2295 = mod_consts[4478];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4479], tmp_assign_source_2295);
    }
    {
        PyObject *tmp_assign_source_2296;
        tmp_assign_source_2296 = mod_consts[4480];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4481], tmp_assign_source_2296);
    }
    {
        PyObject *tmp_assign_source_2297;
        tmp_assign_source_2297 = mod_consts[4482];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4483], tmp_assign_source_2297);
    }
    {
        PyObject *tmp_assign_source_2298;
        tmp_assign_source_2298 = mod_consts[4484];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4485], tmp_assign_source_2298);
    }
    {
        PyObject *tmp_assign_source_2299;
        tmp_assign_source_2299 = mod_consts[4486];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4487], tmp_assign_source_2299);
    }
    {
        PyObject *tmp_assign_source_2300;
        tmp_assign_source_2300 = mod_consts[4488];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4489], tmp_assign_source_2300);
    }
    {
        PyObject *tmp_assign_source_2301;
        tmp_assign_source_2301 = mod_consts[4490];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4491], tmp_assign_source_2301);
    }
    {
        PyObject *tmp_assign_source_2302;
        tmp_assign_source_2302 = mod_consts[4492];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4493], tmp_assign_source_2302);
    }
    {
        PyObject *tmp_assign_source_2303;
        tmp_assign_source_2303 = mod_consts[4494];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4495], tmp_assign_source_2303);
    }
    {
        PyObject *tmp_assign_source_2304;
        tmp_assign_source_2304 = mod_consts[4496];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4497], tmp_assign_source_2304);
    }
    {
        PyObject *tmp_assign_source_2305;
        tmp_assign_source_2305 = mod_consts[4498];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4499], tmp_assign_source_2305);
    }
    {
        PyObject *tmp_assign_source_2306;
        tmp_assign_source_2306 = mod_consts[4500];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4501], tmp_assign_source_2306);
    }
    {
        PyObject *tmp_assign_source_2307;
        tmp_assign_source_2307 = mod_consts[4502];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4503], tmp_assign_source_2307);
    }
    {
        PyObject *tmp_assign_source_2308;
        tmp_assign_source_2308 = mod_consts[4504];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4505], tmp_assign_source_2308);
    }
    {
        PyObject *tmp_assign_source_2309;
        tmp_assign_source_2309 = mod_consts[4506];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4507], tmp_assign_source_2309);
    }
    {
        PyObject *tmp_assign_source_2310;
        tmp_assign_source_2310 = mod_consts[4508];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4509], tmp_assign_source_2310);
    }
    {
        PyObject *tmp_assign_source_2311;
        tmp_assign_source_2311 = mod_consts[4510];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4511], tmp_assign_source_2311);
    }
    {
        PyObject *tmp_assign_source_2312;
        tmp_assign_source_2312 = mod_consts[4512];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4513], tmp_assign_source_2312);
    }
    {
        PyObject *tmp_assign_source_2313;
        tmp_assign_source_2313 = mod_consts[4514];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4515], tmp_assign_source_2313);
    }
    {
        PyObject *tmp_assign_source_2314;
        tmp_assign_source_2314 = mod_consts[4516];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4517], tmp_assign_source_2314);
    }
    {
        PyObject *tmp_assign_source_2315;
        tmp_assign_source_2315 = mod_consts[4518];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4519], tmp_assign_source_2315);
    }
    {
        PyObject *tmp_assign_source_2316;
        tmp_assign_source_2316 = mod_consts[4520];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4521], tmp_assign_source_2316);
    }
    {
        PyObject *tmp_assign_source_2317;
        tmp_assign_source_2317 = mod_consts[4522];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4523], tmp_assign_source_2317);
    }
    {
        PyObject *tmp_assign_source_2318;
        tmp_assign_source_2318 = mod_consts[4524];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4525], tmp_assign_source_2318);
    }
    {
        PyObject *tmp_assign_source_2319;
        tmp_assign_source_2319 = mod_consts[4526];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4527], tmp_assign_source_2319);
    }
    {
        PyObject *tmp_assign_source_2320;
        tmp_assign_source_2320 = mod_consts[4528];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4529], tmp_assign_source_2320);
    }
    {
        PyObject *tmp_assign_source_2321;
        tmp_assign_source_2321 = mod_consts[4530];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4531], tmp_assign_source_2321);
    }
    {
        PyObject *tmp_assign_source_2322;
        tmp_assign_source_2322 = mod_consts[4532];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4533], tmp_assign_source_2322);
    }
    {
        PyObject *tmp_assign_source_2323;
        tmp_assign_source_2323 = mod_consts[4534];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4535], tmp_assign_source_2323);
    }
    {
        PyObject *tmp_assign_source_2324;
        tmp_assign_source_2324 = mod_consts[4536];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4537], tmp_assign_source_2324);
    }
    {
        PyObject *tmp_assign_source_2325;
        tmp_assign_source_2325 = mod_consts[4538];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4539], tmp_assign_source_2325);
    }
    {
        PyObject *tmp_assign_source_2326;
        tmp_assign_source_2326 = mod_consts[4540];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4541], tmp_assign_source_2326);
    }
    {
        PyObject *tmp_assign_source_2327;
        tmp_assign_source_2327 = mod_consts[4542];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4543], tmp_assign_source_2327);
    }
    {
        PyObject *tmp_assign_source_2328;
        tmp_assign_source_2328 = mod_consts[4544];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4545], tmp_assign_source_2328);
    }
    {
        PyObject *tmp_assign_source_2329;
        tmp_assign_source_2329 = mod_consts[4546];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4547], tmp_assign_source_2329);
    }
    {
        PyObject *tmp_assign_source_2330;
        tmp_assign_source_2330 = mod_consts[4548];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4549], tmp_assign_source_2330);
    }
    {
        PyObject *tmp_assign_source_2331;
        tmp_assign_source_2331 = mod_consts[4550];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4551], tmp_assign_source_2331);
    }
    {
        PyObject *tmp_assign_source_2332;
        tmp_assign_source_2332 = mod_consts[4552];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4553], tmp_assign_source_2332);
    }
    {
        PyObject *tmp_assign_source_2333;
        tmp_assign_source_2333 = mod_consts[4554];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4555], tmp_assign_source_2333);
    }
    {
        PyObject *tmp_assign_source_2334;
        tmp_assign_source_2334 = mod_consts[4556];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4557], tmp_assign_source_2334);
    }
    {
        PyObject *tmp_assign_source_2335;
        tmp_assign_source_2335 = mod_consts[4558];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4559], tmp_assign_source_2335);
    }
    {
        PyObject *tmp_assign_source_2336;
        tmp_assign_source_2336 = mod_consts[4560];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4561], tmp_assign_source_2336);
    }
    {
        PyObject *tmp_assign_source_2337;
        tmp_assign_source_2337 = mod_consts[4562];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4563], tmp_assign_source_2337);
    }
    {
        PyObject *tmp_assign_source_2338;
        tmp_assign_source_2338 = mod_consts[4564];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4565], tmp_assign_source_2338);
    }
    {
        PyObject *tmp_assign_source_2339;
        tmp_assign_source_2339 = mod_consts[4566];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4567], tmp_assign_source_2339);
    }
    {
        PyObject *tmp_assign_source_2340;
        tmp_assign_source_2340 = mod_consts[4568];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4569], tmp_assign_source_2340);
    }
    {
        PyObject *tmp_assign_source_2341;
        tmp_assign_source_2341 = mod_consts[4570];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4571], tmp_assign_source_2341);
    }
    {
        PyObject *tmp_assign_source_2342;
        tmp_assign_source_2342 = mod_consts[4572];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4573], tmp_assign_source_2342);
    }
    {
        PyObject *tmp_assign_source_2343;
        tmp_assign_source_2343 = mod_consts[4574];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4575], tmp_assign_source_2343);
    }
    {
        PyObject *tmp_assign_source_2344;
        tmp_assign_source_2344 = mod_consts[4576];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4577], tmp_assign_source_2344);
    }
    {
        PyObject *tmp_assign_source_2345;
        tmp_assign_source_2345 = mod_consts[4578];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4579], tmp_assign_source_2345);
    }
    {
        PyObject *tmp_assign_source_2346;
        tmp_assign_source_2346 = mod_consts[4580];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4581], tmp_assign_source_2346);
    }
    {
        PyObject *tmp_assign_source_2347;
        tmp_assign_source_2347 = mod_consts[4582];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4583], tmp_assign_source_2347);
    }
    {
        PyObject *tmp_assign_source_2348;
        tmp_assign_source_2348 = mod_consts[4584];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4585], tmp_assign_source_2348);
    }
    {
        PyObject *tmp_assign_source_2349;
        tmp_assign_source_2349 = mod_consts[4586];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4587], tmp_assign_source_2349);
    }
    {
        PyObject *tmp_assign_source_2350;
        tmp_assign_source_2350 = mod_consts[4588];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4589], tmp_assign_source_2350);
    }
    {
        PyObject *tmp_assign_source_2351;
        tmp_assign_source_2351 = mod_consts[4590];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4591], tmp_assign_source_2351);
    }
    {
        PyObject *tmp_assign_source_2352;
        tmp_assign_source_2352 = mod_consts[4592];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4593], tmp_assign_source_2352);
    }
    {
        PyObject *tmp_assign_source_2353;
        tmp_assign_source_2353 = mod_consts[4594];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4595], tmp_assign_source_2353);
    }
    {
        PyObject *tmp_assign_source_2354;
        tmp_assign_source_2354 = mod_consts[4596];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4597], tmp_assign_source_2354);
    }
    {
        PyObject *tmp_assign_source_2355;
        tmp_assign_source_2355 = mod_consts[4598];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4599], tmp_assign_source_2355);
    }
    {
        PyObject *tmp_assign_source_2356;
        tmp_assign_source_2356 = mod_consts[4600];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4601], tmp_assign_source_2356);
    }
    {
        PyObject *tmp_assign_source_2357;
        tmp_assign_source_2357 = mod_consts[4602];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4603], tmp_assign_source_2357);
    }
    {
        PyObject *tmp_assign_source_2358;
        tmp_assign_source_2358 = mod_consts[4604];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4605], tmp_assign_source_2358);
    }
    {
        PyObject *tmp_assign_source_2359;
        tmp_assign_source_2359 = mod_consts[4606];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4607], tmp_assign_source_2359);
    }
    {
        PyObject *tmp_assign_source_2360;
        tmp_assign_source_2360 = mod_consts[4608];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4609], tmp_assign_source_2360);
    }
    {
        PyObject *tmp_assign_source_2361;
        tmp_assign_source_2361 = mod_consts[4610];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4611], tmp_assign_source_2361);
    }
    {
        PyObject *tmp_assign_source_2362;
        tmp_assign_source_2362 = mod_consts[4612];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4613], tmp_assign_source_2362);
    }
    {
        PyObject *tmp_assign_source_2363;
        tmp_assign_source_2363 = mod_consts[4614];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4615], tmp_assign_source_2363);
    }
    {
        PyObject *tmp_assign_source_2364;
        tmp_assign_source_2364 = mod_consts[4616];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4617], tmp_assign_source_2364);
    }
    {
        PyObject *tmp_assign_source_2365;
        tmp_assign_source_2365 = mod_consts[4618];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4619], tmp_assign_source_2365);
    }
    {
        PyObject *tmp_assign_source_2366;
        tmp_assign_source_2366 = mod_consts[4620];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4621], tmp_assign_source_2366);
    }
    {
        PyObject *tmp_assign_source_2367;
        tmp_assign_source_2367 = mod_consts[4622];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4623], tmp_assign_source_2367);
    }
    {
        PyObject *tmp_assign_source_2368;
        tmp_assign_source_2368 = mod_consts[4624];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4625], tmp_assign_source_2368);
    }
    {
        PyObject *tmp_assign_source_2369;
        tmp_assign_source_2369 = mod_consts[4626];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4627], tmp_assign_source_2369);
    }
    {
        PyObject *tmp_assign_source_2370;
        tmp_assign_source_2370 = mod_consts[4628];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4629], tmp_assign_source_2370);
    }
    {
        PyObject *tmp_assign_source_2371;
        tmp_assign_source_2371 = mod_consts[4630];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4631], tmp_assign_source_2371);
    }
    {
        PyObject *tmp_assign_source_2372;
        tmp_assign_source_2372 = mod_consts[4632];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4633], tmp_assign_source_2372);
    }
    {
        PyObject *tmp_assign_source_2373;
        tmp_assign_source_2373 = mod_consts[4634];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4635], tmp_assign_source_2373);
    }
    {
        PyObject *tmp_assign_source_2374;
        tmp_assign_source_2374 = mod_consts[4636];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4637], tmp_assign_source_2374);
    }
    {
        PyObject *tmp_assign_source_2375;
        tmp_assign_source_2375 = mod_consts[4638];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4639], tmp_assign_source_2375);
    }
    {
        PyObject *tmp_assign_source_2376;
        tmp_assign_source_2376 = mod_consts[4640];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4641], tmp_assign_source_2376);
    }
    {
        PyObject *tmp_assign_source_2377;
        tmp_assign_source_2377 = mod_consts[4642];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4643], tmp_assign_source_2377);
    }
    {
        PyObject *tmp_assign_source_2378;
        tmp_assign_source_2378 = mod_consts[4644];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4645], tmp_assign_source_2378);
    }
    {
        PyObject *tmp_assign_source_2379;
        tmp_assign_source_2379 = mod_consts[4646];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4647], tmp_assign_source_2379);
    }
    {
        PyObject *tmp_assign_source_2380;
        tmp_assign_source_2380 = mod_consts[4648];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4649], tmp_assign_source_2380);
    }
    {
        PyObject *tmp_assign_source_2381;
        tmp_assign_source_2381 = mod_consts[4650];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4651], tmp_assign_source_2381);
    }
    {
        PyObject *tmp_assign_source_2382;
        tmp_assign_source_2382 = mod_consts[4652];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4653], tmp_assign_source_2382);
    }
    {
        PyObject *tmp_assign_source_2383;
        tmp_assign_source_2383 = mod_consts[4654];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4655], tmp_assign_source_2383);
    }
    {
        PyObject *tmp_assign_source_2384;
        tmp_assign_source_2384 = mod_consts[4656];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4657], tmp_assign_source_2384);
    }
    {
        PyObject *tmp_assign_source_2385;
        tmp_assign_source_2385 = mod_consts[4658];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4659], tmp_assign_source_2385);
    }
    {
        PyObject *tmp_assign_source_2386;
        tmp_assign_source_2386 = mod_consts[4660];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4661], tmp_assign_source_2386);
    }
    {
        PyObject *tmp_assign_source_2387;
        tmp_assign_source_2387 = mod_consts[4662];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4663], tmp_assign_source_2387);
    }
    {
        PyObject *tmp_assign_source_2388;
        tmp_assign_source_2388 = mod_consts[4664];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4665], tmp_assign_source_2388);
    }
    {
        PyObject *tmp_assign_source_2389;
        tmp_assign_source_2389 = mod_consts[4666];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4667], tmp_assign_source_2389);
    }
    {
        PyObject *tmp_assign_source_2390;
        tmp_assign_source_2390 = mod_consts[4668];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4669], tmp_assign_source_2390);
    }
    {
        PyObject *tmp_assign_source_2391;
        tmp_assign_source_2391 = mod_consts[4670];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4671], tmp_assign_source_2391);
    }
    {
        PyObject *tmp_assign_source_2392;
        tmp_assign_source_2392 = mod_consts[4672];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4673], tmp_assign_source_2392);
    }
    {
        PyObject *tmp_assign_source_2393;
        tmp_assign_source_2393 = mod_consts[4674];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4675], tmp_assign_source_2393);
    }
    {
        PyObject *tmp_assign_source_2394;
        tmp_assign_source_2394 = mod_consts[4676];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4677], tmp_assign_source_2394);
    }
    {
        PyObject *tmp_assign_source_2395;
        tmp_assign_source_2395 = mod_consts[4678];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4679], tmp_assign_source_2395);
    }
    {
        PyObject *tmp_assign_source_2396;
        tmp_assign_source_2396 = mod_consts[4680];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4681], tmp_assign_source_2396);
    }
    {
        PyObject *tmp_assign_source_2397;
        tmp_assign_source_2397 = mod_consts[4682];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4683], tmp_assign_source_2397);
    }
    {
        PyObject *tmp_assign_source_2398;
        tmp_assign_source_2398 = mod_consts[4684];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4685], tmp_assign_source_2398);
    }
    {
        PyObject *tmp_assign_source_2399;
        tmp_assign_source_2399 = mod_consts[4686];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4687], tmp_assign_source_2399);
    }
    {
        PyObject *tmp_assign_source_2400;
        tmp_assign_source_2400 = mod_consts[4688];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4689], tmp_assign_source_2400);
    }
    {
        PyObject *tmp_assign_source_2401;
        tmp_assign_source_2401 = mod_consts[4690];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4691], tmp_assign_source_2401);
    }
    {
        PyObject *tmp_assign_source_2402;
        tmp_assign_source_2402 = mod_consts[4692];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4693], tmp_assign_source_2402);
    }
    {
        PyObject *tmp_assign_source_2403;
        tmp_assign_source_2403 = mod_consts[4694];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4695], tmp_assign_source_2403);
    }
    {
        PyObject *tmp_assign_source_2404;
        tmp_assign_source_2404 = mod_consts[4696];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4697], tmp_assign_source_2404);
    }
    {
        PyObject *tmp_assign_source_2405;
        tmp_assign_source_2405 = mod_consts[4698];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4699], tmp_assign_source_2405);
    }
    {
        PyObject *tmp_assign_source_2406;
        tmp_assign_source_2406 = mod_consts[4700];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4701], tmp_assign_source_2406);
    }
    {
        PyObject *tmp_assign_source_2407;
        tmp_assign_source_2407 = mod_consts[4702];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4703], tmp_assign_source_2407);
    }
    {
        PyObject *tmp_assign_source_2408;
        tmp_assign_source_2408 = mod_consts[4704];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4705], tmp_assign_source_2408);
    }
    {
        PyObject *tmp_assign_source_2409;
        tmp_assign_source_2409 = mod_consts[4706];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4707], tmp_assign_source_2409);
    }
    {
        PyObject *tmp_assign_source_2410;
        tmp_assign_source_2410 = mod_consts[4708];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4709], tmp_assign_source_2410);
    }
    {
        PyObject *tmp_assign_source_2411;
        tmp_assign_source_2411 = mod_consts[4710];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4711], tmp_assign_source_2411);
    }
    {
        PyObject *tmp_assign_source_2412;
        tmp_assign_source_2412 = mod_consts[4712];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4713], tmp_assign_source_2412);
    }
    {
        PyObject *tmp_assign_source_2413;
        tmp_assign_source_2413 = mod_consts[4714];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4715], tmp_assign_source_2413);
    }
    {
        PyObject *tmp_assign_source_2414;
        tmp_assign_source_2414 = mod_consts[4716];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4717], tmp_assign_source_2414);
    }
    {
        PyObject *tmp_assign_source_2415;
        tmp_assign_source_2415 = mod_consts[4718];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4719], tmp_assign_source_2415);
    }
    {
        PyObject *tmp_assign_source_2416;
        tmp_assign_source_2416 = mod_consts[4720];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4721], tmp_assign_source_2416);
    }
    {
        PyObject *tmp_assign_source_2417;
        tmp_assign_source_2417 = mod_consts[4722];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4723], tmp_assign_source_2417);
    }
    {
        PyObject *tmp_assign_source_2418;
        tmp_assign_source_2418 = mod_consts[4724];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4725], tmp_assign_source_2418);
    }
    {
        PyObject *tmp_assign_source_2419;
        tmp_assign_source_2419 = mod_consts[4726];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4727], tmp_assign_source_2419);
    }
    {
        PyObject *tmp_assign_source_2420;
        tmp_assign_source_2420 = mod_consts[4728];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4729], tmp_assign_source_2420);
    }
    {
        PyObject *tmp_assign_source_2421;
        tmp_assign_source_2421 = mod_consts[4730];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4731], tmp_assign_source_2421);
    }
    {
        PyObject *tmp_assign_source_2422;
        tmp_assign_source_2422 = mod_consts[4732];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4733], tmp_assign_source_2422);
    }
    {
        PyObject *tmp_assign_source_2423;
        tmp_assign_source_2423 = mod_consts[4734];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4735], tmp_assign_source_2423);
    }
    {
        PyObject *tmp_assign_source_2424;
        tmp_assign_source_2424 = mod_consts[4736];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4737], tmp_assign_source_2424);
    }
    {
        PyObject *tmp_assign_source_2425;
        tmp_assign_source_2425 = mod_consts[4738];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4739], tmp_assign_source_2425);
    }
    {
        PyObject *tmp_assign_source_2426;
        tmp_assign_source_2426 = mod_consts[4740];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4741], tmp_assign_source_2426);
    }
    {
        PyObject *tmp_assign_source_2427;
        tmp_assign_source_2427 = mod_consts[4742];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4743], tmp_assign_source_2427);
    }
    {
        PyObject *tmp_assign_source_2428;
        tmp_assign_source_2428 = mod_consts[4744];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4745], tmp_assign_source_2428);
    }
    {
        PyObject *tmp_assign_source_2429;
        tmp_assign_source_2429 = mod_consts[4746];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4747], tmp_assign_source_2429);
    }
    {
        PyObject *tmp_assign_source_2430;
        tmp_assign_source_2430 = mod_consts[4748];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4749], tmp_assign_source_2430);
    }
    {
        PyObject *tmp_assign_source_2431;
        tmp_assign_source_2431 = mod_consts[4750];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4751], tmp_assign_source_2431);
    }
    {
        PyObject *tmp_assign_source_2432;
        tmp_assign_source_2432 = mod_consts[4752];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4753], tmp_assign_source_2432);
    }
    {
        PyObject *tmp_assign_source_2433;
        tmp_assign_source_2433 = mod_consts[4754];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4755], tmp_assign_source_2433);
    }
    {
        PyObject *tmp_assign_source_2434;
        tmp_assign_source_2434 = mod_consts[4756];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4757], tmp_assign_source_2434);
    }
    {
        PyObject *tmp_assign_source_2435;
        tmp_assign_source_2435 = mod_consts[4758];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4759], tmp_assign_source_2435);
    }
    {
        PyObject *tmp_assign_source_2436;
        tmp_assign_source_2436 = mod_consts[4760];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4761], tmp_assign_source_2436);
    }
    {
        PyObject *tmp_assign_source_2437;
        tmp_assign_source_2437 = mod_consts[4762];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4763], tmp_assign_source_2437);
    }
    {
        PyObject *tmp_assign_source_2438;
        tmp_assign_source_2438 = mod_consts[4764];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4765], tmp_assign_source_2438);
    }
    {
        PyObject *tmp_assign_source_2439;
        tmp_assign_source_2439 = mod_consts[4766];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4767], tmp_assign_source_2439);
    }
    {
        PyObject *tmp_assign_source_2440;
        tmp_assign_source_2440 = mod_consts[4768];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4769], tmp_assign_source_2440);
    }
    {
        PyObject *tmp_assign_source_2441;
        tmp_assign_source_2441 = mod_consts[4770];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4771], tmp_assign_source_2441);
    }
    {
        PyObject *tmp_assign_source_2442;
        tmp_assign_source_2442 = mod_consts[4772];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4773], tmp_assign_source_2442);
    }
    {
        PyObject *tmp_assign_source_2443;
        tmp_assign_source_2443 = mod_consts[4774];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4775], tmp_assign_source_2443);
    }
    {
        PyObject *tmp_assign_source_2444;
        tmp_assign_source_2444 = mod_consts[4776];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4777], tmp_assign_source_2444);
    }
    {
        PyObject *tmp_assign_source_2445;
        tmp_assign_source_2445 = mod_consts[4778];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4779], tmp_assign_source_2445);
    }
    {
        PyObject *tmp_assign_source_2446;
        tmp_assign_source_2446 = mod_consts[4780];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4781], tmp_assign_source_2446);
    }
    {
        PyObject *tmp_assign_source_2447;
        tmp_assign_source_2447 = mod_consts[4782];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4783], tmp_assign_source_2447);
    }
    {
        PyObject *tmp_assign_source_2448;
        tmp_assign_source_2448 = mod_consts[4784];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4785], tmp_assign_source_2448);
    }
    {
        PyObject *tmp_assign_source_2449;
        tmp_assign_source_2449 = mod_consts[4786];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4787], tmp_assign_source_2449);
    }
    {
        PyObject *tmp_assign_source_2450;
        tmp_assign_source_2450 = mod_consts[4788];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4789], tmp_assign_source_2450);
    }
    {
        PyObject *tmp_assign_source_2451;
        tmp_assign_source_2451 = mod_consts[4790];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4791], tmp_assign_source_2451);
    }
    {
        PyObject *tmp_assign_source_2452;
        tmp_assign_source_2452 = mod_consts[4792];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4793], tmp_assign_source_2452);
    }
    {
        PyObject *tmp_assign_source_2453;
        tmp_assign_source_2453 = mod_consts[4794];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4795], tmp_assign_source_2453);
    }
    {
        PyObject *tmp_assign_source_2454;
        tmp_assign_source_2454 = mod_consts[4796];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4797], tmp_assign_source_2454);
    }
    {
        PyObject *tmp_assign_source_2455;
        tmp_assign_source_2455 = mod_consts[4798];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4799], tmp_assign_source_2455);
    }
    {
        PyObject *tmp_assign_source_2456;
        tmp_assign_source_2456 = mod_consts[4800];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4801], tmp_assign_source_2456);
    }
    {
        PyObject *tmp_assign_source_2457;
        tmp_assign_source_2457 = mod_consts[4802];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4803], tmp_assign_source_2457);
    }
    {
        PyObject *tmp_assign_source_2458;
        tmp_assign_source_2458 = mod_consts[4804];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4805], tmp_assign_source_2458);
    }
    {
        PyObject *tmp_assign_source_2459;
        tmp_assign_source_2459 = mod_consts[4806];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4807], tmp_assign_source_2459);
    }
    {
        PyObject *tmp_assign_source_2460;
        tmp_assign_source_2460 = mod_consts[4808];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4809], tmp_assign_source_2460);
    }
    {
        PyObject *tmp_assign_source_2461;
        tmp_assign_source_2461 = mod_consts[4810];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4811], tmp_assign_source_2461);
    }
    {
        PyObject *tmp_assign_source_2462;
        tmp_assign_source_2462 = mod_consts[4812];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4813], tmp_assign_source_2462);
    }
    {
        PyObject *tmp_assign_source_2463;
        tmp_assign_source_2463 = mod_consts[4814];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4815], tmp_assign_source_2463);
    }
    {
        PyObject *tmp_assign_source_2464;
        tmp_assign_source_2464 = mod_consts[4816];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4817], tmp_assign_source_2464);
    }
    {
        PyObject *tmp_assign_source_2465;
        tmp_assign_source_2465 = mod_consts[4818];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4819], tmp_assign_source_2465);
    }
    {
        PyObject *tmp_assign_source_2466;
        tmp_assign_source_2466 = mod_consts[4820];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4821], tmp_assign_source_2466);
    }
    {
        PyObject *tmp_assign_source_2467;
        tmp_assign_source_2467 = mod_consts[4822];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4823], tmp_assign_source_2467);
    }
    {
        PyObject *tmp_assign_source_2468;
        tmp_assign_source_2468 = mod_consts[4824];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4825], tmp_assign_source_2468);
    }
    {
        PyObject *tmp_assign_source_2469;
        tmp_assign_source_2469 = mod_consts[4826];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4827], tmp_assign_source_2469);
    }
    {
        PyObject *tmp_assign_source_2470;
        tmp_assign_source_2470 = mod_consts[4828];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4829], tmp_assign_source_2470);
    }
    {
        PyObject *tmp_assign_source_2471;
        tmp_assign_source_2471 = mod_consts[4830];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4831], tmp_assign_source_2471);
    }
    {
        PyObject *tmp_assign_source_2472;
        tmp_assign_source_2472 = mod_consts[4832];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4833], tmp_assign_source_2472);
    }
    {
        PyObject *tmp_assign_source_2473;
        tmp_assign_source_2473 = mod_consts[4834];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4835], tmp_assign_source_2473);
    }
    {
        PyObject *tmp_assign_source_2474;
        tmp_assign_source_2474 = mod_consts[4836];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4837], tmp_assign_source_2474);
    }
    {
        PyObject *tmp_assign_source_2475;
        tmp_assign_source_2475 = mod_consts[4838];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4839], tmp_assign_source_2475);
    }
    {
        PyObject *tmp_assign_source_2476;
        tmp_assign_source_2476 = mod_consts[4840];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4841], tmp_assign_source_2476);
    }
    {
        PyObject *tmp_assign_source_2477;
        tmp_assign_source_2477 = mod_consts[4842];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4843], tmp_assign_source_2477);
    }
    {
        PyObject *tmp_assign_source_2478;
        tmp_assign_source_2478 = mod_consts[4844];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4845], tmp_assign_source_2478);
    }
    {
        PyObject *tmp_assign_source_2479;
        tmp_assign_source_2479 = mod_consts[4846];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4847], tmp_assign_source_2479);
    }
    {
        PyObject *tmp_assign_source_2480;
        tmp_assign_source_2480 = mod_consts[4848];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4849], tmp_assign_source_2480);
    }
    {
        PyObject *tmp_assign_source_2481;
        tmp_assign_source_2481 = mod_consts[4850];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4851], tmp_assign_source_2481);
    }
    {
        PyObject *tmp_assign_source_2482;
        tmp_assign_source_2482 = mod_consts[4852];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4853], tmp_assign_source_2482);
    }
    {
        PyObject *tmp_assign_source_2483;
        tmp_assign_source_2483 = mod_consts[4854];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4855], tmp_assign_source_2483);
    }
    {
        PyObject *tmp_assign_source_2484;
        tmp_assign_source_2484 = mod_consts[4856];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4857], tmp_assign_source_2484);
    }
    {
        PyObject *tmp_assign_source_2485;
        tmp_assign_source_2485 = mod_consts[4858];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4859], tmp_assign_source_2485);
    }
    {
        PyObject *tmp_assign_source_2486;
        tmp_assign_source_2486 = mod_consts[4860];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4861], tmp_assign_source_2486);
    }
    {
        PyObject *tmp_assign_source_2487;
        tmp_assign_source_2487 = mod_consts[4862];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4863], tmp_assign_source_2487);
    }
    {
        PyObject *tmp_assign_source_2488;
        tmp_assign_source_2488 = mod_consts[4864];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4865], tmp_assign_source_2488);
    }
    {
        PyObject *tmp_assign_source_2489;
        tmp_assign_source_2489 = mod_consts[4866];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4867], tmp_assign_source_2489);
    }
    {
        PyObject *tmp_assign_source_2490;
        tmp_assign_source_2490 = mod_consts[4868];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4869], tmp_assign_source_2490);
    }
    {
        PyObject *tmp_assign_source_2491;
        tmp_assign_source_2491 = mod_consts[4870];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4871], tmp_assign_source_2491);
    }
    {
        PyObject *tmp_assign_source_2492;
        tmp_assign_source_2492 = mod_consts[2];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4872], tmp_assign_source_2492);
    }
    {
        PyObject *tmp_assign_source_2493;
        tmp_assign_source_2493 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_2493);
    }
    {
        PyObject *tmp_assign_source_2494;
        tmp_assign_source_2494 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_2494);
    }
    {
        PyObject *tmp_assign_source_2495;
        tmp_assign_source_2495 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_2495);
    }
    {
        PyObject *tmp_assign_source_2496;
        tmp_assign_source_2496 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_2496);
    }
    {
        PyObject *tmp_assign_source_2497;
        tmp_assign_source_2497 = mod_consts[4873];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4874], tmp_assign_source_2497);
    }
    {
        PyObject *tmp_assign_source_2498;
        tmp_assign_source_2498 = mod_consts[4875];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4876], tmp_assign_source_2498);
    }
    {
        PyObject *tmp_assign_source_2499;
        tmp_assign_source_2499 = mod_consts[4877];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4878], tmp_assign_source_2499);
    }
    {
        PyObject *tmp_assign_source_2500;
        tmp_assign_source_2500 = mod_consts[4879];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4880], tmp_assign_source_2500);
    }
    {
        PyObject *tmp_assign_source_2501;
        tmp_assign_source_2501 = mod_consts[4881];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4882], tmp_assign_source_2501);
    }
    {
        PyObject *tmp_assign_source_2502;
        tmp_assign_source_2502 = mod_consts[4883];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4884], tmp_assign_source_2502);
    }
    {
        PyObject *tmp_assign_source_2503;
        tmp_assign_source_2503 = mod_consts[4885];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4886], tmp_assign_source_2503);
    }
    {
        PyObject *tmp_assign_source_2504;
        tmp_assign_source_2504 = mod_consts[4887];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4888], tmp_assign_source_2504);
    }
    {
        PyObject *tmp_assign_source_2505;
        tmp_assign_source_2505 = mod_consts[4889];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4890], tmp_assign_source_2505);
    }
    {
        PyObject *tmp_assign_source_2506;
        tmp_assign_source_2506 = mod_consts[4891];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4892], tmp_assign_source_2506);
    }
    {
        PyObject *tmp_assign_source_2507;
        tmp_assign_source_2507 = mod_consts[4893];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4894], tmp_assign_source_2507);
    }
    {
        PyObject *tmp_assign_source_2508;
        tmp_assign_source_2508 = mod_consts[4895];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4896], tmp_assign_source_2508);
    }
    {
        PyObject *tmp_assign_source_2509;
        tmp_assign_source_2509 = mod_consts[4897];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4898], tmp_assign_source_2509);
    }
    {
        PyObject *tmp_assign_source_2510;
        tmp_assign_source_2510 = mod_consts[4899];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4900], tmp_assign_source_2510);
    }
    {
        PyObject *tmp_assign_source_2511;
        tmp_assign_source_2511 = mod_consts[4901];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4902], tmp_assign_source_2511);
    }
    {
        PyObject *tmp_assign_source_2512;
        tmp_assign_source_2512 = mod_consts[4903];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4904], tmp_assign_source_2512);
    }
    {
        PyObject *tmp_assign_source_2513;
        tmp_assign_source_2513 = mod_consts[4905];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4906], tmp_assign_source_2513);
    }
    {
        PyObject *tmp_assign_source_2514;
        tmp_assign_source_2514 = mod_consts[4907];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4908], tmp_assign_source_2514);
    }
    {
        PyObject *tmp_assign_source_2515;
        tmp_assign_source_2515 = mod_consts[4909];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4910], tmp_assign_source_2515);
    }
    {
        PyObject *tmp_assign_source_2516;
        tmp_assign_source_2516 = mod_consts[4911];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4912], tmp_assign_source_2516);
    }
    {
        PyObject *tmp_assign_source_2517;
        tmp_assign_source_2517 = mod_consts[4913];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4914], tmp_assign_source_2517);
    }
    {
        PyObject *tmp_assign_source_2518;
        tmp_assign_source_2518 = mod_consts[4915];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4916], tmp_assign_source_2518);
    }
    {
        PyObject *tmp_assign_source_2519;
        tmp_assign_source_2519 = mod_consts[4917];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4918], tmp_assign_source_2519);
    }
    {
        PyObject *tmp_assign_source_2520;
        tmp_assign_source_2520 = mod_consts[4919];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4920], tmp_assign_source_2520);
    }
    {
        PyObject *tmp_assign_source_2521;
        tmp_assign_source_2521 = mod_consts[4921];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4922], tmp_assign_source_2521);
    }
    {
        PyObject *tmp_assign_source_2522;
        tmp_assign_source_2522 = mod_consts[4923];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4924], tmp_assign_source_2522);
    }
    {
        PyObject *tmp_assign_source_2523;
        tmp_assign_source_2523 = mod_consts[4925];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4926], tmp_assign_source_2523);
    }
    {
        PyObject *tmp_assign_source_2524;
        tmp_assign_source_2524 = mod_consts[4927];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4928], tmp_assign_source_2524);
    }
    {
        PyObject *tmp_assign_source_2525;
        tmp_assign_source_2525 = mod_consts[4929];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4930], tmp_assign_source_2525);
    }
    {
        PyObject *tmp_assign_source_2526;
        tmp_assign_source_2526 = mod_consts[4931];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4932], tmp_assign_source_2526);
    }
    {
        PyObject *tmp_assign_source_2527;
        tmp_assign_source_2527 = mod_consts[4933];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4934], tmp_assign_source_2527);
    }
    {
        PyObject *tmp_assign_source_2528;
        tmp_assign_source_2528 = mod_consts[4935];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4936], tmp_assign_source_2528);
    }
    {
        PyObject *tmp_assign_source_2529;
        tmp_assign_source_2529 = mod_consts[4937];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4938], tmp_assign_source_2529);
    }
    {
        PyObject *tmp_assign_source_2530;
        tmp_assign_source_2530 = mod_consts[4939];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4940], tmp_assign_source_2530);
    }
    {
        PyObject *tmp_assign_source_2531;
        tmp_assign_source_2531 = mod_consts[4941];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4942], tmp_assign_source_2531);
    }
    {
        PyObject *tmp_assign_source_2532;
        tmp_assign_source_2532 = mod_consts[4943];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4944], tmp_assign_source_2532);
    }
    {
        PyObject *tmp_assign_source_2533;
        tmp_assign_source_2533 = mod_consts[4945];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4946], tmp_assign_source_2533);
    }
    {
        PyObject *tmp_assign_source_2534;
        tmp_assign_source_2534 = mod_consts[4947];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4948], tmp_assign_source_2534);
    }
    {
        PyObject *tmp_assign_source_2535;
        tmp_assign_source_2535 = mod_consts[4949];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4950], tmp_assign_source_2535);
    }
    {
        PyObject *tmp_assign_source_2536;
        tmp_assign_source_2536 = mod_consts[4951];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4952], tmp_assign_source_2536);
    }
    {
        PyObject *tmp_assign_source_2537;
        tmp_assign_source_2537 = mod_consts[4953];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4954], tmp_assign_source_2537);
    }
    {
        PyObject *tmp_assign_source_2538;
        tmp_assign_source_2538 = mod_consts[4955];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4956], tmp_assign_source_2538);
    }
    {
        PyObject *tmp_assign_source_2539;
        tmp_assign_source_2539 = mod_consts[4957];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4958], tmp_assign_source_2539);
    }
    {
        PyObject *tmp_assign_source_2540;
        tmp_assign_source_2540 = mod_consts[4959];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4960], tmp_assign_source_2540);
    }
    {
        PyObject *tmp_assign_source_2541;
        tmp_assign_source_2541 = mod_consts[4961];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4962], tmp_assign_source_2541);
    }
    {
        PyObject *tmp_assign_source_2542;
        tmp_assign_source_2542 = mod_consts[4963];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4964], tmp_assign_source_2542);
    }
    {
        PyObject *tmp_assign_source_2543;
        tmp_assign_source_2543 = mod_consts[4965];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4966], tmp_assign_source_2543);
    }
    {
        PyObject *tmp_assign_source_2544;
        tmp_assign_source_2544 = mod_consts[4967];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4968], tmp_assign_source_2544);
    }
    {
        PyObject *tmp_assign_source_2545;
        tmp_assign_source_2545 = mod_consts[4969];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4970], tmp_assign_source_2545);
    }
    {
        PyObject *tmp_assign_source_2546;
        tmp_assign_source_2546 = mod_consts[4971];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4972], tmp_assign_source_2546);
    }
    {
        PyObject *tmp_assign_source_2547;
        tmp_assign_source_2547 = mod_consts[4973];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4974], tmp_assign_source_2547);
    }
    {
        PyObject *tmp_assign_source_2548;
        tmp_assign_source_2548 = mod_consts[4975];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4976], tmp_assign_source_2548);
    }
    {
        PyObject *tmp_assign_source_2549;
        tmp_assign_source_2549 = mod_consts[4977];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4978], tmp_assign_source_2549);
    }
    {
        PyObject *tmp_assign_source_2550;
        tmp_assign_source_2550 = mod_consts[4979];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4980], tmp_assign_source_2550);
    }
    {
        PyObject *tmp_assign_source_2551;
        tmp_assign_source_2551 = mod_consts[4981];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4982], tmp_assign_source_2551);
    }
    {
        PyObject *tmp_assign_source_2552;
        tmp_assign_source_2552 = mod_consts[4983];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4984], tmp_assign_source_2552);
    }
    {
        PyObject *tmp_assign_source_2553;
        tmp_assign_source_2553 = mod_consts[4985];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4986], tmp_assign_source_2553);
    }
    {
        PyObject *tmp_assign_source_2554;
        tmp_assign_source_2554 = mod_consts[4987];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4988], tmp_assign_source_2554);
    }
    {
        PyObject *tmp_assign_source_2555;
        tmp_assign_source_2555 = mod_consts[4989];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4990], tmp_assign_source_2555);
    }
    {
        PyObject *tmp_assign_source_2556;
        tmp_assign_source_2556 = mod_consts[4991];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4992], tmp_assign_source_2556);
    }
    {
        PyObject *tmp_assign_source_2557;
        tmp_assign_source_2557 = mod_consts[4993];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4994], tmp_assign_source_2557);
    }
    {
        PyObject *tmp_assign_source_2558;
        tmp_assign_source_2558 = mod_consts[4995];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4996], tmp_assign_source_2558);
    }
    {
        PyObject *tmp_assign_source_2559;
        tmp_assign_source_2559 = mod_consts[4997];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[4998], tmp_assign_source_2559);
    }
    {
        PyObject *tmp_assign_source_2560;
        tmp_assign_source_2560 = mod_consts[4999];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5000], tmp_assign_source_2560);
    }
    {
        PyObject *tmp_assign_source_2561;
        tmp_assign_source_2561 = mod_consts[5001];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5002], tmp_assign_source_2561);
    }
    {
        PyObject *tmp_assign_source_2562;
        tmp_assign_source_2562 = mod_consts[5003];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5004], tmp_assign_source_2562);
    }
    {
        PyObject *tmp_assign_source_2563;
        tmp_assign_source_2563 = mod_consts[5005];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5006], tmp_assign_source_2563);
    }
    {
        PyObject *tmp_assign_source_2564;
        tmp_assign_source_2564 = mod_consts[5007];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5008], tmp_assign_source_2564);
    }
    {
        PyObject *tmp_assign_source_2565;
        tmp_assign_source_2565 = mod_consts[5009];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5010], tmp_assign_source_2565);
    }
    {
        PyObject *tmp_assign_source_2566;
        tmp_assign_source_2566 = mod_consts[5011];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5012], tmp_assign_source_2566);
    }
    {
        PyObject *tmp_assign_source_2567;
        tmp_assign_source_2567 = mod_consts[5013];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5014], tmp_assign_source_2567);
    }
    {
        PyObject *tmp_assign_source_2568;
        tmp_assign_source_2568 = mod_consts[5015];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5016], tmp_assign_source_2568);
    }
    {
        PyObject *tmp_assign_source_2569;
        tmp_assign_source_2569 = mod_consts[5017];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5018], tmp_assign_source_2569);
    }
    {
        PyObject *tmp_assign_source_2570;
        tmp_assign_source_2570 = mod_consts[5019];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5020], tmp_assign_source_2570);
    }
    {
        PyObject *tmp_assign_source_2571;
        tmp_assign_source_2571 = mod_consts[5021];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5022], tmp_assign_source_2571);
    }
    {
        PyObject *tmp_assign_source_2572;
        tmp_assign_source_2572 = mod_consts[5023];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5024], tmp_assign_source_2572);
    }
    {
        PyObject *tmp_assign_source_2573;
        tmp_assign_source_2573 = mod_consts[5025];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5026], tmp_assign_source_2573);
    }
    {
        PyObject *tmp_assign_source_2574;
        tmp_assign_source_2574 = mod_consts[3079];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[1350], tmp_assign_source_2574);
    }
    {
        PyObject *tmp_assign_source_2575;
        tmp_assign_source_2575 = mod_consts[3080];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3081], tmp_assign_source_2575);
    }
    {
        PyObject *tmp_assign_source_2576;
        tmp_assign_source_2576 = mod_consts[3082];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3083], tmp_assign_source_2576);
    }
    {
        PyObject *tmp_assign_source_2577;
        tmp_assign_source_2577 = mod_consts[3084];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3085], tmp_assign_source_2577);
    }
    {
        PyObject *tmp_assign_source_2578;
        tmp_assign_source_2578 = mod_consts[3086];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3087], tmp_assign_source_2578);
    }
    {
        PyObject *tmp_assign_source_2579;
        tmp_assign_source_2579 = mod_consts[3088];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3089], tmp_assign_source_2579);
    }
    {
        PyObject *tmp_assign_source_2580;
        tmp_assign_source_2580 = mod_consts[3090];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3091], tmp_assign_source_2580);
    }
    {
        PyObject *tmp_assign_source_2581;
        tmp_assign_source_2581 = mod_consts[3092];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3093], tmp_assign_source_2581);
    }
    {
        PyObject *tmp_assign_source_2582;
        tmp_assign_source_2582 = mod_consts[3094];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3095], tmp_assign_source_2582);
    }
    {
        PyObject *tmp_assign_source_2583;
        tmp_assign_source_2583 = mod_consts[3096];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3097], tmp_assign_source_2583);
    }
    {
        PyObject *tmp_assign_source_2584;
        tmp_assign_source_2584 = mod_consts[3098];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3099], tmp_assign_source_2584);
    }
    {
        PyObject *tmp_assign_source_2585;
        tmp_assign_source_2585 = mod_consts[3100];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3101], tmp_assign_source_2585);
    }
    {
        PyObject *tmp_assign_source_2586;
        tmp_assign_source_2586 = mod_consts[3102];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3103], tmp_assign_source_2586);
    }
    {
        PyObject *tmp_assign_source_2587;
        tmp_assign_source_2587 = mod_consts[3104];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3105], tmp_assign_source_2587);
    }
    {
        PyObject *tmp_assign_source_2588;
        tmp_assign_source_2588 = mod_consts[3106];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3107], tmp_assign_source_2588);
    }
    {
        PyObject *tmp_assign_source_2589;
        tmp_assign_source_2589 = mod_consts[3108];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3109], tmp_assign_source_2589);
    }
    {
        PyObject *tmp_assign_source_2590;
        tmp_assign_source_2590 = mod_consts[3110];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3111], tmp_assign_source_2590);
    }
    {
        PyObject *tmp_assign_source_2591;
        tmp_assign_source_2591 = mod_consts[3112];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3113], tmp_assign_source_2591);
    }
    {
        PyObject *tmp_assign_source_2592;
        tmp_assign_source_2592 = mod_consts[3114];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3115], tmp_assign_source_2592);
    }
    {
        PyObject *tmp_assign_source_2593;
        tmp_assign_source_2593 = mod_consts[3116];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3117], tmp_assign_source_2593);
    }
    {
        PyObject *tmp_assign_source_2594;
        tmp_assign_source_2594 = mod_consts[3118];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3119], tmp_assign_source_2594);
    }
    {
        PyObject *tmp_assign_source_2595;
        tmp_assign_source_2595 = mod_consts[3120];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3121], tmp_assign_source_2595);
    }
    {
        PyObject *tmp_assign_source_2596;
        tmp_assign_source_2596 = mod_consts[3122];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3123], tmp_assign_source_2596);
    }
    {
        PyObject *tmp_assign_source_2597;
        tmp_assign_source_2597 = mod_consts[3124];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3125], tmp_assign_source_2597);
    }
    {
        PyObject *tmp_assign_source_2598;
        tmp_assign_source_2598 = mod_consts[3126];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3127], tmp_assign_source_2598);
    }
    {
        PyObject *tmp_assign_source_2599;
        tmp_assign_source_2599 = mod_consts[3128];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3129], tmp_assign_source_2599);
    }
    {
        PyObject *tmp_assign_source_2600;
        tmp_assign_source_2600 = mod_consts[3130];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3131], tmp_assign_source_2600);
    }
    {
        PyObject *tmp_assign_source_2601;
        tmp_assign_source_2601 = mod_consts[3132];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3133], tmp_assign_source_2601);
    }
    {
        PyObject *tmp_assign_source_2602;
        tmp_assign_source_2602 = mod_consts[3134];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3135], tmp_assign_source_2602);
    }
    {
        PyObject *tmp_assign_source_2603;
        tmp_assign_source_2603 = mod_consts[3136];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3137], tmp_assign_source_2603);
    }
    {
        PyObject *tmp_assign_source_2604;
        tmp_assign_source_2604 = mod_consts[3138];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3139], tmp_assign_source_2604);
    }
    {
        PyObject *tmp_assign_source_2605;
        tmp_assign_source_2605 = mod_consts[3140];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3141], tmp_assign_source_2605);
    }
    {
        PyObject *tmp_assign_source_2606;
        tmp_assign_source_2606 = mod_consts[3142];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3143], tmp_assign_source_2606);
    }
    {
        PyObject *tmp_assign_source_2607;
        tmp_assign_source_2607 = mod_consts[3144];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3145], tmp_assign_source_2607);
    }
    {
        PyObject *tmp_assign_source_2608;
        tmp_assign_source_2608 = mod_consts[3146];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3147], tmp_assign_source_2608);
    }
    {
        PyObject *tmp_assign_source_2609;
        tmp_assign_source_2609 = mod_consts[3148];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3149], tmp_assign_source_2609);
    }
    {
        PyObject *tmp_assign_source_2610;
        tmp_assign_source_2610 = mod_consts[3150];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3151], tmp_assign_source_2610);
    }
    {
        PyObject *tmp_assign_source_2611;
        tmp_assign_source_2611 = mod_consts[3152];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3153], tmp_assign_source_2611);
    }
    {
        PyObject *tmp_assign_source_2612;
        tmp_assign_source_2612 = mod_consts[3154];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3155], tmp_assign_source_2612);
    }
    {
        PyObject *tmp_assign_source_2613;
        tmp_assign_source_2613 = mod_consts[3156];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3157], tmp_assign_source_2613);
    }
    {
        PyObject *tmp_assign_source_2614;
        tmp_assign_source_2614 = mod_consts[3158];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3159], tmp_assign_source_2614);
    }
    {
        PyObject *tmp_assign_source_2615;
        tmp_assign_source_2615 = mod_consts[3160];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3161], tmp_assign_source_2615);
    }
    {
        PyObject *tmp_assign_source_2616;
        tmp_assign_source_2616 = mod_consts[3162];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3163], tmp_assign_source_2616);
    }
    {
        PyObject *tmp_assign_source_2617;
        tmp_assign_source_2617 = mod_consts[3164];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3165], tmp_assign_source_2617);
    }
    {
        PyObject *tmp_assign_source_2618;
        tmp_assign_source_2618 = mod_consts[3166];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3167], tmp_assign_source_2618);
    }
    {
        PyObject *tmp_assign_source_2619;
        tmp_assign_source_2619 = mod_consts[3168];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3169], tmp_assign_source_2619);
    }
    {
        PyObject *tmp_assign_source_2620;
        tmp_assign_source_2620 = mod_consts[3170];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3171], tmp_assign_source_2620);
    }
    {
        PyObject *tmp_assign_source_2621;
        tmp_assign_source_2621 = mod_consts[3172];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3173], tmp_assign_source_2621);
    }
    {
        PyObject *tmp_assign_source_2622;
        tmp_assign_source_2622 = mod_consts[3174];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3175], tmp_assign_source_2622);
    }
    {
        PyObject *tmp_assign_source_2623;
        tmp_assign_source_2623 = mod_consts[3176];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3177], tmp_assign_source_2623);
    }
    {
        PyObject *tmp_assign_source_2624;
        tmp_assign_source_2624 = mod_consts[3178];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3179], tmp_assign_source_2624);
    }
    {
        PyObject *tmp_assign_source_2625;
        tmp_assign_source_2625 = mod_consts[3180];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3181], tmp_assign_source_2625);
    }
    {
        PyObject *tmp_assign_source_2626;
        tmp_assign_source_2626 = mod_consts[3182];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3183], tmp_assign_source_2626);
    }
    {
        PyObject *tmp_assign_source_2627;
        tmp_assign_source_2627 = mod_consts[3184];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3185], tmp_assign_source_2627);
    }
    {
        PyObject *tmp_assign_source_2628;
        tmp_assign_source_2628 = mod_consts[3186];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3187], tmp_assign_source_2628);
    }
    {
        PyObject *tmp_assign_source_2629;
        tmp_assign_source_2629 = mod_consts[3188];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3189], tmp_assign_source_2629);
    }
    {
        PyObject *tmp_assign_source_2630;
        tmp_assign_source_2630 = mod_consts[3190];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3191], tmp_assign_source_2630);
    }
    {
        PyObject *tmp_assign_source_2631;
        tmp_assign_source_2631 = mod_consts[3192];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3193], tmp_assign_source_2631);
    }
    {
        PyObject *tmp_assign_source_2632;
        tmp_assign_source_2632 = mod_consts[3194];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3195], tmp_assign_source_2632);
    }
    {
        PyObject *tmp_assign_source_2633;
        tmp_assign_source_2633 = mod_consts[3196];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3197], tmp_assign_source_2633);
    }
    {
        PyObject *tmp_assign_source_2634;
        tmp_assign_source_2634 = mod_consts[3198];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3199], tmp_assign_source_2634);
    }
    {
        PyObject *tmp_assign_source_2635;
        tmp_assign_source_2635 = mod_consts[3200];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3201], tmp_assign_source_2635);
    }
    {
        PyObject *tmp_assign_source_2636;
        tmp_assign_source_2636 = mod_consts[3202];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3203], tmp_assign_source_2636);
    }
    {
        PyObject *tmp_assign_source_2637;
        tmp_assign_source_2637 = mod_consts[3204];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3205], tmp_assign_source_2637);
    }
    {
        PyObject *tmp_assign_source_2638;
        tmp_assign_source_2638 = mod_consts[3206];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3207], tmp_assign_source_2638);
    }
    {
        PyObject *tmp_assign_source_2639;
        tmp_assign_source_2639 = mod_consts[3208];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3209], tmp_assign_source_2639);
    }
    {
        PyObject *tmp_assign_source_2640;
        tmp_assign_source_2640 = mod_consts[3210];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3211], tmp_assign_source_2640);
    }
    {
        PyObject *tmp_assign_source_2641;
        tmp_assign_source_2641 = mod_consts[3212];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3213], tmp_assign_source_2641);
    }
    {
        PyObject *tmp_assign_source_2642;
        tmp_assign_source_2642 = mod_consts[3214];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3215], tmp_assign_source_2642);
    }
    {
        PyObject *tmp_assign_source_2643;
        tmp_assign_source_2643 = mod_consts[3216];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3217], tmp_assign_source_2643);
    }
    {
        PyObject *tmp_assign_source_2644;
        tmp_assign_source_2644 = mod_consts[3218];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3219], tmp_assign_source_2644);
    }
    {
        PyObject *tmp_assign_source_2645;
        tmp_assign_source_2645 = mod_consts[3220];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3221], tmp_assign_source_2645);
    }
    {
        PyObject *tmp_assign_source_2646;
        tmp_assign_source_2646 = mod_consts[3222];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3223], tmp_assign_source_2646);
    }
    {
        PyObject *tmp_assign_source_2647;
        tmp_assign_source_2647 = mod_consts[3224];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3225], tmp_assign_source_2647);
    }
    {
        PyObject *tmp_assign_source_2648;
        tmp_assign_source_2648 = mod_consts[3226];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3227], tmp_assign_source_2648);
    }
    {
        PyObject *tmp_assign_source_2649;
        tmp_assign_source_2649 = mod_consts[3228];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3229], tmp_assign_source_2649);
    }
    {
        PyObject *tmp_assign_source_2650;
        tmp_assign_source_2650 = mod_consts[3230];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3231], tmp_assign_source_2650);
    }
    {
        PyObject *tmp_assign_source_2651;
        tmp_assign_source_2651 = mod_consts[3232];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3233], tmp_assign_source_2651);
    }
    {
        PyObject *tmp_assign_source_2652;
        tmp_assign_source_2652 = mod_consts[3234];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3235], tmp_assign_source_2652);
    }
    {
        PyObject *tmp_assign_source_2653;
        tmp_assign_source_2653 = mod_consts[3236];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3237], tmp_assign_source_2653);
    }
    {
        PyObject *tmp_assign_source_2654;
        tmp_assign_source_2654 = mod_consts[3238];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3239], tmp_assign_source_2654);
    }
    {
        PyObject *tmp_assign_source_2655;
        tmp_assign_source_2655 = mod_consts[3240];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3241], tmp_assign_source_2655);
    }
    {
        PyObject *tmp_assign_source_2656;
        tmp_assign_source_2656 = mod_consts[3242];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3243], tmp_assign_source_2656);
    }
    {
        PyObject *tmp_assign_source_2657;
        tmp_assign_source_2657 = mod_consts[3244];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3245], tmp_assign_source_2657);
    }
    {
        PyObject *tmp_assign_source_2658;
        tmp_assign_source_2658 = mod_consts[3246];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3247], tmp_assign_source_2658);
    }
    {
        PyObject *tmp_assign_source_2659;
        tmp_assign_source_2659 = mod_consts[3248];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3249], tmp_assign_source_2659);
    }
    {
        PyObject *tmp_assign_source_2660;
        tmp_assign_source_2660 = mod_consts[3250];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3251], tmp_assign_source_2660);
    }
    {
        PyObject *tmp_assign_source_2661;
        tmp_assign_source_2661 = mod_consts[3252];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3253], tmp_assign_source_2661);
    }
    {
        PyObject *tmp_assign_source_2662;
        tmp_assign_source_2662 = mod_consts[3254];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3255], tmp_assign_source_2662);
    }
    {
        PyObject *tmp_assign_source_2663;
        tmp_assign_source_2663 = mod_consts[3256];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3257], tmp_assign_source_2663);
    }
    {
        PyObject *tmp_assign_source_2664;
        tmp_assign_source_2664 = mod_consts[3258];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3259], tmp_assign_source_2664);
    }
    {
        PyObject *tmp_assign_source_2665;
        tmp_assign_source_2665 = mod_consts[3260];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3261], tmp_assign_source_2665);
    }
    {
        PyObject *tmp_assign_source_2666;
        tmp_assign_source_2666 = mod_consts[3262];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3263], tmp_assign_source_2666);
    }
    {
        PyObject *tmp_assign_source_2667;
        tmp_assign_source_2667 = mod_consts[3264];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3265], tmp_assign_source_2667);
    }
    {
        PyObject *tmp_assign_source_2668;
        tmp_assign_source_2668 = mod_consts[3266];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3267], tmp_assign_source_2668);
    }
    {
        PyObject *tmp_assign_source_2669;
        tmp_assign_source_2669 = mod_consts[3268];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3269], tmp_assign_source_2669);
    }
    {
        PyObject *tmp_assign_source_2670;
        tmp_assign_source_2670 = mod_consts[3270];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3271], tmp_assign_source_2670);
    }
    {
        PyObject *tmp_assign_source_2671;
        tmp_assign_source_2671 = mod_consts[3272];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3273], tmp_assign_source_2671);
    }
    {
        PyObject *tmp_assign_source_2672;
        tmp_assign_source_2672 = mod_consts[3274];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3275], tmp_assign_source_2672);
    }
    {
        PyObject *tmp_assign_source_2673;
        tmp_assign_source_2673 = mod_consts[3276];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3277], tmp_assign_source_2673);
    }
    {
        PyObject *tmp_assign_source_2674;
        tmp_assign_source_2674 = mod_consts[3278];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3279], tmp_assign_source_2674);
    }
    {
        PyObject *tmp_assign_source_2675;
        tmp_assign_source_2675 = mod_consts[3280];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3281], tmp_assign_source_2675);
    }
    {
        PyObject *tmp_assign_source_2676;
        tmp_assign_source_2676 = mod_consts[3282];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3283], tmp_assign_source_2676);
    }
    {
        PyObject *tmp_assign_source_2677;
        tmp_assign_source_2677 = mod_consts[3284];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3285], tmp_assign_source_2677);
    }
    {
        PyObject *tmp_assign_source_2678;
        tmp_assign_source_2678 = mod_consts[3286];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3287], tmp_assign_source_2678);
    }
    {
        PyObject *tmp_assign_source_2679;
        tmp_assign_source_2679 = mod_consts[3288];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3289], tmp_assign_source_2679);
    }
    {
        PyObject *tmp_assign_source_2680;
        tmp_assign_source_2680 = mod_consts[3290];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3291], tmp_assign_source_2680);
    }
    {
        PyObject *tmp_assign_source_2681;
        tmp_assign_source_2681 = mod_consts[3292];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3293], tmp_assign_source_2681);
    }
    {
        PyObject *tmp_assign_source_2682;
        tmp_assign_source_2682 = mod_consts[3294];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3295], tmp_assign_source_2682);
    }
    {
        PyObject *tmp_assign_source_2683;
        tmp_assign_source_2683 = mod_consts[3296];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3297], tmp_assign_source_2683);
    }
    {
        PyObject *tmp_assign_source_2684;
        tmp_assign_source_2684 = mod_consts[3298];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3299], tmp_assign_source_2684);
    }
    {
        PyObject *tmp_assign_source_2685;
        tmp_assign_source_2685 = mod_consts[3300];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3301], tmp_assign_source_2685);
    }
    {
        PyObject *tmp_assign_source_2686;
        tmp_assign_source_2686 = mod_consts[3302];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3303], tmp_assign_source_2686);
    }
    {
        PyObject *tmp_assign_source_2687;
        tmp_assign_source_2687 = mod_consts[3304];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3305], tmp_assign_source_2687);
    }
    {
        PyObject *tmp_assign_source_2688;
        tmp_assign_source_2688 = mod_consts[3306];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3307], tmp_assign_source_2688);
    }
    {
        PyObject *tmp_assign_source_2689;
        tmp_assign_source_2689 = mod_consts[3308];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3309], tmp_assign_source_2689);
    }
    {
        PyObject *tmp_assign_source_2690;
        tmp_assign_source_2690 = mod_consts[3310];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3311], tmp_assign_source_2690);
    }
    {
        PyObject *tmp_assign_source_2691;
        tmp_assign_source_2691 = mod_consts[3312];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3313], tmp_assign_source_2691);
    }
    {
        PyObject *tmp_assign_source_2692;
        tmp_assign_source_2692 = mod_consts[3314];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3315], tmp_assign_source_2692);
    }
    {
        PyObject *tmp_assign_source_2693;
        tmp_assign_source_2693 = mod_consts[3316];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3317], tmp_assign_source_2693);
    }
    {
        PyObject *tmp_assign_source_2694;
        tmp_assign_source_2694 = mod_consts[3318];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3319], tmp_assign_source_2694);
    }
    {
        PyObject *tmp_assign_source_2695;
        tmp_assign_source_2695 = mod_consts[3320];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3321], tmp_assign_source_2695);
    }
    {
        PyObject *tmp_assign_source_2696;
        tmp_assign_source_2696 = mod_consts[3322];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3323], tmp_assign_source_2696);
    }
    {
        PyObject *tmp_assign_source_2697;
        tmp_assign_source_2697 = mod_consts[3324];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3325], tmp_assign_source_2697);
    }
    {
        PyObject *tmp_assign_source_2698;
        tmp_assign_source_2698 = mod_consts[3326];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3327], tmp_assign_source_2698);
    }
    {
        PyObject *tmp_assign_source_2699;
        tmp_assign_source_2699 = mod_consts[3328];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3329], tmp_assign_source_2699);
    }
    {
        PyObject *tmp_assign_source_2700;
        tmp_assign_source_2700 = mod_consts[3330];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3331], tmp_assign_source_2700);
    }
    {
        PyObject *tmp_assign_source_2701;
        tmp_assign_source_2701 = mod_consts[3332];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3333], tmp_assign_source_2701);
    }
    {
        PyObject *tmp_assign_source_2702;
        tmp_assign_source_2702 = mod_consts[3334];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3335], tmp_assign_source_2702);
    }
    {
        PyObject *tmp_assign_source_2703;
        tmp_assign_source_2703 = mod_consts[3336];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3337], tmp_assign_source_2703);
    }
    {
        PyObject *tmp_assign_source_2704;
        tmp_assign_source_2704 = mod_consts[3338];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3339], tmp_assign_source_2704);
    }
    {
        PyObject *tmp_assign_source_2705;
        tmp_assign_source_2705 = mod_consts[3340];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3341], tmp_assign_source_2705);
    }
    {
        PyObject *tmp_assign_source_2706;
        tmp_assign_source_2706 = mod_consts[3342];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3343], tmp_assign_source_2706);
    }
    {
        PyObject *tmp_assign_source_2707;
        tmp_assign_source_2707 = mod_consts[3344];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3345], tmp_assign_source_2707);
    }
    {
        PyObject *tmp_assign_source_2708;
        tmp_assign_source_2708 = mod_consts[3346];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3347], tmp_assign_source_2708);
    }
    {
        PyObject *tmp_assign_source_2709;
        tmp_assign_source_2709 = mod_consts[3348];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3349], tmp_assign_source_2709);
    }
    {
        PyObject *tmp_assign_source_2710;
        tmp_assign_source_2710 = mod_consts[3350];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3351], tmp_assign_source_2710);
    }
    {
        PyObject *tmp_assign_source_2711;
        tmp_assign_source_2711 = mod_consts[3352];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3353], tmp_assign_source_2711);
    }
    {
        PyObject *tmp_assign_source_2712;
        tmp_assign_source_2712 = mod_consts[3354];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3355], tmp_assign_source_2712);
    }
    {
        PyObject *tmp_assign_source_2713;
        tmp_assign_source_2713 = mod_consts[3356];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3357], tmp_assign_source_2713);
    }
    {
        PyObject *tmp_assign_source_2714;
        tmp_assign_source_2714 = mod_consts[3358];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3359], tmp_assign_source_2714);
    }
    {
        PyObject *tmp_assign_source_2715;
        tmp_assign_source_2715 = mod_consts[3360];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3361], tmp_assign_source_2715);
    }
    {
        PyObject *tmp_assign_source_2716;
        tmp_assign_source_2716 = mod_consts[3362];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3363], tmp_assign_source_2716);
    }
    {
        PyObject *tmp_assign_source_2717;
        tmp_assign_source_2717 = mod_consts[3364];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3365], tmp_assign_source_2717);
    }
    {
        PyObject *tmp_assign_source_2718;
        tmp_assign_source_2718 = mod_consts[3366];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3367], tmp_assign_source_2718);
    }
    {
        PyObject *tmp_assign_source_2719;
        tmp_assign_source_2719 = mod_consts[3368];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3369], tmp_assign_source_2719);
    }
    {
        PyObject *tmp_assign_source_2720;
        tmp_assign_source_2720 = mod_consts[3370];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3371], tmp_assign_source_2720);
    }
    {
        PyObject *tmp_assign_source_2721;
        tmp_assign_source_2721 = mod_consts[3372];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3373], tmp_assign_source_2721);
    }
    {
        PyObject *tmp_assign_source_2722;
        tmp_assign_source_2722 = mod_consts[3374];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3375], tmp_assign_source_2722);
    }
    {
        PyObject *tmp_assign_source_2723;
        tmp_assign_source_2723 = mod_consts[3376];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3377], tmp_assign_source_2723);
    }
    {
        PyObject *tmp_assign_source_2724;
        tmp_assign_source_2724 = mod_consts[3378];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3379], tmp_assign_source_2724);
    }
    {
        PyObject *tmp_assign_source_2725;
        tmp_assign_source_2725 = mod_consts[3380];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3381], tmp_assign_source_2725);
    }
    {
        PyObject *tmp_assign_source_2726;
        tmp_assign_source_2726 = mod_consts[3382];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3383], tmp_assign_source_2726);
    }
    {
        PyObject *tmp_assign_source_2727;
        tmp_assign_source_2727 = mod_consts[3384];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3385], tmp_assign_source_2727);
    }
    {
        PyObject *tmp_assign_source_2728;
        tmp_assign_source_2728 = mod_consts[3386];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3387], tmp_assign_source_2728);
    }
    {
        PyObject *tmp_assign_source_2729;
        tmp_assign_source_2729 = mod_consts[3388];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3389], tmp_assign_source_2729);
    }
    {
        PyObject *tmp_assign_source_2730;
        tmp_assign_source_2730 = mod_consts[3390];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3391], tmp_assign_source_2730);
    }
    {
        PyObject *tmp_assign_source_2731;
        tmp_assign_source_2731 = mod_consts[3392];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3393], tmp_assign_source_2731);
    }
    {
        PyObject *tmp_assign_source_2732;
        tmp_assign_source_2732 = mod_consts[3394];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3395], tmp_assign_source_2732);
    }
    {
        PyObject *tmp_assign_source_2733;
        tmp_assign_source_2733 = mod_consts[3396];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3397], tmp_assign_source_2733);
    }
    {
        PyObject *tmp_assign_source_2734;
        tmp_assign_source_2734 = mod_consts[3398];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3399], tmp_assign_source_2734);
    }
    {
        PyObject *tmp_assign_source_2735;
        tmp_assign_source_2735 = mod_consts[3400];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3401], tmp_assign_source_2735);
    }
    {
        PyObject *tmp_assign_source_2736;
        tmp_assign_source_2736 = mod_consts[3402];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3403], tmp_assign_source_2736);
    }
    {
        PyObject *tmp_assign_source_2737;
        tmp_assign_source_2737 = mod_consts[3404];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3405], tmp_assign_source_2737);
    }
    {
        PyObject *tmp_assign_source_2738;
        tmp_assign_source_2738 = mod_consts[3406];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3407], tmp_assign_source_2738);
    }
    {
        PyObject *tmp_assign_source_2739;
        tmp_assign_source_2739 = mod_consts[3408];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3409], tmp_assign_source_2739);
    }
    {
        PyObject *tmp_assign_source_2740;
        tmp_assign_source_2740 = mod_consts[3410];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3411], tmp_assign_source_2740);
    }
    {
        PyObject *tmp_assign_source_2741;
        tmp_assign_source_2741 = mod_consts[3412];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3413], tmp_assign_source_2741);
    }
    {
        PyObject *tmp_assign_source_2742;
        tmp_assign_source_2742 = mod_consts[3414];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3415], tmp_assign_source_2742);
    }
    {
        PyObject *tmp_assign_source_2743;
        tmp_assign_source_2743 = mod_consts[3416];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3417], tmp_assign_source_2743);
    }
    {
        PyObject *tmp_assign_source_2744;
        tmp_assign_source_2744 = mod_consts[3418];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3419], tmp_assign_source_2744);
    }
    {
        PyObject *tmp_assign_source_2745;
        tmp_assign_source_2745 = mod_consts[3420];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3421], tmp_assign_source_2745);
    }
    {
        PyObject *tmp_assign_source_2746;
        tmp_assign_source_2746 = mod_consts[3422];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3423], tmp_assign_source_2746);
    }
    {
        PyObject *tmp_assign_source_2747;
        tmp_assign_source_2747 = mod_consts[3424];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3425], tmp_assign_source_2747);
    }
    {
        PyObject *tmp_assign_source_2748;
        tmp_assign_source_2748 = mod_consts[3426];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3427], tmp_assign_source_2748);
    }
    {
        PyObject *tmp_assign_source_2749;
        tmp_assign_source_2749 = mod_consts[3428];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3429], tmp_assign_source_2749);
    }
    {
        PyObject *tmp_assign_source_2750;
        tmp_assign_source_2750 = mod_consts[3430];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3431], tmp_assign_source_2750);
    }
    {
        PyObject *tmp_assign_source_2751;
        tmp_assign_source_2751 = mod_consts[3432];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3433], tmp_assign_source_2751);
    }
    {
        PyObject *tmp_assign_source_2752;
        tmp_assign_source_2752 = mod_consts[3434];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3435], tmp_assign_source_2752);
    }
    {
        PyObject *tmp_assign_source_2753;
        tmp_assign_source_2753 = mod_consts[3436];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3437], tmp_assign_source_2753);
    }
    {
        PyObject *tmp_assign_source_2754;
        tmp_assign_source_2754 = mod_consts[3438];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3439], tmp_assign_source_2754);
    }
    {
        PyObject *tmp_assign_source_2755;
        tmp_assign_source_2755 = mod_consts[3440];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3441], tmp_assign_source_2755);
    }
    {
        PyObject *tmp_assign_source_2756;
        tmp_assign_source_2756 = mod_consts[3442];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3443], tmp_assign_source_2756);
    }
    {
        PyObject *tmp_assign_source_2757;
        tmp_assign_source_2757 = mod_consts[3444];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3445], tmp_assign_source_2757);
    }
    {
        PyObject *tmp_assign_source_2758;
        tmp_assign_source_2758 = mod_consts[3446];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3447], tmp_assign_source_2758);
    }
    {
        PyObject *tmp_assign_source_2759;
        tmp_assign_source_2759 = mod_consts[3448];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3449], tmp_assign_source_2759);
    }
    {
        PyObject *tmp_assign_source_2760;
        tmp_assign_source_2760 = mod_consts[3450];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3451], tmp_assign_source_2760);
    }
    {
        PyObject *tmp_assign_source_2761;
        tmp_assign_source_2761 = mod_consts[3452];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3453], tmp_assign_source_2761);
    }
    {
        PyObject *tmp_assign_source_2762;
        tmp_assign_source_2762 = mod_consts[3454];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3455], tmp_assign_source_2762);
    }
    {
        PyObject *tmp_assign_source_2763;
        tmp_assign_source_2763 = mod_consts[3456];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3457], tmp_assign_source_2763);
    }
    {
        PyObject *tmp_assign_source_2764;
        tmp_assign_source_2764 = mod_consts[3458];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3459], tmp_assign_source_2764);
    }
    {
        PyObject *tmp_assign_source_2765;
        tmp_assign_source_2765 = mod_consts[3460];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3461], tmp_assign_source_2765);
    }
    {
        PyObject *tmp_assign_source_2766;
        tmp_assign_source_2766 = mod_consts[3462];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3463], tmp_assign_source_2766);
    }
    {
        PyObject *tmp_assign_source_2767;
        tmp_assign_source_2767 = mod_consts[3464];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3465], tmp_assign_source_2767);
    }
    {
        PyObject *tmp_assign_source_2768;
        tmp_assign_source_2768 = mod_consts[3466];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3467], tmp_assign_source_2768);
    }
    {
        PyObject *tmp_assign_source_2769;
        tmp_assign_source_2769 = mod_consts[3468];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3469], tmp_assign_source_2769);
    }
    {
        PyObject *tmp_assign_source_2770;
        tmp_assign_source_2770 = mod_consts[3470];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3471], tmp_assign_source_2770);
    }
    {
        PyObject *tmp_assign_source_2771;
        tmp_assign_source_2771 = mod_consts[3472];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3473], tmp_assign_source_2771);
    }
    {
        PyObject *tmp_assign_source_2772;
        tmp_assign_source_2772 = mod_consts[3474];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3475], tmp_assign_source_2772);
    }
    {
        PyObject *tmp_assign_source_2773;
        tmp_assign_source_2773 = mod_consts[3476];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3477], tmp_assign_source_2773);
    }
    {
        PyObject *tmp_assign_source_2774;
        tmp_assign_source_2774 = mod_consts[3478];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3479], tmp_assign_source_2774);
    }
    {
        PyObject *tmp_assign_source_2775;
        tmp_assign_source_2775 = mod_consts[3480];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3481], tmp_assign_source_2775);
    }
    {
        PyObject *tmp_assign_source_2776;
        tmp_assign_source_2776 = mod_consts[3482];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3483], tmp_assign_source_2776);
    }
    {
        PyObject *tmp_assign_source_2777;
        tmp_assign_source_2777 = mod_consts[3484];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3485], tmp_assign_source_2777);
    }
    {
        PyObject *tmp_assign_source_2778;
        tmp_assign_source_2778 = mod_consts[3486];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3487], tmp_assign_source_2778);
    }
    {
        PyObject *tmp_assign_source_2779;
        tmp_assign_source_2779 = mod_consts[3488];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3489], tmp_assign_source_2779);
    }
    {
        PyObject *tmp_assign_source_2780;
        tmp_assign_source_2780 = mod_consts[3490];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3491], tmp_assign_source_2780);
    }
    {
        PyObject *tmp_assign_source_2781;
        tmp_assign_source_2781 = mod_consts[3492];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3493], tmp_assign_source_2781);
    }
    {
        PyObject *tmp_assign_source_2782;
        tmp_assign_source_2782 = mod_consts[3494];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3495], tmp_assign_source_2782);
    }
    {
        PyObject *tmp_assign_source_2783;
        tmp_assign_source_2783 = mod_consts[3496];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3497], tmp_assign_source_2783);
    }
    {
        PyObject *tmp_assign_source_2784;
        tmp_assign_source_2784 = mod_consts[3498];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3499], tmp_assign_source_2784);
    }
    {
        PyObject *tmp_assign_source_2785;
        tmp_assign_source_2785 = mod_consts[3500];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3501], tmp_assign_source_2785);
    }
    {
        PyObject *tmp_assign_source_2786;
        tmp_assign_source_2786 = mod_consts[3502];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3503], tmp_assign_source_2786);
    }
    {
        PyObject *tmp_assign_source_2787;
        tmp_assign_source_2787 = mod_consts[3504];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3505], tmp_assign_source_2787);
    }
    {
        PyObject *tmp_assign_source_2788;
        tmp_assign_source_2788 = mod_consts[3506];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3507], tmp_assign_source_2788);
    }
    {
        PyObject *tmp_assign_source_2789;
        tmp_assign_source_2789 = mod_consts[3508];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3509], tmp_assign_source_2789);
    }
    {
        PyObject *tmp_assign_source_2790;
        tmp_assign_source_2790 = mod_consts[3510];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3511], tmp_assign_source_2790);
    }
    {
        PyObject *tmp_assign_source_2791;
        tmp_assign_source_2791 = mod_consts[3512];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3513], tmp_assign_source_2791);
    }
    {
        PyObject *tmp_assign_source_2792;
        tmp_assign_source_2792 = mod_consts[3514];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3515], tmp_assign_source_2792);
    }
    {
        PyObject *tmp_assign_source_2793;
        tmp_assign_source_2793 = mod_consts[3516];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3517], tmp_assign_source_2793);
    }
    {
        PyObject *tmp_assign_source_2794;
        tmp_assign_source_2794 = mod_consts[3518];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3519], tmp_assign_source_2794);
    }
    {
        PyObject *tmp_assign_source_2795;
        tmp_assign_source_2795 = mod_consts[3520];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3521], tmp_assign_source_2795);
    }
    {
        PyObject *tmp_assign_source_2796;
        tmp_assign_source_2796 = mod_consts[3522];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3523], tmp_assign_source_2796);
    }
    {
        PyObject *tmp_assign_source_2797;
        tmp_assign_source_2797 = mod_consts[3524];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3525], tmp_assign_source_2797);
    }
    {
        PyObject *tmp_assign_source_2798;
        tmp_assign_source_2798 = mod_consts[3526];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3527], tmp_assign_source_2798);
    }
    {
        PyObject *tmp_assign_source_2799;
        tmp_assign_source_2799 = mod_consts[3528];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3529], tmp_assign_source_2799);
    }
    {
        PyObject *tmp_assign_source_2800;
        tmp_assign_source_2800 = mod_consts[3530];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3531], tmp_assign_source_2800);
    }
    {
        PyObject *tmp_assign_source_2801;
        tmp_assign_source_2801 = mod_consts[3532];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3533], tmp_assign_source_2801);
    }
    {
        PyObject *tmp_assign_source_2802;
        tmp_assign_source_2802 = mod_consts[3534];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3535], tmp_assign_source_2802);
    }
    {
        PyObject *tmp_assign_source_2803;
        tmp_assign_source_2803 = mod_consts[3536];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3537], tmp_assign_source_2803);
    }
    {
        PyObject *tmp_assign_source_2804;
        tmp_assign_source_2804 = mod_consts[3538];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3539], tmp_assign_source_2804);
    }
    {
        PyObject *tmp_assign_source_2805;
        tmp_assign_source_2805 = mod_consts[3540];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3541], tmp_assign_source_2805);
    }
    {
        PyObject *tmp_assign_source_2806;
        tmp_assign_source_2806 = mod_consts[3542];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3543], tmp_assign_source_2806);
    }
    {
        PyObject *tmp_assign_source_2807;
        tmp_assign_source_2807 = mod_consts[3544];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3545], tmp_assign_source_2807);
    }
    {
        PyObject *tmp_assign_source_2808;
        tmp_assign_source_2808 = mod_consts[3546];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3547], tmp_assign_source_2808);
    }
    {
        PyObject *tmp_assign_source_2809;
        tmp_assign_source_2809 = mod_consts[3548];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3549], tmp_assign_source_2809);
    }
    {
        PyObject *tmp_assign_source_2810;
        tmp_assign_source_2810 = mod_consts[3550];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3551], tmp_assign_source_2810);
    }
    {
        PyObject *tmp_assign_source_2811;
        tmp_assign_source_2811 = mod_consts[3552];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3553], tmp_assign_source_2811);
    }
    {
        PyObject *tmp_assign_source_2812;
        tmp_assign_source_2812 = mod_consts[3554];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3555], tmp_assign_source_2812);
    }
    {
        PyObject *tmp_assign_source_2813;
        tmp_assign_source_2813 = mod_consts[3556];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3557], tmp_assign_source_2813);
    }
    {
        PyObject *tmp_assign_source_2814;
        tmp_assign_source_2814 = mod_consts[3558];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3559], tmp_assign_source_2814);
    }
    {
        PyObject *tmp_assign_source_2815;
        tmp_assign_source_2815 = mod_consts[3560];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3561], tmp_assign_source_2815);
    }
    {
        PyObject *tmp_assign_source_2816;
        tmp_assign_source_2816 = mod_consts[3562];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3563], tmp_assign_source_2816);
    }
    {
        PyObject *tmp_assign_source_2817;
        tmp_assign_source_2817 = mod_consts[3564];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3565], tmp_assign_source_2817);
    }
    {
        PyObject *tmp_assign_source_2818;
        tmp_assign_source_2818 = mod_consts[3566];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3567], tmp_assign_source_2818);
    }
    {
        PyObject *tmp_assign_source_2819;
        tmp_assign_source_2819 = mod_consts[3568];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3569], tmp_assign_source_2819);
    }
    {
        PyObject *tmp_assign_source_2820;
        tmp_assign_source_2820 = mod_consts[3570];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3571], tmp_assign_source_2820);
    }
    {
        PyObject *tmp_assign_source_2821;
        tmp_assign_source_2821 = mod_consts[3572];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3573], tmp_assign_source_2821);
    }
    {
        PyObject *tmp_assign_source_2822;
        tmp_assign_source_2822 = mod_consts[3574];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3575], tmp_assign_source_2822);
    }
    {
        PyObject *tmp_assign_source_2823;
        tmp_assign_source_2823 = mod_consts[3576];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3577], tmp_assign_source_2823);
    }
    {
        PyObject *tmp_assign_source_2824;
        tmp_assign_source_2824 = mod_consts[3578];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3579], tmp_assign_source_2824);
    }
    {
        PyObject *tmp_assign_source_2825;
        tmp_assign_source_2825 = mod_consts[3580];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3581], tmp_assign_source_2825);
    }
    {
        PyObject *tmp_assign_source_2826;
        tmp_assign_source_2826 = mod_consts[3582];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3583], tmp_assign_source_2826);
    }
    {
        PyObject *tmp_assign_source_2827;
        tmp_assign_source_2827 = mod_consts[3584];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3585], tmp_assign_source_2827);
    }
    {
        PyObject *tmp_assign_source_2828;
        tmp_assign_source_2828 = mod_consts[3586];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3587], tmp_assign_source_2828);
    }
    {
        PyObject *tmp_assign_source_2829;
        tmp_assign_source_2829 = mod_consts[3588];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3589], tmp_assign_source_2829);
    }
    {
        PyObject *tmp_assign_source_2830;
        tmp_assign_source_2830 = mod_consts[3590];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3591], tmp_assign_source_2830);
    }
    {
        PyObject *tmp_assign_source_2831;
        tmp_assign_source_2831 = mod_consts[3592];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3593], tmp_assign_source_2831);
    }
    {
        PyObject *tmp_assign_source_2832;
        tmp_assign_source_2832 = mod_consts[3594];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3595], tmp_assign_source_2832);
    }
    {
        PyObject *tmp_assign_source_2833;
        tmp_assign_source_2833 = mod_consts[3596];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3597], tmp_assign_source_2833);
    }
    {
        PyObject *tmp_assign_source_2834;
        tmp_assign_source_2834 = mod_consts[3598];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3599], tmp_assign_source_2834);
    }
    {
        PyObject *tmp_assign_source_2835;
        tmp_assign_source_2835 = mod_consts[3600];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3601], tmp_assign_source_2835);
    }
    {
        PyObject *tmp_assign_source_2836;
        tmp_assign_source_2836 = mod_consts[3602];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3603], tmp_assign_source_2836);
    }
    {
        PyObject *tmp_assign_source_2837;
        tmp_assign_source_2837 = mod_consts[3604];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3605], tmp_assign_source_2837);
    }
    {
        PyObject *tmp_assign_source_2838;
        tmp_assign_source_2838 = mod_consts[3606];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3607], tmp_assign_source_2838);
    }
    {
        PyObject *tmp_assign_source_2839;
        tmp_assign_source_2839 = mod_consts[3608];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3609], tmp_assign_source_2839);
    }
    {
        PyObject *tmp_assign_source_2840;
        tmp_assign_source_2840 = mod_consts[3610];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3611], tmp_assign_source_2840);
    }
    {
        PyObject *tmp_assign_source_2841;
        tmp_assign_source_2841 = mod_consts[3612];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3613], tmp_assign_source_2841);
    }
    {
        PyObject *tmp_assign_source_2842;
        tmp_assign_source_2842 = mod_consts[3614];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3615], tmp_assign_source_2842);
    }
    {
        PyObject *tmp_assign_source_2843;
        tmp_assign_source_2843 = mod_consts[3616];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3617], tmp_assign_source_2843);
    }
    {
        PyObject *tmp_assign_source_2844;
        tmp_assign_source_2844 = mod_consts[3618];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3619], tmp_assign_source_2844);
    }
    {
        PyObject *tmp_assign_source_2845;
        tmp_assign_source_2845 = mod_consts[3620];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3621], tmp_assign_source_2845);
    }
    {
        PyObject *tmp_assign_source_2846;
        tmp_assign_source_2846 = mod_consts[3622];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3623], tmp_assign_source_2846);
    }
    {
        PyObject *tmp_assign_source_2847;
        tmp_assign_source_2847 = mod_consts[3624];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3625], tmp_assign_source_2847);
    }
    {
        PyObject *tmp_assign_source_2848;
        tmp_assign_source_2848 = mod_consts[3626];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3627], tmp_assign_source_2848);
    }
    {
        PyObject *tmp_assign_source_2849;
        tmp_assign_source_2849 = mod_consts[3628];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3629], tmp_assign_source_2849);
    }
    {
        PyObject *tmp_assign_source_2850;
        tmp_assign_source_2850 = mod_consts[3630];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3631], tmp_assign_source_2850);
    }
    {
        PyObject *tmp_assign_source_2851;
        tmp_assign_source_2851 = mod_consts[3632];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3633], tmp_assign_source_2851);
    }
    {
        PyObject *tmp_assign_source_2852;
        tmp_assign_source_2852 = mod_consts[3634];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3635], tmp_assign_source_2852);
    }
    {
        PyObject *tmp_assign_source_2853;
        tmp_assign_source_2853 = mod_consts[3636];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3637], tmp_assign_source_2853);
    }
    {
        PyObject *tmp_assign_source_2854;
        tmp_assign_source_2854 = mod_consts[3638];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3639], tmp_assign_source_2854);
    }
    {
        PyObject *tmp_assign_source_2855;
        tmp_assign_source_2855 = mod_consts[3640];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3641], tmp_assign_source_2855);
    }
    {
        PyObject *tmp_assign_source_2856;
        tmp_assign_source_2856 = mod_consts[3642];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3643], tmp_assign_source_2856);
    }
    {
        PyObject *tmp_assign_source_2857;
        tmp_assign_source_2857 = mod_consts[3644];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3645], tmp_assign_source_2857);
    }
    {
        PyObject *tmp_assign_source_2858;
        tmp_assign_source_2858 = mod_consts[3646];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3647], tmp_assign_source_2858);
    }
    {
        PyObject *tmp_assign_source_2859;
        tmp_assign_source_2859 = mod_consts[3648];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3649], tmp_assign_source_2859);
    }
    {
        PyObject *tmp_assign_source_2860;
        tmp_assign_source_2860 = mod_consts[3650];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3651], tmp_assign_source_2860);
    }
    {
        PyObject *tmp_assign_source_2861;
        tmp_assign_source_2861 = mod_consts[3652];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3653], tmp_assign_source_2861);
    }
    {
        PyObject *tmp_assign_source_2862;
        tmp_assign_source_2862 = mod_consts[3654];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3655], tmp_assign_source_2862);
    }
    {
        PyObject *tmp_assign_source_2863;
        tmp_assign_source_2863 = mod_consts[3656];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3657], tmp_assign_source_2863);
    }
    {
        PyObject *tmp_assign_source_2864;
        tmp_assign_source_2864 = mod_consts[3658];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3659], tmp_assign_source_2864);
    }
    {
        PyObject *tmp_assign_source_2865;
        tmp_assign_source_2865 = mod_consts[3660];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3661], tmp_assign_source_2865);
    }
    {
        PyObject *tmp_assign_source_2866;
        tmp_assign_source_2866 = mod_consts[3662];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3663], tmp_assign_source_2866);
    }
    {
        PyObject *tmp_assign_source_2867;
        tmp_assign_source_2867 = mod_consts[3664];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3665], tmp_assign_source_2867);
    }
    {
        PyObject *tmp_assign_source_2868;
        tmp_assign_source_2868 = mod_consts[3666];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3667], tmp_assign_source_2868);
    }
    {
        PyObject *tmp_assign_source_2869;
        tmp_assign_source_2869 = mod_consts[3668];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3669], tmp_assign_source_2869);
    }
    {
        PyObject *tmp_assign_source_2870;
        tmp_assign_source_2870 = mod_consts[3670];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3671], tmp_assign_source_2870);
    }
    {
        PyObject *tmp_assign_source_2871;
        tmp_assign_source_2871 = mod_consts[3672];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3673], tmp_assign_source_2871);
    }
    {
        PyObject *tmp_assign_source_2872;
        tmp_assign_source_2872 = mod_consts[3674];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3675], tmp_assign_source_2872);
    }
    {
        PyObject *tmp_assign_source_2873;
        tmp_assign_source_2873 = mod_consts[3676];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3677], tmp_assign_source_2873);
    }
    {
        PyObject *tmp_assign_source_2874;
        tmp_assign_source_2874 = mod_consts[3678];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3679], tmp_assign_source_2874);
    }
    {
        PyObject *tmp_assign_source_2875;
        tmp_assign_source_2875 = mod_consts[3680];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3681], tmp_assign_source_2875);
    }
    {
        PyObject *tmp_assign_source_2876;
        tmp_assign_source_2876 = mod_consts[3682];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3683], tmp_assign_source_2876);
    }
    {
        PyObject *tmp_assign_source_2877;
        tmp_assign_source_2877 = mod_consts[3684];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3685], tmp_assign_source_2877);
    }
    {
        PyObject *tmp_assign_source_2878;
        tmp_assign_source_2878 = mod_consts[3686];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3687], tmp_assign_source_2878);
    }
    {
        PyObject *tmp_assign_source_2879;
        tmp_assign_source_2879 = mod_consts[3688];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3689], tmp_assign_source_2879);
    }
    {
        PyObject *tmp_assign_source_2880;
        tmp_assign_source_2880 = mod_consts[3690];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3691], tmp_assign_source_2880);
    }
    {
        PyObject *tmp_assign_source_2881;
        tmp_assign_source_2881 = mod_consts[3692];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3693], tmp_assign_source_2881);
    }
    {
        PyObject *tmp_assign_source_2882;
        tmp_assign_source_2882 = mod_consts[3694];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3695], tmp_assign_source_2882);
    }
    {
        PyObject *tmp_assign_source_2883;
        tmp_assign_source_2883 = mod_consts[3696];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3697], tmp_assign_source_2883);
    }
    {
        PyObject *tmp_assign_source_2884;
        tmp_assign_source_2884 = mod_consts[3698];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3699], tmp_assign_source_2884);
    }
    {
        PyObject *tmp_assign_source_2885;
        tmp_assign_source_2885 = mod_consts[3700];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3701], tmp_assign_source_2885);
    }
    {
        PyObject *tmp_assign_source_2886;
        tmp_assign_source_2886 = mod_consts[3702];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3703], tmp_assign_source_2886);
    }
    {
        PyObject *tmp_assign_source_2887;
        tmp_assign_source_2887 = mod_consts[3704];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3705], tmp_assign_source_2887);
    }
    {
        PyObject *tmp_assign_source_2888;
        tmp_assign_source_2888 = mod_consts[3706];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3707], tmp_assign_source_2888);
    }
    {
        PyObject *tmp_assign_source_2889;
        tmp_assign_source_2889 = mod_consts[3708];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3709], tmp_assign_source_2889);
    }
    {
        PyObject *tmp_assign_source_2890;
        tmp_assign_source_2890 = mod_consts[3710];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3711], tmp_assign_source_2890);
    }
    {
        PyObject *tmp_assign_source_2891;
        tmp_assign_source_2891 = mod_consts[3712];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3713], tmp_assign_source_2891);
    }
    {
        PyObject *tmp_assign_source_2892;
        tmp_assign_source_2892 = mod_consts[3714];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3715], tmp_assign_source_2892);
    }
    {
        PyObject *tmp_assign_source_2893;
        tmp_assign_source_2893 = mod_consts[3716];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3717], tmp_assign_source_2893);
    }
    {
        PyObject *tmp_assign_source_2894;
        tmp_assign_source_2894 = mod_consts[3718];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3719], tmp_assign_source_2894);
    }
    {
        PyObject *tmp_assign_source_2895;
        tmp_assign_source_2895 = mod_consts[3720];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3721], tmp_assign_source_2895);
    }
    {
        PyObject *tmp_assign_source_2896;
        tmp_assign_source_2896 = mod_consts[3722];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3723], tmp_assign_source_2896);
    }
    {
        PyObject *tmp_assign_source_2897;
        tmp_assign_source_2897 = mod_consts[3724];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3725], tmp_assign_source_2897);
    }
    {
        PyObject *tmp_assign_source_2898;
        tmp_assign_source_2898 = mod_consts[3726];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3727], tmp_assign_source_2898);
    }
    {
        PyObject *tmp_assign_source_2899;
        tmp_assign_source_2899 = mod_consts[3728];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3729], tmp_assign_source_2899);
    }
    {
        PyObject *tmp_assign_source_2900;
        tmp_assign_source_2900 = mod_consts[3730];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3731], tmp_assign_source_2900);
    }
    {
        PyObject *tmp_assign_source_2901;
        tmp_assign_source_2901 = mod_consts[3732];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3733], tmp_assign_source_2901);
    }
    {
        PyObject *tmp_assign_source_2902;
        tmp_assign_source_2902 = mod_consts[3734];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3735], tmp_assign_source_2902);
    }
    {
        PyObject *tmp_assign_source_2903;
        tmp_assign_source_2903 = mod_consts[3736];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3737], tmp_assign_source_2903);
    }
    {
        PyObject *tmp_assign_source_2904;
        tmp_assign_source_2904 = mod_consts[3738];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3739], tmp_assign_source_2904);
    }
    {
        PyObject *tmp_assign_source_2905;
        tmp_assign_source_2905 = mod_consts[3740];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3741], tmp_assign_source_2905);
    }
    {
        PyObject *tmp_assign_source_2906;
        tmp_assign_source_2906 = mod_consts[3742];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3743], tmp_assign_source_2906);
    }
    {
        PyObject *tmp_assign_source_2907;
        tmp_assign_source_2907 = mod_consts[3744];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3745], tmp_assign_source_2907);
    }
    {
        PyObject *tmp_assign_source_2908;
        tmp_assign_source_2908 = mod_consts[3746];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3747], tmp_assign_source_2908);
    }
    {
        PyObject *tmp_assign_source_2909;
        tmp_assign_source_2909 = mod_consts[3748];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3749], tmp_assign_source_2909);
    }
    {
        PyObject *tmp_assign_source_2910;
        tmp_assign_source_2910 = mod_consts[3750];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3751], tmp_assign_source_2910);
    }
    {
        PyObject *tmp_assign_source_2911;
        tmp_assign_source_2911 = mod_consts[3752];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3753], tmp_assign_source_2911);
    }
    {
        PyObject *tmp_assign_source_2912;
        tmp_assign_source_2912 = mod_consts[3754];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3755], tmp_assign_source_2912);
    }
    {
        PyObject *tmp_assign_source_2913;
        tmp_assign_source_2913 = mod_consts[3756];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3757], tmp_assign_source_2913);
    }
    {
        PyObject *tmp_assign_source_2914;
        tmp_assign_source_2914 = mod_consts[3758];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3759], tmp_assign_source_2914);
    }
    {
        PyObject *tmp_assign_source_2915;
        tmp_assign_source_2915 = mod_consts[3760];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3761], tmp_assign_source_2915);
    }
    {
        PyObject *tmp_assign_source_2916;
        tmp_assign_source_2916 = mod_consts[3762];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3763], tmp_assign_source_2916);
    }
    {
        PyObject *tmp_assign_source_2917;
        tmp_assign_source_2917 = mod_consts[3764];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3765], tmp_assign_source_2917);
    }
    {
        PyObject *tmp_assign_source_2918;
        tmp_assign_source_2918 = mod_consts[3766];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3767], tmp_assign_source_2918);
    }
    {
        PyObject *tmp_assign_source_2919;
        tmp_assign_source_2919 = mod_consts[3768];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3769], tmp_assign_source_2919);
    }
    {
        PyObject *tmp_assign_source_2920;
        tmp_assign_source_2920 = mod_consts[3770];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3771], tmp_assign_source_2920);
    }
    {
        PyObject *tmp_assign_source_2921;
        tmp_assign_source_2921 = mod_consts[3772];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3773], tmp_assign_source_2921);
    }
    {
        PyObject *tmp_assign_source_2922;
        tmp_assign_source_2922 = mod_consts[3774];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3775], tmp_assign_source_2922);
    }
    {
        PyObject *tmp_assign_source_2923;
        tmp_assign_source_2923 = mod_consts[3776];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3777], tmp_assign_source_2923);
    }
    {
        PyObject *tmp_assign_source_2924;
        tmp_assign_source_2924 = mod_consts[3778];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3779], tmp_assign_source_2924);
    }
    {
        PyObject *tmp_assign_source_2925;
        tmp_assign_source_2925 = mod_consts[3780];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3781], tmp_assign_source_2925);
    }
    {
        PyObject *tmp_assign_source_2926;
        tmp_assign_source_2926 = mod_consts[3782];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3783], tmp_assign_source_2926);
    }
    {
        PyObject *tmp_assign_source_2927;
        tmp_assign_source_2927 = mod_consts[3784];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3785], tmp_assign_source_2927);
    }
    {
        PyObject *tmp_assign_source_2928;
        tmp_assign_source_2928 = mod_consts[3786];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3787], tmp_assign_source_2928);
    }
    {
        PyObject *tmp_assign_source_2929;
        tmp_assign_source_2929 = mod_consts[3788];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3789], tmp_assign_source_2929);
    }
    {
        PyObject *tmp_assign_source_2930;
        tmp_assign_source_2930 = mod_consts[3790];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3791], tmp_assign_source_2930);
    }
    {
        PyObject *tmp_assign_source_2931;
        tmp_assign_source_2931 = mod_consts[3792];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3793], tmp_assign_source_2931);
    }
    {
        PyObject *tmp_assign_source_2932;
        tmp_assign_source_2932 = mod_consts[3794];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3795], tmp_assign_source_2932);
    }
    {
        PyObject *tmp_assign_source_2933;
        tmp_assign_source_2933 = mod_consts[3796];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3797], tmp_assign_source_2933);
    }
    {
        PyObject *tmp_assign_source_2934;
        tmp_assign_source_2934 = mod_consts[3798];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3799], tmp_assign_source_2934);
    }
    {
        PyObject *tmp_assign_source_2935;
        tmp_assign_source_2935 = mod_consts[3800];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3801], tmp_assign_source_2935);
    }
    {
        PyObject *tmp_assign_source_2936;
        tmp_assign_source_2936 = mod_consts[3802];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3803], tmp_assign_source_2936);
    }
    {
        PyObject *tmp_assign_source_2937;
        tmp_assign_source_2937 = mod_consts[3804];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3805], tmp_assign_source_2937);
    }
    {
        PyObject *tmp_assign_source_2938;
        tmp_assign_source_2938 = mod_consts[3806];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3807], tmp_assign_source_2938);
    }
    {
        PyObject *tmp_assign_source_2939;
        tmp_assign_source_2939 = mod_consts[3808];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3809], tmp_assign_source_2939);
    }
    {
        PyObject *tmp_assign_source_2940;
        tmp_assign_source_2940 = mod_consts[3810];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3811], tmp_assign_source_2940);
    }
    {
        PyObject *tmp_assign_source_2941;
        tmp_assign_source_2941 = mod_consts[3812];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3813], tmp_assign_source_2941);
    }
    {
        PyObject *tmp_assign_source_2942;
        tmp_assign_source_2942 = mod_consts[3814];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3815], tmp_assign_source_2942);
    }
    {
        PyObject *tmp_assign_source_2943;
        tmp_assign_source_2943 = mod_consts[3816];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3817], tmp_assign_source_2943);
    }
    {
        PyObject *tmp_assign_source_2944;
        tmp_assign_source_2944 = mod_consts[3818];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3819], tmp_assign_source_2944);
    }
    {
        PyObject *tmp_assign_source_2945;
        tmp_assign_source_2945 = mod_consts[3820];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3821], tmp_assign_source_2945);
    }
    {
        PyObject *tmp_assign_source_2946;
        tmp_assign_source_2946 = mod_consts[3822];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3823], tmp_assign_source_2946);
    }
    {
        PyObject *tmp_assign_source_2947;
        tmp_assign_source_2947 = mod_consts[3824];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3825], tmp_assign_source_2947);
    }
    {
        PyObject *tmp_assign_source_2948;
        tmp_assign_source_2948 = mod_consts[3826];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3827], tmp_assign_source_2948);
    }
    {
        PyObject *tmp_assign_source_2949;
        tmp_assign_source_2949 = mod_consts[3828];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3829], tmp_assign_source_2949);
    }
    {
        PyObject *tmp_assign_source_2950;
        tmp_assign_source_2950 = mod_consts[3830];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3831], tmp_assign_source_2950);
    }
    {
        PyObject *tmp_assign_source_2951;
        tmp_assign_source_2951 = mod_consts[3832];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[3833], tmp_assign_source_2951);
    }
    {
        PyObject *tmp_assign_source_2952;
        tmp_assign_source_2952 = mod_consts[1];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5027], tmp_assign_source_2952);
    }
    {
        PyObject *tmp_assign_source_2953;
        tmp_assign_source_2953 = mod_consts[2];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5028], tmp_assign_source_2953);
    }
    {
        PyObject *tmp_assign_source_2954;
        tmp_assign_source_2954 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5029], tmp_assign_source_2954);
    }
    {
        PyObject *tmp_assign_source_2955;
        tmp_assign_source_2955 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5030], tmp_assign_source_2955);
    }
    {
        PyObject *tmp_assign_source_2956;
        tmp_assign_source_2956 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5031], tmp_assign_source_2956);
    }
    {
        PyObject *tmp_assign_source_2957;
        tmp_assign_source_2957 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5032], tmp_assign_source_2957);
    }
    {
        PyObject *tmp_assign_source_2958;
        tmp_assign_source_2958 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5033], tmp_assign_source_2958);
    }
    {
        PyObject *tmp_assign_source_2959;
        tmp_assign_source_2959 = mod_consts[118];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5034], tmp_assign_source_2959);
    }
    {
        PyObject *tmp_assign_source_2960;
        tmp_assign_source_2960 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5035], tmp_assign_source_2960);
    }
    {
        PyObject *tmp_assign_source_2961;
        tmp_assign_source_2961 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5036], tmp_assign_source_2961);
    }
    {
        PyObject *tmp_assign_source_2962;
        tmp_assign_source_2962 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5037], tmp_assign_source_2962);
    }
    {
        PyObject *tmp_assign_source_2963;
        tmp_assign_source_2963 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5038], tmp_assign_source_2963);
    }
    {
        PyObject *tmp_assign_source_2964;
        tmp_assign_source_2964 = mod_consts[100];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5039], tmp_assign_source_2964);
    }
    {
        PyObject *tmp_assign_source_2965;
        tmp_assign_source_2965 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5040], tmp_assign_source_2965);
    }
    {
        PyObject *tmp_assign_source_2966;
        tmp_assign_source_2966 = mod_consts[5041];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5042], tmp_assign_source_2966);
    }
    {
        PyObject *tmp_assign_source_2967;
        tmp_assign_source_2967 = mod_consts[5043];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5044], tmp_assign_source_2967);
    }
    {
        PyObject *tmp_assign_source_2968;
        tmp_assign_source_2968 = mod_consts[5045];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5046], tmp_assign_source_2968);
    }
    {
        PyObject *tmp_assign_source_2969;
        tmp_assign_source_2969 = mod_consts[5047];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5048], tmp_assign_source_2969);
    }
    {
        PyObject *tmp_assign_source_2970;
        tmp_assign_source_2970 = mod_consts[2244];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5049], tmp_assign_source_2970);
    }
    {
        PyObject *tmp_assign_source_2971;
        tmp_assign_source_2971 = mod_consts[5050];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5051], tmp_assign_source_2971);
    }
    {
        PyObject *tmp_assign_source_2972;
        tmp_assign_source_2972 = mod_consts[5052];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5053], tmp_assign_source_2972);
    }
    {
        PyObject *tmp_assign_source_2973;
        tmp_assign_source_2973 = mod_consts[5054];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5055], tmp_assign_source_2973);
    }
    {
        PyObject *tmp_assign_source_2974;
        tmp_assign_source_2974 = mod_consts[5056];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5057], tmp_assign_source_2974);
    }
    {
        PyObject *tmp_assign_source_2975;
        tmp_assign_source_2975 = mod_consts[5058];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5059], tmp_assign_source_2975);
    }
    {
        PyObject *tmp_assign_source_2976;
        tmp_assign_source_2976 = mod_consts[5060];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5061], tmp_assign_source_2976);
    }
    {
        PyObject *tmp_assign_source_2977;
        tmp_assign_source_2977 = mod_consts[5062];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5063], tmp_assign_source_2977);
    }
    {
        PyObject *tmp_assign_source_2978;
        tmp_assign_source_2978 = mod_consts[5064];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5065], tmp_assign_source_2978);
    }
    {
        PyObject *tmp_assign_source_2979;
        tmp_assign_source_2979 = mod_consts[5066];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5067], tmp_assign_source_2979);
    }
    {
        PyObject *tmp_assign_source_2980;
        tmp_assign_source_2980 = mod_consts[5068];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5069], tmp_assign_source_2980);
    }
    {
        PyObject *tmp_assign_source_2981;
        tmp_assign_source_2981 = mod_consts[5070];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5071], tmp_assign_source_2981);
    }
    {
        PyObject *tmp_assign_source_2982;
        tmp_assign_source_2982 = mod_consts[5072];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5073], tmp_assign_source_2982);
    }
    {
        PyObject *tmp_assign_source_2983;
        tmp_assign_source_2983 = mod_consts[5074];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5075], tmp_assign_source_2983);
    }
    {
        PyObject *tmp_assign_source_2984;
        tmp_assign_source_2984 = mod_consts[5076];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5077], tmp_assign_source_2984);
    }
    {
        PyObject *tmp_assign_source_2985;
        tmp_assign_source_2985 = mod_consts[5078];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5079], tmp_assign_source_2985);
    }
    {
        PyObject *tmp_assign_source_2986;
        tmp_assign_source_2986 = mod_consts[5080];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5081], tmp_assign_source_2986);
    }
    {
        PyObject *tmp_assign_source_2987;
        tmp_assign_source_2987 = mod_consts[5082];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5083], tmp_assign_source_2987);
    }
    {
        PyObject *tmp_assign_source_2988;
        tmp_assign_source_2988 = mod_consts[5084];
        UPDATE_STRING_DICT0(moduledict_winerror, (Nuitka_StringObject *)mod_consts[5085], tmp_assign_source_2988);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("winerror", false);

    Py_INCREF(module_winerror);
    return module_winerror;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winerror, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("winerror", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
