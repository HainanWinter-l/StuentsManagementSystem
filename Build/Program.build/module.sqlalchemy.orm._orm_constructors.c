/* Generated code for Python module 'sqlalchemy.orm._orm_constructors'
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

/* The "module_sqlalchemy$orm$_orm_constructors" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlalchemy$orm$_orm_constructors;
PyDictObject *moduledict_sqlalchemy$orm$_orm_constructors;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[278];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[278];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("sqlalchemy.orm._orm_constructors"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 278; i++) {
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
void checkModuleConstants_sqlalchemy$orm$_orm_constructors(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 278; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_5a0f4f89632b2b9bd748fdd77da69b10;
static PyCodeObject *codeobj_0f745a2fc4cdf1e59a69c85ac8adb6cd;
static PyCodeObject *codeobj_b673cd6fdfad233d1ffb454cc3125c7a;
static PyCodeObject *codeobj_ee4d8dc448559735d122eeea3dff53ed;
static PyCodeObject *codeobj_7a68d30ac3ce5a09529534626b05eadd;
static PyCodeObject *codeobj_e669e9b9d759f08f63d274ddfb9d5a62;
static PyCodeObject *codeobj_208650ca6efe3c4599b8165c4b2e16e9;
static PyCodeObject *codeobj_0b2185925c245b84777e8b1627a85c2c;
static PyCodeObject *codeobj_616a86b989b37b770977dcea52e7f8e8;
static PyCodeObject *codeobj_7ab4be9263253f18e82fe1ad53e8e303;
static PyCodeObject *codeobj_149c0fc821eb4076f162241a514bfd2f;
static PyCodeObject *codeobj_44ce7803c7ebd88c2822f157d98f8d99;
static PyCodeObject *codeobj_2984b4975695ce258d1921b5572a55e7;
static PyCodeObject *codeobj_f8fc31b7ffd182a470395a77f21e94d5;
static PyCodeObject *codeobj_f122fce2c4cfff042d097bc2d1b731bf;
static PyCodeObject *codeobj_e1cc4ca0107de381cc177499380d0f37;
static PyCodeObject *codeobj_13ea279fbf8d2f3624756ac2210e5a72;
static PyCodeObject *codeobj_05683b42ac2a9948480e5410b0fb43ae;
static PyCodeObject *codeobj_53fa17528ffe44af3ffb1f3151228f76;
static PyCodeObject *codeobj_54885b169887dd2cfcb6bffffcbb8746;
static PyCodeObject *codeobj_8524779d28a34c57f1e60cb2ff0e5848;
static PyCodeObject *codeobj_22f1ec9bfe9fa0572e07249a120504d3;
static PyCodeObject *codeobj_decb8933b1fb72379757d57946bad8ea;
static PyCodeObject *codeobj_aca545f53cf4420f87eb89c527ef39eb;
static PyCodeObject *codeobj_09e0ee9c73913910146edb4f80815bbf;
static PyCodeObject *codeobj_78d58db1ee4a1b8381b76015707c03ef;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[258]); CHECK_OBJECT(module_filename_obj);
    codeobj_5a0f4f89632b2b9bd748fdd77da69b10 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[259], mod_consts[259], NULL, NULL, 0, 0, 0);
    codeobj_0f745a2fc4cdf1e59a69c85ac8adb6cd = MAKE_CODE_OBJECT(module_filename_obj, 1973, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[232], mod_consts[232], mod_consts[260], NULL, 0, 0, 0);
    codeobj_b673cd6fdfad233d1ffb454cc3125c7a = MAKE_CODE_OBJECT(module_filename_obj, 2183, CO_FUTURE_ANNOTATIONS, mod_consts[242], mod_consts[242], mod_consts[261], NULL, 5, 0, 0);
    codeobj_ee4d8dc448559735d122eeea3dff53ed = MAKE_CODE_OBJECT(module_filename_obj, 2194, CO_FUTURE_ANNOTATIONS, mod_consts[242], mod_consts[242], mod_consts[261], NULL, 5, 0, 0);
    codeobj_7a68d30ac3ce5a09529534626b05eadd = MAKE_CODE_OBJECT(module_filename_obj, 2205, CO_FUTURE_ANNOTATIONS, mod_consts[242], mod_consts[242], mod_consts[261], NULL, 5, 0, 0);
    codeobj_e669e9b9d759f08f63d274ddfb9d5a62 = MAKE_CODE_OBJECT(module_filename_obj, 2215, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[242], mod_consts[242], mod_consts[261], NULL, 5, 0, 0);
    codeobj_208650ca6efe3c4599b8165c4b2e16e9 = MAKE_CODE_OBJECT(module_filename_obj, 2022, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[55], mod_consts[55], mod_consts[262], NULL, 1, 0, 0);
    codeobj_0b2185925c245b84777e8b1627a85c2c = MAKE_CODE_OBJECT(module_filename_obj, 2147, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[241], mod_consts[241], NULL, NULL, 0, 0, 0);
    codeobj_616a86b989b37b770977dcea52e7f8e8 = MAKE_CODE_OBJECT(module_filename_obj, 411, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts[212], mod_consts[212], mod_consts[263], NULL, 1, 14, 0);
    codeobj_7ab4be9263253f18e82fe1ad53e8e303 = MAKE_CODE_OBJECT(module_filename_obj, 545, CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[214], mod_consts[214], mod_consts[264], NULL, 1, 13, 0);
    codeobj_149c0fc821eb4076f162241a514bfd2f = MAKE_CODE_OBJECT(module_filename_obj, 567, CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[214], mod_consts[214], mod_consts[264], NULL, 1, 13, 0);
    codeobj_44ce7803c7ebd88c2822f157d98f8d99 = MAKE_CODE_OBJECT(module_filename_obj, 589, CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[214], mod_consts[214], mod_consts[264], NULL, 1, 13, 0);
    codeobj_2984b4975695ce258d1921b5572a55e7 = MAKE_CODE_OBJECT(module_filename_obj, 610, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[214], mod_consts[214], mod_consts[264], NULL, 1, 13, 0);
    codeobj_f8fc31b7ffd182a470395a77f21e94d5 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[192], mod_consts[192], mod_consts[265], NULL, 1, 0, 0);
    codeobj_f122fce2c4cfff042d097bc2d1b731bf = MAKE_CODE_OBJECT(module_filename_obj, 1935, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[230], mod_consts[230], mod_consts[266], NULL, 1, 0, 0);
    codeobj_e1cc4ca0107de381cc177499380d0f37 = MAKE_CODE_OBJECT(module_filename_obj, 2047, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts[24], mod_consts[24], mod_consts[267], NULL, 1, 13, 0);
    codeobj_13ea279fbf8d2f3624756ac2210e5a72 = MAKE_CODE_OBJECT(module_filename_obj, 2000, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[234], mod_consts[234], mod_consts[268], NULL, 1, 0, 0);
    codeobj_05683b42ac2a9948480e5410b0fb43ae = MAKE_CODE_OBJECT(module_filename_obj, 2417, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[254], mod_consts[254], mod_consts[269], NULL, 5, 0, 0);
    codeobj_53fa17528ffe44af3ffb1f3151228f76 = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[29], mod_consts[29], mod_consts[270], NULL, 2, 29, 0);
    codeobj_54885b169887dd2cfcb6bffffcbb8746 = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[205], mod_consts[205], mod_consts[271], NULL, 2, 2, 0);
    codeobj_8524779d28a34c57f1e60cb2ff0e5848 = MAKE_CODE_OBJECT(module_filename_obj, 2470, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[257], mod_consts[257], mod_consts[272], NULL, 4, 0, 0);
    codeobj_22f1ec9bfe9fa0572e07249a120504d3 = MAKE_CODE_OBJECT(module_filename_obj, 2106, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[239], mod_consts[239], mod_consts[273], NULL, 1, 5, 0);
    codeobj_decb8933b1fb72379757d57946bad8ea = MAKE_CODE_OBJECT(module_filename_obj, 910, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[88], mod_consts[88], mod_consts[274], NULL, 2, 34, 0);
    codeobj_aca545f53cf4420f87eb89c527ef39eb = MAKE_CODE_OBJECT(module_filename_obj, 1806, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[228], mod_consts[228], mod_consts[275], NULL, 1, 11, 0);
    codeobj_09e0ee9c73913910146edb4f80815bbf = MAKE_CODE_OBJECT(module_filename_obj, 720, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[221], mod_consts[221], mod_consts[276], NULL, 6, 0, 0);
    codeobj_78d58db1ee4a1b8381b76015707c03ef = MAKE_CODE_OBJECT(module_filename_obj, 2323, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[251], mod_consts[251], mod_consts[277], NULL, 9, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__18_complex_call_helper_pos_keywords_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__11_complex_call_helper_pos_keywords_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__10_relationship(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__11_synonym(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__12_create_session(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__13__mapper_fn(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__14_dynamic_loader(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__15_backref(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__16_deferred(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__17_query_expression(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__18_clear_mappers(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__19_aliased(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__1_contains_alias(PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__20_aliased(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__21_aliased(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__22_aliased(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__23_with_polymorphic(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__24_join(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__25_outerjoin(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__2_mapped_column(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__3_orm_insert_sentinel(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__4_column_property(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__5_composite(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__6_composite(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__7_composite(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__8_composite(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__9_with_loader_criteria(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__1_contains_alias(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_alias = python_pars[0];
    struct Nuitka_FrameObject *frame_f8fc31b7ffd182a470395a77f21e94d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f8fc31b7ffd182a470395a77f21e94d5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f8fc31b7ffd182a470395a77f21e94d5)) {
        Py_XDECREF(cache_frame_f8fc31b7ffd182a470395a77f21e94d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f8fc31b7ffd182a470395a77f21e94d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f8fc31b7ffd182a470395a77f21e94d5 = MAKE_FUNCTION_FRAME(tstate, codeobj_f8fc31b7ffd182a470395a77f21e94d5, module_sqlalchemy$orm$_orm_constructors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f8fc31b7ffd182a470395a77f21e94d5->m_type_description == NULL);
    frame_f8fc31b7ffd182a470395a77f21e94d5 = cache_frame_f8fc31b7ffd182a470395a77f21e94d5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f8fc31b7ffd182a470395a77f21e94d5);
    assert(Py_REFCNT(frame_f8fc31b7ffd182a470395a77f21e94d5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_alias);
        tmp_args_element_value_1 = par_alias;
        frame_f8fc31b7ffd182a470395a77f21e94d5->m_frame.f_lineno = 94;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
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
        exception_tb = MAKE_TRACEBACK(frame_f8fc31b7ffd182a470395a77f21e94d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f8fc31b7ffd182a470395a77f21e94d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f8fc31b7ffd182a470395a77f21e94d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f8fc31b7ffd182a470395a77f21e94d5,
        type_description_1,
        par_alias
    );


    // Release cached frame if used for exception.
    if (frame_f8fc31b7ffd182a470395a77f21e94d5 == cache_frame_f8fc31b7ffd182a470395a77f21e94d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f8fc31b7ffd182a470395a77f21e94d5);
        cache_frame_f8fc31b7ffd182a470395a77f21e94d5 = NULL;
    }

    assertFrameObject(frame_f8fc31b7ffd182a470395a77f21e94d5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__2_mapped_column(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par___name_pos = python_pars[0];
    PyObject *par___type_pos = python_pars[1];
    PyObject *par_init = python_pars[2];
    PyObject *par_repr = python_pars[3];
    PyObject *par_default = python_pars[4];
    PyObject *par_default_factory = python_pars[5];
    PyObject *par_compare = python_pars[6];
    PyObject *par_kw_only = python_pars[7];
    PyObject *par_nullable = python_pars[8];
    PyObject *par_primary_key = python_pars[9];
    PyObject *par_deferred = python_pars[10];
    PyObject *par_deferred_group = python_pars[11];
    PyObject *par_deferred_raiseload = python_pars[12];
    PyObject *par_use_existing_column = python_pars[13];
    PyObject *par_name = python_pars[14];
    PyObject *par_type_ = python_pars[15];
    PyObject *par_autoincrement = python_pars[16];
    PyObject *par_doc = python_pars[17];
    PyObject *par_key = python_pars[18];
    PyObject *par_index = python_pars[19];
    PyObject *par_unique = python_pars[20];
    PyObject *par_info = python_pars[21];
    PyObject *par_onupdate = python_pars[22];
    PyObject *par_insert_default = python_pars[23];
    PyObject *par_server_default = python_pars[24];
    PyObject *par_server_onupdate = python_pars[25];
    PyObject *par_active_history = python_pars[26];
    PyObject *par_quote = python_pars[27];
    PyObject *par_system = python_pars[28];
    PyObject *par_comment = python_pars[29];
    PyObject *par_sort_order = python_pars[30];
    PyObject *par_args = python_pars[31];
    PyObject *par_kw = python_pars[32];
    struct Nuitka_FrameObject *frame_53fa17528ffe44af3ffb1f3151228f76;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_53fa17528ffe44af3ffb1f3151228f76 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_53fa17528ffe44af3ffb1f3151228f76)) {
        Py_XDECREF(cache_frame_53fa17528ffe44af3ffb1f3151228f76);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53fa17528ffe44af3ffb1f3151228f76 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53fa17528ffe44af3ffb1f3151228f76 = MAKE_FUNCTION_FRAME(tstate, codeobj_53fa17528ffe44af3ffb1f3151228f76, module_sqlalchemy$orm$_orm_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_53fa17528ffe44af3ffb1f3151228f76->m_type_description == NULL);
    frame_53fa17528ffe44af3ffb1f3151228f76 = cache_frame_53fa17528ffe44af3ffb1f3151228f76;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_53fa17528ffe44af3ffb1f3151228f76);
    assert(Py_REFCNT(frame_53fa17528ffe44af3ffb1f3151228f76) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg5_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par___name_pos);
        tmp_tuple_element_1 = par___name_pos;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par___type_pos);
        tmp_tuple_element_1 = par___type_pos;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        tmp_dict_key_1 = mod_consts[3];
        CHECK_OBJECT(par_name);
        tmp_dict_value_1 = par_name;
        tmp_dircall_arg4_1 = _PyDict_NewPresized( 24 );
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_args_element_value_6;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[4];
            CHECK_OBJECT(par_type_);
            tmp_dict_value_1 = par_type_;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[5];
            CHECK_OBJECT(par_autoincrement);
            tmp_dict_value_1 = par_autoincrement;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[6];
            CHECK_OBJECT(par_insert_default);
            tmp_dict_value_1 = par_insert_default;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[7];
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_1 = "ooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_init);
            tmp_args_element_value_1 = par_init;
            CHECK_OBJECT(par_repr);
            tmp_args_element_value_2 = par_repr;
            CHECK_OBJECT(par_default);
            tmp_args_element_value_3 = par_default;
            CHECK_OBJECT(par_default_factory);
            tmp_args_element_value_4 = par_default_factory;
            CHECK_OBJECT(par_compare);
            tmp_args_element_value_5 = par_compare;
            CHECK_OBJECT(par_kw_only);
            tmp_args_element_value_6 = par_kw_only;
            frame_53fa17528ffe44af3ffb1f3151228f76->m_frame.f_lineno = 322;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_1, call_args);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_1 = "ooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[9];
            CHECK_OBJECT(par_doc);
            tmp_dict_value_1 = par_doc;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[10];
            CHECK_OBJECT(par_key);
            tmp_dict_value_1 = par_key;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[11];
            CHECK_OBJECT(par_index);
            tmp_dict_value_1 = par_index;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[12];
            CHECK_OBJECT(par_unique);
            tmp_dict_value_1 = par_unique;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[13];
            CHECK_OBJECT(par_info);
            tmp_dict_value_1 = par_info;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[14];
            CHECK_OBJECT(par_active_history);
            tmp_dict_value_1 = par_active_history;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[15];
            CHECK_OBJECT(par_nullable);
            tmp_dict_value_1 = par_nullable;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[16];
            CHECK_OBJECT(par_onupdate);
            tmp_dict_value_1 = par_onupdate;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[17];
            CHECK_OBJECT(par_primary_key);
            tmp_dict_value_1 = par_primary_key;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[18];
            CHECK_OBJECT(par_server_default);
            tmp_dict_value_1 = par_server_default;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            CHECK_OBJECT(par_server_onupdate);
            tmp_dict_value_1 = par_server_onupdate;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[20];
            CHECK_OBJECT(par_use_existing_column);
            tmp_dict_value_1 = par_use_existing_column;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[21];
            CHECK_OBJECT(par_quote);
            tmp_dict_value_1 = par_quote;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[22];
            CHECK_OBJECT(par_comment);
            tmp_dict_value_1 = par_comment;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[23];
            CHECK_OBJECT(par_system);
            tmp_dict_value_1 = par_system;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[24];
            CHECK_OBJECT(par_deferred);
            tmp_dict_value_1 = par_deferred;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[25];
            CHECK_OBJECT(par_deferred_group);
            tmp_dict_value_1 = par_deferred_group;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[26];
            CHECK_OBJECT(par_deferred_raiseload);
            tmp_dict_value_1 = par_deferred_raiseload;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[27];
            CHECK_OBJECT(par_sort_order);
            tmp_dict_value_1 = par_sort_order;
            tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_dircall_arg2_1);
        Py_DECREF(tmp_dircall_arg4_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg5_1 = par_kw;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg5_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1, tmp_dircall_arg5_1};
            tmp_return_value = impl___main__$$$function__18_complex_call_helper_pos_keywords_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_53fa17528ffe44af3ffb1f3151228f76, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53fa17528ffe44af3ffb1f3151228f76->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53fa17528ffe44af3ffb1f3151228f76, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53fa17528ffe44af3ffb1f3151228f76,
        type_description_1,
        par___name_pos,
        par___type_pos,
        par_init,
        par_repr,
        par_default,
        par_default_factory,
        par_compare,
        par_kw_only,
        par_nullable,
        par_primary_key,
        par_deferred,
        par_deferred_group,
        par_deferred_raiseload,
        par_use_existing_column,
        par_name,
        par_type_,
        par_autoincrement,
        par_doc,
        par_key,
        par_index,
        par_unique,
        par_info,
        par_onupdate,
        par_insert_default,
        par_server_default,
        par_server_onupdate,
        par_active_history,
        par_quote,
        par_system,
        par_comment,
        par_sort_order,
        par_args,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_53fa17528ffe44af3ffb1f3151228f76 == cache_frame_53fa17528ffe44af3ffb1f3151228f76) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_53fa17528ffe44af3ffb1f3151228f76);
        cache_frame_53fa17528ffe44af3ffb1f3151228f76 = NULL;
    }

    assertFrameObject(frame_53fa17528ffe44af3ffb1f3151228f76);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par___name_pos);
    Py_DECREF(par___name_pos);
    CHECK_OBJECT(par___type_pos);
    Py_DECREF(par___type_pos);
    CHECK_OBJECT(par_init);
    Py_DECREF(par_init);
    CHECK_OBJECT(par_repr);
    Py_DECREF(par_repr);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_default_factory);
    Py_DECREF(par_default_factory);
    CHECK_OBJECT(par_compare);
    Py_DECREF(par_compare);
    CHECK_OBJECT(par_kw_only);
    Py_DECREF(par_kw_only);
    CHECK_OBJECT(par_nullable);
    Py_DECREF(par_nullable);
    CHECK_OBJECT(par_primary_key);
    Py_DECREF(par_primary_key);
    CHECK_OBJECT(par_deferred);
    Py_DECREF(par_deferred);
    CHECK_OBJECT(par_deferred_group);
    Py_DECREF(par_deferred_group);
    CHECK_OBJECT(par_deferred_raiseload);
    Py_DECREF(par_deferred_raiseload);
    CHECK_OBJECT(par_use_existing_column);
    Py_DECREF(par_use_existing_column);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    CHECK_OBJECT(par_autoincrement);
    Py_DECREF(par_autoincrement);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_unique);
    Py_DECREF(par_unique);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);
    CHECK_OBJECT(par_onupdate);
    Py_DECREF(par_onupdate);
    CHECK_OBJECT(par_insert_default);
    Py_DECREF(par_insert_default);
    CHECK_OBJECT(par_server_default);
    Py_DECREF(par_server_default);
    CHECK_OBJECT(par_server_onupdate);
    Py_DECREF(par_server_onupdate);
    CHECK_OBJECT(par_active_history);
    Py_DECREF(par_active_history);
    CHECK_OBJECT(par_quote);
    Py_DECREF(par_quote);
    CHECK_OBJECT(par_system);
    Py_DECREF(par_system);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);
    CHECK_OBJECT(par_sort_order);
    Py_DECREF(par_sort_order);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___name_pos);
    Py_DECREF(par___name_pos);
    CHECK_OBJECT(par___type_pos);
    Py_DECREF(par___type_pos);
    CHECK_OBJECT(par_init);
    Py_DECREF(par_init);
    CHECK_OBJECT(par_repr);
    Py_DECREF(par_repr);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_default_factory);
    Py_DECREF(par_default_factory);
    CHECK_OBJECT(par_compare);
    Py_DECREF(par_compare);
    CHECK_OBJECT(par_kw_only);
    Py_DECREF(par_kw_only);
    CHECK_OBJECT(par_nullable);
    Py_DECREF(par_nullable);
    CHECK_OBJECT(par_primary_key);
    Py_DECREF(par_primary_key);
    CHECK_OBJECT(par_deferred);
    Py_DECREF(par_deferred);
    CHECK_OBJECT(par_deferred_group);
    Py_DECREF(par_deferred_group);
    CHECK_OBJECT(par_deferred_raiseload);
    Py_DECREF(par_deferred_raiseload);
    CHECK_OBJECT(par_use_existing_column);
    Py_DECREF(par_use_existing_column);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    CHECK_OBJECT(par_autoincrement);
    Py_DECREF(par_autoincrement);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_unique);
    Py_DECREF(par_unique);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);
    CHECK_OBJECT(par_onupdate);
    Py_DECREF(par_onupdate);
    CHECK_OBJECT(par_insert_default);
    Py_DECREF(par_insert_default);
    CHECK_OBJECT(par_server_default);
    Py_DECREF(par_server_default);
    CHECK_OBJECT(par_server_onupdate);
    Py_DECREF(par_server_onupdate);
    CHECK_OBJECT(par_active_history);
    Py_DECREF(par_active_history);
    CHECK_OBJECT(par_quote);
    Py_DECREF(par_quote);
    CHECK_OBJECT(par_system);
    Py_DECREF(par_system);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);
    CHECK_OBJECT(par_sort_order);
    Py_DECREF(par_sort_order);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__3_orm_insert_sentinel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *par_type_ = python_pars[1];
    PyObject *par_default = python_pars[2];
    PyObject *par_omit_from_statements = python_pars[3];
    struct Nuitka_FrameObject *frame_54885b169887dd2cfcb6bffffcbb8746;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_54885b169887dd2cfcb6bffffcbb8746 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_54885b169887dd2cfcb6bffffcbb8746)) {
        Py_XDECREF(cache_frame_54885b169887dd2cfcb6bffffcbb8746);

#if _DEBUG_REFCOUNTS
        if (cache_frame_54885b169887dd2cfcb6bffffcbb8746 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_54885b169887dd2cfcb6bffffcbb8746 = MAKE_FUNCTION_FRAME(tstate, codeobj_54885b169887dd2cfcb6bffffcbb8746, module_sqlalchemy$orm$_orm_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_54885b169887dd2cfcb6bffffcbb8746->m_type_description == NULL);
    frame_54885b169887dd2cfcb6bffffcbb8746 = cache_frame_54885b169887dd2cfcb6bffffcbb8746;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_54885b169887dd2cfcb6bffffcbb8746);
    assert(Py_REFCNT(frame_54885b169887dd2cfcb6bffffcbb8746) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_kw_call_value_0_1 = par_name;
        CHECK_OBJECT(par_default);
        tmp_cmp_expr_left_1 = par_default;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_default);
        tmp_kw_call_value_1_1 = par_default;
        Py_INCREF(tmp_kw_call_value_1_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_54885b169887dd2cfcb6bffffcbb8746->m_frame.f_lineno = 390;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        CHECK_OBJECT(par_omit_from_statements);
        tmp_kw_call_value_2_1 = par_omit_from_statements;
        tmp_kw_call_value_3_1 = Py_True;
        tmp_kw_call_value_4_1 = Py_True;
        tmp_kw_call_value_5_1 = Py_True;
        frame_54885b169887dd2cfcb6bffffcbb8746->m_frame.f_lineno = 386;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[31]);
        }

        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
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
        exception_tb = MAKE_TRACEBACK(frame_54885b169887dd2cfcb6bffffcbb8746, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_54885b169887dd2cfcb6bffffcbb8746->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_54885b169887dd2cfcb6bffffcbb8746, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_54885b169887dd2cfcb6bffffcbb8746,
        type_description_1,
        par_name,
        par_type_,
        par_default,
        par_omit_from_statements
    );


    // Release cached frame if used for exception.
    if (frame_54885b169887dd2cfcb6bffffcbb8746 == cache_frame_54885b169887dd2cfcb6bffffcbb8746) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_54885b169887dd2cfcb6bffffcbb8746);
        cache_frame_54885b169887dd2cfcb6bffffcbb8746 = NULL;
    }

    assertFrameObject(frame_54885b169887dd2cfcb6bffffcbb8746);

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
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_omit_from_statements);
    Py_DECREF(par_omit_from_statements);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_omit_from_statements);
    Py_DECREF(par_omit_from_statements);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__4_column_property(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_column = python_pars[0];
    PyObject *par_group = python_pars[1];
    PyObject *par_deferred = python_pars[2];
    PyObject *par_raiseload = python_pars[3];
    PyObject *par_comparator_factory = python_pars[4];
    PyObject *par_init = python_pars[5];
    PyObject *par_repr = python_pars[6];
    PyObject *par_default = python_pars[7];
    PyObject *par_default_factory = python_pars[8];
    PyObject *par_compare = python_pars[9];
    PyObject *par_kw_only = python_pars[10];
    PyObject *par_active_history = python_pars[11];
    PyObject *par_expire_on_flush = python_pars[12];
    PyObject *par_info = python_pars[13];
    PyObject *par_doc = python_pars[14];
    PyObject *par_additional_columns = python_pars[15];
    struct Nuitka_FrameObject *frame_616a86b989b37b770977dcea52e7f8e8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_616a86b989b37b770977dcea52e7f8e8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_616a86b989b37b770977dcea52e7f8e8)) {
        Py_XDECREF(cache_frame_616a86b989b37b770977dcea52e7f8e8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_616a86b989b37b770977dcea52e7f8e8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_616a86b989b37b770977dcea52e7f8e8 = MAKE_FUNCTION_FRAME(tstate, codeobj_616a86b989b37b770977dcea52e7f8e8, module_sqlalchemy$orm$_orm_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_616a86b989b37b770977dcea52e7f8e8->m_type_description == NULL);
    frame_616a86b989b37b770977dcea52e7f8e8 = cache_frame_616a86b989b37b770977dcea52e7f8e8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_616a86b989b37b770977dcea52e7f8e8);
    assert(Py_REFCNT(frame_616a86b989b37b770977dcea52e7f8e8) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_column);
        tmp_tuple_element_1 = par_column;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_additional_columns);
        tmp_dircall_arg3_1 = par_additional_columns;
        tmp_dict_key_1 = mod_consts[7];
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 524;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_init);
        tmp_cmp_expr_left_1 = par_init;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 525;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[35]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 525;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_args_element_value_1 = Py_False;
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_init);
        tmp_args_element_value_1 = par_init;
        condexpr_end_1:;
        CHECK_OBJECT(par_repr);
        tmp_args_element_value_2 = par_repr;
        CHECK_OBJECT(par_default);
        tmp_args_element_value_3 = par_default;
        CHECK_OBJECT(par_default_factory);
        tmp_args_element_value_4 = par_default_factory;
        CHECK_OBJECT(par_compare);
        tmp_args_element_value_5 = par_compare;
        CHECK_OBJECT(par_kw_only);
        tmp_args_element_value_6 = par_kw_only;
        frame_616a86b989b37b770977dcea52e7f8e8->m_frame.f_lineno = 524;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 524;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg4_1 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[36];
        CHECK_OBJECT(par_group);
        tmp_dict_value_1 = par_group;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[24];
        CHECK_OBJECT(par_deferred);
        tmp_dict_value_1 = par_deferred;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[37];
        CHECK_OBJECT(par_raiseload);
        tmp_dict_value_1 = par_raiseload;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[38];
        CHECK_OBJECT(par_comparator_factory);
        tmp_dict_value_1 = par_comparator_factory;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_active_history);
        tmp_dict_value_1 = par_active_history;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[39];
        CHECK_OBJECT(par_expire_on_flush);
        tmp_dict_value_1 = par_expire_on_flush;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_info);
        tmp_dict_value_1 = par_info;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_doc);
        tmp_dict_value_1 = par_doc;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[40];
        tmp_dict_value_1 = Py_True;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_pos_keywords_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "oooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_616a86b989b37b770977dcea52e7f8e8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_616a86b989b37b770977dcea52e7f8e8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_616a86b989b37b770977dcea52e7f8e8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_616a86b989b37b770977dcea52e7f8e8,
        type_description_1,
        par_column,
        par_group,
        par_deferred,
        par_raiseload,
        par_comparator_factory,
        par_init,
        par_repr,
        par_default,
        par_default_factory,
        par_compare,
        par_kw_only,
        par_active_history,
        par_expire_on_flush,
        par_info,
        par_doc,
        par_additional_columns
    );


    // Release cached frame if used for exception.
    if (frame_616a86b989b37b770977dcea52e7f8e8 == cache_frame_616a86b989b37b770977dcea52e7f8e8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_616a86b989b37b770977dcea52e7f8e8);
        cache_frame_616a86b989b37b770977dcea52e7f8e8 = NULL;
    }

    assertFrameObject(frame_616a86b989b37b770977dcea52e7f8e8);

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
    CHECK_OBJECT(par_group);
    Py_DECREF(par_group);
    CHECK_OBJECT(par_deferred);
    Py_DECREF(par_deferred);
    CHECK_OBJECT(par_raiseload);
    Py_DECREF(par_raiseload);
    CHECK_OBJECT(par_comparator_factory);
    Py_DECREF(par_comparator_factory);
    CHECK_OBJECT(par_init);
    Py_DECREF(par_init);
    CHECK_OBJECT(par_repr);
    Py_DECREF(par_repr);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_default_factory);
    Py_DECREF(par_default_factory);
    CHECK_OBJECT(par_compare);
    Py_DECREF(par_compare);
    CHECK_OBJECT(par_kw_only);
    Py_DECREF(par_kw_only);
    CHECK_OBJECT(par_active_history);
    Py_DECREF(par_active_history);
    CHECK_OBJECT(par_expire_on_flush);
    Py_DECREF(par_expire_on_flush);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    CHECK_OBJECT(par_additional_columns);
    Py_DECREF(par_additional_columns);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);
    CHECK_OBJECT(par_group);
    Py_DECREF(par_group);
    CHECK_OBJECT(par_deferred);
    Py_DECREF(par_deferred);
    CHECK_OBJECT(par_raiseload);
    Py_DECREF(par_raiseload);
    CHECK_OBJECT(par_comparator_factory);
    Py_DECREF(par_comparator_factory);
    CHECK_OBJECT(par_init);
    Py_DECREF(par_init);
    CHECK_OBJECT(par_repr);
    Py_DECREF(par_repr);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_default_factory);
    Py_DECREF(par_default_factory);
    CHECK_OBJECT(par_compare);
    Py_DECREF(par_compare);
    CHECK_OBJECT(par_kw_only);
    Py_DECREF(par_kw_only);
    CHECK_OBJECT(par_active_history);
    Py_DECREF(par_active_history);
    CHECK_OBJECT(par_expire_on_flush);
    Py_DECREF(par_expire_on_flush);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    CHECK_OBJECT(par_additional_columns);
    Py_DECREF(par_additional_columns);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__8_composite(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par__class_or_attr = python_pars[0];
    PyObject *par_group = python_pars[1];
    PyObject *par_deferred = python_pars[2];
    PyObject *par_raiseload = python_pars[3];
    PyObject *par_comparator_factory = python_pars[4];
    PyObject *par_active_history = python_pars[5];
    PyObject *par_init = python_pars[6];
    PyObject *par_repr = python_pars[7];
    PyObject *par_default = python_pars[8];
    PyObject *par_default_factory = python_pars[9];
    PyObject *par_compare = python_pars[10];
    PyObject *par_kw_only = python_pars[11];
    PyObject *par_info = python_pars[12];
    PyObject *par_doc = python_pars[13];
    PyObject *par_attrs = python_pars[14];
    PyObject *par___kw = python_pars[15];
    struct Nuitka_FrameObject *frame_2984b4975695ce258d1921b5572a55e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2984b4975695ce258d1921b5572a55e7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2984b4975695ce258d1921b5572a55e7)) {
        Py_XDECREF(cache_frame_2984b4975695ce258d1921b5572a55e7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2984b4975695ce258d1921b5572a55e7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2984b4975695ce258d1921b5572a55e7 = MAKE_FUNCTION_FRAME(tstate, codeobj_2984b4975695ce258d1921b5572a55e7, module_sqlalchemy$orm$_orm_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2984b4975695ce258d1921b5572a55e7->m_type_description == NULL);
    frame_2984b4975695ce258d1921b5572a55e7 = cache_frame_2984b4975695ce258d1921b5572a55e7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2984b4975695ce258d1921b5572a55e7);
    assert(Py_REFCNT(frame_2984b4975695ce258d1921b5572a55e7) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        CHECK_OBJECT(par___kw);
        tmp_condition_result_1 = CHECK_IF_TRUE(par___kw) == 1;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2984b4975695ce258d1921b5572a55e7->m_frame.f_lineno = 702;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 702;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par__class_or_attr);
        tmp_tuple_element_1 = par__class_or_attr;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_attrs);
        tmp_dircall_arg3_1 = par_attrs;
        tmp_dict_key_1 = mod_consts[7];
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 707;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_init);
        tmp_args_element_value_1 = par_init;
        CHECK_OBJECT(par_repr);
        tmp_args_element_value_2 = par_repr;
        CHECK_OBJECT(par_default);
        tmp_args_element_value_3 = par_default;
        CHECK_OBJECT(par_default_factory);
        tmp_args_element_value_4 = par_default_factory;
        CHECK_OBJECT(par_compare);
        tmp_args_element_value_5 = par_compare;
        CHECK_OBJECT(par_kw_only);
        tmp_args_element_value_6 = par_kw_only;
        frame_2984b4975695ce258d1921b5572a55e7->m_frame.f_lineno = 707;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 707;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg4_1 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[36];
        CHECK_OBJECT(par_group);
        tmp_dict_value_1 = par_group;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[24];
        CHECK_OBJECT(par_deferred);
        tmp_dict_value_1 = par_deferred;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[37];
        CHECK_OBJECT(par_raiseload);
        tmp_dict_value_1 = par_raiseload;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[38];
        CHECK_OBJECT(par_comparator_factory);
        tmp_dict_value_1 = par_comparator_factory;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_active_history);
        tmp_dict_value_1 = par_active_history;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_info);
        tmp_dict_value_1 = par_info;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_doc);
        tmp_dict_value_1 = par_doc;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_pos_keywords_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;
            type_description_1 = "oooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_2984b4975695ce258d1921b5572a55e7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2984b4975695ce258d1921b5572a55e7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2984b4975695ce258d1921b5572a55e7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2984b4975695ce258d1921b5572a55e7,
        type_description_1,
        par__class_or_attr,
        par_group,
        par_deferred,
        par_raiseload,
        par_comparator_factory,
        par_active_history,
        par_init,
        par_repr,
        par_default,
        par_default_factory,
        par_compare,
        par_kw_only,
        par_info,
        par_doc,
        par_attrs,
        par___kw
    );


    // Release cached frame if used for exception.
    if (frame_2984b4975695ce258d1921b5572a55e7 == cache_frame_2984b4975695ce258d1921b5572a55e7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2984b4975695ce258d1921b5572a55e7);
        cache_frame_2984b4975695ce258d1921b5572a55e7 = NULL;
    }

    assertFrameObject(frame_2984b4975695ce258d1921b5572a55e7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par__class_or_attr);
    Py_DECREF(par__class_or_attr);
    CHECK_OBJECT(par_group);
    Py_DECREF(par_group);
    CHECK_OBJECT(par_deferred);
    Py_DECREF(par_deferred);
    CHECK_OBJECT(par_raiseload);
    Py_DECREF(par_raiseload);
    CHECK_OBJECT(par_comparator_factory);
    Py_DECREF(par_comparator_factory);
    CHECK_OBJECT(par_active_history);
    Py_DECREF(par_active_history);
    CHECK_OBJECT(par_init);
    Py_DECREF(par_init);
    CHECK_OBJECT(par_repr);
    Py_DECREF(par_repr);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_default_factory);
    Py_DECREF(par_default_factory);
    CHECK_OBJECT(par_compare);
    Py_DECREF(par_compare);
    CHECK_OBJECT(par_kw_only);
    Py_DECREF(par_kw_only);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);
    CHECK_OBJECT(par___kw);
    Py_DECREF(par___kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par__class_or_attr);
    Py_DECREF(par__class_or_attr);
    CHECK_OBJECT(par_group);
    Py_DECREF(par_group);
    CHECK_OBJECT(par_deferred);
    Py_DECREF(par_deferred);
    CHECK_OBJECT(par_raiseload);
    Py_DECREF(par_raiseload);
    CHECK_OBJECT(par_comparator_factory);
    Py_DECREF(par_comparator_factory);
    CHECK_OBJECT(par_active_history);
    Py_DECREF(par_active_history);
    CHECK_OBJECT(par_init);
    Py_DECREF(par_init);
    CHECK_OBJECT(par_repr);
    Py_DECREF(par_repr);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_default_factory);
    Py_DECREF(par_default_factory);
    CHECK_OBJECT(par_compare);
    Py_DECREF(par_compare);
    CHECK_OBJECT(par_kw_only);
    Py_DECREF(par_kw_only);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);
    CHECK_OBJECT(par___kw);
    Py_DECREF(par___kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__9_with_loader_criteria(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_entity_or_base = python_pars[0];
    PyObject *par_where_criteria = python_pars[1];
    PyObject *par_loader_only = python_pars[2];
    PyObject *par_include_aliases = python_pars[3];
    PyObject *par_propagate_to_loaders = python_pars[4];
    PyObject *par_track_closure_variables = python_pars[5];
    struct Nuitka_FrameObject *frame_09e0ee9c73913910146edb4f80815bbf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_09e0ee9c73913910146edb4f80815bbf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_09e0ee9c73913910146edb4f80815bbf)) {
        Py_XDECREF(cache_frame_09e0ee9c73913910146edb4f80815bbf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_09e0ee9c73913910146edb4f80815bbf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_09e0ee9c73913910146edb4f80815bbf = MAKE_FUNCTION_FRAME(tstate, codeobj_09e0ee9c73913910146edb4f80815bbf, module_sqlalchemy$orm$_orm_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_09e0ee9c73913910146edb4f80815bbf->m_type_description == NULL);
    frame_09e0ee9c73913910146edb4f80815bbf = cache_frame_09e0ee9c73913910146edb4f80815bbf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_09e0ee9c73913910146edb4f80815bbf);
    assert(Py_REFCNT(frame_09e0ee9c73913910146edb4f80815bbf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 900;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_entity_or_base);
        tmp_args_element_value_1 = par_entity_or_base;
        CHECK_OBJECT(par_where_criteria);
        tmp_args_element_value_2 = par_where_criteria;
        CHECK_OBJECT(par_loader_only);
        tmp_args_element_value_3 = par_loader_only;
        CHECK_OBJECT(par_include_aliases);
        tmp_args_element_value_4 = par_include_aliases;
        CHECK_OBJECT(par_propagate_to_loaders);
        tmp_args_element_value_5 = par_propagate_to_loaders;
        CHECK_OBJECT(par_track_closure_variables);
        tmp_args_element_value_6 = par_track_closure_variables;
        frame_09e0ee9c73913910146edb4f80815bbf->m_frame.f_lineno = 900;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 900;
            type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_09e0ee9c73913910146edb4f80815bbf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_09e0ee9c73913910146edb4f80815bbf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_09e0ee9c73913910146edb4f80815bbf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_09e0ee9c73913910146edb4f80815bbf,
        type_description_1,
        par_entity_or_base,
        par_where_criteria,
        par_loader_only,
        par_include_aliases,
        par_propagate_to_loaders,
        par_track_closure_variables
    );


    // Release cached frame if used for exception.
    if (frame_09e0ee9c73913910146edb4f80815bbf == cache_frame_09e0ee9c73913910146edb4f80815bbf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_09e0ee9c73913910146edb4f80815bbf);
        cache_frame_09e0ee9c73913910146edb4f80815bbf = NULL;
    }

    assertFrameObject(frame_09e0ee9c73913910146edb4f80815bbf);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_entity_or_base);
    Py_DECREF(par_entity_or_base);
    CHECK_OBJECT(par_where_criteria);
    Py_DECREF(par_where_criteria);
    CHECK_OBJECT(par_loader_only);
    Py_DECREF(par_loader_only);
    CHECK_OBJECT(par_include_aliases);
    Py_DECREF(par_include_aliases);
    CHECK_OBJECT(par_propagate_to_loaders);
    Py_DECREF(par_propagate_to_loaders);
    CHECK_OBJECT(par_track_closure_variables);
    Py_DECREF(par_track_closure_variables);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_entity_or_base);
    Py_DECREF(par_entity_or_base);
    CHECK_OBJECT(par_where_criteria);
    Py_DECREF(par_where_criteria);
    CHECK_OBJECT(par_loader_only);
    Py_DECREF(par_loader_only);
    CHECK_OBJECT(par_include_aliases);
    Py_DECREF(par_include_aliases);
    CHECK_OBJECT(par_propagate_to_loaders);
    Py_DECREF(par_propagate_to_loaders);
    CHECK_OBJECT(par_track_closure_variables);
    Py_DECREF(par_track_closure_variables);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__10_relationship(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_argument = python_pars[0];
    PyObject *par_secondary = python_pars[1];
    PyObject *par_uselist = python_pars[2];
    PyObject *par_collection_class = python_pars[3];
    PyObject *par_primaryjoin = python_pars[4];
    PyObject *par_secondaryjoin = python_pars[5];
    PyObject *par_back_populates = python_pars[6];
    PyObject *par_order_by = python_pars[7];
    PyObject *par_backref = python_pars[8];
    PyObject *par_overlaps = python_pars[9];
    PyObject *par_post_update = python_pars[10];
    PyObject *par_cascade = python_pars[11];
    PyObject *par_viewonly = python_pars[12];
    PyObject *par_init = python_pars[13];
    PyObject *par_repr = python_pars[14];
    PyObject *par_default = python_pars[15];
    PyObject *par_default_factory = python_pars[16];
    PyObject *par_compare = python_pars[17];
    PyObject *par_kw_only = python_pars[18];
    PyObject *par_lazy = python_pars[19];
    PyObject *par_passive_deletes = python_pars[20];
    PyObject *par_passive_updates = python_pars[21];
    PyObject *par_active_history = python_pars[22];
    PyObject *par_enable_typechecks = python_pars[23];
    PyObject *par_foreign_keys = python_pars[24];
    PyObject *par_remote_side = python_pars[25];
    PyObject *par_join_depth = python_pars[26];
    PyObject *par_comparator_factory = python_pars[27];
    PyObject *par_single_parent = python_pars[28];
    PyObject *par_innerjoin = python_pars[29];
    PyObject *par_distinct_target_key = python_pars[30];
    PyObject *par_load_on_pending = python_pars[31];
    PyObject *par_query_class = python_pars[32];
    PyObject *par_info = python_pars[33];
    PyObject *par_omit_join = python_pars[34];
    PyObject *par_sync_backref = python_pars[35];
    PyObject *par_kw = python_pars[36];
    struct Nuitka_FrameObject *frame_decb8933b1fb72379757d57946bad8ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_decb8933b1fb72379757d57946bad8ea = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_decb8933b1fb72379757d57946bad8ea)) {
        Py_XDECREF(cache_frame_decb8933b1fb72379757d57946bad8ea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_decb8933b1fb72379757d57946bad8ea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_decb8933b1fb72379757d57946bad8ea = MAKE_FUNCTION_FRAME(tstate, codeobj_decb8933b1fb72379757d57946bad8ea, module_sqlalchemy$orm$_orm_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_decb8933b1fb72379757d57946bad8ea->m_type_description == NULL);
    frame_decb8933b1fb72379757d57946bad8ea = cache_frame_decb8933b1fb72379757d57946bad8ea;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_decb8933b1fb72379757d57946bad8ea);
    assert(Py_REFCNT(frame_decb8933b1fb72379757d57946bad8ea) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1768;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_argument);
        tmp_tuple_element_1 = par_argument;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[48];
        CHECK_OBJECT(par_secondary);
        tmp_dict_value_1 = par_secondary;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 30 );
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_args_element_value_6;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[49];
            CHECK_OBJECT(par_uselist);
            tmp_dict_value_1 = par_uselist;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[50];
            CHECK_OBJECT(par_collection_class);
            tmp_dict_value_1 = par_collection_class;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[51];
            CHECK_OBJECT(par_primaryjoin);
            tmp_dict_value_1 = par_primaryjoin;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[52];
            CHECK_OBJECT(par_secondaryjoin);
            tmp_dict_value_1 = par_secondaryjoin;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[53];
            CHECK_OBJECT(par_back_populates);
            tmp_dict_value_1 = par_back_populates;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[54];
            CHECK_OBJECT(par_order_by);
            tmp_dict_value_1 = par_order_by;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[55];
            CHECK_OBJECT(par_backref);
            tmp_dict_value_1 = par_backref;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[56];
            CHECK_OBJECT(par_overlaps);
            tmp_dict_value_1 = par_overlaps;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[57];
            CHECK_OBJECT(par_post_update);
            tmp_dict_value_1 = par_post_update;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[58];
            CHECK_OBJECT(par_cascade);
            tmp_dict_value_1 = par_cascade;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[59];
            CHECK_OBJECT(par_viewonly);
            tmp_dict_value_1 = par_viewonly;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[7];
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1782;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_init);
            tmp_args_element_value_1 = par_init;
            CHECK_OBJECT(par_repr);
            tmp_args_element_value_2 = par_repr;
            CHECK_OBJECT(par_default);
            tmp_args_element_value_3 = par_default;
            CHECK_OBJECT(par_default_factory);
            tmp_args_element_value_4 = par_default_factory;
            CHECK_OBJECT(par_compare);
            tmp_args_element_value_5 = par_compare;
            CHECK_OBJECT(par_kw_only);
            tmp_args_element_value_6 = par_kw_only;
            frame_decb8933b1fb72379757d57946bad8ea->m_frame.f_lineno = 1782;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_1, call_args);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1782;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[60];
            CHECK_OBJECT(par_lazy);
            tmp_dict_value_1 = par_lazy;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[61];
            CHECK_OBJECT(par_passive_deletes);
            tmp_dict_value_1 = par_passive_deletes;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[62];
            CHECK_OBJECT(par_passive_updates);
            tmp_dict_value_1 = par_passive_updates;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[14];
            CHECK_OBJECT(par_active_history);
            tmp_dict_value_1 = par_active_history;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[63];
            CHECK_OBJECT(par_enable_typechecks);
            tmp_dict_value_1 = par_enable_typechecks;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[64];
            CHECK_OBJECT(par_foreign_keys);
            tmp_dict_value_1 = par_foreign_keys;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[65];
            CHECK_OBJECT(par_remote_side);
            tmp_dict_value_1 = par_remote_side;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[66];
            CHECK_OBJECT(par_join_depth);
            tmp_dict_value_1 = par_join_depth;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[38];
            CHECK_OBJECT(par_comparator_factory);
            tmp_dict_value_1 = par_comparator_factory;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[67];
            CHECK_OBJECT(par_single_parent);
            tmp_dict_value_1 = par_single_parent;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[68];
            CHECK_OBJECT(par_innerjoin);
            tmp_dict_value_1 = par_innerjoin;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[69];
            CHECK_OBJECT(par_distinct_target_key);
            tmp_dict_value_1 = par_distinct_target_key;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[70];
            CHECK_OBJECT(par_load_on_pending);
            tmp_dict_value_1 = par_load_on_pending;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[71];
            CHECK_OBJECT(par_query_class);
            tmp_dict_value_1 = par_query_class;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[13];
            CHECK_OBJECT(par_info);
            tmp_dict_value_1 = par_info;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[72];
            CHECK_OBJECT(par_omit_join);
            tmp_dict_value_1 = par_omit_join;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[73];
            CHECK_OBJECT(par_sync_backref);
            tmp_dict_value_1 = par_sync_backref;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_dircall_arg2_1);
        Py_DECREF(tmp_dircall_arg3_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg4_1 = par_kw;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1768;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_decb8933b1fb72379757d57946bad8ea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_decb8933b1fb72379757d57946bad8ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_decb8933b1fb72379757d57946bad8ea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_decb8933b1fb72379757d57946bad8ea,
        type_description_1,
        par_argument,
        par_secondary,
        par_uselist,
        par_collection_class,
        par_primaryjoin,
        par_secondaryjoin,
        par_back_populates,
        par_order_by,
        par_backref,
        par_overlaps,
        par_post_update,
        par_cascade,
        par_viewonly,
        par_init,
        par_repr,
        par_default,
        par_default_factory,
        par_compare,
        par_kw_only,
        par_lazy,
        par_passive_deletes,
        par_passive_updates,
        par_active_history,
        par_enable_typechecks,
        par_foreign_keys,
        par_remote_side,
        par_join_depth,
        par_comparator_factory,
        par_single_parent,
        par_innerjoin,
        par_distinct_target_key,
        par_load_on_pending,
        par_query_class,
        par_info,
        par_omit_join,
        par_sync_backref,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_decb8933b1fb72379757d57946bad8ea == cache_frame_decb8933b1fb72379757d57946bad8ea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_decb8933b1fb72379757d57946bad8ea);
        cache_frame_decb8933b1fb72379757d57946bad8ea = NULL;
    }

    assertFrameObject(frame_decb8933b1fb72379757d57946bad8ea);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_argument);
    Py_DECREF(par_argument);
    CHECK_OBJECT(par_secondary);
    Py_DECREF(par_secondary);
    CHECK_OBJECT(par_uselist);
    Py_DECREF(par_uselist);
    CHECK_OBJECT(par_collection_class);
    Py_DECREF(par_collection_class);
    CHECK_OBJECT(par_primaryjoin);
    Py_DECREF(par_primaryjoin);
    CHECK_OBJECT(par_secondaryjoin);
    Py_DECREF(par_secondaryjoin);
    CHECK_OBJECT(par_back_populates);
    Py_DECREF(par_back_populates);
    CHECK_OBJECT(par_order_by);
    Py_DECREF(par_order_by);
    CHECK_OBJECT(par_backref);
    Py_DECREF(par_backref);
    CHECK_OBJECT(par_overlaps);
    Py_DECREF(par_overlaps);
    CHECK_OBJECT(par_post_update);
    Py_DECREF(par_post_update);
    CHECK_OBJECT(par_cascade);
    Py_DECREF(par_cascade);
    CHECK_OBJECT(par_viewonly);
    Py_DECREF(par_viewonly);
    CHECK_OBJECT(par_init);
    Py_DECREF(par_init);
    CHECK_OBJECT(par_repr);
    Py_DECREF(par_repr);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_default_factory);
    Py_DECREF(par_default_factory);
    CHECK_OBJECT(par_compare);
    Py_DECREF(par_compare);
    CHECK_OBJECT(par_kw_only);
    Py_DECREF(par_kw_only);
    CHECK_OBJECT(par_lazy);
    Py_DECREF(par_lazy);
    CHECK_OBJECT(par_passive_deletes);
    Py_DECREF(par_passive_deletes);
    CHECK_OBJECT(par_passive_updates);
    Py_DECREF(par_passive_updates);
    CHECK_OBJECT(par_active_history);
    Py_DECREF(par_active_history);
    CHECK_OBJECT(par_enable_typechecks);
    Py_DECREF(par_enable_typechecks);
    CHECK_OBJECT(par_foreign_keys);
    Py_DECREF(par_foreign_keys);
    CHECK_OBJECT(par_remote_side);
    Py_DECREF(par_remote_side);
    CHECK_OBJECT(par_join_depth);
    Py_DECREF(par_join_depth);
    CHECK_OBJECT(par_comparator_factory);
    Py_DECREF(par_comparator_factory);
    CHECK_OBJECT(par_single_parent);
    Py_DECREF(par_single_parent);
    CHECK_OBJECT(par_innerjoin);
    Py_DECREF(par_innerjoin);
    CHECK_OBJECT(par_distinct_target_key);
    Py_DECREF(par_distinct_target_key);
    CHECK_OBJECT(par_load_on_pending);
    Py_DECREF(par_load_on_pending);
    CHECK_OBJECT(par_query_class);
    Py_DECREF(par_query_class);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);
    CHECK_OBJECT(par_omit_join);
    Py_DECREF(par_omit_join);
    CHECK_OBJECT(par_sync_backref);
    Py_DECREF(par_sync_backref);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_argument);
    Py_DECREF(par_argument);
    CHECK_OBJECT(par_secondary);
    Py_DECREF(par_secondary);
    CHECK_OBJECT(par_uselist);
    Py_DECREF(par_uselist);
    CHECK_OBJECT(par_collection_class);
    Py_DECREF(par_collection_class);
    CHECK_OBJECT(par_primaryjoin);
    Py_DECREF(par_primaryjoin);
    CHECK_OBJECT(par_secondaryjoin);
    Py_DECREF(par_secondaryjoin);
    CHECK_OBJECT(par_back_populates);
    Py_DECREF(par_back_populates);
    CHECK_OBJECT(par_order_by);
    Py_DECREF(par_order_by);
    CHECK_OBJECT(par_backref);
    Py_DECREF(par_backref);
    CHECK_OBJECT(par_overlaps);
    Py_DECREF(par_overlaps);
    CHECK_OBJECT(par_post_update);
    Py_DECREF(par_post_update);
    CHECK_OBJECT(par_cascade);
    Py_DECREF(par_cascade);
    CHECK_OBJECT(par_viewonly);
    Py_DECREF(par_viewonly);
    CHECK_OBJECT(par_init);
    Py_DECREF(par_init);
    CHECK_OBJECT(par_repr);
    Py_DECREF(par_repr);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_default_factory);
    Py_DECREF(par_default_factory);
    CHECK_OBJECT(par_compare);
    Py_DECREF(par_compare);
    CHECK_OBJECT(par_kw_only);
    Py_DECREF(par_kw_only);
    CHECK_OBJECT(par_lazy);
    Py_DECREF(par_lazy);
    CHECK_OBJECT(par_passive_deletes);
    Py_DECREF(par_passive_deletes);
    CHECK_OBJECT(par_passive_updates);
    Py_DECREF(par_passive_updates);
    CHECK_OBJECT(par_active_history);
    Py_DECREF(par_active_history);
    CHECK_OBJECT(par_enable_typechecks);
    Py_DECREF(par_enable_typechecks);
    CHECK_OBJECT(par_foreign_keys);
    Py_DECREF(par_foreign_keys);
    CHECK_OBJECT(par_remote_side);
    Py_DECREF(par_remote_side);
    CHECK_OBJECT(par_join_depth);
    Py_DECREF(par_join_depth);
    CHECK_OBJECT(par_comparator_factory);
    Py_DECREF(par_comparator_factory);
    CHECK_OBJECT(par_single_parent);
    Py_DECREF(par_single_parent);
    CHECK_OBJECT(par_innerjoin);
    Py_DECREF(par_innerjoin);
    CHECK_OBJECT(par_distinct_target_key);
    Py_DECREF(par_distinct_target_key);
    CHECK_OBJECT(par_load_on_pending);
    Py_DECREF(par_load_on_pending);
    CHECK_OBJECT(par_query_class);
    Py_DECREF(par_query_class);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);
    CHECK_OBJECT(par_omit_join);
    Py_DECREF(par_omit_join);
    CHECK_OBJECT(par_sync_backref);
    Py_DECREF(par_sync_backref);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__11_synonym(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *par_map_column = python_pars[1];
    PyObject *par_descriptor = python_pars[2];
    PyObject *par_comparator_factory = python_pars[3];
    PyObject *par_init = python_pars[4];
    PyObject *par_repr = python_pars[5];
    PyObject *par_default = python_pars[6];
    PyObject *par_default_factory = python_pars[7];
    PyObject *par_compare = python_pars[8];
    PyObject *par_kw_only = python_pars[9];
    PyObject *par_info = python_pars[10];
    PyObject *par_doc = python_pars[11];
    struct Nuitka_FrameObject *frame_aca545f53cf4420f87eb89c527ef39eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aca545f53cf4420f87eb89c527ef39eb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aca545f53cf4420f87eb89c527ef39eb)) {
        Py_XDECREF(cache_frame_aca545f53cf4420f87eb89c527ef39eb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aca545f53cf4420f87eb89c527ef39eb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aca545f53cf4420f87eb89c527ef39eb = MAKE_FUNCTION_FRAME(tstate, codeobj_aca545f53cf4420f87eb89c527ef39eb, module_sqlalchemy$orm$_orm_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aca545f53cf4420f87eb89c527ef39eb->m_type_description == NULL);
    frame_aca545f53cf4420f87eb89c527ef39eb = cache_frame_aca545f53cf4420f87eb89c527ef39eb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_aca545f53cf4420f87eb89c527ef39eb);
    assert(Py_REFCNT(frame_aca545f53cf4420f87eb89c527ef39eb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1922;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_kw_call_arg_value_0_1 = par_name;
        CHECK_OBJECT(par_map_column);
        tmp_kw_call_dict_value_0_1 = par_map_column;
        CHECK_OBJECT(par_descriptor);
        tmp_kw_call_dict_value_1_1 = par_descriptor;
        CHECK_OBJECT(par_comparator_factory);
        tmp_kw_call_dict_value_2_1 = par_comparator_factory;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1927;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_init);
        tmp_args_element_value_1 = par_init;
        CHECK_OBJECT(par_repr);
        tmp_args_element_value_2 = par_repr;
        CHECK_OBJECT(par_default);
        tmp_args_element_value_3 = par_default;
        CHECK_OBJECT(par_default_factory);
        tmp_args_element_value_4 = par_default_factory;
        CHECK_OBJECT(par_compare);
        tmp_args_element_value_5 = par_compare;
        CHECK_OBJECT(par_kw_only);
        tmp_args_element_value_6 = par_kw_only;
        frame_aca545f53cf4420f87eb89c527ef39eb->m_frame.f_lineno = 1927;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_kw_call_dict_value_3_1 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_kw_call_dict_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1927;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_doc);
        tmp_kw_call_dict_value_4_1 = par_doc;
        CHECK_OBJECT(par_info);
        tmp_kw_call_dict_value_5_1 = par_info;
        frame_aca545f53cf4420f87eb89c527ef39eb->m_frame.f_lineno = 1922;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[6] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[76]);
        }

        Py_DECREF(tmp_kw_call_dict_value_3_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1922;
            type_description_1 = "oooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_aca545f53cf4420f87eb89c527ef39eb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aca545f53cf4420f87eb89c527ef39eb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aca545f53cf4420f87eb89c527ef39eb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aca545f53cf4420f87eb89c527ef39eb,
        type_description_1,
        par_name,
        par_map_column,
        par_descriptor,
        par_comparator_factory,
        par_init,
        par_repr,
        par_default,
        par_default_factory,
        par_compare,
        par_kw_only,
        par_info,
        par_doc
    );


    // Release cached frame if used for exception.
    if (frame_aca545f53cf4420f87eb89c527ef39eb == cache_frame_aca545f53cf4420f87eb89c527ef39eb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aca545f53cf4420f87eb89c527ef39eb);
        cache_frame_aca545f53cf4420f87eb89c527ef39eb = NULL;
    }

    assertFrameObject(frame_aca545f53cf4420f87eb89c527ef39eb);

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
    CHECK_OBJECT(par_map_column);
    Py_DECREF(par_map_column);
    CHECK_OBJECT(par_descriptor);
    Py_DECREF(par_descriptor);
    CHECK_OBJECT(par_comparator_factory);
    Py_DECREF(par_comparator_factory);
    CHECK_OBJECT(par_init);
    Py_DECREF(par_init);
    CHECK_OBJECT(par_repr);
    Py_DECREF(par_repr);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_default_factory);
    Py_DECREF(par_default_factory);
    CHECK_OBJECT(par_compare);
    Py_DECREF(par_compare);
    CHECK_OBJECT(par_kw_only);
    Py_DECREF(par_kw_only);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_map_column);
    Py_DECREF(par_map_column);
    CHECK_OBJECT(par_descriptor);
    Py_DECREF(par_descriptor);
    CHECK_OBJECT(par_comparator_factory);
    Py_DECREF(par_comparator_factory);
    CHECK_OBJECT(par_init);
    Py_DECREF(par_init);
    CHECK_OBJECT(par_repr);
    Py_DECREF(par_repr);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_default_factory);
    Py_DECREF(par_default_factory);
    CHECK_OBJECT(par_compare);
    Py_DECREF(par_compare);
    CHECK_OBJECT(par_kw_only);
    Py_DECREF(par_kw_only);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__12_create_session(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_bind = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_f122fce2c4cfff042d097bc2d1b731bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f122fce2c4cfff042d097bc2d1b731bf = NULL;

    // Actual function body.
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[78];
        tmp_default_value_1 = Py_False;
        tmp_capi_result_1 = DICT_SETDEFAULT3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_capi_result_1 == NULL));
        Py_DECREF(tmp_capi_result_1);
    }
    if (isFrameUnusable(cache_frame_f122fce2c4cfff042d097bc2d1b731bf)) {
        Py_XDECREF(cache_frame_f122fce2c4cfff042d097bc2d1b731bf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f122fce2c4cfff042d097bc2d1b731bf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f122fce2c4cfff042d097bc2d1b731bf = MAKE_FUNCTION_FRAME(tstate, codeobj_f122fce2c4cfff042d097bc2d1b731bf, module_sqlalchemy$orm$_orm_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f122fce2c4cfff042d097bc2d1b731bf->m_type_description == NULL);
    frame_f122fce2c4cfff042d097bc2d1b731bf = cache_frame_f122fce2c4cfff042d097bc2d1b731bf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f122fce2c4cfff042d097bc2d1b731bf);
    assert(Py_REFCNT(frame_f122fce2c4cfff042d097bc2d1b731bf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_1 = par_kwargs;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[79]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1969;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f122fce2c4cfff042d097bc2d1b731bf->m_frame.f_lineno = 1969;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_1, mod_consts[80]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1969;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1970;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[82];
        CHECK_OBJECT(par_bind);
        tmp_dict_value_1 = par_bind;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__5_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1970;
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
        exception_tb = MAKE_TRACEBACK(frame_f122fce2c4cfff042d097bc2d1b731bf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f122fce2c4cfff042d097bc2d1b731bf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f122fce2c4cfff042d097bc2d1b731bf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f122fce2c4cfff042d097bc2d1b731bf,
        type_description_1,
        par_bind,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_f122fce2c4cfff042d097bc2d1b731bf == cache_frame_f122fce2c4cfff042d097bc2d1b731bf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f122fce2c4cfff042d097bc2d1b731bf);
        cache_frame_f122fce2c4cfff042d097bc2d1b731bf = NULL;
    }

    assertFrameObject(frame_f122fce2c4cfff042d097bc2d1b731bf);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_bind);
    Py_DECREF(par_bind);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_bind);
    Py_DECREF(par_bind);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__13__mapper_fn(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_arg = python_pars[0];
    PyObject *par_kw = python_pars[1];
    struct Nuitka_FrameObject *frame_0f745a2fc4cdf1e59a69c85ac8adb6cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0f745a2fc4cdf1e59a69c85ac8adb6cd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0f745a2fc4cdf1e59a69c85ac8adb6cd)) {
        Py_XDECREF(cache_frame_0f745a2fc4cdf1e59a69c85ac8adb6cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0f745a2fc4cdf1e59a69c85ac8adb6cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0f745a2fc4cdf1e59a69c85ac8adb6cd = MAKE_FUNCTION_FRAME(tstate, codeobj_0f745a2fc4cdf1e59a69c85ac8adb6cd, module_sqlalchemy$orm$_orm_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0f745a2fc4cdf1e59a69c85ac8adb6cd->m_type_description == NULL);
    frame_0f745a2fc4cdf1e59a69c85ac8adb6cd = cache_frame_0f745a2fc4cdf1e59a69c85ac8adb6cd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0f745a2fc4cdf1e59a69c85ac8adb6cd);
    assert(Py_REFCNT(frame_0f745a2fc4cdf1e59a69c85ac8adb6cd) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1991;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0f745a2fc4cdf1e59a69c85ac8adb6cd->m_frame.f_lineno = 1991;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[85]);

        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1991;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 1991;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0f745a2fc4cdf1e59a69c85ac8adb6cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0f745a2fc4cdf1e59a69c85ac8adb6cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0f745a2fc4cdf1e59a69c85ac8adb6cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0f745a2fc4cdf1e59a69c85ac8adb6cd,
        type_description_1,
        par_arg,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_0f745a2fc4cdf1e59a69c85ac8adb6cd == cache_frame_0f745a2fc4cdf1e59a69c85ac8adb6cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0f745a2fc4cdf1e59a69c85ac8adb6cd);
        cache_frame_0f745a2fc4cdf1e59a69c85ac8adb6cd = NULL;
    }

    assertFrameObject(frame_0f745a2fc4cdf1e59a69c85ac8adb6cd);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_arg);
    Py_DECREF(par_arg);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__14_dynamic_loader(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_argument = python_pars[0];
    PyObject *par_kw = python_pars[1];
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    struct Nuitka_FrameObject *frame_13ea279fbf8d2f3624756ac2210e5a72;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_13ea279fbf8d2f3624756ac2210e5a72 = NULL;

    // Actual function body.
    tmp_dictset_value = mod_consts[87];
    CHECK_OBJECT(par_kw);
    tmp_dictset_dict = par_kw;
    tmp_dictset_key = mod_consts[60];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    if (isFrameUnusable(cache_frame_13ea279fbf8d2f3624756ac2210e5a72)) {
        Py_XDECREF(cache_frame_13ea279fbf8d2f3624756ac2210e5a72);

#if _DEBUG_REFCOUNTS
        if (cache_frame_13ea279fbf8d2f3624756ac2210e5a72 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_13ea279fbf8d2f3624756ac2210e5a72 = MAKE_FUNCTION_FRAME(tstate, codeobj_13ea279fbf8d2f3624756ac2210e5a72, module_sqlalchemy$orm$_orm_constructors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_13ea279fbf8d2f3624756ac2210e5a72->m_type_description == NULL);
    frame_13ea279fbf8d2f3624756ac2210e5a72 = cache_frame_13ea279fbf8d2f3624756ac2210e5a72;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_13ea279fbf8d2f3624756ac2210e5a72);
    assert(Py_REFCNT(frame_13ea279fbf8d2f3624756ac2210e5a72) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2019;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_argument);
        tmp_tuple_element_1 = par_argument;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_1 = par_kw;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__6_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2019;
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
        exception_tb = MAKE_TRACEBACK(frame_13ea279fbf8d2f3624756ac2210e5a72, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_13ea279fbf8d2f3624756ac2210e5a72->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_13ea279fbf8d2f3624756ac2210e5a72, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_13ea279fbf8d2f3624756ac2210e5a72,
        type_description_1,
        par_argument,
        par_kw
    );


    // Release cached frame if used for exception.
    if (frame_13ea279fbf8d2f3624756ac2210e5a72 == cache_frame_13ea279fbf8d2f3624756ac2210e5a72) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_13ea279fbf8d2f3624756ac2210e5a72);
        cache_frame_13ea279fbf8d2f3624756ac2210e5a72 = NULL;
    }

    assertFrameObject(frame_13ea279fbf8d2f3624756ac2210e5a72);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_argument);
    Py_DECREF(par_argument);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_argument);
    Py_DECREF(par_argument);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__15_backref(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_name);
        tmp_tuple_element_1 = par_name;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_tuple_element_1 = par_kwargs;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__16_deferred(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_column = python_pars[0];
    PyObject *par_group = python_pars[1];
    PyObject *par_raiseload = python_pars[2];
    PyObject *par_comparator_factory = python_pars[3];
    PyObject *par_init = python_pars[4];
    PyObject *par_repr = python_pars[5];
    PyObject *par_default = python_pars[6];
    PyObject *par_default_factory = python_pars[7];
    PyObject *par_compare = python_pars[8];
    PyObject *par_kw_only = python_pars[9];
    PyObject *par_active_history = python_pars[10];
    PyObject *par_expire_on_flush = python_pars[11];
    PyObject *par_info = python_pars[12];
    PyObject *par_doc = python_pars[13];
    PyObject *par_additional_columns = python_pars[14];
    struct Nuitka_FrameObject *frame_e1cc4ca0107de381cc177499380d0f37;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e1cc4ca0107de381cc177499380d0f37 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e1cc4ca0107de381cc177499380d0f37)) {
        Py_XDECREF(cache_frame_e1cc4ca0107de381cc177499380d0f37);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e1cc4ca0107de381cc177499380d0f37 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e1cc4ca0107de381cc177499380d0f37 = MAKE_FUNCTION_FRAME(tstate, codeobj_e1cc4ca0107de381cc177499380d0f37, module_sqlalchemy$orm$_orm_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e1cc4ca0107de381cc177499380d0f37->m_type_description == NULL);
    frame_e1cc4ca0107de381cc177499380d0f37 = cache_frame_e1cc4ca0107de381cc177499380d0f37;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e1cc4ca0107de381cc177499380d0f37);
    assert(Py_REFCNT(frame_e1cc4ca0107de381cc177499380d0f37) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2089;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_column);
        tmp_tuple_element_1 = par_column;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_additional_columns);
        tmp_dircall_arg3_1 = par_additional_columns;
        tmp_dict_key_1 = mod_consts[7];
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 2092;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_init);
        tmp_args_element_value_1 = par_init;
        CHECK_OBJECT(par_repr);
        tmp_args_element_value_2 = par_repr;
        CHECK_OBJECT(par_default);
        tmp_args_element_value_3 = par_default;
        CHECK_OBJECT(par_default_factory);
        tmp_args_element_value_4 = par_default_factory;
        CHECK_OBJECT(par_compare);
        tmp_args_element_value_5 = par_compare;
        CHECK_OBJECT(par_kw_only);
        tmp_args_element_value_6 = par_kw_only;
        frame_e1cc4ca0107de381cc177499380d0f37->m_frame.f_lineno = 2092;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 2092;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg4_1 = _PyDict_NewPresized( 9 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[36];
        CHECK_OBJECT(par_group);
        tmp_dict_value_1 = par_group;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[24];
        tmp_dict_value_1 = Py_True;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[37];
        CHECK_OBJECT(par_raiseload);
        tmp_dict_value_1 = par_raiseload;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[38];
        CHECK_OBJECT(par_comparator_factory);
        tmp_dict_value_1 = par_comparator_factory;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(par_active_history);
        tmp_dict_value_1 = par_active_history;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[39];
        CHECK_OBJECT(par_expire_on_flush);
        tmp_dict_value_1 = par_expire_on_flush;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(par_info);
        tmp_dict_value_1 = par_info;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(par_doc);
        tmp_dict_value_1 = par_doc;
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_pos_keywords_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2089;
            type_description_1 = "ooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_e1cc4ca0107de381cc177499380d0f37, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e1cc4ca0107de381cc177499380d0f37->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e1cc4ca0107de381cc177499380d0f37, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e1cc4ca0107de381cc177499380d0f37,
        type_description_1,
        par_column,
        par_group,
        par_raiseload,
        par_comparator_factory,
        par_init,
        par_repr,
        par_default,
        par_default_factory,
        par_compare,
        par_kw_only,
        par_active_history,
        par_expire_on_flush,
        par_info,
        par_doc,
        par_additional_columns
    );


    // Release cached frame if used for exception.
    if (frame_e1cc4ca0107de381cc177499380d0f37 == cache_frame_e1cc4ca0107de381cc177499380d0f37) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e1cc4ca0107de381cc177499380d0f37);
        cache_frame_e1cc4ca0107de381cc177499380d0f37 = NULL;
    }

    assertFrameObject(frame_e1cc4ca0107de381cc177499380d0f37);

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
    CHECK_OBJECT(par_group);
    Py_DECREF(par_group);
    CHECK_OBJECT(par_raiseload);
    Py_DECREF(par_raiseload);
    CHECK_OBJECT(par_comparator_factory);
    Py_DECREF(par_comparator_factory);
    CHECK_OBJECT(par_init);
    Py_DECREF(par_init);
    CHECK_OBJECT(par_repr);
    Py_DECREF(par_repr);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_default_factory);
    Py_DECREF(par_default_factory);
    CHECK_OBJECT(par_compare);
    Py_DECREF(par_compare);
    CHECK_OBJECT(par_kw_only);
    Py_DECREF(par_kw_only);
    CHECK_OBJECT(par_active_history);
    Py_DECREF(par_active_history);
    CHECK_OBJECT(par_expire_on_flush);
    Py_DECREF(par_expire_on_flush);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    CHECK_OBJECT(par_additional_columns);
    Py_DECREF(par_additional_columns);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_column);
    Py_DECREF(par_column);
    CHECK_OBJECT(par_group);
    Py_DECREF(par_group);
    CHECK_OBJECT(par_raiseload);
    Py_DECREF(par_raiseload);
    CHECK_OBJECT(par_comparator_factory);
    Py_DECREF(par_comparator_factory);
    CHECK_OBJECT(par_init);
    Py_DECREF(par_init);
    CHECK_OBJECT(par_repr);
    Py_DECREF(par_repr);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_default_factory);
    Py_DECREF(par_default_factory);
    CHECK_OBJECT(par_compare);
    Py_DECREF(par_compare);
    CHECK_OBJECT(par_kw_only);
    Py_DECREF(par_kw_only);
    CHECK_OBJECT(par_active_history);
    Py_DECREF(par_active_history);
    CHECK_OBJECT(par_expire_on_flush);
    Py_DECREF(par_expire_on_flush);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    CHECK_OBJECT(par_additional_columns);
    Py_DECREF(par_additional_columns);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__17_query_expression(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_default_expr = python_pars[0];
    PyObject *par_repr = python_pars[1];
    PyObject *par_compare = python_pars[2];
    PyObject *par_expire_on_flush = python_pars[3];
    PyObject *par_info = python_pars[4];
    PyObject *par_doc = python_pars[5];
    PyObject *var_prop = NULL;
    struct Nuitka_FrameObject *frame_22f1ec9bfe9fa0572e07249a120504d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_22f1ec9bfe9fa0572e07249a120504d3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_22f1ec9bfe9fa0572e07249a120504d3)) {
        Py_XDECREF(cache_frame_22f1ec9bfe9fa0572e07249a120504d3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_22f1ec9bfe9fa0572e07249a120504d3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_22f1ec9bfe9fa0572e07249a120504d3 = MAKE_FUNCTION_FRAME(tstate, codeobj_22f1ec9bfe9fa0572e07249a120504d3, module_sqlalchemy$orm$_orm_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_22f1ec9bfe9fa0572e07249a120504d3->m_type_description == NULL);
    frame_22f1ec9bfe9fa0572e07249a120504d3 = cache_frame_22f1ec9bfe9fa0572e07249a120504d3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_22f1ec9bfe9fa0572e07249a120504d3);
    assert(Py_REFCNT(frame_22f1ec9bfe9fa0572e07249a120504d3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2127;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_default_expr);
        tmp_kw_call_arg_value_0_1 = par_default_expr;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2129;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = Py_False;
        CHECK_OBJECT(par_repr);
        tmp_args_element_value_2 = par_repr;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2132;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[35]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2132;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 2133;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[35]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 2133;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_compare);
        tmp_args_element_value_5 = par_compare;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 2135;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[35]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 2135;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_22f1ec9bfe9fa0572e07249a120504d3->m_frame.f_lineno = 2129;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2129;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expire_on_flush);
        tmp_kw_call_dict_value_1_1 = par_expire_on_flush;
        CHECK_OBJECT(par_info);
        tmp_kw_call_dict_value_2_1 = par_info;
        CHECK_OBJECT(par_doc);
        tmp_kw_call_dict_value_3_1 = par_doc;
        tmp_kw_call_dict_value_4_1 = Py_True;
        frame_22f1ec9bfe9fa0572e07249a120504d3->m_frame.f_lineno = 2127;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[92]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2127;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prop == NULL);
        var_prop = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[93];
        CHECK_OBJECT(var_prop);
        tmp_assattr_target_1 = var_prop;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[94], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2143;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_22f1ec9bfe9fa0572e07249a120504d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_22f1ec9bfe9fa0572e07249a120504d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_22f1ec9bfe9fa0572e07249a120504d3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_22f1ec9bfe9fa0572e07249a120504d3,
        type_description_1,
        par_default_expr,
        par_repr,
        par_compare,
        par_expire_on_flush,
        par_info,
        par_doc,
        var_prop
    );


    // Release cached frame if used for exception.
    if (frame_22f1ec9bfe9fa0572e07249a120504d3 == cache_frame_22f1ec9bfe9fa0572e07249a120504d3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_22f1ec9bfe9fa0572e07249a120504d3);
        cache_frame_22f1ec9bfe9fa0572e07249a120504d3 = NULL;
    }

    assertFrameObject(frame_22f1ec9bfe9fa0572e07249a120504d3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_prop);
    tmp_return_value = var_prop;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_prop);
    Py_DECREF(var_prop);
    var_prop = NULL;
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

    Py_XDECREF(var_prop);
    var_prop = NULL;
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
    CHECK_OBJECT(par_default_expr);
    Py_DECREF(par_default_expr);
    CHECK_OBJECT(par_repr);
    Py_DECREF(par_repr);
    CHECK_OBJECT(par_compare);
    Py_DECREF(par_compare);
    CHECK_OBJECT(par_expire_on_flush);
    Py_DECREF(par_expire_on_flush);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_default_expr);
    Py_DECREF(par_default_expr);
    CHECK_OBJECT(par_repr);
    Py_DECREF(par_repr);
    CHECK_OBJECT(par_compare);
    Py_DECREF(par_compare);
    CHECK_OBJECT(par_expire_on_flush);
    Py_DECREF(par_expire_on_flush);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__18_clear_mappers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_0b2185925c245b84777e8b1627a85c2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0b2185925c245b84777e8b1627a85c2c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0b2185925c245b84777e8b1627a85c2c)) {
        Py_XDECREF(cache_frame_0b2185925c245b84777e8b1627a85c2c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0b2185925c245b84777e8b1627a85c2c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0b2185925c245b84777e8b1627a85c2c = MAKE_FUNCTION_FRAME(tstate, codeobj_0b2185925c245b84777e8b1627a85c2c, module_sqlalchemy$orm$_orm_constructors, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0b2185925c245b84777e8b1627a85c2c->m_type_description == NULL);
    frame_0b2185925c245b84777e8b1627a85c2c = cache_frame_0b2185925c245b84777e8b1627a85c2c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0b2185925c245b84777e8b1627a85c2c);
    assert(Py_REFCNT(frame_0b2185925c245b84777e8b1627a85c2c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2172;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[97]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2172;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 2172;

            goto frame_exception_exit_1;
        }
        frame_0b2185925c245b84777e8b1627a85c2c->m_frame.f_lineno = 2172;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[98]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 2172;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = Py_False;
        frame_0b2185925c245b84777e8b1627a85c2c->m_frame.f_lineno = 2172;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2172;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0b2185925c245b84777e8b1627a85c2c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0b2185925c245b84777e8b1627a85c2c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b2185925c245b84777e8b1627a85c2c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0b2185925c245b84777e8b1627a85c2c,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_0b2185925c245b84777e8b1627a85c2c == cache_frame_0b2185925c245b84777e8b1627a85c2c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0b2185925c245b84777e8b1627a85c2c);
        cache_frame_0b2185925c245b84777e8b1627a85c2c = NULL;
    }

    assertFrameObject(frame_0b2185925c245b84777e8b1627a85c2c);

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


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__22_aliased(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_element = python_pars[0];
    PyObject *par_alias = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_flat = python_pars[3];
    PyObject *par_adapt_on_names = python_pars[4];
    struct Nuitka_FrameObject *frame_e669e9b9d759f08f63d274ddfb9d5a62;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e669e9b9d759f08f63d274ddfb9d5a62 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e669e9b9d759f08f63d274ddfb9d5a62)) {
        Py_XDECREF(cache_frame_e669e9b9d759f08f63d274ddfb9d5a62);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e669e9b9d759f08f63d274ddfb9d5a62 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e669e9b9d759f08f63d274ddfb9d5a62 = MAKE_FUNCTION_FRAME(tstate, codeobj_e669e9b9d759f08f63d274ddfb9d5a62, module_sqlalchemy$orm$_orm_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e669e9b9d759f08f63d274ddfb9d5a62->m_type_description == NULL);
    frame_e669e9b9d759f08f63d274ddfb9d5a62 = cache_frame_e669e9b9d759f08f63d274ddfb9d5a62;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e669e9b9d759f08f63d274ddfb9d5a62);
    assert(Py_REFCNT(frame_e669e9b9d759f08f63d274ddfb9d5a62) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2314;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[101]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2314;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_element);
        tmp_kw_call_arg_value_0_1 = par_element;
        CHECK_OBJECT(par_alias);
        tmp_kw_call_dict_value_0_1 = par_alias;
        CHECK_OBJECT(par_name);
        tmp_kw_call_dict_value_1_1 = par_name;
        CHECK_OBJECT(par_flat);
        tmp_kw_call_dict_value_2_1 = par_flat;
        CHECK_OBJECT(par_adapt_on_names);
        tmp_kw_call_dict_value_3_1 = par_adapt_on_names;
        frame_e669e9b9d759f08f63d274ddfb9d5a62->m_frame.f_lineno = 2314;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[102]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2314;
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
        exception_tb = MAKE_TRACEBACK(frame_e669e9b9d759f08f63d274ddfb9d5a62, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e669e9b9d759f08f63d274ddfb9d5a62->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e669e9b9d759f08f63d274ddfb9d5a62, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e669e9b9d759f08f63d274ddfb9d5a62,
        type_description_1,
        par_element,
        par_alias,
        par_name,
        par_flat,
        par_adapt_on_names
    );


    // Release cached frame if used for exception.
    if (frame_e669e9b9d759f08f63d274ddfb9d5a62 == cache_frame_e669e9b9d759f08f63d274ddfb9d5a62) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e669e9b9d759f08f63d274ddfb9d5a62);
        cache_frame_e669e9b9d759f08f63d274ddfb9d5a62 = NULL;
    }

    assertFrameObject(frame_e669e9b9d759f08f63d274ddfb9d5a62);

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
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_flat);
    Py_DECREF(par_flat);
    CHECK_OBJECT(par_adapt_on_names);
    Py_DECREF(par_adapt_on_names);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    CHECK_OBJECT(par_alias);
    Py_DECREF(par_alias);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_flat);
    Py_DECREF(par_flat);
    CHECK_OBJECT(par_adapt_on_names);
    Py_DECREF(par_adapt_on_names);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__23_with_polymorphic(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_base = python_pars[0];
    PyObject *par_classes = python_pars[1];
    PyObject *par_selectable = python_pars[2];
    PyObject *par_flat = python_pars[3];
    PyObject *par_polymorphic_on = python_pars[4];
    PyObject *par_aliased = python_pars[5];
    PyObject *par_innerjoin = python_pars[6];
    PyObject *par_adapt_on_names = python_pars[7];
    PyObject *par__use_mapper_path = python_pars[8];
    struct Nuitka_FrameObject *frame_78d58db1ee4a1b8381b76015707c03ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_78d58db1ee4a1b8381b76015707c03ef = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_78d58db1ee4a1b8381b76015707c03ef)) {
        Py_XDECREF(cache_frame_78d58db1ee4a1b8381b76015707c03ef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_78d58db1ee4a1b8381b76015707c03ef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_78d58db1ee4a1b8381b76015707c03ef = MAKE_FUNCTION_FRAME(tstate, codeobj_78d58db1ee4a1b8381b76015707c03ef, module_sqlalchemy$orm$_orm_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_78d58db1ee4a1b8381b76015707c03ef->m_type_description == NULL);
    frame_78d58db1ee4a1b8381b76015707c03ef = cache_frame_78d58db1ee4a1b8381b76015707c03ef;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_78d58db1ee4a1b8381b76015707c03ef);
    assert(Py_REFCNT(frame_78d58db1ee4a1b8381b76015707c03ef) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2404;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[104]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2404;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_base);
        tmp_kw_call_arg_value_0_1 = par_base;
        CHECK_OBJECT(par_classes);
        tmp_kw_call_arg_value_1_1 = par_classes;
        CHECK_OBJECT(par_selectable);
        tmp_kw_call_dict_value_0_1 = par_selectable;
        CHECK_OBJECT(par_flat);
        tmp_kw_call_dict_value_1_1 = par_flat;
        CHECK_OBJECT(par_polymorphic_on);
        tmp_kw_call_dict_value_2_1 = par_polymorphic_on;
        CHECK_OBJECT(par_adapt_on_names);
        tmp_kw_call_dict_value_3_1 = par_adapt_on_names;
        CHECK_OBJECT(par_aliased);
        tmp_kw_call_dict_value_4_1 = par_aliased;
        CHECK_OBJECT(par_innerjoin);
        tmp_kw_call_dict_value_5_1 = par_innerjoin;
        CHECK_OBJECT(par__use_mapper_path);
        tmp_kw_call_dict_value_6_1 = par__use_mapper_path;
        frame_78d58db1ee4a1b8381b76015707c03ef->m_frame.f_lineno = 2404;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[105]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2404;
            type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_78d58db1ee4a1b8381b76015707c03ef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_78d58db1ee4a1b8381b76015707c03ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_78d58db1ee4a1b8381b76015707c03ef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_78d58db1ee4a1b8381b76015707c03ef,
        type_description_1,
        par_base,
        par_classes,
        par_selectable,
        par_flat,
        par_polymorphic_on,
        par_aliased,
        par_innerjoin,
        par_adapt_on_names,
        par__use_mapper_path
    );


    // Release cached frame if used for exception.
    if (frame_78d58db1ee4a1b8381b76015707c03ef == cache_frame_78d58db1ee4a1b8381b76015707c03ef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_78d58db1ee4a1b8381b76015707c03ef);
        cache_frame_78d58db1ee4a1b8381b76015707c03ef = NULL;
    }

    assertFrameObject(frame_78d58db1ee4a1b8381b76015707c03ef);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_base);
    Py_DECREF(par_base);
    CHECK_OBJECT(par_classes);
    Py_DECREF(par_classes);
    CHECK_OBJECT(par_selectable);
    Py_DECREF(par_selectable);
    CHECK_OBJECT(par_flat);
    Py_DECREF(par_flat);
    CHECK_OBJECT(par_polymorphic_on);
    Py_DECREF(par_polymorphic_on);
    CHECK_OBJECT(par_aliased);
    Py_DECREF(par_aliased);
    CHECK_OBJECT(par_innerjoin);
    Py_DECREF(par_innerjoin);
    CHECK_OBJECT(par_adapt_on_names);
    Py_DECREF(par_adapt_on_names);
    CHECK_OBJECT(par__use_mapper_path);
    Py_DECREF(par__use_mapper_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_base);
    Py_DECREF(par_base);
    CHECK_OBJECT(par_classes);
    Py_DECREF(par_classes);
    CHECK_OBJECT(par_selectable);
    Py_DECREF(par_selectable);
    CHECK_OBJECT(par_flat);
    Py_DECREF(par_flat);
    CHECK_OBJECT(par_polymorphic_on);
    Py_DECREF(par_polymorphic_on);
    CHECK_OBJECT(par_aliased);
    Py_DECREF(par_aliased);
    CHECK_OBJECT(par_innerjoin);
    Py_DECREF(par_innerjoin);
    CHECK_OBJECT(par_adapt_on_names);
    Py_DECREF(par_adapt_on_names);
    CHECK_OBJECT(par__use_mapper_path);
    Py_DECREF(par__use_mapper_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__24_join(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    PyObject *par_onclause = python_pars[2];
    PyObject *par_isouter = python_pars[3];
    PyObject *par_full = python_pars[4];
    struct Nuitka_FrameObject *frame_05683b42ac2a9948480e5410b0fb43ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_05683b42ac2a9948480e5410b0fb43ae = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_05683b42ac2a9948480e5410b0fb43ae)) {
        Py_XDECREF(cache_frame_05683b42ac2a9948480e5410b0fb43ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05683b42ac2a9948480e5410b0fb43ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05683b42ac2a9948480e5410b0fb43ae = MAKE_FUNCTION_FRAME(tstate, codeobj_05683b42ac2a9948480e5410b0fb43ae, module_sqlalchemy$orm$_orm_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_05683b42ac2a9948480e5410b0fb43ae->m_type_description == NULL);
    frame_05683b42ac2a9948480e5410b0fb43ae = cache_frame_05683b42ac2a9948480e5410b0fb43ae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_05683b42ac2a9948480e5410b0fb43ae);
    assert(Py_REFCNT(frame_05683b42ac2a9948480e5410b0fb43ae) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2467;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_left);
        tmp_args_element_value_1 = par_left;
        CHECK_OBJECT(par_right);
        tmp_args_element_value_2 = par_right;
        CHECK_OBJECT(par_onclause);
        tmp_args_element_value_3 = par_onclause;
        CHECK_OBJECT(par_isouter);
        tmp_args_element_value_4 = par_isouter;
        CHECK_OBJECT(par_full);
        tmp_args_element_value_5 = par_full;
        frame_05683b42ac2a9948480e5410b0fb43ae->m_frame.f_lineno = 2467;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2467;
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
        exception_tb = MAKE_TRACEBACK(frame_05683b42ac2a9948480e5410b0fb43ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05683b42ac2a9948480e5410b0fb43ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05683b42ac2a9948480e5410b0fb43ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05683b42ac2a9948480e5410b0fb43ae,
        type_description_1,
        par_left,
        par_right,
        par_onclause,
        par_isouter,
        par_full
    );


    // Release cached frame if used for exception.
    if (frame_05683b42ac2a9948480e5410b0fb43ae == cache_frame_05683b42ac2a9948480e5410b0fb43ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_05683b42ac2a9948480e5410b0fb43ae);
        cache_frame_05683b42ac2a9948480e5410b0fb43ae = NULL;
    }

    assertFrameObject(frame_05683b42ac2a9948480e5410b0fb43ae);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    CHECK_OBJECT(par_onclause);
    Py_DECREF(par_onclause);
    CHECK_OBJECT(par_isouter);
    Py_DECREF(par_isouter);
    CHECK_OBJECT(par_full);
    Py_DECREF(par_full);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    CHECK_OBJECT(par_onclause);
    Py_DECREF(par_onclause);
    CHECK_OBJECT(par_isouter);
    Py_DECREF(par_isouter);
    CHECK_OBJECT(par_full);
    Py_DECREF(par_full);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$orm$_orm_constructors$$$function__25_outerjoin(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    PyObject *par_onclause = python_pars[2];
    PyObject *par_full = python_pars[3];
    struct Nuitka_FrameObject *frame_8524779d28a34c57f1e60cb2ff0e5848;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8524779d28a34c57f1e60cb2ff0e5848 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8524779d28a34c57f1e60cb2ff0e5848)) {
        Py_XDECREF(cache_frame_8524779d28a34c57f1e60cb2ff0e5848);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8524779d28a34c57f1e60cb2ff0e5848 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8524779d28a34c57f1e60cb2ff0e5848 = MAKE_FUNCTION_FRAME(tstate, codeobj_8524779d28a34c57f1e60cb2ff0e5848, module_sqlalchemy$orm$_orm_constructors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8524779d28a34c57f1e60cb2ff0e5848->m_type_description == NULL);
    frame_8524779d28a34c57f1e60cb2ff0e5848 = cache_frame_8524779d28a34c57f1e60cb2ff0e5848;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8524779d28a34c57f1e60cb2ff0e5848);
    assert(Py_REFCNT(frame_8524779d28a34c57f1e60cb2ff0e5848) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2483;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_left);
        tmp_args_element_value_1 = par_left;
        CHECK_OBJECT(par_right);
        tmp_args_element_value_2 = par_right;
        CHECK_OBJECT(par_onclause);
        tmp_args_element_value_3 = par_onclause;
        tmp_args_element_value_4 = Py_True;
        CHECK_OBJECT(par_full);
        tmp_args_element_value_5 = par_full;
        frame_8524779d28a34c57f1e60cb2ff0e5848->m_frame.f_lineno = 2483;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2483;
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
        exception_tb = MAKE_TRACEBACK(frame_8524779d28a34c57f1e60cb2ff0e5848, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8524779d28a34c57f1e60cb2ff0e5848->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8524779d28a34c57f1e60cb2ff0e5848, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8524779d28a34c57f1e60cb2ff0e5848,
        type_description_1,
        par_left,
        par_right,
        par_onclause,
        par_full
    );


    // Release cached frame if used for exception.
    if (frame_8524779d28a34c57f1e60cb2ff0e5848 == cache_frame_8524779d28a34c57f1e60cb2ff0e5848) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8524779d28a34c57f1e60cb2ff0e5848);
        cache_frame_8524779d28a34c57f1e60cb2ff0e5848 = NULL;
    }

    assertFrameObject(frame_8524779d28a34c57f1e60cb2ff0e5848);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    CHECK_OBJECT(par_onclause);
    Py_DECREF(par_onclause);
    CHECK_OBJECT(par_full);
    Py_DECREF(par_full);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    CHECK_OBJECT(par_onclause);
    Py_DECREF(par_onclause);
    CHECK_OBJECT(par_full);
    Py_DECREF(par_full);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__10_relationship(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__10_relationship,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_decb8933b1fb72379757d57946bad8ea,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[74],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__11_synonym(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__11_synonym,
        mod_consts[228],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aca545f53cf4420f87eb89c527ef39eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[77],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__12_create_session(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__12_create_session,
        mod_consts[230],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f122fce2c4cfff042d097bc2d1b731bf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[83],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__13__mapper_fn(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__13__mapper_fn,
        mod_consts[232],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0f745a2fc4cdf1e59a69c85ac8adb6cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[86],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__14_dynamic_loader(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__14_dynamic_loader,
        mod_consts[234],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_13ea279fbf8d2f3624756ac2210e5a72,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[89],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__15_backref(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__15_backref,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_208650ca6efe3c4599b8165c4b2e16e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[90],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__16_deferred(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__16_deferred,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e1cc4ca0107de381cc177499380d0f37,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[91],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__17_query_expression(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__17_query_expression,
        mod_consts[239],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_22f1ec9bfe9fa0572e07249a120504d3,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[95],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__18_clear_mappers(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__18_clear_mappers,
        mod_consts[241],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0b2185925c245b84777e8b1627a85c2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[99],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__19_aliased(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[242],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b673cd6fdfad233d1ffb454cc3125c7a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__1_contains_alias(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__1_contains_alias,
        mod_consts[192],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f8fc31b7ffd182a470395a77f21e94d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__20_aliased(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[242],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ee4d8dc448559735d122eeea3dff53ed,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__21_aliased(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[242],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7a68d30ac3ce5a09529534626b05eadd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__22_aliased(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__22_aliased,
        mod_consts[242],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e669e9b9d759f08f63d274ddfb9d5a62,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[103],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__23_with_polymorphic(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__23_with_polymorphic,
        mod_consts[251],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_78d58db1ee4a1b8381b76015707c03ef,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[106],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__24_join(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__24_join,
        mod_consts[254],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_05683b42ac2a9948480e5410b0fb43ae,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[108],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__25_outerjoin(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__25_outerjoin,
        mod_consts[257],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8524779d28a34c57f1e60cb2ff0e5848,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[109],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__2_mapped_column(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__2_mapped_column,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_53fa17528ffe44af3ffb1f3151228f76,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__3_orm_insert_sentinel(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__3_orm_insert_sentinel,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_54885b169887dd2cfcb6bffffcbb8746,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__4_column_property(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__4_column_property,
        mod_consts[212],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_616a86b989b37b770977dcea52e7f8e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[41],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__5_composite(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7ab4be9263253f18e82fe1ad53e8e303,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__6_composite(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_149c0fc821eb4076f162241a514bfd2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__7_composite(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_44ce7803c7ebd88c2822f157d98f8d99,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__8_composite(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__8_composite,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2984b4975695ce258d1921b5572a55e7,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__9_with_loader_criteria(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$orm$_orm_constructors$$$function__9_with_loader_criteria,
        mod_consts[221],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_09e0ee9c73913910146edb4f80815bbf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlalchemy$orm$_orm_constructors,
        mod_consts[46],
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

function_impl_code functable_sqlalchemy$orm$_orm_constructors[] = {
    impl_sqlalchemy$orm$_orm_constructors$$$function__1_contains_alias,
    impl_sqlalchemy$orm$_orm_constructors$$$function__2_mapped_column,
    impl_sqlalchemy$orm$_orm_constructors$$$function__3_orm_insert_sentinel,
    impl_sqlalchemy$orm$_orm_constructors$$$function__4_column_property,
    NULL,
    NULL,
    NULL,
    impl_sqlalchemy$orm$_orm_constructors$$$function__8_composite,
    impl_sqlalchemy$orm$_orm_constructors$$$function__9_with_loader_criteria,
    impl_sqlalchemy$orm$_orm_constructors$$$function__10_relationship,
    impl_sqlalchemy$orm$_orm_constructors$$$function__11_synonym,
    impl_sqlalchemy$orm$_orm_constructors$$$function__12_create_session,
    impl_sqlalchemy$orm$_orm_constructors$$$function__13__mapper_fn,
    impl_sqlalchemy$orm$_orm_constructors$$$function__14_dynamic_loader,
    impl_sqlalchemy$orm$_orm_constructors$$$function__15_backref,
    impl_sqlalchemy$orm$_orm_constructors$$$function__16_deferred,
    impl_sqlalchemy$orm$_orm_constructors$$$function__17_query_expression,
    impl_sqlalchemy$orm$_orm_constructors$$$function__18_clear_mappers,
    NULL,
    NULL,
    NULL,
    impl_sqlalchemy$orm$_orm_constructors$$$function__22_aliased,
    impl_sqlalchemy$orm$_orm_constructors$$$function__23_with_polymorphic,
    impl_sqlalchemy$orm$_orm_constructors$$$function__24_join,
    impl_sqlalchemy$orm$_orm_constructors$$$function__25_outerjoin,
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

    function_impl_code *current = functable_sqlalchemy$orm$_orm_constructors;
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

    if (offset > sizeof(functable_sqlalchemy$orm$_orm_constructors) || offset < 0) {
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
        functable_sqlalchemy$orm$_orm_constructors[offset],
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
        module_sqlalchemy$orm$_orm_constructors,
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
PyObject *modulecode_sqlalchemy$orm$_orm_constructors(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlalchemy.orm._orm_constructors");

    // Store the module for future use.
    module_sqlalchemy$orm$_orm_constructors = module;

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
        PRINT_STRING("sqlalchemy.orm._orm_constructors: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("sqlalchemy.orm._orm_constructors: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlalchemy$orm$_orm_constructors\n");

    moduledict_sqlalchemy$orm$_orm_constructors = MODULE_DICT(module_sqlalchemy$orm$_orm_constructors);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlalchemy$orm$_orm_constructors,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$orm$_orm_constructors,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[129]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$orm$_orm_constructors,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$orm$_orm_constructors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$orm$_orm_constructors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlalchemy$orm$_orm_constructors);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_sqlalchemy$orm$_orm_constructors);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_arg = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_5a0f4f89632b2b9bd748fdd77da69b10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_2);
    }
    frame_5a0f4f89632b2b9bd748fdd77da69b10 = MAKE_MODULE_FRAME(codeobj_5a0f4f89632b2b9bd748fdd77da69b10, module_sqlalchemy$orm$_orm_constructors);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5a0f4f89632b2b9bd748fdd77da69b10);
    assert(Py_REFCNT(frame_5a0f4f89632b2b9bd748fdd77da69b10) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[113], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[114], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[116]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_5);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[118],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[118]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_6);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[120],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[120]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_7);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[121],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[121]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_8);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[122],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[122]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_9);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[123],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[123]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_10);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[124],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[124]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_11);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[125],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[125]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_12);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[126],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[126]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_False;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_14);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[128],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[128]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[129];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[130];
        tmp_level_value_1 = mod_consts[131];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 22;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[96],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[96]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[132];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[133];
        tmp_level_value_2 = mod_consts[131];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 23;
        tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[134],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[134]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[135];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[136];
        tmp_level_value_3 = mod_consts[131];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 24;
        tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[43],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[135];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[137];
        tmp_level_value_4 = mod_consts[131];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 25;
        tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[75],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[75]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[138];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[139];
        tmp_level_value_5 = mod_consts[131];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 26;
        tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[8],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[8]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[140];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[141];
        tmp_level_value_6 = mod_consts[131];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 27;
        tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[2],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[140];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[142];
        tmp_level_value_7 = mod_consts[131];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 28;
        tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[33],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[33]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[143];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[144];
        tmp_level_value_8 = mod_consts[131];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 29;
        tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[0],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[145];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[146];
        tmp_level_value_9 = mod_consts[131];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 30;
        tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[147],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[147]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[145];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[148];
        tmp_level_value_10 = mod_consts[131];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 31;
        tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[149],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[149]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[145];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[150];
        tmp_level_value_11 = mod_consts[131];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 32;
        tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[47],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[47]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[145];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[151];
        tmp_level_value_12 = mod_consts[131];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 33;
        tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[152],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts[152]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[153];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[154];
        tmp_level_value_13 = mod_consts[131];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 34;
        tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[81],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts[81]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[155];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[156];
        tmp_level_value_14 = mod_consts[131];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 35;
        tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[107],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts[107]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[155];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[157];
        tmp_level_value_15 = mod_consts[131];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 36;
        tmp_import_name_from_24 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[158],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts[158]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[155];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[159];
        tmp_level_value_16 = mod_consts[131];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 37;
        tmp_import_name_from_25 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[100],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts[100]);
        }

        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_26;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[155];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[160];
        tmp_level_value_17 = mod_consts[131];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 38;
        tmp_import_name_from_26 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[45],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_26);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[129];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[161];
        tmp_level_value_18 = mod_consts[162];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 39;
        tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[163],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts[163]);
        }

        Py_DECREF(tmp_import_name_from_27);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_28;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[129];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[164];
        tmp_level_value_19 = mod_consts[162];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 40;
        tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[155],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts[155]);
        }

        Py_DECREF(tmp_import_name_from_28);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_29;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[165];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[166];
        tmp_level_value_20 = mod_consts[162];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 41;
        tmp_import_name_from_29 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[84],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts[84]);
        }

        Py_DECREF(tmp_import_name_from_29);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_30;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[167];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[168];
        tmp_level_value_21 = mod_consts[162];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 42;
        tmp_import_name_from_30 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[42],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts[42]);
        }

        Py_DECREF(tmp_import_name_from_30);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_31;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[169];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = mod_consts[170];
        tmp_level_value_22 = mod_consts[162];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 43;
        tmp_import_name_from_31 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[34],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts[34]);
        }

        Py_DECREF(tmp_import_name_from_31);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_32;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[169];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[171];
        tmp_level_value_23 = mod_consts[162];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 44;
        tmp_import_name_from_32 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[172],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts[172]);
        }

        Py_DECREF(tmp_import_name_from_32);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_33;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[173];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = mod_consts[174];
        tmp_level_value_24 = mod_consts[162];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 45;
        tmp_import_name_from_33 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[30],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts[30]);
        }

        Py_DECREF(tmp_import_name_from_33);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_34;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[173];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = mod_consts[175];
        tmp_level_value_25 = mod_consts[162];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 46;
        tmp_import_name_from_34 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[176],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts[176]);
        }

        Py_DECREF(tmp_import_name_from_34);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_35;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[177];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[178];
        tmp_level_value_26 = mod_consts[162];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 47;
        tmp_import_name_from_35 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[179],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts[179]);
        }

        Py_DECREF(tmp_import_name_from_35);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_36;
        PyObject *tmp_name_value_27;
        PyObject *tmp_globals_arg_value_27;
        PyObject *tmp_locals_arg_value_27;
        PyObject *tmp_fromlist_value_27;
        PyObject *tmp_level_value_27;
        tmp_name_value_27 = mod_consts[180];
        tmp_globals_arg_value_27 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_27 = Py_None;
        tmp_fromlist_value_27 = mod_consts[181];
        tmp_level_value_27 = mod_consts[162];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 48;
        tmp_import_name_from_36 = IMPORT_MODULE5(tstate, tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[182],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts[182]);
        }

        Py_DECREF(tmp_import_name_from_36);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_37;
        PyObject *tmp_name_value_28;
        PyObject *tmp_globals_arg_value_28;
        PyObject *tmp_locals_arg_value_28;
        PyObject *tmp_fromlist_value_28;
        PyObject *tmp_level_value_28;
        tmp_name_value_28 = mod_consts[180];
        tmp_globals_arg_value_28 = (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors;
        tmp_locals_arg_value_28 = Py_None;
        tmp_fromlist_value_28 = mod_consts[183];
        tmp_level_value_28 = mod_consts[162];
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 49;
        tmp_import_name_from_37 = IMPORT_MODULE5(tstate, tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
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
                (PyObject *)moduledict_sqlalchemy$orm$_orm_constructors,
                mod_consts[184],
                mod_consts[119]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts[184]);
        }

        Py_DECREF(tmp_import_name_from_37);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 78;
        tmp_assign_source_44 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[185],
            PyTuple_GET_ITEM(mod_consts[186], 0)
        );

        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_annotations_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[155]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[188]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 81;
        tmp_called_value_1 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[189], 0), mod_consts[190]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = DICT_COPY(mod_consts[191]);


        tmp_args_element_value_1 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__1_contains_alias(tmp_annotations_1);

        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 81;
        tmp_assign_source_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_defaults_1;
        PyObject *tmp_kw_defaults_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_annotations_2;
        tmp_defaults_1 = mod_consts[193];
        tmp_dict_key_1 = mod_consts[194];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[35]);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_kw_defaults_1 = _PyDict_NewPresized( 29 );
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[195];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[35]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[196];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[35]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[197];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[35]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[198];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[35]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[199];
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[35]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[15];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[176]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[176]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[200]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[17];
            tmp_dict_value_1 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[24];
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[35]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[25];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[26];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[20];
            tmp_dict_value_1 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[3];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[4];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[5];
            tmp_dict_value_1 = mod_consts[201];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[9];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[10];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[11];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[12];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[13];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[16];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[6];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[35]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[18];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[14];
            tmp_dict_value_1 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[21];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[23];
            tmp_dict_value_1 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[22];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[27];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[35]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_kw_defaults_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        tmp_annotations_2 = DICT_COPY(mod_consts[202]);
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_46 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__2_mapped_column(tmp_defaults_1, tmp_kw_defaults_1, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_defaults_2;
        PyObject *tmp_kw_defaults_2;
        PyObject *tmp_annotations_3;
        tmp_defaults_2 = mod_consts[193];
        tmp_kw_defaults_2 = DICT_COPY(mod_consts[203]);
        tmp_annotations_3 = DICT_COPY(mod_consts[204]);
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_47 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__3_orm_insert_sentinel(tmp_defaults_2, tmp_kw_defaults_2, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_3;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kw_defaults_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_annotations_4;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[155]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[206]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto frame_exception_exit_1;
        }
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = mod_consts[207];
            tmp_assign_source_49 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
            assert(!(tmp_assign_source_49 == NULL));
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_49;
        }
        {
            PyObject *tmp_assign_source_50;
            tmp_assign_source_50 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_50;
        }
        // Tried code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_51;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_51 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_51 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    exception_lineno = 399;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_51;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_52;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_assign_source_52 = tmp_dictcontraction_1__iter_value_0;
            {
                PyObject *old = outline_0_var_arg;
                outline_0_var_arg = tmp_assign_source_52;
                Py_INCREF(outline_0_var_arg);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(outline_0_var_arg);
            tmp_dictset38_key_1 = outline_0_var_arg;
            tmp_tuple_element_1 = mod_consts[208];
            tmp_dictset38_value_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_string_concat_values_1;
                PyObject *tmp_tuple_element_2;
                PyTuple_SET_ITEM0(tmp_dictset38_value_1, 0, tmp_tuple_element_1);
                tmp_tuple_element_2 = mod_consts[209];
                tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_format_value_1;
                    PyObject *tmp_format_spec_1;
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
                    CHECK_OBJECT(outline_0_var_arg);
                    tmp_format_value_1 = outline_0_var_arg;
                    tmp_format_spec_1 = mod_consts[129];
                    tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
                    if (tmp_tuple_element_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 402;

                        goto tuple_build_exception_2;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
                    tmp_tuple_element_2 = mod_consts[210];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
                }
                goto tuple_build_noexception_1;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_2:;
                Py_DECREF(tmp_string_concat_values_1);
                goto tuple_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_1:;
                tmp_tuple_element_1 = PyUnicode_Join(mod_consts[129], tmp_string_concat_values_1);
                Py_DECREF(tmp_string_concat_values_1);
                if (tmp_tuple_element_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 402;

                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_dictset38_value_1, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_dictset38_value_1);
            goto try_except_handler_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_1));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

            Py_DECREF(tmp_dictset38_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 399;

                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_dircall_arg2_1 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_dircall_arg2_1);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
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

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
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
        Py_XDECREF(outline_0_var_arg);
        outline_0_var_arg = NULL;
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

        Py_XDECREF(outline_0_var_arg);
        outline_0_var_arg = NULL;
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
        exception_lineno = 399;
        goto frame_exception_exit_1;
        outline_result_1:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_called_value_3 = impl___main__$$$function__4_complex_call_helper_star_dict(tstate, dir_call_args);
        }
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = mod_consts[36];
        tmp_dict_value_2 = Py_None;
        tmp_kw_defaults_3 = _PyDict_NewPresized( 14 );
        {
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[24];
            tmp_dict_value_2 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[37];
            tmp_dict_value_2 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[38];
            tmp_dict_value_2 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[194];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[35]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[195];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[35]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[196];
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[35]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[197];
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[35]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[198];
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[35]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[199];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[35]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[14];
            tmp_dict_value_2 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[39];
            tmp_dict_value_2 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[13];
            tmp_dict_value_2 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[9];
            tmp_dict_value_2 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_defaults_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        tmp_annotations_4 = DICT_COPY(mod_consts[211]);


        tmp_args_element_value_2 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__4_column_property(tmp_kw_defaults_3, tmp_annotations_4);

        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 398;
        tmp_assign_source_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_kw_defaults_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_annotations_5;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = mod_consts[36];
        tmp_dict_value_3 = Py_None;
        tmp_kw_defaults_4 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_expression_value_24;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[24];
            tmp_dict_value_3 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[37];
            tmp_dict_value_3 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[38];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[14];
            tmp_dict_value_3 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[194];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[35]);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[195];
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[35]);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[196];
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[35]);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[197];
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 556;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[35]);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 556;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[198];
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[35]);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[199];
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 558;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[35]);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 558;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[13];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[9];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_kw_defaults_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        tmp_annotations_5 = DICT_COPY(mod_consts[213]);


        tmp_args_element_value_3 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__5_composite(tmp_kw_defaults_4, tmp_annotations_5);

        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 544;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_kw_defaults_5;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_annotations_6;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = mod_consts[36];
        tmp_dict_value_4 = Py_None;
        tmp_kw_defaults_5 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_expression_value_30;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[24];
            tmp_dict_value_4 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[37];
            tmp_dict_value_4 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[38];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[14];
            tmp_dict_value_4 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[194];
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 575;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[35]);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 575;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[195];
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 576;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[35]);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 576;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[196];
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 577;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[35]);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 577;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[197];
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 578;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[35]);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 578;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[198];
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 579;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[35]);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 579;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[199];
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 580;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[35]);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 580;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[13];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[9];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_kw_defaults_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        tmp_annotations_6 = DICT_COPY(mod_consts[215]);


        tmp_args_element_value_4 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__6_composite(tmp_kw_defaults_5, tmp_annotations_6);

        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 566;
        tmp_assign_source_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_kw_defaults_6;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_annotations_7;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = mod_consts[36];
        tmp_dict_value_5 = Py_None;
        tmp_kw_defaults_6 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_expression_value_31;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_expression_value_36;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[24];
            tmp_dict_value_5 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[37];
            tmp_dict_value_5 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[38];
            tmp_dict_value_5 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[14];
            tmp_dict_value_5 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[194];
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 597;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[35]);
            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 597;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[195];
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 598;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[35]);
            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 598;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[196];
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 599;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[35]);
            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 599;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[197];
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 600;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[35]);
            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 600;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[198];
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 601;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[35]);
            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 601;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[199];
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 602;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[35]);
            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 602;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[13];
            tmp_dict_value_5 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[9];
            tmp_dict_value_5 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_kw_defaults_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;
        tmp_annotations_7 = DICT_COPY(mod_consts[216]);


        tmp_args_element_value_5 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__7_composite(tmp_kw_defaults_6, tmp_annotations_7);

        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 588;
        tmp_assign_source_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_defaults_3;
        PyObject *tmp_kw_defaults_7;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_annotations_8;
        tmp_defaults_3 = mod_consts[217];
        tmp_dict_key_6 = mod_consts[36];
        tmp_dict_value_6 = Py_None;
        tmp_kw_defaults_7 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_expression_value_37;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_expression_value_42;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[24];
            tmp_dict_value_6 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[37];
            tmp_dict_value_6 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[38];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[14];
            tmp_dict_value_6 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[194];
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 620;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[35]);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 620;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[195];
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 621;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[35]);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 621;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[196];
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 622;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[35]);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 622;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[197];
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[35]);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[198];
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[35]);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 624;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[199];
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 625;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[35]);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 625;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[13];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[9];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_kw_defaults_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        tmp_annotations_8 = DICT_COPY(mod_consts[218]);
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_56 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__8_composite(tmp_defaults_3, tmp_kw_defaults_7, tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_defaults_4;
        PyObject *tmp_annotations_9;
        tmp_defaults_4 = mod_consts[219];
        tmp_annotations_9 = DICT_COPY(mod_consts[220]);
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_57 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__9_with_loader_criteria(tmp_defaults_4, tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_defaults_5;
        PyObject *tmp_kw_defaults_8;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_annotations_10;
        tmp_defaults_5 = mod_consts[193];
        tmp_dict_key_7 = mod_consts[49];
        tmp_dict_value_7 = Py_None;
        tmp_kw_defaults_8 = _PyDict_NewPresized( 34 );
        {
            PyObject *tmp_expression_value_43;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_expression_value_48;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[50];
            tmp_dict_value_7 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[51];
            tmp_dict_value_7 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[52];
            tmp_dict_value_7 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[53];
            tmp_dict_value_7 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[54];
            tmp_dict_value_7 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[55];
            tmp_dict_value_7 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[56];
            tmp_dict_value_7 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[57];
            tmp_dict_value_7 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[58];
            tmp_dict_value_7 = mod_consts[222];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[59];
            tmp_dict_value_7 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[194];
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 927;

                goto dict_build_exception_7;
            }
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[35]);
            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 927;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[195];
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 928;

                goto dict_build_exception_7;
            }
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[35]);
            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 928;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[196];
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 929;

                goto dict_build_exception_7;
            }
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[35]);
            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 929;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[197];
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 930;

                goto dict_build_exception_7;
            }
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[35]);
            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 930;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[198];
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 931;

                goto dict_build_exception_7;
            }
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[35]);
            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 931;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[199];
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 932;

                goto dict_build_exception_7;
            }
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[35]);
            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 932;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[60];
            tmp_dict_value_7 = mod_consts[223];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[61];
            tmp_dict_value_7 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[62];
            tmp_dict_value_7 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[14];
            tmp_dict_value_7 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[63];
            tmp_dict_value_7 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[64];
            tmp_dict_value_7 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[65];
            tmp_dict_value_7 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[66];
            tmp_dict_value_7 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[38];
            tmp_dict_value_7 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[67];
            tmp_dict_value_7 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[68];
            tmp_dict_value_7 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[69];
            tmp_dict_value_7 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[70];
            tmp_dict_value_7 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[71];
            tmp_dict_value_7 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[13];
            tmp_dict_value_7 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[72];
            tmp_dict_value_7 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[73];
            tmp_dict_value_7 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_kw_defaults_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;
        tmp_annotations_10 = DICT_COPY(mod_consts[224]);
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_58 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__10_relationship(tmp_defaults_5, tmp_kw_defaults_8, tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_kw_defaults_9;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_annotations_11;
        tmp_dict_key_8 = mod_consts[225];
        tmp_dict_value_8 = Py_None;
        tmp_kw_defaults_9 = _PyDict_NewPresized( 11 );
        {
            PyObject *tmp_expression_value_49;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_expression_value_54;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[226];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[38];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[194];
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1812;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[35]);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1812;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[195];
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1813;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[35]);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1813;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[196];
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1814;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[35]);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1814;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[197];
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1815;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[35]);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1815;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[198];
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1816;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[35]);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1816;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[199];
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1817;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[35]);
            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1817;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[13];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[9];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_kw_defaults_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;
        tmp_annotations_11 = DICT_COPY(mod_consts[227]);


        tmp_assign_source_59 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__11_synonym(tmp_kw_defaults_9, tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_defaults_6;
        PyObject *tmp_annotations_12;
        tmp_defaults_6 = mod_consts[217];
        tmp_annotations_12 = DICT_COPY(mod_consts[229]);
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_60 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__12_create_session(tmp_defaults_6, tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_annotations_13;
        tmp_annotations_13 = DICT_COPY(mod_consts[231]);


        tmp_assign_source_61 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__13__mapper_fn(tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_defaults_7;
        PyObject *tmp_annotations_14;
        tmp_defaults_7 = mod_consts[217];
        tmp_annotations_14 = DICT_COPY(mod_consts[233]);
        Py_INCREF(tmp_defaults_7);


        tmp_assign_source_62 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__14_dynamic_loader(tmp_defaults_7, tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_annotations_15;
        tmp_annotations_15 = DICT_COPY(mod_consts[235]);


        tmp_assign_source_63 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__15_backref(tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_kw_defaults_10;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_annotations_16;
        tmp_dict_key_9 = mod_consts[36];
        tmp_dict_value_9 = Py_None;
        tmp_kw_defaults_10 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_expression_value_55;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_expression_value_60;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[37];
            tmp_dict_value_9 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[38];
            tmp_dict_value_9 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[194];
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 2053;

                goto dict_build_exception_9;
            }
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[35]);
            if (tmp_dict_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 2053;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[195];
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 2054;

                goto dict_build_exception_9;
            }
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[35]);
            if (tmp_dict_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 2054;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[196];
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 2055;

                goto dict_build_exception_9;
            }
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[35]);
            if (tmp_dict_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 2055;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[197];
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 2056;

                goto dict_build_exception_9;
            }
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[35]);
            if (tmp_dict_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 2056;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[198];
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 2057;

                goto dict_build_exception_9;
            }
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[35]);
            if (tmp_dict_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 2057;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[199];
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 2058;

                goto dict_build_exception_9;
            }
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[35]);
            if (tmp_dict_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 2058;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[14];
            tmp_dict_value_9 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[39];
            tmp_dict_value_9 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[13];
            tmp_dict_value_9 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[9];
            tmp_dict_value_9 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_kw_defaults_10);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;
        tmp_annotations_16 = DICT_COPY(mod_consts[236]);


        tmp_assign_source_64 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__16_deferred(tmp_kw_defaults_10, tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_defaults_8;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_kw_defaults_11;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_annotations_17;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[163]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2107;

            goto frame_exception_exit_1;
        }
        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 2107;
        tmp_tuple_element_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[237]);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2107;

            goto frame_exception_exit_1;
        }
        tmp_defaults_8 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_defaults_8, 0, tmp_tuple_element_3);
        tmp_dict_key_10 = mod_consts[195];
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_defaults_8);

            exception_lineno = 2109;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[35]);
        if (tmp_dict_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_defaults_8);

            exception_lineno = 2109;

            goto frame_exception_exit_1;
        }
        tmp_kw_defaults_11 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_62;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[198];
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 2110;

                goto dict_build_exception_10;
            }
            tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[35]);
            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 2110;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[39];
            tmp_dict_value_10 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[13];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[9];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_defaults_8);
        Py_DECREF(tmp_kw_defaults_11);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;
        tmp_annotations_17 = DICT_COPY(mod_consts[238]);


        tmp_assign_source_65 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__17_query_expression(tmp_defaults_8, tmp_kw_defaults_11, tmp_annotations_17);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_annotations_18;
        tmp_annotations_18 = DICT_COPY(mod_consts[240]);


        tmp_assign_source_66 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__18_clear_mappers(tmp_annotations_18);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[182]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2179;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[126]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2179;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_subscript_value_2 == NULL)) {
            tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[134]);
        }

        if (tmp_subscript_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2179;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_2);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2179;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = mod_consts[242];
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_4);
        tmp_assign_source_67 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2179;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_defaults_9;
        PyObject *tmp_annotations_19;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2182;

            goto frame_exception_exit_1;
        }
        tmp_defaults_9 = mod_consts[244];
        tmp_annotations_19 = DICT_COPY(mod_consts[245]);
        Py_INCREF(tmp_defaults_9);


        tmp_args_element_value_6 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__19_aliased(tmp_defaults_9, tmp_annotations_19);

        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 2182;
        tmp_assign_source_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2182;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_defaults_10;
        PyObject *tmp_annotations_20;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2193;

            goto frame_exception_exit_1;
        }
        tmp_defaults_10 = mod_consts[244];
        tmp_annotations_20 = DICT_COPY(mod_consts[246]);
        Py_INCREF(tmp_defaults_10);


        tmp_args_element_value_7 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__20_aliased(tmp_defaults_10, tmp_annotations_20);

        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 2193;
        tmp_assign_source_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2193;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_defaults_11;
        PyObject *tmp_annotations_21;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2204;

            goto frame_exception_exit_1;
        }
        tmp_defaults_11 = mod_consts[244];
        tmp_annotations_21 = DICT_COPY(mod_consts[247]);
        Py_INCREF(tmp_defaults_11);


        tmp_args_element_value_8 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__21_aliased(tmp_defaults_11, tmp_annotations_21);

        frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame.f_lineno = 2204;
        tmp_assign_source_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2204;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_70);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5a0f4f89632b2b9bd748fdd77da69b10, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5a0f4f89632b2b9bd748fdd77da69b10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5a0f4f89632b2b9bd748fdd77da69b10, exception_lineno);
    }



    assertFrameObject(frame_5a0f4f89632b2b9bd748fdd77da69b10);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_defaults_12;
        PyObject *tmp_annotations_22;
        tmp_defaults_12 = mod_consts[244];
        tmp_annotations_22 = DICT_COPY(mod_consts[248]);
        Py_INCREF(tmp_defaults_12);


        tmp_assign_source_71 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__22_aliased(tmp_defaults_12, tmp_annotations_22);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_defaults_13;
        PyObject *tmp_annotations_23;
        tmp_defaults_13 = mod_consts[249];
        tmp_annotations_23 = DICT_COPY(mod_consts[250]);
        Py_INCREF(tmp_defaults_13);


        tmp_assign_source_72 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__23_with_polymorphic(tmp_defaults_13, tmp_annotations_23);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_defaults_14;
        PyObject *tmp_annotations_24;
        tmp_defaults_14 = mod_consts[252];
        tmp_annotations_24 = DICT_COPY(mod_consts[253]);
        Py_INCREF(tmp_defaults_14);


        tmp_assign_source_73 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__24_join(tmp_defaults_14, tmp_annotations_24);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_defaults_15;
        PyObject *tmp_annotations_25;
        tmp_defaults_15 = mod_consts[255];
        tmp_annotations_25 = DICT_COPY(mod_consts[256]);
        Py_INCREF(tmp_defaults_15);


        tmp_assign_source_74 = MAKE_FUNCTION_sqlalchemy$orm$_orm_constructors$$$function__25_outerjoin(tmp_defaults_15, tmp_annotations_25);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_74);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlalchemy.orm._orm_constructors", false);

    Py_INCREF(module_sqlalchemy$orm$_orm_constructors);
    return module_sqlalchemy$orm$_orm_constructors;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$orm$_orm_constructors, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlalchemy$orm$_orm_constructors", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
