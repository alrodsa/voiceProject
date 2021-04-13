/* Generated code for Python module 'gi._compat'
 * created by Nuitka version 0.6.13.3
 *
 * This code is in part copyright 2021 Kay Hayen.
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

/* The "module_gi$_compat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_gi$_compat;
PyDictObject *moduledict_gi$_compat;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[46];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "gi._compat");

    constants_created = true;
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_gi$_compat(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "gi._compat");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_05b4452d16085a63304028fe0f291cab;
static PyCodeObject *codeobj_acc8e76a549bb844f0de52cc6cbcf5c8;
static PyCodeObject *codeobj_169419c34d670b8afdf09870eb4aaaf3;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[42]); CHECK_OBJECT(module_filename_obj);
    codeobj_05b4452d16085a63304028fe0f291cab = MAKE_CODEOBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[43], NULL, 2, 0, 0);
    codeobj_acc8e76a549bb844f0de52cc6cbcf5c8 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[44], NULL, NULL, 0, 0, 0);
    codeobj_169419c34d670b8afdf09870eb4aaaf3 = MAKE_CODEOBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[45], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_gi$_compat$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_gi$_compat$$$function__2_reraise();


// The module function definitions.
static PyObject *impl_gi$_compat$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_b = python_pars[1];
    struct Nuitka_FrameObject *frame_05b4452d16085a63304028fe0f291cab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_05b4452d16085a63304028fe0f291cab = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_05b4452d16085a63304028fe0f291cab)) {
        Py_XDECREF(cache_frame_05b4452d16085a63304028fe0f291cab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05b4452d16085a63304028fe0f291cab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05b4452d16085a63304028fe0f291cab = MAKE_FUNCTION_FRAME(codeobj_05b4452d16085a63304028fe0f291cab, module_gi$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_05b4452d16085a63304028fe0f291cab->m_type_description == NULL);
    frame_05b4452d16085a63304028fe0f291cab = cache_frame_05b4452d16085a63304028fe0f291cab;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_05b4452d16085a63304028fe0f291cab);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_05b4452d16085a63304028fe0f291cab) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_a);
        tmp_compexpr_left_1 = par_a;
        CHECK_OBJECT(par_b);
        tmp_compexpr_right_1 = par_b;
        tmp_left_name_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_compexpr_left_2 = par_a;
        CHECK_OBJECT(par_b);
        tmp_compexpr_right_2 = par_b;
        tmp_right_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_05b4452d16085a63304028fe0f291cab);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_05b4452d16085a63304028fe0f291cab);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_05b4452d16085a63304028fe0f291cab);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_05b4452d16085a63304028fe0f291cab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05b4452d16085a63304028fe0f291cab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05b4452d16085a63304028fe0f291cab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05b4452d16085a63304028fe0f291cab,
        type_description_1,
        par_a,
        par_b
    );


    // Release cached frame if used for exception.
    if (frame_05b4452d16085a63304028fe0f291cab == cache_frame_05b4452d16085a63304028fe0f291cab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_05b4452d16085a63304028fe0f291cab);
        cache_frame_05b4452d16085a63304028fe0f291cab = NULL;
    }

    assertFrameObject(frame_05b4452d16085a63304028fe0f291cab);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    par_a = NULL;
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);
    par_b = NULL;
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

    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    par_a = NULL;
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);
    par_b = NULL;
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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$_compat$$$function__2_reraise(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tp = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_tb = python_pars[2];
    struct Nuitka_FrameObject *frame_169419c34d670b8afdf09870eb4aaaf3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_169419c34d670b8afdf09870eb4aaaf3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_169419c34d670b8afdf09870eb4aaaf3)) {
        Py_XDECREF(cache_frame_169419c34d670b8afdf09870eb4aaaf3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_169419c34d670b8afdf09870eb4aaaf3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_169419c34d670b8afdf09870eb4aaaf3 = MAKE_FUNCTION_FRAME(codeobj_169419c34d670b8afdf09870eb4aaaf3, module_gi$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_169419c34d670b8afdf09870eb4aaaf3->m_type_description == NULL);
    frame_169419c34d670b8afdf09870eb4aaaf3 = cache_frame_169419c34d670b8afdf09870eb4aaaf3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_169419c34d670b8afdf09870eb4aaaf3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_169419c34d670b8afdf09870eb4aaaf3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_tp);
        tmp_called_name_1 = par_tp;
        CHECK_OBJECT(par_value);
        tmp_args_element_name_1 = par_value;
        frame_169419c34d670b8afdf09870eb4aaaf3->m_frame.f_lineno = 56;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tb);
        tmp_args_element_name_2 = par_tb;
        frame_169419c34d670b8afdf09870eb4aaaf3->m_frame.f_lineno = 56;
        tmp_raise_type_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[0], tmp_args_element_name_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 56;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_169419c34d670b8afdf09870eb4aaaf3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_169419c34d670b8afdf09870eb4aaaf3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_169419c34d670b8afdf09870eb4aaaf3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_169419c34d670b8afdf09870eb4aaaf3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_169419c34d670b8afdf09870eb4aaaf3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_169419c34d670b8afdf09870eb4aaaf3,
        type_description_1,
        par_tp,
        par_value,
        par_tb
    );


    // Release cached frame if used for exception.
    if (frame_169419c34d670b8afdf09870eb4aaaf3 == cache_frame_169419c34d670b8afdf09870eb4aaaf3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_169419c34d670b8afdf09870eb4aaaf3);
        cache_frame_169419c34d670b8afdf09870eb4aaaf3 = NULL;
    }

    assertFrameObject(frame_169419c34d670b8afdf09870eb4aaaf3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    CHECK_OBJECT(par_tp);
    Py_DECREF(par_tp);
    par_tp = NULL;
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    Py_XDECREF(par_tb);
    par_tb = NULL;
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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}



static PyObject *MAKE_FUNCTION_gi$_compat$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$_compat$$$function__1_lambda,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_05b4452d16085a63304028fe0f291cab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$_compat$$$function__2_reraise() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$_compat$$$function__2_reraise,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_169419c34d670b8afdf09870eb4aaaf3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$_compat,
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

function_impl_code functable_gi$_compat[] = {
    impl_gi$_compat$$$function__1_lambda,
    impl_gi$_compat$$$function__2_reraise,
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
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_gi$_compat;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
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

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_gi$_compat) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_gi$_compat[offset],
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
        module_gi$_compat,
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

// Actual name might be different when loaded as a package.
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "gi._compat";

// Internal entry point for module code.
PyObject *modulecode_gi$_compat(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_gi$_compat = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("gi._compat: Skipping module init, already done.\n");
#endif

        return module_gi$_compat;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 0x300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("gi._compat: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("gi._compat: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("gi._compat: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initgi$_compat\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_gi$_compat = MODULE_DICT(module_gi$_compat);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL) {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_gi$_compat,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_gi$_compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_gi$_compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_gi$_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_gi$_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_gi$_compat);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_gi$_compat);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_eval_call_1__globals = NULL;
    PyObject *tmp_eval_call_1__locals = NULL;
    PyObject *tmp_eval_call_1__source = NULL;
    PyObject *tmp_eval_call_2__globals = NULL;
    PyObject *tmp_eval_call_2__locals = NULL;
    PyObject *tmp_eval_call_2__source = NULL;
    PyObject *tmp_eval_call_3__globals = NULL;
    PyObject *tmp_eval_call_3__locals = NULL;
    PyObject *tmp_eval_call_3__source = NULL;
    PyObject *tmp_eval_call_4__globals = NULL;
    PyObject *tmp_eval_call_4__locals = NULL;
    PyObject *tmp_eval_call_4__source = NULL;
    PyObject *tmp_eval_call_5__globals = NULL;
    PyObject *tmp_eval_call_5__locals = NULL;
    PyObject *tmp_eval_call_5__source = NULL;
    PyObject *tmp_eval_call_6__globals = NULL;
    PyObject *tmp_eval_call_6__locals = NULL;
    PyObject *tmp_eval_call_6__source = NULL;
    PyObject *tmp_eval_call_7__globals = NULL;
    PyObject *tmp_eval_call_7__locals = NULL;
    PyObject *tmp_eval_call_7__source = NULL;
    PyObject *tmp_exec_call_1__globals = NULL;
    PyObject *tmp_exec_call_1__locals = NULL;
    struct Nuitka_FrameObject *frame_acc8e76a549bb844f0de52cc6cbcf5c8;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_acc8e76a549bb844f0de52cc6cbcf5c8 = MAKE_MODULE_FRAME(codeobj_acc8e76a549bb844f0de52cc6cbcf5c8, module_gi$_compat);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_acc8e76a549bb844f0de52cc6cbcf5c8);
    assert(Py_REFCNT(frame_acc8e76a549bb844f0de52cc6cbcf5c8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[5], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        frame_acc8e76a549bb844f0de52cc6cbcf5c8->m_frame.f_lineno = 14;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_False;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_False;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_6);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_expression_name_2 == NULL));
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[10]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[11];
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[12];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_True;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[13];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_gi$_compat;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[14];
        tmp_level_name_1 = mod_consts[11];
        frame_acc8e76a549bb844f0de52cc6cbcf5c8->m_frame.f_lineno = 20;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_gi$_compat,
                mod_consts[13],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[15];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_gi$_compat;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[16];
        tmp_level_name_2 = mod_consts[11];
        frame_acc8e76a549bb844f0de52cc6cbcf5c8->m_frame.f_lineno = 23;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_gi$_compat,
                mod_consts[15],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[15]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = Py_None;
            assert(tmp_eval_call_1__globals == NULL);
            Py_INCREF(tmp_assign_source_11);
            tmp_eval_call_1__globals = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = Py_None;
            assert(tmp_eval_call_1__locals == NULL);
            Py_INCREF(tmp_assign_source_12);
            tmp_eval_call_1__locals = tmp_assign_source_12;
        }
        {
            bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_eval_call_1__locals);
            tmp_compexpr_left_2 = tmp_eval_call_1__locals;
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
            if (tmp_condition_result_2 != false) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_13;
            bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(tmp_eval_call_1__globals);
            tmp_compexpr_left_3 = tmp_eval_call_1__globals;
            tmp_compexpr_right_3 = Py_None;
            tmp_condition_result_3 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
            if (tmp_condition_result_3 != false) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            tmp_assign_source_13 = (PyObject *)moduledict_gi$_compat;
            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT(tmp_eval_call_1__globals);
            tmp_assign_source_13 = tmp_eval_call_1__globals;
            condexpr_end_1:;
            {
                PyObject *old = tmp_eval_call_1__locals;
                assert(old != NULL);
                tmp_eval_call_1__locals = tmp_assign_source_13;
                Py_INCREF(tmp_eval_call_1__locals);
                Py_DECREF(old);
            }

        }
        branch_no_2:;
        {
            bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT(tmp_eval_call_1__globals);
            tmp_compexpr_left_4 = tmp_eval_call_1__globals;
            tmp_compexpr_right_4 = Py_None;
            tmp_condition_result_4 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? true : false;
            if (tmp_condition_result_4 != false) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = (PyObject *)moduledict_gi$_compat;
            {
                PyObject *old = tmp_eval_call_1__globals;
                assert(old != NULL);
                tmp_eval_call_1__globals = tmp_assign_source_14;
                Py_INCREF(tmp_eval_call_1__globals);
                Py_DECREF(old);
            }

        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = mod_consts[17];
            assert(tmp_eval_call_1__source == NULL);
            Py_INCREF(tmp_assign_source_15);
            tmp_eval_call_1__source = tmp_assign_source_15;
        }
        // Tried code:
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            CHECK_OBJECT(tmp_eval_call_1__source);
            tmp_isinstance_inst_1 = tmp_eval_call_1__source;
            tmp_isinstance_cls_1 = mod_consts[18];
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto try_except_handler_1;
            }
            tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto try_except_handler_1;
            }
            tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_1;
            PyObject *tmp_expression_name_3;
            PyObject *tmp_args_name_1;
            bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_type_arg_1;
            CHECK_OBJECT(tmp_eval_call_1__source);
            tmp_expression_name_3 = tmp_eval_call_1__source;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[19]);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto try_except_handler_1;
            }
            CHECK_OBJECT(tmp_eval_call_1__source);
            tmp_type_arg_1 = tmp_eval_call_1__source;
            tmp_compexpr_left_5 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_compexpr_left_5 == NULL));
            tmp_compexpr_right_5 = (PyObject *)&PyBytes_Type;
            tmp_condition_result_6 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? true : false;
            Py_DECREF(tmp_compexpr_left_5);
            if (tmp_condition_result_6 != false) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_args_name_1 = mod_consts[20];
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_args_name_1 = mod_consts[21];
            condexpr_end_2:;
            frame_acc8e76a549bb844f0de52cc6cbcf5c8->m_frame.f_lineno = 26;
            tmp_assign_source_16 = CALL_FUNCTION_WITH_POSARGS(tmp_called_name_1, tmp_args_name_1);
            Py_DECREF(tmp_called_name_1);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto try_except_handler_1;
            }
            {
                PyObject *old = tmp_eval_call_1__source;
                tmp_eval_call_1__source = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        branch_no_4:;
        {
            PyObject *tmp_eval_source_1;
            PyObject *tmp_eval_globals_1;
            PyObject *tmp_eval_locals_1;
            PyObject *tmp_eval_compiled_1;
            CHECK_OBJECT(tmp_eval_call_1__source);
            tmp_eval_source_1 = tmp_eval_call_1__source;
            CHECK_OBJECT(tmp_eval_call_1__globals);
            tmp_eval_globals_1 = tmp_eval_call_1__globals;
            CHECK_OBJECT(tmp_eval_call_1__locals);
            tmp_eval_locals_1 = tmp_eval_call_1__locals;
            tmp_eval_compiled_1 = COMPILE_CODE(tmp_eval_source_1, mod_consts[22], mod_consts[23], NULL, NULL, NULL);
            if (tmp_eval_compiled_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto try_except_handler_1;
            }
            tmp_assign_source_10 = EVAL_CODE(tmp_eval_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1);
            Py_DECREF(tmp_eval_compiled_1);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto try_except_handler_1;
            }
            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_eval_call_1__globals);
        Py_DECREF(tmp_eval_call_1__globals);
        tmp_eval_call_1__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_1__locals);
        Py_DECREF(tmp_eval_call_1__locals);
        tmp_eval_call_1__locals = NULL;
        Py_XDECREF(tmp_eval_call_1__source);
        tmp_eval_call_1__source = NULL;

        goto outline_result_1;
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

        CHECK_OBJECT(tmp_eval_call_1__globals);
        Py_DECREF(tmp_eval_call_1__globals);
        tmp_eval_call_1__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_1__locals);
        Py_DECREF(tmp_eval_call_1__locals);
        tmp_eval_call_1__locals = NULL;
        Py_XDECREF(tmp_eval_call_1__source);
        tmp_eval_call_1__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = Py_None;
            assert(tmp_eval_call_2__globals == NULL);
            Py_INCREF(tmp_assign_source_18);
            tmp_eval_call_2__globals = tmp_assign_source_18;
        }
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = Py_None;
            assert(tmp_eval_call_2__locals == NULL);
            Py_INCREF(tmp_assign_source_19);
            tmp_eval_call_2__locals = tmp_assign_source_19;
        }
        {
            bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT(tmp_eval_call_2__locals);
            tmp_compexpr_left_6 = tmp_eval_call_2__locals;
            tmp_compexpr_right_6 = Py_None;
            tmp_condition_result_7 = (tmp_compexpr_left_6 == tmp_compexpr_right_6) ? true : false;
            if (tmp_condition_result_7 != false) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_20;
            bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT(tmp_eval_call_2__globals);
            tmp_compexpr_left_7 = tmp_eval_call_2__globals;
            tmp_compexpr_right_7 = Py_None;
            tmp_condition_result_8 = (tmp_compexpr_left_7 == tmp_compexpr_right_7) ? true : false;
            if (tmp_condition_result_8 != false) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_assign_source_20 = (PyObject *)moduledict_gi$_compat;
            goto condexpr_end_3;
            condexpr_false_3:;
            CHECK_OBJECT(tmp_eval_call_2__globals);
            tmp_assign_source_20 = tmp_eval_call_2__globals;
            condexpr_end_3:;
            {
                PyObject *old = tmp_eval_call_2__locals;
                assert(old != NULL);
                tmp_eval_call_2__locals = tmp_assign_source_20;
                Py_INCREF(tmp_eval_call_2__locals);
                Py_DECREF(old);
            }

        }
        branch_no_5:;
        {
            bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            CHECK_OBJECT(tmp_eval_call_2__globals);
            tmp_compexpr_left_8 = tmp_eval_call_2__globals;
            tmp_compexpr_right_8 = Py_None;
            tmp_condition_result_9 = (tmp_compexpr_left_8 == tmp_compexpr_right_8) ? true : false;
            if (tmp_condition_result_9 != false) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = (PyObject *)moduledict_gi$_compat;
            {
                PyObject *old = tmp_eval_call_2__globals;
                assert(old != NULL);
                tmp_eval_call_2__globals = tmp_assign_source_21;
                Py_INCREF(tmp_eval_call_2__globals);
                Py_DECREF(old);
            }

        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = mod_consts[25];
            assert(tmp_eval_call_2__source == NULL);
            Py_INCREF(tmp_assign_source_22);
            tmp_eval_call_2__source = tmp_assign_source_22;
        }
        // Tried code:
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            CHECK_OBJECT(tmp_eval_call_2__source);
            tmp_isinstance_inst_2 = tmp_eval_call_2__source;
            tmp_isinstance_cls_2 = mod_consts[18];
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto try_except_handler_2;
            }
            tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto try_except_handler_2;
            }
            tmp_condition_result_10 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_2;
            PyObject *tmp_expression_name_4;
            PyObject *tmp_args_name_2;
            bool tmp_condition_result_11;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            PyObject *tmp_type_arg_2;
            CHECK_OBJECT(tmp_eval_call_2__source);
            tmp_expression_name_4 = tmp_eval_call_2__source;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[19]);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto try_except_handler_2;
            }
            CHECK_OBJECT(tmp_eval_call_2__source);
            tmp_type_arg_2 = tmp_eval_call_2__source;
            tmp_compexpr_left_9 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_compexpr_left_9 == NULL));
            tmp_compexpr_right_9 = (PyObject *)&PyBytes_Type;
            tmp_condition_result_11 = (tmp_compexpr_left_9 == tmp_compexpr_right_9) ? true : false;
            Py_DECREF(tmp_compexpr_left_9);
            if (tmp_condition_result_11 != false) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_args_name_2 = mod_consts[20];
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_args_name_2 = mod_consts[21];
            condexpr_end_4:;
            frame_acc8e76a549bb844f0de52cc6cbcf5c8->m_frame.f_lineno = 27;
            tmp_assign_source_23 = CALL_FUNCTION_WITH_POSARGS(tmp_called_name_2, tmp_args_name_2);
            Py_DECREF(tmp_called_name_2);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_eval_call_2__source;
                tmp_eval_call_2__source = tmp_assign_source_23;
                Py_XDECREF(old);
            }

        }
        branch_no_7:;
        {
            PyObject *tmp_eval_source_2;
            PyObject *tmp_eval_globals_2;
            PyObject *tmp_eval_locals_2;
            PyObject *tmp_eval_compiled_2;
            CHECK_OBJECT(tmp_eval_call_2__source);
            tmp_eval_source_2 = tmp_eval_call_2__source;
            CHECK_OBJECT(tmp_eval_call_2__globals);
            tmp_eval_globals_2 = tmp_eval_call_2__globals;
            CHECK_OBJECT(tmp_eval_call_2__locals);
            tmp_eval_locals_2 = tmp_eval_call_2__locals;
            tmp_eval_compiled_2 = COMPILE_CODE(tmp_eval_source_2, mod_consts[22], mod_consts[23], NULL, NULL, NULL);
            if (tmp_eval_compiled_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto try_except_handler_2;
            }
            tmp_assign_source_17 = EVAL_CODE(tmp_eval_compiled_2, tmp_eval_globals_2, tmp_eval_locals_2);
            Py_DECREF(tmp_eval_compiled_2);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_eval_call_2__globals);
        Py_DECREF(tmp_eval_call_2__globals);
        tmp_eval_call_2__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_2__locals);
        Py_DECREF(tmp_eval_call_2__locals);
        tmp_eval_call_2__locals = NULL;
        Py_XDECREF(tmp_eval_call_2__source);
        tmp_eval_call_2__source = NULL;

        goto outline_result_2;
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

        CHECK_OBJECT(tmp_eval_call_2__globals);
        Py_DECREF(tmp_eval_call_2__globals);
        tmp_eval_call_2__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_2__locals);
        Py_DECREF(tmp_eval_call_2__locals);
        tmp_eval_call_2__locals = NULL;
        Py_XDECREF(tmp_eval_call_2__source);
        tmp_eval_call_2__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = Py_None;
            assert(tmp_eval_call_3__globals == NULL);
            Py_INCREF(tmp_assign_source_25);
            tmp_eval_call_3__globals = tmp_assign_source_25;
        }
        {
            PyObject *tmp_assign_source_26;
            tmp_assign_source_26 = Py_None;
            assert(tmp_eval_call_3__locals == NULL);
            Py_INCREF(tmp_assign_source_26);
            tmp_eval_call_3__locals = tmp_assign_source_26;
        }
        {
            bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            CHECK_OBJECT(tmp_eval_call_3__locals);
            tmp_compexpr_left_10 = tmp_eval_call_3__locals;
            tmp_compexpr_right_10 = Py_None;
            tmp_condition_result_12 = (tmp_compexpr_left_10 == tmp_compexpr_right_10) ? true : false;
            if (tmp_condition_result_12 != false) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        {
            PyObject *tmp_assign_source_27;
            bool tmp_condition_result_13;
            PyObject *tmp_compexpr_left_11;
            PyObject *tmp_compexpr_right_11;
            CHECK_OBJECT(tmp_eval_call_3__globals);
            tmp_compexpr_left_11 = tmp_eval_call_3__globals;
            tmp_compexpr_right_11 = Py_None;
            tmp_condition_result_13 = (tmp_compexpr_left_11 == tmp_compexpr_right_11) ? true : false;
            if (tmp_condition_result_13 != false) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_assign_source_27 = (PyObject *)moduledict_gi$_compat;
            goto condexpr_end_5;
            condexpr_false_5:;
            CHECK_OBJECT(tmp_eval_call_3__globals);
            tmp_assign_source_27 = tmp_eval_call_3__globals;
            condexpr_end_5:;
            {
                PyObject *old = tmp_eval_call_3__locals;
                assert(old != NULL);
                tmp_eval_call_3__locals = tmp_assign_source_27;
                Py_INCREF(tmp_eval_call_3__locals);
                Py_DECREF(old);
            }

        }
        branch_no_8:;
        {
            bool tmp_condition_result_14;
            PyObject *tmp_compexpr_left_12;
            PyObject *tmp_compexpr_right_12;
            CHECK_OBJECT(tmp_eval_call_3__globals);
            tmp_compexpr_left_12 = tmp_eval_call_3__globals;
            tmp_compexpr_right_12 = Py_None;
            tmp_condition_result_14 = (tmp_compexpr_left_12 == tmp_compexpr_right_12) ? true : false;
            if (tmp_condition_result_14 != false) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = (PyObject *)moduledict_gi$_compat;
            {
                PyObject *old = tmp_eval_call_3__globals;
                assert(old != NULL);
                tmp_eval_call_3__globals = tmp_assign_source_28;
                Py_INCREF(tmp_eval_call_3__globals);
                Py_DECREF(old);
            }

        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = mod_consts[27];
            assert(tmp_eval_call_3__source == NULL);
            Py_INCREF(tmp_assign_source_29);
            tmp_eval_call_3__source = tmp_assign_source_29;
        }
        // Tried code:
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_isinstance_inst_3;
            PyObject *tmp_isinstance_cls_3;
            CHECK_OBJECT(tmp_eval_call_3__source);
            tmp_isinstance_inst_3 = tmp_eval_call_3__source;
            tmp_isinstance_cls_3 = mod_consts[18];
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            tmp_operand_name_3 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            tmp_condition_result_15 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_name_3;
            PyObject *tmp_expression_name_5;
            PyObject *tmp_args_name_3;
            bool tmp_condition_result_16;
            PyObject *tmp_compexpr_left_13;
            PyObject *tmp_compexpr_right_13;
            PyObject *tmp_type_arg_3;
            CHECK_OBJECT(tmp_eval_call_3__source);
            tmp_expression_name_5 = tmp_eval_call_3__source;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[19]);
            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            CHECK_OBJECT(tmp_eval_call_3__source);
            tmp_type_arg_3 = tmp_eval_call_3__source;
            tmp_compexpr_left_13 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_compexpr_left_13 == NULL));
            tmp_compexpr_right_13 = (PyObject *)&PyBytes_Type;
            tmp_condition_result_16 = (tmp_compexpr_left_13 == tmp_compexpr_right_13) ? true : false;
            Py_DECREF(tmp_compexpr_left_13);
            if (tmp_condition_result_16 != false) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_args_name_3 = mod_consts[20];
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_args_name_3 = mod_consts[21];
            condexpr_end_6:;
            frame_acc8e76a549bb844f0de52cc6cbcf5c8->m_frame.f_lineno = 28;
            tmp_assign_source_30 = CALL_FUNCTION_WITH_POSARGS(tmp_called_name_3, tmp_args_name_3);
            Py_DECREF(tmp_called_name_3);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_eval_call_3__source;
                tmp_eval_call_3__source = tmp_assign_source_30;
                Py_XDECREF(old);
            }

        }
        branch_no_10:;
        {
            PyObject *tmp_eval_source_3;
            PyObject *tmp_eval_globals_3;
            PyObject *tmp_eval_locals_3;
            PyObject *tmp_eval_compiled_3;
            CHECK_OBJECT(tmp_eval_call_3__source);
            tmp_eval_source_3 = tmp_eval_call_3__source;
            CHECK_OBJECT(tmp_eval_call_3__globals);
            tmp_eval_globals_3 = tmp_eval_call_3__globals;
            CHECK_OBJECT(tmp_eval_call_3__locals);
            tmp_eval_locals_3 = tmp_eval_call_3__locals;
            tmp_eval_compiled_3 = COMPILE_CODE(tmp_eval_source_3, mod_consts[22], mod_consts[23], NULL, NULL, NULL);
            if (tmp_eval_compiled_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            tmp_assign_source_24 = EVAL_CODE(tmp_eval_compiled_3, tmp_eval_globals_3, tmp_eval_locals_3);
            Py_DECREF(tmp_eval_compiled_3);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_eval_call_3__globals);
        Py_DECREF(tmp_eval_call_3__globals);
        tmp_eval_call_3__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_3__locals);
        Py_DECREF(tmp_eval_call_3__locals);
        tmp_eval_call_3__locals = NULL;
        Py_XDECREF(tmp_eval_call_3__source);
        tmp_eval_call_3__source = NULL;

        goto outline_result_3;
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

        CHECK_OBJECT(tmp_eval_call_3__globals);
        Py_DECREF(tmp_eval_call_3__globals);
        tmp_eval_call_3__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_3__locals);
        Py_DECREF(tmp_eval_call_3__locals);
        tmp_eval_call_3__locals = NULL;
        Py_XDECREF(tmp_eval_call_3__source);
        tmp_eval_call_3__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_assign_source_32;
            tmp_assign_source_32 = Py_None;
            assert(tmp_eval_call_4__globals == NULL);
            Py_INCREF(tmp_assign_source_32);
            tmp_eval_call_4__globals = tmp_assign_source_32;
        }
        {
            PyObject *tmp_assign_source_33;
            tmp_assign_source_33 = Py_None;
            assert(tmp_eval_call_4__locals == NULL);
            Py_INCREF(tmp_assign_source_33);
            tmp_eval_call_4__locals = tmp_assign_source_33;
        }
        {
            bool tmp_condition_result_17;
            PyObject *tmp_compexpr_left_14;
            PyObject *tmp_compexpr_right_14;
            CHECK_OBJECT(tmp_eval_call_4__locals);
            tmp_compexpr_left_14 = tmp_eval_call_4__locals;
            tmp_compexpr_right_14 = Py_None;
            tmp_condition_result_17 = (tmp_compexpr_left_14 == tmp_compexpr_right_14) ? true : false;
            if (tmp_condition_result_17 != false) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
        }
        branch_yes_11:;
        {
            PyObject *tmp_assign_source_34;
            bool tmp_condition_result_18;
            PyObject *tmp_compexpr_left_15;
            PyObject *tmp_compexpr_right_15;
            CHECK_OBJECT(tmp_eval_call_4__globals);
            tmp_compexpr_left_15 = tmp_eval_call_4__globals;
            tmp_compexpr_right_15 = Py_None;
            tmp_condition_result_18 = (tmp_compexpr_left_15 == tmp_compexpr_right_15) ? true : false;
            if (tmp_condition_result_18 != false) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_assign_source_34 = (PyObject *)moduledict_gi$_compat;
            goto condexpr_end_7;
            condexpr_false_7:;
            CHECK_OBJECT(tmp_eval_call_4__globals);
            tmp_assign_source_34 = tmp_eval_call_4__globals;
            condexpr_end_7:;
            {
                PyObject *old = tmp_eval_call_4__locals;
                assert(old != NULL);
                tmp_eval_call_4__locals = tmp_assign_source_34;
                Py_INCREF(tmp_eval_call_4__locals);
                Py_DECREF(old);
            }

        }
        branch_no_11:;
        {
            bool tmp_condition_result_19;
            PyObject *tmp_compexpr_left_16;
            PyObject *tmp_compexpr_right_16;
            CHECK_OBJECT(tmp_eval_call_4__globals);
            tmp_compexpr_left_16 = tmp_eval_call_4__globals;
            tmp_compexpr_right_16 = Py_None;
            tmp_condition_result_19 = (tmp_compexpr_left_16 == tmp_compexpr_right_16) ? true : false;
            if (tmp_condition_result_19 != false) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        {
            PyObject *tmp_assign_source_35;
            tmp_assign_source_35 = (PyObject *)moduledict_gi$_compat;
            {
                PyObject *old = tmp_eval_call_4__globals;
                assert(old != NULL);
                tmp_eval_call_4__globals = tmp_assign_source_35;
                Py_INCREF(tmp_eval_call_4__globals);
                Py_DECREF(old);
            }

        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_36;
            tmp_assign_source_36 = mod_consts[29];
            assert(tmp_eval_call_4__source == NULL);
            Py_INCREF(tmp_assign_source_36);
            tmp_eval_call_4__source = tmp_assign_source_36;
        }
        // Tried code:
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_isinstance_inst_4;
            PyObject *tmp_isinstance_cls_4;
            CHECK_OBJECT(tmp_eval_call_4__source);
            tmp_isinstance_inst_4 = tmp_eval_call_4__source;
            tmp_isinstance_cls_4 = mod_consts[18];
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_4;
            }
            tmp_operand_name_4 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_4;
            }
            tmp_condition_result_20 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_13;
            } else {
                goto branch_no_13;
            }
        }
        branch_yes_13:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_name_4;
            PyObject *tmp_expression_name_6;
            PyObject *tmp_args_name_4;
            bool tmp_condition_result_21;
            PyObject *tmp_compexpr_left_17;
            PyObject *tmp_compexpr_right_17;
            PyObject *tmp_type_arg_4;
            CHECK_OBJECT(tmp_eval_call_4__source);
            tmp_expression_name_6 = tmp_eval_call_4__source;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[19]);
            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_4;
            }
            CHECK_OBJECT(tmp_eval_call_4__source);
            tmp_type_arg_4 = tmp_eval_call_4__source;
            tmp_compexpr_left_17 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_compexpr_left_17 == NULL));
            tmp_compexpr_right_17 = (PyObject *)&PyBytes_Type;
            tmp_condition_result_21 = (tmp_compexpr_left_17 == tmp_compexpr_right_17) ? true : false;
            Py_DECREF(tmp_compexpr_left_17);
            if (tmp_condition_result_21 != false) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_args_name_4 = mod_consts[20];
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_args_name_4 = mod_consts[21];
            condexpr_end_8:;
            frame_acc8e76a549bb844f0de52cc6cbcf5c8->m_frame.f_lineno = 29;
            tmp_assign_source_37 = CALL_FUNCTION_WITH_POSARGS(tmp_called_name_4, tmp_args_name_4);
            Py_DECREF(tmp_called_name_4);
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_eval_call_4__source;
                tmp_eval_call_4__source = tmp_assign_source_37;
                Py_XDECREF(old);
            }

        }
        branch_no_13:;
        {
            PyObject *tmp_eval_source_4;
            PyObject *tmp_eval_globals_4;
            PyObject *tmp_eval_locals_4;
            PyObject *tmp_eval_compiled_4;
            CHECK_OBJECT(tmp_eval_call_4__source);
            tmp_eval_source_4 = tmp_eval_call_4__source;
            CHECK_OBJECT(tmp_eval_call_4__globals);
            tmp_eval_globals_4 = tmp_eval_call_4__globals;
            CHECK_OBJECT(tmp_eval_call_4__locals);
            tmp_eval_locals_4 = tmp_eval_call_4__locals;
            tmp_eval_compiled_4 = COMPILE_CODE(tmp_eval_source_4, mod_consts[22], mod_consts[23], NULL, NULL, NULL);
            if (tmp_eval_compiled_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_4;
            }
            tmp_assign_source_31 = EVAL_CODE(tmp_eval_compiled_4, tmp_eval_globals_4, tmp_eval_locals_4);
            Py_DECREF(tmp_eval_compiled_4);
            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_4;
            }
            goto try_return_handler_4;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_eval_call_4__globals);
        Py_DECREF(tmp_eval_call_4__globals);
        tmp_eval_call_4__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_4__locals);
        Py_DECREF(tmp_eval_call_4__locals);
        tmp_eval_call_4__locals = NULL;
        Py_XDECREF(tmp_eval_call_4__source);
        tmp_eval_call_4__source = NULL;

        goto outline_result_4;
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

        CHECK_OBJECT(tmp_eval_call_4__globals);
        Py_DECREF(tmp_eval_call_4__globals);
        tmp_eval_call_4__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_4__locals);
        Py_DECREF(tmp_eval_call_4__locals);
        tmp_eval_call_4__locals = NULL;
        Py_XDECREF(tmp_eval_call_4__source);
        tmp_eval_call_4__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_38;
        {
            PyObject *tmp_assign_source_39;
            tmp_assign_source_39 = Py_None;
            assert(tmp_eval_call_5__globals == NULL);
            Py_INCREF(tmp_assign_source_39);
            tmp_eval_call_5__globals = tmp_assign_source_39;
        }
        {
            PyObject *tmp_assign_source_40;
            tmp_assign_source_40 = Py_None;
            assert(tmp_eval_call_5__locals == NULL);
            Py_INCREF(tmp_assign_source_40);
            tmp_eval_call_5__locals = tmp_assign_source_40;
        }
        {
            bool tmp_condition_result_22;
            PyObject *tmp_compexpr_left_18;
            PyObject *tmp_compexpr_right_18;
            CHECK_OBJECT(tmp_eval_call_5__locals);
            tmp_compexpr_left_18 = tmp_eval_call_5__locals;
            tmp_compexpr_right_18 = Py_None;
            tmp_condition_result_22 = (tmp_compexpr_left_18 == tmp_compexpr_right_18) ? true : false;
            if (tmp_condition_result_22 != false) {
                goto branch_yes_14;
            } else {
                goto branch_no_14;
            }
        }
        branch_yes_14:;
        {
            PyObject *tmp_assign_source_41;
            bool tmp_condition_result_23;
            PyObject *tmp_compexpr_left_19;
            PyObject *tmp_compexpr_right_19;
            CHECK_OBJECT(tmp_eval_call_5__globals);
            tmp_compexpr_left_19 = tmp_eval_call_5__globals;
            tmp_compexpr_right_19 = Py_None;
            tmp_condition_result_23 = (tmp_compexpr_left_19 == tmp_compexpr_right_19) ? true : false;
            if (tmp_condition_result_23 != false) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_assign_source_41 = (PyObject *)moduledict_gi$_compat;
            goto condexpr_end_9;
            condexpr_false_9:;
            CHECK_OBJECT(tmp_eval_call_5__globals);
            tmp_assign_source_41 = tmp_eval_call_5__globals;
            condexpr_end_9:;
            {
                PyObject *old = tmp_eval_call_5__locals;
                assert(old != NULL);
                tmp_eval_call_5__locals = tmp_assign_source_41;
                Py_INCREF(tmp_eval_call_5__locals);
                Py_DECREF(old);
            }

        }
        branch_no_14:;
        {
            bool tmp_condition_result_24;
            PyObject *tmp_compexpr_left_20;
            PyObject *tmp_compexpr_right_20;
            CHECK_OBJECT(tmp_eval_call_5__globals);
            tmp_compexpr_left_20 = tmp_eval_call_5__globals;
            tmp_compexpr_right_20 = Py_None;
            tmp_condition_result_24 = (tmp_compexpr_left_20 == tmp_compexpr_right_20) ? true : false;
            if (tmp_condition_result_24 != false) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        {
            PyObject *tmp_assign_source_42;
            tmp_assign_source_42 = (PyObject *)moduledict_gi$_compat;
            {
                PyObject *old = tmp_eval_call_5__globals;
                assert(old != NULL);
                tmp_eval_call_5__globals = tmp_assign_source_42;
                Py_INCREF(tmp_eval_call_5__globals);
                Py_DECREF(old);
            }

        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_43;
            tmp_assign_source_43 = mod_consts[31];
            assert(tmp_eval_call_5__source == NULL);
            Py_INCREF(tmp_assign_source_43);
            tmp_eval_call_5__source = tmp_assign_source_43;
        }
        // Tried code:
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_operand_name_5;
            PyObject *tmp_isinstance_inst_5;
            PyObject *tmp_isinstance_cls_5;
            CHECK_OBJECT(tmp_eval_call_5__source);
            tmp_isinstance_inst_5 = tmp_eval_call_5__source;
            tmp_isinstance_cls_5 = mod_consts[18];
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_5;
            }
            tmp_operand_name_5 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_5;
            }
            tmp_condition_result_25 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_name_5;
            PyObject *tmp_expression_name_7;
            PyObject *tmp_args_name_5;
            bool tmp_condition_result_26;
            PyObject *tmp_compexpr_left_21;
            PyObject *tmp_compexpr_right_21;
            PyObject *tmp_type_arg_5;
            CHECK_OBJECT(tmp_eval_call_5__source);
            tmp_expression_name_7 = tmp_eval_call_5__source;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[19]);
            if (tmp_called_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_5;
            }
            CHECK_OBJECT(tmp_eval_call_5__source);
            tmp_type_arg_5 = tmp_eval_call_5__source;
            tmp_compexpr_left_21 = BUILTIN_TYPE1(tmp_type_arg_5);
            assert(!(tmp_compexpr_left_21 == NULL));
            tmp_compexpr_right_21 = (PyObject *)&PyBytes_Type;
            tmp_condition_result_26 = (tmp_compexpr_left_21 == tmp_compexpr_right_21) ? true : false;
            Py_DECREF(tmp_compexpr_left_21);
            if (tmp_condition_result_26 != false) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_args_name_5 = mod_consts[20];
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_args_name_5 = mod_consts[21];
            condexpr_end_10:;
            frame_acc8e76a549bb844f0de52cc6cbcf5c8->m_frame.f_lineno = 31;
            tmp_assign_source_44 = CALL_FUNCTION_WITH_POSARGS(tmp_called_name_5, tmp_args_name_5);
            Py_DECREF(tmp_called_name_5);
            if (tmp_assign_source_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_eval_call_5__source;
                tmp_eval_call_5__source = tmp_assign_source_44;
                Py_XDECREF(old);
            }

        }
        branch_no_16:;
        {
            PyObject *tmp_eval_source_5;
            PyObject *tmp_eval_globals_5;
            PyObject *tmp_eval_locals_5;
            PyObject *tmp_eval_compiled_5;
            CHECK_OBJECT(tmp_eval_call_5__source);
            tmp_eval_source_5 = tmp_eval_call_5__source;
            CHECK_OBJECT(tmp_eval_call_5__globals);
            tmp_eval_globals_5 = tmp_eval_call_5__globals;
            CHECK_OBJECT(tmp_eval_call_5__locals);
            tmp_eval_locals_5 = tmp_eval_call_5__locals;
            tmp_eval_compiled_5 = COMPILE_CODE(tmp_eval_source_5, mod_consts[22], mod_consts[23], NULL, NULL, NULL);
            if (tmp_eval_compiled_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_5;
            }
            tmp_assign_source_38 = EVAL_CODE(tmp_eval_compiled_5, tmp_eval_globals_5, tmp_eval_locals_5);
            Py_DECREF(tmp_eval_compiled_5);
            if (tmp_assign_source_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_5;
            }
            goto try_return_handler_5;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_eval_call_5__globals);
        Py_DECREF(tmp_eval_call_5__globals);
        tmp_eval_call_5__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_5__locals);
        Py_DECREF(tmp_eval_call_5__locals);
        tmp_eval_call_5__locals = NULL;
        Py_XDECREF(tmp_eval_call_5__source);
        tmp_eval_call_5__source = NULL;

        goto outline_result_5;
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

        CHECK_OBJECT(tmp_eval_call_5__globals);
        Py_DECREF(tmp_eval_call_5__globals);
        tmp_eval_call_5__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_5__locals);
        Py_DECREF(tmp_eval_call_5__locals);
        tmp_eval_call_5__locals = NULL;
        Py_XDECREF(tmp_eval_call_5__source);
        tmp_eval_call_5__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_45;
        {
            PyObject *tmp_assign_source_46;
            tmp_assign_source_46 = Py_None;
            assert(tmp_eval_call_6__globals == NULL);
            Py_INCREF(tmp_assign_source_46);
            tmp_eval_call_6__globals = tmp_assign_source_46;
        }
        {
            PyObject *tmp_assign_source_47;
            tmp_assign_source_47 = Py_None;
            assert(tmp_eval_call_6__locals == NULL);
            Py_INCREF(tmp_assign_source_47);
            tmp_eval_call_6__locals = tmp_assign_source_47;
        }
        {
            bool tmp_condition_result_27;
            PyObject *tmp_compexpr_left_22;
            PyObject *tmp_compexpr_right_22;
            CHECK_OBJECT(tmp_eval_call_6__locals);
            tmp_compexpr_left_22 = tmp_eval_call_6__locals;
            tmp_compexpr_right_22 = Py_None;
            tmp_condition_result_27 = (tmp_compexpr_left_22 == tmp_compexpr_right_22) ? true : false;
            if (tmp_condition_result_27 != false) {
                goto branch_yes_17;
            } else {
                goto branch_no_17;
            }
        }
        branch_yes_17:;
        {
            PyObject *tmp_assign_source_48;
            bool tmp_condition_result_28;
            PyObject *tmp_compexpr_left_23;
            PyObject *tmp_compexpr_right_23;
            CHECK_OBJECT(tmp_eval_call_6__globals);
            tmp_compexpr_left_23 = tmp_eval_call_6__globals;
            tmp_compexpr_right_23 = Py_None;
            tmp_condition_result_28 = (tmp_compexpr_left_23 == tmp_compexpr_right_23) ? true : false;
            if (tmp_condition_result_28 != false) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_assign_source_48 = (PyObject *)moduledict_gi$_compat;
            goto condexpr_end_11;
            condexpr_false_11:;
            CHECK_OBJECT(tmp_eval_call_6__globals);
            tmp_assign_source_48 = tmp_eval_call_6__globals;
            condexpr_end_11:;
            {
                PyObject *old = tmp_eval_call_6__locals;
                assert(old != NULL);
                tmp_eval_call_6__locals = tmp_assign_source_48;
                Py_INCREF(tmp_eval_call_6__locals);
                Py_DECREF(old);
            }

        }
        branch_no_17:;
        {
            bool tmp_condition_result_29;
            PyObject *tmp_compexpr_left_24;
            PyObject *tmp_compexpr_right_24;
            CHECK_OBJECT(tmp_eval_call_6__globals);
            tmp_compexpr_left_24 = tmp_eval_call_6__globals;
            tmp_compexpr_right_24 = Py_None;
            tmp_condition_result_29 = (tmp_compexpr_left_24 == tmp_compexpr_right_24) ? true : false;
            if (tmp_condition_result_29 != false) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        {
            PyObject *tmp_assign_source_49;
            tmp_assign_source_49 = (PyObject *)moduledict_gi$_compat;
            {
                PyObject *old = tmp_eval_call_6__globals;
                assert(old != NULL);
                tmp_eval_call_6__globals = tmp_assign_source_49;
                Py_INCREF(tmp_eval_call_6__globals);
                Py_DECREF(old);
            }

        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_50;
            tmp_assign_source_50 = mod_consts[32];
            assert(tmp_eval_call_6__source == NULL);
            Py_INCREF(tmp_assign_source_50);
            tmp_eval_call_6__source = tmp_assign_source_50;
        }
        // Tried code:
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_operand_name_6;
            PyObject *tmp_isinstance_inst_6;
            PyObject *tmp_isinstance_cls_6;
            CHECK_OBJECT(tmp_eval_call_6__source);
            tmp_isinstance_inst_6 = tmp_eval_call_6__source;
            tmp_isinstance_cls_6 = mod_consts[18];
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_6, tmp_isinstance_cls_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_6;
            }
            tmp_operand_name_6 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_6;
            }
            tmp_condition_result_30 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto branch_yes_19;
            } else {
                goto branch_no_19;
            }
        }
        branch_yes_19:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_name_6;
            PyObject *tmp_expression_name_8;
            PyObject *tmp_args_name_6;
            bool tmp_condition_result_31;
            PyObject *tmp_compexpr_left_25;
            PyObject *tmp_compexpr_right_25;
            PyObject *tmp_type_arg_6;
            CHECK_OBJECT(tmp_eval_call_6__source);
            tmp_expression_name_8 = tmp_eval_call_6__source;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[19]);
            if (tmp_called_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_6;
            }
            CHECK_OBJECT(tmp_eval_call_6__source);
            tmp_type_arg_6 = tmp_eval_call_6__source;
            tmp_compexpr_left_25 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_compexpr_left_25 == NULL));
            tmp_compexpr_right_25 = (PyObject *)&PyBytes_Type;
            tmp_condition_result_31 = (tmp_compexpr_left_25 == tmp_compexpr_right_25) ? true : false;
            Py_DECREF(tmp_compexpr_left_25);
            if (tmp_condition_result_31 != false) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_args_name_6 = mod_consts[20];
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_args_name_6 = mod_consts[21];
            condexpr_end_12:;
            frame_acc8e76a549bb844f0de52cc6cbcf5c8->m_frame.f_lineno = 32;
            tmp_assign_source_51 = CALL_FUNCTION_WITH_POSARGS(tmp_called_name_6, tmp_args_name_6);
            Py_DECREF(tmp_called_name_6);
            if (tmp_assign_source_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_eval_call_6__source;
                tmp_eval_call_6__source = tmp_assign_source_51;
                Py_XDECREF(old);
            }

        }
        branch_no_19:;
        {
            PyObject *tmp_eval_source_6;
            PyObject *tmp_eval_globals_6;
            PyObject *tmp_eval_locals_6;
            PyObject *tmp_eval_compiled_6;
            CHECK_OBJECT(tmp_eval_call_6__source);
            tmp_eval_source_6 = tmp_eval_call_6__source;
            CHECK_OBJECT(tmp_eval_call_6__globals);
            tmp_eval_globals_6 = tmp_eval_call_6__globals;
            CHECK_OBJECT(tmp_eval_call_6__locals);
            tmp_eval_locals_6 = tmp_eval_call_6__locals;
            tmp_eval_compiled_6 = COMPILE_CODE(tmp_eval_source_6, mod_consts[22], mod_consts[23], NULL, NULL, NULL);
            if (tmp_eval_compiled_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_6;
            }
            tmp_assign_source_45 = EVAL_CODE(tmp_eval_compiled_6, tmp_eval_globals_6, tmp_eval_locals_6);
            Py_DECREF(tmp_eval_compiled_6);
            if (tmp_assign_source_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_6;
            }
            goto try_return_handler_6;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_eval_call_6__globals);
        Py_DECREF(tmp_eval_call_6__globals);
        tmp_eval_call_6__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_6__locals);
        Py_DECREF(tmp_eval_call_6__locals);
        tmp_eval_call_6__locals = NULL;
        Py_XDECREF(tmp_eval_call_6__source);
        tmp_eval_call_6__source = NULL;

        goto outline_result_6;
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

        CHECK_OBJECT(tmp_eval_call_6__globals);
        Py_DECREF(tmp_eval_call_6__globals);
        tmp_eval_call_6__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_6__locals);
        Py_DECREF(tmp_eval_call_6__locals);
        tmp_eval_call_6__locals = NULL;
        Py_XDECREF(tmp_eval_call_6__source);
        tmp_eval_call_6__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_52;
        {
            PyObject *tmp_assign_source_53;
            tmp_assign_source_53 = Py_None;
            assert(tmp_eval_call_7__globals == NULL);
            Py_INCREF(tmp_assign_source_53);
            tmp_eval_call_7__globals = tmp_assign_source_53;
        }
        {
            PyObject *tmp_assign_source_54;
            tmp_assign_source_54 = Py_None;
            assert(tmp_eval_call_7__locals == NULL);
            Py_INCREF(tmp_assign_source_54);
            tmp_eval_call_7__locals = tmp_assign_source_54;
        }
        {
            bool tmp_condition_result_32;
            PyObject *tmp_compexpr_left_26;
            PyObject *tmp_compexpr_right_26;
            CHECK_OBJECT(tmp_eval_call_7__locals);
            tmp_compexpr_left_26 = tmp_eval_call_7__locals;
            tmp_compexpr_right_26 = Py_None;
            tmp_condition_result_32 = (tmp_compexpr_left_26 == tmp_compexpr_right_26) ? true : false;
            if (tmp_condition_result_32 != false) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
        }
        branch_yes_20:;
        {
            PyObject *tmp_assign_source_55;
            bool tmp_condition_result_33;
            PyObject *tmp_compexpr_left_27;
            PyObject *tmp_compexpr_right_27;
            CHECK_OBJECT(tmp_eval_call_7__globals);
            tmp_compexpr_left_27 = tmp_eval_call_7__globals;
            tmp_compexpr_right_27 = Py_None;
            tmp_condition_result_33 = (tmp_compexpr_left_27 == tmp_compexpr_right_27) ? true : false;
            if (tmp_condition_result_33 != false) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            tmp_assign_source_55 = (PyObject *)moduledict_gi$_compat;
            goto condexpr_end_13;
            condexpr_false_13:;
            CHECK_OBJECT(tmp_eval_call_7__globals);
            tmp_assign_source_55 = tmp_eval_call_7__globals;
            condexpr_end_13:;
            {
                PyObject *old = tmp_eval_call_7__locals;
                assert(old != NULL);
                tmp_eval_call_7__locals = tmp_assign_source_55;
                Py_INCREF(tmp_eval_call_7__locals);
                Py_DECREF(old);
            }

        }
        branch_no_20:;
        {
            bool tmp_condition_result_34;
            PyObject *tmp_compexpr_left_28;
            PyObject *tmp_compexpr_right_28;
            CHECK_OBJECT(tmp_eval_call_7__globals);
            tmp_compexpr_left_28 = tmp_eval_call_7__globals;
            tmp_compexpr_right_28 = Py_None;
            tmp_condition_result_34 = (tmp_compexpr_left_28 == tmp_compexpr_right_28) ? true : false;
            if (tmp_condition_result_34 != false) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        {
            PyObject *tmp_assign_source_56;
            tmp_assign_source_56 = (PyObject *)moduledict_gi$_compat;
            {
                PyObject *old = tmp_eval_call_7__globals;
                assert(old != NULL);
                tmp_eval_call_7__globals = tmp_assign_source_56;
                Py_INCREF(tmp_eval_call_7__globals);
                Py_DECREF(old);
            }

        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_57;
            tmp_assign_source_57 = mod_consts[33];
            assert(tmp_eval_call_7__source == NULL);
            Py_INCREF(tmp_assign_source_57);
            tmp_eval_call_7__source = tmp_assign_source_57;
        }
        // Tried code:
        {
            nuitka_bool tmp_condition_result_35;
            PyObject *tmp_operand_name_7;
            PyObject *tmp_isinstance_inst_7;
            PyObject *tmp_isinstance_cls_7;
            CHECK_OBJECT(tmp_eval_call_7__source);
            tmp_isinstance_inst_7 = tmp_eval_call_7__source;
            tmp_isinstance_cls_7 = mod_consts[18];
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_7, tmp_isinstance_cls_7);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_7;
            }
            tmp_operand_name_7 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_7);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_7;
            }
            tmp_condition_result_35 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
                goto branch_yes_22;
            } else {
                goto branch_no_22;
            }
        }
        branch_yes_22:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_name_7;
            PyObject *tmp_expression_name_9;
            PyObject *tmp_args_name_7;
            bool tmp_condition_result_36;
            PyObject *tmp_compexpr_left_29;
            PyObject *tmp_compexpr_right_29;
            PyObject *tmp_type_arg_7;
            CHECK_OBJECT(tmp_eval_call_7__source);
            tmp_expression_name_9 = tmp_eval_call_7__source;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[19]);
            if (tmp_called_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_7;
            }
            CHECK_OBJECT(tmp_eval_call_7__source);
            tmp_type_arg_7 = tmp_eval_call_7__source;
            tmp_compexpr_left_29 = BUILTIN_TYPE1(tmp_type_arg_7);
            assert(!(tmp_compexpr_left_29 == NULL));
            tmp_compexpr_right_29 = (PyObject *)&PyBytes_Type;
            tmp_condition_result_36 = (tmp_compexpr_left_29 == tmp_compexpr_right_29) ? true : false;
            Py_DECREF(tmp_compexpr_left_29);
            if (tmp_condition_result_36 != false) {
                goto condexpr_true_14;
            } else {
                goto condexpr_false_14;
            }
            condexpr_true_14:;
            tmp_args_name_7 = mod_consts[20];
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_args_name_7 = mod_consts[21];
            condexpr_end_14:;
            frame_acc8e76a549bb844f0de52cc6cbcf5c8->m_frame.f_lineno = 33;
            tmp_assign_source_58 = CALL_FUNCTION_WITH_POSARGS(tmp_called_name_7, tmp_args_name_7);
            Py_DECREF(tmp_called_name_7);
            if (tmp_assign_source_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_eval_call_7__source;
                tmp_eval_call_7__source = tmp_assign_source_58;
                Py_XDECREF(old);
            }

        }
        branch_no_22:;
        {
            PyObject *tmp_eval_source_7;
            PyObject *tmp_eval_globals_7;
            PyObject *tmp_eval_locals_7;
            PyObject *tmp_eval_compiled_7;
            CHECK_OBJECT(tmp_eval_call_7__source);
            tmp_eval_source_7 = tmp_eval_call_7__source;
            CHECK_OBJECT(tmp_eval_call_7__globals);
            tmp_eval_globals_7 = tmp_eval_call_7__globals;
            CHECK_OBJECT(tmp_eval_call_7__locals);
            tmp_eval_locals_7 = tmp_eval_call_7__locals;
            tmp_eval_compiled_7 = COMPILE_CODE(tmp_eval_source_7, mod_consts[22], mod_consts[23], NULL, NULL, NULL);
            if (tmp_eval_compiled_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_7;
            }
            tmp_assign_source_52 = EVAL_CODE(tmp_eval_compiled_7, tmp_eval_globals_7, tmp_eval_locals_7);
            Py_DECREF(tmp_eval_compiled_7);
            if (tmp_assign_source_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_7;
            }
            goto try_return_handler_7;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_eval_call_7__globals);
        Py_DECREF(tmp_eval_call_7__globals);
        tmp_eval_call_7__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_7__locals);
        Py_DECREF(tmp_eval_call_7__locals);
        tmp_eval_call_7__locals = NULL;
        Py_XDECREF(tmp_eval_call_7__source);
        tmp_eval_call_7__source = NULL;

        goto outline_result_7;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_eval_call_7__globals);
        Py_DECREF(tmp_eval_call_7__globals);
        tmp_eval_call_7__globals = NULL;
        CHECK_OBJECT(tmp_eval_call_7__locals);
        Py_DECREF(tmp_eval_call_7__locals);
        tmp_eval_call_7__locals = NULL;
        Py_XDECREF(tmp_eval_call_7__source);
        tmp_eval_call_7__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_52);
    }
    {
        PyObject *tmp_outline_return_value_1;
        {
            PyObject *tmp_assign_source_59;
            tmp_assign_source_59 = Py_None;
            assert(tmp_exec_call_1__globals == NULL);
            Py_INCREF(tmp_assign_source_59);
            tmp_exec_call_1__globals = tmp_assign_source_59;
        }
        {
            PyObject *tmp_assign_source_60;
            tmp_assign_source_60 = Py_None;
            assert(tmp_exec_call_1__locals == NULL);
            Py_INCREF(tmp_assign_source_60);
            tmp_exec_call_1__locals = tmp_assign_source_60;
        }
        {
            bool tmp_condition_result_37;
            PyObject *tmp_compexpr_left_30;
            PyObject *tmp_compexpr_right_30;
            CHECK_OBJECT(tmp_exec_call_1__locals);
            tmp_compexpr_left_30 = tmp_exec_call_1__locals;
            tmp_compexpr_right_30 = Py_None;
            tmp_condition_result_37 = (tmp_compexpr_left_30 == tmp_compexpr_right_30) ? true : false;
            if (tmp_condition_result_37 != false) {
                goto branch_yes_23;
            } else {
                goto branch_no_23;
            }
        }
        branch_yes_23:;
        {
            PyObject *tmp_assign_source_61;
            bool tmp_condition_result_38;
            PyObject *tmp_compexpr_left_31;
            PyObject *tmp_compexpr_right_31;
            CHECK_OBJECT(tmp_exec_call_1__globals);
            tmp_compexpr_left_31 = tmp_exec_call_1__globals;
            tmp_compexpr_right_31 = Py_None;
            tmp_condition_result_38 = (tmp_compexpr_left_31 == tmp_compexpr_right_31) ? true : false;
            if (tmp_condition_result_38 != false) {
                goto condexpr_true_15;
            } else {
                goto condexpr_false_15;
            }
            condexpr_true_15:;
            tmp_assign_source_61 = (PyObject *)moduledict_gi$_compat;
            goto condexpr_end_15;
            condexpr_false_15:;
            CHECK_OBJECT(tmp_exec_call_1__globals);
            tmp_assign_source_61 = tmp_exec_call_1__globals;
            condexpr_end_15:;
            {
                PyObject *old = tmp_exec_call_1__locals;
                assert(old != NULL);
                tmp_exec_call_1__locals = tmp_assign_source_61;
                Py_INCREF(tmp_exec_call_1__locals);
                Py_DECREF(old);
            }

        }
        branch_no_23:;
        {
            bool tmp_condition_result_39;
            PyObject *tmp_compexpr_left_32;
            PyObject *tmp_compexpr_right_32;
            CHECK_OBJECT(tmp_exec_call_1__globals);
            tmp_compexpr_left_32 = tmp_exec_call_1__globals;
            tmp_compexpr_right_32 = Py_None;
            tmp_condition_result_39 = (tmp_compexpr_left_32 == tmp_compexpr_right_32) ? true : false;
            if (tmp_condition_result_39 != false) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        {
            PyObject *tmp_assign_source_62;
            tmp_assign_source_62 = (PyObject *)moduledict_gi$_compat;
            {
                PyObject *old = tmp_exec_call_1__globals;
                assert(old != NULL);
                tmp_exec_call_1__globals = tmp_assign_source_62;
                Py_INCREF(tmp_exec_call_1__globals);
                Py_DECREF(old);
            }

        }
        branch_no_24:;
        // Tried code:
        {
            PyObject *tmp_eval_source_8;
            PyObject *tmp_eval_globals_8;
            PyObject *tmp_eval_locals_8;
            PyObject *tmp_eval_compiled_8;
            tmp_eval_source_8 = mod_consts[34];
            CHECK_OBJECT(tmp_exec_call_1__globals);
            tmp_eval_globals_8 = tmp_exec_call_1__globals;
            CHECK_OBJECT(tmp_exec_call_1__locals);
            tmp_eval_locals_8 = tmp_exec_call_1__locals;
            tmp_eval_compiled_8 = COMPILE_CODE(tmp_eval_source_8, mod_consts[22], mod_consts[35], NULL, NULL, NULL);
            if (tmp_eval_compiled_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto try_except_handler_8;
            }
            tmp_outline_return_value_1 = EVAL_CODE(tmp_eval_compiled_8, tmp_eval_globals_8, tmp_eval_locals_8);
            Py_DECREF(tmp_eval_compiled_8);
            if (tmp_outline_return_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto try_except_handler_8;
            }
            goto try_return_handler_8;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_exec_call_1__globals);
        Py_DECREF(tmp_exec_call_1__globals);
        tmp_exec_call_1__globals = NULL;
        CHECK_OBJECT(tmp_exec_call_1__locals);
        Py_DECREF(tmp_exec_call_1__locals);
        tmp_exec_call_1__locals = NULL;
        goto outline_result_8;
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

        CHECK_OBJECT(tmp_exec_call_1__globals);
        Py_DECREF(tmp_exec_call_1__globals);
        tmp_exec_call_1__globals = NULL;
        CHECK_OBJECT(tmp_exec_call_1__locals);
        Py_DECREF(tmp_exec_call_1__locals);
        tmp_exec_call_1__locals = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_8:;
        Py_DECREF(tmp_outline_return_value_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = Py_True;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[36];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_gi$_compat;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[14];
        tmp_level_name_3 = mod_consts[11];
        frame_acc8e76a549bb844f0de52cc6cbcf5c8->m_frame.f_lineno = 39;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_gi$_compat,
                mod_consts[13],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_64 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[37];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_gi$_compat;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[16];
        tmp_level_name_4 = mod_consts[11];
        frame_acc8e76a549bb844f0de52cc6cbcf5c8->m_frame.f_lineno = 42;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_gi$_compat,
                mod_consts[15],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_65 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[15]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = (PyObject *)&PyLong_Type;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = (PyObject *)&PyUnicode_Type;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_5;
        frame_acc8e76a549bb844f0de52cc6cbcf5c8->m_frame.f_lineno = 50;
        tmp_import_name_from_5 = IMPORT_HARD_IMPORTLIB();
        assert(!(tmp_import_name_from_5 == NULL));
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_gi$_compat,
                mod_consts[31],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_70 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[31]);
        }

        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = (PyObject *)&PyRange_Type;
        UPDATE_STRING_DICT0(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;


        tmp_assign_source_72 = MAKE_FUNCTION_gi$_compat$$$function__1_lambda();

        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;


        tmp_assign_source_73 = MAKE_FUNCTION_gi$_compat$$$function__2_reraise();

        UPDATE_STRING_DICT1(moduledict_gi$_compat, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_73);
    }
    branch_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_acc8e76a549bb844f0de52cc6cbcf5c8);
#endif
    popFrameStack();

    assertFrameObject(frame_acc8e76a549bb844f0de52cc6cbcf5c8);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_acc8e76a549bb844f0de52cc6cbcf5c8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_acc8e76a549bb844f0de52cc6cbcf5c8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_acc8e76a549bb844f0de52cc6cbcf5c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_acc8e76a549bb844f0de52cc6cbcf5c8, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_gi$_compat;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

